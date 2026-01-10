// ALIASES THAT MUST ONLY BE USED IN SYMBOL LAYER.
// SYNTAX: #DEFINE DVORAK_KEY QWERTY_KEY.

// How to use them????
// You place the original keycodes (i.e. non-D variants) as per QWERTY layout.
// Now all you have to do is to replace the non-D keycodes to its counterpart D-varient keycodes.
// Example: Wherever you use 'LBK' as per QWERTY, just relpace the 'LBK' (non-D) with 'DLBK'.

// Number Row (before BACKSPACE).
#define DLBK MINUS
#define DRBK EQUAL

// Top Alphabet Row (after L).
#define DFSL LBKT
#define DEQU RBKT

// Middle Alphabet Row
#define DMNS SQT

// Bottom Alphabet Row
#define DSMI Z
#define DCMM W
#define DSQT Q
#define DDOT E
