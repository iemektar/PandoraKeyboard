enum KeyboardModsTR : uint16_t {
    TR_MOD_LEFT_CTRL       = (1 <<  8),
    TR_MOD_LEFT_SHIFT      = (1 <<  9),
    TR_MOD_LEFT_ALT        = (1 << 10),
    TR_MOD_LEFT_GUI        = (1 << 11),
    TR_MOD_RIGHT_CTRL      = (1 << 12),
    TR_MOD_RIGHT_SHIFT     = (1 << 13),
    TR_MOD_RIGHT_ALT       = (1 << 14),
    TR_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};


// Hut1_12v2.pdf

enum KeyboardKeycodeTR : uint8_t {
    TR_KEY_RESERVED        =  0,
    TR_KEY_ERROR_ROLLOVER  =  1,
    TR_KEY_POST_FAIL       =  2,
    TR_KEY_ERROR_UNDEFINED =  3,
    TR_KEY_A               =  4,
    TR_KEY_B               =  5,
    TR_KEY_C               =  6,
    TR_KEY_D               =  7,
    TR_KEY_E               =  8,
    TR_KEY_F               =  9,
    TR_KEY_G               = 10,
    TR_KEY_H               = 11,
    TR_KEY_I               = 12,
    TR_KEY_J               = 13,
    TR_KEY_K               = 14,
    TR_KEY_L               = 15,
    TR_KEY_M               = 16,
    TR_KEY_N               = 17,
    TR_KEY_O               = 18,
    TR_KEY_P               = 19,
    TR_KEY_Q               = 20,
    TR_KEY_R               = 21,
    TR_KEY_S               = 22,
    TR_KEY_T               = 23,
    TR_KEY_U               = 24,
    TR_KEY_V               = 25,
    TR_KEY_W               = 26,
    TR_KEY_X               = 27,
    TR_KEY_Y               = 28,
    TR_KEY_Z               = 29,
    TR_KEY_1               = 30,
    TR_KEY_2               = 31,
    TR_KEY_3               = 32,
    TR_KEY_4               = 33,
    TR_KEY_5               = 34,
    TR_KEY_6               = 35,
    TR_KEY_7               = 36,
    TR_KEY_8               = 37,
    TR_KEY_9               = 38,
    TR_KEY_0               = 39,
    TR_KEY_ENTER           = 40,
    TR_KEY_RETURN          = 40, // Alias
    TR_KEY_ESC             = 41,
    TR_KEY_BACKSPACE       = 42,
    TR_KEY_TAB             = 43,
    TR_KEY_SPACE           = 44,
    TR_KEY_MINUS           = 45,
    TR_KEY_EQUAL           = 46,
    TR_KEY_LEFT_BRACE      = 47,
    TR_KEY_RIGHT_BRACE     = 48,
    TR_KEY_BACKSLASH       = 49,
    TR_KEY_NON_US_NUM      = 50,
    TR_KEY_SEMICOLON       = 51,
    TR_KEY_QUOTE           = 52,
    TR_KEY_TILDE           = 53,
    TR_KEY_COMMA           = 54,
    TR_KEY_PERIOD          = 55,
    TR_KEY_SLASH           = 56,
    TR_KEY_CAPS_LOCK       = 0x39,
    TR_KEY_F1              = 0x3A,
    TR_KEY_F2              = 0x3B,
    TR_KEY_F3              = 0x3C,
    TR_KEY_F4              = 0x3D,
    TR_KEY_F5              = 0x3E,
    TR_KEY_F6              = 0x3F,
    TR_KEY_F7              = 0x40,
    TR_KEY_F8              = 0x41,
    TR_KEY_F9              = 0x42,
    TR_KEY_F10             = 0x43,
    TR_KEY_F11             = 0x44,
    TR_KEY_F12             = 0x45,
    TR_KEY_PRINT           = 0x46,
    TR_KEY_PRINTSCREEN     = 0x46, // Alias
    TR_KEY_SCROLL_LOCK     = 0x47,
    TR_KEY_PAUSE           = 0x48,
    TR_KEY_INSERT          = 0x49,
    TR_KEY_HOME            = 0x4A,
    TR_KEY_PAGE_UP         = 0x4B,
    TR_KEY_DELETE          = 0x4C,
    TR_KEY_END             = 0x4D,
    TR_KEY_PAGE_DOWN       = 0x4E,
    TR_KEY_RIGHT_ARROW     = 0x4F,
    TR_KEY_LEFT_ARROW      = 0x50,
    TR_KEY_DOWN_ARROW      = 0x51,
    TR_KEY_UP_ARROW        = 0x52,
    TR_KEY_RIGHT           = 0x4F, // Alias
    TR_KEY_LEFT            = 0x50, // Alias
    TR_KEY_DOWN            = 0x51, // Alias
    TR_KEY_UP              = 0x52, // Alias
    TR_KEY_NUM_LOCK        = 0x53,
    TR_KEYPAD_DIVIDE       = 0x54,
    TR_KEYPAD_MULTIPLY     = 0x55,
    TR_KEYPAD_SUBTRACT     = 0x56,
    TR_KEYPAD_ADD          = 0x57,
    TR_KEYPAD_ENTER        = 0x58,
    TR_KEYPAD_1            = 0x59,
    TR_KEYPAD_2            = 0x5A,
    TR_KEYPAD_3            = 0x5B,
    TR_KEYPAD_4            = 0x5C,
    TR_KEYPAD_5            = 0x5D,
    TR_KEYPAD_6            = 0x5E,
    TR_KEYPAD_7            = 0x5F,
    TR_KEYPAD_8            = 0x60,
    TR_KEYPAD_9            = 0x61,
    TR_KEYPAD_0            = 0x62,
    TR_KEYPAD_DOT          = 0x63,
    TR_KEY_NON_US          = 0x64,
    TR_KEY_APPLICATION     = 0x65, // Context menu/right click
    TR_KEY_MENU            = 0x65,
    TR_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    TR_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    TR_KEY_F13             = 0x68, // Tools (Ubunutu)
    TR_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    TR_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    TR_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    TR_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    TR_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    TR_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    TR_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    TR_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    TR_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    TR_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    TR_KEY_F24             = 0x73, // Disabled (Ubuntu)
    TR_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    TR_KEY_HELP            = 0x75, // Help (Ubuntu)
    TR_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    TR_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    TR_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    TR_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    TR_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    TR_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    TR_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    TR_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    TR_KEY_FIND            = 0x7E, // Find (Ubuntu)
    TR_KEY_MUTE            = 0x7F,
    TR_KEY_VOLUME_MUTE     = 0x7F, // Alias
    TR_KEY_VOLUME_UP       = 0x80,
    TR_KEY_VOLUME_DOWN     = 0x81,
    TR_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    TR_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    TR_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    TR_KEYPAD_COMMA            = 0x85, // .
    TR_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    TR_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    TR_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    TR_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    TR_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    TR_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    TR_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    TR_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    TR_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    TR_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    TR_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    TR_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    TR_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    TR_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    TR_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    TR_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    TR_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    TR_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    TR_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    TR_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    TR_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    TR_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    TR_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    TR_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    TR_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    TR_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    TR_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    TR_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    TR_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    TR_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    TR_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    TR_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    TR_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    TR_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    TR_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    TR_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    TR_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    TR_KEYPAD_LEFT_BRACE           = 0xB6, // (
    TR_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    TR_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    TR_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    TR_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    TR_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    TR_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    TR_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    TR_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    TR_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    TR_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    TR_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    TR_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    TR_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    TR_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    TR_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    TR_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    TR_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    TR_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    TR_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    TR_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    TR_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    TR_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    TR_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    TR_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    TR_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    TR_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    TR_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    TR_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    TR_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    TR_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    TR_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    TR_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    TR_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    TR_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    TR_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    TR_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    TR_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    TR_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    TR_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    TR_KEY_LEFT_CTRL           = 0xE0,
    TR_KEY_LEFT_SHIFT          = 0xE1,
    TR_KEY_LEFT_ALT            = 0xE2,
    TR_KEY_LEFT_GUI            = 0xE3,
    TR_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    TR_KEY_RIGHT_CTRL          = 0xE4,
    TR_KEY_RIGHT_SHIFT         = 0xE5,
    TR_KEY_RIGHT_ALT           = 0xE6,
    TR_KEY_RIGHT_GUI           = 0xE7,
    TR_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    TR_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    TR_HID_KEYBOARD_POST_FAIL  = 0x02,
    TR_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    TR_HID_KEYBOARD_A_AND_A    = 0x04,
    TR_HID_KEYBOARD_B_AND_B    = 0x05,
    TR_HID_KEYBOARD_C_AND_C    = 0x06,
    TR_HID_KEYBOARD_D_AND_D    = 0x07,
    TR_HID_KEYBOARD_E_AND_E    = 0x08,
    TR_HID_KEYBOARD_F_AND_F    = 0x09,
    TR_HID_KEYBOARD_G_AND_G    = 0x0A,
    TR_HID_KEYBOARD_H_AND_H    = 0x0B,
    TR_HID_KEYBOARD_I_AND_I    = 0x0C,
    TR_HID_KEYBOARD_J_AND_J    = 0x0D,
    TR_HID_KEYBOARD_K_AND_K    = 0x0E,
    TR_HID_KEYBOARD_L_AND_L    = 0x0F,
    TR_HID_KEYBOARD_M_AND_M    = 0x10,
    TR_HID_KEYBOARD_N_AND_N    = 0x11,
    TR_HID_KEYBOARD_O_AND_O    = 0x12,
    TR_HID_KEYBOARD_P_AND_P    = 0x13,
    TR_HID_KEYBOARD_Q_AND_Q    = 0x14,
    TR_HID_KEYBOARD_R_AND_R    = 0x15,
    TR_HID_KEYBOARD_S_AND_S    = 0x16,
    TR_HID_KEYBOARD_T_AND_T    = 0x17,
    TR_HID_KEYBOARD_U_AND_U    = 0x18,
    TR_HID_KEYBOARD_V_AND_V    = 0x19,
    TR_HID_KEYBOARD_W_AND_W    = 0x1A,
    TR_HID_KEYBOARD_X_AND_X    = 0x1B,
    TR_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    TR_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    TR_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    TR_HID_KEYBOARD_2_AND_AT   = 0x1F,
    TR_HID_KEYBOARD_3_AND_POUND    = 0x20,
    TR_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    TR_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    TR_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    TR_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    TR_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    TR_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    TR_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    TR_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    TR_HID_KEYBOARD_ESCAPE = 0x29,
    TR_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    TR_HID_KEYBOARD_TAB    = 0x2B,
    TR_HID_KEYBOARD_SPACEBAR   = 0x2C,
    TR_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    TR_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    TR_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    TR_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    TR_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    TR_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    TR_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    TR_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    TR_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    TR_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    TR_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    TR_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    TR_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    TR_HID_KEYBOARD_F1 = 0x3A,
    TR_HID_KEYBOARD_F2 = 0x3B,
    TR_HID_KEYBOARD_F3 = 0x3C,
    TR_HID_KEYBOARD_F4 = 0x3D,
    TR_HID_KEYBOARD_F5 = 0x3E,
    TR_HID_KEYBOARD_F6 = 0x3F,
    TR_HID_KEYBOARD_F7 = 0x40,
    TR_HID_KEYBOARD_F8 = 0x41,
    TR_HID_KEYBOARD_F9 = 0x42,
    TR_HID_KEYBOARD_F10    = 0x43,
    TR_HID_KEYBOARD_F11    = 0x44,
    TR_HID_KEYBOARD_F12    = 0x45,
    TR_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    TR_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    TR_HID_KEYBOARD_PAUSE  = 0x48,
    TR_HID_KEYBOARD_INSERT = 0x49,
    TR_HID_KEYBOARD_HOME   = 0x4A,
    TR_HID_KEYBOARD_PAGE_UP    = 0x4B,
    TR_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    TR_HID_KEYBOARD_END    = 0x4D,
    TR_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    TR_HID_KEYBOARD_RIGHTARROW = 0x4F,
    TR_HID_KEYBOARD_LEFTARROW  = 0x50,
    TR_HID_KEYBOARD_DOWNARROW  = 0x51,
    TR_HID_KEYBOARD_UPARROW    = 0x52,
    TR_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    TR_HID_KEYPAD_DIVIDE   = 0x54,
    TR_HID_KEYPAD_MULTIPLY = 0x55,
    TR_HID_KEYPAD_SUBTRACT = 0x56,
    TR_HID_KEYPAD_ADD  = 0x57,
    TR_HID_KEYPAD_ENTER    = 0x58,
    TR_HID_KEYPAD_1_AND_END    = 0x59,
    TR_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    TR_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    TR_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    TR_HID_KEYPAD_5    = 0x5D,
    TR_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    TR_HID_KEYPAD_7_AND_HOME   = 0x5F,
    TR_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    TR_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    TR_HID_KEYPAD_0_AND_INSERT = 0x62,
    TR_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    TR_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    TR_HID_KEYBOARD_APPLICATION    = 0x65,
    TR_HID_KEYBOARD_POWER  = 0x66,
    TR_HID_KEYPAD_EQUALS   = 0x67,
    TR_HID_KEYBOARD_F13    = 0x68,
    TR_HID_KEYBOARD_F14    = 0x69,
    TR_HID_KEYBOARD_F15    = 0x6A,
    TR_HID_KEYBOARD_F16    = 0x6B,
    TR_HID_KEYBOARD_F17    = 0x6C,
    TR_HID_KEYBOARD_F18    = 0x6D,
    TR_HID_KEYBOARD_F19    = 0x6E,
    TR_HID_KEYBOARD_F20    = 0x6F,
    TR_HID_KEYBOARD_F21    = 0x70,
    TR_HID_KEYBOARD_F22    = 0x71,
    TR_HID_KEYBOARD_F23    = 0x72,
    TR_HID_KEYBOARD_F24    = 0x73,
    TR_HID_KEYBOARD_EXECUTE    = 0x74,
    TR_HID_KEYBOARD_HELP   = 0x75,
    TR_HID_KEYBOARD_MENU   = 0x76,
    TR_HID_KEYBOARD_SELECT = 0x77,
    TR_HID_KEYBOARD_STOP   = 0x78,
    TR_HID_KEYBOARD_AGAIN  = 0x79,
    TR_HID_KEYBOARD_UNDO   = 0x7A,
    TR_HID_KEYBOARD_CUT    = 0x7B,
    TR_HID_KEYBOARD_COPY   = 0x7C,
    TR_HID_KEYBOARD_PASTE  = 0x7D,
    TR_HID_KEYBOARD_FIND   = 0x7E,
    TR_HID_KEYBOARD_MUTE   = 0x7F,
    TR_HID_KEYBOARD_VOLUME_UP  = 0x80,
    TR_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    TR_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    TR_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    TR_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    TR_HID_KEYPAD_COMMA    = 0x85,
    TR_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    TR_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    TR_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    TR_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    TR_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    TR_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    TR_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    TR_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    TR_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    TR_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    TR_HID_KEYBOARD_LANG1  = 0x90,
    TR_HID_KEYBOARD_LANG2  = 0x91,
    TR_HID_KEYBOARD_LANG3  = 0x92,
    TR_HID_KEYBOARD_LANG4  = 0x93,
    TR_HID_KEYBOARD_LANG5  = 0x94,
    TR_HID_KEYBOARD_LANG6  = 0x95,
    TR_HID_KEYBOARD_LANG7  = 0x96,
    TR_HID_KEYBOARD_LANG8  = 0x97,
    TR_HID_KEYBOARD_LANG9  = 0x98,
    TR_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    TR_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    TR_HID_KEYBOARD_CANCEL = 0x9B,
    TR_HID_KEYBOARD_CLEAR  = 0x9C,
    TR_HID_KEYBOARD_PRIOR  = 0x9D,
    TR_HID_KEYBOARD_RETURN = 0x9E,
    TR_HID_KEYBOARD_SEPARATOR  = 0x9F,
    TR_HID_KEYBOARD_OUT    = 0xA0,
    TR_HID_KEYBOARD_OPER   = 0xA1,
    TR_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    TR_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    TR_HID_KEYBOARD_EXSEL  = 0xA4,
    TR_HID_KEYPAD_00   = 0xB0,
    TR_HID_KEYPAD_000  = 0xB1,
    TR_HID_THOUSANDS_SEPARATOR = 0xB2,
    TR_HID_DECIMAL_SEPARATOR   = 0xB3,
    TR_HID_CURRENCY_UNIT   = 0xB4,
    TR_HID_CURRENCY_SUBUNIT    = 0xB5,
    TR_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    TR_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    TR_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    TR_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    TR_HID_KEYPAD_TAB  = 0xBA,
    TR_HID_KEYPAD_BACKSPACE    = 0xBB,
    TR_HID_KEYPAD_A    = 0xBC,
    TR_HID_KEYPAD_B    = 0xBD,
    TR_HID_KEYPAD_C    = 0xBE,
    TR_HID_KEYPAD_D    = 0xBF,
    TR_HID_KEYPAD_E    = 0xC0,
    TR_HID_KEYPAD_F    = 0xC1,
    TR_HID_KEYPAD_XOR  = 0xC2,
    TR_HID_KEYPAD_CARAT    = 0xC3,
    TR_HID_KEYPAD_PERCENT  = 0xC4,
    TR_HID_KEYPAD_LESS_THAN    = 0xC5,
    TR_HID_KEYPAD_GREATER_THAN = 0xC6,
    TR_HID_KEYPAD_AMPERSAND    = 0xC7,
    TR_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    TR_HID_KEYPAD_PIPE = 0xC9,
    TR_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    TR_HID_KEYPAD_COLON    = 0xCB,
    TR_HID_KEYPAD_POUND_SIGN   = 0xCC,
    TR_HID_KEYPAD_SPACE    = 0xCD,
    TR_HID_KEYPAD_AT_SIGN  = 0xCE,
    TR_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    TR_HID_KEYPAD_MEMORY_STORE = 0xD0,
    TR_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    TR_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    TR_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    TR_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    TR_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    TR_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    TR_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    TR_HID_KEYPAD_CLEAR    = 0xD8,
    TR_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    TR_HID_KEYPAD_BINARY   = 0xDA,
    TR_HID_KEYPAD_OCTAL    = 0xDB,
    TR_HID_KEYPAD_DECIMAL  = 0xDC,
    TR_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    TR_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    TR_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    TR_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    TR_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    TR_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    TR_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    TR_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    TR_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};

