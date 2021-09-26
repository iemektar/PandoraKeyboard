#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardDK.h"



class PandoraKeyboardDK_ : public DefaultKeyboardDK
{
public:
    PandoraKeyboardDK_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardDK_ PandoraKeyboardDK;
