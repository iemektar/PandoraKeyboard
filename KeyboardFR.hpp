#pragma once


void KeyboardFR::begin(void)
{
	// Force API to send a clean report.
	// This is important for and HID bridge where the receiver stays on,
	// while the sender is resetted.
	removeAll();
	send();
}


void KeyboardFR::end(void)
{
	releaseAll();
}


size_t KeyboardFR::write(KeyboardKeycodeFR k)
{	
	// Press and release key (if press was successfull)
	auto ret = press(k);
	if(ret){
		release(k);
	}
	return ret;
}


size_t KeyboardFR::press(KeyboardKeycodeFR k) 
{
	// Press key and send report to host
	auto ret = add(k);
	if(ret){
		send();
	}
	return ret;
}


size_t KeyboardFR::release(KeyboardKeycodeFR k) 
{
	// Release key and send report to host
	auto ret = remove(k);
	if(ret){
		send();
	}
	return ret;
}


size_t KeyboardFR::add(KeyboardKeycodeFR k) 
{
	// Add key to report
	return set(k, true);
}


size_t KeyboardFR::remove(KeyboardKeycodeFR k) 
{
	// Remove key from report
	return set(k, false);
}


size_t KeyboardFR::releaseAll(void)
{
	// Release all keys
	auto ret = removeAll();
	if(ret){
		send();
	}
	return ret;
}


size_t KeyboardFR::write(uint8_t k)
{	
	// Press and release key (if press was successfull)
	auto ret = press(k);
	if(ret){
		release(k);
	}
	return ret;
}


size_t KeyboardFR::press(uint8_t k) 
{
	// Press key and send report to host
	auto ret = add(k);
	if(ret){
		send();
	}
	return ret;
}


size_t KeyboardFR::release(uint8_t k) 
{
	// Release key and send report to host
	auto ret = remove(k);
	if(ret){
		send();
	}
	return ret;
}


size_t KeyboardFR::add(uint8_t k) 
{
	// Add key to report
	return set(k, true);
}


size_t KeyboardFR::remove(uint8_t k) 
{
	// Remove key from report
	return set(k, false);
}


size_t KeyboardFR::set(uint8_t k, bool s){
	// Ignore invalid input
	if(k >= sizeof(_asciimapFR)/sizeof(_asciimapFR[0])){
		setWriteError();
		return 0;
	}

	// Read key from ascii lookup table
	uint16_t key = pgm_read_word(_asciimapFR + k);
	auto ret = set(KeyboardKeycodeFR((uint8_t)(key & 0xFF)), s);
	
	// Only add modifier if keycode was successfully added before.
	// Always try to release modifier (if used).
	if(ret || !s){
		if (key & FR_MOD_LEFT_CTRL) {
			ret |= set(FR_KEY_LEFT_CTRL, s);
		}
		if (key & FR_MOD_LEFT_SHIFT) {
			ret |= set(FR_KEY_LEFT_SHIFT, s);
		}
		if (key & FR_MOD_LEFT_ALT) {
			ret |= set(FR_KEY_LEFT_ALT, s);
		}
		if (key & FR_MOD_LEFT_GUI) {
			ret |= set(FR_KEY_LEFT_GUI, s);
		}
		if (key & FR_MOD_RIGHT_CTRL) {
			ret |= set(FR_KEY_RIGHT_CTRL, s);
		}
		if (key & FR_MOD_RIGHT_SHIFT) {
			ret |= set(FR_KEY_RIGHT_SHIFT, s);
		}
		if (key & FR_MOD_RIGHT_ALT) {
			ret |= set(FR_KEY_RIGHT_ALT, s);
		}
		if (key & FR_MOD_RIGHT_GUI) {
			ret |= set(FR_KEY_RIGHT_GUI, s);
		}
	}
	

	return ret;
}

