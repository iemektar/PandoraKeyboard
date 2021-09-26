#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardFR.h"



class PandoraKeyboardFR_ : public DefaultKeyboardFR
{
public:
    PandoraKeyboardFR_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardFR_ PandoraKeyboardFR;
