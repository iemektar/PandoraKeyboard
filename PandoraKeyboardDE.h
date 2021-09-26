#include <Arduino.h>
#include "HID.h"
#include "HID-Settings.h"
#include "DefaultKeyboardDE.h"



class PandoraKeyboardDE_ : public DefaultKeyboardDE
{
public:
    PandoraKeyboardDE_(void);
    void wakeupHost(void);

    virtual inline int send(void) final;
};

extern PandoraKeyboardDE_ PandoraKeyboardDE;
