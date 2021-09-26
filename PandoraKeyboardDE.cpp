#include "PandoraKeyboardDE.h"


PandoraKeyboardDE_::PandoraKeyboardDE_(void) {}

int PandoraKeyboardDE_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardDE_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardDE_ PandoraKeyboardDE;

