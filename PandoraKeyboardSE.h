#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardSE.h"



class PandoraKeyboardSE_ : public DefaultKeyboardSE
{
public:
    PandoraKeyboardSE_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardSE_ PandoraKeyboardSE;
