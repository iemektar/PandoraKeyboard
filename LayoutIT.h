
enum KeyboardModsIT : uint16_t {
    IT_MOD_LEFT_CTRL       = (1 <<  8),
    IT_MOD_LEFT_SHIFT      = (1 <<  9),
    IT_MOD_LEFT_ALT        = (1 << 10),
    IT_MOD_LEFT_GUI        = (1 << 11),
    IT_MOD_RIGHT_CTRL      = (1 << 12),
    IT_MOD_RIGHT_SHIFT     = (1 << 13),
    IT_MOD_RIGHT_ALT       = (1 << 14),
    IT_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};


// Hut1_12v2.pdf

enum KeyboardKeycodeIT : uint8_t {
    IT_KEY_RESERVED        =  0,
    IT_KEY_ERROR_ROLLOVER  =  1,
    IT_KEY_POST_FAIL       =  2,
    IT_KEY_ERROR_UNDEFINED =  3,
    IT_KEY_A               =  4,
    IT_KEY_B               =  5,
    IT_KEY_C               =  6,
    IT_KEY_D               =  7,
    IT_KEY_E               =  8,
    IT_KEY_F               =  9,
    IT_KEY_G               = 10,
    IT_KEY_H               = 11,
    IT_KEY_I               = 12,
    IT_KEY_J               = 13,
    IT_KEY_K               = 14,
    IT_KEY_L               = 15,
    IT_KEY_M               = 16,
    IT_KEY_N               = 17,
    IT_KEY_O               = 18,
    IT_KEY_P               = 19,
    IT_KEY_Q               = 20,
    IT_KEY_R               = 21,
    IT_KEY_S               = 22,
    IT_KEY_T               = 23,
    IT_KEY_U               = 24,
    IT_KEY_V               = 25,
    IT_KEY_W               = 26,
    IT_KEY_X               = 27,
    IT_KEY_Y               = 28,
    IT_KEY_Z               = 29,
    IT_KEY_1               = 30,
    IT_KEY_2               = 31,
    IT_KEY_3               = 32,
    IT_KEY_4               = 33,
    IT_KEY_5               = 34,
    IT_KEY_6               = 35,
    IT_KEY_7               = 36,
    IT_KEY_8               = 37,
    IT_KEY_9               = 38,
    IT_KEY_0               = 39,
    IT_KEY_ENTER           = 40,
    IT_KEY_RETURN          = 40, // Alias
    IT_KEY_ESC             = 41,
    IT_KEY_BACKSPACE       = 42,
    IT_KEY_TAB             = 43,
    IT_KEY_SPACE           = 44,
    IT_KEY_MINUS           = 45,
    IT_KEY_EQUAL           = 46,
    IT_KEY_LEFT_BRACE      = 47,
    IT_KEY_RIGHT_BRACE     = 48,
    IT_KEY_BACKSLASH       = 49,
    IT_KEY_NON_US_NUM      = 50,
    IT_KEY_SEMICOLON       = 51,
    IT_KEY_QUOTE           = 52,
    IT_KEY_TILDE           = 53,
    IT_KEY_COMMA           = 54,
    IT_KEY_PERIOD          = 55,
    IT_KEY_SLASH           = 56,
    IT_KEY_CAPS_LOCK       = 0x39,
    IT_KEY_F1              = 0x3A,
    IT_KEY_F2              = 0x3B,
    IT_KEY_F3              = 0x3C,
    IT_KEY_F4              = 0x3D,
    IT_KEY_F5              = 0x3E,
    IT_KEY_F6              = 0x3F,
    IT_KEY_F7              = 0x40,
    IT_KEY_F8              = 0x41,
    IT_KEY_F9              = 0x42,
    IT_KEY_F10             = 0x43,
    IT_KEY_F11             = 0x44,
    IT_KEY_F12             = 0x45,
    IT_KEY_PRINT           = 0x46,
    IT_KEY_PRINTSCREEN     = 0x46, // Alias
    IT_KEY_SCROLL_LOCK     = 0x47,
    IT_KEY_PAUSE           = 0x48,
    IT_KEY_INSERT          = 0x49,
    IT_KEY_HOME            = 0x4A,
    IT_KEY_PAGE_UP         = 0x4B,
    IT_KEY_DELETE          = 0x4C,
    IT_KEY_END             = 0x4D,
    IT_KEY_PAGE_DOWN       = 0x4E,
    IT_KEY_RIGHT_ARROW     = 0x4F,
    IT_KEY_LEFT_ARROW      = 0x50,
    IT_KEY_DOWN_ARROW      = 0x51,
    IT_KEY_UP_ARROW        = 0x52,
    IT_KEY_RIGHT           = 0x4F, // Alias
    IT_KEY_LEFT            = 0x50, // Alias
    IT_KEY_DOWN            = 0x51, // Alias
    IT_KEY_UP              = 0x52, // Alias
    IT_KEY_NUM_LOCK        = 0x53,
    IT_KEYPAD_DIVIDE       = 0x54,
    IT_KEYPAD_MULTIPLY     = 0x55,
    IT_KEYPAD_SUBTRACT     = 0x56,
    IT_KEYPAD_ADD          = 0x57,
    IT_KEYPAD_ENTER        = 0x58,
    IT_KEYPAD_1            = 0x59,
    IT_KEYPAD_2            = 0x5A,
    IT_KEYPAD_3            = 0x5B,
    IT_KEYPAD_4            = 0x5C,
    IT_KEYPAD_5            = 0x5D,
    IT_KEYPAD_6            = 0x5E,
    IT_KEYPAD_7            = 0x5F,
    IT_KEYPAD_8            = 0x60,
    IT_KEYPAD_9            = 0x61,
    IT_KEYPAD_0            = 0x62,
    IT_KEYPAD_DOT          = 0x63,
    IT_KEY_NON_US          = 0x64,
    IT_KEY_APPLICATION     = 0x65, // Context menu/right click
    IT_KEY_MENU            = 0x65,
    IT_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    IT_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    IT_KEY_F13             = 0x68, // Tools (Ubunutu)
    IT_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    IT_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    IT_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    IT_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    IT_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    IT_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    IT_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    IT_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    IT_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    IT_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    IT_KEY_F24             = 0x73, // Disabled (Ubuntu)
    IT_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    IT_KEY_HELP            = 0x75, // Help (Ubuntu)
    IT_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    IT_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    IT_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    IT_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    IT_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    IT_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    IT_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    IT_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    IT_KEY_FIND            = 0x7E, // Find (Ubuntu)
    IT_KEY_MUTE            = 0x7F,
    IT_KEY_VOLUME_MUTE     = 0x7F, // Alias
    IT_KEY_VOLUME_UP       = 0x80,
    IT_KEY_VOLUME_DOWN     = 0x81,
    IT_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    IT_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    IT_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    IT_KEYPAD_COMMA            = 0x85, // .
    IT_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    IT_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    IT_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    IT_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    IT_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    IT_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    IT_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    IT_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    IT_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    IT_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    IT_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    IT_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    IT_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    IT_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    IT_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    IT_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    IT_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    IT_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    IT_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    IT_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    IT_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    IT_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    IT_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    IT_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    IT_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    IT_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    IT_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    IT_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    IT_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    IT_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    IT_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    IT_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    IT_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    IT_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    IT_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    IT_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    IT_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    IT_KEYPAD_LEFT_BRACE           = 0xB6, // (
    IT_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    IT_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    IT_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    IT_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    IT_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    IT_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    IT_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    IT_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    IT_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    IT_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    IT_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    IT_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    IT_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    IT_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    IT_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    IT_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    IT_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    IT_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    IT_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    IT_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    IT_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    IT_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    IT_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    IT_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    IT_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    IT_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    IT_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    IT_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    IT_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    IT_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    IT_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    IT_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    IT_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    IT_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    IT_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    IT_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    IT_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    IT_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    IT_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    IT_KEY_LEFT_CTRL           = 0xE0,
    IT_KEY_LEFT_SHIFT          = 0xE1,
    IT_KEY_LEFT_ALT            = 0xE2,
    IT_KEY_LEFT_GUI            = 0xE3,
    IT_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    IT_KEY_RIGHT_CTRL          = 0xE4,
    IT_KEY_RIGHT_SHIFT         = 0xE5,
    IT_KEY_RIGHT_ALT           = 0xE6,
    IT_KEY_RIGHT_GUI           = 0xE7,
    IT_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    IT_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    IT_HID_KEYBOARD_POST_FAIL  = 0x02,
    IT_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    IT_HID_KEYBOARD_A_AND_A    = 0x04,
    IT_HID_KEYBOARD_B_AND_B    = 0x05,
    IT_HID_KEYBOARD_C_AND_C    = 0x06,
    IT_HID_KEYBOARD_D_AND_D    = 0x07,
    IT_HID_KEYBOARD_E_AND_E    = 0x08,
    IT_HID_KEYBOARD_F_AND_F    = 0x09,
    IT_HID_KEYBOARD_G_AND_G    = 0x0A,
    IT_HID_KEYBOARD_H_AND_H    = 0x0B,
    IT_HID_KEYBOARD_I_AND_I    = 0x0C,
    IT_HID_KEYBOARD_J_AND_J    = 0x0D,
    IT_HID_KEYBOARD_K_AND_K    = 0x0E,
    IT_HID_KEYBOARD_L_AND_L    = 0x0F,
    IT_HID_KEYBOARD_M_AND_M    = 0x10,
    IT_HID_KEYBOARD_N_AND_N    = 0x11,
    IT_HID_KEYBOARD_O_AND_O    = 0x12,
    IT_HID_KEYBOARD_P_AND_P    = 0x13,
    IT_HID_KEYBOARD_Q_AND_Q    = 0x14,
    IT_HID_KEYBOARD_R_AND_R    = 0x15,
    IT_HID_KEYBOARD_S_AND_S    = 0x16,
    IT_HID_KEYBOARD_T_AND_T    = 0x17,
    IT_HID_KEYBOARD_U_AND_U    = 0x18,
    IT_HID_KEYBOARD_V_AND_V    = 0x19,
    IT_HID_KEYBOARD_W_AND_W    = 0x1A,
    IT_HID_KEYBOARD_X_AND_X    = 0x1B,
    IT_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    IT_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    IT_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    IT_HID_KEYBOARD_2_AND_AT   = 0x1F,
    IT_HID_KEYBOARD_3_AND_POUND    = 0x20,
    IT_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    IT_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    IT_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    IT_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    IT_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    IT_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    IT_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    IT_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    IT_HID_KEYBOARD_ESCAPE = 0x29,
    IT_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    IT_HID_KEYBOARD_TAB    = 0x2B,
    IT_HID_KEYBOARD_SPACEBAR   = 0x2C,
    IT_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    IT_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    IT_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    IT_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    IT_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    IT_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    IT_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    IT_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    IT_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    IT_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    IT_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    IT_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    IT_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    IT_HID_KEYBOARD_F1 = 0x3A,
    IT_HID_KEYBOARD_F2 = 0x3B,
    IT_HID_KEYBOARD_F3 = 0x3C,
    IT_HID_KEYBOARD_F4 = 0x3D,
    IT_HID_KEYBOARD_F5 = 0x3E,
    IT_HID_KEYBOARD_F6 = 0x3F,
    IT_HID_KEYBOARD_F7 = 0x40,
    IT_HID_KEYBOARD_F8 = 0x41,
    IT_HID_KEYBOARD_F9 = 0x42,
    IT_HID_KEYBOARD_F10    = 0x43,
    IT_HID_KEYBOARD_F11    = 0x44,
    IT_HID_KEYBOARD_F12    = 0x45,
    IT_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    IT_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    IT_HID_KEYBOARD_PAUSE  = 0x48,
    IT_HID_KEYBOARD_INSERT = 0x49,
    IT_HID_KEYBOARD_HOME   = 0x4A,
    IT_HID_KEYBOARD_PAGE_UP    = 0x4B,
    IT_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    IT_HID_KEYBOARD_END    = 0x4D,
    IT_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    IT_HID_KEYBOARD_RIGHTARROW = 0x4F,
    IT_HID_KEYBOARD_LEFTARROW  = 0x50,
    IT_HID_KEYBOARD_DOWNARROW  = 0x51,
    IT_HID_KEYBOARD_UPARROW    = 0x52,
    IT_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    IT_HID_KEYPAD_DIVIDE   = 0x54,
    IT_HID_KEYPAD_MULTIPLY = 0x55,
    IT_HID_KEYPAD_SUBTRACT = 0x56,
    IT_HID_KEYPAD_ADD  = 0x57,
    IT_HID_KEYPAD_ENTER    = 0x58,
    IT_HID_KEYPAD_1_AND_END    = 0x59,
    IT_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    IT_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    IT_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    IT_HID_KEYPAD_5    = 0x5D,
    IT_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    IT_HID_KEYPAD_7_AND_HOME   = 0x5F,
    IT_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    IT_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    IT_HID_KEYPAD_0_AND_INSERT = 0x62,
    IT_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    IT_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    IT_HID_KEYBOARD_APPLICATION    = 0x65,
    IT_HID_KEYBOARD_POWER  = 0x66,
    IT_HID_KEYPAD_EQUALS   = 0x67,
    IT_HID_KEYBOARD_F13    = 0x68,
    IT_HID_KEYBOARD_F14    = 0x69,
    IT_HID_KEYBOARD_F15    = 0x6A,
    IT_HID_KEYBOARD_F16    = 0x6B,
    IT_HID_KEYBOARD_F17    = 0x6C,
    IT_HID_KEYBOARD_F18    = 0x6D,
    IT_HID_KEYBOARD_F19    = 0x6E,
    IT_HID_KEYBOARD_F20    = 0x6F,
    IT_HID_KEYBOARD_F21    = 0x70,
    IT_HID_KEYBOARD_F22    = 0x71,
    IT_HID_KEYBOARD_F23    = 0x72,
    IT_HID_KEYBOARD_F24    = 0x73,
    IT_HID_KEYBOARD_EXECUTE    = 0x74,
    IT_HID_KEYBOARD_HELP   = 0x75,
    IT_HID_KEYBOARD_MENU   = 0x76,
    IT_HID_KEYBOARD_SELECT = 0x77,
    IT_HID_KEYBOARD_STOP   = 0x78,
    IT_HID_KEYBOARD_AGAIN  = 0x79,
    IT_HID_KEYBOARD_UNDO   = 0x7A,
    IT_HID_KEYBOARD_CUT    = 0x7B,
    IT_HID_KEYBOARD_COPY   = 0x7C,
    IT_HID_KEYBOARD_PASTE  = 0x7D,
    IT_HID_KEYBOARD_FIND   = 0x7E,
    IT_HID_KEYBOARD_MUTE   = 0x7F,
    IT_HID_KEYBOARD_VOLUME_UP  = 0x80,
    IT_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    IT_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    IT_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    IT_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    IT_HID_KEYPAD_COMMA    = 0x85,
    IT_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    IT_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    IT_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    IT_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    IT_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    IT_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    IT_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    IT_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    IT_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    IT_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    IT_HID_KEYBOARD_LANG1  = 0x90,
    IT_HID_KEYBOARD_LANG2  = 0x91,
    IT_HID_KEYBOARD_LANG3  = 0x92,
    IT_HID_KEYBOARD_LANG4  = 0x93,
    IT_HID_KEYBOARD_LANG5  = 0x94,
    IT_HID_KEYBOARD_LANG6  = 0x95,
    IT_HID_KEYBOARD_LANG7  = 0x96,
    IT_HID_KEYBOARD_LANG8  = 0x97,
    IT_HID_KEYBOARD_LANG9  = 0x98,
    IT_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    IT_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    IT_HID_KEYBOARD_CANCEL = 0x9B,
    IT_HID_KEYBOARD_CLEAR  = 0x9C,
    IT_HID_KEYBOARD_PRIOR  = 0x9D,
    IT_HID_KEYBOARD_RETURN = 0x9E,
    IT_HID_KEYBOARD_SEPARATOR  = 0x9F,
    IT_HID_KEYBOARD_OUT    = 0xA0,
    IT_HID_KEYBOARD_OPER   = 0xA1,
    IT_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    IT_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    IT_HID_KEYBOARD_EXSEL  = 0xA4,
    IT_HID_KEYPAD_00   = 0xB0,
    IT_HID_KEYPAD_000  = 0xB1,
    IT_HID_THOUSANDS_SEPARATOR = 0xB2,
    IT_HID_DECIMAL_SEPARATOR   = 0xB3,
    IT_HID_CURRENCY_UNIT   = 0xB4,
    IT_HID_CURRENCY_SUBUNIT    = 0xB5,
    IT_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    IT_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    IT_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    IT_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    IT_HID_KEYPAD_TAB  = 0xBA,
    IT_HID_KEYPAD_BACKSPACE    = 0xBB,
    IT_HID_KEYPAD_A    = 0xBC,
    IT_HID_KEYPAD_B    = 0xBD,
    IT_HID_KEYPAD_C    = 0xBE,
    IT_HID_KEYPAD_D    = 0xBF,
    IT_HID_KEYPAD_E    = 0xC0,
    IT_HID_KEYPAD_F    = 0xC1,
    IT_HID_KEYPAD_XOR  = 0xC2,
    IT_HID_KEYPAD_CARAT    = 0xC3,
    IT_HID_KEYPAD_PERCENT  = 0xC4,
    IT_HID_KEYPAD_LESS_THAN    = 0xC5,
    IT_HID_KEYPAD_GREATER_THAN = 0xC6,
    IT_HID_KEYPAD_AMPERSAND    = 0xC7,
    IT_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    IT_HID_KEYPAD_PIPE = 0xC9,
    IT_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    IT_HID_KEYPAD_COLON    = 0xCB,
    IT_HID_KEYPAD_POUND_SIGN   = 0xCC,
    IT_HID_KEYPAD_SPACE    = 0xCD,
    IT_HID_KEYPAD_AT_SIGN  = 0xCE,
    IT_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    IT_HID_KEYPAD_MEMORY_STORE = 0xD0,
    IT_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    IT_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    IT_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    IT_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    IT_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    IT_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    IT_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    IT_HID_KEYPAD_CLEAR    = 0xD8,
    IT_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    IT_HID_KEYPAD_BINARY   = 0xDA,
    IT_HID_KEYPAD_OCTAL    = 0xDB,
    IT_HID_KEYPAD_DECIMAL  = 0xDC,
    IT_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    IT_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    IT_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    IT_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    IT_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    IT_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    IT_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    IT_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    IT_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};


