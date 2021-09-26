
enum KeyboardModsDK : uint16_t {
    DK_MOD_LEFT_CTRL       = (1 <<  8),
    DK_MOD_LEFT_SHIFT      = (1 <<  9),
    DK_MOD_LEFT_ALT        = (1 << 10),
    DK_MOD_LEFT_GUI        = (1 << 11),
    DK_MOD_RIGHT_CTRL      = (1 << 12),
    DK_MOD_RIGHT_SHIFT     = (1 << 13),
    DK_MOD_RIGHT_ALT       = (1 << 14),
    DK_MOD_RIGHT_GUI       = (uint16_t)(1 << 15),
};


// Hut1_12v2.pdf

enum KeyboardKeycodeDK : uint8_t {
    DK_KEY_RESERVED        =  0,
    DK_KEY_ERROR_ROLLOVER  =  1,
    DK_KEY_POST_FAIL       =  2,
    DK_KEY_ERROR_UNDEFINED =  3,
    DK_KEY_A               =  4,
    DK_KEY_B               =  5,
    DK_KEY_C               =  6,
    DK_KEY_D               =  7,
    DK_KEY_E               =  8,
    DK_KEY_F               =  9,
    DK_KEY_G               = 10,
    DK_KEY_H               = 11,
    DK_KEY_I               = 12,
    DK_KEY_J               = 13,
    DK_KEY_K               = 14,
    DK_KEY_L               = 15,
    DK_KEY_M               = 16,
    DK_KEY_N               = 17,
    DK_KEY_O               = 18,
    DK_KEY_P               = 19,
    DK_KEY_Q               = 20,
    DK_KEY_R               = 21,
    DK_KEY_S               = 22,
    DK_KEY_T               = 23,
    DK_KEY_U               = 24,
    DK_KEY_V               = 25,
    DK_KEY_W               = 26,
    DK_KEY_X               = 27,
    DK_KEY_Y               = 28,
    DK_KEY_Z               = 29,
    DK_KEY_1               = 30,
    DK_KEY_2               = 31,
    DK_KEY_3               = 32,
    DK_KEY_4               = 33,
    DK_KEY_5               = 34,
    DK_KEY_6               = 35,
    DK_KEY_7               = 36,
    DK_KEY_8               = 37,
    DK_KEY_9               = 38,
    DK_KEY_0               = 39,
    DK_KEY_ENTER           = 40,
    DK_KEY_RETURN          = 40, // Alias
    DK_KEY_ESC             = 41,
    DK_KEY_BACKSPACE       = 42,
    DK_KEY_TAB             = 43,
    DK_KEY_SPACE           = 44,
    DK_KEY_MINUS           = 45,
    DK_KEY_EQUAL           = 46,
    DK_KEY_LEFT_BRACE      = 47,
    DK_KEY_RIGHT_BRACE     = 48,
    DK_KEY_BACKSLASH       = 49,
    DK_KEY_NON_US_NUM      = 50,
    DK_KEY_SEMICOLON       = 51,
    DK_KEY_QUOTE           = 52,
    DK_KEY_TILDE           = 53,
    DK_KEY_COMMA           = 54,
    DK_KEY_PERIOD          = 55,
    DK_KEY_SLASH           = 56,
    DK_KEY_CAPS_LOCK       = 0x39,
    DK_KEY_F1              = 0x3A,
    DK_KEY_F2              = 0x3B,
    DK_KEY_F3              = 0x3C,
    DK_KEY_F4              = 0x3D,
    DK_KEY_F5              = 0x3E,
    DK_KEY_F6              = 0x3F,
    DK_KEY_F7              = 0x40,
    DK_KEY_F8              = 0x41,
    DK_KEY_F9              = 0x42,
    DK_KEY_F10             = 0x43,
    DK_KEY_F11             = 0x44,
    DK_KEY_F12             = 0x45,
    DK_KEY_PRINT           = 0x46,
    DK_KEY_PRINTSCREEN     = 0x46, // Alias
    DK_KEY_SCROLL_LOCK     = 0x47,
    DK_KEY_PAUSE           = 0x48,
    DK_KEY_INSERT          = 0x49,
    DK_KEY_HOME            = 0x4A,
    DK_KEY_PAGE_UP         = 0x4B,
    DK_KEY_DELETE          = 0x4C,
    DK_KEY_END             = 0x4D,
    DK_KEY_PAGE_DOWN       = 0x4E,
    DK_KEY_RIGHT_ARROW     = 0x4F,
    DK_KEY_LEFT_ARROW      = 0x50,
    DK_KEY_DOWN_ARROW      = 0x51,
    DK_KEY_UP_ARROW        = 0x52,
    DK_KEY_RIGHT           = 0x4F, // Alias
    DK_KEY_LEFT            = 0x50, // Alias
    DK_KEY_DOWN            = 0x51, // Alias
    DK_KEY_UP              = 0x52, // Alias
    DK_KEY_NUM_LOCK        = 0x53,
    DK_KEYPAD_DIVIDE       = 0x54,
    DK_KEYPAD_MULTIPLY     = 0x55,
    DK_KEYPAD_SUBTRACT     = 0x56,
    DK_KEYPAD_ADD          = 0x57,
    DK_KEYPAD_ENTER        = 0x58,
    DK_KEYPAD_1            = 0x59,
    DK_KEYPAD_2            = 0x5A,
    DK_KEYPAD_3            = 0x5B,
    DK_KEYPAD_4            = 0x5C,
    DK_KEYPAD_5            = 0x5D,
    DK_KEYPAD_6            = 0x5E,
    DK_KEYPAD_7            = 0x5F,
    DK_KEYPAD_8            = 0x60,
    DK_KEYPAD_9            = 0x61,
    DK_KEYPAD_0            = 0x62,
    DK_KEYPAD_DOT          = 0x63,
    DK_KEY_NON_US          = 0x64,
    DK_KEY_APPLICATION     = 0x65, // Context menu/right click
    DK_KEY_MENU            = 0x65,
    DK_KEY_POWER           = 0x66, // PowerOff (Ubuntu)
    DK_KEY_PAD_EQUALS      = 0x67, // Dont confuse with KEYPAD_EQUAL_SIGN
    DK_KEY_F13             = 0x68, // Tools (Ubunutu)
    DK_KEY_F14             = 0x69, // Launch5 (Ubuntu)
    DK_KEY_F15             = 0x6A, // Launch6 (Ubuntu)
    DK_KEY_F16             = 0x6B, // Launch7 (Ubuntu)
    DK_KEY_F17             = 0x6C, // Launch8 (Ubuntu)
    DK_KEY_F18             = 0x6D, // Launch9 (Ubuntu)
    DK_KEY_F19             = 0x6E, // Disabled (Ubuntu)
    DK_KEY_F20             = 0x6F, // AudioMicMute (Ubuntu)
    DK_KEY_F21             = 0x70, // Touchpad toggle (Ubuntu)
    DK_KEY_F22             = 0x71, // TouchpadOn (Ubuntu)
    DK_KEY_F23             = 0x72, // TouchpadOff Ubuntu)
    DK_KEY_F24             = 0x73, // Disabled (Ubuntu)
    DK_KEY_EXECUTE         = 0x74, // Open (Ubuntu)
    DK_KEY_HELP            = 0x75, // Help (Ubuntu)
    DK_KEY_MENU2           = 0x76, // Disabled (Ubuntu)
    DK_KEY_SELECT          = 0x77, // Disabled (Ubuntu)
    DK_KEY_STOP            = 0x78, // Cancel (Ubuntu)
    DK_KEY_AGAIN           = 0x79, // Redo (Ubuntu)
    DK_KEY_UNDO            = 0x7A, // Undo (Ubuntu)
    DK_KEY_CUT             = 0x7B, // Cut (Ubuntu)
    DK_KEY_COPY            = 0x7C, // Copy (Ubuntu)
    DK_KEY_PASTE           = 0x7D, // Paste (Ubuntu)
    DK_KEY_FIND            = 0x7E, // Find (Ubuntu)
    DK_KEY_MUTE            = 0x7F,
    DK_KEY_VOLUME_MUTE     = 0x7F, // Alias
    DK_KEY_VOLUME_UP       = 0x80,
    DK_KEY_VOLUME_DOWN     = 0x81,
    DK_KEY_LOCKING_CAPS_LOCK   = 0x82, // Disabled (Ubuntu)
    DK_KEY_LOCKING_NUM_LOCK    = 0x83, // Disabled (Ubuntu)
    DK_KEY_LOCKING_SCROLL_LOCK = 0x84, // Disabled (Ubuntu)
    DK_KEYPAD_COMMA            = 0x85, // .
    DK_KEYPAD_EQUAL_SIGN       = 0x86, // Disabled (Ubuntu), Dont confuse with KEYPAD_EQUAL
    DK_KEY_INTERNATIONAL1      = 0x87, // Disabled (Ubuntu)
    DK_KEY_INTERNATIONAL2      = 0x88, // Hiragana Katakana (Ubuntu)
    DK_KEY_INTERNATIONAL3      = 0x89, // Disabled (Ubuntu)
    DK_KEY_INTERNATIONAL4      = 0x8A, // Henkan (Ubuntu)
    DK_KEY_INTERNATIONAL5      = 0x8B, // Muhenkan (Ubuntu)
    DK_KEY_INTERNATIONAL6      = 0x8C, // Disabled (Ubuntu)
    DK_KEY_INTERNATIONAL7      = 0x8D, // Disabled (Ubuntu)
    DK_KEY_INTERNATIONAL8      = 0x8E, // Disabled (Ubuntu)
    DK_KEY_INTERNATIONAL9      = 0x8F, // Disabled (Ubuntu)
    DK_KEY_LANG1               = 0x90, // Disabled (Ubuntu)
    DK_KEY_LANG2               = 0x91, // Disabled (Ubuntu)
    DK_KEY_LANG3               = 0x92, // Katana (Ubuntu)
    DK_KEY_LANG4               = 0x93, // Hiragana (Ubuntu)
    DK_KEY_LANG5               = 0x94, // Disabled (Ubuntu)
    DK_KEY_LANG6               = 0x95, // Disabled (Ubuntu)
    DK_KEY_LANG7               = 0x96, // Disabled (Ubuntu)
    DK_KEY_LANG8               = 0x97, // Disabled (Ubuntu)
    DK_KEY_LANG9               = 0x98, // Disabled (Ubuntu)
    DK_KEY_ALTERNATE_ERASE     = 0x99, // Disabled (Ubuntu)
    DK_KEY_SYSREQ_ATTENTION    = 0x9A, // Disabled (Ubuntu)
    DK_KEY_CANCEL              = 0x9B, // Disabled (Ubuntu)
    DK_KEY_CLEAR               = 0x9C, // Delete (Ubuntu)
    DK_KEY_PRIOR               = 0x9D, // Disabled (Ubuntu)
    DK_KEY_RETURN2             = 0x9E, // Disabled (Ubuntu), Do not confuse this with KEY_ENTER
    DK_KEY_SEPARATOR           = 0x9F, // Disabled (Ubuntu)
    DK_KEY_OUT                 = 0xA0, // Disabled (Ubuntu)
    DK_KEY_OPER                = 0xA1, // Disabled (Ubuntu)
    DK_KEY_CLEAR_AGAIN         = 0xA2, // Disabled (Ubuntu)
    DK_KEY_CRSEL_PROPS         = 0xA3, // Disabled (Ubuntu)
    DK_KEY_EXSEL               = 0xA4, // Disabled (Ubuntu)
    DK_KEY_PAD_00                  = 0xB0, // Disabled (Ubuntu)
    DK_KEY_PAD_000                 = 0xB1, // Disabled (Ubuntu)
    DK_KEY_THOUSANDS_SEPARATOR     = 0xB2, // Disabled (Ubuntu)
    DK_KEY_DECIMAL_SEPARATOR       = 0xB3, // Disabled (Ubuntu)
    DK_KEY_CURRENCY_UNIT           = 0xB4, // Disabled (Ubuntu)
    DK_KEY_CURRENCY_SUB_UNIT       = 0xB5, // Disabled (Ubuntu)
    DK_KEYPAD_LEFT_BRACE           = 0xB6, // (
    DK_KEYPAD_RIGHT_BRACE          = 0xB7, // )
    DK_KEYPAD_LEFT_CURLY_BRACE     = 0xB8, // Disabled (Ubuntu)
    DK_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9, // Disabled (Ubuntu)
    DK_KEYPAD_TAB                  = 0xBA, // Disabled (Ubuntu)
    DK_KEYPAD_BACKSPACE            = 0xBB, // Disabled (Ubuntu)
    DK_KEYPAD_A                    = 0xBC, // Disabled (Ubuntu)
    DK_KEYPAD_B                    = 0xBD, // Disabled (Ubuntu)
    DK_KEYPAD_C                    = 0xBE, // Disabled (Ubuntu)
    DK_KEYPAD_D                    = 0xBF, // Disabled (Ubuntu)
    DK_KEYPAD_E                    = 0xC0, // Disabled (Ubuntu)
    DK_KEYPAD_F                    = 0xC1, // Disabled (Ubuntu)
    DK_KEYPAD_XOR                  = 0xC2, // Disabled (Ubuntu)
    DK_KEYPAD_CARET                = 0xC3, // Disabled (Ubuntu)
    DK_KEYPAD_PERCENT              = 0xC4, // Disabled (Ubuntu)
    DK_KEYPAD_LESS_THAN            = 0xC5, // Disabled (Ubuntu)
    DK_KEYPAD_GREATER_THAN         = 0xC6, // Disabled (Ubuntu)
    DK_KEYPAD_AMPERSAND            = 0xC7, // Disabled (Ubuntu)
    DK_KEYPAD_DOUBLEAMPERSAND      = 0xC8, // Disabled (Ubuntu)
    DK_KEYPAD_PIPE                 = 0xC9, // Disabled (Ubuntu)
    DK_KEYPAD_DOUBLEPIPE           = 0xCA, // Disabled (Ubuntu)
    DK_KEYPAD_COLON                = 0xCB, // Disabled (Ubuntu)
    DK_KEYPAD_POUND_SIGN           = 0xCC, // Disabled (Ubuntu)
    DK_KEYPAD_SPACE                = 0xCD, // Disabled (Ubuntu)
    DK_KEYPAD_AT_SIGN              = 0xCE, // Disabled (Ubuntu)
    DK_KEYPAD_EXCLAMATION_POINT    = 0xCF, // Disabled (Ubuntu)
    DK_KEYPAD_MEMORY_STORE         = 0xD0, // Disabled (Ubuntu)
    DK_KEYPAD_MEMORY_RECALL        = 0xD1, // Disabled (Ubuntu)
    DK_KEYPAD_MEMORY_CLEAR         = 0xD2, // Disabled (Ubuntu)
    DK_KEYPAD_MEMORY_ADD           = 0xD3, // Disabled (Ubuntu)
    DK_KEYPAD_MEMORY_SUBTRACT      = 0xD4, // Disabled (Ubuntu)
    DK_KEYPAD_MEMORY_MULTIPLY      = 0xD5, // Disabled (Ubuntu)
    DK_KEYPAD_MEMORY_DIVIDE        = 0xD6, // Disabled (Ubuntu)
    DK_KEYPAD_PLUS_MINUS           = 0xD7, // Disabled (Ubuntu)
    DK_KEYPAD_CLEAR                = 0xD8, // Delete (Ubuntu)
    DK_KEYPAD_CLEAR_ENTRY          = 0xD9, // Disabled (Ubuntu)
    DK_KEYPAD_BINARY               = 0xDA, // Disabled (Ubuntu)
    DK_KEYPAD_OCTAL                = 0xDB, // Disabled (Ubuntu)
    DK_KEYPAD_DECIMAL              = 0xDC, // Disabled (Ubuntu)
    DK_KEYPAD_HEXADECIMAL          = 0xDD, // Disabled (Ubuntu)
    DK_KEY_LEFT_CTRL           = 0xE0,
    DK_KEY_LEFT_SHIFT          = 0xE1,
    DK_KEY_LEFT_ALT            = 0xE2,
    DK_KEY_LEFT_GUI            = 0xE3,
    DK_KEY_LEFT_WINDOWS        = 0xE3, // Alias
    DK_KEY_RIGHT_CTRL          = 0xE4,
    DK_KEY_RIGHT_SHIFT         = 0xE5,
    DK_KEY_RIGHT_ALT           = 0xE6,
    DK_KEY_RIGHT_GUI           = 0xE7,
    DK_KEY_RIGHT_WINDOWS       = 0xE7, // Alias
    DK_HID_KEYBOARD_ERROR_ROLLOVER = 0x01,
    DK_HID_KEYBOARD_POST_FAIL  = 0x02,
    DK_HID_KEYBOARD_ERROR_UNDEFINED    = 0x03,
    DK_HID_KEYBOARD_A_AND_A    = 0x04,
    DK_HID_KEYBOARD_B_AND_B    = 0x05,
    DK_HID_KEYBOARD_C_AND_C    = 0x06,
    DK_HID_KEYBOARD_D_AND_D    = 0x07,
    DK_HID_KEYBOARD_E_AND_E    = 0x08,
    DK_HID_KEYBOARD_F_AND_F    = 0x09,
    DK_HID_KEYBOARD_G_AND_G    = 0x0A,
    DK_HID_KEYBOARD_H_AND_H    = 0x0B,
    DK_HID_KEYBOARD_I_AND_I    = 0x0C,
    DK_HID_KEYBOARD_J_AND_J    = 0x0D,
    DK_HID_KEYBOARD_K_AND_K    = 0x0E,
    DK_HID_KEYBOARD_L_AND_L    = 0x0F,
    DK_HID_KEYBOARD_M_AND_M    = 0x10,
    DK_HID_KEYBOARD_N_AND_N    = 0x11,
    DK_HID_KEYBOARD_O_AND_O    = 0x12,
    DK_HID_KEYBOARD_P_AND_P    = 0x13,
    DK_HID_KEYBOARD_Q_AND_Q    = 0x14,
    DK_HID_KEYBOARD_R_AND_R    = 0x15,
    DK_HID_KEYBOARD_S_AND_S    = 0x16,
    DK_HID_KEYBOARD_T_AND_T    = 0x17,
    DK_HID_KEYBOARD_U_AND_U    = 0x18,
    DK_HID_KEYBOARD_V_AND_V    = 0x19,
    DK_HID_KEYBOARD_W_AND_W    = 0x1A,
    DK_HID_KEYBOARD_X_AND_X    = 0x1B,
    DK_HID_KEYBOARD_Y_AND_Y    = 0x1C,
    DK_HID_KEYBOARD_Z_AND_Z    = 0x1D,
    DK_HID_KEYBOARD_1_AND_EXCLAMATION_POINT    = 0x1E,
    DK_HID_KEYBOARD_2_AND_AT   = 0x1F,
    DK_HID_KEYBOARD_3_AND_POUND    = 0x20,
    DK_HID_KEYBOARD_4_AND_DOLLAR   = 0x21,
    DK_HID_KEYBOARD_5_AND_PERCENT  = 0x22,
    DK_HID_KEYBOARD_6_AND_CARAT    = 0x23,
    DK_HID_KEYBOARD_7_AND_AMPERSAND    = 0x24,
    DK_HID_KEYBOARD_8_AND_ASTERISK = 0x25,
    DK_HID_KEYBOARD_9_AND_LEFT_PAREN   = 0x26,
    DK_HID_KEYBOARD_0_AND_RIGHT_PAREN  = 0x27,
    DK_HID_KEYBOARD_ENTER  = 0x28,  // (MARKED AS ENTER_SLASH_RETURN)
    DK_HID_KEYBOARD_ESCAPE = 0x29,
    DK_HID_KEYBOARD_DELETE = 0x2A, // (BACKSPACE)
    DK_HID_KEYBOARD_TAB    = 0x2B,
    DK_HID_KEYBOARD_SPACEBAR   = 0x2C,
    DK_HID_KEYBOARD_MINUS_AND_UNDERSCORE   = 0x2D,  // (UNDERSCORE)
    DK_HID_KEYBOARD_EQUALS_AND_PLUS    = 0x2E,
    DK_HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE  = 0x2F,
    DK_HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE    = 0x30,
    DK_HID_KEYBOARD_BACKSLASH_AND_PIPE = 0x31,
    DK_HID_KEYBOARD_NON_US_POUND_AND_TILDE = 0x32,
    DK_HID_KEYBOARD_SEMICOLON_AND_COLON    = 0x33,
    DK_HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE  = 0x34,
    DK_HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE = 0x35,
    DK_HID_KEYBOARD_COMMA_AND_LESS_THAN    = 0x36,
    DK_HID_KEYBOARD_PERIOD_AND_GREATER_THAN    = 0x37,
    DK_HID_KEYBOARD_SLASH_AND_QUESTION_MARK    = 0x38,
    DK_HID_KEYBOARD_CAPS_LOCK  = 0x39,
    DK_HID_KEYBOARD_F1 = 0x3A,
    DK_HID_KEYBOARD_F2 = 0x3B,
    DK_HID_KEYBOARD_F3 = 0x3C,
    DK_HID_KEYBOARD_F4 = 0x3D,
    DK_HID_KEYBOARD_F5 = 0x3E,
    DK_HID_KEYBOARD_F6 = 0x3F,
    DK_HID_KEYBOARD_F7 = 0x40,
    DK_HID_KEYBOARD_F8 = 0x41,
    DK_HID_KEYBOARD_F9 = 0x42,
    DK_HID_KEYBOARD_F10    = 0x43,
    DK_HID_KEYBOARD_F11    = 0x44,
    DK_HID_KEYBOARD_F12    = 0x45,
    DK_HID_KEYBOARD_PRINTSCREEN    = 0x46,
    DK_HID_KEYBOARD_SCROLL_LOCK    = 0x47,
    DK_HID_KEYBOARD_PAUSE  = 0x48,
    DK_HID_KEYBOARD_INSERT = 0x49,
    DK_HID_KEYBOARD_HOME   = 0x4A,
    DK_HID_KEYBOARD_PAGE_UP    = 0x4B,
    DK_HID_KEYBOARD_DELETE_FORWARD = 0x4C,
    DK_HID_KEYBOARD_END    = 0x4D,
    DK_HID_KEYBOARD_PAGE_DOWN  = 0x4E,
    DK_HID_KEYBOARD_RIGHTARROW = 0x4F,
    DK_HID_KEYBOARD_LEFTARROW  = 0x50,
    DK_HID_KEYBOARD_DOWNARROW  = 0x51,
    DK_HID_KEYBOARD_UPARROW    = 0x52,
    DK_HID_KEYPAD_NUM_LOCK_AND_CLEAR   = 0x53,
    DK_HID_KEYPAD_DIVIDE   = 0x54,
    DK_HID_KEYPAD_MULTIPLY = 0x55,
    DK_HID_KEYPAD_SUBTRACT = 0x56,
    DK_HID_KEYPAD_ADD  = 0x57,
    DK_HID_KEYPAD_ENTER    = 0x58,
    DK_HID_KEYPAD_1_AND_END    = 0x59,
    DK_HID_KEYPAD_2_AND_DOWN_ARROW = 0x5A,
    DK_HID_KEYPAD_3_AND_PAGE_DOWN  = 0x5B,
    DK_HID_KEYPAD_4_AND_LEFT_ARROW = 0x5C,
    DK_HID_KEYPAD_5    = 0x5D,
    DK_HID_KEYPAD_6_AND_RIGHT_ARROW    = 0x5E,
    DK_HID_KEYPAD_7_AND_HOME   = 0x5F,
    DK_HID_KEYPAD_8_AND_UP_ARROW   = 0x60,
    DK_HID_KEYPAD_9_AND_PAGE_UP    = 0x61,
    DK_HID_KEYPAD_0_AND_INSERT = 0x62,
    DK_HID_KEYPAD_PERIOD_AND_DELETE    = 0x63,
    DK_HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE  = 0x64,
    DK_HID_KEYBOARD_APPLICATION    = 0x65,
    DK_HID_KEYBOARD_POWER  = 0x66,
    DK_HID_KEYPAD_EQUALS   = 0x67,
    DK_HID_KEYBOARD_F13    = 0x68,
    DK_HID_KEYBOARD_F14    = 0x69,
    DK_HID_KEYBOARD_F15    = 0x6A,
    DK_HID_KEYBOARD_F16    = 0x6B,
    DK_HID_KEYBOARD_F17    = 0x6C,
    DK_HID_KEYBOARD_F18    = 0x6D,
    DK_HID_KEYBOARD_F19    = 0x6E,
    DK_HID_KEYBOARD_F20    = 0x6F,
    DK_HID_KEYBOARD_F21    = 0x70,
    DK_HID_KEYBOARD_F22    = 0x71,
    DK_HID_KEYBOARD_F23    = 0x72,
    DK_HID_KEYBOARD_F24    = 0x73,
    DK_HID_KEYBOARD_EXECUTE    = 0x74,
    DK_HID_KEYBOARD_HELP   = 0x75,
    DK_HID_KEYBOARD_MENU   = 0x76,
    DK_HID_KEYBOARD_SELECT = 0x77,
    DK_HID_KEYBOARD_STOP   = 0x78,
    DK_HID_KEYBOARD_AGAIN  = 0x79,
    DK_HID_KEYBOARD_UNDO   = 0x7A,
    DK_HID_KEYBOARD_CUT    = 0x7B,
    DK_HID_KEYBOARD_COPY   = 0x7C,
    DK_HID_KEYBOARD_PASTE  = 0x7D,
    DK_HID_KEYBOARD_FIND   = 0x7E,
    DK_HID_KEYBOARD_MUTE   = 0x7F,
    DK_HID_KEYBOARD_VOLUME_UP  = 0x80,
    DK_HID_KEYBOARD_VOLUME_DOWN    = 0x81,
    DK_HID_KEYBOARD_LOCKING_CAPS_LOCK  = 0x82,
    DK_HID_KEYBOARD_LOCKING_NUM_LOCK   = 0x83,
    DK_HID_KEYBOARD_LOCKING_SCROLL_LOCK    = 0x84,
    DK_HID_KEYPAD_COMMA    = 0x85,
    DK_HID_KEYPAD_EQUAL_SIGN   = 0x86,
    DK_HID_KEYBOARD_INTERNATIONAL1 = 0x87,
    DK_HID_KEYBOARD_INTERNATIONAL2 = 0x88,
    DK_HID_KEYBOARD_INTERNATIONAL3 = 0x89,
    DK_HID_KEYBOARD_INTERNATIONAL4 = 0x8A,
    DK_HID_KEYBOARD_INTERNATIONAL5 = 0x8B,
    DK_HID_KEYBOARD_INTERNATIONAL6 = 0x8C,
    DK_HID_KEYBOARD_INTERNATIONAL7 = 0x8D,
    DK_HID_KEYBOARD_INTERNATIONAL8 = 0x8E,
    DK_HID_KEYBOARD_INTERNATIONAL9 = 0x8F,
    DK_HID_KEYBOARD_LANG1  = 0x90,
    DK_HID_KEYBOARD_LANG2  = 0x91,
    DK_HID_KEYBOARD_LANG3  = 0x92,
    DK_HID_KEYBOARD_LANG4  = 0x93,
    DK_HID_KEYBOARD_LANG5  = 0x94,
    DK_HID_KEYBOARD_LANG6  = 0x95,
    DK_HID_KEYBOARD_LANG7  = 0x96,
    DK_HID_KEYBOARD_LANG8  = 0x97,
    DK_HID_KEYBOARD_LANG9  = 0x98,
    DK_HID_KEYBOARD_ALTERNATE_ERASE    = 0x99,
    DK_HID_KEYBOARD_SYSREQ_SLASH_ATTENTION = 0x9A,
    DK_HID_KEYBOARD_CANCEL = 0x9B,
    DK_HID_KEYBOARD_CLEAR  = 0x9C,
    DK_HID_KEYBOARD_PRIOR  = 0x9D,
    DK_HID_KEYBOARD_RETURN = 0x9E,
    DK_HID_KEYBOARD_SEPARATOR  = 0x9F,
    DK_HID_KEYBOARD_OUT    = 0xA0,
    DK_HID_KEYBOARD_OPER   = 0xA1,
    DK_HID_KEYBOARD_CLEAR_SLASH_AGAIN  = 0xA2,
    DK_HID_KEYBOARD_CRSEL_SLASH_PROPS  = 0xA3,
    DK_HID_KEYBOARD_EXSEL  = 0xA4,
    DK_HID_KEYPAD_00   = 0xB0,
    DK_HID_KEYPAD_000  = 0xB1,
    DK_HID_THOUSANDS_SEPARATOR = 0xB2,
    DK_HID_DECIMAL_SEPARATOR   = 0xB3,
    DK_HID_CURRENCY_UNIT   = 0xB4,
    DK_HID_CURRENCY_SUBUNIT    = 0xB5,
    DK_HID_KEYPAD_LEFT_PAREN   = 0xB6,
    DK_HID_KEYPAD_RIGHT_PAREN  = 0xB7,
    DK_HID_KEYPAD_LEFT_CURLY_BRACE = 0xB8,
    DK_HID_KEYPAD_RIGHT_CURLY_BRACE    = 0xB9,
    DK_HID_KEYPAD_TAB  = 0xBA,
    DK_HID_KEYPAD_BACKSPACE    = 0xBB,
    DK_HID_KEYPAD_A    = 0xBC,
    DK_HID_KEYPAD_B    = 0xBD,
    DK_HID_KEYPAD_C    = 0xBE,
    DK_HID_KEYPAD_D    = 0xBF,
    DK_HID_KEYPAD_E    = 0xC0,
    DK_HID_KEYPAD_F    = 0xC1,
    DK_HID_KEYPAD_XOR  = 0xC2,
    DK_HID_KEYPAD_CARAT    = 0xC3,
    DK_HID_KEYPAD_PERCENT  = 0xC4,
    DK_HID_KEYPAD_LESS_THAN    = 0xC5,
    DK_HID_KEYPAD_GREATER_THAN = 0xC6,
    DK_HID_KEYPAD_AMPERSAND    = 0xC7,
    DK_HID_KEYPAD_DOUBLEAMPERSAND  = 0xC8,
    DK_HID_KEYPAD_PIPE = 0xC9,
    DK_HID_KEYPAD_DOUBLEPIPE   = 0xCA,
    DK_HID_KEYPAD_COLON    = 0xCB,
    DK_HID_KEYPAD_POUND_SIGN   = 0xCC,
    DK_HID_KEYPAD_SPACE    = 0xCD,
    DK_HID_KEYPAD_AT_SIGN  = 0xCE,
    DK_HID_KEYPAD_EXCLAMATION_POINT    = 0xCF,
    DK_HID_KEYPAD_MEMORY_STORE = 0xD0,
    DK_HID_KEYPAD_MEMORY_RECALL    = 0xD1,
    DK_HID_KEYPAD_MEMORY_CLEAR = 0xD2,
    DK_HID_KEYPAD_MEMORY_ADD   = 0xD3,
    DK_HID_KEYPAD_MEMORY_SUBTRACT  = 0xD4,
    DK_HID_KEYPAD_MEMORY_MULTIPLY  = 0xD5,
    DK_HID_KEYPAD_MEMORY_DIVIDE    = 0xD6,
    DK_HID_KEYPAD_PLUS_SLASH_MINUS = 0xD7,
    DK_HID_KEYPAD_CLEAR    = 0xD8,
    DK_HID_KEYPAD_CLEAR_ENTRY  = 0xD9,
    DK_HID_KEYPAD_BINARY   = 0xDA,
    DK_HID_KEYPAD_OCTAL    = 0xDB,
    DK_HID_KEYPAD_DECIMAL  = 0xDC,
    DK_HID_KEYPAD_HEXADECIMAL  = 0xDD,
    DK_HID_KEYBOARD_LEFT_CONTROL   = 0xE0,
    DK_HID_KEYBOARD_LEFT_SHIFT = 0xE1,
    DK_HID_KEYBOARD_LEFT_ALT   = 0xE2,
    DK_HID_KEYBOARD_LEFT_GUI   = 0xE3,
    DK_HID_KEYBOARD_RIGHT_CONTROL  = 0xE4,
    DK_HID_KEYBOARD_RIGHT_SHIFT    = 0xE5,
    DK_HID_KEYBOARD_RIGHT_ALT  = 0xE6,
    DK_HID_KEYBOARD_RIGHT_GUI  = 0xE7,
};


