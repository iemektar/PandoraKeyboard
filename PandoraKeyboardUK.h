#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardUK.h"



class PandoraKeyboardUK_ : public DefaultKeyboardUK
{
public:
    PandoraKeyboardUK_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardUK_ PandoraKeyboardUK;
