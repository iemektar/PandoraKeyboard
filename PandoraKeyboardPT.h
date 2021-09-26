#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardPT.h"



class PandoraKeyboardPT_ : public DefaultKeyboardPT
{
public:
    PandoraKeyboardPT_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardPT_ PandoraKeyboardPT;
