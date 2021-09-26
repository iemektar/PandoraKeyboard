
enum KeyboardModsDE : uint16_t {
    DE_MOD_LEFT_CTRL       = (1 <<  8),
    DE_MOD_LEFT_SHIFT      = (1 <<  9),
    DE_MOD_LEFT_ALT        = (1 << 10),
    DE_MOD_LEFT_GUI        = (1 << 11),
    DE_MOD_RIGHT_CTRL      = (1 << 12),
    DE_MOD_RIGHT_SHIFT     = (1 << 13),
    DE_MOD_RIGHT_ALT       = (1 << 14),
    DE_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};


// Hut1_12v2.pdf

enum KeyboardKeycodeDE : uint8_t {
    DE_KEY_RESERVED        =  0,
    DE_KEY_ERROR_ROLLOVER  =  1,
    DE_KEY_POST_FAIL       =  2,
    DE_KEY_ERROR_UNDEFINED =  3,
    DE_KEY_A               =  4,
    DE_KEY_B               =  5,
    DE_KEY_C               =  6,
    DE_KEY_D               =  7,
    DE_KEY_E               =  8,
    DE_KEY_F               =  9,
    DE_KEY_G               = 10,
    DE_KEY_H               = 11,
    DE_KEY_I               = 12,
    DE_KEY_J               = 13,
    DE_KEY_K               = 14,
    DE_KEY_L               = 15,
    DE_KEY_M               = 16,
    DE_KEY_N               = 17,
    DE_KEY_O               = 18,
    DE_KEY_P               = 19,
    DE_KEY_Q               = 20,
    DE_KEY_R               = 21,
    DE_KEY_S               = 22,
    DE_KEY_T               = 23,
    DE_KEY_U               = 24,
    DE_KEY_V               = 25,
    DE_KEY_W               = 26,
    DE_KEY_X               = 27,
    DE_KEY_Y               = 28,
    DE_KEY_Z               = 29,
    DE_KEY_1               = 30,
    DE_KEY_2               = 31,
    DE_KEY_3               = 32,
    DE_KEY_4               = 33,
    DE_KEY_5               = 34,
    DE_KEY_6               = 35,
    DE_KEY_7               = 36,
    DE_KEY_8               = 37,
    DE_KEY_9               = 38,
    DE_KEY_0               = 39,
    DE_KEY_ENTER           = 40,
    DE_KEY_RETURN          = 40, // Alias
    DE_KEY_ESC             = 41,
    DE_KEY_BACKSPACE       = 42,
    DE_KEY_TAB             = 43,
    DE_KEY_SPACE           = 44,
    DE_KEY_MINUS           = 45,
    DE_KEY_EQUAL           = 46,
    DE_KEY_LEFT_BRACE      = 47,
    DE_KEY_RIGHT_BRACE     = 48,
    DE_KEY_BACKSLASH       = 49,
    DE_KEY_NON_US_NUM      = 50,
    DE_KEY_SEMICOLON       = 51,
    DE_KEY_QUOTE           = 52,
    DE_KEY_TILDE           = 53,
    DE_KEY_COMMA           = 54,
    DE_KEY_PERIOD          = 55,
    DE_KEY_SLASH           = 56,
    DE_KEY_CAPS_LOCK       = 0x39,
    DE_KEY_F1              = 0x3A,
    DE_KEY_F2              = 0x3B,
    DE_KEY_F3              = 0x3C,
    DE_KEY_F4              = 0x3D,
    DE_KEY_F5              = 0x3E,
    DE_KEY_F6              = 0x3F,
    DE_KEY_F7              = 0x40,
    DE_KEY_F8              = 0x41,
    DE_KEY_F9              = 0x42,
    DE_KEY_F10             = 0x43,
    DE_KEY_F11             = 0x44,
    DE_KEY_F12             = 0x45,
    DE_KEY_PRINT           = 0x46,
    DE_KEY_PRINTSCREEN     = 0x46, // Alias
    DE_KEY_SCROLL_LOCK     = 0x47,
    DE_KEY_PAUSE           = 0x48,
    DE_KEY_INSERT          = 0x49,
    DE_KEY_HOME            = 0x4A,
    DE_KEY_PAGE_UP         = 0x4B,
    DE_KEY_DELETE          = 0x4C,
    DE_KEY_END             = 0x4D,
    DE_KEY_PAGE_DOWN       = 0x4E,
    DE_KEY_RIGHT_ARROW     = 0x4F,
    DE_KEY_LEFT_ARROW      = 0x50,
    DE_KEY_DOWN_ARROW      = 0x51,
    DE_KEY_UP_ARROW        = 0x52,
    DE_KEY_RIGHT           = 0x4F, // Alias
    DE_KEY_LEFT            = 0x50, // Alias
    DE_KEY_DOWN            = 0x51, // Alias
    DE_KEY_UP              = 0x52, // Alias
    DE_KEY_NUM_LOCK        = 0x53,
    DE_KEYPAD_DIVIDE       = 0x54,
    DE_KEYPAD_MULTIPLY     = 0x55,
    DE_KEYPAD_SUBTRACT     = 0x56,
    DE_KEYPAD_ADD          = 0x57,
    DE_KEYPAD_ENTER        = 0x58,
    DE_KEYPAD_1            = 0x59,
    DE_KEYPAD_2            = 0x5A,
    DE_KEYPAD_3            = 0x5B,
    DE_KEYPAD_4            = 0x5C,
    DE_KEYPAD_5            = 0x5D,
    DE_KEYPAD_6            = 0x5E,
    DE_KEYPAD_7            = 0x5F,
    DE_KEYPAD_8            = 0x60,
    DE_KEYPAD_9            = 0x61,
    DE_KEYPAD_0            = 0x62,
    DE_KEYPAD_DOT          = 0x63,
    DE_KEY_NON_US          = 0x64,
    DE_KEY_APPLICATION     = 0x65, // Context menu/right click
    DE_KEY_MENU            = 0x65,
    DE_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    DE_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    DE_KEY_F13             = 0x68, // Tools (Ubunutu)
    DE_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    DE_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    DE_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    DE_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    DE_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    DE_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    DE_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    DE_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    DE_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    DE_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    DE_KEY_F24             = 0x73, // Disabled (Ubuntu)
    DE_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    DE_KEY_HELP            = 0x75, // Help (Ubuntu)
    DE_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    DE_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    DE_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    DE_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    DE_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    DE_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    DE_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    DE_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    DE_KEY_FIND            = 0x7E, // Find (Ubuntu)
    DE_KEY_MUTE            = 0x7F,
    DE_KEY_VOLUME_MUTE     = 0x7F, // Alias
    DE_KEY_VOLUME_UP       = 0x80,
    DE_KEY_VOLUME_DOWN     = 0x81,
    DE_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    DE_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    DE_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    DE_KEYPAD_COMMA            = 0x85, // .
    DE_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    DE_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    DE_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    DE_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    DE_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    DE_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    DE_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    DE_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    DE_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    DE_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    DE_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    DE_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    DE_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    DE_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    DE_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    DE_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    DE_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    DE_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    DE_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    DE_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    DE_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    DE_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    DE_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    DE_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    DE_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    DE_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    DE_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    DE_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    DE_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    DE_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    DE_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    DE_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    DE_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    DE_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    DE_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    DE_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    DE_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    DE_KEYPAD_LEFT_BRACE           = 0xB6, // (
    DE_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    DE_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    DE_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    DE_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    DE_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    DE_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    DE_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    DE_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    DE_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    DE_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    DE_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    DE_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    DE_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    DE_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    DE_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    DE_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    DE_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    DE_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    DE_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    DE_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    DE_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    DE_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    DE_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    DE_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    DE_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    DE_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    DE_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    DE_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    DE_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    DE_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    DE_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    DE_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    DE_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    DE_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    DE_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    DE_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    DE_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    DE_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    DE_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    DE_KEY_LEFT_CTRL           = 0xE0,
    DE_KEY_LEFT_SHIFT          = 0xE1,
    DE_KEY_LEFT_ALT            = 0xE2,
    DE_KEY_LEFT_GUI            = 0xE3,
    DE_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    DE_KEY_RIGHT_CTRL          = 0xE4,
    DE_KEY_RIGHT_SHIFT         = 0xE5,
    DE_KEY_RIGHT_ALT           = 0xE6,
    DE_KEY_RIGHT_GUI           = 0xE7,
    DE_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    DE_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    DE_HID_KEYBOARD_POST_FAIL  = 0x02,
    DE_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    DE_HID_KEYBOARD_A_AND_A    = 0x04,
    DE_HID_KEYBOARD_B_AND_B    = 0x05,
    DE_HID_KEYBOARD_C_AND_C    = 0x06,
    DE_HID_KEYBOARD_D_AND_D    = 0x07,
    DE_HID_KEYBOARD_E_AND_E    = 0x08,
    DE_HID_KEYBOARD_F_AND_F    = 0x09,
    DE_HID_KEYBOARD_G_AND_G    = 0x0A,
    DE_HID_KEYBOARD_H_AND_H    = 0x0B,
    DE_HID_KEYBOARD_I_AND_I    = 0x0C,
    DE_HID_KEYBOARD_J_AND_J    = 0x0D,
    DE_HID_KEYBOARD_K_AND_K    = 0x0E,
    DE_HID_KEYBOARD_L_AND_L    = 0x0F,
    DE_HID_KEYBOARD_M_AND_M    = 0x10,
    DE_HID_KEYBOARD_N_AND_N    = 0x11,
    DE_HID_KEYBOARD_O_AND_O    = 0x12,
    DE_HID_KEYBOARD_P_AND_P    = 0x13,
    DE_HID_KEYBOARD_Q_AND_Q    = 0x14,
    DE_HID_KEYBOARD_R_AND_R    = 0x15,
    DE_HID_KEYBOARD_S_AND_S    = 0x16,
    DE_HID_KEYBOARD_T_AND_T    = 0x17,
    DE_HID_KEYBOARD_U_AND_U    = 0x18,
    DE_HID_KEYBOARD_V_AND_V    = 0x19,
    DE_HID_KEYBOARD_W_AND_W    = 0x1A,
    DE_HID_KEYBOARD_X_AND_X    = 0x1B,
    DE_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    DE_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    DE_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    DE_HID_KEYBOARD_2_AND_AT   = 0x1F,
    DE_HID_KEYBOARD_3_AND_POUND    = 0x20,
    DE_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    DE_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    DE_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    DE_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    DE_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    DE_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    DE_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    DE_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    DE_HID_KEYBOARD_ESCAPE = 0x29,
    DE_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    DE_HID_KEYBOARD_TAB    = 0x2B,
    DE_HID_KEYBOARD_SPACEBAR   = 0x2C,
    DE_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    DE_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    DE_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    DE_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    DE_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    DE_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    DE_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    DE_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    DE_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    DE_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    DE_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    DE_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    DE_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    DE_HID_KEYBOARD_F1 = 0x3A,
    DE_HID_KEYBOARD_F2 = 0x3B,
    DE_HID_KEYBOARD_F3 = 0x3C,
    DE_HID_KEYBOARD_F4 = 0x3D,
    DE_HID_KEYBOARD_F5 = 0x3E,
    DE_HID_KEYBOARD_F6 = 0x3F,
    DE_HID_KEYBOARD_F7 = 0x40,
    DE_HID_KEYBOARD_F8 = 0x41,
    DE_HID_KEYBOARD_F9 = 0x42,
    DE_HID_KEYBOARD_F10    = 0x43,
    DE_HID_KEYBOARD_F11    = 0x44,
    DE_HID_KEYBOARD_F12    = 0x45,
    DE_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    DE_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    DE_HID_KEYBOARD_PAUSE  = 0x48,
    DE_HID_KEYBOARD_INSERT = 0x49,
    DE_HID_KEYBOARD_HOME   = 0x4A,
    DE_HID_KEYBOARD_PAGE_UP    = 0x4B,
    DE_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    DE_HID_KEYBOARD_END    = 0x4D,
    DE_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    DE_HID_KEYBOARD_RIGHTARROW = 0x4F,
    DE_HID_KEYBOARD_LEFTARROW  = 0x50,
    DE_HID_KEYBOARD_DOWNARROW  = 0x51,
    DE_HID_KEYBOARD_UPARROW    = 0x52,
    DE_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    DE_HID_KEYPAD_DIVIDE   = 0x54,
    DE_HID_KEYPAD_MULTIPLY = 0x55,
    DE_HID_KEYPAD_SUBTRACT = 0x56,
    DE_HID_KEYPAD_ADD  = 0x57,
    DE_HID_KEYPAD_ENTER    = 0x58,
    DE_HID_KEYPAD_1_AND_END    = 0x59,
    DE_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    DE_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    DE_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    DE_HID_KEYPAD_5    = 0x5D,
    DE_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    DE_HID_KEYPAD_7_AND_HOME   = 0x5F,
    DE_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    DE_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    DE_HID_KEYPAD_0_AND_INSERT = 0x62,
    DE_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    DE_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    DE_HID_KEYBOARD_APPLICATION    = 0x65,
    DE_HID_KEYBOARD_POWER  = 0x66,
    DE_HID_KEYPAD_EQUALS   = 0x67,
    DE_HID_KEYBOARD_F13    = 0x68,
    DE_HID_KEYBOARD_F14    = 0x69,
    DE_HID_KEYBOARD_F15    = 0x6A,
    DE_HID_KEYBOARD_F16    = 0x6B,
    DE_HID_KEYBOARD_F17    = 0x6C,
    DE_HID_KEYBOARD_F18    = 0x6D,
    DE_HID_KEYBOARD_F19    = 0x6E,
    DE_HID_KEYBOARD_F20    = 0x6F,
    DE_HID_KEYBOARD_F21    = 0x70,
    DE_HID_KEYBOARD_F22    = 0x71,
    DE_HID_KEYBOARD_F23    = 0x72,
    DE_HID_KEYBOARD_F24    = 0x73,
    DE_HID_KEYBOARD_EXECUTE    = 0x74,
    DE_HID_KEYBOARD_HELP   = 0x75,
    DE_HID_KEYBOARD_MENU   = 0x76,
    DE_HID_KEYBOARD_SELECT = 0x77,
    DE_HID_KEYBOARD_STOP   = 0x78,
    DE_HID_KEYBOARD_AGAIN  = 0x79,
    DE_HID_KEYBOARD_UNDO   = 0x7A,
    DE_HID_KEYBOARD_CUT    = 0x7B,
    DE_HID_KEYBOARD_COPY   = 0x7C,
    DE_HID_KEYBOARD_PASTE  = 0x7D,
    DE_HID_KEYBOARD_FIND   = 0x7E,
    DE_HID_KEYBOARD_MUTE   = 0x7F,
    DE_HID_KEYBOARD_VOLUME_UP  = 0x80,
    DE_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    DE_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    DE_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    DE_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    DE_HID_KEYPAD_COMMA    = 0x85,
    DE_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    DE_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    DE_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    DE_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    DE_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    DE_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    DE_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    DE_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    DE_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    DE_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    DE_HID_KEYBOARD_LANG1  = 0x90,
    DE_HID_KEYBOARD_LANG2  = 0x91,
    DE_HID_KEYBOARD_LANG3  = 0x92,
    DE_HID_KEYBOARD_LANG4  = 0x93,
    DE_HID_KEYBOARD_LANG5  = 0x94,
    DE_HID_KEYBOARD_LANG6  = 0x95,
    DE_HID_KEYBOARD_LANG7  = 0x96,
    DE_HID_KEYBOARD_LANG8  = 0x97,
    DE_HID_KEYBOARD_LANG9  = 0x98,
    DE_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    DE_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    DE_HID_KEYBOARD_CANCEL = 0x9B,
    DE_HID_KEYBOARD_CLEAR  = 0x9C,
    DE_HID_KEYBOARD_PRIOR  = 0x9D,
    DE_HID_KEYBOARD_RETURN = 0x9E,
    DE_HID_KEYBOARD_SEPARATOR  = 0x9F,
    DE_HID_KEYBOARD_OUT    = 0xA0,
    DE_HID_KEYBOARD_OPER   = 0xA1,
    DE_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    DE_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    DE_HID_KEYBOARD_EXSEL  = 0xA4,
    DE_HID_KEYPAD_00   = 0xB0,
    DE_HID_KEYPAD_000  = 0xB1,
    DE_HID_THOUSANDS_SEPARATOR = 0xB2,
    DE_HID_DECIMAL_SEPARATOR   = 0xB3,
    DE_HID_CURRENCY_UNIT   = 0xB4,
    DE_HID_CURRENCY_SUBUNIT    = 0xB5,
    DE_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    DE_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    DE_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    DE_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    DE_HID_KEYPAD_TAB  = 0xBA,
    DE_HID_KEYPAD_BACKSPACE    = 0xBB,
    DE_HID_KEYPAD_A    = 0xBC,
    DE_HID_KEYPAD_B    = 0xBD,
    DE_HID_KEYPAD_C    = 0xBE,
    DE_HID_KEYPAD_D    = 0xBF,
    DE_HID_KEYPAD_E    = 0xC0,
    DE_HID_KEYPAD_F    = 0xC1,
    DE_HID_KEYPAD_XOR  = 0xC2,
    DE_HID_KEYPAD_CARAT    = 0xC3,
    DE_HID_KEYPAD_PERCENT  = 0xC4,
    DE_HID_KEYPAD_LESS_THAN    = 0xC5,
    DE_HID_KEYPAD_GREATER_THAN = 0xC6,
    DE_HID_KEYPAD_AMPERSAND    = 0xC7,
    DE_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    DE_HID_KEYPAD_PIPE = 0xC9,
    DE_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    DE_HID_KEYPAD_COLON    = 0xCB,
    DE_HID_KEYPAD_POUND_SIGN   = 0xCC,
    DE_HID_KEYPAD_SPACE    = 0xCD,
    DE_HID_KEYPAD_AT_SIGN  = 0xCE,
    DE_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    DE_HID_KEYPAD_MEMORY_STORE = 0xD0,
    DE_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    DE_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    DE_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    DE_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    DE_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    DE_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    DE_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    DE_HID_KEYPAD_CLEAR    = 0xD8,
    DE_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    DE_HID_KEYPAD_BINARY   = 0xDA,
    DE_HID_KEYPAD_OCTAL    = 0xDB,
    DE_HID_KEYPAD_DECIMAL  = 0xDC,
    DE_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    DE_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    DE_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    DE_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    DE_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    DE_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    DE_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    DE_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    DE_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};



