#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardNO.h"



class PandoraKeyboardNO_ : public DefaultKeyboardNO
{
public:
    PandoraKeyboardNO_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardNO_ PandoraKeyboardNO;