static const uint16_t _asciimapTR[] PROGMEM =
{
    TR_KEY_RESERVED,                       // NUL
    TR_KEY_RESERVED,                       // SOH
    TR_KEY_RESERVED,                       // STX
    TR_KEY_RESERVED,                       // ETX
    TR_KEY_RESERVED,                       // EOT
    TR_KEY_RESERVED,                       // ENQ
    TR_KEY_RESERVED,                       // ACK
    TR_KEY_RESERVED,                       // BEL
    TR_KEY_BACKSPACE,                      // BS   Backspace
    TR_KEY_TAB,                            // TAB  Tab
    TR_KEY_ENTER,                          // LF   Enter
    TR_KEY_RESERVED,                       // VT
    TR_KEY_RESERVED,                       // FF
    TR_KEY_RESERVED,                       // CR
    TR_KEY_RESERVED,                       // SO
    TR_KEY_RESERVED,                       // SI
    TR_KEY_RESERVED,                       // DEL
    TR_KEY_RESERVED,                       // DC1
    TR_KEY_RESERVED,                       // DC2
    TR_KEY_RESERVED,                       // DC3
    TR_KEY_RESERVED,                       // DC4
    TR_KEY_RESERVED,                       // NAK
    TR_KEY_RESERVED,                       // SYN
    TR_KEY_RESERVED,                       // ETB
    TR_KEY_RESERVED,                       // CAN
    TR_KEY_RESERVED,                       // EM
    TR_KEY_RESERVED,                       // SUB
    TR_KEY_RESERVED,                       // ESC
    TR_KEY_RESERVED,                       // FS
    TR_KEY_RESERVED,                       // GS
    TR_KEY_RESERVED,                       // RS
    TR_KEY_RESERVED,                       // US
    TR_KEY_SPACE,                          // ' ' Space
    TR_KEY_1|TR_MOD_LEFT_SHIFT,                         // !
    TR_KEY_QUOTE|TR_MOD_LEFT_SHIFT,                     // "
    TR_KEY_3|TR_MOD_RIGHT_ALT,                          // #
    TR_KEY_4|TR_MOD_RIGHT_ALT,                          // $
    TR_KEY_5|TR_MOD_RIGHT_SHIFT,                        // %
    TR_KEY_6|TR_MOD_RIGHT_SHIFT,                        // &
    TR_KEY_2|TR_MOD_RIGHT_SHIFT,                        // '
    TR_KEY_8|TR_MOD_LEFT_SHIFT,                         // (
    TR_KEY_9|TR_MOD_LEFT_SHIFT,                         // )
    TR_KEY_MINUS,                                       // *
    TR_KEYPAD_ADD,                                      // +
    TR_KEY_COMMA,                            // ,
    TR_KEY_MINUS,                          // -
    TR_KEY_PERIOD,                         // .
    TR_KEY_SLASH,                          // /
    TR_KEY_0,                              // 0
    TR_KEY_1,                              // 1
    TR_KEY_2,                              // 2
    TR_KEY_3,                              // 3
    TR_KEY_4,                              // 4
    TR_KEY_5,                              // 5
    TR_KEY_6,                              // 6
    TR_KEY_7,                              // 7
    TR_KEY_8,                              // 8
    TR_KEY_9,                              // 9
    TR_KEY_SEMICOLON|TR_MOD_LEFT_SHIFT,       // :
    TR_KEY_SEMICOLON,                      // ;
    TR_KEY_COMMA|TR_MOD_LEFT_SHIFT,           // <
    TR_KEY_EQUAL,                          // =
    TR_KEY_PERIOD|TR_MOD_LEFT_SHIFT,          // >
    TR_KEY_SLASH|TR_MOD_LEFT_SHIFT,           // ?
    TR_KEY_2|TR_MOD_LEFT_SHIFT,               // @
    TR_KEY_A|TR_MOD_LEFT_SHIFT,               // A
    TR_KEY_B|TR_MOD_LEFT_SHIFT,               // B
    TR_KEY_C|TR_MOD_LEFT_SHIFT,               // C
    TR_KEY_D|TR_MOD_LEFT_SHIFT,               // D
    TR_KEY_E|TR_MOD_LEFT_SHIFT,               // E
    TR_KEY_F|TR_MOD_LEFT_SHIFT,               // F
    TR_KEY_G|TR_MOD_LEFT_SHIFT,               // G
    TR_KEY_H|TR_MOD_LEFT_SHIFT,               // H
    TR_KEY_I|TR_MOD_LEFT_SHIFT,               // I
    TR_KEY_J|TR_MOD_LEFT_SHIFT,               // J
    TR_KEY_K|TR_MOD_LEFT_SHIFT,               // K
    TR_KEY_L|TR_MOD_LEFT_SHIFT,               // L
    TR_KEY_M|TR_MOD_LEFT_SHIFT,               // M
    TR_KEY_N|TR_MOD_LEFT_SHIFT,               // N
    TR_KEY_O|TR_MOD_LEFT_SHIFT,               // O
    TR_KEY_P|TR_MOD_LEFT_SHIFT,               // P
    TR_KEY_Q|TR_MOD_LEFT_SHIFT,               // Q
    TR_KEY_R|TR_MOD_LEFT_SHIFT,               // R
    TR_KEY_S|TR_MOD_LEFT_SHIFT,               // S
    TR_KEY_T|TR_MOD_LEFT_SHIFT,               // T
    TR_KEY_U|TR_MOD_LEFT_SHIFT,               // U
    TR_KEY_V|TR_MOD_LEFT_SHIFT,               // V
    TR_KEY_W|TR_MOD_LEFT_SHIFT,               // W
    TR_KEY_X|TR_MOD_LEFT_SHIFT,               // X
    TR_KEY_Y|TR_MOD_LEFT_SHIFT,               // Y
    TR_KEY_Z|TR_MOD_LEFT_SHIFT,               // Z
    TR_KEY_LEFT_BRACE,                     // [
    TR_KEY_BACKSLASH,                      // bslash
    TR_KEY_RIGHT_BRACE,                    // ]
    TR_KEY_6|TR_MOD_LEFT_SHIFT,               // ^
    TR_KEY_MINUS|TR_MOD_LEFT_SHIFT,           // _
    TR_KEY_TILDE,                          // `
    TR_KEY_A,                              // a
    TR_KEY_B,                              // b
    TR_KEY_C,                              // c
    TR_KEY_D,                              // d
    TR_KEY_E,                              // e
    TR_KEY_F,                              // f
    TR_KEY_G,                              // g
    TR_KEY_H,                              // h
    TR_KEY_I,                              // i
    TR_KEY_J,                              // j
    TR_KEY_K,                              // k
    TR_KEY_L,                              // l
    TR_KEY_M,                              // m
    TR_KEY_N,                              // n
    TR_KEY_O,                              // o
    TR_KEY_P,                              // p
    TR_KEY_Q,                              // q
    TR_KEY_R,                              // r
    TR_KEY_S,                              // s
    TR_KEY_T,                              // t
    TR_KEY_U,                              // u
    TR_KEY_V,                              // v
    TR_KEY_W,                              // w
    TR_KEY_X,                              // x
    TR_KEY_Y,                              // y
    TR_KEY_Z,                              // z
    TR_KEY_LEFT_BRACE|TR_MOD_LEFT_SHIFT,      // {
    TR_KEY_BACKSLASH|TR_MOD_LEFT_SHIFT,       // |TR_
    TR_KEY_RIGHT_BRACE|TR_MOD_LEFT_SHIFT,     // }
    TR_KEY_TILDE|TR_MOD_LEFT_SHIFT,           // ~
    TR_KEY_RESERVED,                       // DEL
    TR_KEY_RESERVED,                       // 128 - Unused
    TR_KEY_RESERVED,                       // 129 - Unused
    TR_KEY_RESERVED,                       // 130 - Unused
    TR_KEY_RESERVED,                       // 131 - Unused
    TR_KEY_RESERVED,                       // 132 - Unused
    TR_KEY_RESERVED,                       // 133 - Unused
    TR_KEY_RESERVED,                       // 134 - Unused
    TR_KEY_RESERVED,                       // 135 - Unused
    TR_KEY_RESERVED,                       // 136 - Unused
    TR_KEY_RESERVED,                       // 137 - Unused
    TR_KEY_RESERVED,                       // 138 - Unused
    TR_KEY_RESERVED,                       // 139 - Unused
    TR_KEY_RESERVED,                       // 140 - Unused
    TR_KEY_RESERVED,                       // 141 - Unused
    TR_KEY_RESERVED,                       // 142 - Unused
    TR_KEY_RESERVED,                       // 143 - Unused
    TR_KEY_RESERVED,                       // 144 - Unused
    TR_KEY_RESERVED,                       // 145 - Unused
    TR_KEY_RESERVED,                       // 146 - Unused
    TR_KEY_RESERVED,                       // 147 - Unused
    TR_KEY_RESERVED,                       // 148 - Unused
    TR_KEY_RESERVED,                       // 149 - Unused
    TR_KEY_RESERVED,                       // 150 - Unused
    TR_KEY_RESERVED,                       // 151 - Unused
    TR_KEY_RESERVED,                       // 152 - Unused
    TR_KEY_RESERVED,                       // 153 - Unused
    TR_KEY_RESERVED,                       // 154 - Unused
    TR_KEY_RESERVED,                       // 155 - Unused
    TR_KEY_RESERVED,                       // 156 - Unused
    TR_KEY_RESERVED,                       // 157 - Unused
    TR_KEY_RESERVED,                       // 158 - Unused
    TR_KEY_RESERVED,                       // 159 - Unused
    TR_KEY_RESERVED,                       // 160 - Non-breaking Space
    TR_KEY_RESERVED,                       // 161 - Inverted Exclamation Mark
    TR_KEY_RESERVED,                       // 162 - Cent
    TR_KEY_RESERVED,                       // 163 - British Pound Sign
    TR_KEY_RESERVED,                       // 164 - Euro Sign
    TR_KEY_RESERVED,                       // 165 - Yen
    TR_KEY_RESERVED,                       // 166 - Capital 's' Inverted Circumflex
    TR_KEY_RESERVED,                       // 167 - Section Sign
    TR_KEY_RESERVED,                       // 168 - 's' Inverted Circumflex
    TR_KEY_RESERVED,                       // 169 - Copyright Sign
    TR_KEY_RESERVED,                       // 170 - Superscript 'a'
    TR_KEY_RESERVED,                       // 171 - Open Guillemet
    TR_KEY_RESERVED,                       // 172 - Logic Negation
    TR_KEY_RESERVED,                       // 173 - Soft Hypen
    TR_KEY_RESERVED,                       // 174 - Registered Trademark
    TR_KEY_RESERVED,                       // 175 - Macron
    TR_KEY_RESERVED,                       // 176 - Degree Symbol
    TR_KEY_RESERVED,                       // 177 - Plus-Minus
    TR_KEY_RESERVED,                       // 178 - Superscript '2'
    TR_KEY_RESERVED,                       // 179 - Superscript '3'
    TR_KEY_RESERVED,                       // 180 - Capital 'z' Inverted Circumflex
    TR_KEY_RESERVED,                       // 181 - Micro Symbol
    TR_KEY_RESERVED,                       // 182 - Paragraph Mark
    TR_KEY_RESERVED,                       // 183 - Interpunct
    TR_KEY_RESERVED,                       // 184 - 'z' Inverted Circumflex
    TR_KEY_RESERVED,                       // 185 - Superscript '1'
    TR_KEY_RESERVED,                       // 186 - Ordinal Indicator
    TR_KEY_RESERVED,                       // 187 - Closed Guillemet
    TR_KEY_RESERVED,                       // 188 - Capital 'oe'
    TR_KEY_RESERVED,                       // 189 - 'oe'
    TR_KEY_RESERVED,                       // 190 - Capital 'y' Umlaut
    TR_KEY_RESERVED,                       // 191 - Inverted Question Mark
    TR_KEY_RESERVED,                       // 192 - Capital 'a' Grave
    TR_KEY_RESERVED,                       // 193 - Capital 'a' Acute
    TR_KEY_RESERVED,                       // 194 - Capital 'a' Circumflex
    TR_KEY_RESERVED,                       // 195 - Capital 'a' Tilde
    TR_KEY_RESERVED,                       // 196 - Capital 'a' Umlaut
    TR_KEY_RESERVED,                       // 197 - Capital 'a' Circle
    TR_KEY_RESERVED,                       // 198 - Capital 'ae'
    TR_KEY_RESERVED,                       // 199 - Capital 'c' Cedilla
    TR_KEY_RESERVED,                       // 200 - Capital 'e' Grave
    TR_KEY_RESERVED,                       // 201 - Capital 'e' Acute
    TR_KEY_RESERVED,                       // 202 - Capital 'e' Circumflex
    TR_KEY_RESERVED,                       // 203 - Capital 'e' Umlaut
    TR_KEY_RESERVED,                       // 204 - Capital 'i' Grave
    TR_KEY_RESERVED,                       // 205 - Capital 'i' Acute
    TR_KEY_RESERVED,                       // 206 - Capital 'i' Circumflex
    TR_KEY_RESERVED,                       // 207 - Capital 'i' Umlaut
    TR_KEY_RESERVED,                       // 208 - Capital Eth
    TR_KEY_RESERVED,                       // 207 - Capital 'n' Tilde
    TR_KEY_RESERVED,                       // 210 - Capital 'o' Grave
    TR_KEY_RESERVED,                       // 211 - Capital 'o' Acute
    TR_KEY_RESERVED,                       // 212 - Capital 'o' Circumflex
    TR_KEY_RESERVED,                       // 213 - Capital 'o' Tilde
    TR_KEY_RESERVED,                       // 214 - Capital 'o' Umlaut
    TR_KEY_RESERVED,                       // 215 - Multiplication Sign
    TR_KEY_RESERVED,                       // 216 - Capital 'o' Barred
    TR_KEY_RESERVED,                       // 217 - Capital 'u' Grave
    TR_KEY_RESERVED,                       // 218 - Capital 'u' Acute
    TR_KEY_RESERVED,                       // 219 - Capital 'u' Circumflex
    TR_KEY_RESERVED,                       // 220 - Capital 'u' Umlaut
    TR_KEY_RESERVED,                       // 221 - Capital 'y' Acute
    TR_KEY_RESERVED,                       // 222 - Capital Thorn
    TR_KEY_RESERVED,                       // 223 - Eszett
    TR_KEY_RESERVED,                       // 224 - 'a' Grave
    TR_KEY_RESERVED,                       // 225 - 'a' Acute
    TR_KEY_RESERVED,                       // 226 - 'a' Circumflex
    TR_KEY_RESERVED,                       // 227 - 'a' Tilde
    TR_KEY_RESERVED,                       // 228 - 'a' Umlaut
    TR_KEY_RESERVED,                       // 229 - 'a' Circle
    TR_KEY_RESERVED,                       // 230 - 'ae'
    TR_KEY_RESERVED,                       // 231 - 'c' Cedilla
    TR_KEY_RESERVED,                       // 232 - 'e' Grave
    TR_KEY_RESERVED,                       // 233 - 'e' Acute
    TR_KEY_RESERVED,                       // 234 - 'e' Circumflex
    TR_KEY_RESERVED,                       // 235 - 'e' Umlaut
    TR_KEY_RESERVED,                       // 236 - 'i' Grave
    TR_KEY_RESERVED,                       // 237 - 'i' Acute
    TR_KEY_RESERVED,                       // 238 - 'i' Circumflex
    TR_KEY_RESERVED,                       // 239 - 'i' Umlaut
    TR_KEY_RESERVED,                       // 240 - Eth
    TR_KEY_RESERVED,                       // 241 - 'n' Tilde
    TR_KEY_RESERVED,                       // 242 - 'o' Grave
    TR_KEY_RESERVED,                       // 243 - 'o' Acute
    TR_KEY_RESERVED,                       // 244 - 'o' Circumflex
    TR_KEY_RESERVED,                       // 245 - 'o' Tilde
    TR_KEY_RESERVED,                       // 246 - 'o' Umlaut
    TR_KEY_RESERVED,                       // 247 - Multiplication Sign
    TR_KEY_RESERVED,                       // 248 - 'o' Barred
    TR_KEY_RESERVED,                       // 249 - 'u' Grave
    TR_KEY_RESERVED,                       // 250 - 'u' Acute
    TR_KEY_RESERVED,                       // 251 - 'u' Circumflex
    TR_KEY_RESERVED,                       // 252 - 'u' Umlaut
    TR_KEY_RESERVED,                       // 253 - 'y' Acute
    TR_KEY_RESERVED,                       // 254 - Thorn
    TR_KEY_RESERVED,                       // 255 - 'y' Umlaut
};
