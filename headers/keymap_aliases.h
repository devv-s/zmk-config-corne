#pragma once
#include "keynames.h"
#include "keynames_dvorak.h"

// keymaps alias.
// +KEY+ means KEY has secondary behaviour. Like, it does something on tap and does something else on hold.
// _KEY_ means KEY has default/normal behaviour.


// secondary behaviours.
#define +BSPC+ &qlt SMBL BSPC
#define +DEL+ &qmt RCMD DEL
#define +ENT+ &lt NAVG RET
#define +ESC+ &lt NUMB ESC
#define +LCTRL+ &mt LCTRL CAPS
#define +TAB+ &lt FUNC TAB
#define WRD_DEL &word_del

// aliases of Modifiers (having normal behaviours).
#define _LALT_ &kp LALT
#define _LSHFT_ &kp LSHFT
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

// For Symbols
#define _CMM_ &kp COMMA
#define _DOT_ &kp DOT
#define _FSL_ &kp FSLH
#define _SMI_ &kp SEMI
#define _SQT_ &kp SQT
#define _SPC_ &kp SPACE
