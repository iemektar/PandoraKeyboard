
enum KeyboardModsNO : uint16_t {
    NO_MOD_LEFT_CTRL       = (1 <<  8),
    NO_MOD_LEFT_SHIFT      = (1 <<  9),
    NO_MOD_LEFT_ALT        = (1 << 10),
    NO_MOD_LEFT_GUI        = (1 << 11),
    NO_MOD_RIGHT_CTRL      = (1 << 12),
    NO_MOD_RIGHT_SHIFT     = (1 << 13),
    NO_MOD_RIGHT_ALT       = (1 << 14),
    NO_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};


// Hut1_12v2.pdf

enum KeyboardKeycodeNO : uint8_t {
    NO_KEY_RESERVED        =  0,
    NO_KEY_ERROR_ROLLOVER  =  1,
    NO_KEY_POST_FAIL       =  2,
    NO_KEY_ERROR_UNDEFINED =  3,
    NO_KEY_A               =  4,
    NO_KEY_B               =  5,
    NO_KEY_C               =  6,
    NO_KEY_D               =  7,
    NO_KEY_E               =  8,
    NO_KEY_F               =  9,
    NO_KEY_G               = 10,
    NO_KEY_H               = 11,
    NO_KEY_I               = 12,
    NO_KEY_J               = 13,
    NO_KEY_K               = 14,
    NO_KEY_L               = 15,
    NO_KEY_M               = 16,
    NO_KEY_N               = 17,
    NO_KEY_O               = 18,
    NO_KEY_P               = 19,
    NO_KEY_Q               = 20,
    NO_KEY_R               = 21,
    NO_KEY_S               = 22,
    NO_KEY_T               = 23,
    NO_KEY_U               = 24,
    NO_KEY_V               = 25,
    NO_KEY_W               = 26,
    NO_KEY_X               = 27,
    NO_KEY_Y               = 28,
    NO_KEY_Z               = 29,
    NO_KEY_1               = 30,
    NO_KEY_2               = 31,
    NO_KEY_3               = 32,
    NO_KEY_4               = 33,
    NO_KEY_5               = 34,
    NO_KEY_6               = 35,
    NO_KEY_7               = 36,
    NO_KEY_8               = 37,
    NO_KEY_9               = 38,
    NO_KEY_0               = 39,
    NO_KEY_ENTER           = 40,
    NO_KEY_RETURN          = 40, // Alias
    NO_KEY_ESC             = 41,
    NO_KEY_BACKSPACE       = 42,
    NO_KEY_TAB             = 43,
    NO_KEY_SPACE           = 44,
    NO_KEY_MINUS           = 45,
    NO_KEY_EQUAL           = 46,
    NO_KEY_LEFT_BRACE      = 47,
    NO_KEY_RIGHT_BRACE     = 48,
    NO_KEY_BACKSLASH       = 49,
    NO_KEY_NON_US_NUM      = 50,
    NO_KEY_SEMICOLON       = 51,
    NO_KEY_QUOTE           = 52,
    NO_KEY_TILDE           = 53,
    NO_KEY_COMMA           = 54,
    NO_KEY_PERIOD          = 55,
    NO_KEY_SLASH           = 56,
    NO_KEY_CAPS_LOCK       = 0x39,
    NO_KEY_F1              = 0x3A,
    NO_KEY_F2              = 0x3B,
    NO_KEY_F3              = 0x3C,
    NO_KEY_F4              = 0x3D,
    NO_KEY_F5              = 0x3E,
    NO_KEY_F6              = 0x3F,
    NO_KEY_F7              = 0x40,
    NO_KEY_F8              = 0x41,
    NO_KEY_F9              = 0x42,
    NO_KEY_F10             = 0x43,
    NO_KEY_F11             = 0x44,
    NO_KEY_F12             = 0x45,
    NO_KEY_PRINT           = 0x46,
    NO_KEY_PRINTSCREEN     = 0x46, // Alias
    NO_KEY_SCROLL_LOCK     = 0x47,
    NO_KEY_PAUSE           = 0x48,
    NO_KEY_INSERT          = 0x49,
    NO_KEY_HOME            = 0x4A,
    NO_KEY_PAGE_UP         = 0x4B,
    NO_KEY_DELETE          = 0x4C,
    NO_KEY_END             = 0x4D,
    NO_KEY_PAGE_DOWN       = 0x4E,
    NO_KEY_RIGHT_ARROW     = 0x4F,
    NO_KEY_LEFT_ARROW      = 0x50,
    NO_KEY_DOWN_ARROW      = 0x51,
    NO_KEY_UP_ARROW        = 0x52,
    NO_KEY_RIGHT           = 0x4F, // Alias
    NO_KEY_LEFT            = 0x50, // Alias
    NO_KEY_DOWN            = 0x51, // Alias
    NO_KEY_UP              = 0x52, // Alias
    NO_KEY_NUM_LOCK        = 0x53,
    NO_KEYPAD_DIVIDE       = 0x54,
    NO_KEYPAD_MULTIPLY     = 0x55,
    NO_KEYPAD_SUBTRACT     = 0x56,
    NO_KEYPAD_ADD          = 0x57,
    NO_KEYPAD_ENTER        = 0x58,
    NO_KEYPAD_1            = 0x59,
    NO_KEYPAD_2            = 0x5A,
    NO_KEYPAD_3            = 0x5B,
    NO_KEYPAD_4            = 0x5C,
    NO_KEYPAD_5            = 0x5D,
    NO_KEYPAD_6            = 0x5E,
    NO_KEYPAD_7            = 0x5F,
    NO_KEYPAD_8            = 0x60,
    NO_KEYPAD_9            = 0x61,
    NO_KEYPAD_0            = 0x62,
    NO_KEYPAD_DOT          = 0x63,
    NO_KEY_NON_US          = 0x64,
    NO_KEY_APPLICATION     = 0x65, // Context menu/right click
    NO_KEY_MENU            = 0x65,
    NO_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    NO_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    NO_KEY_F13             = 0x68, // Tools (Ubunutu)
    NO_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    NO_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    NO_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    NO_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    NO_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    NO_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    NO_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    NO_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    NO_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    NO_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    NO_KEY_F24             = 0x73, // Disabled (Ubuntu)
    NO_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    NO_KEY_HELP            = 0x75, // Help (Ubuntu)
    NO_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    NO_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    NO_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    NO_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    NO_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    NO_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    NO_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    NO_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    NO_KEY_FIND            = 0x7E, // Find (Ubuntu)
    NO_KEY_MUTE            = 0x7F,
    NO_KEY_VOLUME_MUTE     = 0x7F, // Alias
    NO_KEY_VOLUME_UP       = 0x80,
    NO_KEY_VOLUME_DOWN     = 0x81,
    NO_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    NO_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    NO_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    NO_KEYPAD_COMMA            = 0x85, // .
    NO_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    NO_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    NO_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    NO_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    NO_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    NO_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    NO_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    NO_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    NO_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    NO_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    NO_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    NO_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    NO_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    NO_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    NO_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    NO_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    NO_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    NO_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    NO_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    NO_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    NO_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    NO_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    NO_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    NO_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    NO_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    NO_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    NO_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    NO_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    NO_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    NO_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    NO_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    NO_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    NO_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    NO_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    NO_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    NO_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    NO_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    NO_KEYPAD_LEFT_BRACE           = 0xB6, // (
    NO_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    NO_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    NO_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    NO_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    NO_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    NO_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    NO_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    NO_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    NO_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    NO_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    NO_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    NO_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    NO_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    NO_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    NO_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    NO_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    NO_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    NO_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    NO_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    NO_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    NO_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    NO_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    NO_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    NO_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    NO_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    NO_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    NO_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    NO_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    NO_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    NO_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    NO_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    NO_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    NO_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    NO_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    NO_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    NO_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    NO_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    NO_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    NO_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    NO_KEY_LEFT_CTRL           = 0xE0,
    NO_KEY_LEFT_SHIFT          = 0xE1,
    NO_KEY_LEFT_ALT            = 0xE2,
    NO_KEY_LEFT_GUI            = 0xE3,
    NO_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    NO_KEY_RIGHT_CTRL          = 0xE4,
    NO_KEY_RIGHT_SHIFT         = 0xE5,
    NO_KEY_RIGHT_ALT           = 0xE6,
    NO_KEY_RIGHT_GUI           = 0xE7,
    NO_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    NO_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    NO_HID_KEYBOARD_POST_FAIL  = 0x02,
    NO_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    NO_HID_KEYBOARD_A_AND_A    = 0x04,
    NO_HID_KEYBOARD_B_AND_B    = 0x05,
    NO_HID_KEYBOARD_C_AND_C    = 0x06,
    NO_HID_KEYBOARD_D_AND_D    = 0x07,
    NO_HID_KEYBOARD_E_AND_E    = 0x08,
    NO_HID_KEYBOARD_F_AND_F    = 0x09,
    NO_HID_KEYBOARD_G_AND_G    = 0x0A,
    NO_HID_KEYBOARD_H_AND_H    = 0x0B,
    NO_HID_KEYBOARD_I_AND_I    = 0x0C,
    NO_HID_KEYBOARD_J_AND_J    = 0x0D,
    NO_HID_KEYBOARD_K_AND_K    = 0x0E,
    NO_HID_KEYBOARD_L_AND_L    = 0x0F,
    NO_HID_KEYBOARD_M_AND_M    = 0x10,
    NO_HID_KEYBOARD_N_AND_N    = 0x11,
    NO_HID_KEYBOARD_O_AND_O    = 0x12,
    NO_HID_KEYBOARD_P_AND_P    = 0x13,
    NO_HID_KEYBOARD_Q_AND_Q    = 0x14,
    NO_HID_KEYBOARD_R_AND_R    = 0x15,
    NO_HID_KEYBOARD_S_AND_S    = 0x16,
    NO_HID_KEYBOARD_T_AND_T    = 0x17,
    NO_HID_KEYBOARD_U_AND_U    = 0x18,
    NO_HID_KEYBOARD_V_AND_V    = 0x19,
    NO_HID_KEYBOARD_W_AND_W    = 0x1A,
    NO_HID_KEYBOARD_X_AND_X    = 0x1B,
    NO_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    NO_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    NO_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    NO_HID_KEYBOARD_2_AND_AT   = 0x1F,
    NO_HID_KEYBOARD_3_AND_POUND    = 0x20,
    NO_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    NO_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    NO_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    NO_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    NO_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    NO_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    NO_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    NO_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    NO_HID_KEYBOARD_ESCAPE = 0x29,
    NO_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    NO_HID_KEYBOARD_TAB    = 0x2B,
    NO_HID_KEYBOARD_SPACEBAR   = 0x2C,
    NO_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    NO_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    NO_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    NO_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    NO_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    NO_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    NO_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    NO_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    NO_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    NO_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    NO_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    NO_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    NO_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    NO_HID_KEYBOARD_F1 = 0x3A,
    NO_HID_KEYBOARD_F2 = 0x3B,
    NO_HID_KEYBOARD_F3 = 0x3C,
    NO_HID_KEYBOARD_F4 = 0x3D,
    NO_HID_KEYBOARD_F5 = 0x3E,
    NO_HID_KEYBOARD_F6 = 0x3F,
    NO_HID_KEYBOARD_F7 = 0x40,
    NO_HID_KEYBOARD_F8 = 0x41,
    NO_HID_KEYBOARD_F9 = 0x42,
    NO_HID_KEYBOARD_F10    = 0x43,
    NO_HID_KEYBOARD_F11    = 0x44,
    NO_HID_KEYBOARD_F12    = 0x45,
    NO_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    NO_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    NO_HID_KEYBOARD_PAUSE  = 0x48,
    NO_HID_KEYBOARD_INSERT = 0x49,
    NO_HID_KEYBOARD_HOME   = 0x4A,
    NO_HID_KEYBOARD_PAGE_UP    = 0x4B,
    NO_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    NO_HID_KEYBOARD_END    = 0x4D,
    NO_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    NO_HID_KEYBOARD_RIGHTARROW = 0x4F,
    NO_HID_KEYBOARD_LEFTARROW  = 0x50,
    NO_HID_KEYBOARD_DOWNARROW  = 0x51,
    NO_HID_KEYBOARD_UPARROW    = 0x52,
    NO_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    NO_HID_KEYPAD_DIVIDE   = 0x54,
    NO_HID_KEYPAD_MULTIPLY = 0x55,
    NO_HID_KEYPAD_SUBTRACT = 0x56,
    NO_HID_KEYPAD_ADD  = 0x57,
    NO_HID_KEYPAD_ENTER    = 0x58,
    NO_HID_KEYPAD_1_AND_END    = 0x59,
    NO_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    NO_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    NO_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    NO_HID_KEYPAD_5    = 0x5D,
    NO_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    NO_HID_KEYPAD_7_AND_HOME   = 0x5F,
    NO_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    NO_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    NO_HID_KEYPAD_0_AND_INSERT = 0x62,
    NO_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    NO_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    NO_HID_KEYBOARD_APPLICATION    = 0x65,
    NO_HID_KEYBOARD_POWER  = 0x66,
    NO_HID_KEYPAD_EQUALS   = 0x67,
    NO_HID_KEYBOARD_F13    = 0x68,
    NO_HID_KEYBOARD_F14    = 0x69,
    NO_HID_KEYBOARD_F15    = 0x6A,
    NO_HID_KEYBOARD_F16    = 0x6B,
    NO_HID_KEYBOARD_F17    = 0x6C,
    NO_HID_KEYBOARD_F18    = 0x6D,
    NO_HID_KEYBOARD_F19    = 0x6E,
    NO_HID_KEYBOARD_F20    = 0x6F,
    NO_HID_KEYBOARD_F21    = 0x70,
    NO_HID_KEYBOARD_F22    = 0x71,
    NO_HID_KEYBOARD_F23    = 0x72,
    NO_HID_KEYBOARD_F24    = 0x73,
    NO_HID_KEYBOARD_EXECUTE    = 0x74,
    NO_HID_KEYBOARD_HELP   = 0x75,
    NO_HID_KEYBOARD_MENU   = 0x76,
    NO_HID_KEYBOARD_SELECT = 0x77,
    NO_HID_KEYBOARD_STOP   = 0x78,
    NO_HID_KEYBOARD_AGAIN  = 0x79,
    NO_HID_KEYBOARD_UNDO   = 0x7A,
    NO_HID_KEYBOARD_CUT    = 0x7B,
    NO_HID_KEYBOARD_COPY   = 0x7C,
    NO_HID_KEYBOARD_PASTE  = 0x7D,
    NO_HID_KEYBOARD_FIND   = 0x7E,
    NO_HID_KEYBOARD_MUTE   = 0x7F,
    NO_HID_KEYBOARD_VOLUME_UP  = 0x80,
    NO_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    NO_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    NO_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    NO_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    NO_HID_KEYPAD_COMMA    = 0x85,
    NO_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    NO_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    NO_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    NO_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    NO_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    NO_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    NO_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    NO_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    NO_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    NO_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    NO_HID_KEYBOARD_LANG1  = 0x90,
    NO_HID_KEYBOARD_LANG2  = 0x91,
    NO_HID_KEYBOARD_LANG3  = 0x92,
    NO_HID_KEYBOARD_LANG4  = 0x93,
    NO_HID_KEYBOARD_LANG5  = 0x94,
    NO_HID_KEYBOARD_LANG6  = 0x95,
    NO_HID_KEYBOARD_LANG7  = 0x96,
    NO_HID_KEYBOARD_LANG8  = 0x97,
    NO_HID_KEYBOARD_LANG9  = 0x98,
    NO_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    NO_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    NO_HID_KEYBOARD_CANCEL = 0x9B,
    NO_HID_KEYBOARD_CLEAR  = 0x9C,
    NO_HID_KEYBOARD_PRIOR  = 0x9D,
    NO_HID_KEYBOARD_RETURN = 0x9E,
    NO_HID_KEYBOARD_SEPARATOR  = 0x9F,
    NO_HID_KEYBOARD_OUT    = 0xA0,
    NO_HID_KEYBOARD_OPER   = 0xA1,
    NO_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    NO_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    NO_HID_KEYBOARD_EXSEL  = 0xA4,
    NO_HID_KEYPAD_00   = 0xB0,
    NO_HID_KEYPAD_000  = 0xB1,
    NO_HID_THOUSANDS_SEPARATOR = 0xB2,
    NO_HID_DECIMAL_SEPARATOR   = 0xB3,
    NO_HID_CURRENCY_UNIT   = 0xB4,
    NO_HID_CURRENCY_SUBUNIT    = 0xB5,
    NO_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    NO_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    NO_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    NO_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    NO_HID_KEYPAD_TAB  = 0xBA,
    NO_HID_KEYPAD_BACKSPACE    = 0xBB,
    NO_HID_KEYPAD_A    = 0xBC,
    NO_HID_KEYPAD_B    = 0xBD,
    NO_HID_KEYPAD_C    = 0xBE,
    NO_HID_KEYPAD_D    = 0xBF,
    NO_HID_KEYPAD_E    = 0xC0,
    NO_HID_KEYPAD_F    = 0xC1,
    NO_HID_KEYPAD_XOR  = 0xC2,
    NO_HID_KEYPAD_CARAT    = 0xC3,
    NO_HID_KEYPAD_PERCENT  = 0xC4,
    NO_HID_KEYPAD_LESS_THAN    = 0xC5,
    NO_HID_KEYPAD_GREATER_THAN = 0xC6,
    NO_HID_KEYPAD_AMPERSAND    = 0xC7,
    NO_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    NO_HID_KEYPAD_PIPE = 0xC9,
    NO_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    NO_HID_KEYPAD_COLON    = 0xCB,
    NO_HID_KEYPAD_POUND_SIGN   = 0xCC,
    NO_HID_KEYPAD_SPACE    = 0xCD,
    NO_HID_KEYPAD_AT_SIGN  = 0xCE,
    NO_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    NO_HID_KEYPAD_MEMORY_STORE = 0xD0,
    NO_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    NO_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    NO_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    NO_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    NO_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    NO_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    NO_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    NO_HID_KEYPAD_CLEAR    = 0xD8,
    NO_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    NO_HID_KEYPAD_BINARY   = 0xDA,
    NO_HID_KEYPAD_OCTAL    = 0xDB,
    NO_HID_KEYPAD_DECIMAL  = 0xDC,
    NO_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    NO_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    NO_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    NO_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    NO_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    NO_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    NO_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    NO_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    NO_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};


