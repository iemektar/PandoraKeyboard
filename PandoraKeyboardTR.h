#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardTR.h"



class PandoraKeyboardTR_ : public DefaultKeyboardTR
{
public:
    PandoraKeyboardTR_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardTR_ PandoraKeyboardTR;
