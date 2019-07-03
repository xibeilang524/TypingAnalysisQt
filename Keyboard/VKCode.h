#ifndef VKCODE_H
#define VKCODE_H
//---------------------------------------------------------------------------

namespace NSApplication {
namespace NSKeyboard {
//---------------------------------------------------------------------------
// Declaration of CVKCode
//---------------------------------------------------------------------------

class CVKCode {
public:
  using CVKCodeType = unsigned char;
  static constexpr unsigned int kNumberOfVKCodes = 256;
  enum : CVKCodeType {
    FirstCode = 0x00,
    InvalidCode = FirstCode,
    LeftMouseButton = 0x01,
    RightMouseButton = 0x02,
    Cancel = 0x03,
    MiddleMouseButton = 0x04,
    X1MouseButton = 0x05,
    X2MouseButton = 0x06,
    Backspace = 0x08,
    Tab = 0x09,
    Clear = 0x0c,
    Enter = 0x0d,
    Shift = 0x10,
    Ctrl = 0x11,
    Alt = 0x12,
    Pause = 0x13,
    Capslock = 0x14,
    IMEKanaMode = 0x15,
    IMEHanguelMode = 0x15,
    IMEHangulMode = 0x15,
    IMEJunjaMode = 0x17,
    IMEFinalMode = 0x18,
    IMEHanjaMode = 0x19,
    IMEKanjiMode = 0x19,
    Esc = 0x1b,
    IMEConvert = 0x1c,
    IMENonConvert = 0x1d,
    IMEAccept = 0x1e,
    IMEModeChange = 0x1f,
    Spacebar = 0x20,
    PageUp = 0x21,
    PageDown = 0x22,
    End = 0x23,
    Home = 0x24,
    LeftArrow = 0x25,
    UpArrow = 0x26,
    RightArrow = 0x27,
    DownArrow = 0x28,
    Select = 0x29,
    Print = 0x2a,
    Execute = 0x2b,
    PrintScreen = 0x2c,
    Insert = 0x2d,
    Delete = 0x2e,
    Help = 0x2f,
    VK_0 = 0x30,
    VK_1 = 0x31,
    VK_2 = 0x32,
    VK_3 = 0x33,
    VK_4 = 0x34,
    VK_5 = 0x35,
    VK_6 = 0x36,
    VK_7 = 0x37,
    VK_8 = 0x38,
    VK_9 = 0x39,
    A = 0x41,
    B = 0x42,
    C = 0x43,
    D = 0x44,
    E = 0x45,
    F = 0x46,
    G = 0x47,
    H = 0x48,
    I = 0x49,
    J = 0x4a,
    K = 0x4b,
    L = 0x4c,
    M = 0x4d,
    N = 0x4e,
    O = 0x4f,
    P = 0x50,
    Q = 0x51,
    R = 0x52,
    S = 0x53,
    T = 0x54,
    U = 0x55,
    V = 0x56,
    W = 0x57,
    X = 0x58,
    Y = 0x59,
    Z = 0x5a,
    LeftWin = 0x5b,
    RightWin = 0x5c,
    Applications = 0x5d,
    Sleep = 0x5f,
    Numpad_0 = 0x60,
    Numpad_1 = 0x61,
    Numpad_2 = 0x62,
    Numpad_3 = 0x63,
    Numpad_4 = 0x64,
    Numpad_5 = 0x65,
    Numpad_6 = 0x66,
    Numpad_7 = 0x67,
    Numpad_8 = 0x68,
    Numpad_9 = 0x69,
    Multiply = 0x6a,
    Add = 0x6b,
    Separator = 0x6c,
    Subtract = 0x6d,
    Decimal = 0x6e,
    Divide = 0x6f,
    F1 = 0x70,
    F2 = 0x71,
    F3 = 0x72,
    F4 = 0x73,
    F5 = 0x74,
    F6 = 0x75,
    F7 = 0x76,
    F8 = 0x77,
    F9 = 0x78,
    F10 = 0x79,
    F11 = 0x7a,
    F12 = 0x7b,
    F13 = 0x7c,
    F14 = 0x7d,
    F15 = 0x7e,
    F16 = 0x7f,
    F17 = 0x80,
    F18 = 0x81,
    F19 = 0x82,
    F20 = 0x83,
    F21 = 0x84,
    F22 = 0x85,
    F23 = 0x86,
    F24 = 0x87,
    Numlock = 0x90,
    Scrolllock = 0x91,
    OEM1 = 0x92,
    OEM2 = 0x93,
    OEM3 = 0x94,
    OEM4 = 0x95,
    OEM5 = 0x96,
    LeftShift = 0xa0,
    RightShift = 0xa1,
    LeftCtrl = 0xa2,
    RightCtrl = 0xa3,
    LeftAlt = 0xa4,
    RightAlt = 0xa5,
    BrowserBack = 0xa6,
    BrowserForward = 0xa7,
    BrowserRefresh = 0xa8,
    BrowserStop = 0xa9,
    BrowserSearch = 0xaa,
    BrowserFavorites = 0xab,
    BrowserHome = 0xac,
    VolumeMute = 0xad,
    VolumeDown = 0xae,
    VolumeUp = 0xaf,
    NextTrack = 0xb0,
    PreviousTrack = 0xb1,
    StopMedia = 0xb2,
    PauseMedia = 0xb3,
    StartMail = 0xb4,
    SelectMedia = 0xb5,
    StartApplication1 = 0xb6,
    StartApplication2 = 0xb7,
    VKOEM1 = 0xba,
    Eng_Semicolon = VKOEM1, // ;:
    OEM_Plus = 0xbb,
    Eng_Plus = OEM_Plus, // =+
    OEM_Comma = 0xbc,
    Eng_Comma = OEM_Comma, // ,<
    OEM_Minus = 0xbd,
    Eng_Minus = OEM_Minus, // -_
    OEM_Period = 0xbe,
    Eng_Period = OEM_Period, // .>
    VKOEM2 = 0xbf,
    Eng_Slash_Question = VKOEM2, // /?
    VKOEM3 = 0xc0,
    Eng_Tilde = VKOEM3, // `~
    VKOEM4 = 0xdb,
    Eng_Left_Brace = VKOEM4, // [{
    VKOEM5 = 0xdc,
    Eng_Backslash = VKOEM5, // \|
    VKOEM6 = 0xdd,
    Eng_Right_Brace = VKOEM6, // ]}
    VKOEM7 = 0xde,
    Eng_Quote = VKOEM7, // '"
    VKOEM8 = 0xdf,
    OEM_0xE1 = 0xe1,
    OEM_102 = 0xe2,
    OEM_0xE3 = 0xe3,
    OEM_0xE4 = 0xe4,
    IMEProcess = 0xe5,
    OEM_0xE6 = 0xe6,
    VK_Packet = 0xe7,
    OEM_0xE9 = 0xe9,
    OEM_0xEA = 0xea,
    OEM_0xEB = 0xeb,
    OEM_0xEC = 0xec,
    OEM_0xED = 0xed,
    OEM_0xEE = 0xee,
    OEM_0xEF = 0xef,
    OEM_0xF0 = 0xf0,
    OEM_0xF1 = 0xf1,
    OEM_0xF2 = 0xf2,
    OEM_0xF3 = 0xf3,
    OEM_0xF4 = 0xf4,
    OEM_0xF5 = 0xf5,
    Attn = 0xf6,
    CrSel = 0xf7,
    ExSel = 0xf8,
    EraseEOF = 0xf9,
    Play = 0xfa,
    Zoom = 0xfb,
    PA1 = 0xfd,
    OEMClear = 0xfe,
    MAX = 0xff,
    LastCode = MAX
  };
};
//---------------------------------------------------------------------------
} // NSKeyboard
//---------------------------------------------------------------------------
} // NSApplication
//---------------------------------------------------------------------------
#endif // VKCODE_H
