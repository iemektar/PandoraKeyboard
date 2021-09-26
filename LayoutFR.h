
enum KeyboardModsFR : uint16_t {
    FR_MOD_LEFT_CTRL       = (1 <<  8),
    FR_MOD_LEFT_SHIFT      = (1 <<  9),
    FR_MOD_LEFT_ALT        = (1 << 10),
    FR_MOD_LEFT_GUI        = (1 << 11),
    FR_MOD_RIGHT_CTRL      = (1 << 12),
    FR_MOD_RIGHT_SHIFT     = (1 << 13),
    FR_MOD_RIGHT_ALT       = (1 << 14),
    FR_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};


// Hut1_12v2.pdf

enum KeyboardKeycodeFR : uint8_t {
    FR_KEY_RESERVED        =  0,
    FR_KEY_ERROR_ROLLOVER  =  1,
    FR_KEY_POST_FAIL       =  2,
    FR_KEY_ERROR_UNDEFINED =  3,
    FR_KEY_A               =  4,
    FR_KEY_B               =  5,
    FR_KEY_C               =  6,
    FR_KEY_D               =  7,
    FR_KEY_E               =  8,
    FR_KEY_F               =  9,
    FR_KEY_G               = 10,
    FR_KEY_H               = 11,
    FR_KEY_I               = 12,
    FR_KEY_J               = 13,
    FR_KEY_K               = 14,
    FR_KEY_L               = 15,
    FR_KEY_M               = 16,
    FR_KEY_N               = 17,
    FR_KEY_O               = 18,
    FR_KEY_P               = 19,
    FR_KEY_Q               = 20,
    FR_KEY_R               = 21,
    FR_KEY_S               = 22,
    FR_KEY_T               = 23,
    FR_KEY_U               = 24,
    FR_KEY_V               = 25,
    FR_KEY_W               = 26,
    FR_KEY_X               = 27,
    FR_KEY_Y               = 28,
    FR_KEY_Z               = 29,
    FR_KEY_1               = 30,
    FR_KEY_2               = 31,
    FR_KEY_3               = 32,
    FR_KEY_4               = 33,
    FR_KEY_5               = 34,
    FR_KEY_6               = 35,
    FR_KEY_7               = 36,
    FR_KEY_8               = 37,
    FR_KEY_9               = 38,
    FR_KEY_0               = 39,
    FR_KEY_ENTER           = 40,
    FR_KEY_RETURN          = 40, // Alias
    FR_KEY_ESC             = 41,
    FR_KEY_BACKSPACE       = 42,
    FR_KEY_TAB             = 43,
    FR_KEY_SPACE           = 44,
    FR_KEY_MINUS           = 45,
    FR_KEY_EQUAL           = 46,
    FR_KEY_LEFT_BRACE      = 47,
    FR_KEY_RIGHT_BRACE     = 48,
    FR_KEY_BACKSLASH       = 49,
    FR_KEY_NON_US_NUM      = 50,
    FR_KEY_SEMICOLON       = 51,
    FR_KEY_QUOTE           = 52,
    FR_KEY_TILDE           = 53,
    FR_KEY_COMMA           = 54,
    FR_KEY_PERIOD          = 55,
    FR_KEY_SLASH           = 56,
    FR_KEY_CAPS_LOCK       = 0x39,
    FR_KEY_F1              = 0x3A,
    FR_KEY_F2              = 0x3B,
    FR_KEY_F3              = 0x3C,
    FR_KEY_F4              = 0x3D,
    FR_KEY_F5              = 0x3E,
    FR_KEY_F6              = 0x3F,
    FR_KEY_F7              = 0x40,
    FR_KEY_F8              = 0x41,
    FR_KEY_F9              = 0x42,
    FR_KEY_F10             = 0x43,
    FR_KEY_F11             = 0x44,
    FR_KEY_F12             = 0x45,
    FR_KEY_PRINT           = 0x46,
    FR_KEY_PRINTSCREEN     = 0x46, // Alias
    FR_KEY_SCROLL_LOCK     = 0x47,
    FR_KEY_PAUSE           = 0x48,
    FR_KEY_INSERT          = 0x49,
    FR_KEY_HOME            = 0x4A,
    FR_KEY_PAGE_UP         = 0x4B,
    FR_KEY_DELETE          = 0x4C,
    FR_KEY_END             = 0x4D,
    FR_KEY_PAGE_DOWN       = 0x4E,
    FR_KEY_RIGHT_ARROW     = 0x4F,
    FR_KEY_LEFT_ARROW      = 0x50,
    FR_KEY_DOWN_ARROW      = 0x51,
    FR_KEY_UP_ARROW        = 0x52,
    FR_KEY_RIGHT           = 0x4F, // Alias
    FR_KEY_LEFT            = 0x50, // Alias
    FR_KEY_DOWN            = 0x51, // Alias
    FR_KEY_UP              = 0x52, // Alias
    FR_KEY_NUM_LOCK        = 0x53,
    FR_KEYPAD_DIVIDE       = 0x54,
    FR_KEYPAD_MULTIPLY     = 0x55,
    FR_KEYPAD_SUBTRACT     = 0x56,
    FR_KEYPAD_ADD          = 0x57,
    FR_KEYPAD_ENTER        = 0x58,
    FR_KEYPAD_1            = 0x59,
    FR_KEYPAD_2            = 0x5A,
    FR_KEYPAD_3            = 0x5B,
    FR_KEYPAD_4            = 0x5C,
    FR_KEYPAD_5            = 0x5D,
    FR_KEYPAD_6            = 0x5E,
    FR_KEYPAD_7            = 0x5F,
    FR_KEYPAD_8            = 0x60,
    FR_KEYPAD_9            = 0x61,
    FR_KEYPAD_0            = 0x62,
    FR_KEYPAD_DOT          = 0x63,
    FR_KEY_NON_US          = 0x64,
    FR_KEY_APPLICATION     = 0x65, // Context menu/right click
    FR_KEY_MENU            = 0x65,
    FR_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    FR_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    FR_KEY_F13             = 0x68, // Tools (Ubunutu)
    FR_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    FR_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    FR_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    FR_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    FR_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    FR_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    FR_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    FR_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    FR_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    FR_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    FR_KEY_F24             = 0x73, // Disabled (Ubuntu)
    FR_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    FR_KEY_HELP            = 0x75, // Help (Ubuntu)
    FR_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    FR_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    FR_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    FR_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    FR_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    FR_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    FR_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    FR_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    FR_KEY_FIND            = 0x7E, // Find (Ubuntu)
    FR_KEY_MUTE            = 0x7F,
    FR_KEY_VOLUME_MUTE     = 0x7F, // Alias
    FR_KEY_VOLUME_UP       = 0x80,
    FR_KEY_VOLUME_DOWN     = 0x81,
    FR_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    FR_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    FR_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    FR_KEYPAD_COMMA            = 0x85, // .
    FR_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    FR_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    FR_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    FR_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    FR_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    FR_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    FR_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    FR_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    FR_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    FR_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    FR_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    FR_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    FR_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    FR_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    FR_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    FR_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    FR_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    FR_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    FR_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    FR_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    FR_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    FR_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    FR_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    FR_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    FR_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    FR_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    FR_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    FR_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    FR_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    FR_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    FR_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    FR_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    FR_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    FR_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    FR_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    FR_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    FR_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    FR_KEYPAD_LEFT_BRACE           = 0xB6, // (
    FR_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    FR_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    FR_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    FR_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    FR_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    FR_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    FR_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    FR_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    FR_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    FR_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    FR_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    FR_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    FR_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    FR_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    FR_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    FR_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    FR_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    FR_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    FR_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    FR_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    FR_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    FR_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    FR_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    FR_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    FR_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    FR_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    FR_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    FR_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    FR_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    FR_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    FR_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    FR_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    FR_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    FR_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    FR_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    FR_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    FR_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    FR_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    FR_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    FR_KEY_LEFT_CTRL           = 0xE0,
    FR_KEY_LEFT_SHIFT          = 0xE1,
    FR_KEY_LEFT_ALT            = 0xE2,
    FR_KEY_LEFT_GUI            = 0xE3,
    FR_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    FR_KEY_RIGHT_CTRL          = 0xE4,
    FR_KEY_RIGHT_SHIFT         = 0xE5,
    FR_KEY_RIGHT_ALT           = 0xE6,
    FR_KEY_RIGHT_GUI           = 0xE7,
    FR_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    FR_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    FR_HID_KEYBOARD_POST_FAIL  = 0x02,
    FR_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    FR_HID_KEYBOARD_A_AND_A    = 0x04,
    FR_HID_KEYBOARD_B_AND_B    = 0x05,
    FR_HID_KEYBOARD_C_AND_C    = 0x06,
    FR_HID_KEYBOARD_D_AND_D    = 0x07,
    FR_HID_KEYBOARD_E_AND_E    = 0x08,
    FR_HID_KEYBOARD_F_AND_F    = 0x09,
    FR_HID_KEYBOARD_G_AND_G    = 0x0A,
    FR_HID_KEYBOARD_H_AND_H    = 0x0B,
    FR_HID_KEYBOARD_I_AND_I    = 0x0C,
    FR_HID_KEYBOARD_J_AND_J    = 0x0D,
    FR_HID_KEYBOARD_K_AND_K    = 0x0E,
    FR_HID_KEYBOARD_L_AND_L    = 0x0F,
    FR_HID_KEYBOARD_M_AND_M    = 0x10,
    FR_HID_KEYBOARD_N_AND_N    = 0x11,
    FR_HID_KEYBOARD_O_AND_O    = 0x12,
    FR_HID_KEYBOARD_P_AND_P    = 0x13,
    FR_HID_KEYBOARD_Q_AND_Q    = 0x14,
    FR_HID_KEYBOARD_R_AND_R    = 0x15,
    FR_HID_KEYBOARD_S_AND_S    = 0x16,
    FR_HID_KEYBOARD_T_AND_T    = 0x17,
    FR_HID_KEYBOARD_U_AND_U    = 0x18,
    FR_HID_KEYBOARD_V_AND_V    = 0x19,
    FR_HID_KEYBOARD_W_AND_W    = 0x1A,
    FR_HID_KEYBOARD_X_AND_X    = 0x1B,
    FR_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    FR_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    FR_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    FR_HID_KEYBOARD_2_AND_AT   = 0x1F,
    FR_HID_KEYBOARD_3_AND_POUND    = 0x20,
    FR_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    FR_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    FR_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    FR_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    FR_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    FR_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    FR_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    FR_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    FR_HID_KEYBOARD_ESCAPE = 0x29,
    FR_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    FR_HID_KEYBOARD_TAB    = 0x2B,
    FR_HID_KEYBOARD_SPACEBAR   = 0x2C,
    FR_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    FR_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    FR_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    FR_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    FR_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    FR_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    FR_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    FR_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    FR_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    FR_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    FR_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    FR_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    FR_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    FR_HID_KEYBOARD_F1 = 0x3A,
    FR_HID_KEYBOARD_F2 = 0x3B,
    FR_HID_KEYBOARD_F3 = 0x3C,
    FR_HID_KEYBOARD_F4 = 0x3D,
    FR_HID_KEYBOARD_F5 = 0x3E,
    FR_HID_KEYBOARD_F6 = 0x3F,
    FR_HID_KEYBOARD_F7 = 0x40,
    FR_HID_KEYBOARD_F8 = 0x41,
    FR_HID_KEYBOARD_F9 = 0x42,
    FR_HID_KEYBOARD_F10    = 0x43,
    FR_HID_KEYBOARD_F11    = 0x44,
    FR_HID_KEYBOARD_F12    = 0x45,
    FR_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    FR_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    FR_HID_KEYBOARD_PAUSE  = 0x48,
    FR_HID_KEYBOARD_INSERT = 0x49,
    FR_HID_KEYBOARD_HOME   = 0x4A,
    FR_HID_KEYBOARD_PAGE_UP    = 0x4B,
    FR_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    FR_HID_KEYBOARD_END    = 0x4D,
    FR_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    FR_HID_KEYBOARD_RIGHTARROW = 0x4F,
    FR_HID_KEYBOARD_LEFTARROW  = 0x50,
    FR_HID_KEYBOARD_DOWNARROW  = 0x51,
    FR_HID_KEYBOARD_UPARROW    = 0x52,
    FR_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    FR_HID_KEYPAD_DIVIDE   = 0x54,
    FR_HID_KEYPAD_MULTIPLY = 0x55,
    FR_HID_KEYPAD_SUBTRACT = 0x56,
    FR_HID_KEYPAD_ADD  = 0x57,
    FR_HID_KEYPAD_ENTER    = 0x58,
    FR_HID_KEYPAD_1_AND_END    = 0x59,
    FR_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    FR_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    FR_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    FR_HID_KEYPAD_5    = 0x5D,
    FR_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    FR_HID_KEYPAD_7_AND_HOME   = 0x5F,
    FR_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    FR_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    FR_HID_KEYPAD_0_AND_INSERT = 0x62,
    FR_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    FR_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    FR_HID_KEYBOARD_APPLICATION    = 0x65,
    FR_HID_KEYBOARD_POWER  = 0x66,
    FR_HID_KEYPAD_EQUALS   = 0x67,
    FR_HID_KEYBOARD_F13    = 0x68,
    FR_HID_KEYBOARD_F14    = 0x69,
    FR_HID_KEYBOARD_F15    = 0x6A,
    FR_HID_KEYBOARD_F16    = 0x6B,
    FR_HID_KEYBOARD_F17    = 0x6C,
    FR_HID_KEYBOARD_F18    = 0x6D,
    FR_HID_KEYBOARD_F19    = 0x6E,
    FR_HID_KEYBOARD_F20    = 0x6F,
    FR_HID_KEYBOARD_F21    = 0x70,
    FR_HID_KEYBOARD_F22    = 0x71,
    FR_HID_KEYBOARD_F23    = 0x72,
    FR_HID_KEYBOARD_F24    = 0x73,
    FR_HID_KEYBOARD_EXECUTE    = 0x74,
    FR_HID_KEYBOARD_HELP   = 0x75,
    FR_HID_KEYBOARD_MENU   = 0x76,
    FR_HID_KEYBOARD_SELECT = 0x77,
    FR_HID_KEYBOARD_STOP   = 0x78,
    FR_HID_KEYBOARD_AGAIN  = 0x79,
    FR_HID_KEYBOARD_UNDO   = 0x7A,
    FR_HID_KEYBOARD_CUT    = 0x7B,
    FR_HID_KEYBOARD_COPY   = 0x7C,
    FR_HID_KEYBOARD_PASTE  = 0x7D,
    FR_HID_KEYBOARD_FIND   = 0x7E,
    FR_HID_KEYBOARD_MUTE   = 0x7F,
    FR_HID_KEYBOARD_VOLUME_UP  = 0x80,
    FR_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    FR_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    FR_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    FR_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    FR_HID_KEYPAD_COMMA    = 0x85,
    FR_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    FR_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    FR_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    FR_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    FR_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    FR_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    FR_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    FR_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    FR_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    FR_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    FR_HID_KEYBOARD_LANG1  = 0x90,
    FR_HID_KEYBOARD_LANG2  = 0x91,
    FR_HID_KEYBOARD_LANG3  = 0x92,
    FR_HID_KEYBOARD_LANG4  = 0x93,
    FR_HID_KEYBOARD_LANG5  = 0x94,
    FR_HID_KEYBOARD_LANG6  = 0x95,
    FR_HID_KEYBOARD_LANG7  = 0x96,
    FR_HID_KEYBOARD_LANG8  = 0x97,
    FR_HID_KEYBOARD_LANG9  = 0x98,
    FR_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    FR_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    FR_HID_KEYBOARD_CANCEL = 0x9B,
    FR_HID_KEYBOARD_CLEAR  = 0x9C,
    FR_HID_KEYBOARD_PRIOR  = 0x9D,
    FR_HID_KEYBOARD_RETURN = 0x9E,
    FR_HID_KEYBOARD_SEPARATOR  = 0x9F,
    FR_HID_KEYBOARD_OUT    = 0xA0,
    FR_HID_KEYBOARD_OPER   = 0xA1,
    FR_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    FR_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    FR_HID_KEYBOARD_EXSEL  = 0xA4,
    FR_HID_KEYPAD_00   = 0xB0,
    FR_HID_KEYPAD_000  = 0xB1,
    FR_HID_THOUSANDS_SEPARATOR = 0xB2,
    FR_HID_DECIMAL_SEPARATOR   = 0xB3,
    FR_HID_CURRENCY_UNIT   = 0xB4,
    FR_HID_CURRENCY_SUBUNIT    = 0xB5,
    FR_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    FR_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    FR_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    FR_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    FR_HID_KEYPAD_TAB  = 0xBA,
    FR_HID_KEYPAD_BACKSPACE    = 0xBB,
    FR_HID_KEYPAD_A    = 0xBC,
    FR_HID_KEYPAD_B    = 0xBD,
    FR_HID_KEYPAD_C    = 0xBE,
    FR_HID_KEYPAD_D    = 0xBF,
    FR_HID_KEYPAD_E    = 0xC0,
    FR_HID_KEYPAD_F    = 0xC1,
    FR_HID_KEYPAD_XOR  = 0xC2,
    FR_HID_KEYPAD_CARAT    = 0xC3,
    FR_HID_KEYPAD_PERCENT  = 0xC4,
    FR_HID_KEYPAD_LESS_THAN    = 0xC5,
    FR_HID_KEYPAD_GREATER_THAN = 0xC6,
    FR_HID_KEYPAD_AMPERSAND    = 0xC7,
    FR_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    FR_HID_KEYPAD_PIPE = 0xC9,
    FR_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    FR_HID_KEYPAD_COLON    = 0xCB,
    FR_HID_KEYPAD_POUND_SIGN   = 0xCC,
    FR_HID_KEYPAD_SPACE    = 0xCD,
    FR_HID_KEYPAD_AT_SIGN  = 0xCE,
    FR_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    FR_HID_KEYPAD_MEMORY_STORE = 0xD0,
    FR_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    FR_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    FR_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    FR_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    FR_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    FR_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    FR_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    FR_HID_KEYPAD_CLEAR    = 0xD8,
    FR_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    FR_HID_KEYPAD_BINARY   = 0xDA,
    FR_HID_KEYPAD_OCTAL    = 0xDB,
    FR_HID_KEYPAD_DECIMAL  = 0xDC,
    FR_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    FR_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    FR_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    FR_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    FR_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    FR_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    FR_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    FR_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    FR_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};



