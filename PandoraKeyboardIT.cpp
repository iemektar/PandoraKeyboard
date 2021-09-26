#include "PandoraKeyboardIT.h"


PandoraKeyboardIT_::PandoraKeyboardIT_(void) {}

int PandoraKeyboardIT_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardIT_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardIT_ PandoraKeyboardIT;