// Key aliases
#define IT_KEY_IT_QUOTE        IT_KEY_MINUS
#define IT_KEY_IT_IGRAVE       IT_KEY_EQUAL
#define IT_KEY_IT_EGRAVE       IT_KEY_LEFT_BRACE
#define IT_KEY_IT_PLUS         IT_KEY_RIGHT_BRACE
#define IT_KEY_IT_UGRAVE       IT_KEY_BACKSLASH
#define IT_KEY_IT_OGRAVE       IT_KEY_SEMICOLON
#define IT_KEY_IT_AGRAVE       IT_KEY_QUOTE
#define IT_KEY_IT_BACKSLASH    IT_KEY_TILDE
#define IT_KEY_IT_MINUS        IT_KEY_SLASH
#define IT_KEY_IT_LT_GT        IT_KEY_NON_US


static const uint16_t _asciimapIT[] PROGMEM =
{
    IT_KEY_RESERVED,                               // NUL
    IT_KEY_RESERVED,                               // SOH
    IT_KEY_RESERVED,                               // STX
    IT_KEY_RESERVED,                               // ETX
    IT_KEY_RESERVED,                               // EOT
    IT_KEY_RESERVED,                               // ENQ
    IT_KEY_RESERVED,                               // ACK
    IT_KEY_RESERVED,                               // BEL
    IT_KEY_BACKSPACE,                              // BS   Backspace
    IT_KEY_TAB,                                    // TAB  Tab
    IT_KEY_ENTER,                                  // LF   Enter
    IT_KEY_RESERVED,                               // VT
    IT_KEY_RESERVED,                               // FF
    IT_KEY_RESERVED,                               // CR
    IT_KEY_RESERVED,                               // SO
    IT_KEY_RESERVED,                               // SI
    IT_KEY_RESERVED,                               // DEL
    IT_KEY_RESERVED,                               // DC1
    IT_KEY_RESERVED,                               // DC2
    IT_KEY_RESERVED,                               // DC3
    IT_KEY_RESERVED,                               // DC4
    IT_KEY_RESERVED,                               // NAK
    IT_KEY_RESERVED,                               // SYN
    IT_KEY_RESERVED,                               // ETB
    IT_KEY_RESERVED,                               // CAN
    IT_KEY_RESERVED,                               // EM
    IT_KEY_RESERVED,                               // SUB
    IT_KEY_RESERVED,                               // ESC
    IT_KEY_RESERVED,                               // FS
    IT_KEY_RESERVED,                               // GS
    IT_KEY_RESERVED,                               // RS
    IT_KEY_RESERVED,                               // US
    IT_KEY_SPACE,                                  // ' ' Space
    IT_KEY_1|IT_MOD_LEFT_SHIFT,                       // !
    IT_KEY_2|IT_MOD_LEFT_SHIFT,                       // "
    IT_KEY_IT_AGRAVE|IT_MOD_RIGHT_ALT,                // #
    IT_KEY_4|IT_MOD_LEFT_SHIFT,                       // $
    IT_KEY_5|IT_MOD_LEFT_SHIFT,                       // %
    IT_KEY_6|IT_MOD_LEFT_SHIFT,                       // &
    IT_KEY_IT_QUOTE,                               // '            
    IT_KEY_8|IT_MOD_LEFT_SHIFT,                       // (
    IT_KEY_9|IT_MOD_LEFT_SHIFT,                       // )
    IT_KEY_IT_PLUS|IT_MOD_LEFT_SHIFT,                 // *
    IT_KEY_IT_PLUS,                                // +
    IT_KEY_COMMA,                                  // ,
    IT_KEY_IT_MINUS,                               // -
    IT_KEY_PERIOD,                                 // .
    IT_KEY_7|IT_MOD_LEFT_SHIFT,                       // /
    IT_KEY_0,                                      // 0
    IT_KEY_1,                                      // 1
    IT_KEY_2,                                      // 2
    IT_KEY_3,                                      // 3
    IT_KEY_4,                                      // 4
    IT_KEY_5,                                      // 5
    IT_KEY_6,                                      // 6
    IT_KEY_7,                                      // 7
    IT_KEY_8,                                      // 8
    IT_KEY_9,                                      // 9
    IT_KEY_PERIOD|IT_MOD_LEFT_SHIFT,                  // :
    IT_KEY_COMMA|IT_MOD_LEFT_SHIFT,                   // ;
    IT_KEY_IT_LT_GT,                               // <
    IT_KEY_0|IT_MOD_LEFT_SHIFT,                       // =
    IT_KEY_IT_LT_GT|IT_MOD_LEFT_SHIFT,                // >
    IT_KEY_IT_QUOTE|IT_MOD_LEFT_SHIFT,                // ?
    IT_KEY_IT_OGRAVE|IT_MOD_RIGHT_ALT,                // @
    IT_KEY_A|IT_MOD_LEFT_SHIFT,                       // A
    IT_KEY_B|IT_MOD_LEFT_SHIFT,                       // B
    IT_KEY_C|IT_MOD_LEFT_SHIFT,                       // C
    IT_KEY_D|IT_MOD_LEFT_SHIFT,                       // D
    IT_KEY_E|IT_MOD_LEFT_SHIFT,                       // E
    IT_KEY_F|IT_MOD_LEFT_SHIFT,                       // F
    IT_KEY_G|IT_MOD_LEFT_SHIFT,                       // G
    IT_KEY_H|IT_MOD_LEFT_SHIFT,                       // H
    IT_KEY_I|IT_MOD_LEFT_SHIFT,                       // I
    IT_KEY_J|IT_MOD_LEFT_SHIFT,                       // J
    IT_KEY_K|IT_MOD_LEFT_SHIFT,                       // K
    IT_KEY_L|IT_MOD_LEFT_SHIFT,                       // L
    IT_KEY_M|IT_MOD_LEFT_SHIFT,                       // M
    IT_KEY_N|IT_MOD_LEFT_SHIFT,                       // N
    IT_KEY_O|IT_MOD_LEFT_SHIFT,                       // O
    IT_KEY_P|IT_MOD_LEFT_SHIFT,                       // P
    IT_KEY_Q|IT_MOD_LEFT_SHIFT,                       // Q
    IT_KEY_R|IT_MOD_LEFT_SHIFT,                       // R
    IT_KEY_S|IT_MOD_LEFT_SHIFT,                       // S
    IT_KEY_T|IT_MOD_LEFT_SHIFT,                       // T
    IT_KEY_U|IT_MOD_LEFT_SHIFT,                       // U
    IT_KEY_V|IT_MOD_LEFT_SHIFT,                       // V
    IT_KEY_W|IT_MOD_LEFT_SHIFT,                       // W
    IT_KEY_X|IT_MOD_LEFT_SHIFT,                       // X
    IT_KEY_Y|IT_MOD_LEFT_SHIFT,                       // Y
    IT_KEY_Z|IT_MOD_LEFT_SHIFT,                       // Z
    IT_KEY_IT_EGRAVE|IT_MOD_RIGHT_ALT,                // [
    IT_KEY_IT_BACKSLASH,                           // bslash
    IT_KEY_IT_PLUS|IT_MOD_RIGHT_ALT,                  // ]
    IT_KEY_IT_IGRAVE|IT_MOD_LEFT_SHIFT,               // ^
    IT_KEY_IT_MINUS|IT_MOD_LEFT_SHIFT,                // _
    IT_KEY_IT_QUOTE|IT_MOD_RIGHT_ALT,                 // ` (I think this only works on Linux)
    IT_KEY_A,                                      // a
    IT_KEY_B,                                      // b
    IT_KEY_C,                                      // c
    IT_KEY_D,                                      // d
    IT_KEY_E,                                      // e
    IT_KEY_F,                                      // f
    IT_KEY_G,                                      // g
    IT_KEY_H,                                      // h
    IT_KEY_I,                                      // i
    IT_KEY_J,                                      // j
    IT_KEY_K,                                      // k
    IT_KEY_L,                                      // l
    IT_KEY_M,                                      // m
    IT_KEY_N,                                      // n
    IT_KEY_O,                                      // o
    IT_KEY_P,                                      // p
    IT_KEY_Q,                                      // q
    IT_KEY_R,                                      // r
    IT_KEY_S,                                      // s
    IT_KEY_T,                                      // t
    IT_KEY_U,                                      // u
    IT_KEY_V,                                      // v
    IT_KEY_W,                                      // w
    IT_KEY_X,                                      // x
    IT_KEY_Y,                                      // y
    IT_KEY_Z,                                      // z
    IT_KEY_IT_EGRAVE|IT_MOD_LEFT_SHIFT|IT_MOD_RIGHT_ALT, // {
    IT_KEY_IT_BACKSLASH|IT_MOD_LEFT_SHIFT,            // |IT_
    IT_KEY_IT_PLUS|IT_MOD_LEFT_SHIFT|IT_MOD_RIGHT_ALT,   // }
    IT_KEY_IT_IGRAVE|IT_MOD_RIGHT_ALT,                // ~ (Linux only: This works in X11, in console it's KEY_0|IT_MOD_RIGHT_ALT)
    IT_KEY_RESERVED,                               // 127 - DEL
    IT_KEY_RESERVED,                               // 128 - Unused
    IT_KEY_RESERVED,                               // 129 - Unused
    IT_KEY_RESERVED,                               // 130 - Unused
    IT_KEY_RESERVED,                               // 131 - Unused
    IT_KEY_RESERVED,                               // 132 - Unused
    IT_KEY_RESERVED,                               // 133 - Unused
    IT_KEY_RESERVED,                               // 134 - Unused
    IT_KEY_RESERVED,                               // 135 - Unused
    IT_KEY_RESERVED,                               // 136 - Unused
    IT_KEY_RESERVED,                               // 137 - Unused
    IT_KEY_RESERVED,                               // 138 - Unused
    IT_KEY_RESERVED,                               // 139 - Unused
    IT_KEY_RESERVED,                               // 140 - Unused
    IT_KEY_RESERVED,                               // 141 - Unused
    IT_KEY_RESERVED,                               // 142 - Unused
    IT_KEY_RESERVED,                               // 143 - Unused
    IT_KEY_RESERVED,                               // 144 - Unused
    IT_KEY_RESERVED,                               // 145 - Unused
    IT_KEY_RESERVED,                               // 146 - Unused
    IT_KEY_RESERVED,                               // 147 - Unused
    IT_KEY_RESERVED,                               // 148 - Unused
    IT_KEY_RESERVED,                               // 149 - Unused
    IT_KEY_RESERVED,                               // 150 - Unused
    IT_KEY_RESERVED,                               // 151 - Unused
    IT_KEY_RESERVED,                               // 152 - Unused
    IT_KEY_RESERVED,                               // 153 - Unused
    IT_KEY_RESERVED,                               // 154 - Unused
    IT_KEY_RESERVED,                               // 155 - Unused
    IT_KEY_RESERVED,                               // 156 - Unused
    IT_KEY_RESERVED,                               // 157 - Unused
    IT_KEY_RESERVED,                               // 158 - Unused
    IT_KEY_RESERVED,                               // 159 - Unused
    IT_KEY_RESERVED,                               // 160 - Non-breaking Space
    IT_KEY_RESERVED,                               // 161 - Inverted Exclamation Mark
    IT_KEY_RESERVED,                               // 162 - Cent
    IT_KEY_3|IT_MOD_LEFT_SHIFT,                       // 163 - British Pound Sign
    IT_KEY_E|IT_MOD_RIGHT_ALT,                        // 164 - Euro Sign
    IT_KEY_RESERVED,                               // 165 - Yen
    IT_KEY_RESERVED,                               // 166 - Capital 's' Inverted Circumflex
    IT_KEY_IT_UGRAVE|IT_MOD_LEFT_SHIFT,               // 167 - Section Sign
    IT_KEY_RESERVED,                               // 168 - 's' Inverted Circumflex
    IT_KEY_RESERVED,                               // 169 - Copyright Sign
    IT_KEY_RESERVED,                               // 170 - Superscript 'a'
    IT_KEY_RESERVED,                               // 171 - Open Guillemet
    IT_KEY_RESERVED,                               // 172 - Logic Negation
    IT_KEY_RESERVED,                               // 173 - Soft Hypen
    IT_KEY_RESERVED,                               // 174 - Registered Trademark
    IT_KEY_RESERVED,                               // 175 - Macron
    IT_KEY_IT_AGRAVE|IT_MOD_LEFT_SHIFT,               // 176 - Degree Symbol
    IT_KEY_RESERVED,                               // 177 - Plus-Minus
    IT_KEY_RESERVED,                               // 178 - Superscript '2'
    IT_KEY_RESERVED,                               // 179 - Superscript '3'
    IT_KEY_RESERVED,                               // 180 - Capital 'z' Inverted Circumflex
    IT_KEY_RESERVED,                               // 181 - Micro Symbol
    IT_KEY_RESERVED,                               // 182 - Paragraph Mark
    IT_KEY_RESERVED,                               // 183 - Interpunct
    IT_KEY_RESERVED,                               // 184 - 'z' Inverted Circumflex
    IT_KEY_RESERVED,                               // 185 - Superscript '1'
    IT_KEY_RESERVED,                               // 186 - Ordinal Indicator
    IT_KEY_RESERVED,                               // 187 - Closed Guillemet
    IT_KEY_RESERVED,                               // 188 - Capital 'oe'
    IT_KEY_RESERVED,                               // 189 - 'oe'
    IT_KEY_RESERVED,                               // 190 - Capital 'y' Umlaut
    IT_KEY_RESERVED,                               // 191 - Inverted Question Mark
    IT_KEY_RESERVED,                               // 192 - Capital 'a' Grave
    IT_KEY_RESERVED,                               // 193 - Capital 'a' Acute
    IT_KEY_RESERVED,                               // 194 - Capital 'a' Circumflex
    IT_KEY_RESERVED,                               // 195 - Capital 'a' Tilde
    IT_KEY_RESERVED,                               // 196 - Capital 'a' Umlaut
    IT_KEY_RESERVED,                               // 197 - Capital 'a' Circle
    IT_KEY_RESERVED,                               // 198 - Capital 'ae'
    IT_KEY_RESERVED,                               // 199 - Capital 'c' Cedilla
    IT_KEY_RESERVED,                               // 200 - Capital 'e' Grave
    IT_KEY_RESERVED,                               // 201 - Capital 'e' Acute
    IT_KEY_RESERVED,                               // 202 - Capital 'e' Circumflex
    IT_KEY_RESERVED,                               // 203 - Capital 'e' Umlaut
    IT_KEY_RESERVED,                               // 204 - Capital 'i' Grave
    IT_KEY_RESERVED,                               // 205 - Capital 'i' Acute
    IT_KEY_RESERVED,                               // 206 - Capital 'i' Circumflex
    IT_KEY_RESERVED,                               // 207 - Capital 'i' Umlaut
    IT_KEY_RESERVED,                               // 208 - Capital Eth
    IT_KEY_RESERVED,                               // 207 - Capital 'n' Tilde
    IT_KEY_RESERVED,                               // 210 - Capital 'o' Grave
    IT_KEY_RESERVED,                               // 211 - Capital 'o' Acute
    IT_KEY_RESERVED,                               // 212 - Capital 'o' Circumflex
    IT_KEY_RESERVED,                               // 213 - Capital 'o' Tilde
    IT_KEY_RESERVED,                               // 214 - Capital 'o' Umlaut
    IT_KEY_RESERVED,                               // 215 - Multiplication Sign
    IT_KEY_RESERVED,                               // 216 - Capital 'o' Barred
    IT_KEY_RESERVED,                               // 217 - Capital 'u' Grave
    IT_KEY_RESERVED,                               // 218 - Capital 'u' Acute
    IT_KEY_RESERVED,                               // 219 - Capital 'u' Circumflex
    IT_KEY_RESERVED,                               // 220 - Capital 'u' Umlaut
    IT_KEY_RESERVED,                               // 221 - Capital 'y' Acute
    IT_KEY_RESERVED,                               // 222 - Capital Thorn
    IT_KEY_RESERVED,                               // 223 - Eszett
    IT_KEY_IT_AGRAVE,                              // 224 - 'a' Grave
    IT_KEY_RESERVED,                               // 225 - 'a' Acute
    IT_KEY_RESERVED,                               // 226 - 'a' Circumflex
    IT_KEY_RESERVED,                               // 227 - 'a' Tilde
    IT_KEY_RESERVED,                               // 228 - 'a' Umlaut
    IT_KEY_RESERVED,                               // 229 - 'a' Circle
    IT_KEY_RESERVED,                               // 230 - 'ae'
    IT_KEY_IT_OGRAVE|IT_MOD_LEFT_SHIFT,               // 231 - 'c' Cedilla
    IT_KEY_IT_EGRAVE,                              // 232 - 'e' Grave
    IT_KEY_IT_EGRAVE|IT_MOD_LEFT_SHIFT,               // 233 - 'e' Acute
    IT_KEY_RESERVED,                               // 234 - 'e' Circumflex
    IT_KEY_RESERVED,                               // 235 - 'e' Umlaut
    IT_KEY_IT_IGRAVE,                              // 236 - 'i' Grave
    IT_KEY_RESERVED,                               // 237 - 'i' Acute
    IT_KEY_RESERVED,                               // 238 - 'i' Circumflex
    IT_KEY_RESERVED,                               // 239 - 'i' Umlaut
    IT_KEY_RESERVED,                               // 240 - Eth
    IT_KEY_RESERVED,                               // 241 - 'n' Tilde
    IT_KEY_IT_OGRAVE,                              // 242 - 'o' Grave
    IT_KEY_RESERVED,                               // 243 - 'o' Acute
    IT_KEY_RESERVED,                               // 244 - 'o' Circumflex
    IT_KEY_RESERVED,                               // 245 - 'o' Tilde
    IT_KEY_RESERVED,                               // 246 - 'o' Umlaut
    IT_KEY_RESERVED,                               // 247 - Multiplication Sign
    IT_KEY_RESERVED,                               // 248 - 'o' Barred
    IT_KEY_IT_UGRAVE,                              // 249 - 'u' Grave
    IT_KEY_RESERVED,                               // 250 - 'u' Acute
    IT_KEY_RESERVED,                               // 251 - 'u' Circumflex
    IT_KEY_RESERVED,                               // 252 - 'u' Umlaut
    IT_KEY_RESERVED,                               // 253 - 'y' Acute
    IT_KEY_RESERVED,                               // 254 - Thorn
    IT_KEY_RESERVED,                               // 255 - 'y' Umlaut
};
