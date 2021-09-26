#include "PandoraKeyboardNO.h"


PandoraKeyboardNO_::PandoraKeyboardNO_(void) {}

int PandoraKeyboardNO_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardNO_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardNO_ PandoraKeyboardNO;

