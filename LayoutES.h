
enum KeyboardModsES : uint16_t {
    ES_MOD_LEFT_CTRL       = (1 <<  8),
    ES_MOD_LEFT_SHIFT      = (1 <<  9),
    ES_MOD_LEFT_ALT        = (1 << 10),
    ES_MOD_LEFT_GUI        = (1 << 11),
    ES_MOD_RIGHT_CTRL      = (1 << 12),
    ES_MOD_RIGHT_SHIFT     = (1 << 13),
    ES_MOD_RIGHT_ALT       = (1 << 14),
    ES_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};

enum KeyboardKeycodeES : uint8_t {
    ES_KEY_RESERVED        =  0,
    ES_KEY_ERROR_ROLLOVER  =  1,
    ES_KEY_POST_FAIL       =  2,
    ES_KEY_ERROR_UNDEFINED =  3,
    ES_KEY_A               =  4,
    ES_KEY_B               =  5,
    ES_KEY_C               =  6,
    ES_KEY_D               =  7,
    ES_KEY_E               =  8,
    ES_KEY_F               =  9,
    ES_KEY_G               = 10,
    ES_KEY_H               = 11,
    ES_KEY_I               = 12,
    ES_KEY_J               = 13,
    ES_KEY_K               = 14,
    ES_KEY_L               = 15,
    ES_KEY_M               = 16,
    ES_KEY_N               = 17,
    ES_KEY_O               = 18,
    ES_KEY_P               = 19,
    ES_KEY_Q               = 20,
    ES_KEY_R               = 21,
    ES_KEY_S               = 22,
    ES_KEY_T               = 23,
    ES_KEY_U               = 24,
    ES_KEY_V               = 25,
    ES_KEY_W               = 26,
    ES_KEY_X               = 27,
    ES_KEY_Y               = 28,
    ES_KEY_Z               = 29,
    ES_KEY_1               = 30,
    ES_KEY_2               = 31,
    ES_KEY_3               = 32,
    ES_KEY_4               = 33,
    ES_KEY_5               = 34,
    ES_KEY_6               = 35,
    ES_KEY_7               = 36,
    ES_KEY_8               = 37,
    ES_KEY_9               = 38,
    ES_KEY_0               = 39,
    ES_KEY_ENTER           = 40,
    ES_KEY_RETURN          = 40, // Alias
    ES_KEY_ESC             = 41,
    ES_KEY_BACKSPACE       = 42,
    ES_KEY_TAB             = 43,
    ES_KEY_SPACE           = 44,
    ES_KEY_MINUS           = 45,
    ES_KEY_EQUAL           = 46,
    ES_KEY_LEFT_BRACE      = 47,
    ES_KEY_RIGHT_BRACE     = 48,
    ES_KEY_BACKSLASH       = 49,
    ES_KEY_NON_US_NUM      = 50,
    ES_KEY_SEMICOLON       = 51,
    ES_KEY_QUOTE           = 52,
    ES_KEY_TILDE           = 53,
    ES_KEY_COMMA           = 54,
    ES_KEY_PERIOD          = 55,
    ES_KEY_SLASH           = 56,
    ES_KEY_CAPS_LOCK       = 0x39,
    ES_KEY_F1              = 0x3A,
    ES_KEY_F2              = 0x3B,
    ES_KEY_F3              = 0x3C,
    ES_KEY_F4              = 0x3D,
    ES_KEY_F5              = 0x3E,
    ES_KEY_F6              = 0x3F,
    ES_KEY_F7              = 0x40,
    ES_KEY_F8              = 0x41,
    ES_KEY_F9              = 0x42,
    ES_KEY_F10             = 0x43,
    ES_KEY_F11             = 0x44,
    ES_KEY_F12             = 0x45,
    ES_KEY_PRINT           = 0x46,
    ES_KEY_PRINTSCREEN     = 0x46, // Alias
    ES_KEY_SCROLL_LOCK     = 0x47,
    ES_KEY_PAUSE           = 0x48,
    ES_KEY_INSERT          = 0x49,
    ES_KEY_HOME            = 0x4A,
    ES_KEY_PAGE_UP         = 0x4B,
    ES_KEY_DELETE          = 0x4C,
    ES_KEY_END             = 0x4D,
    ES_KEY_PAGE_DOWN       = 0x4E,
    ES_KEY_RIGHT_ARROW     = 0x4F,
    ES_KEY_LEFT_ARROW      = 0x50,
    ES_KEY_DOWN_ARROW      = 0x51,
    ES_KEY_UP_ARROW        = 0x52,
    ES_KEY_RIGHT           = 0x4F, // Alias
    ES_KEY_LEFT            = 0x50, // Alias
    ES_KEY_DOWN            = 0x51, // Alias
    ES_KEY_UP              = 0x52, // Alias
    ES_KEY_NUM_LOCK        = 0x53,
    ES_KEYPAD_DIVIDE       = 0x54,
    ES_KEYPAD_MULTIPLY     = 0x55,
    ES_KEYPAD_SUBTRACT     = 0x56,
    ES_KEYPAD_ADD          = 0x57,
    ES_KEYPAD_ENTER        = 0x58,
    ES_KEYPAD_1            = 0x59,
    ES_KEYPAD_2            = 0x5A,
    ES_KEYPAD_3            = 0x5B,
    ES_KEYPAD_4            = 0x5C,
    ES_KEYPAD_5            = 0x5D,
    ES_KEYPAD_6            = 0x5E,
    ES_KEYPAD_7            = 0x5F,
    ES_KEYPAD_8            = 0x60,
    ES_KEYPAD_9            = 0x61,
    ES_KEYPAD_0            = 0x62,
    ES_KEYPAD_DOT          = 0x63,
    ES_KEY_NON_US          = 0x64,
    ES_KEY_APPLICATION     = 0x65, // Context menu/right click
    ES_KEY_MENU            = 0x65,
    ES_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    ES_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    ES_KEY_F13             = 0x68, // Tools (Ubunutu)
    ES_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    ES_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    ES_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    ES_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    ES_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    ES_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    ES_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    ES_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    ES_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    ES_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    ES_KEY_F24             = 0x73, // Disabled (Ubuntu)
    ES_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    ES_KEY_HELP            = 0x75, // Help (Ubuntu)
    ES_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    ES_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    ES_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    ES_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    ES_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    ES_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    ES_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    ES_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    ES_KEY_FIND            = 0x7E, // Find (Ubuntu)
    ES_KEY_MUTE            = 0x7F,
    ES_KEY_VOLUME_MUTE     = 0x7F, // Alias
    ES_KEY_VOLUME_UP       = 0x80,
    ES_KEY_VOLUME_DOWN     = 0x81,
    ES_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    ES_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    ES_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    ES_KEYPAD_COMMA            = 0x85, // .
    ES_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    ES_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    ES_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    ES_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    ES_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    ES_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    ES_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    ES_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    ES_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    ES_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    ES_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    ES_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    ES_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    ES_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    ES_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    ES_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    ES_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    ES_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    ES_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    ES_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    ES_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    ES_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    ES_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    ES_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    ES_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    ES_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    ES_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    ES_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    ES_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    ES_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    ES_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    ES_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    ES_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    ES_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    ES_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    ES_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    ES_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    ES_KEYPAD_LEFT_BRACE           = 0xB6, // (
    ES_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    ES_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    ES_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    ES_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    ES_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    ES_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    ES_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    ES_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    ES_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    ES_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    ES_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    ES_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    ES_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    ES_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    ES_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    ES_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    ES_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    ES_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    ES_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    ES_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    ES_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    ES_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    ES_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    ES_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    ES_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    ES_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    ES_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    ES_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    ES_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    ES_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    ES_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    ES_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    ES_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    ES_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    ES_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    ES_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    ES_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    ES_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    ES_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    ES_KEY_LEFT_CTRL           = 0xE0,
    ES_KEY_LEFT_SHIFT          = 0xE1,
    ES_KEY_LEFT_ALT            = 0xE2,
    ES_KEY_LEFT_GUI            = 0xE3,
    ES_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    ES_KEY_RIGHT_CTRL          = 0xE4,
    ES_KEY_RIGHT_SHIFT         = 0xE5,
    ES_KEY_RIGHT_ALT           = 0xE6,
    ES_KEY_RIGHT_GUI           = 0xE7,
    ES_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    ES_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    ES_HID_KEYBOARD_POST_FAIL  = 0x02,
    ES_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    ES_HID_KEYBOARD_A_AND_A    = 0x04,
    ES_HID_KEYBOARD_B_AND_B    = 0x05,
    ES_HID_KEYBOARD_C_AND_C    = 0x06,
    ES_HID_KEYBOARD_D_AND_D    = 0x07,
    ES_HID_KEYBOARD_E_AND_E    = 0x08,
    ES_HID_KEYBOARD_F_AND_F    = 0x09,
    ES_HID_KEYBOARD_G_AND_G    = 0x0A,
    ES_HID_KEYBOARD_H_AND_H    = 0x0B,
    ES_HID_KEYBOARD_I_AND_I    = 0x0C,
    ES_HID_KEYBOARD_J_AND_J    = 0x0D,
    ES_HID_KEYBOARD_K_AND_K    = 0x0E,
    ES_HID_KEYBOARD_L_AND_L    = 0x0F,
    ES_HID_KEYBOARD_M_AND_M    = 0x10,
    ES_HID_KEYBOARD_N_AND_N    = 0x11,
    ES_HID_KEYBOARD_O_AND_O    = 0x12,
    ES_HID_KEYBOARD_P_AND_P    = 0x13,
    ES_HID_KEYBOARD_Q_AND_Q    = 0x14,
    ES_HID_KEYBOARD_R_AND_R    = 0x15,
    ES_HID_KEYBOARD_S_AND_S    = 0x16,
    ES_HID_KEYBOARD_T_AND_T    = 0x17,
    ES_HID_KEYBOARD_U_AND_U    = 0x18,
    ES_HID_KEYBOARD_V_AND_V    = 0x19,
    ES_HID_KEYBOARD_W_AND_W    = 0x1A,
    ES_HID_KEYBOARD_X_AND_X    = 0x1B,
    ES_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    ES_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    ES_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    ES_HID_KEYBOARD_2_AND_AT   = 0x1F,
    ES_HID_KEYBOARD_3_AND_POUND    = 0x20,
    ES_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    ES_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    ES_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    ES_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    ES_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    ES_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    ES_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    ES_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    ES_HID_KEYBOARD_ESCAPE = 0x29,
    ES_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    ES_HID_KEYBOARD_TAB    = 0x2B,
    ES_HID_KEYBOARD_SPACEBAR   = 0x2C,
    ES_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    ES_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    ES_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    ES_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    ES_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    ES_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    ES_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    ES_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    ES_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    ES_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    ES_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    ES_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    ES_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    ES_HID_KEYBOARD_F1 = 0x3A,
    ES_HID_KEYBOARD_F2 = 0x3B,
    ES_HID_KEYBOARD_F3 = 0x3C,
    ES_HID_KEYBOARD_F4 = 0x3D,
    ES_HID_KEYBOARD_F5 = 0x3E,
    ES_HID_KEYBOARD_F6 = 0x3F,
    ES_HID_KEYBOARD_F7 = 0x40,
    ES_HID_KEYBOARD_F8 = 0x41,
    ES_HID_KEYBOARD_F9 = 0x42,
    ES_HID_KEYBOARD_F10    = 0x43,
    ES_HID_KEYBOARD_F11    = 0x44,
    ES_HID_KEYBOARD_F12    = 0x45,
    ES_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    ES_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    ES_HID_KEYBOARD_PAUSE  = 0x48,
    ES_HID_KEYBOARD_INSERT = 0x49,
    ES_HID_KEYBOARD_HOME   = 0x4A,
    ES_HID_KEYBOARD_PAGE_UP    = 0x4B,
    ES_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    ES_HID_KEYBOARD_END    = 0x4D,
    ES_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    ES_HID_KEYBOARD_RIGHTARROW = 0x4F,
    ES_HID_KEYBOARD_LEFTARROW  = 0x50,
    ES_HID_KEYBOARD_DOWNARROW  = 0x51,
    ES_HID_KEYBOARD_UPARROW    = 0x52,
    ES_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    ES_HID_KEYPAD_DIVIDE   = 0x54,
    ES_HID_KEYPAD_MULTIPLY = 0x55,
    ES_HID_KEYPAD_SUBTRACT = 0x56,
    ES_HID_KEYPAD_ADD  = 0x57,
    ES_HID_KEYPAD_ENTER    = 0x58,
    ES_HID_KEYPAD_1_AND_END    = 0x59,
    ES_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    ES_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    ES_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    ES_HID_KEYPAD_5    = 0x5D,
    ES_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    ES_HID_KEYPAD_7_AND_HOME   = 0x5F,
    ES_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    ES_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    ES_HID_KEYPAD_0_AND_INSERT = 0x62,
    ES_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    ES_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    ES_HID_KEYBOARD_APPLICATION    = 0x65,
    ES_HID_KEYBOARD_POWER  = 0x66,
    ES_HID_KEYPAD_EQUALS   = 0x67,
    ES_HID_KEYBOARD_F13    = 0x68,
    ES_HID_KEYBOARD_F14    = 0x69,
    ES_HID_KEYBOARD_F15    = 0x6A,
    ES_HID_KEYBOARD_F16    = 0x6B,
    ES_HID_KEYBOARD_F17    = 0x6C,
    ES_HID_KEYBOARD_F18    = 0x6D,
    ES_HID_KEYBOARD_F19    = 0x6E,
    ES_HID_KEYBOARD_F20    = 0x6F,
    ES_HID_KEYBOARD_F21    = 0x70,
    ES_HID_KEYBOARD_F22    = 0x71,
    ES_HID_KEYBOARD_F23    = 0x72,
    ES_HID_KEYBOARD_F24    = 0x73,
    ES_HID_KEYBOARD_EXECUTE    = 0x74,
    ES_HID_KEYBOARD_HELP   = 0x75,
    ES_HID_KEYBOARD_MENU   = 0x76,
    ES_HID_KEYBOARD_SELECT = 0x77,
    ES_HID_KEYBOARD_STOP   = 0x78,
    ES_HID_KEYBOARD_AGAIN  = 0x79,
    ES_HID_KEYBOARD_UNDO   = 0x7A,
    ES_HID_KEYBOARD_CUT    = 0x7B,
    ES_HID_KEYBOARD_COPY   = 0x7C,
    ES_HID_KEYBOARD_PASTE  = 0x7D,
    ES_HID_KEYBOARD_FIND   = 0x7E,
    ES_HID_KEYBOARD_MUTE   = 0x7F,
    ES_HID_KEYBOARD_VOLUME_UP  = 0x80,
    ES_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    ES_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    ES_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    ES_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    ES_HID_KEYPAD_COMMA    = 0x85,
    ES_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    ES_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    ES_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    ES_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    ES_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    ES_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    ES_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    ES_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    ES_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    ES_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    ES_HID_KEYBOARD_LANG1  = 0x90,
    ES_HID_KEYBOARD_LANG2  = 0x91,
    ES_HID_KEYBOARD_LANG3  = 0x92,
    ES_HID_KEYBOARD_LANG4  = 0x93,
    ES_HID_KEYBOARD_LANG5  = 0x94,
    ES_HID_KEYBOARD_LANG6  = 0x95,
    ES_HID_KEYBOARD_LANG7  = 0x96,
    ES_HID_KEYBOARD_LANG8  = 0x97,
    ES_HID_KEYBOARD_LANG9  = 0x98,
    ES_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    ES_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    ES_HID_KEYBOARD_CANCEL = 0x9B,
    ES_HID_KEYBOARD_CLEAR  = 0x9C,
    ES_HID_KEYBOARD_PRIOR  = 0x9D,
    ES_HID_KEYBOARD_RETURN = 0x9E,
    ES_HID_KEYBOARD_SEPARATOR  = 0x9F,
    ES_HID_KEYBOARD_OUT    = 0xA0,
    ES_HID_KEYBOARD_OPER   = 0xA1,
    ES_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    ES_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    ES_HID_KEYBOARD_EXSEL  = 0xA4,
    ES_HID_KEYPAD_00   = 0xB0,
    ES_HID_KEYPAD_000  = 0xB1,
    ES_HID_THOUSANDS_SEPARATOR = 0xB2,
    ES_HID_DECIMAL_SEPARATOR   = 0xB3,
    ES_HID_CURRENCY_UNIT   = 0xB4,
    ES_HID_CURRENCY_SUBUNIT    = 0xB5,
    ES_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    ES_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    ES_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    ES_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    ES_HID_KEYPAD_TAB  = 0xBA,
    ES_HID_KEYPAD_BACKSPACE    = 0xBB,
    ES_HID_KEYPAD_A    = 0xBC,
    ES_HID_KEYPAD_B    = 0xBD,
    ES_HID_KEYPAD_C    = 0xBE,
    ES_HID_KEYPAD_D    = 0xBF,
    ES_HID_KEYPAD_E    = 0xC0,
    ES_HID_KEYPAD_F    = 0xC1,
    ES_HID_KEYPAD_XOR  = 0xC2,
    ES_HID_KEYPAD_CARAT    = 0xC3,
    ES_HID_KEYPAD_PERCENT  = 0xC4,
    ES_HID_KEYPAD_LESS_THAN    = 0xC5,
    ES_HID_KEYPAD_GREATER_THAN = 0xC6,
    ES_HID_KEYPAD_AMPERSAND    = 0xC7,
    ES_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    ES_HID_KEYPAD_PIPE = 0xC9,
    ES_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    ES_HID_KEYPAD_COLON    = 0xCB,
    ES_HID_KEYPAD_POUND_SIGN   = 0xCC,
    ES_HID_KEYPAD_SPACE    = 0xCD,
    ES_HID_KEYPAD_AT_SIGN  = 0xCE,
    ES_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    ES_HID_KEYPAD_MEMORY_STORE = 0xD0,
    ES_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    ES_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    ES_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    ES_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    ES_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    ES_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    ES_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    ES_HID_KEYPAD_CLEAR    = 0xD8,
    ES_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    ES_HID_KEYPAD_BINARY   = 0xDA,
    ES_HID_KEYPAD_OCTAL    = 0xDB,
    ES_HID_KEYPAD_DECIMAL  = 0xDC,
    ES_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    ES_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    ES_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    ES_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    ES_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    ES_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    ES_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    ES_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    ES_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};