// Key aliases
#define DE_KEY_DE_Y		   DE_KEY_Z
#define DE_KEY_DE_Z		   DE_KEY_Y
#define DE_KEY_DE_SZ	   DE_KEY_MINUS
#define DE_KEY_DE_ACCENT   DE_KEY_EQUAL
#define DE_KEY_DE_UE       DE_KEY_LEFT_BRACE
#define DE_KEY_DE_PLUS     DE_KEY_RIGHT_BRACE
#define DE_KEY_DE_HASHTAG2 DE_KEY_BACKSLASH
#define DE_KEY_DE_HASHTAG  DE_KEY_NON_US_NUM
#define DE_KEY_DE_OE       DE_KEY_SEMICOLON
#define DE_KEY_DE_AE       DE_KEY_QUOTE
#define DE_KEY_DE_DACH     DE_KEY_TILDE
#define DE_KEY_DE_MINUS    DE_KEY_SLASH
#define DE_KEY_DE_SMALLER  DE_KEY_NON_US


static const uint16_t _asciimapDE[] PROGMEM =
{
	DE_KEY_RESERVED,           // NUL
	DE_KEY_RESERVED,           // SOH
	DE_KEY_RESERVED,           // STX
	DE_KEY_RESERVED,           // ETX
	DE_KEY_RESERVED,           // EOT
	DE_KEY_RESERVED,           // ENQ
	DE_KEY_RESERVED,           // ACK  
	DE_KEY_RESERVED,           // BEL
	DE_KEY_BACKSPACE,			// BS	Backspace
	DE_KEY_TAB,				// TAB	Tab
	DE_KEY_ENTER,				// LF	Enter
	DE_KEY_RESERVED,           // VT 
	DE_KEY_RESERVED,           // FF 
	DE_KEY_RESERVED,           // CR 
	DE_KEY_RESERVED,           // SO 
	DE_KEY_RESERVED,           // SI 
	DE_KEY_RESERVED,           // DEL
	DE_KEY_RESERVED,           // DC1
	DE_KEY_RESERVED,           // DC2
	DE_KEY_RESERVED,           // DC3
	DE_KEY_RESERVED,           // DC4
	DE_KEY_RESERVED,           // NAK
	DE_KEY_RESERVED,           // SYN
	DE_KEY_RESERVED,           // ETB
	DE_KEY_RESERVED,           // CAN
	DE_KEY_RESERVED,           // EM 
	DE_KEY_RESERVED,           // SUB
	DE_KEY_RESERVED,           // ESC
	DE_KEY_RESERVED,           // FS 
	DE_KEY_RESERVED,           // GS 
	DE_KEY_RESERVED,           // RS 
	DE_KEY_RESERVED,           // US 
	DE_KEY_SPACE,		   		// ' ' Space
	DE_KEY_1|DE_MOD_LEFT_SHIFT,			// !
	DE_KEY_2|DE_MOD_LEFT_SHIFT,			// "
	DE_KEY_DE_HASHTAG,		    		// #
	DE_KEY_4|DE_MOD_LEFT_SHIFT,    		// $
	DE_KEY_5|DE_MOD_LEFT_SHIFT,    		// %
	DE_KEY_6|DE_MOD_LEFT_SHIFT,    		// &
	DE_KEY_DE_HASHTAG|DE_MOD_LEFT_SHIFT,     // '
	DE_KEY_8|DE_MOD_LEFT_SHIFT,    		// (
	DE_KEY_9|DE_MOD_LEFT_SHIFT,    		// )
	DE_KEY_DE_PLUS|DE_MOD_LEFT_SHIFT,    	// *
	DE_KEY_DE_PLUS,    					// +
	DE_KEY_COMMA,          	// ,
	DE_KEY_MINUS,          	// -
	DE_KEY_PERIOD,          	// .
	DE_KEY_7|DE_MOD_LEFT_SHIFT,   // /
	DE_KEY_0,          		// 0
	DE_KEY_1,          		// 1
	DE_KEY_2,          		// 2
	DE_KEY_3,          		// 3
	DE_KEY_4,          		// 4
	DE_KEY_5,          		// 5
	DE_KEY_6,          		// 6
	DE_KEY_7,          		// 7
	DE_KEY_8,          		// 8
	DE_KEY_9,          		// 9
	DE_KEY_PERIOD|DE_MOD_LEFT_SHIFT,	// :
	DE_KEY_COMMA|DE_MOD_LEFT_SHIFT,   // ;
	DE_KEY_DE_SMALLER,      			// <
	DE_KEY_0|DE_MOD_LEFT_SHIFT,          	// =
	DE_KEY_DE_SMALLER|DE_MOD_LEFT_SHIFT,      // >
	DE_KEY_DE_SZ|DE_MOD_LEFT_SHIFT,      	// ?
	DE_KEY_Q|DE_MOD_RIGHT_ALT,      		// @
	DE_KEY_A|DE_MOD_LEFT_SHIFT,      		// A
	DE_KEY_B|DE_MOD_LEFT_SHIFT,      		// B
	DE_KEY_C|DE_MOD_LEFT_SHIFT,      		// C
	DE_KEY_D|DE_MOD_LEFT_SHIFT,      		// D
	DE_KEY_E|DE_MOD_LEFT_SHIFT,      		// E
	DE_KEY_F|DE_MOD_LEFT_SHIFT,      		// F
	DE_KEY_G|DE_MOD_LEFT_SHIFT,      		// G
	DE_KEY_H|DE_MOD_LEFT_SHIFT,      		// H
	DE_KEY_I|DE_MOD_LEFT_SHIFT,      		// I
	DE_KEY_J|DE_MOD_LEFT_SHIFT,      		// J
	DE_KEY_K|DE_MOD_LEFT_SHIFT,      		// K
	DE_KEY_L|DE_MOD_LEFT_SHIFT,      		// L
	DE_KEY_M|DE_MOD_LEFT_SHIFT,      		// M
	DE_KEY_N|DE_MOD_LEFT_SHIFT,      		// N
	DE_KEY_O|DE_MOD_LEFT_SHIFT,      		// O
	DE_KEY_P|DE_MOD_LEFT_SHIFT,      		// P
	DE_KEY_Q|DE_MOD_LEFT_SHIFT,      		// Q
	DE_KEY_R|DE_MOD_LEFT_SHIFT,      		// R
	DE_KEY_S|DE_MOD_LEFT_SHIFT,      		// S
	DE_KEY_T|DE_MOD_LEFT_SHIFT,      		// T
	DE_KEY_U|DE_MOD_LEFT_SHIFT,      		// U
	DE_KEY_V|DE_MOD_LEFT_SHIFT,      		// V
	DE_KEY_W|DE_MOD_LEFT_SHIFT,      		// W
	DE_KEY_X|DE_MOD_LEFT_SHIFT,      		// X
	DE_KEY_DE_Y|DE_MOD_LEFT_SHIFT,      		// Y
	DE_KEY_DE_Z|DE_MOD_LEFT_SHIFT,      		// Z
	DE_KEY_8|DE_MOD_RIGHT_ALT,	         // [
	DE_KEY_DE_SZ|DE_MOD_RIGHT_ALT,          // bslash
	DE_KEY_9|DE_MOD_RIGHT_ALT,        	// ]
	DE_KEY_6|DE_MOD_LEFT_SHIFT,    		// ^
	DE_KEY_MINUS|DE_MOD_LEFT_SHIFT,    	// _
	DE_KEY_DE_ACCENT|DE_MOD_LEFT_SHIFT,      // `
	DE_KEY_A,          		// a
	DE_KEY_B,          		// b
	DE_KEY_C,          		// c
	DE_KEY_D,          		// d
	DE_KEY_E,          		// e
	DE_KEY_F,          		// f
	DE_KEY_G,          		// g
	DE_KEY_H,          		// h
	DE_KEY_I,          		// i
	DE_KEY_J,          		// j
	DE_KEY_K,         		 	// k
	DE_KEY_L,          		// l
	DE_KEY_M,          		// m
	DE_KEY_N,          		// n
	DE_KEY_O,          		// o
	DE_KEY_P,          		// p
	DE_KEY_Q,          		// q
	DE_KEY_R,          		// r
	DE_KEY_S,          		// s
	DE_KEY_T,          		// t
	DE_KEY_U,          		// u
	DE_KEY_V,          		// v
	DE_KEY_W,          		// w
	DE_KEY_X,          		// x
	DE_KEY_DE_Y,          		// y
	DE_KEY_DE_Z,          		// z
	DE_KEY_7|DE_MOD_RIGHT_ALT,	// {
	DE_KEY_DE_SMALLER|DE_MOD_RIGHT_ALT,    		// |DE_
	DE_KEY_0|DE_MOD_RIGHT_ALT,	// }
	DE_KEY_DE_PLUS|DE_MOD_RIGHT_ALT,    	// ~
	DE_KEY_RESERVED			// DEL
};

