#include "PandoraKeyboardTR.h"


PandoraKeyboardTR_::PandoraKeyboardTR_(void) {}

int PandoraKeyboardTR_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardTR_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardTR_ PandoraKeyboardTR;

