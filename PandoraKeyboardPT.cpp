#include "PandoraKeyboardPT.h"


PandoraKeyboardPT_::PandoraKeyboardPT_(void) {}

int PandoraKeyboardPT_::send(void)
{
	return HID().SendReport(HID_REPORTID_KEYBOARD, &_keyReport, sizeof(_keyReport));
}

void PandoraKeyboardPT_::wakeupHost(void){
#ifdef __AVR__
	USBDevice.wakeupHost();
#endif
}

PandoraKeyboardPT_ PandoraKeyboardPT;

