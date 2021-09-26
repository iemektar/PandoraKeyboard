
enum KeyboardModsPT : uint16_t {
    PT_MOD_LEFT_CTRL       = (1 <<  8),
    PT_MOD_LEFT_SHIFT      = (1 <<  9),
    PT_MOD_LEFT_ALT        = (1 << 10),
    PT_MOD_LEFT_GUI        = (1 << 11),
    PT_MOD_RIGHT_CTRL      = (1 << 12),
    PT_MOD_RIGHT_SHIFT     = (1 << 13),
    PT_MOD_RIGHT_ALT       = (1 << 14),
    PT_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};


// Hut1_12v2.pdf

enum KeyboardKeycodePT : uint8_t {
    PT_KEY_RESERVED        =  0,
    PT_KEY_ERROR_ROLLOVER  =  1,
    PT_KEY_POST_FAIL       =  2,
    PT_KEY_ERROR_UNDEFINED =  3,
    PT_KEY_A               =  4,
    PT_KEY_B               =  5,
    PT_KEY_C               =  6,
    PT_KEY_D               =  7,
    PT_KEY_E               =  8,
    PT_KEY_F               =  9,
    PT_KEY_G               = 10,
    PT_KEY_H               = 11,
    PT_KEY_I               = 12,
    PT_KEY_J               = 13,
    PT_KEY_K               = 14,
    PT_KEY_L               = 15,
    PT_KEY_M               = 16,
    PT_KEY_N               = 17,
    PT_KEY_O               = 18,
    PT_KEY_P               = 19,
    PT_KEY_Q               = 20,
    PT_KEY_R               = 21,
    PT_KEY_S               = 22,
    PT_KEY_T               = 23,
    PT_KEY_U               = 24,
    PT_KEY_V               = 25,
    PT_KEY_W               = 26,
    PT_KEY_X               = 27,
    PT_KEY_Y               = 28,
    PT_KEY_Z               = 29,
    PT_KEY_1               = 30,
    PT_KEY_2               = 31,
    PT_KEY_3               = 32,
    PT_KEY_4               = 33,
    PT_KEY_5               = 34,
    PT_KEY_6               = 35,
    PT_KEY_7               = 36,
    PT_KEY_8               = 37,
    PT_KEY_9               = 38,
    PT_KEY_0               = 39,
    PT_KEY_ENTER           = 40,
    PT_KEY_RETURN          = 40, // Alias
    PT_KEY_ESC             = 41,
    PT_KEY_BACKSPACE       = 42,
    PT_KEY_TAB             = 43,
    PT_KEY_SPACE           = 44,
    PT_KEY_MINUS           = 45,
    PT_KEY_EQUAL           = 46,
    PT_KEY_LEFT_BRACE      = 47,
    PT_KEY_RIGHT_BRACE     = 48,
    PT_KEY_BACKSLASH       = 49,
    PT_KEY_NON_US_NUM      = 50,
    PT_KEY_SEMICOLON       = 51,
    PT_KEY_QUOTE           = 52,
    PT_KEY_TILDE           = 53,
    PT_KEY_COMMA           = 54,
    PT_KEY_PERIOD          = 55,
    PT_KEY_SLASH           = 56,
    PT_KEY_CAPS_LOCK       = 0x39,
    PT_KEY_F1              = 0x3A,
    PT_KEY_F2              = 0x3B,
    PT_KEY_F3              = 0x3C,
    PT_KEY_F4              = 0x3D,
    PT_KEY_F5              = 0x3E,
    PT_KEY_F6              = 0x3F,
    PT_KEY_F7              = 0x40,
    PT_KEY_F8              = 0x41,
    PT_KEY_F9              = 0x42,
    PT_KEY_F10             = 0x43,
    PT_KEY_F11             = 0x44,
    PT_KEY_F12             = 0x45,
    PT_KEY_PRINT           = 0x46,
    PT_KEY_PRINTSCREEN     = 0x46, // Alias
    PT_KEY_SCROLL_LOCK     = 0x47,
    PT_KEY_PAUSE           = 0x48,
    PT_KEY_INSERT          = 0x49,
    PT_KEY_HOME            = 0x4A,
    PT_KEY_PAGE_UP         = 0x4B,
    PT_KEY_DELETE          = 0x4C,
    PT_KEY_END             = 0x4D,
    PT_KEY_PAGE_DOWN       = 0x4E,
    PT_KEY_RIGHT_ARROW     = 0x4F,
    PT_KEY_LEFT_ARROW      = 0x50,
    PT_KEY_DOWN_ARROW      = 0x51,
    PT_KEY_UP_ARROW        = 0x52,
    PT_KEY_RIGHT           = 0x4F, // Alias
    PT_KEY_LEFT            = 0x50, // Alias
    PT_KEY_DOWN            = 0x51, // Alias
    PT_KEY_UP              = 0x52, // Alias
    PT_KEY_NUM_LOCK        = 0x53,
    PT_KEYPAD_DIVIDE       = 0x54,
    PT_KEYPAD_MULTIPLY     = 0x55,
    PT_KEYPAD_SUBTRACT     = 0x56,
    PT_KEYPAD_ADD          = 0x57,
    PT_KEYPAD_ENTER        = 0x58,
    PT_KEYPAD_1            = 0x59,
    PT_KEYPAD_2            = 0x5A,
    PT_KEYPAD_3            = 0x5B,
    PT_KEYPAD_4            = 0x5C,
    PT_KEYPAD_5            = 0x5D,
    PT_KEYPAD_6            = 0x5E,
    PT_KEYPAD_7            = 0x5F,
    PT_KEYPAD_8            = 0x60,
    PT_KEYPAD_9            = 0x61,
    PT_KEYPAD_0            = 0x62,
    PT_KEYPAD_DOT          = 0x63,
    PT_KEY_NON_US          = 0x64,
    PT_KEY_APPLICATION     = 0x65, // Context menu/right click
    PT_KEY_MENU            = 0x65,
    PT_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    PT_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    PT_KEY_F13             = 0x68, // Tools (Ubunutu)
    PT_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    PT_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    PT_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    PT_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    PT_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    PT_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    PT_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    PT_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    PT_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    PT_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    PT_KEY_F24             = 0x73, // Disabled (Ubuntu)
    PT_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    PT_KEY_HELP            = 0x75, // Help (Ubuntu)
    PT_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    PT_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    PT_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    PT_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    PT_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    PT_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    PT_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    PT_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    PT_KEY_FIND            = 0x7E, // Find (Ubuntu)
    PT_KEY_MUTE            = 0x7F,
    PT_KEY_VOLUME_MUTE     = 0x7F, // Alias
    PT_KEY_VOLUME_UP       = 0x80,
    PT_KEY_VOLUME_DOWN     = 0x81,
    PT_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    PT_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    PT_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    PT_KEYPAD_COMMA            = 0x85, // .
    PT_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    PT_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    PT_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    PT_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    PT_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    PT_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    PT_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    PT_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    PT_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    PT_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    PT_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    PT_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    PT_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    PT_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    PT_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    PT_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    PT_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    PT_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    PT_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    PT_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    PT_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    PT_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    PT_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    PT_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    PT_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    PT_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    PT_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    PT_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    PT_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    PT_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    PT_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    PT_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    PT_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    PT_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    PT_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    PT_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    PT_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    PT_KEYPAD_LEFT_BRACE           = 0xB6, // (
    PT_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    PT_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    PT_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    PT_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    PT_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    PT_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    PT_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    PT_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    PT_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    PT_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    PT_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    PT_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    PT_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    PT_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    PT_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    PT_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    PT_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    PT_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    PT_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    PT_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    PT_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    PT_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    PT_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    PT_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    PT_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    PT_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    PT_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    PT_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    PT_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    PT_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    PT_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    PT_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    PT_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    PT_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    PT_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    PT_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    PT_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    PT_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    PT_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    PT_KEY_LEFT_CTRL           = 0xE0,
    PT_KEY_LEFT_SHIFT          = 0xE1,
    PT_KEY_LEFT_ALT            = 0xE2,
    PT_KEY_LEFT_GUI            = 0xE3,
    PT_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    PT_KEY_RIGHT_CTRL          = 0xE4,
    PT_KEY_RIGHT_SHIFT         = 0xE5,
    PT_KEY_RIGHT_ALT           = 0xE6,
    PT_KEY_RIGHT_GUI           = 0xE7,
    PT_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    PT_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    PT_HID_KEYBOARD_POST_FAIL  = 0x02,
    PT_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    PT_HID_KEYBOARD_A_AND_A    = 0x04,
    PT_HID_KEYBOARD_B_AND_B    = 0x05,
    PT_HID_KEYBOARD_C_AND_C    = 0x06,
    PT_HID_KEYBOARD_D_AND_D    = 0x07,
    PT_HID_KEYBOARD_E_AND_E    = 0x08,
    PT_HID_KEYBOARD_F_AND_F    = 0x09,
    PT_HID_KEYBOARD_G_AND_G    = 0x0A,
    PT_HID_KEYBOARD_H_AND_H    = 0x0B,
    PT_HID_KEYBOARD_I_AND_I    = 0x0C,
    PT_HID_KEYBOARD_J_AND_J    = 0x0D,
    PT_HID_KEYBOARD_K_AND_K    = 0x0E,
    PT_HID_KEYBOARD_L_AND_L    = 0x0F,
    PT_HID_KEYBOARD_M_AND_M    = 0x10,
    PT_HID_KEYBOARD_N_AND_N    = 0x11,
    PT_HID_KEYBOARD_O_AND_O    = 0x12,
    PT_HID_KEYBOARD_P_AND_P    = 0x13,
    PT_HID_KEYBOARD_Q_AND_Q    = 0x14,
    PT_HID_KEYBOARD_R_AND_R    = 0x15,
    PT_HID_KEYBOARD_S_AND_S    = 0x16,
    PT_HID_KEYBOARD_T_AND_T    = 0x17,
    PT_HID_KEYBOARD_U_AND_U    = 0x18,
    PT_HID_KEYBOARD_V_AND_V    = 0x19,
    PT_HID_KEYBOARD_W_AND_W    = 0x1A,
    PT_HID_KEYBOARD_X_AND_X    = 0x1B,
    PT_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    PT_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    PT_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    PT_HID_KEYBOARD_2_AND_AT   = 0x1F,
    PT_HID_KEYBOARD_3_AND_POUND    = 0x20,
    PT_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    PT_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    PT_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    PT_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    PT_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    PT_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    PT_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    PT_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    PT_HID_KEYBOARD_ESCAPE = 0x29,
    PT_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    PT_HID_KEYBOARD_TAB    = 0x2B,
    PT_HID_KEYBOARD_SPACEBAR   = 0x2C,
    PT_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    PT_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    PT_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    PT_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    PT_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    PT_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    PT_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    PT_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    PT_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    PT_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    PT_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    PT_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    PT_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    PT_HID_KEYBOARD_F1 = 0x3A,
    PT_HID_KEYBOARD_F2 = 0x3B,
    PT_HID_KEYBOARD_F3 = 0x3C,
    PT_HID_KEYBOARD_F4 = 0x3D,
    PT_HID_KEYBOARD_F5 = 0x3E,
    PT_HID_KEYBOARD_F6 = 0x3F,
    PT_HID_KEYBOARD_F7 = 0x40,
    PT_HID_KEYBOARD_F8 = 0x41,
    PT_HID_KEYBOARD_F9 = 0x42,
    PT_HID_KEYBOARD_F10    = 0x43,
    PT_HID_KEYBOARD_F11    = 0x44,
    PT_HID_KEYBOARD_F12    = 0x45,
    PT_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    PT_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    PT_HID_KEYBOARD_PAUSE  = 0x48,
    PT_HID_KEYBOARD_INSERT = 0x49,
    PT_HID_KEYBOARD_HOME   = 0x4A,
    PT_HID_KEYBOARD_PAGE_UP    = 0x4B,
    PT_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    PT_HID_KEYBOARD_END    = 0x4D,
    PT_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    PT_HID_KEYBOARD_RIGHTARROW = 0x4F,
    PT_HID_KEYBOARD_LEFTARROW  = 0x50,
    PT_HID_KEYBOARD_DOWNARROW  = 0x51,
    PT_HID_KEYBOARD_UPARROW    = 0x52,
    PT_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    PT_HID_KEYPAD_DIVIDE   = 0x54,
    PT_HID_KEYPAD_MULTIPLY = 0x55,
    PT_HID_KEYPAD_SUBTRACT = 0x56,
    PT_HID_KEYPAD_ADD  = 0x57,
    PT_HID_KEYPAD_ENTER    = 0x58,
    PT_HID_KEYPAD_1_AND_END    = 0x59,
    PT_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    PT_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    PT_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    PT_HID_KEYPAD_5    = 0x5D,
    PT_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    PT_HID_KEYPAD_7_AND_HOME   = 0x5F,
    PT_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    PT_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    PT_HID_KEYPAD_0_AND_INSERT = 0x62,
    PT_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    PT_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    PT_HID_KEYBOARD_APPLICATION    = 0x65,
    PT_HID_KEYBOARD_POWER  = 0x66,
    PT_HID_KEYPAD_EQUALS   = 0x67,
    PT_HID_KEYBOARD_F13    = 0x68,
    PT_HID_KEYBOARD_F14    = 0x69,
    PT_HID_KEYBOARD_F15    = 0x6A,
    PT_HID_KEYBOARD_F16    = 0x6B,
    PT_HID_KEYBOARD_F17    = 0x6C,
    PT_HID_KEYBOARD_F18    = 0x6D,
    PT_HID_KEYBOARD_F19    = 0x6E,
    PT_HID_KEYBOARD_F20    = 0x6F,
    PT_HID_KEYBOARD_F21    = 0x70,
    PT_HID_KEYBOARD_F22    = 0x71,
    PT_HID_KEYBOARD_F23    = 0x72,
    PT_HID_KEYBOARD_F24    = 0x73,
    PT_HID_KEYBOARD_EXECUTE    = 0x74,
    PT_HID_KEYBOARD_HELP   = 0x75,
    PT_HID_KEYBOARD_MENU   = 0x76,
    PT_HID_KEYBOARD_SELECT = 0x77,
    PT_HID_KEYBOARD_STOP   = 0x78,
    PT_HID_KEYBOARD_AGAIN  = 0x79,
    PT_HID_KEYBOARD_UNDO   = 0x7A,
    PT_HID_KEYBOARD_CUT    = 0x7B,
    PT_HID_KEYBOARD_COPY   = 0x7C,
    PT_HID_KEYBOARD_PASTE  = 0x7D,
    PT_HID_KEYBOARD_FIND   = 0x7E,
    PT_HID_KEYBOARD_MUTE   = 0x7F,
    PT_HID_KEYBOARD_VOLUME_UP  = 0x80,
    PT_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    PT_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    PT_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    PT_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    PT_HID_KEYPAD_COMMA    = 0x85,
    PT_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    PT_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    PT_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    PT_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    PT_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    PT_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    PT_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    PT_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    PT_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    PT_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    PT_HID_KEYBOARD_LANG1  = 0x90,
    PT_HID_KEYBOARD_LANG2  = 0x91,
    PT_HID_KEYBOARD_LANG3  = 0x92,
    PT_HID_KEYBOARD_LANG4  = 0x93,
    PT_HID_KEYBOARD_LANG5  = 0x94,
    PT_HID_KEYBOARD_LANG6  = 0x95,
    PT_HID_KEYBOARD_LANG7  = 0x96,
    PT_HID_KEYBOARD_LANG8  = 0x97,
    PT_HID_KEYBOARD_LANG9  = 0x98,
    PT_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    PT_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    PT_HID_KEYBOARD_CANCEL = 0x9B,
    PT_HID_KEYBOARD_CLEAR  = 0x9C,
    PT_HID_KEYBOARD_PRIOR  = 0x9D,
    PT_HID_KEYBOARD_RETURN = 0x9E,
    PT_HID_KEYBOARD_SEPARATOR  = 0x9F,
    PT_HID_KEYBOARD_OUT    = 0xA0,
    PT_HID_KEYBOARD_OPER   = 0xA1,
    PT_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    PT_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    PT_HID_KEYBOARD_EXSEL  = 0xA4,
    PT_HID_KEYPAD_00   = 0xB0,
    PT_HID_KEYPAD_000  = 0xB1,
    PT_HID_THOUSANDS_SEPARATOR = 0xB2,
    PT_HID_DECIMAL_SEPARATOR   = 0xB3,
    PT_HID_CURRENCY_UNIT   = 0xB4,
    PT_HID_CURRENCY_SUBUNIT    = 0xB5,
    PT_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    PT_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    PT_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    PT_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    PT_HID_KEYPAD_TAB  = 0xBA,
    PT_HID_KEYPAD_BACKSPACE    = 0xBB,
    PT_HID_KEYPAD_A    = 0xBC,
    PT_HID_KEYPAD_B    = 0xBD,
    PT_HID_KEYPAD_C    = 0xBE,
    PT_HID_KEYPAD_D    = 0xBF,
    PT_HID_KEYPAD_E    = 0xC0,
    PT_HID_KEYPAD_F    = 0xC1,
    PT_HID_KEYPAD_XOR  = 0xC2,
    PT_HID_KEYPAD_CARAT    = 0xC3,
    PT_HID_KEYPAD_PERCENT  = 0xC4,
    PT_HID_KEYPAD_LESS_THAN    = 0xC5,
    PT_HID_KEYPAD_GREATER_THAN = 0xC6,
    PT_HID_KEYPAD_AMPERSAND    = 0xC7,
    PT_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    PT_HID_KEYPAD_PIPE = 0xC9,
    PT_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    PT_HID_KEYPAD_COLON    = 0xCB,
    PT_HID_KEYPAD_POUND_SIGN   = 0xCC,
    PT_HID_KEYPAD_SPACE    = 0xCD,
    PT_HID_KEYPAD_AT_SIGN  = 0xCE,
    PT_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    PT_HID_KEYPAD_MEMORY_STORE = 0xD0,
    PT_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    PT_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    PT_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    PT_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    PT_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    PT_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    PT_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    PT_HID_KEYPAD_CLEAR    = 0xD8,
    PT_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    PT_HID_KEYPAD_BINARY   = 0xDA,
    PT_HID_KEYPAD_OCTAL    = 0xDB,
    PT_HID_KEYPAD_DECIMAL  = 0xDC,
    PT_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    PT_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    PT_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    PT_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    PT_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    PT_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    PT_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    PT_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    PT_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};



