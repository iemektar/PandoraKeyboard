#include "PandoraKeyboardUK.h"


PandoraKeyboardUK_::PandoraKeyboardUK_(void) {}

int PandoraKeyboardUK_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardUK_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardUK_ PandoraKeyboardUK;