// Key aliases
#define NO_KEY_NO_PIPE         NO_KEY_TILDE
#define NO_KEY_NO_PLUS         NO_KEY_MINUS       // LOL! :)
#define NO_KEY_NO_BACKSLASH    NO_KEY_EQUAL
#define NO_KEY_NO_ACIRCLE      NO_KEY_LEFT_BRACE
#define NO_KEY_NO_ACCENTS2     NO_KEY_RIGHT_BRACE
#define NO_KEY_NO_AE           NO_KEY_QUOTE
#define NO_KEY_NO_OSLASH       NO_KEY_SEMICOLON
#define NO_KEY_NO_QUOTE        NO_KEY_BACKSLASH
#define NO_KEY_NO_MINUS        NO_KEY_SLASH
#define NO_KEY_NO_LT_GT        NO_KEY_NON_US


static const uint16_t _asciimapNO[] PROGMEM =
{
    NO_KEY_RESERVED,                               // NUL
    NO_KEY_RESERVED,                               // SOH
    NO_KEY_RESERVED,                               // STX
    NO_KEY_RESERVED,                               // ETX
    NO_KEY_RESERVED,                               // EOT
    NO_KEY_RESERVED,                               // ENQ
    NO_KEY_RESERVED,                               // ACK
    NO_KEY_RESERVED,                               // BEL
    NO_KEY_BACKSPACE,                              // BS   Backspace
    NO_KEY_TAB,                                    // TAB  Tab
    NO_KEY_ENTER,                                  // LF   Enter
    NO_KEY_RESERVED,                               // VT
    NO_KEY_RESERVED,                               // FF
    NO_KEY_RESERVED,                               // CR
    NO_KEY_RESERVED,                               // SO
    NO_KEY_RESERVED,                               // SI
    NO_KEY_RESERVED,                               // DEL
    NO_KEY_RESERVED,                               // DC1
    NO_KEY_RESERVED,                               // DC2
    NO_KEY_RESERVED,                               // DC3
    NO_KEY_RESERVED,                               // DC4
    NO_KEY_RESERVED,                               // NAK
    NO_KEY_RESERVED,                               // SYN
    NO_KEY_RESERVED,                               // ETB
    NO_KEY_RESERVED,                               // CAN
    NO_KEY_RESERVED,                               // EM
    NO_KEY_RESERVED,                               // SUB
    NO_KEY_RESERVED,                               // ESC
    NO_KEY_RESERVED,                               // FS
    NO_KEY_RESERVED,                               // GS
    NO_KEY_RESERVED,                               // RS
    NO_KEY_RESERVED,                               // US
    NO_KEY_SPACE,                                  // ' ' Space
    NO_KEY_1|NO_MOD_LEFT_SHIFT,                       // !
    NO_KEY_2|NO_MOD_LEFT_SHIFT,                       // "
    NO_KEY_3|NO_MOD_LEFT_SHIFT,                       // #
    NO_KEY_4|NO_MOD_RIGHT_ALT,                        // $
    NO_KEY_5|NO_MOD_LEFT_SHIFT,                       // %
    NO_KEY_6|NO_MOD_LEFT_SHIFT,                       // &
    NO_KEY_NO_QUOTE,                               // '
    NO_KEY_8|NO_MOD_LEFT_SHIFT,                       // (
    NO_KEY_9|NO_MOD_LEFT_SHIFT,                       // )
    NO_KEY_NO_QUOTE|NO_MOD_LEFT_SHIFT,                // *
    NO_KEY_NO_PLUS,                                // +
    NO_KEY_COMMA,                                  // ,
    NO_KEY_NO_MINUS,                               // -
    NO_KEY_PERIOD,                                 // .
    NO_KEY_7|NO_MOD_LEFT_SHIFT,                       // /
    NO_KEY_0,                                      // 0
    NO_KEY_1,                                      // 1
    NO_KEY_2,                                      // 2
    NO_KEY_3,                                      // 3
    NO_KEY_4,                                      // 4
    NO_KEY_5,                                      // 5
    NO_KEY_6,                                      // 6
    NO_KEY_7,                                      // 7
    NO_KEY_8,                                      // 8
    NO_KEY_9,                                      // 9
    NO_KEY_PERIOD|NO_MOD_LEFT_SHIFT,                  // :
    NO_KEY_COMMA|NO_MOD_LEFT_SHIFT,                   // ;
    NO_KEY_NO_LT_GT,                               // <
    NO_KEY_0|NO_MOD_LEFT_SHIFT,                       // =
    NO_KEY_NO_LT_GT|NO_MOD_LEFT_SHIFT,                // >
    NO_KEY_NO_PLUS|NO_MOD_LEFT_SHIFT,                 // ?
    NO_KEY_2|NO_MOD_RIGHT_ALT,                        // @
    NO_KEY_A|NO_MOD_LEFT_SHIFT,                       // A
    NO_KEY_B|NO_MOD_LEFT_SHIFT,                       // B
    NO_KEY_C|NO_MOD_LEFT_SHIFT,                       // C
    NO_KEY_D|NO_MOD_LEFT_SHIFT,                       // D
    NO_KEY_E|NO_MOD_LEFT_SHIFT,                       // E
    NO_KEY_F|NO_MOD_LEFT_SHIFT,                       // F
    NO_KEY_G|NO_MOD_LEFT_SHIFT,                       // G
    NO_KEY_H|NO_MOD_LEFT_SHIFT,                       // H
    NO_KEY_I|NO_MOD_LEFT_SHIFT,                       // I
    NO_KEY_J|NO_MOD_LEFT_SHIFT,                       // J
    NO_KEY_K|NO_MOD_LEFT_SHIFT,                       // K
    NO_KEY_L|NO_MOD_LEFT_SHIFT,                       // L
    NO_KEY_M|NO_MOD_LEFT_SHIFT,                       // M
    NO_KEY_N|NO_MOD_LEFT_SHIFT,                       // N
    NO_KEY_O|NO_MOD_LEFT_SHIFT,                       // O
    NO_KEY_P|NO_MOD_LEFT_SHIFT,                       // P
    NO_KEY_Q|NO_MOD_LEFT_SHIFT,                       // Q
    NO_KEY_R|NO_MOD_LEFT_SHIFT,                       // R
    NO_KEY_S|NO_MOD_LEFT_SHIFT,                       // S
    NO_KEY_T|NO_MOD_LEFT_SHIFT,                       // T
    NO_KEY_U|NO_MOD_LEFT_SHIFT,                       // U
    NO_KEY_V|NO_MOD_LEFT_SHIFT,                       // V
    NO_KEY_W|NO_MOD_LEFT_SHIFT,                       // W
    NO_KEY_X|NO_MOD_LEFT_SHIFT,                       // X
    NO_KEY_Y|NO_MOD_LEFT_SHIFT,                       // Y
    NO_KEY_Z|NO_MOD_LEFT_SHIFT,                       // Z
    NO_KEY_8|NO_MOD_RIGHT_ALT,                        // [
    NO_KEY_NO_BACKSLASH,                           // bslash
    NO_KEY_9|NO_MOD_RIGHT_ALT,                        // ]
    NO_KEY_RESERVED,                               // ^ (Dead key)
    NO_KEY_NO_MINUS|NO_MOD_LEFT_SHIFT,                // _
    NO_KEY_RESERVED,                               // ` (Dead key)
    NO_KEY_A,                                      // a
    NO_KEY_B,                                      // b
    NO_KEY_C,                                      // c
    NO_KEY_D,                                      // d
    NO_KEY_E,                                      // e
    NO_KEY_F,                                      // f
    NO_KEY_G,                                      // g
    NO_KEY_H,                                      // h
    NO_KEY_I,                                      // i
    NO_KEY_J,                                      // j
    NO_KEY_K,                                      // k
    NO_KEY_L,                                      // l
    NO_KEY_M,                                      // m
    NO_KEY_N,                                      // n
    NO_KEY_O,                                      // o
    NO_KEY_P,                                      // p
    NO_KEY_Q,                                      // q
    NO_KEY_R,                                      // r
    NO_KEY_S,                                      // s
    NO_KEY_T,                                      // t
    NO_KEY_U,                                      // u
    NO_KEY_V,                                      // v
    NO_KEY_W,                                      // w
    NO_KEY_X,                                      // x
    NO_KEY_Y,                                      // y
    NO_KEY_Z,                                      // z
    NO_KEY_7|NO_MOD_RIGHT_ALT,                        // {
    NO_KEY_NO_PIPE,                                // |NO_
    NO_KEY_0|NO_MOD_RIGHT_ALT,                        // }
    NO_KEY_RESERVED,                               // ~ (Dead key)
    NO_KEY_RESERVED,                               // 127 - DEL
    NO_KEY_RESERVED,                               // 128 - Unused
    NO_KEY_RESERVED,                               // 129 - Unused
    NO_KEY_RESERVED,                               // 130 - Unused
    NO_KEY_RESERVED,                               // 131 - Unused
    NO_KEY_RESERVED,                               // 132 - Unused
    NO_KEY_RESERVED,                               // 133 - Unused
    NO_KEY_RESERVED,                               // 134 - Unused
    NO_KEY_RESERVED,                               // 135 - Unused
    NO_KEY_RESERVED,                               // 136 - Unused
    NO_KEY_RESERVED,                               // 137 - Unused
    NO_KEY_RESERVED,                               // 138 - Unused
    NO_KEY_RESERVED,                               // 139 - Unused
    NO_KEY_RESERVED,                               // 140 - Unused
    NO_KEY_RESERVED,                               // 141 - Unused
    NO_KEY_RESERVED,                               // 142 - Unused
    NO_KEY_RESERVED,                               // 143 - Unused
    NO_KEY_RESERVED,                               // 144 - Unused
    NO_KEY_RESERVED,                               // 145 - Unused
    NO_KEY_RESERVED,                               // 146 - Unused
    NO_KEY_RESERVED,                               // 147 - Unused
    NO_KEY_RESERVED,                               // 148 - Unused
    NO_KEY_RESERVED,                               // 149 - Unused
    NO_KEY_RESERVED,                               // 150 - Unused
    NO_KEY_RESERVED,                               // 151 - Unused
    NO_KEY_RESERVED,                               // 152 - Unused
    NO_KEY_RESERVED,                               // 153 - Unused
    NO_KEY_RESERVED,                               // 154 - Unused
    NO_KEY_RESERVED,                               // 155 - Unused
    NO_KEY_RESERVED,                               // 156 - Unused
    NO_KEY_RESERVED,                               // 157 - Unused
    NO_KEY_RESERVED,                               // 158 - Unused
    NO_KEY_RESERVED,                               // 159 - Unused
    NO_KEY_RESERVED,                               // 160 - Non-breaking Space
    NO_KEY_RESERVED,                               // 161 - Inverted Exclamation Mark
    NO_KEY_RESERVED,                               // 162 - Cent
    NO_KEY_RESERVED,                               // 163 - British Pound Sign
    NO_KEY_5|NO_MOD_RIGHT_ALT,                        // 164 - Euro Sign
    NO_KEY_RESERVED,                               // 165 - Yen
    NO_KEY_RESERVED,                               // 166 - Capital 's' Inverted Circumflex
    NO_KEY_NO_PIPE|NO_MOD_LEFT_SHIFT,                 // 167 - Section Sign
    NO_KEY_RESERVED,                               // 168 - 's' Inverted Circumflex
    NO_KEY_RESERVED,                               // 169 - Copyright Sign
    NO_KEY_RESERVED,                               // 170 - Superscript 'a'
    NO_KEY_RESERVED,                               // 171 - Open Guillemet
    NO_KEY_RESERVED,                               // 172 - Logic Negation
    NO_KEY_RESERVED,                               // 173 - Soft Hypen
    NO_KEY_RESERVED,                               // 174 - Registered Trademark
    NO_KEY_RESERVED,                               // 175 - Macron
    NO_KEY_RESERVED,                               // 176 - Degree Symbol
    NO_KEY_RESERVED,                               // 177 - Plus-Minus
    NO_KEY_RESERVED,                               // 178 - Superscript '2'
    NO_KEY_RESERVED,                               // 179 - Superscript '3'
    NO_KEY_RESERVED,                               // 180 - Capital 'z' Inverted Circumflex
    NO_KEY_M|NO_MOD_RIGHT_ALT,                        // 181 - Micro Symbol
    NO_KEY_RESERVED,                               // 182 - Paragraph Mark
    NO_KEY_RESERVED,                               // 183 - Interpunct
    NO_KEY_RESERVED,                               // 184 - 'z' Inverted Circumflex
    NO_KEY_RESERVED,                               // 185 - Superscript '1'
    NO_KEY_RESERVED,                               // 186 - Ordinal Indicator
    NO_KEY_RESERVED,                               // 187 - Closed Guillemet
    NO_KEY_RESERVED,                               // 188 - Capital 'oe'
    NO_KEY_RESERVED,                               // 189 - 'oe'
    NO_KEY_RESERVED,                               // 190 - Capital 'y' Umlaut
    NO_KEY_RESERVED,                               // 191 - Inverted Question Mark
    NO_KEY_RESERVED,                               // 192 - Capital 'a' Grave
    NO_KEY_RESERVED,                               // 193 - Capital 'a' Acute
    NO_KEY_RESERVED,                               // 194 - Capital 'a' Circumflex
    NO_KEY_RESERVED,                               // 195 - Capital 'a' Tilde
    NO_KEY_RESERVED,                               // 196 - Capital 'a' Umlaut
    NO_KEY_NO_ACIRCLE|NO_MOD_LEFT_SHIFT,              // 197 - Capital 'a' Circle
    NO_KEY_NO_AE|NO_MOD_LEFT_SHIFT,                   // 198 - Capital 'ae'
    NO_KEY_RESERVED,                               // 199 - Capital 'c' Cedilla
    NO_KEY_RESERVED,                               // 200 - Capital 'e' Grave
    NO_KEY_RESERVED,                               // 201 - Capital 'e' Acute
    NO_KEY_RESERVED,                               // 202 - Capital 'e' Circumflex
    NO_KEY_RESERVED,                               // 203 - Capital 'e' Umlaut
    NO_KEY_RESERVED,                               // 204 - Capital 'i' Grave
    NO_KEY_RESERVED,                               // 205 - Capital 'i' Acute
    NO_KEY_RESERVED,                               // 206 - Capital 'i' Circumflex
    NO_KEY_RESERVED,                               // 207 - Capital 'i' Umlaut
    NO_KEY_RESERVED,                               // 208 - Capital Eth
    NO_KEY_RESERVED,                               // 207 - Capital 'n' Tilde
    NO_KEY_RESERVED,                               // 210 - Capital 'o' Grave
    NO_KEY_RESERVED,                               // 211 - Capital 'o' Acute
    NO_KEY_RESERVED,                               // 212 - Capital 'o' Circumflex
    NO_KEY_RESERVED,                               // 213 - Capital 'o' Tilde
    NO_KEY_RESERVED,                               // 214 - Capital 'o' Umlaut
    NO_KEY_RESERVED,                               // 215 - Multiplication Sign
    NO_KEY_NO_OSLASH|NO_MOD_LEFT_SHIFT,               // 216 - Capital 'o' Barred
    NO_KEY_RESERVED,                               // 217 - Capital 'u' Grave
    NO_KEY_RESERVED,                               // 218 - Capital 'u' Acute
    NO_KEY_RESERVED,                               // 219 - Capital 'u' Circumflex
    NO_KEY_RESERVED,                               // 220 - Capital 'u' Umlaut
    NO_KEY_RESERVED,                               // 221 - Capital 'y' Acute
    NO_KEY_RESERVED,                               // 222 - Capital Thorn
    NO_KEY_RESERVED,                               // 223 - Eszett
    NO_KEY_RESERVED,                               // 224 - 'a' Grave
    NO_KEY_RESERVED,                               // 225 - 'a' Acute
    NO_KEY_RESERVED,                               // 226 - 'a' Circumflex
    NO_KEY_RESERVED,                               // 227 - 'a' Tilde
    NO_KEY_RESERVED,                               // 228 - 'a' Umlaut
    NO_KEY_NO_ACIRCLE,                             // 229 - 'a' Circle
    NO_KEY_NO_AE,                                  // 230 - 'ae'
    NO_KEY_RESERVED,                               // 231 - 'c' Cedilla
    NO_KEY_RESERVED,                               // 232 - 'e' Grave
    NO_KEY_RESERVED,                               // 233 - 'e' Acute
    NO_KEY_RESERVED,                               // 234 - 'e' Circumflex
    NO_KEY_RESERVED,                               // 235 - 'e' Umlaut
    NO_KEY_RESERVED,                               // 236 - 'i' Grave
    NO_KEY_RESERVED,                               // 237 - 'i' Acute
    NO_KEY_RESERVED,                               // 238 - 'i' Circumflex
    NO_KEY_RESERVED,                               // 239 - 'i' Umlaut
    NO_KEY_RESERVED,                               // 240 - Eth
    NO_KEY_RESERVED,                               // 241 - 'n' Tilde
    NO_KEY_RESERVED,                               // 242 - 'o' Grave
    NO_KEY_RESERVED,                               // 243 - 'o' Acute
    NO_KEY_RESERVED,                               // 244 - 'o' Circumflex
    NO_KEY_RESERVED,                               // 245 - 'o' Tilde
    NO_KEY_RESERVED,                               // 246 - 'o' Umlaut
    NO_KEY_RESERVED,                               // 247 - Multiplication Sign
    NO_KEY_NO_OSLASH,                              // 248 - 'o' Barred
    NO_KEY_RESERVED,                               // 249 - 'u' Grave
    NO_KEY_RESERVED,                               // 250 - 'u' Acute
    NO_KEY_RESERVED,                               // 251 - 'u' Circumflex
    NO_KEY_RESERVED,                               // 252 - 'u' Umlaut
    NO_KEY_RESERVED,                               // 253 - 'y' Acute
    NO_KEY_RESERVED,                               // 254 - Thorn
    NO_KEY_RESERVED,                               // 255 - 'y' Umlaut
};
