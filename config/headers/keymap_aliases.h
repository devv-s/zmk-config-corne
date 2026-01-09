#pragma once
#include "keynames.h"
#include "keynames_dvorak.h"

// keymaps alias.
// oKEYo means KEY has secondary behaviour. Like, it does something on tap and does something else on hold.
// _KEY_ means KEY has default/normal behaviour.


// secondary behaviours.
#define oBSPCo &qlt SMBL BSPC
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
#define _CMM_ &kp COMMA
#define _DOT_ &kp DOT
#define _FSL_ &kp FSLH           // Forward Slash
#define _SMI_ &kp SEMI           // Semi-colon
#define _SQT_ &kp SQT            // Single Quote
#define _AST_ &kp ASTRK          // Asterisk
#define _PLS_ &kp PLUS
#define _MNS_ &kp MINUS


// For Special Keys
#define BKSPC &kp BSPC          // Backspace
#define NUMLK &kp KP_NUM        // Num lock
#define _RET_ &kp RET           // Enter or Return
#define _SPC_ &kp SPACE

// For Layers
#define BT_LYR &to BLTHT         // Bluetooth Layer
