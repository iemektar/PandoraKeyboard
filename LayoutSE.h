
enum KeyboardModsSE : uint16_t {
    SE_MOD_LEFT_CTRL       = (1 <<  8),
    SE_MOD_LEFT_SHIFT      = (1 <<  9),
    SE_MOD_LEFT_ALT        = (1 << 10),
    SE_MOD_LEFT_GUI        = (1 << 11),
    SE_MOD_RIGHT_CTRL      = (1 << 12),
    SE_MOD_RIGHT_SHIFT     = (1 << 13),
    SE_MOD_RIGHT_ALT       = (1 << 14),
    SE_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};


// Hut1_12v2.pdf

enum KeyboardKeycodeSE : uint8_t {
    SE_KEY_RESERVED        =  0,
    SE_KEY_ERROR_ROLLOVER  =  1,
    SE_KEY_POST_FAIL       =  2,
    SE_KEY_ERROR_UNDEFINED =  3,
    SE_KEY_A               =  4,
    SE_KEY_B               =  5,
    SE_KEY_C               =  6,
    SE_KEY_D               =  7,
    SE_KEY_E               =  8,
    SE_KEY_F               =  9,
    SE_KEY_G               = 10,
    SE_KEY_H               = 11,
    SE_KEY_I               = 12,
    SE_KEY_J               = 13,
    SE_KEY_K               = 14,
    SE_KEY_L               = 15,
    SE_KEY_M               = 16,
    SE_KEY_N               = 17,
    SE_KEY_O               = 18,
    SE_KEY_P               = 19,
    SE_KEY_Q               = 20,
    SE_KEY_R               = 21,
    SE_KEY_S               = 22,
    SE_KEY_T               = 23,
    SE_KEY_U               = 24,
    SE_KEY_V               = 25,
    SE_KEY_W               = 26,
    SE_KEY_X               = 27,
    SE_KEY_Y               = 28,
    SE_KEY_Z               = 29,
    SE_KEY_1               = 30,
    SE_KEY_2               = 31,
    SE_KEY_3               = 32,
    SE_KEY_4               = 33,
    SE_KEY_5               = 34,
    SE_KEY_6               = 35,
    SE_KEY_7               = 36,
    SE_KEY_8               = 37,
    SE_KEY_9               = 38,
    SE_KEY_0               = 39,
    SE_KEY_ENTER           = 40,
    SE_KEY_RETURN          = 40, // Alias
    SE_KEY_ESC             = 41,
    SE_KEY_BACKSPACE       = 42,
    SE_KEY_TAB             = 43,
    SE_KEY_SPACE           = 44,
    SE_KEY_MINUS           = 45,
    SE_KEY_EQUAL           = 46,
    SE_KEY_LEFT_BRACE      = 47,
    SE_KEY_RIGHT_BRACE     = 48,
    SE_KEY_BACKSLASH       = 49,
    SE_KEY_NON_US_NUM      = 50,
    SE_KEY_SEMICOLON       = 51,
    SE_KEY_QUOTE           = 52,
    SE_KEY_TILDE           = 53,
    SE_KEY_COMMA           = 54,
    SE_KEY_PERIOD          = 55,
    SE_KEY_SLASH           = 56,
    SE_KEY_CAPS_LOCK       = 0x39,
    SE_KEY_F1              = 0x3A,
    SE_KEY_F2              = 0x3B,
    SE_KEY_F3              = 0x3C,
    SE_KEY_F4              = 0x3D,
    SE_KEY_F5              = 0x3E,
    SE_KEY_F6              = 0x3F,
    SE_KEY_F7              = 0x40,
    SE_KEY_F8              = 0x41,
    SE_KEY_F9              = 0x42,
    SE_KEY_F10             = 0x43,
    SE_KEY_F11             = 0x44,
    SE_KEY_F12             = 0x45,
    SE_KEY_PRINT           = 0x46,
    SE_KEY_PRINTSCREEN     = 0x46, // Alias
    SE_KEY_SCROLL_LOCK     = 0x47,
    SE_KEY_PAUSE           = 0x48,
    SE_KEY_INSERT          = 0x49,
    SE_KEY_HOME            = 0x4A,
    SE_KEY_PAGE_UP         = 0x4B,
    SE_KEY_DELETE          = 0x4C,
    SE_KEY_END             = 0x4D,
    SE_KEY_PAGE_DOWN       = 0x4E,
    SE_KEY_RIGHT_ARROW     = 0x4F,
    SE_KEY_LEFT_ARROW      = 0x50,
    SE_KEY_DOWN_ARROW      = 0x51,
    SE_KEY_UP_ARROW        = 0x52,
    SE_KEY_RIGHT           = 0x4F, // Alias
    SE_KEY_LEFT            = 0x50, // Alias
    SE_KEY_DOWN            = 0x51, // Alias
    SE_KEY_UP              = 0x52, // Alias
    SE_KEY_NUM_LOCK        = 0x53,
    SE_KEYPAD_DIVIDE       = 0x54,
    SE_KEYPAD_MULTIPLY     = 0x55,
    SE_KEYPAD_SUBTRACT     = 0x56,
    SE_KEYPAD_ADD          = 0x57,
    SE_KEYPAD_ENTER        = 0x58,
    SE_KEYPAD_1            = 0x59,
    SE_KEYPAD_2            = 0x5A,
    SE_KEYPAD_3            = 0x5B,
    SE_KEYPAD_4            = 0x5C,
    SE_KEYPAD_5            = 0x5D,
    SE_KEYPAD_6            = 0x5E,
    SE_KEYPAD_7            = 0x5F,
    SE_KEYPAD_8            = 0x60,
    SE_KEYPAD_9            = 0x61,
    SE_KEYPAD_0            = 0x62,
    SE_KEYPAD_DOT          = 0x63,
    SE_KEY_NON_US          = 0x64,
    SE_KEY_APPLICATION     = 0x65, // Context menu/right click
    SE_KEY_MENU            = 0x65,
    SE_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    SE_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    SE_KEY_F13             = 0x68, // Tools (Ubunutu)
    SE_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    SE_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    SE_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    SE_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    SE_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    SE_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    SE_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    SE_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    SE_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    SE_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    SE_KEY_F24             = 0x73, // Disabled (Ubuntu)
    SE_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    SE_KEY_HELP            = 0x75, // Help (Ubuntu)
    SE_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    SE_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    SE_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    SE_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    SE_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    SE_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    SE_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    SE_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    SE_KEY_FIND            = 0x7E, // Find (Ubuntu)
    SE_KEY_MUTE            = 0x7F,
    SE_KEY_VOLUME_MUTE     = 0x7F, // Alias
    SE_KEY_VOLUME_UP       = 0x80,
    SE_KEY_VOLUME_DOWN     = 0x81,
    SE_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    SE_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    SE_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    SE_KEYPAD_COMMA            = 0x85, // .
    SE_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    SE_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    SE_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    SE_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    SE_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    SE_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    SE_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    SE_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    SE_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    SE_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    SE_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    SE_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    SE_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    SE_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    SE_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    SE_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    SE_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    SE_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    SE_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    SE_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    SE_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    SE_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    SE_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    SE_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    SE_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    SE_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    SE_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    SE_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    SE_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    SE_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    SE_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    SE_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    SE_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    SE_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    SE_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    SE_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    SE_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    SE_KEYPAD_LEFT_BRACE           = 0xB6, // (
    SE_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    SE_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    SE_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    SE_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    SE_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    SE_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    SE_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    SE_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    SE_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    SE_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    SE_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    SE_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    SE_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    SE_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    SE_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    SE_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    SE_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    SE_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    SE_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    SE_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    SE_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    SE_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    SE_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    SE_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    SE_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    SE_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    SE_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    SE_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    SE_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    SE_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    SE_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    SE_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    SE_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    SE_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    SE_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    SE_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    SE_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    SE_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    SE_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    SE_KEY_LEFT_CTRL           = 0xE0,
    SE_KEY_LEFT_SHIFT          = 0xE1,
    SE_KEY_LEFT_ALT            = 0xE2,
    SE_KEY_LEFT_GUI            = 0xE3,
    SE_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    SE_KEY_RIGHT_CTRL          = 0xE4,
    SE_KEY_RIGHT_SHIFT         = 0xE5,
    SE_KEY_RIGHT_ALT           = 0xE6,
    SE_KEY_RIGHT_GUI           = 0xE7,
    SE_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    SE_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    SE_HID_KEYBOARD_POST_FAIL  = 0x02,
    SE_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    SE_HID_KEYBOARD_A_AND_A    = 0x04,
    SE_HID_KEYBOARD_B_AND_B    = 0x05,
    SE_HID_KEYBOARD_C_AND_C    = 0x06,
    SE_HID_KEYBOARD_D_AND_D    = 0x07,
    SE_HID_KEYBOARD_E_AND_E    = 0x08,
    SE_HID_KEYBOARD_F_AND_F    = 0x09,
    SE_HID_KEYBOARD_G_AND_G    = 0x0A,
    SE_HID_KEYBOARD_H_AND_H    = 0x0B,
    SE_HID_KEYBOARD_I_AND_I    = 0x0C,
    SE_HID_KEYBOARD_J_AND_J    = 0x0D,
    SE_HID_KEYBOARD_K_AND_K    = 0x0E,
    SE_HID_KEYBOARD_L_AND_L    = 0x0F,
    SE_HID_KEYBOARD_M_AND_M    = 0x10,
    SE_HID_KEYBOARD_N_AND_N    = 0x11,
    SE_HID_KEYBOARD_O_AND_O    = 0x12,
    SE_HID_KEYBOARD_P_AND_P    = 0x13,
    SE_HID_KEYBOARD_Q_AND_Q    = 0x14,
    SE_HID_KEYBOARD_R_AND_R    = 0x15,
    SE_HID_KEYBOARD_S_AND_S    = 0x16,
    SE_HID_KEYBOARD_T_AND_T    = 0x17,
    SE_HID_KEYBOARD_U_AND_U    = 0x18,
    SE_HID_KEYBOARD_V_AND_V    = 0x19,
    SE_HID_KEYBOARD_W_AND_W    = 0x1A,
    SE_HID_KEYBOARD_X_AND_X    = 0x1B,
    SE_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    SE_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    SE_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    SE_HID_KEYBOARD_2_AND_AT   = 0x1F,
    SE_HID_KEYBOARD_3_AND_POUND    = 0x20,
    SE_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    SE_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    SE_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    SE_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    SE_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    SE_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    SE_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    SE_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    SE_HID_KEYBOARD_ESCAPE = 0x29,
    SE_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    SE_HID_KEYBOARD_TAB    = 0x2B,
    SE_HID_KEYBOARD_SPACEBAR   = 0x2C,
    SE_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    SE_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    SE_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    SE_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    SE_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    SE_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    SE_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    SE_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    SE_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    SE_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    SE_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    SE_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    SE_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    SE_HID_KEYBOARD_F1 = 0x3A,
    SE_HID_KEYBOARD_F2 = 0x3B,
    SE_HID_KEYBOARD_F3 = 0x3C,
    SE_HID_KEYBOARD_F4 = 0x3D,
    SE_HID_KEYBOARD_F5 = 0x3E,
    SE_HID_KEYBOARD_F6 = 0x3F,
    SE_HID_KEYBOARD_F7 = 0x40,
    SE_HID_KEYBOARD_F8 = 0x41,
    SE_HID_KEYBOARD_F9 = 0x42,
    SE_HID_KEYBOARD_F10    = 0x43,
    SE_HID_KEYBOARD_F11    = 0x44,
    SE_HID_KEYBOARD_F12    = 0x45,
    SE_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    SE_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    SE_HID_KEYBOARD_PAUSE  = 0x48,
    SE_HID_KEYBOARD_INSERT = 0x49,
    SE_HID_KEYBOARD_HOME   = 0x4A,
    SE_HID_KEYBOARD_PAGE_UP    = 0x4B,
    SE_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    SE_HID_KEYBOARD_END    = 0x4D,
    SE_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    SE_HID_KEYBOARD_RIGHTARROW = 0x4F,
    SE_HID_KEYBOARD_LEFTARROW  = 0x50,
    SE_HID_KEYBOARD_DOWNARROW  = 0x51,
    SE_HID_KEYBOARD_UPARROW    = 0x52,
    SE_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    SE_HID_KEYPAD_DIVIDE   = 0x54,
    SE_HID_KEYPAD_MULTIPLY = 0x55,
    SE_HID_KEYPAD_SUBTRACT = 0x56,
    SE_HID_KEYPAD_ADD  = 0x57,
    SE_HID_KEYPAD_ENTER    = 0x58,
    SE_HID_KEYPAD_1_AND_END    = 0x59,
    SE_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    SE_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    SE_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    SE_HID_KEYPAD_5    = 0x5D,
    SE_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    SE_HID_KEYPAD_7_AND_HOME   = 0x5F,
    SE_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    SE_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    SE_HID_KEYPAD_0_AND_INSERT = 0x62,
    SE_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    SE_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    SE_HID_KEYBOARD_APPLICATION    = 0x65,
    SE_HID_KEYBOARD_POWER  = 0x66,
    SE_HID_KEYPAD_EQUALS   = 0x67,
    SE_HID_KEYBOARD_F13    = 0x68,
    SE_HID_KEYBOARD_F14    = 0x69,
    SE_HID_KEYBOARD_F15    = 0x6A,
    SE_HID_KEYBOARD_F16    = 0x6B,
    SE_HID_KEYBOARD_F17    = 0x6C,
    SE_HID_KEYBOARD_F18    = 0x6D,
    SE_HID_KEYBOARD_F19    = 0x6E,
    SE_HID_KEYBOARD_F20    = 0x6F,
    SE_HID_KEYBOARD_F21    = 0x70,
    SE_HID_KEYBOARD_F22    = 0x71,
    SE_HID_KEYBOARD_F23    = 0x72,
    SE_HID_KEYBOARD_F24    = 0x73,
    SE_HID_KEYBOARD_EXECUTE    = 0x74,
    SE_HID_KEYBOARD_HELP   = 0x75,
    SE_HID_KEYBOARD_MENU   = 0x76,
    SE_HID_KEYBOARD_SELECT = 0x77,
    SE_HID_KEYBOARD_STOP   = 0x78,
    SE_HID_KEYBOARD_AGAIN  = 0x79,
    SE_HID_KEYBOARD_UNDO   = 0x7A,
    SE_HID_KEYBOARD_CUT    = 0x7B,
    SE_HID_KEYBOARD_COPY   = 0x7C,
    SE_HID_KEYBOARD_PASTE  = 0x7D,
    SE_HID_KEYBOARD_FIND   = 0x7E,
    SE_HID_KEYBOARD_MUTE   = 0x7F,
    SE_HID_KEYBOARD_VOLUME_UP  = 0x80,
    SE_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    SE_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    SE_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    SE_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    SE_HID_KEYPAD_COMMA    = 0x85,
    SE_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    SE_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    SE_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    SE_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    SE_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    SE_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    SE_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    SE_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    SE_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    SE_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    SE_HID_KEYBOARD_LANG1  = 0x90,
    SE_HID_KEYBOARD_LANG2  = 0x91,
    SE_HID_KEYBOARD_LANG3  = 0x92,
    SE_HID_KEYBOARD_LANG4  = 0x93,
    SE_HID_KEYBOARD_LANG5  = 0x94,
    SE_HID_KEYBOARD_LANG6  = 0x95,
    SE_HID_KEYBOARD_LANG7  = 0x96,
    SE_HID_KEYBOARD_LANG8  = 0x97,
    SE_HID_KEYBOARD_LANG9  = 0x98,
    SE_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    SE_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    SE_HID_KEYBOARD_CANCEL = 0x9B,
    SE_HID_KEYBOARD_CLEAR  = 0x9C,
    SE_HID_KEYBOARD_PRIOR  = 0x9D,
    SE_HID_KEYBOARD_RETURN = 0x9E,
    SE_HID_KEYBOARD_SEPARATOR  = 0x9F,
    SE_HID_KEYBOARD_OUT    = 0xA0,
    SE_HID_KEYBOARD_OPER   = 0xA1,
    SE_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    SE_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    SE_HID_KEYBOARD_EXSEL  = 0xA4,
    SE_HID_KEYPAD_00   = 0xB0,
    SE_HID_KEYPAD_000  = 0xB1,
    SE_HID_THOUSANDS_SEPARATOR = 0xB2,
    SE_HID_DECIMAL_SEPARATOR   = 0xB3,
    SE_HID_CURRENCY_UNIT   = 0xB4,
    SE_HID_CURRENCY_SUBUNIT    = 0xB5,
    SE_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    SE_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    SE_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    SE_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    SE_HID_KEYPAD_TAB  = 0xBA,
    SE_HID_KEYPAD_BACKSPACE    = 0xBB,
    SE_HID_KEYPAD_A    = 0xBC,
    SE_HID_KEYPAD_B    = 0xBD,
    SE_HID_KEYPAD_C    = 0xBE,
    SE_HID_KEYPAD_D    = 0xBF,
    SE_HID_KEYPAD_E    = 0xC0,
    SE_HID_KEYPAD_F    = 0xC1,
    SE_HID_KEYPAD_XOR  = 0xC2,
    SE_HID_KEYPAD_CARAT    = 0xC3,
    SE_HID_KEYPAD_PERCENT  = 0xC4,
    SE_HID_KEYPAD_LESS_THAN    = 0xC5,
    SE_HID_KEYPAD_GREATER_THAN = 0xC6,
    SE_HID_KEYPAD_AMPERSAND    = 0xC7,
    SE_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    SE_HID_KEYPAD_PIPE = 0xC9,
    SE_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    SE_HID_KEYPAD_COLON    = 0xCB,
    SE_HID_KEYPAD_POUND_SIGN   = 0xCC,
    SE_HID_KEYPAD_SPACE    = 0xCD,
    SE_HID_KEYPAD_AT_SIGN  = 0xCE,
    SE_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    SE_HID_KEYPAD_MEMORY_STORE = 0xD0,
    SE_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    SE_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    SE_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    SE_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    SE_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    SE_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    SE_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    SE_HID_KEYPAD_CLEAR    = 0xD8,
    SE_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    SE_HID_KEYPAD_BINARY   = 0xDA,
    SE_HID_KEYPAD_OCTAL    = 0xDB,
    SE_HID_KEYPAD_DECIMAL  = 0xDC,
    SE_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    SE_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    SE_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    SE_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    SE_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    SE_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    SE_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    SE_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    SE_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};

