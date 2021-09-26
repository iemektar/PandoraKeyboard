#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardES.h"



class PandoraKeyboardES_ : public DefaultKeyboardES
{
public:
    PandoraKeyboardES_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardES_ PandoraKeyboardES;
