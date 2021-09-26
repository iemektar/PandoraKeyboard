#include "PandoraKeyboardES.h"


PandoraKeyboardES_::PandoraKeyboardES_(void) {}

int PandoraKeyboardES_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardES_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardES_ PandoraKeyboardES;