// Key aliases
#define FR_KEY_FR_A            FR_KEY_Q
#define FR_KEY_FR_Q            FR_KEY_A
#define FR_KEY_FR_Z            FR_KEY_W
#define FR_KEY_FR_W            FR_KEY_Z
#define FR_KEY_FR_M            FR_KEY_SEMICOLON
#define FR_KEY_FR_COMMA        FR_KEY_M
#define FR_KEY_FR_SEMICOLON    FR_KEY_COMMA
#define FR_KEY_FR_COLON        FR_KEY_PERIOD
#define FR_KEY_FR_EXCLAMATION  FR_KEY_SLASH
#define FR_KEY_FR_CIRCUMFLEX   FR_KEY_LEFT_BRACE
#define FR_KEY_FR_DOLLAR       FR_KEY_RIGHT_BRACE
#define FR_KEY_FR_UGRAVE       FR_KEY_QUOTE
#define FR_KEY_FR_ASTERISK     FR_KEY_BACKSLASH
#define FR_KEY_FR_LT_GT        FR_KEY_NON_US
#define FR_KEY_FR_SUP2         FR_KEY_TILDE
#define FR_KEY_FR_CLBRKT       FR_KEY_MINUS


static const uint16_t _asciimapFR[] PROGMEM =
{
    FR_KEY_RESERVED,                           // NUL
    FR_KEY_RESERVED,                           // SOH
    FR_KEY_RESERVED,                           // STX
    FR_KEY_RESERVED,                           // ETX
    FR_KEY_RESERVED,                           // EOT
    FR_KEY_RESERVED,                           // ENQ
    FR_KEY_RESERVED,                           // ACK
    FR_KEY_RESERVED,                           // BEL
    FR_KEY_BACKSPACE,                          // BS   Backspace
    FR_KEY_TAB,                                // TAB  Tab
    FR_KEY_ENTER,                              // LF   Enter
    FR_KEY_RESERVED,                           // VT
    FR_KEY_RESERVED,                           // FF
    FR_KEY_RESERVED,                           // CR
    FR_KEY_RESERVED,                           // SO
    FR_KEY_RESERVED,                           // SI
    FR_KEY_RESERVED,                           // DEL
    FR_KEY_RESERVED,                           // DC1
    FR_KEY_RESERVED,                           // DC2
    FR_KEY_RESERVED,                           // DC3
    FR_KEY_RESERVED,                           // DC4
    FR_KEY_RESERVED,                           // NAK
    FR_KEY_RESERVED,                           // SYN
    FR_KEY_RESERVED,                           // ETB
    FR_KEY_RESERVED,                           // CAN
    FR_KEY_RESERVED,                           // EM
    FR_KEY_RESERVED,                           // SUB
    FR_KEY_RESERVED,                           // ESC
    FR_KEY_RESERVED,                           // FS
    FR_KEY_RESERVED,                           // GS
    FR_KEY_RESERVED,                           // RS
    FR_KEY_RESERVED,                           // US
    FR_KEY_SPACE,                              // ' ' Space
    FR_KEY_FR_EXCLAMATION,                     // !
    FR_KEY_3,                                  // "
    FR_KEY_3|FR_MOD_RIGHT_ALT,                    // #
    FR_KEY_FR_DOLLAR,                          // $
    FR_KEY_FR_UGRAVE|FR_MOD_LEFT_SHIFT,           // %
    FR_KEY_1,                                  // &
    FR_KEY_4,                                  // '
    FR_KEY_5,                                  // (
    FR_KEY_FR_CLBRKT,                          // )
    FR_KEY_FR_ASTERISK,                        // *
    FR_KEY_EQUAL|FR_MOD_LEFT_SHIFT,               // +
    FR_KEY_FR_COMMA,                           // ,
    FR_KEY_6,                                  // -
    FR_KEY_FR_SEMICOLON|FR_MOD_LEFT_SHIFT,        // .
    FR_KEY_FR_COLON|FR_MOD_LEFT_SHIFT,            // /
    FR_KEY_0|FR_MOD_LEFT_SHIFT,                   // 0
    FR_KEY_1|FR_MOD_LEFT_SHIFT,                   // 1
    FR_KEY_2|FR_MOD_LEFT_SHIFT,                   // 2
    FR_KEY_3|FR_MOD_LEFT_SHIFT,                   // 3
    FR_KEY_4|FR_MOD_LEFT_SHIFT,                   // 4
    FR_KEY_5|FR_MOD_LEFT_SHIFT,                   // 5
    FR_KEY_6|FR_MOD_LEFT_SHIFT,                   // 6
    FR_KEY_7|FR_MOD_LEFT_SHIFT,                   // 7
    FR_KEY_8|FR_MOD_LEFT_SHIFT,                   // 8
    FR_KEY_9|FR_MOD_LEFT_SHIFT,                   // 9
    FR_KEY_FR_COLON,                           // :
    FR_KEY_FR_SEMICOLON,                       // ;
    FR_KEY_FR_LT_GT,                           // <
    FR_KEY_EQUAL,                              // =
    FR_KEY_FR_LT_GT|FR_MOD_LEFT_SHIFT,            // >
    FR_KEY_FR_COMMA|FR_MOD_LEFT_SHIFT,            // ?
    FR_KEY_0|FR_MOD_RIGHT_ALT,                    // @
    FR_KEY_FR_A|FR_MOD_LEFT_SHIFT,                // A
    FR_KEY_B|FR_MOD_LEFT_SHIFT,                   // B
    FR_KEY_C|FR_MOD_LEFT_SHIFT,                   // C
    FR_KEY_D|FR_MOD_LEFT_SHIFT,                   // D
    FR_KEY_E|FR_MOD_LEFT_SHIFT,                   // E
    FR_KEY_F|FR_MOD_LEFT_SHIFT,                   // F
    FR_KEY_G|FR_MOD_LEFT_SHIFT,                   // G
    FR_KEY_H|FR_MOD_LEFT_SHIFT,                   // H
    FR_KEY_I|FR_MOD_LEFT_SHIFT,                   // I
    FR_KEY_J|FR_MOD_LEFT_SHIFT,                   // J
    FR_KEY_K|FR_MOD_LEFT_SHIFT,                   // K
    FR_KEY_L|FR_MOD_LEFT_SHIFT,                   // L
    FR_KEY_FR_M|FR_MOD_LEFT_SHIFT,                // M
    FR_KEY_N|FR_MOD_LEFT_SHIFT,                   // N
    FR_KEY_O|FR_MOD_LEFT_SHIFT,                   // O
    FR_KEY_P|FR_MOD_LEFT_SHIFT,                   // P
    FR_KEY_FR_Q|FR_MOD_LEFT_SHIFT,                // Q
    FR_KEY_R|FR_MOD_LEFT_SHIFT,                   // R
    FR_KEY_S|FR_MOD_LEFT_SHIFT,                   // S
    FR_KEY_T|FR_MOD_LEFT_SHIFT,                   // T
    FR_KEY_U|FR_MOD_LEFT_SHIFT,                   // U
    FR_KEY_V|FR_MOD_LEFT_SHIFT,                   // V
    FR_KEY_FR_W|FR_MOD_LEFT_SHIFT,                // W
    FR_KEY_X|FR_MOD_LEFT_SHIFT,                   // X
    FR_KEY_Y|FR_MOD_LEFT_SHIFT,                   // Y
    FR_KEY_FR_Z|FR_MOD_LEFT_SHIFT,                // Z
    FR_KEY_5|FR_MOD_RIGHT_ALT,                    // [
    FR_KEY_8|FR_MOD_RIGHT_ALT,                    // bslash
    FR_KEY_FR_CLBRKT|FR_MOD_RIGHT_ALT,            // ]
    FR_KEY_9|FR_MOD_RIGHT_ALT,                    // ^
    FR_KEY_8,                                  // _
    FR_KEY_RESERVED,                           // ` (This is a dead key in the FR layout, would require ALTRGR+7 *followed by* space)
    FR_KEY_FR_A,                               // a
    FR_KEY_B,                                  // b
    FR_KEY_C,                                  // c
    FR_KEY_D,                                  // d
    FR_KEY_E,                                  // e
    FR_KEY_F,                                  // f
    FR_KEY_G,                                  // g
    FR_KEY_H,                                  // h
    FR_KEY_I,                                  // i
    FR_KEY_J,                                  // j
    FR_KEY_K,                                  // k
    FR_KEY_L,                                  // l
    FR_KEY_FR_M,                               // m
    FR_KEY_N,                                  // n
    FR_KEY_O,                                  // o
    FR_KEY_P,                                  // p
    FR_KEY_FR_Q,                               // q
    FR_KEY_R,                                  // r
    FR_KEY_S,                                  // s
    FR_KEY_T,                                  // t
    FR_KEY_U,                                  // u
    FR_KEY_V,                                  // v
    FR_KEY_FR_W,                               // w
    FR_KEY_X,                                  // x
    FR_KEY_Y,                                  // y
    FR_KEY_FR_Z,                               // z
    FR_KEY_4|FR_MOD_RIGHT_ALT,                    // {
    FR_KEY_6|FR_MOD_RIGHT_ALT,                    // |FR_
    FR_KEY_EQUAL|FR_MOD_RIGHT_ALT,                // }
    FR_KEY_RESERVED,                           // ~ (This is a dead key in the FR layout, would require ALTRGR+2 *followed by* space)
    FR_KEY_RESERVED,                           // 127 - DEL
    FR_KEY_RESERVED,                           // 128 - Unused
    FR_KEY_RESERVED,                           // 129 - Unused
    FR_KEY_RESERVED,                           // 130 - Unused
    FR_KEY_RESERVED,                           // 131 - Unused
    FR_KEY_RESERVED,                           // 132 - Unused
    FR_KEY_RESERVED,                           // 133 - Unused
    FR_KEY_RESERVED,                           // 134 - Unused
    FR_KEY_RESERVED,                           // 135 - Unused
    FR_KEY_RESERVED,                           // 136 - Unused
    FR_KEY_RESERVED,                           // 137 - Unused
    FR_KEY_RESERVED,                           // 138 - Unused
    FR_KEY_RESERVED,                           // 139 - Unused
    FR_KEY_RESERVED,                           // 140 - Unused
    FR_KEY_RESERVED,                           // 141 - Unused
    FR_KEY_RESERVED,                           // 142 - Unused
    FR_KEY_RESERVED,                           // 143 - Unused
    FR_KEY_RESERVED,                           // 144 - Unused
    FR_KEY_RESERVED,                           // 145 - Unused
    FR_KEY_RESERVED,                           // 146 - Unused
    FR_KEY_RESERVED,                           // 147 - Unused
    FR_KEY_RESERVED,                           // 148 - Unused
    FR_KEY_RESERVED,                           // 149 - Unused
    FR_KEY_RESERVED,                           // 150 - Unused
    FR_KEY_RESERVED,                           // 151 - Unused
    FR_KEY_RESERVED,                           // 152 - Unused
    FR_KEY_RESERVED,                           // 153 - Unused
    FR_KEY_RESERVED,                           // 154 - Unused
    FR_KEY_RESERVED,                           // 155 - Unused
    FR_KEY_RESERVED,                           // 156 - Unused
    FR_KEY_RESERVED,                           // 157 - Unused
    FR_KEY_RESERVED,                           // 158 - Unused
    FR_KEY_RESERVED,                           // 159 - Unused
    FR_KEY_RESERVED,                           // 160 - Non-breaking Space
    FR_KEY_RESERVED,                           // 161 - Inverted Exclamation Mark
    FR_KEY_RESERVED,                           // 162 - Cent
    FR_KEY_FR_DOLLAR|FR_MOD_LEFT_SHIFT,           // 163 - British Pound Sign
    FR_KEY_E|FR_MOD_RIGHT_ALT,                    // 164 - Euro Sign
    FR_KEY_RESERVED,                           // 165 - Yen
    FR_KEY_RESERVED,                           // 166 - Capital 's' Inverted Circumflex
    FR_KEY_FR_EXCLAMATION|FR_MOD_LEFT_SHIFT,      // 167 - Section Sign
    FR_KEY_RESERVED,                           // 168 - 's' Inverted Circumflex
    FR_KEY_RESERVED,                           // 169 - Copyright Sign
    FR_KEY_RESERVED,                           // 170 - Superscript 'a'
    FR_KEY_RESERVED,                           // 171 - Open Guillemet
    FR_KEY_RESERVED,                           // 172 - Logic Negation
    FR_KEY_RESERVED,                           // 173 - Soft Hypen
    FR_KEY_RESERVED,                           // 174 - Registered Trademark
    FR_KEY_RESERVED,                           // 175 - Macron
    FR_KEY_FR_CLBRKT|FR_MOD_LEFT_SHIFT,           // 176 - Degree Symbol
    FR_KEY_RESERVED,                           // 177 - Plus-Minus
    FR_KEY_FR_SUP2,                            // 178 - Superscript '2'
    FR_KEY_RESERVED,                           // 179 - Superscript '3'
    FR_KEY_RESERVED,                           // 180 - Capital 'z' Inverted Circumflex
    FR_KEY_FR_ASTERISK|FR_MOD_LEFT_SHIFT,         // 181 - Micro Symbol
    FR_KEY_RESERVED,                           // 182 - Paragraph Mark
    FR_KEY_RESERVED,                           // 183 - Interpunct
    FR_KEY_RESERVED,                           // 184 - 'z' Inverted Circumflex
    FR_KEY_RESERVED,                           // 185 - Superscript '1'
    FR_KEY_RESERVED,                           // 186 - Ordinal Indicator
    FR_KEY_RESERVED,                           // 187 - Closed Guillemet
    FR_KEY_RESERVED,                           // 188 - Capital 'oe'
    FR_KEY_RESERVED,                           // 189 - 'oe'
    FR_KEY_RESERVED,                           // 190 - Capital 'y' Umlaut
    FR_KEY_RESERVED,                           // 191 - Inverted Question Mark
    FR_KEY_RESERVED,                           // 192 - Capital 'a' Grave
    FR_KEY_RESERVED,                           // 193 - Capital 'a' Acute
    FR_KEY_RESERVED,                           // 194 - Capital 'a' Circumflex
    FR_KEY_RESERVED,                           // 195 - Capital 'a' Tilde
    FR_KEY_RESERVED,                           // 196 - Capital 'a' Umlaut
    FR_KEY_RESERVED,                           // 197 - Capital 'a' Circle
    FR_KEY_RESERVED,                           // 198 - Capital 'ae'
    FR_KEY_RESERVED,                           // 199 - Capital 'c' Cedilla
    FR_KEY_RESERVED,                           // 200 - Capital 'e' Grave
    FR_KEY_RESERVED,                           // 201 - Capital 'e' Acute
    FR_KEY_RESERVED,                           // 202 - Capital 'e' Circumflex
    FR_KEY_RESERVED,                           // 203 - Capital 'e' Umlaut
    FR_KEY_RESERVED,                           // 204 - Capital 'i' Grave
    FR_KEY_RESERVED,                           // 205 - Capital 'i' Acute
    FR_KEY_RESERVED,                           // 206 - Capital 'i' Circumflex
    FR_KEY_RESERVED,                           // 207 - Capital 'i' Umlaut
    FR_KEY_RESERVED,                           // 208 - Capital Eth
    FR_KEY_RESERVED,                           // 207 - Capital 'n' Tilde
    FR_KEY_RESERVED,                           // 210 - Capital 'o' Grave
    FR_KEY_RESERVED,                           // 211 - Capital 'o' Acute
    FR_KEY_RESERVED,                           // 212 - Capital 'o' Circumflex
    FR_KEY_RESERVED,                           // 213 - Capital 'o' Tilde
    FR_KEY_RESERVED,                           // 214 - Capital 'o' Umlaut
    FR_KEY_RESERVED,                           // 215 - Multiplication Sign
    FR_KEY_RESERVED,                           // 216 - Capital 'o' Barred
    FR_KEY_RESERVED,                           // 217 - Capital 'u' Grave
    FR_KEY_RESERVED,                           // 218 - Capital 'u' Acute
    FR_KEY_RESERVED,                           // 219 - Capital 'u' Circumflex
    FR_KEY_RESERVED,                           // 220 - Capital 'u' Umlaut
    FR_KEY_RESERVED,                           // 221 - Capital 'y' Acute
    FR_KEY_RESERVED,                           // 222 - Capital Thorn
    FR_KEY_RESERVED,                           // 223 - Eszett
    FR_KEY_0,                                  // 224 - 'a' Grave
    FR_KEY_RESERVED,                           // 225 - 'a' Acute
    FR_KEY_RESERVED,                           // 226 - 'a' Circumflex
    FR_KEY_RESERVED,                           // 227 - 'a' Tilde
    FR_KEY_RESERVED,                           // 228 - 'a' Umlaut
    FR_KEY_RESERVED,                           // 229 - 'a' Circle
    FR_KEY_RESERVED,                           // 230 - 'ae'
    FR_KEY_9,                                  // 231 - 'c' Cedilla
    FR_KEY_7,                                  // 232 - 'e' Grave
    FR_KEY_2,                                  // 233 - 'e' Acute
    FR_KEY_RESERVED,                           // 234 - 'e' Circumflex
    FR_KEY_RESERVED,                           // 235 - 'e' Umlaut
    FR_KEY_RESERVED,                           // 236 - 'i' Grave
    FR_KEY_RESERVED,                           // 237 - 'i' Acute
    FR_KEY_RESERVED,                           // 238 - 'i' Circumflex
    FR_KEY_RESERVED,                           // 239 - 'i' Umlaut
    FR_KEY_RESERVED,                           // 240 - Eth
    FR_KEY_RESERVED,                           // 241 - 'n' Tilde
    FR_KEY_RESERVED,                           // 242 - 'o' Grave
    FR_KEY_RESERVED,                           // 243 - 'o' Acute
    FR_KEY_RESERVED,                           // 244 - 'o' Circumflex
    FR_KEY_RESERVED,                           // 245 - 'o' Tilde
    FR_KEY_RESERVED,                           // 246 - 'o' Umlaut
    FR_KEY_RESERVED,                           // 247 - Multiplication Sign
    FR_KEY_RESERVED,                           // 248 - 'o' Barred
    FR_KEY_FR_UGRAVE,                          // 249 - 'u' Grave
    FR_KEY_RESERVED,                           // 250 - 'u' Acute
    FR_KEY_RESERVED,                           // 251 - 'u' Circumflex
    FR_KEY_RESERVED,                           // 252 - 'u' Umlaut
    FR_KEY_RESERVED,                           // 253 - 'y' Acute
    FR_KEY_RESERVED,                           // 254 - Thorn
    FR_KEY_RESERVED,                           // 255 - 'y' Umlaut
};
