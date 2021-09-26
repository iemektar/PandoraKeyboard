
enum KeyboardModsUK : uint16_t {
    UK_MOD_LEFT_CTRL       = (1 <<  8),
    UK_MOD_LEFT_SHIFT      = (1 <<  9),
    UK_MOD_LEFT_ALT        = (1 << 10),
    UK_MOD_LEFT_GUI        = (1 << 11),
    UK_MOD_RIGHT_CTRL      = (1 << 12),
    UK_MOD_RIGHT_SHIFT     = (1 << 13),
    UK_MOD_RIGHT_ALT       = (1 << 14),
    UK_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};

enum KeyboardKeycodeUK : uint8_t {
    UK_KEY_RESERVED        =  0,
    UK_KEY_ERROR_ROLLOVER  =  1,
    UK_KEY_POST_FAIL       =  2,
    UK_KEY_ERROR_UNDEFINED =  3,
    UK_KEY_A               =  4,
    UK_KEY_B               =  5,
    UK_KEY_C               =  6,
    UK_KEY_D               =  7,
    UK_KEY_E               =  8,
    UK_KEY_F               =  9,
    UK_KEY_G               = 10,
    UK_KEY_H               = 11,
    UK_KEY_I               = 12,
    UK_KEY_J               = 13,
    UK_KEY_K               = 14,
    UK_KEY_L               = 15,
    UK_KEY_M               = 16,
    UK_KEY_N               = 17,
    UK_KEY_O               = 18,
    UK_KEY_P               = 19,
    UK_KEY_Q               = 20,
    UK_KEY_R               = 21,
    UK_KEY_S               = 22,
    UK_KEY_T               = 23,
    UK_KEY_U               = 24,
    UK_KEY_V               = 25,
    UK_KEY_W               = 26,
    UK_KEY_X               = 27,
    UK_KEY_Y               = 28,
    UK_KEY_Z               = 29,
    UK_KEY_1               = 30,
    UK_KEY_2               = 31,
    UK_KEY_3               = 32,
    UK_KEY_4               = 33,
    UK_KEY_5               = 34,
    UK_KEY_6               = 35,
    UK_KEY_7               = 36,
    UK_KEY_8               = 37,
    UK_KEY_9               = 38,
    UK_KEY_0               = 39,
    UK_KEY_ENTER           = 40,
    UK_KEY_RETURN          = 40, // Alias
    UK_KEY_ESC             = 41,
    UK_KEY_BACKSPACE       = 42,
    UK_KEY_TAB             = 43,
    UK_KEY_SPACE           = 44,
    UK_KEY_MINUS           = 45,
    UK_KEY_EQUAL           = 46,
    UK_KEY_LEFT_BRACE      = 47,
    UK_KEY_RIGHT_BRACE     = 48,
    UK_KEY_BACKSLASH       = 49,
    UK_KEY_NON_US_NUM      = 50,
    UK_KEY_SEMICOLON       = 51,
    UK_KEY_QUOTE           = 52,
    UK_KEY_TILDE           = 53,
    UK_KEY_COMMA           = 54,
    UK_KEY_PERIOD          = 55,
    UK_KEY_SLASH           = 56,
    UK_KEY_CAPS_LOCK       = 0x39,
    UK_KEY_F1              = 0x3A,
    UK_KEY_F2              = 0x3B,
    UK_KEY_F3              = 0x3C,
    UK_KEY_F4              = 0x3D,
    UK_KEY_F5              = 0x3E,
    UK_KEY_F6              = 0x3F,
    UK_KEY_F7              = 0x40,
    UK_KEY_F8              = 0x41,
    UK_KEY_F9              = 0x42,
    UK_KEY_F10             = 0x43,
    UK_KEY_F11             = 0x44,
    UK_KEY_F12             = 0x45,
    UK_KEY_PRINT           = 0x46,
    UK_KEY_PRINTSCREEN     = 0x46, // Alias
    UK_KEY_SCROLL_LOCK     = 0x47,
    UK_KEY_PAUSE           = 0x48,
    UK_KEY_INSERT          = 0x49,
    UK_KEY_HOME            = 0x4A,
    UK_KEY_PAGE_UP         = 0x4B,
    UK_KEY_DELETE          = 0x4C,
    UK_KEY_END             = 0x4D,
    UK_KEY_PAGE_DOWN       = 0x4E,
    UK_KEY_RIGHT_ARROW     = 0x4F,
    UK_KEY_LEFT_ARROW      = 0x50,
    UK_KEY_DOWN_ARROW      = 0x51,
    UK_KEY_UP_ARROW        = 0x52,
    UK_KEY_RIGHT           = 0x4F, // Alias
    UK_KEY_LEFT            = 0x50, // Alias
    UK_KEY_DOWN            = 0x51, // Alias
    UK_KEY_UP              = 0x52, // Alias
    UK_KEY_NUM_LOCK        = 0x53,
    UK_KEYPAD_DIVIDE       = 0x54,
    UK_KEYPAD_MULTIPLY     = 0x55,
    UK_KEYPAD_SUBTRACT     = 0x56,
    UK_KEYPAD_ADD          = 0x57,
    UK_KEYPAD_ENTER        = 0x58,
    UK_KEYPAD_1            = 0x59,
    UK_KEYPAD_2            = 0x5A,
    UK_KEYPAD_3            = 0x5B,
    UK_KEYPAD_4            = 0x5C,
    UK_KEYPAD_5            = 0x5D,
    UK_KEYPAD_6            = 0x5E,
    UK_KEYPAD_7            = 0x5F,
    UK_KEYPAD_8            = 0x60,
    UK_KEYPAD_9            = 0x61,
    UK_KEYPAD_0            = 0x62,
    UK_KEYPAD_DOT          = 0x63,
    UK_KEY_NON_US          = 0x64,
    UK_KEY_APPLICATION     = 0x65, // Context menu/right click
    UK_KEY_MENU            = 0x65,
    UK_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    UK_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    UK_KEY_F13             = 0x68, // Tools (Ubunutu)
    UK_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    UK_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    UK_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    UK_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    UK_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    UK_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    UK_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    UK_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    UK_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    UK_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    UK_KEY_F24             = 0x73, // Disabled (Ubuntu)
    UK_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    UK_KEY_HELP            = 0x75, // Help (Ubuntu)
    UK_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    UK_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    UK_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    UK_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    UK_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    UK_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    UK_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    UK_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    UK_KEY_FIND            = 0x7E, // Find (Ubuntu)
    UK_KEY_MUTE            = 0x7F,
    UK_KEY_VOLUME_MUTE     = 0x7F, // Alias
    UK_KEY_VOLUME_UP       = 0x80,
    UK_KEY_VOLUME_DOWN     = 0x81,
    UK_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    UK_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    UK_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    UK_KEYPAD_COMMA            = 0x85, // .
    UK_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    UK_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    UK_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    UK_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    UK_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    UK_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    UK_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    UK_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    UK_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    UK_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    UK_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    UK_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    UK_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    UK_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    UK_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    UK_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    UK_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    UK_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    UK_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    UK_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    UK_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    UK_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    UK_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    UK_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    UK_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    UK_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    UK_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    UK_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    UK_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    UK_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    UK_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    UK_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    UK_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    UK_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    UK_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    UK_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    UK_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    UK_KEYPAD_LEFT_BRACE           = 0xB6, // (
    UK_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    UK_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    UK_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    UK_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    UK_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    UK_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    UK_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    UK_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    UK_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    UK_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    UK_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    UK_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    UK_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    UK_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    UK_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    UK_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    UK_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    UK_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    UK_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    UK_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    UK_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    UK_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    UK_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    UK_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    UK_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    UK_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    UK_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    UK_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    UK_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    UK_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    UK_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    UK_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    UK_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    UK_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    UK_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    UK_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    UK_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    UK_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    UK_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    UK_KEY_LEFT_CTRL           = 0xE0,
    UK_KEY_LEFT_SHIFT          = 0xE1,
    UK_KEY_LEFT_ALT            = 0xE2,
    UK_KEY_LEFT_GUI            = 0xE3,
    UK_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    UK_KEY_RIGHT_CTRL          = 0xE4,
    UK_KEY_RIGHT_SHIFT         = 0xE5,
    UK_KEY_RIGHT_ALT           = 0xE6,
    UK_KEY_RIGHT_GUI           = 0xE7,
    UK_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    UK_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    UK_HID_KEYBOARD_POST_FAIL  = 0x02,
    UK_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    UK_HID_KEYBOARD_A_AND_A    = 0x04,
    UK_HID_KEYBOARD_B_AND_B    = 0x05,
    UK_HID_KEYBOARD_C_AND_C    = 0x06,
    UK_HID_KEYBOARD_D_AND_D    = 0x07,
    UK_HID_KEYBOARD_E_AND_E    = 0x08,
    UK_HID_KEYBOARD_F_AND_F    = 0x09,
    UK_HID_KEYBOARD_G_AND_G    = 0x0A,
    UK_HID_KEYBOARD_H_AND_H    = 0x0B,
    UK_HID_KEYBOARD_I_AND_I    = 0x0C,
    UK_HID_KEYBOARD_J_AND_J    = 0x0D,
    UK_HID_KEYBOARD_K_AND_K    = 0x0E,
    UK_HID_KEYBOARD_L_AND_L    = 0x0F,
    UK_HID_KEYBOARD_M_AND_M    = 0x10,
    UK_HID_KEYBOARD_N_AND_N    = 0x11,
    UK_HID_KEYBOARD_O_AND_O    = 0x12,
    UK_HID_KEYBOARD_P_AND_P    = 0x13,
    UK_HID_KEYBOARD_Q_AND_Q    = 0x14,
    UK_HID_KEYBOARD_R_AND_R    = 0x15,
    UK_HID_KEYBOARD_S_AND_S    = 0x16,
    UK_HID_KEYBOARD_T_AND_T    = 0x17,
    UK_HID_KEYBOARD_U_AND_U    = 0x18,
    UK_HID_KEYBOARD_V_AND_V    = 0x19,
    UK_HID_KEYBOARD_W_AND_W    = 0x1A,
    UK_HID_KEYBOARD_X_AND_X    = 0x1B,
    UK_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    UK_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    UK_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    UK_HID_KEYBOARD_2_AND_AT   = 0x1F,
    UK_HID_KEYBOARD_3_AND_POUND    = 0x20,
    UK_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    UK_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    UK_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    UK_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    UK_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    UK_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    UK_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    UK_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    UK_HID_KEYBOARD_ESCAPE = 0x29,
    UK_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    UK_HID_KEYBOARD_TAB    = 0x2B,
    UK_HID_KEYBOARD_SPACEBAR   = 0x2C,
    UK_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    UK_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    UK_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    UK_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    UK_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    UK_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    UK_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    UK_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    UK_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    UK_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    UK_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    UK_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    UK_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    UK_HID_KEYBOARD_F1 = 0x3A,
    UK_HID_KEYBOARD_F2 = 0x3B,
    UK_HID_KEYBOARD_F3 = 0x3C,
    UK_HID_KEYBOARD_F4 = 0x3D,
    UK_HID_KEYBOARD_F5 = 0x3E,
    UK_HID_KEYBOARD_F6 = 0x3F,
    UK_HID_KEYBOARD_F7 = 0x40,
    UK_HID_KEYBOARD_F8 = 0x41,
    UK_HID_KEYBOARD_F9 = 0x42,
    UK_HID_KEYBOARD_F10    = 0x43,
    UK_HID_KEYBOARD_F11    = 0x44,
    UK_HID_KEYBOARD_F12    = 0x45,
    UK_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    UK_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    UK_HID_KEYBOARD_PAUSE  = 0x48,
    UK_HID_KEYBOARD_INSERT = 0x49,
    UK_HID_KEYBOARD_HOME   = 0x4A,
    UK_HID_KEYBOARD_PAGE_UP    = 0x4B,
    UK_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    UK_HID_KEYBOARD_END    = 0x4D,
    UK_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    UK_HID_KEYBOARD_RIGHTARROW = 0x4F,
    UK_HID_KEYBOARD_LEFTARROW  = 0x50,
    UK_HID_KEYBOARD_DOWNARROW  = 0x51,
    UK_HID_KEYBOARD_UPARROW    = 0x52,
    UK_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    UK_HID_KEYPAD_DIVIDE   = 0x54,
    UK_HID_KEYPAD_MULTIPLY = 0x55,
    UK_HID_KEYPAD_SUBTRACT = 0x56,
    UK_HID_KEYPAD_ADD  = 0x57,
    UK_HID_KEYPAD_ENTER    = 0x58,
    UK_HID_KEYPAD_1_AND_END    = 0x59,
    UK_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    UK_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    UK_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    UK_HID_KEYPAD_5    = 0x5D,
    UK_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    UK_HID_KEYPAD_7_AND_HOME   = 0x5F,
    UK_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    UK_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    UK_HID_KEYPAD_0_AND_INSERT = 0x62,
    UK_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    UK_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    UK_HID_KEYBOARD_APPLICATION    = 0x65,
    UK_HID_KEYBOARD_POWER  = 0x66,
    UK_HID_KEYPAD_EQUALS   = 0x67,
    UK_HID_KEYBOARD_F13    = 0x68,
    UK_HID_KEYBOARD_F14    = 0x69,
    UK_HID_KEYBOARD_F15    = 0x6A,
    UK_HID_KEYBOARD_F16    = 0x6B,
    UK_HID_KEYBOARD_F17    = 0x6C,
    UK_HID_KEYBOARD_F18    = 0x6D,
    UK_HID_KEYBOARD_F19    = 0x6E,
    UK_HID_KEYBOARD_F20    = 0x6F,
    UK_HID_KEYBOARD_F21    = 0x70,
    UK_HID_KEYBOARD_F22    = 0x71,
    UK_HID_KEYBOARD_F23    = 0x72,
    UK_HID_KEYBOARD_F24    = 0x73,
    UK_HID_KEYBOARD_EXECUTE    = 0x74,
    UK_HID_KEYBOARD_HELP   = 0x75,
    UK_HID_KEYBOARD_MENU   = 0x76,
    UK_HID_KEYBOARD_SELECT = 0x77,
    UK_HID_KEYBOARD_STOP   = 0x78,
    UK_HID_KEYBOARD_AGAIN  = 0x79,
    UK_HID_KEYBOARD_UNDO   = 0x7A,
    UK_HID_KEYBOARD_CUT    = 0x7B,
    UK_HID_KEYBOARD_COPY   = 0x7C,
    UK_HID_KEYBOARD_PASTE  = 0x7D,
    UK_HID_KEYBOARD_FIND   = 0x7E,
    UK_HID_KEYBOARD_MUTE   = 0x7F,
    UK_HID_KEYBOARD_VOLUME_UP  = 0x80,
    UK_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    UK_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    UK_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    UK_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    UK_HID_KEYPAD_COMMA    = 0x85,
    UK_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    UK_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    UK_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    UK_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    UK_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    UK_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    UK_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    UK_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    UK_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    UK_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    UK_HID_KEYBOARD_LANG1  = 0x90,
    UK_HID_KEYBOARD_LANG2  = 0x91,
    UK_HID_KEYBOARD_LANG3  = 0x92,
    UK_HID_KEYBOARD_LANG4  = 0x93,
    UK_HID_KEYBOARD_LANG5  = 0x94,
    UK_HID_KEYBOARD_LANG6  = 0x95,
    UK_HID_KEYBOARD_LANG7  = 0x96,
    UK_HID_KEYBOARD_LANG8  = 0x97,
    UK_HID_KEYBOARD_LANG9  = 0x98,
    UK_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    UK_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    UK_HID_KEYBOARD_CANCEL = 0x9B,
    UK_HID_KEYBOARD_CLEAR  = 0x9C,
    UK_HID_KEYBOARD_PRIOR  = 0x9D,
    UK_HID_KEYBOARD_RETURN = 0x9E,
    UK_HID_KEYBOARD_SEPARATOR  = 0x9F,
    UK_HID_KEYBOARD_OUT    = 0xA0,
    UK_HID_KEYBOARD_OPER   = 0xA1,
    UK_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    UK_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    UK_HID_KEYBOARD_EXSEL  = 0xA4,
    UK_HID_KEYPAD_00   = 0xB0,
    UK_HID_KEYPAD_000  = 0xB1,
    UK_HID_THOUSANDS_SEPARATOR = 0xB2,
    UK_HID_DECIMAL_SEPARATOR   = 0xB3,
    UK_HID_CURRENCY_UNIT   = 0xB4,
    UK_HID_CURRENCY_SUBUNIT    = 0xB5,
    UK_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    UK_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    UK_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    UK_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    UK_HID_KEYPAD_TAB  = 0xBA,
    UK_HID_KEYPAD_BACKSPACE    = 0xBB,
    UK_HID_KEYPAD_A    = 0xBC,
    UK_HID_KEYPAD_B    = 0xBD,
    UK_HID_KEYPAD_C    = 0xBE,
    UK_HID_KEYPAD_D    = 0xBF,
    UK_HID_KEYPAD_E    = 0xC0,
    UK_HID_KEYPAD_F    = 0xC1,
    UK_HID_KEYPAD_XOR  = 0xC2,
    UK_HID_KEYPAD_CARAT    = 0xC3,
    UK_HID_KEYPAD_PERCENT  = 0xC4,
    UK_HID_KEYPAD_LESS_THAN    = 0xC5,
    UK_HID_KEYPAD_GREATER_THAN = 0xC6,
    UK_HID_KEYPAD_AMPERSAND    = 0xC7,
    UK_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    UK_HID_KEYPAD_PIPE = 0xC9,
    UK_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    UK_HID_KEYPAD_COLON    = 0xCB,
    UK_HID_KEYPAD_POUND_SIGN   = 0xCC,
    UK_HID_KEYPAD_SPACE    = 0xCD,
    UK_HID_KEYPAD_AT_SIGN  = 0xCE,
    UK_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    UK_HID_KEYPAD_MEMORY_STORE = 0xD0,
    UK_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    UK_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    UK_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    UK_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    UK_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    UK_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    UK_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    UK_HID_KEYPAD_CLEAR    = 0xD8,
    UK_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    UK_HID_KEYPAD_BINARY   = 0xDA,
    UK_HID_KEYPAD_OCTAL    = 0xDB,
    UK_HID_KEYPAD_DECIMAL  = 0xDC,
    UK_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    UK_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    UK_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    UK_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    UK_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    UK_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    UK_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    UK_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    UK_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};


