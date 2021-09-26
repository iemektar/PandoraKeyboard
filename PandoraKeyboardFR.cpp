#include "PandoraKeyboardFR.h"


PandoraKeyboardFR_::PandoraKeyboardFR_(void) {}

int PandoraKeyboardFR_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardFR_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardFR_ PandoraKeyboardFR;

