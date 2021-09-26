
#pragma once


size_t DefaultKeyboardDK::set(KeyboardKeycodeDK k, bool s)
{
	// It's a modifier key
	if(k >= DK_KEY_LEFT_CTRL && k <= DK_KEY_RIGHT_GUI)
	{
		// Convert key into bitfield (0 - 7)
		k = KeyboardKeycodeDK(uint8_t(k) - uint8_t(DK_KEY_LEFT_CTRL));
		if(s){
			_keyReport.modifiers |= (1 << k);
		}
		else{
			_keyReport.modifiers &= ~(1 << k);
		}
		return 1;
	}
	// Its a normal key
	else{
		// get size of keycodes during compile time
		const uint8_t keycodesSize = sizeof(_keyReport.keycodes);

		// if we are adding an element to keycodes
		if (s){
			// iterate through the keycodes
			for (uint8_t i = 0; i < keycodesSize; i++)
			{
				auto key = _keyReport.keycodes[i];
				// if target key is found
				if (key == uint8_t(k)) {
					// do nothing and exit
					return 1;
				}
			}
			// iterate through the keycodes again, this only happens if no existing
			// keycodes matches k
			for (uint8_t i = 0; i < keycodesSize; i++)
			{
				auto key = _keyReport.keycodes[i];
				// if first instance of empty slot is found
				if (key == DK_KEY_RESERVED) {
					// change empty slot to k and exit
					_keyReport.keycodes[i] = k;
					return 1;
				}
			}
		} else { // we are removing k from keycodes
			// iterate through the keycodes
			for (uint8_t i = 0; i < keycodesSize; i++)
			{
				auto key = _keyReport.keycodes[i];
				// if target key is found
				if (key == k) {
					// remove target and exit
					_keyReport.keycodes[i] = DK_KEY_RESERVED;
					return 1;
				}
			}
		}
	}

	// No empty/pressed key was found
	return 0;
}

size_t DefaultKeyboardDK::removeAll(void)
{
	// Release all keys
	size_t ret = 0;
	for (uint8_t i = 0; i < sizeof(_keyReport.keys); i++)
	{
		// Is a key in the list or did we found an empty slot?
		if(_keyReport.keys[i]){
			ret++;
		}
		_keyReport.keys[i] = 0x00;
	}
	return ret;
}


size_t DefaultKeyboardDK::write(ConsumerKeycode k)
{
	// Press and release key (if press was successfull)
	auto ret = press(k);
	if(ret){
		release(k);
	}
	return ret;
}


size_t DefaultKeyboardDK::press(ConsumerKeycode k)
{
	// Press key and send report to host
	auto ret = add(k);
	if(ret){
		send();
	}
	return ret;
}


size_t DefaultKeyboardDK::release(ConsumerKeycode k)
{
	// Release key and send report to host
	auto ret = remove(k);
	if(ret){
		send();
	}
	return ret;
}


size_t DefaultKeyboardDK::add(ConsumerKeycode k)
{
	// No 2 byte keys are supported
	if(k > 0xFF){
		setWriteError();
		return 0;
	}

	// Place the key inside the reserved keyreport position.
	// This does not work on Windows.
	_keyReport.reserved = k;
	return 1;
}


size_t DefaultKeyboardDK::remove(ConsumerKeycode k)
{
	// No 2 byte keys are supported
	if(k > 0xFF){
		return 0;
	}

	// Always release the key, to make it simpler releasing a consumer key
	// without releasing all other normal keyboard keys.
	_keyReport.reserved = HID_CONSUMER_UNASSIGNED;
	return 1;
}
