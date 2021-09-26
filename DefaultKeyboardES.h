#pragma once

#include "KeyboardES.h"
#include "ConsumerAPI.h"

typedef union ATTRIBUTE_PACKED {
	// Low level key report: up to 6 keys and shift, ctrl etc at once
	uint8_t whole8[0];
	uint16_t whole16[0];
	uint32_t whole32[0];
	struct ATTRIBUTE_PACKED {
		uint8_t modifiers;
		uint8_t reserved;
		KeyboardKeycodeES keycodes[6];
	};
	uint8_t keys[8];
} HID_KeyboardReport_Data_tES;

class DefaultKeyboardES : public KeyboardES
{
public:
  // Add special consumer key API for the reserved byte
  inline size_t write(ConsumerKeycode k);
  inline size_t press(ConsumerKeycode k);
  inline size_t release(ConsumerKeycode k);
  inline size_t add(ConsumerKeycode k);
  inline size_t remove(ConsumerKeycode k);

  // Also use the base class functions
  // http://en.cppreference.com/w/cpp/language/using_declaration
  using KeyboardES::write;
  using KeyboardES::press;
  using KeyboardES::release;
  using KeyboardES::add;
  using KeyboardES::remove;

  // Implement adding/removing key functions
  inline virtual size_t removeAll(void) override;

  // Needs to be implemented in a lower level
  virtual int send(void) = 0;

protected:
  HID_KeyboardReport_Data_tES _keyReport;

private:
  inline virtual size_t set(KeyboardKeycodeES k, bool s) override;
};

// Implementation is inline
#include "DefaultKeyboardES.hpp"
