#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "LayoutUS.h"
#include "DefaultKeyboardUS.h"



class PandoraKeyboardUS_ : public DefaultKeyboardUS
{
public:
    PandoraKeyboardUS_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardUS_ PandoraKeyboardUS;