// Key aliases
#define UK_KEY_UK_NEG          UK_KEY_TILDE
#define UK_KEY_UK_HASH         UK_KEY_BACKSLASH
#define UK_KEY_UK_BACKSLASH    UK_KEY_NON_US


static const uint16_t _asciimapUK[] PROGMEM =
{
    UK_KEY_RESERVED,                       // NUL
    UK_KEY_RESERVED,                       // SOH
    UK_KEY_RESERVED,                       // STX
    UK_KEY_RESERVED,                       // ETX
    UK_KEY_RESERVED,                       // EOT
    UK_KEY_RESERVED,                       // ENQ
    UK_KEY_RESERVED,                       // ACK
    UK_KEY_RESERVED,                       // BEL
    UK_KEY_BACKSPACE,                      // BS   Backspace
    UK_KEY_TAB,                            // TAB  Tab
    UK_KEY_ENTER,                          // LF   Enter
    UK_KEY_RESERVED,                       // VT
    UK_KEY_RESERVED,                       // FF
    UK_KEY_RESERVED,                       // CR
    UK_KEY_RESERVED,                       // SO
    UK_KEY_RESERVED,                       // SI
    UK_KEY_RESERVED,                       // DEL
    UK_KEY_RESERVED,                       // DC1
    UK_KEY_RESERVED,                       // DC2
    UK_KEY_RESERVED,                       // DC3
    UK_KEY_RESERVED,                       // DC4
    UK_KEY_RESERVED,                       // NAK
    UK_KEY_RESERVED,                       // SYN
    UK_KEY_RESERVED,                       // ETB
    UK_KEY_RESERVED,                       // CAN
    UK_KEY_RESERVED,                       // EM
    UK_KEY_RESERVED,                       // SUB
    UK_KEY_RESERVED,                       // ESC
    UK_KEY_RESERVED,                       // FS
    UK_KEY_RESERVED,                       // GS
    UK_KEY_RESERVED,                       // RS
    UK_KEY_RESERVED,                       // US
    UK_KEY_SPACE,                          // ' ' Space
    UK_KEY_1|UK_MOD_LEFT_SHIFT,               // !
    UK_KEY_2|UK_MOD_LEFT_SHIFT,               // "
    UK_KEY_UK_HASH,                        // #
    UK_KEY_4|UK_MOD_LEFT_SHIFT,               // $
    UK_KEY_5|UK_MOD_LEFT_SHIFT,               // %
    UK_KEY_7|UK_MOD_LEFT_SHIFT,               // &
    UK_KEY_QUOTE,                          // '
    UK_KEY_9|UK_MOD_LEFT_SHIFT,               // (
    UK_KEY_0|UK_MOD_LEFT_SHIFT,               // )
    UK_KEY_8|UK_MOD_LEFT_SHIFT,               // *
    UK_KEY_EQUAL|UK_MOD_LEFT_SHIFT,           // +
    UK_KEY_COMMA,                          // ,
    UK_KEY_MINUS,                          // -
    UK_KEY_PERIOD,                         // .
    UK_KEY_SLASH,                          // /
    UK_KEY_0,                              // 0
    UK_KEY_1,                              // 1
    UK_KEY_2,                              // 2
    UK_KEY_3,                              // 3
    UK_KEY_4,                              // 4
    UK_KEY_5,                              // 5
    UK_KEY_6,                              // 6
    UK_KEY_7,                              // 7
    UK_KEY_8,                              // 8
    UK_KEY_9,                              // 9
    UK_KEY_SEMICOLON|UK_MOD_LEFT_SHIFT,       // :
    UK_KEY_SEMICOLON,                      // ;
    UK_KEY_COMMA|UK_MOD_LEFT_SHIFT,           // <
    UK_KEY_EQUAL,                          // =
    UK_KEY_PERIOD|UK_MOD_LEFT_SHIFT,          // >
    UK_KEY_SLASH|UK_MOD_LEFT_SHIFT,           // ?
    UK_KEY_QUOTE|UK_MOD_LEFT_SHIFT,           // @
    UK_KEY_A|UK_MOD_LEFT_SHIFT,               // A
    UK_KEY_B|UK_MOD_LEFT_SHIFT,               // B
    UK_KEY_C|UK_MOD_LEFT_SHIFT,               // C
    UK_KEY_D|UK_MOD_LEFT_SHIFT,               // D
    UK_KEY_E|UK_MOD_LEFT_SHIFT,               // E
    UK_KEY_F|UK_MOD_LEFT_SHIFT,               // F
    UK_KEY_G|UK_MOD_LEFT_SHIFT,               // G
    UK_KEY_H|UK_MOD_LEFT_SHIFT,               // H
    UK_KEY_I|UK_MOD_LEFT_SHIFT,               // I
    UK_KEY_J|UK_MOD_LEFT_SHIFT,               // J
    UK_KEY_K|UK_MOD_LEFT_SHIFT,               // K
    UK_KEY_L|UK_MOD_LEFT_SHIFT,               // L
    UK_KEY_M|UK_MOD_LEFT_SHIFT,               // M
    UK_KEY_N|UK_MOD_LEFT_SHIFT,               // N
    UK_KEY_O|UK_MOD_LEFT_SHIFT,               // O
    UK_KEY_P|UK_MOD_LEFT_SHIFT,               // P
    UK_KEY_Q|UK_MOD_LEFT_SHIFT,               // Q
    UK_KEY_R|UK_MOD_LEFT_SHIFT,               // R
    UK_KEY_S|UK_MOD_LEFT_SHIFT,               // S
    UK_KEY_T|UK_MOD_LEFT_SHIFT,               // T
    UK_KEY_U|UK_MOD_LEFT_SHIFT,               // U
    UK_KEY_V|UK_MOD_LEFT_SHIFT,               // V
    UK_KEY_W|UK_MOD_LEFT_SHIFT,               // W
    UK_KEY_X|UK_MOD_LEFT_SHIFT,               // X
    UK_KEY_Y|UK_MOD_LEFT_SHIFT,               // Y
    UK_KEY_Z|UK_MOD_LEFT_SHIFT,               // Z
    UK_KEY_LEFT_BRACE,                     // [
    UK_KEY_UK_BACKSLASH,                   // bslash
    UK_KEY_RIGHT_BRACE,                    // ]
    UK_KEY_6|UK_MOD_LEFT_SHIFT,               // ^
    UK_KEY_MINUS|UK_MOD_LEFT_SHIFT,           // _
    UK_KEY_UK_NEG,                         // `
    UK_KEY_A,                              // a
    UK_KEY_B,                              // b
    UK_KEY_C,                              // c
    UK_KEY_D,                              // d
    UK_KEY_E,                              // e
    UK_KEY_F,                              // f
    UK_KEY_G,                              // g
    UK_KEY_H,                              // h
    UK_KEY_I,                              // i
    UK_KEY_J,                              // j
    UK_KEY_K,                              // k
    UK_KEY_L,                              // l
    UK_KEY_M,                              // m
    UK_KEY_N,                              // n
    UK_KEY_O,                              // o
    UK_KEY_P,                              // p
    UK_KEY_Q,                              // q
    UK_KEY_R,                              // r
    UK_KEY_S,                              // s
    UK_KEY_T,                              // t
    UK_KEY_U,                              // u
    UK_KEY_V,                              // v
    UK_KEY_W,                              // w
    UK_KEY_X,                              // x
    UK_KEY_Y,                              // y
    UK_KEY_Z,                              // z
    UK_KEY_LEFT_BRACE|UK_MOD_LEFT_SHIFT,      // {
    UK_KEY_UK_BACKSLASH|UK_MOD_LEFT_SHIFT,    // |UK_
    UK_KEY_RIGHT_BRACE|UK_MOD_LEFT_SHIFT,     // }
    UK_KEY_UK_HASH|UK_MOD_LEFT_SHIFT,         // ~
    UK_KEY_RESERVED,                       // 127 - DEL
    UK_KEY_RESERVED,                       // 128 - Unused
    UK_KEY_RESERVED,                       // 129 - Unused
    UK_KEY_RESERVED,                       // 130 - Unused
    UK_KEY_RESERVED,                       // 131 - Unused
    UK_KEY_RESERVED,                       // 132 - Unused
    UK_KEY_RESERVED,                       // 133 - Unused
    UK_KEY_RESERVED,                       // 134 - Unused
    UK_KEY_RESERVED,                       // 135 - Unused
    UK_KEY_RESERVED,                       // 136 - Unused
    UK_KEY_RESERVED,                       // 137 - Unused
    UK_KEY_RESERVED,                       // 138 - Unused
    UK_KEY_RESERVED,                       // 139 - Unused
    UK_KEY_RESERVED,                       // 140 - Unused
    UK_KEY_RESERVED,                       // 141 - Unused
    UK_KEY_RESERVED,                       // 142 - Unused
    UK_KEY_RESERVED,                       // 143 - Unused
    UK_KEY_RESERVED,                       // 144 - Unused
    UK_KEY_RESERVED,                       // 145 - Unused
    UK_KEY_RESERVED,                       // 146 - Unused
    UK_KEY_RESERVED,                       // 147 - Unused
    UK_KEY_RESERVED,                       // 148 - Unused
    UK_KEY_RESERVED,                       // 149 - Unused
    UK_KEY_RESERVED,                       // 150 - Unused
    UK_KEY_RESERVED,                       // 151 - Unused
    UK_KEY_RESERVED,                       // 152 - Unused
    UK_KEY_RESERVED,                       // 153 - Unused
    UK_KEY_RESERVED,                       // 154 - Unused
    UK_KEY_RESERVED,                       // 155 - Unused
    UK_KEY_RESERVED,                       // 156 - Unused
    UK_KEY_RESERVED,                       // 157 - Unused
    UK_KEY_RESERVED,                       // 158 - Unused
    UK_KEY_RESERVED,                       // 159 - Unused
    UK_KEY_RESERVED,                       // 160 - Non-breaking Space
    UK_KEY_RESERVED,                       // 161 - Inverted Exclamation Mark
    UK_KEY_RESERVED,                       // 162 - Cent
    UK_KEY_3|UK_MOD_LEFT_SHIFT,               // 163 - British Pound Sign
    UK_KEY_4|UK_MOD_LEFT_SHIFT,               // 164 - Euro Sign
    UK_KEY_RESERVED,                       // 165 - Yen
    UK_KEY_RESERVED,                       // 166 - Capital 's' Inverted Circumflex
    UK_KEY_RESERVED,                       // 167 - Section Sign
    UK_KEY_RESERVED,                       // 168 - 's' Inverted Circumflex
    UK_KEY_RESERVED,                       // 169 - Copyright Sign
    UK_KEY_RESERVED,                       // 170 - Superscript 'a'
    UK_KEY_RESERVED,                       // 171 - Open Guillemet
    UK_KEY_UK_NEG|UK_MOD_LEFT_SHIFT,          // 172 - Logic Negation
    UK_KEY_RESERVED,                       // 173 - Soft Hypen
    UK_KEY_RESERVED,                       // 174 - Registered Trademark
    UK_KEY_RESERVED,                       // 175 - Macron
    UK_KEY_RESERVED,                       // 176 - Degree Symbol
    UK_KEY_RESERVED,                       // 177 - Plus-Minus
    UK_KEY_RESERVED,                       // 178 - Superscript '2'
    UK_KEY_RESERVED,                       // 179 - Superscript '3'
    UK_KEY_RESERVED,                       // 180 - Capital 'z' Inverted Circumflex
    UK_KEY_RESERVED,                       // 181 - Micro Symbol
    UK_KEY_RESERVED,                       // 182 - Paragraph Mark
    UK_KEY_RESERVED,                       // 183 - Interpunct
    UK_KEY_RESERVED,                       // 184 - 'z' Inverted Circumflex
    UK_KEY_RESERVED,                       // 185 - Superscript '1'
    UK_KEY_RESERVED,                       // 186 - Ordinal Indicator
    UK_KEY_RESERVED,                       // 187 - Closed Guillemet
    UK_KEY_RESERVED,                       // 188 - Capital 'oe'
    UK_KEY_RESERVED,                       // 189 - 'oe'
    UK_KEY_RESERVED,                       // 190 - Capital 'y' Umlaut
    UK_KEY_RESERVED,                       // 191 - Inverted Question Mark
    UK_KEY_RESERVED,                       // 192 - Capital 'a' Grave
    UK_KEY_A|UK_MOD_LEFT_SHIFT|UK_MOD_RIGHT_ALT, // 193 - Capital 'a' Acute
    UK_KEY_RESERVED,                       // 194 - Capital 'a' Circumflex
    UK_KEY_RESERVED,                       // 195 - Capital 'a' Tilde
    UK_KEY_RESERVED,                       // 196 - Capital 'a' Umlaut
    UK_KEY_RESERVED,                       // 197 - Capital 'a' Circle
    UK_KEY_RESERVED,                       // 198 - Capital 'ae'
    UK_KEY_RESERVED,                       // 199 - Capital 'c' Cedilla
    UK_KEY_RESERVED,                       // 200 - Capital 'e' Grave
    UK_KEY_E|UK_MOD_LEFT_SHIFT|UK_MOD_RIGHT_ALT, // 201 - Capital 'e' Acute
    UK_KEY_RESERVED,                       // 202 - Capital 'e' Circumflex
    UK_KEY_RESERVED,                       // 203 - Capital 'e' Umlaut
    UK_KEY_RESERVED,                       // 204 - Capital 'i' Grave
    UK_KEY_I|UK_MOD_LEFT_SHIFT|UK_MOD_RIGHT_ALT, // 205 - Capital 'i' Acute
    UK_KEY_RESERVED,                       // 206 - Capital 'i' Circumflex
    UK_KEY_RESERVED,                       // 207 - Capital 'i' Umlaut
    UK_KEY_RESERVED,                       // 208 - Capital Eth
    UK_KEY_RESERVED,                       // 207 - Capital 'n' Tilde
    UK_KEY_RESERVED,                       // 210 - Capital 'o' Grave
    UK_KEY_O|UK_MOD_LEFT_SHIFT|UK_MOD_RIGHT_ALT, // 211 - Capital 'o' Acute
    UK_KEY_RESERVED,                       // 212 - Capital 'o' Circumflex
    UK_KEY_RESERVED,                       // 213 - Capital 'o' Tilde
    UK_KEY_RESERVED,                       // 214 - Capital 'o' Umlaut
    UK_KEY_RESERVED,                       // 215 - Multiplication Sign
    UK_KEY_RESERVED,                       // 216 - Capital 'o' Barred
    UK_KEY_RESERVED,                       // 217 - Capital 'u' Grave
    UK_KEY_U|UK_MOD_LEFT_SHIFT|UK_MOD_RIGHT_ALT, // 218 - Capital 'u' Acute
    UK_KEY_RESERVED,                       // 219 - Capital 'u' Circumflex
    UK_KEY_RESERVED,                       // 220 - Capital 'u' Umlaut
    UK_KEY_RESERVED,                       // 221 - Capital 'y' Acute
    UK_KEY_RESERVED,                       // 222 - Capital Thorn
    UK_KEY_RESERVED,                       // 223 - Eszett
    UK_KEY_RESERVED,                       // 224 - 'a' Grave
    UK_KEY_A|UK_MOD_RIGHT_ALT,                // 225 - 'a' Acute
    UK_KEY_RESERVED,                       // 226 - 'a' Circumflex
    UK_KEY_RESERVED,                       // 227 - 'a' Tilde
    UK_KEY_RESERVED,                       // 228 - 'a' Umlaut
    UK_KEY_RESERVED,                       // 229 - 'a' Circle
    UK_KEY_RESERVED,                       // 230 - 'ae'
    UK_KEY_RESERVED,                       // 231 - 'c' Cedilla
    UK_KEY_RESERVED,                       // 232 - 'e' Grave
    UK_KEY_E|UK_MOD_RIGHT_ALT,                // 233 - 'e' Acute
    UK_KEY_RESERVED,                       // 234 - 'e' Circumflex
    UK_KEY_RESERVED,                       // 235 - 'e' Umlaut
    UK_KEY_RESERVED,                       // 236 - 'i' Grave
    UK_KEY_I|UK_MOD_RIGHT_ALT,                // 237 - 'i' Acute
    UK_KEY_RESERVED,                       // 238 - 'i' Circumflex
    UK_KEY_RESERVED,                       // 239 - 'i' Umlaut
    UK_KEY_RESERVED,                       // 240 - Eth
    UK_KEY_RESERVED,                       // 241 - 'n' Tilde
    UK_KEY_RESERVED,                       // 242 - 'o' Grave
    UK_KEY_O|UK_MOD_RIGHT_ALT,                // 243 - 'o' Acute
    UK_KEY_RESERVED,                       // 244 - 'o' Circumflex
    UK_KEY_RESERVED,                       // 245 - 'o' Tilde
    UK_KEY_RESERVED,                       // 246 - 'o' Umlaut
    UK_KEY_RESERVED,                       // 247 - Multiplication Sign
    UK_KEY_RESERVED,                       // 248 - 'o' Barred
    UK_KEY_RESERVED,                       // 249 - 'u' Grave
    UK_KEY_U|UK_MOD_RIGHT_ALT,                // 250 - 'u' Acute
    UK_KEY_RESERVED,                       // 251 - 'u' Circumflex
    UK_KEY_RESERVED,                       // 252 - 'u' Umlaut
    UK_KEY_RESERVED,                       // 253 - 'y' Acute
    UK_KEY_RESERVED,                       // 254 - Thorn
    UK_KEY_RESERVED,                       // 255 - 'y' Umlaut
};
