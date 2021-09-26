#pragma once

#include <Arduino.h>
#include "HID-Settings.h"
#include "LayoutPT.h"

class KeyboardPT : public Print
{
public:
  inline void begin(void);
  inline void end(void);
  
  // Raw Keycode API functions
  inline size_t write(KeyboardKeycodePT k);
  inline size_t press(KeyboardKeycodePT k);
  inline size_t release(KeyboardKeycodePT k);
  inline size_t remove(KeyboardKeycodePT k);
  inline size_t add(KeyboardKeycodePT k);
  inline size_t releaseAll(void);
  //press(uint8_t key, uint8_t modifier) TODO variadic template
  
  // Print API functions
  inline virtual size_t write(uint8_t k) override;
  inline size_t press(uint8_t k);
  inline size_t release(uint8_t k);
  inline size_t add(uint8_t k);
  inline size_t remove(uint8_t k);

  // Needs to be implemented in a lower level
  virtual size_t removeAll(void) = 0;
  virtual int send(void) = 0;

private:
  virtual size_t set(KeyboardKeycodePT k, bool s) = 0;
  inline size_t set(uint8_t k, bool s);
};


// Implementation is inline
#include "KeyboardPT.hpp"