// Key aliases
#define ES_KEY_ES_AO           ES_KEY_TILDE
#define ES_KEY_ES_QUOTE        ES_KEY_MINUS
#define ES_KEY_ES_INVMARKS     ES_KEY_EQUAL
#define ES_KEY_ES_CIRCUMFLEX   ES_KEY_LEFT_BRACE
#define ES_KEY_ES_PLUS         ES_KEY_RIGHT_BRACE
#define ES_KEY_ES_NTILDE       ES_KEY_SEMICOLON
#define ES_KEY_ES_UMLAUT       ES_KEY_QUOTE
#define ES_KEY_ES_CEDILLA      ES_KEY_BACKSLASH
#define ES_KEY_ES_MINUS        ES_KEY_SLASH
#define ES_KEY_ES_LT_GT        ES_KEY_NON_US


static const uint16_t _asciimapES[] PROGMEM =
{
    ES_KEY_RESERVED,                   // NUL
    ES_KEY_RESERVED,                   // SOH
    ES_KEY_RESERVED,                   // STX
    ES_KEY_RESERVED,                   // ETX
    ES_KEY_RESERVED,                   // EOT
    ES_KEY_RESERVED,                   // ENQ
    ES_KEY_RESERVED,                   // ACK
    ES_KEY_RESERVED,                   // BEL
    ES_KEY_BACKSPACE,                  // BS   Backspace
    ES_KEY_TAB,                        // TAB  Tab
    ES_KEY_ENTER,                      // LF   Enter
    ES_KEY_RESERVED,                   // VT
    ES_KEY_RESERVED,                   // FF
    ES_KEY_RESERVED,                   // CR
    ES_KEY_RESERVED,                   // SO
    ES_KEY_RESERVED,                   // SI
    ES_KEY_RESERVED,                   // DEL
    ES_KEY_RESERVED,                   // DC1
    ES_KEY_RESERVED,                   // DC2
    ES_KEY_RESERVED,                   // DC3
    ES_KEY_RESERVED,                   // DC4
    ES_KEY_RESERVED,                   // NAK
    ES_KEY_RESERVED,                   // SYN
    ES_KEY_RESERVED,                   // ETB
    ES_KEY_RESERVED,                   // CAN
    ES_KEY_RESERVED,                   // EM
    ES_KEY_RESERVED,                   // SUB
    ES_KEY_RESERVED,                   // ESC
    ES_KEY_RESERVED,                   // FS
    ES_KEY_RESERVED,                   // GS
    ES_KEY_RESERVED,                   // RS
    ES_KEY_RESERVED,                   // US
    ES_KEY_SPACE,                      // ' ' Space
    ES_KEY_1|ES_MOD_LEFT_SHIFT,           // !
    ES_KEY_2|ES_MOD_LEFT_SHIFT,           // "
    ES_KEY_3|ES_MOD_RIGHT_ALT,            // #
    ES_KEY_4|ES_MOD_LEFT_SHIFT,           // $
    ES_KEY_5|ES_MOD_LEFT_SHIFT,           // %
    ES_KEY_6|ES_MOD_LEFT_SHIFT,           // &
    ES_KEY_ES_QUOTE,                   // '
    ES_KEY_8|ES_MOD_LEFT_SHIFT,           // (
    ES_KEY_9|ES_MOD_LEFT_SHIFT,           // )
    ES_KEY_ES_PLUS|ES_MOD_LEFT_SHIFT,     // *
    ES_KEY_ES_PLUS,                    // +
    ES_KEY_COMMA,                      // ,
    ES_KEY_ES_MINUS,                   // -
    ES_KEY_PERIOD,                     // .
    ES_KEY_7|ES_MOD_LEFT_SHIFT,           // /
    ES_KEY_0,                          // 0
    ES_KEY_1,                          // 1
    ES_KEY_2,                          // 2
    ES_KEY_3,                          // 3
    ES_KEY_4,                          // 4
    ES_KEY_5,                          // 5
    ES_KEY_6,                          // 6
    ES_KEY_7,                          // 7
    ES_KEY_8,                          // 8
    ES_KEY_9,                          // 9
    ES_KEY_PERIOD|ES_MOD_LEFT_SHIFT,      // :
    ES_KEY_COMMA|ES_MOD_LEFT_SHIFT,       // ;
    ES_KEY_ES_LT_GT,                   // <
    ES_KEY_0|ES_MOD_LEFT_SHIFT,           // =
    ES_KEY_ES_LT_GT|ES_MOD_LEFT_SHIFT,    // >
    ES_KEY_ES_QUOTE|ES_MOD_LEFT_SHIFT,    // ?
    ES_KEY_2|ES_MOD_RIGHT_ALT,            // @
    ES_KEY_A|ES_MOD_LEFT_SHIFT,           // A
    ES_KEY_B|ES_MOD_LEFT_SHIFT,           // B
    ES_KEY_C|ES_MOD_LEFT_SHIFT,           // C
    ES_KEY_D|ES_MOD_LEFT_SHIFT,           // D
    ES_KEY_E|ES_MOD_LEFT_SHIFT,           // E
    ES_KEY_F|ES_MOD_LEFT_SHIFT,           // F
    ES_KEY_G|ES_MOD_LEFT_SHIFT,           // G
    ES_KEY_H|ES_MOD_LEFT_SHIFT,           // H
    ES_KEY_I|ES_MOD_LEFT_SHIFT,           // I
    ES_KEY_J|ES_MOD_LEFT_SHIFT,           // J
    ES_KEY_K|ES_MOD_LEFT_SHIFT,           // K
    ES_KEY_L|ES_MOD_LEFT_SHIFT,           // L
    ES_KEY_M|ES_MOD_LEFT_SHIFT,           // M
    ES_KEY_N|ES_MOD_LEFT_SHIFT,           // N
    ES_KEY_O|ES_MOD_LEFT_SHIFT,           // O
    ES_KEY_P|ES_MOD_LEFT_SHIFT,           // P
    ES_KEY_Q|ES_MOD_LEFT_SHIFT,           // Q
    ES_KEY_R|ES_MOD_LEFT_SHIFT,           // R
    ES_KEY_S|ES_MOD_LEFT_SHIFT,           // S
    ES_KEY_T|ES_MOD_LEFT_SHIFT,           // T
    ES_KEY_U|ES_MOD_LEFT_SHIFT,           // U
    ES_KEY_V|ES_MOD_LEFT_SHIFT,           // V
    ES_KEY_W|ES_MOD_LEFT_SHIFT,           // W
    ES_KEY_X|ES_MOD_LEFT_SHIFT,           // X
    ES_KEY_Y|ES_MOD_LEFT_SHIFT,           // Y
    ES_KEY_Z|ES_MOD_LEFT_SHIFT,           // Z
    ES_KEY_ES_CIRCUMFLEX|ES_MOD_RIGHT_ALT,// [
    ES_KEY_ES_AO|ES_MOD_RIGHT_ALT,        // bslash
    ES_KEY_ES_PLUS|ES_MOD_RIGHT_ALT,      // ]
    ES_KEY_RESERVED,                   // ^ (This is a dead key in the ES layout, would require SHIFT+KEY_ES_CIRCUMFLEX *followed by* space)
    ES_KEY_ES_MINUS|ES_MOD_LEFT_SHIFT,    // _
    ES_KEY_RESERVED,                   // ` (This is a dead key in the ES layout, would require KEY_ES_CIRCUMFLEX *followed by* space)
    ES_KEY_A,                          // a
    ES_KEY_B,                          // b
    ES_KEY_C,                          // c
    ES_KEY_D,                          // d
    ES_KEY_E,                          // e
    ES_KEY_F,                          // f
    ES_KEY_G,                          // g
    ES_KEY_H,                          // h
    ES_KEY_I,                          // i
    ES_KEY_J,                          // j
    ES_KEY_K,                          // k
    ES_KEY_L,                          // l
    ES_KEY_M,                          // m
    ES_KEY_N,                          // n
    ES_KEY_O,                          // o
    ES_KEY_P,                          // p
    ES_KEY_Q,                          // q
    ES_KEY_R,                          // r
    ES_KEY_S,                          // s
    ES_KEY_T,                          // t
    ES_KEY_U,                          // u
    ES_KEY_V,                          // v
    ES_KEY_W,                          // w
    ES_KEY_X,                          // x
    ES_KEY_Y,                          // y
    ES_KEY_Z,                          // z
    ES_KEY_ES_UMLAUT|ES_MOD_RIGHT_ALT,    // {
    ES_KEY_1|ES_MOD_RIGHT_ALT,            // |ES_
    ES_KEY_ES_CEDILLA|ES_MOD_RIGHT_ALT,   // }
    ES_KEY_RESERVED,                   // ~ (This is a dead key in the ES layout, would require ALTGR+4 *followed by* space)
    ES_KEY_RESERVED,                   // 127 - DEL
    ES_KEY_RESERVED,                   // 128 - Unused
    ES_KEY_RESERVED,                   // 129 - Unused
    ES_KEY_RESERVED,                   // 130 - Unused
    ES_KEY_RESERVED,                   // 131 - Unused
    ES_KEY_RESERVED,                   // 132 - Unused
    ES_KEY_RESERVED,                   // 133 - Unused
    ES_KEY_RESERVED,                   // 134 - Unused
    ES_KEY_RESERVED,                   // 135 - Unused
    ES_KEY_RESERVED,                   // 136 - Unused
    ES_KEY_RESERVED,                   // 137 - Unused
    ES_KEY_RESERVED,                   // 138 - Unused
    ES_KEY_RESERVED,                   // 139 - Unused
    ES_KEY_RESERVED,                   // 140 - Unused
    ES_KEY_RESERVED,                   // 141 - Unused
    ES_KEY_RESERVED,                   // 142 - Unused
    ES_KEY_RESERVED,                   // 143 - Unused
    ES_KEY_RESERVED,                   // 144 - Unused
    ES_KEY_RESERVED,                   // 145 - Unused
    ES_KEY_RESERVED,                   // 146 - Unused
    ES_KEY_RESERVED,                   // 147 - Unused
    ES_KEY_RESERVED,                   // 148 - Unused
    ES_KEY_RESERVED,                   // 149 - Unused
    ES_KEY_RESERVED,                   // 150 - Unused
    ES_KEY_RESERVED,                   // 151 - Unused
    ES_KEY_RESERVED,                   // 152 - Unused
    ES_KEY_RESERVED,                   // 153 - Unused
    ES_KEY_RESERVED,                   // 154 - Unused
    ES_KEY_RESERVED,                   // 155 - Unused
    ES_KEY_RESERVED,                   // 156 - Unused
    ES_KEY_RESERVED,                   // 157 - Unused
    ES_KEY_RESERVED,                   // 158 - Unused
    ES_KEY_RESERVED,                   // 159 - Unused
    ES_KEY_RESERVED,                   // 160 - Non-breaking Space
    ES_KEY_ES_INVMARKS,                // 161 - Inverted Exclamation Mark
    ES_KEY_RESERVED,                   // 162 - Cent
    ES_KEY_RESERVED,                   // 163 - British Pound Sign
    ES_KEY_5|ES_MOD_RIGHT_ALT,            // 164 - Euro Sign
    ES_KEY_RESERVED,                   // 165 - Yen
    ES_KEY_RESERVED,                   // 166 - Capital 's' Inverted Circumflex
    ES_KEY_RESERVED,                   // 167 - Section Sign
    ES_KEY_RESERVED,                   // 168 - 's' Inverted Circumflex
    ES_KEY_RESERVED,                   // 169 - Copyright Sign
    ES_KEY_ES_AO|ES_MOD_LEFT_SHIFT,       // 170 - Superscript 'a'
    ES_KEY_RESERVED,                   // 171 - Open Guillemet
    ES_KEY_6|ES_MOD_RIGHT_ALT,            // 172 - Logic Negation
    ES_KEY_RESERVED,                   // 173 - Soft Hypen
    ES_KEY_RESERVED,                   // 174 - Registered Trademark
    ES_KEY_RESERVED,                   // 175 - Macron
    ES_KEY_ES_AO,                      // 176 - Degree Symbol
    ES_KEY_RESERVED,                   // 177 - Plus-Minus
    ES_KEY_RESERVED,                   // 178 - Superscript '2'
    ES_KEY_RESERVED,                   // 179 - Superscript '3'
    ES_KEY_RESERVED,                   // 180 - Capital 'z' Inverted Circumflex
    ES_KEY_RESERVED,                   // 181 - Micro Symbol
    ES_KEY_RESERVED,                   // 182 - Paragraph Mark
    ES_KEY_3|ES_MOD_LEFT_SHIFT,           // 183 - Interpunct
    ES_KEY_RESERVED,                   // 184 - 'z' Inverted Circumflex
    ES_KEY_RESERVED,                   // 185 - Superscript '1'
    ES_KEY_RESERVED,                   // 186 - Ordinal Indicator
    ES_KEY_RESERVED,                   // 187 - Closed Guillemet
    ES_KEY_RESERVED,                   // 188 - Capital 'oe'
    ES_KEY_RESERVED,                   // 189 - 'oe'
    ES_KEY_RESERVED,                   // 190 - Capital 'y' Umlaut
    ES_KEY_ES_INVMARKS|ES_MOD_LEFT_SHIFT, // 191 - Inverted Question Mark
    ES_KEY_RESERVED,                   // 192 - Capital 'a' Grave
    ES_KEY_RESERVED,                   // 193 - Capital 'a' Acute
    ES_KEY_RESERVED,                   // 194 - Capital 'a' Circumflex
    ES_KEY_RESERVED,                   // 195 - Capital 'a' Tilde
    ES_KEY_RESERVED,                   // 196 - Capital 'a' Umlaut
    ES_KEY_RESERVED,                   // 197 - Capital 'a' Circle
    ES_KEY_RESERVED,                   // 198 - Capital 'ae'
    ES_KEY_ES_CEDILLA|ES_MOD_LEFT_SHIFT,  // 199 - Capital 'c' Cedilla
    ES_KEY_RESERVED,                   // 200 - Capital 'e' Grave
    ES_KEY_RESERVED,                   // 201 - Capital 'e' Acute
    ES_KEY_RESERVED,                   // 202 - Capital 'e' Circumflex
    ES_KEY_RESERVED,                   // 203 - Capital 'e' Umlaut
    ES_KEY_RESERVED,                   // 204 - Capital 'i' Grave
    ES_KEY_RESERVED,                   // 205 - Capital 'i' Acute
    ES_KEY_RESERVED,                   // 206 - Capital 'i' Circumflex
    ES_KEY_RESERVED,                   // 207 - Capital 'i' Umlaut
    ES_KEY_RESERVED,                   // 208 - Capital Eth
    ES_KEY_ES_NTILDE|ES_MOD_LEFT_SHIFT,   // 207 - Capital 'n' Tilde
    ES_KEY_RESERVED,                   // 210 - Capital 'o' Grave
    ES_KEY_RESERVED,                   // 211 - Capital 'o' Acute
    ES_KEY_RESERVED,                   // 212 - Capital 'o' Circumflex
    ES_KEY_RESERVED,                   // 213 - Capital 'o' Tilde
    ES_KEY_RESERVED,                   // 214 - Capital 'o' Umlaut
    ES_KEY_RESERVED,                   // 215 - Multiplication Sign
    ES_KEY_RESERVED,                   // 216 - Capital 'o' Barred
    ES_KEY_RESERVED,                   // 217 - Capital 'u' Grave
    ES_KEY_RESERVED,                   // 218 - Capital 'u' Acute
    ES_KEY_RESERVED,                   // 219 - Capital 'u' Circumflex
    ES_KEY_RESERVED,                   // 220 - Capital 'u' Umlaut
    ES_KEY_RESERVED,                   // 221 - Capital 'y' Acute
    ES_KEY_RESERVED,                   // 222 - Capital Thorn
    ES_KEY_RESERVED,                   // 223 - Eszett
    ES_KEY_RESERVED,                   // 224 - 'a' Grave
    ES_KEY_RESERVED,                   // 225 - 'a' Acute
    ES_KEY_RESERVED,                   // 226 - 'a' Circumflex
    ES_KEY_RESERVED,                   // 227 - 'a' Tilde
    ES_KEY_RESERVED,                   // 228 - 'a' Umlaut
    ES_KEY_RESERVED,                   // 229 - 'a' Circle
    ES_KEY_RESERVED,                   // 230 - 'ae'
    ES_KEY_ES_CEDILLA,                 // 231 - 'c' Cedilla
    ES_KEY_RESERVED,                   // 232 - 'e' Grave
    ES_KEY_RESERVED,                   // 233 - 'e' Acute
    ES_KEY_RESERVED,                   // 234 - 'e' Circumflex
    ES_KEY_RESERVED,                   // 235 - 'e' Umlaut
    ES_KEY_RESERVED,                   // 236 - 'i' Grave
    ES_KEY_RESERVED,                   // 237 - 'i' Acute
    ES_KEY_RESERVED,                   // 238 - 'i' Circumflex
    ES_KEY_RESERVED,                   // 239 - 'i' Umlaut
    ES_KEY_RESERVED,                   // 240 - Eth
    ES_KEY_ES_NTILDE,                  // 241 - 'n' Tilde
    ES_KEY_RESERVED,                   // 242 - 'o' Grave
    ES_KEY_RESERVED,                   // 243 - 'o' Acute
    ES_KEY_RESERVED,                   // 244 - 'o' Circumflex
    ES_KEY_RESERVED,                   // 245 - 'o' Tilde
    ES_KEY_RESERVED,                   // 246 - 'o' Umlaut
    ES_KEY_RESERVED,                   // 247 - Multiplication Sign
    ES_KEY_RESERVED,                   // 248 - 'o' Barred
    ES_KEY_RESERVED,                   // 249 - 'u' Grave
    ES_KEY_RESERVED,                   // 250 - 'u' Acute
    ES_KEY_RESERVED,                   // 251 - 'u' Circumflex
    ES_KEY_RESERVED,                   // 252 - 'u' Umlaut
    ES_KEY_RESERVED,                   // 253 - 'y' Acute
    ES_KEY_RESERVED,                   // 254 - Thorn
    ES_KEY_RESERVED,                   // 255 - 'y' Umlaut
};