// Key aliases
#define PT_KEY_PT_QUOTE        PT_KEY_MINUS
#define PT_KEY_PT_GUILLS       PT_KEY_EQUAL
#define PT_KEY_PT_PLUS         PT_KEY_LEFT_BRACE
#define PT_KEY_PT_ACCENTS1     PT_KEY_RIGHT_BRACE
#define PT_KEY_PT_ACCENTS2     PT_KEY_BACKSLASH
#define PT_KEY_PT_CEDILLA      PT_KEY_SEMICOLON
#define PT_KEY_PT_AO           PT_KEY_QUOTE
#define PT_KEY_PT_BACKSLASH    PT_KEY_TILDE
#define PT_KEY_PT_LT_GT        PT_KEY_NON_US
#define PT_KEY_PT_MINUS        PT_KEY_SLASH


static const uint16_t _asciimapPT[] PROGMEM =
{
   PT_KEY_RESERVED,                       // NUL
   PT_KEY_RESERVED,                       // SOH
   PT_KEY_RESERVED,                       // STX
   PT_KEY_RESERVED,                       // ETX
   PT_KEY_RESERVED,                       // EOT
   PT_KEY_RESERVED,                       // ENQ
   PT_KEY_RESERVED,                       // ACK
   PT_KEY_RESERVED,                       // BEL
   PT_KEY_BACKSPACE,                      // BS   Backspace
   PT_KEY_TAB,                            // TAB  Tab
   PT_KEY_ENTER,                          // LF   Enter
   PT_KEY_RESERVED,                       // VT
   PT_KEY_RESERVED,                       // FF
   PT_KEY_RESERVED,                       // CR
   PT_KEY_RESERVED,                       // SO
   PT_KEY_RESERVED,                       // SI
   PT_KEY_RESERVED,                       // DEL
   PT_KEY_RESERVED,                       // DC1
   PT_KEY_RESERVED,                       // DC2
   PT_KEY_RESERVED,                       // DC3
   PT_KEY_RESERVED,                       // DC4
   PT_KEY_RESERVED,                       // NAK
   PT_KEY_RESERVED,                       // SYN
   PT_KEY_RESERVED,                       // ETB
   PT_KEY_RESERVED,                       // CAN
   PT_KEY_RESERVED,                       // EM
   PT_KEY_RESERVED,                       // SUB
   PT_KEY_RESERVED,                       // ESC
   PT_KEY_RESERVED,                       // FS
   PT_KEY_RESERVED,                       // GS
   PT_KEY_RESERVED,                       // RS
   PT_KEY_RESERVED,                       // US
   PT_KEY_SPACE,                          // ' ' Space
   PT_KEY_1|PT_MOD_LEFT_SHIFT,               // !
   PT_KEY_2|PT_MOD_LEFT_SHIFT,               // "
   PT_KEY_3|PT_MOD_LEFT_SHIFT,               // #
   PT_KEY_4|PT_MOD_LEFT_SHIFT,               // $
   PT_KEY_5|PT_MOD_LEFT_SHIFT,               // %
   PT_KEY_6|PT_MOD_LEFT_SHIFT,               // &
   PT_KEY_PT_QUOTE,                       // '
   PT_KEY_8|PT_MOD_LEFT_SHIFT,               // (
   PT_KEY_9|PT_MOD_LEFT_SHIFT,               // )
   PT_KEY_PT_PLUS|PT_MOD_LEFT_SHIFT,         // *
   PT_KEY_PT_PLUS,                        // +
   PT_KEY_COMMA,                          // ,
   PT_KEY_PT_MINUS,                       // -
   PT_KEY_PERIOD,                         // .
   PT_KEY_7|PT_MOD_LEFT_SHIFT,               // /
   PT_KEY_0,                              // 0
   PT_KEY_1,                              // 1
   PT_KEY_2,                              // 2
   PT_KEY_3,                              // 3
   PT_KEY_4,                              // 4
   PT_KEY_5,                              // 5
   PT_KEY_6,                              // 6
   PT_KEY_7,                              // 7
   PT_KEY_8,                              // 8
   PT_KEY_9,                              // 9
   PT_KEY_PERIOD|PT_MOD_LEFT_SHIFT,          // :
   PT_KEY_COMMA|PT_MOD_LEFT_SHIFT,           // ;
   PT_KEY_PT_LT_GT,                       // <
   PT_KEY_0|PT_MOD_LEFT_SHIFT,               // =
   PT_KEY_PT_LT_GT|PT_MOD_LEFT_SHIFT,        // >
   PT_KEY_PT_QUOTE|PT_MOD_LEFT_SHIFT,        // ?
   PT_KEY_2|PT_MOD_RIGHT_ALT,                // @
   PT_KEY_A|PT_MOD_LEFT_SHIFT,               // A
   PT_KEY_B|PT_MOD_LEFT_SHIFT,               // B
   PT_KEY_C|PT_MOD_LEFT_SHIFT,               // C
   PT_KEY_D|PT_MOD_LEFT_SHIFT,               // D
   PT_KEY_E|PT_MOD_LEFT_SHIFT,               // E
   PT_KEY_F|PT_MOD_LEFT_SHIFT,               // F
   PT_KEY_G|PT_MOD_LEFT_SHIFT,               // G
   PT_KEY_H|PT_MOD_LEFT_SHIFT,               // H
   PT_KEY_I|PT_MOD_LEFT_SHIFT,               // I
   PT_KEY_J|PT_MOD_LEFT_SHIFT,               // J
   PT_KEY_K|PT_MOD_LEFT_SHIFT,               // K
   PT_KEY_L|PT_MOD_LEFT_SHIFT,               // L
   PT_KEY_M|PT_MOD_LEFT_SHIFT,               // M
   PT_KEY_N|PT_MOD_LEFT_SHIFT,               // N
   PT_KEY_O|PT_MOD_LEFT_SHIFT,               // O
   PT_KEY_P|PT_MOD_LEFT_SHIFT,               // P
   PT_KEY_Q|PT_MOD_LEFT_SHIFT,               // Q
   PT_KEY_R|PT_MOD_LEFT_SHIFT,               // R
   PT_KEY_S|PT_MOD_LEFT_SHIFT,               // S
   PT_KEY_T|PT_MOD_LEFT_SHIFT,               // T
   PT_KEY_U|PT_MOD_LEFT_SHIFT,               // U
   PT_KEY_V|PT_MOD_LEFT_SHIFT,               // V
   PT_KEY_W|PT_MOD_LEFT_SHIFT,               // W
   PT_KEY_X|PT_MOD_LEFT_SHIFT,               // X
   PT_KEY_Y|PT_MOD_LEFT_SHIFT,               // Y
   PT_KEY_Z|PT_MOD_LEFT_SHIFT,               // Z
   PT_KEY_8|PT_MOD_RIGHT_ALT,                // [
   PT_KEY_PT_BACKSLASH,                   // bslash
   PT_KEY_9|PT_MOD_RIGHT_ALT,                // ]
   PT_KEY_RESERVED,                       // ^ (Dead key)
   PT_KEY_PT_MINUS|PT_MOD_LEFT_SHIFT,        // _
   PT_KEY_RESERVED,                       // ` (Dead key)
   PT_KEY_A,                              // a
   PT_KEY_B,                              // b
   PT_KEY_C,                              // c
   PT_KEY_D,                              // d
   PT_KEY_E,                              // e
   PT_KEY_F,                              // f
   PT_KEY_G,                              // g
   PT_KEY_H,                              // h
   PT_KEY_I,                              // i
   PT_KEY_J,                              // j
   PT_KEY_K,                              // k
   PT_KEY_L,                              // l
   PT_KEY_M,                              // m
   PT_KEY_N,                              // n
   PT_KEY_O,                              // o
   PT_KEY_P,                              // p
   PT_KEY_Q,                              // q
   PT_KEY_R,                              // r
   PT_KEY_S,                              // s
   PT_KEY_T,                              // t
   PT_KEY_U,                              // u
   PT_KEY_V,                              // v
   PT_KEY_W,                              // w
   PT_KEY_X,                              // x
   PT_KEY_Y,                              // y
   PT_KEY_Z,                              // z
   PT_KEY_7|PT_MOD_RIGHT_ALT,                // {
   PT_KEY_PT_BACKSLASH|PT_MOD_LEFT_SHIFT,    // |PT_
   PT_KEY_0|PT_MOD_RIGHT_ALT,                // }
   PT_KEY_RESERVED,                       // ~ (Dead key)
   PT_KEY_RESERVED,                       // 127 - DEL
   PT_KEY_RESERVED,                       // 128 - Unused
   PT_KEY_RESERVED,                       // 129 - Unused
   PT_KEY_RESERVED,                       // 130 - Unused
   PT_KEY_RESERVED,                       // 131 - Unused
   PT_KEY_RESERVED,                       // 132 - Unused
   PT_KEY_RESERVED,                       // 133 - Unused
   PT_KEY_RESERVED,                       // 134 - Unused
   PT_KEY_RESERVED,                       // 135 - Unused
   PT_KEY_RESERVED,                       // 136 - Unused
   PT_KEY_RESERVED,                       // 137 - Unused
   PT_KEY_RESERVED,                       // 138 - Unused
   PT_KEY_RESERVED,                       // 139 - Unused
   PT_KEY_RESERVED,                       // 140 - Unused
   PT_KEY_RESERVED,                       // 141 - Unused
   PT_KEY_RESERVED,                       // 142 - Unused
   PT_KEY_RESERVED,                       // 143 - Unused
   PT_KEY_RESERVED,                       // 144 - Unused
   PT_KEY_RESERVED,                       // 145 - Unused
   PT_KEY_RESERVED,                       // 146 - Unused
   PT_KEY_RESERVED,                       // 147 - Unused
   PT_KEY_RESERVED,                       // 148 - Unused
   PT_KEY_RESERVED,                       // 149 - Unused
   PT_KEY_RESERVED,                       // 150 - Unused
   PT_KEY_RESERVED,                       // 151 - Unused
   PT_KEY_RESERVED,                       // 152 - Unused
   PT_KEY_RESERVED,                       // 153 - Unused
   PT_KEY_RESERVED,                       // 154 - Unused
   PT_KEY_RESERVED,                       // 155 - Unused
   PT_KEY_RESERVED,                       // 156 - Unused
   PT_KEY_RESERVED,                       // 157 - Unused
   PT_KEY_RESERVED,                       // 158 - Unused
   PT_KEY_RESERVED,                       // 159 - Unused
   PT_KEY_RESERVED,                       // 160 - Non-breaking Space
   PT_KEY_RESERVED,                       // 161 - Inverted Exclamation Mark
   PT_KEY_RESERVED,                       // 162 - Cent
   PT_KEY_3|PT_MOD_RIGHT_ALT,                // 163 - British Pound Sign
   PT_KEY_E|PT_MOD_RIGHT_ALT,                // 164 - Euro Sign
   PT_KEY_RESERVED,                       // 165 - Yen
   PT_KEY_RESERVED,                       // 166 - Capital 's' Inverted Circumflex
   PT_KEY_4|PT_MOD_RIGHT_ALT,                // 167 - Section Sign
   PT_KEY_RESERVED,                       // 168 - 's' Inverted Circumflex
   PT_KEY_RESERVED,                       // 169 - Copyright Sign
   PT_KEY_PT_AO|PT_MOD_LEFT_SHIFT,           // 170 - Superscript 'a'
   PT_KEY_PT_GUILLS,                      // 171 - Open Guillemet
   PT_KEY_RESERVED,                       // 172 - Logic Negation
   PT_KEY_RESERVED,                       // 173 - Soft Hypen
   PT_KEY_RESERVED,                       // 174 - Registered Trademark
   PT_KEY_RESERVED,                       // 175 - Macron
   PT_KEY_PT_AO,                          // 176 - Degree Symbol
   PT_KEY_RESERVED,                       // 177 - Plus-Minus
   PT_KEY_RESERVED,                       // 178 - Superscript '2'
   PT_KEY_RESERVED,                       // 179 - Superscript '3'
   PT_KEY_RESERVED,                       // 180 - Capital 'z' Inverted Circumflex
   PT_KEY_RESERVED,                       // 181 - Micro Symbol
   PT_KEY_RESERVED,                       // 182 - Paragraph Mark
   PT_KEY_RESERVED,                       // 183 - Interpunct
   PT_KEY_RESERVED,                       // 184 - 'z' Inverted Circumflex
   PT_KEY_RESERVED,                       // 185 - Superscript '1'
   PT_KEY_RESERVED,                       // 186 - Ordinal Indicator
   PT_KEY_PT_GUILLS|PT_MOD_LEFT_SHIFT,       // 187 - Closed Guillemet
   PT_KEY_RESERVED,                       // 188 - Capital 'oe'
   PT_KEY_RESERVED,                       // 189 - 'oe'
   PT_KEY_RESERVED,                       // 190 - Capital 'y' Umlaut
   PT_KEY_RESERVED,                       // 191 - Inverted Question Mark
   PT_KEY_RESERVED,                       // 192 - Capital 'a' Grave
   PT_KEY_RESERVED,                       // 193 - Capital 'a' Acute
   PT_KEY_RESERVED,                       // 194 - Capital 'a' Circumflex
   PT_KEY_RESERVED,                       // 195 - Capital 'a' Tilde
   PT_KEY_RESERVED,                       // 196 - Capital 'a' Umlaut
   PT_KEY_RESERVED,                       // 197 - Capital 'a' Circle
   PT_KEY_RESERVED,                       // 198 - Capital 'ae'
   PT_KEY_PT_CEDILLA|PT_MOD_LEFT_SHIFT,      // 199 - Capital 'c' Cedilla
   PT_KEY_RESERVED,                       // 200 - Capital 'e' Grave
   PT_KEY_RESERVED,                       // 201 - Capital 'e' Acute
   PT_KEY_RESERVED,                       // 202 - Capital 'e' Circumflex
   PT_KEY_RESERVED,                       // 203 - Capital 'e' Umlaut
   PT_KEY_RESERVED,                       // 204 - Capital 'i' Grave
   PT_KEY_RESERVED,                       // 205 - Capital 'i' Acute
   PT_KEY_RESERVED,                       // 206 - Capital 'i' Circumflex
   PT_KEY_RESERVED,                       // 207 - Capital 'i' Umlaut
   PT_KEY_RESERVED,                       // 208 - Capital Eth
   PT_KEY_RESERVED,                       // 207 - Capital 'n' Tilde
   PT_KEY_RESERVED,                       // 210 - Capital 'o' Grave
   PT_KEY_RESERVED,                       // 211 - Capital 'o' Acute
   PT_KEY_RESERVED,                       // 212 - Capital 'o' Circumflex
   PT_KEY_RESERVED,                       // 213 - Capital 'o' Tilde
   PT_KEY_RESERVED,                       // 214 - Capital 'o' Umlaut
   PT_KEY_RESERVED,                       // 215 - Multiplication Sign
   PT_KEY_RESERVED,                       // 216 - Capital 'o' Barred
   PT_KEY_RESERVED,                       // 217 - Capital 'u' Grave
   PT_KEY_RESERVED,                       // 218 - Capital 'u' Acute
   PT_KEY_RESERVED,                       // 219 - Capital 'u' Circumflex
   PT_KEY_RESERVED,                       // 220 - Capital 'u' Umlaut
   PT_KEY_RESERVED,                       // 221 - Capital 'y' Acute
   PT_KEY_RESERVED,                       // 222 - Capital Thorn
   PT_KEY_RESERVED,                       // 223 - Eszett
   PT_KEY_RESERVED,                       // 224 - 'a' Grave
   PT_KEY_RESERVED,                       // 225 - 'a' Acute
   PT_KEY_RESERVED,                       // 226 - 'a' Circumflex
   PT_KEY_RESERVED,                       // 227 - 'a' Tilde
   PT_KEY_RESERVED,                       // 228 - 'a' Umlaut
   PT_KEY_RESERVED,                       // 229 - 'a' Circle
   PT_KEY_RESERVED,                       // 230 - 'ae'
   PT_KEY_PT_CEDILLA,                     // 231 - 'c' Cedilla
   PT_KEY_RESERVED,                       // 232 - 'e' Grave
   PT_KEY_RESERVED,                       // 233 - 'e' Acute
   PT_KEY_RESERVED,                       // 234 - 'e' Circumflex
   PT_KEY_RESERVED,                       // 235 - 'e' Umlaut
   PT_KEY_RESERVED,                       // 236 - 'i' Grave
   PT_KEY_RESERVED,                       // 237 - 'i' Acute
   PT_KEY_RESERVED,                       // 238 - 'i' Circumflex
   PT_KEY_RESERVED,                       // 239 - 'i' Umlaut
   PT_KEY_RESERVED,                       // 240 - Eth
   PT_KEY_RESERVED,                       // 241 - 'n' Tilde
   PT_KEY_RESERVED,                       // 242 - 'o' Grave
   PT_KEY_RESERVED,                       // 243 - 'o' Acute
   PT_KEY_RESERVED,                       // 244 - 'o' Circumflex
   PT_KEY_RESERVED,                       // 245 - 'o' Tilde
   PT_KEY_RESERVED,                       // 246 - 'o' Umlaut
   PT_KEY_RESERVED,                       // 247 - Multiplication Sign
   PT_KEY_RESERVED,                       // 248 - 'o' Barred
   PT_KEY_RESERVED,                       // 249 - 'u' Grave
   PT_KEY_RESERVED,                       // 250 - 'u' Acute
   PT_KEY_RESERVED,                       // 251 - 'u' Circumflex
   PT_KEY_RESERVED,                       // 252 - 'u' Umlaut
   PT_KEY_RESERVED,                       // 253 - 'y' Acute
   PT_KEY_RESERVED,                       // 254 - Thorn
   PT_KEY_RESERVED,                       // 255 - 'y' Umlaut
};