// Key aliases
#define DK_KEY_DK_FRACTION     DK_KEY_TILDE
#define DK_KEY_DK_PLUS         DK_KEY_MINUS
#define DK_KEY_DK_ACCENTS1     DK_KEY_EQUAL
#define DK_KEY_DK_ACIRCLE      DK_KEY_LEFT_BRACE
#define DK_KEY_DK_ACCENTS2     DK_KEY_RIGHT_BRACE
#define DK_KEY_DK_AE           DK_KEY_SEMICOLON
#define DK_KEY_DK_OSLASH       DK_KEY_QUOTE
#define DK_KEY_DK_QUOTE        DK_KEY_BACKSLASH
#define DK_KEY_DK_QUOTE        DK_KEY_BACKSLASH
#define DK_KEY_DK_MINUS        DK_KEY_SLASH
#define DK_KEY_DK_LT_GT        DK_KEY_NON_US


static const uint16_t _asciimapDK[] PROGMEM =
{
   DK_KEY_RESERVED,                               // NUL
   DK_KEY_RESERVED,                               // SOH
   DK_KEY_RESERVED,                               // STX
   DK_KEY_RESERVED,                               // ETX
   DK_KEY_RESERVED,                               // EOT
   DK_KEY_RESERVED,                               // ENQ
   DK_KEY_RESERVED,                               // ACK
   DK_KEY_RESERVED,                               // BEL
   DK_KEY_BACKSPACE,                              // BS   Backspace
   DK_KEY_TAB,                                    // TAB  Tab
   DK_KEY_ENTER,                                  // LF   Enter
   DK_KEY_RESERVED,                               // VT
   DK_KEY_RESERVED,                               // FF
   DK_KEY_RESERVED,                               // CR
   DK_KEY_RESERVED,                               // SO
   DK_KEY_RESERVED,                               // SI
   DK_KEY_RESERVED,                               // DEL
   DK_KEY_RESERVED,                               // DC1
   DK_KEY_RESERVED,                               // DC2
   DK_KEY_RESERVED,                               // DC3
   DK_KEY_RESERVED,                               // DC4
   DK_KEY_RESERVED,                               // NAK
   DK_KEY_RESERVED,                               // SYN
   DK_KEY_RESERVED,                               // ETB
   DK_KEY_RESERVED,                               // CAN
   DK_KEY_RESERVED,                               // EM
   DK_KEY_RESERVED,                               // SUB
   DK_KEY_RESERVED,                               // ESC
   DK_KEY_RESERVED,                               // FS
   DK_KEY_RESERVED,                               // GS
   DK_KEY_RESERVED,                               // RS
   DK_KEY_RESERVED,                               // US
   DK_KEY_SPACE,                                  // ' ' Space
   DK_KEY_1|DK_MOD_LEFT_SHIFT,                       // !
   DK_KEY_2|DK_MOD_LEFT_SHIFT,                       // "
   DK_KEY_3|DK_MOD_LEFT_SHIFT,                       // #
   DK_KEY_4|DK_MOD_RIGHT_ALT,                        // $
   DK_KEY_5|DK_MOD_LEFT_SHIFT,                       // %
   DK_KEY_6|DK_MOD_LEFT_SHIFT,                       // &
   DK_KEY_DK_QUOTE,                               // '
   DK_KEY_8|DK_MOD_LEFT_SHIFT,                       // (
   DK_KEY_9|DK_MOD_LEFT_SHIFT,                       // )
   DK_KEY_DK_QUOTE|DK_MOD_LEFT_SHIFT,                // *
   DK_KEY_DK_PLUS,                                // +
   DK_KEY_COMMA,                                  // ,
   DK_KEY_DK_MINUS,                               // -
   DK_KEY_PERIOD,                                 // .
   DK_KEY_7|DK_MOD_LEFT_SHIFT,                       // /
   DK_KEY_0,                                      // 0
   DK_KEY_1,                                      // 1
   DK_KEY_2,                                      // 2
   DK_KEY_3,                                      // 3
   DK_KEY_4,                                      // 4
   DK_KEY_5,                                      // 5
   DK_KEY_6,                                      // 6
   DK_KEY_7,                                      // 7
   DK_KEY_8,                                      // 8
   DK_KEY_9,                                      // 9
   DK_KEY_PERIOD|DK_MOD_LEFT_SHIFT,                  // :
   DK_KEY_COMMA|DK_MOD_LEFT_SHIFT,                   // ;
   DK_KEY_DK_LT_GT,                               // <
   DK_KEY_0|DK_MOD_LEFT_SHIFT,                       // =
   DK_KEY_DK_LT_GT|DK_MOD_LEFT_SHIFT,                // >
   DK_KEY_DK_PLUS|DK_MOD_LEFT_SHIFT,                 // ?
   DK_KEY_2|DK_MOD_RIGHT_ALT,                        // @
   DK_KEY_A|DK_MOD_LEFT_SHIFT,                       // A
   DK_KEY_B|DK_MOD_LEFT_SHIFT,                       // B
   DK_KEY_C|DK_MOD_LEFT_SHIFT,                       // C
   DK_KEY_D|DK_MOD_LEFT_SHIFT,                       // D
   DK_KEY_E|DK_MOD_LEFT_SHIFT,                       // E
   DK_KEY_F|DK_MOD_LEFT_SHIFT,                       // F
   DK_KEY_G|DK_MOD_LEFT_SHIFT,                       // G
   DK_KEY_H|DK_MOD_LEFT_SHIFT,                       // H
   DK_KEY_I|DK_MOD_LEFT_SHIFT,                       // I
   DK_KEY_J|DK_MOD_LEFT_SHIFT,                       // J
   DK_KEY_K|DK_MOD_LEFT_SHIFT,                       // K
   DK_KEY_L|DK_MOD_LEFT_SHIFT,                       // L
   DK_KEY_M|DK_MOD_LEFT_SHIFT,                       // M
   DK_KEY_N|DK_MOD_LEFT_SHIFT,                       // N
   DK_KEY_O|DK_MOD_LEFT_SHIFT,                       // O
   DK_KEY_P|DK_MOD_LEFT_SHIFT,                       // P
   DK_KEY_Q|DK_MOD_LEFT_SHIFT,                       // Q
   DK_KEY_R|DK_MOD_LEFT_SHIFT,                       // R
   DK_KEY_S|DK_MOD_LEFT_SHIFT,                       // S
   DK_KEY_T|DK_MOD_LEFT_SHIFT,                       // T
   DK_KEY_U|DK_MOD_LEFT_SHIFT,                       // U
   DK_KEY_V|DK_MOD_LEFT_SHIFT,                       // V
   DK_KEY_W|DK_MOD_LEFT_SHIFT,                       // W
   DK_KEY_X|DK_MOD_LEFT_SHIFT,                       // X
   DK_KEY_Y|DK_MOD_LEFT_SHIFT,                       // Y
   DK_KEY_Z|DK_MOD_LEFT_SHIFT,                       // Z
   DK_KEY_8|DK_MOD_RIGHT_ALT,                        // [
   DK_KEY_DK_LT_GT|DK_MOD_RIGHT_ALT,                 // bslash
   DK_KEY_9|DK_MOD_RIGHT_ALT,                        // ]
   DK_KEY_RESERVED,                               // ^ (Dead key)
   DK_KEY_DK_MINUS|DK_MOD_LEFT_SHIFT,                // _
   DK_KEY_RESERVED,                               // ` (Dead key)
   DK_KEY_A,                                      // a
   DK_KEY_B,                                      // b
   DK_KEY_C,                                      // c
   DK_KEY_D,                                      // d
   DK_KEY_E,                                      // e
   DK_KEY_F,                                      // f
   DK_KEY_G,                                      // g
   DK_KEY_H,                                      // h
   DK_KEY_I,                                      // i
   DK_KEY_J,                                      // j
   DK_KEY_K,                                      // k
   DK_KEY_L,                                      // l
   DK_KEY_M,                                      // m
   DK_KEY_N,                                      // n
   DK_KEY_O,                                      // o
   DK_KEY_P,                                      // p
   DK_KEY_Q,                                      // q
   DK_KEY_R,                                      // r
   DK_KEY_S,                                      // s
   DK_KEY_T,                                      // t
   DK_KEY_U,                                      // u
   DK_KEY_V,                                      // v
   DK_KEY_W,                                      // w
   DK_KEY_X,                                      // x
   DK_KEY_Y,                                      // y
   DK_KEY_Z,                                      // z
   DK_KEY_7|DK_MOD_RIGHT_ALT,                        // {
   DK_KEY_DK_ACCENTS1|DK_MOD_RIGHT_ALT,              // |DK_
   DK_KEY_0|DK_MOD_RIGHT_ALT,                        // }
   DK_KEY_RESERVED,                               // ~ (Dead key)
   DK_KEY_RESERVED,                               // 127 - DEL
   DK_KEY_RESERVED,                               // 128 - Unused
   DK_KEY_RESERVED,                               // 129 - Unused
   DK_KEY_RESERVED,                               // 130 - Unused
   DK_KEY_RESERVED,                               // 131 - Unused
   DK_KEY_RESERVED,                               // 132 - Unused
   DK_KEY_RESERVED,                               // 133 - Unused
   DK_KEY_RESERVED,                               // 134 - Unused
   DK_KEY_RESERVED,                               // 135 - Unused
   DK_KEY_RESERVED,                               // 136 - Unused
   DK_KEY_RESERVED,                               // 137 - Unused
   DK_KEY_RESERVED,                               // 138 - Unused
   DK_KEY_RESERVED,                               // 139 - Unused
   DK_KEY_RESERVED,                               // 140 - Unused
   DK_KEY_RESERVED,                               // 141 - Unused
   DK_KEY_RESERVED,                               // 142 - Unused
   DK_KEY_RESERVED,                               // 143 - Unused
   DK_KEY_RESERVED,                               // 144 - Unused
   DK_KEY_RESERVED,                               // 145 - Unused
   DK_KEY_RESERVED,                               // 146 - Unused
   DK_KEY_RESERVED,                               // 147 - Unused
   DK_KEY_RESERVED,                               // 148 - Unused
   DK_KEY_RESERVED,                               // 149 - Unused
   DK_KEY_RESERVED,                               // 150 - Unused
   DK_KEY_RESERVED,                               // 151 - Unused
   DK_KEY_RESERVED,                               // 152 - Unused
   DK_KEY_RESERVED,                               // 153 - Unused
   DK_KEY_RESERVED,                               // 154 - Unused
   DK_KEY_RESERVED,                               // 155 - Unused
   DK_KEY_RESERVED,                               // 156 - Unused
   DK_KEY_RESERVED,                               // 157 - Unused
   DK_KEY_RESERVED,                               // 158 - Unused
   DK_KEY_RESERVED,                               // 159 - Unused
   DK_KEY_RESERVED,                               // 160 - Non-breaking Space
   DK_KEY_RESERVED,                               // 161 - Inverted Exclamation Mark
   DK_KEY_RESERVED,                               // 162 - Cent
   DK_KEY_RESERVED,                               // 163 - British Pound Sign
   DK_KEY_5|DK_MOD_RIGHT_ALT,                        // 164 - Euro Sign
   DK_KEY_RESERVED,                               // 165 - Yen
   DK_KEY_RESERVED,                               // 166 - Capital 's' Inverted Circumflex
   DK_KEY_DK_FRACTION|DK_MOD_LEFT_SHIFT,             // 167 - Section Sign
   DK_KEY_RESERVED,                               // 168 - 's' Inverted Circumflex
   DK_KEY_RESERVED,                               // 169 - Copyright Sign
   DK_KEY_RESERVED,                               // 170 - Superscript 'a'
   DK_KEY_RESERVED,                               // 171 - Open Guillemet
   DK_KEY_RESERVED,                               // 172 - Logic Negation
   DK_KEY_RESERVED,                               // 173 - Soft Hypen
   DK_KEY_RESERVED,                               // 174 - Registered Trademark
   DK_KEY_RESERVED,                               // 175 - Macron
   DK_KEY_RESERVED,                               // 176 - Degree Symbol
   DK_KEY_RESERVED,                               // 177 - Plus-Minus
   DK_KEY_RESERVED,                               // 178 - Superscript '2'
   DK_KEY_RESERVED,                               // 179 - Superscript '3'
   DK_KEY_RESERVED,                               // 180 - Capital 'z' Inverted Circumflex
   DK_KEY_M|DK_MOD_RIGHT_ALT,                        // 181 - Micro Symbol
   DK_KEY_RESERVED,                               // 182 - Paragraph Mark
   DK_KEY_RESERVED,                               // 183 - Interpunct
   DK_KEY_RESERVED,                               // 184 - 'z' Inverted Circumflex
   DK_KEY_RESERVED,                               // 185 - Superscript '1'
   DK_KEY_RESERVED,                               // 186 - Ordinal Indicator
   DK_KEY_RESERVED,                               // 187 - Closed Guillemet
   DK_KEY_RESERVED,                               // 188 - Capital 'oe'
   DK_KEY_RESERVED,                               // 189 - 'oe'
   DK_KEY_RESERVED,                               // 190 - Capital 'y' Umlaut
   DK_KEY_RESERVED,                               // 191 - Inverted Question Mark
   DK_KEY_RESERVED,                               // 192 - Capital 'a' Grave
   DK_KEY_RESERVED,                               // 193 - Capital 'a' Acute
   DK_KEY_RESERVED,                               // 194 - Capital 'a' Circumflex
   DK_KEY_RESERVED,                               // 195 - Capital 'a' Tilde
   DK_KEY_RESERVED,                               // 196 - Capital 'a' Umlaut
   DK_KEY_DK_ACIRCLE|DK_MOD_LEFT_SHIFT,              // 197 - Capital 'a' Circle
   DK_KEY_DK_AE|DK_MOD_LEFT_SHIFT,                   // 198 - Capital 'ae'
   DK_KEY_RESERVED,                               // 199 - Capital 'c' Cedilla
   DK_KEY_RESERVED,                               // 200 - Capital 'e' Grave
   DK_KEY_RESERVED,                               // 201 - Capital 'e' Acute
   DK_KEY_RESERVED,                               // 202 - Capital 'e' Circumflex
   DK_KEY_RESERVED,                               // 203 - Capital 'e' Umlaut
   DK_KEY_RESERVED,                               // 204 - Capital 'i' Grave
   DK_KEY_RESERVED,                               // 205 - Capital 'i' Acute
   DK_KEY_RESERVED,                               // 206 - Capital 'i' Circumflex
   DK_KEY_RESERVED,                               // 207 - Capital 'i' Umlaut
   DK_KEY_RESERVED,                               // 208 - Capital Eth
   DK_KEY_RESERVED,                               // 207 - Capital 'n' Tilde
   DK_KEY_RESERVED,                               // 210 - Capital 'o' Grave
   DK_KEY_RESERVED,                               // 211 - Capital 'o' Acute
   DK_KEY_RESERVED,                               // 212 - Capital 'o' Circumflex
   DK_KEY_RESERVED,                               // 213 - Capital 'o' Tilde
   DK_KEY_RESERVED,                               // 214 - Capital 'o' Umlaut
   DK_KEY_RESERVED,                               // 215 - Multiplication Sign
   DK_KEY_DK_OSLASH|DK_MOD_LEFT_SHIFT,               // 216 - Capital 'o' Barred
   DK_KEY_RESERVED,                               // 217 - Capital 'u' Grave
   DK_KEY_RESERVED,                               // 218 - Capital 'u' Acute
   DK_KEY_RESERVED,                               // 219 - Capital 'u' Circumflex
   DK_KEY_RESERVED,                               // 220 - Capital 'u' Umlaut
   DK_KEY_RESERVED,                               // 221 - Capital 'y' Acute
   DK_KEY_RESERVED,                               // 222 - Capital Thorn
   DK_KEY_RESERVED,                               // 223 - Eszett
   DK_KEY_RESERVED,                               // 224 - 'a' Grave
   DK_KEY_RESERVED,                               // 225 - 'a' Acute
   DK_KEY_RESERVED,                               // 226 - 'a' Circumflex
   DK_KEY_RESERVED,                               // 227 - 'a' Tilde
   DK_KEY_RESERVED,                               // 228 - 'a' Umlaut
   DK_KEY_DK_ACIRCLE,                             // 229 - 'a' Circle
   DK_KEY_DK_AE,                                  // 230 - 'ae'
   DK_KEY_RESERVED,                               // 231 - 'c' Cedilla
   DK_KEY_RESERVED,                               // 232 - 'e' Grave
   DK_KEY_RESERVED,                               // 233 - 'e' Acute
   DK_KEY_RESERVED,                               // 234 - 'e' Circumflex
   DK_KEY_RESERVED,                               // 235 - 'e' Umlaut
   DK_KEY_RESERVED,                               // 236 - 'i' Grave
   DK_KEY_RESERVED,                               // 237 - 'i' Acute
   DK_KEY_RESERVED,                               // 238 - 'i' Circumflex
   DK_KEY_RESERVED,                               // 239 - 'i' Umlaut
   DK_KEY_RESERVED,                               // 240 - Eth
   DK_KEY_RESERVED,                               // 241 - 'n' Tilde
   DK_KEY_RESERVED,                               // 242 - 'o' Grave
   DK_KEY_RESERVED,                               // 243 - 'o' Acute
   DK_KEY_RESERVED,                               // 244 - 'o' Circumflex
   DK_KEY_RESERVED,                               // 245 - 'o' Tilde
   DK_KEY_RESERVED,                               // 246 - 'o' Umlaut
   DK_KEY_RESERVED,                               // 247 - Multiplication Sign
   DK_KEY_DK_OSLASH,                              // 248 - 'o' Barred
   DK_KEY_RESERVED,                               // 249 - 'u' Grave
   DK_KEY_RESERVED,                               // 250 - 'u' Acute
   DK_KEY_RESERVED,                               // 251 - 'u' Circumflex
   DK_KEY_RESERVED,                               // 252 - 'u' Umlaut
   DK_KEY_RESERVED,                               // 253 - 'y' Acute
   DK_KEY_RESERVED,                               // 254 - Thorn
   DK_KEY_RESERVED,                               // 255 - 'y' Umlaut
};
