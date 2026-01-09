#pragma once
#include "keynames_dvorak.h"

// Layers Enum
#define ALPHA 0
#define NUMBR 1
#define SYMBL 2
#define NAVIG 3
#define FUNCT 4
#define BLTHT 5

// keymaps alias.
// oKEYo means KEY has secondary behaviour. Like, it does something on tap and does something else on hold.
// _KEY_ means KEY has default/normal behaviour.


// secondary behaviours.
#define oBSPCo &qlt SYMBL BSPC
#define oDELo &qmt RCMD DEL
#define oRETo &lt NAVIG RET
#define oESCo &lt NUMBR ESC
#define oLCTRLo &mt LCTRL CAPS
#define oTABo &lt FUNCT TAB
#define WRD_DEL &word_del

// aliases of Modifiers (having normal behaviours).
#define _LALT_ &kp LALT
#define _LCMD_ &kp LCMD
#define _LSHFT_ &kp LSHFT
#define _LCTRL_ &kp LCTRL
#define _RALT_ &kp RALT
#define _RCMD_ &kp RCMD
#define _RCTRL_ &kp RCTRL
#define _RSHFT_ &kp RSHFT

// For Alphabets (usually the default layer)
#define _A_ &kp A
#define _B_ &kp B
#define _C_ &kp C
#define _D_ &kp D
#define _E_ &kp E
#define _F_ &kp F
#define _G_ &kp G
#define _H_ &kp H
#define _I_ &kp I
#define _J_ &kp J
#define _K_ &kp K
#define _L_ &kp L
#define _M_ &kp M
#define _N_ &kp N
#define _O_ &kp O
#define _P_ &kp P
#define _Q_ &kp Q
#define _R_ &kp R
#define _S_ &kp S
#define _T_ &kp T
#define _U_ &kp U
#define _V_ &kp V
#define _W_ &kp W
#define _X_ &kp X
#define _Y_ &kp Y
#define _Z_ &kp Z

// For Numbers
#define _1_ &kp N1
#define _2_ &kp N2
#define _3_ &kp N3
#define _4_ &kp N4
#define _5_ &kp N5
#define _6_ &kp N6
#define _7_ &kp N7
#define _8_ &kp N8
#define _9_ &kp N9
#define _0_ &kp N0

// For Symbols
#define _AT_  AT                 // At        (@)
#define _AMP_ AMPS               // Ampersand (&)
#define _AST_ &kp ASTRK          // Asterisk  (*)
#define _BSL_ BSLH               // Backslash (\)
#define _CMM_ &kp COMMA
#define _CRT_ CARET
#define _DLR_ DLLR               // Dollar    ($)
#define _DOT_ &kp DOT
#define _EQU_ EQUAL
#define _FSL_ &kp FSLH           // Forward Slash (/)
#define _GRV_ &kp GRAVE          // Back tick or tilde (`)
#define _HSH_ &kp HASH           // Hash or Pound (#)
#define _LBK_ LBKT               // Left Bracket  ({)
#define _LPR_ LPAR               // Left Paranthesis: (
#define _MNS_ &kp MINUS
#define _PCT_ PRCNT
#define _PLS_ &kp PLUS
#define _RBK_ RBKT               // Right Bracket
#define _RPR_ RPAR               // Right Paranthesis
#define _SMI_ &kp SEMI           // Semi-colon
#define _SQT_ &kp SQT            // Single Quote
#define _XCL_ &kp EXCL           // Exclamation

// For Special Keys
#define BKSPC &kp BSPC          // Backspace
#define NUMLK &kp KP_NUM        // Num lock
#define _RET_ &kp RET           // Enter or Return
#define _SPC_ &kp SPACE
#define _VMT_ &kp C_MUTE        // Volume mute
#define _VDN_ &kp C_VOL_DN      // Volume down
#define _VUP_ &kp C_VOL_UP      // Volume up
#define _BDN_ &kp C_BRI_DN      // Brightness down
#define _BUP_ &kp C_BRI_UP      // Brightness up
#define _PSC_ &kp PSCRN         // Printscreen
#define _HOM_ &kp HOME
#define _END_ &kp END
#define _LFT_ &kp LEFT
#define _RIT_ &kp RIGHT
#define _DWN_ &kp DOWN
#define _UP_  &kp DOWN

// For Layers
#define _x_ &none
#define AL_LYR &to ALPHA         // Alphabets Layer
#define BT_LYR &to BLTHT         // Bluetooth Layer
#define FN_LYR &to FUNCT         // Function Layer

// For Bluetooth and Lights
#define _BTC_ &bt BT_CLR
#define _BT1_ &bt BT_SEL 1
#define _BT2_ &bt BT_SEL 2
#define _BT3_ &bt BT_SEL 3
#define _BT4_ &bt BT_SEL 4
#define _BT5_ &bt BT_SEL 5
#define BTTGL &bl BL_TOG
#define BOOT  &bootloader
#define RESET &sys_reset