// Key aliases
#define SE_KEY_SE_SECTION      SE_KEY_TILDE
#define SE_KEY_SE_PLUS         SE_KEY_MINUS  
#define SE_KEY_SE_BACKSLASH    SE_KEY_EQUAL
#define SE_KEY_SE_ACIRCLE      SE_KEY_LEFT_BRACE
#define SE_KEY_SE_ACCENTS2     SE_KEY_RIGHT_BRACE
#define SE_KEY_SE_AUMLAUT      SE_KEY_QUOTE
#define SE_KEY_SE_OUMLAUT      SE_KEY_SEMICOLON
#define SE_KEY_SE_QUOTE        SE_KEY_BACKSLASH
#define SE_KEY_SE_MINUS        SE_KEY_SLASH
#define SE_KEY_SE_LT_GT        SE_KEY_NON_US


static const uint16_t _asciimapSE[] PROGMEM =
{
    SE_KEY_RESERVED,                               // NUL
    SE_KEY_RESERVED,                               // SOH
    SE_KEY_RESERVED,                               // STX
    SE_KEY_RESERVED,                               // ETX
    SE_KEY_RESERVED,                               // EOT
    SE_KEY_RESERVED,                               // ENQ
    SE_KEY_RESERVED,                               // ACK
    SE_KEY_RESERVED,                               // BEL
    SE_KEY_BACKSPACE,                              // BS   Backspace
    SE_KEY_TAB,                                    // TAB  Tab
    SE_KEY_ENTER,                                  // LF   Enter
    SE_KEY_RESERVED,                               // VT
    SE_KEY_RESERVED,                               // FF
    SE_KEY_RESERVED,                               // CR
    SE_KEY_RESERVED,                               // SO
    SE_KEY_RESERVED,                               // SI
    SE_KEY_RESERVED,                               // DEL
    SE_KEY_RESERVED,                               // DC1
    SE_KEY_RESERVED,                               // DC2
    SE_KEY_RESERVED,                               // DC3
    SE_KEY_RESERVED,                               // DC4
    SE_KEY_RESERVED,                               // NAK
    SE_KEY_RESERVED,                               // SYN
    SE_KEY_RESERVED,                               // ETB
    SE_KEY_RESERVED,                               // CAN
    SE_KEY_RESERVED,                               // EM
    SE_KEY_RESERVED,                               // SUB
    SE_KEY_RESERVED,                               // ESC
    SE_KEY_RESERVED,                               // FS
    SE_KEY_RESERVED,                               // GS
    SE_KEY_RESERVED,                               // RS
    SE_KEY_RESERVED,                               // US
    SE_KEY_SPACE,                                  // ' ' Space
    SE_KEY_1|SE_MOD_LEFT_SHIFT,                       // !
    SE_KEY_2|SE_MOD_LEFT_SHIFT,                       // "
    SE_KEY_3|SE_MOD_LEFT_SHIFT,                       // #
    SE_KEY_4|SE_MOD_RIGHT_ALT,                        // $
    SE_KEY_5|SE_MOD_LEFT_SHIFT,                       // %
    SE_KEY_6|SE_MOD_LEFT_SHIFT,                       // &
    SE_KEY_SE_QUOTE,                               // '
    SE_KEY_8|SE_MOD_LEFT_SHIFT,                       // (
    SE_KEY_9|SE_MOD_LEFT_SHIFT,                       // )
    SE_KEY_SE_QUOTE|SE_MOD_LEFT_SHIFT,                // *
    SE_KEY_SE_PLUS,                                // +
    SE_KEY_COMMA,                                  // ,
    SE_KEY_SE_MINUS,                               // -
    SE_KEY_PERIOD,                                 // .
    SE_KEY_7|SE_MOD_LEFT_SHIFT,                       // /
    SE_KEY_0,                                      // 0
    SE_KEY_1,                                      // 1
    SE_KEY_2,                                      // 2
    SE_KEY_3,                                      // 3
    SE_KEY_4,                                      // 4
    SE_KEY_5,                                      // 5
    SE_KEY_6,                                      // 6
    SE_KEY_7,                                      // 7
    SE_KEY_8,                                      // 8
    SE_KEY_9,                                      // 9
    SE_KEY_PERIOD|SE_MOD_LEFT_SHIFT,                  // :
    SE_KEY_COMMA|SE_MOD_LEFT_SHIFT,                   // ;
    SE_KEY_SE_LT_GT,                               // <
    SE_KEY_0|SE_MOD_LEFT_SHIFT,                       // =
    SE_KEY_SE_LT_GT|SE_MOD_LEFT_SHIFT,                // >
    SE_KEY_SE_PLUS|SE_MOD_LEFT_SHIFT,                 // ?
    SE_KEY_2|SE_MOD_RIGHT_ALT,                        // @
    SE_KEY_A|SE_MOD_LEFT_SHIFT,                       // A
    SE_KEY_B|SE_MOD_LEFT_SHIFT,                       // B
    SE_KEY_C|SE_MOD_LEFT_SHIFT,                       // C
    SE_KEY_D|SE_MOD_LEFT_SHIFT,                       // D
    SE_KEY_E|SE_MOD_LEFT_SHIFT,                       // E
    SE_KEY_F|SE_MOD_LEFT_SHIFT,                       // F
    SE_KEY_G|SE_MOD_LEFT_SHIFT,                       // G
    SE_KEY_H|SE_MOD_LEFT_SHIFT,                       // H
    SE_KEY_I|SE_MOD_LEFT_SHIFT,                       // I
    SE_KEY_J|SE_MOD_LEFT_SHIFT,                       // J
    SE_KEY_K|SE_MOD_LEFT_SHIFT,                       // K
    SE_KEY_L|SE_MOD_LEFT_SHIFT,                       // L
    SE_KEY_M|SE_MOD_LEFT_SHIFT,                       // M
    SE_KEY_N|SE_MOD_LEFT_SHIFT,                       // N
    SE_KEY_O|SE_MOD_LEFT_SHIFT,                       // O
    SE_KEY_P|SE_MOD_LEFT_SHIFT,                       // P
    SE_KEY_Q|SE_MOD_LEFT_SHIFT,                       // Q
    SE_KEY_R|SE_MOD_LEFT_SHIFT,                       // R
    SE_KEY_S|SE_MOD_LEFT_SHIFT,                       // S
    SE_KEY_T|SE_MOD_LEFT_SHIFT,                       // T
    SE_KEY_U|SE_MOD_LEFT_SHIFT,                       // U
    SE_KEY_V|SE_MOD_LEFT_SHIFT,                       // V
    SE_KEY_W|SE_MOD_LEFT_SHIFT,                       // W
    SE_KEY_X|SE_MOD_LEFT_SHIFT,                       // X
    SE_KEY_Y|SE_MOD_LEFT_SHIFT,                       // Y
    SE_KEY_Z|SE_MOD_LEFT_SHIFT,                       // Z
    SE_KEY_8|SE_MOD_RIGHT_ALT,                        // [
    SE_KEY_SE_PLUS|SE_MOD_RIGHT_ALT,                  // bslash
    SE_KEY_9|SE_MOD_RIGHT_ALT,                        // ]
    SE_KEY_RESERVED,                               // ^ (Dead key)
    SE_KEY_SE_MINUS|SE_MOD_LEFT_SHIFT,                // _
    SE_KEY_RESERVED,                               // ` (Dead key)
    SE_KEY_A,                                      // a
    SE_KEY_B,                                      // b
    SE_KEY_C,                                      // c
    SE_KEY_D,                                      // d
    SE_KEY_E,                                      // e
    SE_KEY_F,                                      // f
    SE_KEY_G,                                      // g
    SE_KEY_H,                                      // h
    SE_KEY_I,                                      // i
    SE_KEY_J,                                      // j
    SE_KEY_K,                                      // k
    SE_KEY_L,                                      // l
    SE_KEY_M,                                      // m
    SE_KEY_N,                                      // n
    SE_KEY_O,                                      // o
    SE_KEY_P,                                      // p
    SE_KEY_Q,                                      // q
    SE_KEY_R,                                      // r
    SE_KEY_S,                                      // s
    SE_KEY_T,                                      // t
    SE_KEY_U,                                      // u
    SE_KEY_V,                                      // v
    SE_KEY_W,                                      // w
    SE_KEY_X,                                      // x
    SE_KEY_Y,                                      // y
    SE_KEY_Z,                                      // z
    SE_KEY_7|SE_MOD_RIGHT_ALT,                        // {
    SE_KEY_SE_SECTION,                             // |SE_
    SE_KEY_0|SE_MOD_RIGHT_ALT,                        // }
    SE_KEY_RESERVED,                               // ~ (Dead key)
    SE_KEY_RESERVED,                               // 127 - DEL
    SE_KEY_RESERVED,                               // 128 - Unused
    SE_KEY_RESERVED,                               // 129 - Unused
    SE_KEY_RESERVED,                               // 130 - Unused
    SE_KEY_RESERVED,                               // 131 - Unused
    SE_KEY_RESERVED,                               // 132 - Unused
    SE_KEY_RESERVED,                               // 133 - Unused
    SE_KEY_RESERVED,                               // 134 - Unused
    SE_KEY_RESERVED,                               // 135 - Unused
    SE_KEY_RESERVED,                               // 136 - Unused
    SE_KEY_RESERVED,                               // 137 - Unused
    SE_KEY_RESERVED,                               // 138 - Unused
    SE_KEY_RESERVED,                               // 139 - Unused
    SE_KEY_RESERVED,                               // 140 - Unused
    SE_KEY_RESERVED,                               // 141 - Unused
    SE_KEY_RESERVED,                               // 142 - Unused
    SE_KEY_RESERVED,                               // 143 - Unused
    SE_KEY_RESERVED,                               // 144 - Unused
    SE_KEY_RESERVED,                               // 145 - Unused
    SE_KEY_RESERVED,                               // 146 - Unused
    SE_KEY_RESERVED,                               // 147 - Unused
    SE_KEY_RESERVED,                               // 148 - Unused
    SE_KEY_RESERVED,                               // 149 - Unused
    SE_KEY_RESERVED,                               // 150 - Unused
    SE_KEY_RESERVED,                               // 151 - Unused
    SE_KEY_RESERVED,                               // 152 - Unused
    SE_KEY_RESERVED,                               // 153 - Unused
    SE_KEY_RESERVED,                               // 154 - Unused
    SE_KEY_RESERVED,                               // 155 - Unused
    SE_KEY_RESERVED,                               // 156 - Unused
    SE_KEY_RESERVED,                               // 157 - Unused
    SE_KEY_RESERVED,                               // 158 - Unused
    SE_KEY_RESERVED,                               // 159 - Unused
    SE_KEY_RESERVED,                               // 160 - Non-breaking Space
    SE_KEY_RESERVED,                               // 161 - Inverted Exclamation Mark
    SE_KEY_RESERVED,                               // 162 - Cent
    SE_KEY_RESERVED,                               // 163 - British Pound Sign
    SE_KEY_5|SE_MOD_RIGHT_ALT,                        // 164 - Euro Sign
    SE_KEY_RESERVED,                               // 165 - Yen
    SE_KEY_RESERVED,                               // 166 - Capital 's' Inverted Circumflex
    SE_KEY_SE_SECTION,                             // 167 - Section Sign
    SE_KEY_RESERVED,                               // 168 - 's' Inverted Circumflex
    SE_KEY_RESERVED,                               // 169 - Copyright Sign
    SE_KEY_RESERVED,                               // 170 - Superscript 'a'
    SE_KEY_RESERVED,                               // 171 - Open Guillemet
    SE_KEY_RESERVED,                               // 172 - Logic Negation
    SE_KEY_RESERVED,                               // 173 - Soft Hypen
    SE_KEY_RESERVED,                               // 174 - Registered Trademark
    SE_KEY_RESERVED,                               // 175 - Macron
    SE_KEY_RESERVED,                               // 176 - Degree Symbol
    SE_KEY_RESERVED,                               // 177 - Plus-Minus
    SE_KEY_RESERVED,                               // 178 - Superscript '2'
    SE_KEY_RESERVED,                               // 179 - Superscript '3'
    SE_KEY_RESERVED,                               // 180 - Capital 'z' Inverted Circumflex
    SE_KEY_M|SE_MOD_RIGHT_ALT,                        // 181 - Micro Symbol
    SE_KEY_RESERVED,                               // 182 - Paragraph Mark
    SE_KEY_RESERVED,                               // 183 - Interpunct
    SE_KEY_RESERVED,                               // 184 - 'z' Inverted Circumflex
    SE_KEY_RESERVED,                               // 185 - Superscript '1'
    SE_KEY_RESERVED,                               // 186 - Ordinal Indicator
    SE_KEY_RESERVED,                               // 187 - Closed Guillemet
    SE_KEY_RESERVED,                               // 188 - Capital 'oe'
    SE_KEY_RESERVED,                               // 189 - 'oe'
    SE_KEY_RESERVED,                               // 190 - Capital 'y' Umlaut
    SE_KEY_RESERVED,                               // 191 - Inverted Question Mark
    SE_KEY_RESERVED,                               // 192 - Capital 'a' Grave
    SE_KEY_RESERVED,                               // 193 - Capital 'a' Acute
    SE_KEY_RESERVED,                               // 194 - Capital 'a' Circumflex
    SE_KEY_RESERVED,                               // 195 - Capital 'a' Tilde
    SE_KEY_SE_AUMLAUT|SE_MOD_LEFT_SHIFT,              // 196 - Capital 'a' Umlaut
    SE_KEY_SE_ACIRCLE|SE_MOD_LEFT_SHIFT,              // 197 - Capital 'a' Circle
    SE_KEY_RESERVED,                               // 198 - Capital 'ae'
    SE_KEY_RESERVED,                               // 199 - Capital 'c' Cedilla
    SE_KEY_RESERVED,                               // 200 - Capital 'e' Grave
    SE_KEY_RESERVED,                               // 201 - Capital 'e' Acute
    SE_KEY_RESERVED,                               // 202 - Capital 'e' Circumflex
    SE_KEY_RESERVED,                               // 203 - Capital 'e' Umlaut
    SE_KEY_RESERVED,                               // 204 - Capital 'i' Grave
    SE_KEY_RESERVED,                               // 205 - Capital 'i' Acute
    SE_KEY_RESERVED,                               // 206 - Capital 'i' Circumflex
    SE_KEY_RESERVED,                               // 207 - Capital 'i' Umlaut
    SE_KEY_RESERVED,                               // 208 - Capital Eth
    SE_KEY_RESERVED,                               // 207 - Capital 'n' Tilde
    SE_KEY_RESERVED,                               // 210 - Capital 'o' Grave
    SE_KEY_RESERVED,                               // 211 - Capital 'o' Acute
    SE_KEY_RESERVED,                               // 212 - Capital 'o' Circumflex
    SE_KEY_RESERVED,                               // 213 - Capital 'o' Tilde
    SE_KEY_RESERVED,                               // 214 - Capital 'o' Umlaut
    SE_KEY_RESERVED,                               // 215 - Multiplication Sign
    SE_KEY_RESERVED,                               // 216 - Capital 'o' Barred
    SE_KEY_RESERVED,                               // 217 - Capital 'u' Grave
    SE_KEY_RESERVED,                               // 218 - Capital 'u' Acute
    SE_KEY_RESERVED,                               // 219 - Capital 'u' Circumflex
    SE_KEY_SE_OUMLAUT|SE_MOD_LEFT_SHIFT,              // 220 - Capital 'u' Umlaut
    SE_KEY_RESERVED,                               // 221 - Capital 'y' Acute
    SE_KEY_RESERVED,                               // 222 - Capital Thorn
    SE_KEY_RESERVED,                               // 223 - Eszett
    SE_KEY_RESERVED,                               // 224 - 'a' Grave
    SE_KEY_RESERVED,                               // 225 - 'a' Acute
    SE_KEY_RESERVED,                               // 226 - 'a' Circumflex
    SE_KEY_RESERVED,                               // 227 - 'a' Tilde
    SE_KEY_SE_AUMLAUT,                             // 228 - 'a' Umlaut
    SE_KEY_SE_ACIRCLE,                             // 229 - 'a' Circle
    SE_KEY_RESERVED,                               // 230 - 'ae'
    SE_KEY_RESERVED,                               // 231 - 'c' Cedilla
    SE_KEY_RESERVED,                               // 232 - 'e' Grave
    SE_KEY_RESERVED,                               // 233 - 'e' Acute
    SE_KEY_RESERVED,                               // 234 - 'e' Circumflex
    SE_KEY_RESERVED,                               // 235 - 'e' Umlaut
    SE_KEY_RESERVED,                               // 236 - 'i' Grave
    SE_KEY_RESERVED,                               // 237 - 'i' Acute
    SE_KEY_RESERVED,                               // 238 - 'i' Circumflex
    SE_KEY_RESERVED,                               // 239 - 'i' Umlaut
    SE_KEY_RESERVED,                               // 240 - Eth
    SE_KEY_RESERVED,                               // 241 - 'n' Tilde
    SE_KEY_RESERVED,                               // 242 - 'o' Grave
    SE_KEY_RESERVED,                               // 243 - 'o' Acute
    SE_KEY_RESERVED,                               // 244 - 'o' Circumflex
    SE_KEY_RESERVED,                               // 245 - 'o' Tilde
    SE_KEY_SE_OUMLAUT,                             // 246 - 'o' Umlaut
    SE_KEY_RESERVED,                               // 247 - Multiplication Sign
    SE_KEY_RESERVED,                               // 248 - 'o' Barred
    SE_KEY_RESERVED,                               // 249 - 'u' Grave
    SE_KEY_RESERVED,                               // 250 - 'u' Acute
    SE_KEY_RESERVED,                               // 251 - 'u' Circumflex
    SE_KEY_RESERVED,                               // 252 - 'u' Umlaut
    SE_KEY_RESERVED,                               // 253 - 'y' Acute
    SE_KEY_RESERVED,                               // 254 - Thorn
    SE_KEY_RESERVED,                               // 255 - 'y' Umlaut
};
