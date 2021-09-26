#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardIT.h"



class PandoraKeyboardIT_ : public DefaultKeyboardIT
{
public:
    PandoraKeyboardIT_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardIT_ PandoraKeyboardIT;
