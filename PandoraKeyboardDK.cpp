#include "PandoraKeyboardDK.h"


PandoraKeyboardDK_::PandoraKeyboardDK_(void) {}

int PandoraKeyboardDK_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardDK_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardDK_ PandoraKeyboardDK;

