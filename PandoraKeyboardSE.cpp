#include "PandoraKeyboardSE.h"


PandoraKeyboardSE_::PandoraKeyboardSE_(void) {}

int PandoraKeyboardSE_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardSE_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardSE_ PandoraKeyboardSE;

