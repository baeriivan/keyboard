#pragma once
#include "quantum.h"

// clang-format off
#define FOREACH_UNICODE(M) \
    M(UALP,  0x0391) /* Α */ \
    M(LALP,  0x03B1) /* α */ \
    M(UBET,  0x0392) /* Β */ \
    M(LBET,  0x03B2) /* β */ \
    M(UGAM,  0x0393) /* Γ */ \
    M(LDEL,  0x03B4) /* δ */ \
    M(UDEL,  0x0394) /* Δ */ \
    M(LGAM,  0x03B3) /* γ */ \
    M(UEPS,  0x0395) /* Ε */ \
    M(LEPS,  0x03B5) /* ε */ \
    M(UETA,  0x0397) /* Η */ \
    M(LETA,  0x03B7) /* η */ \
    M(UTHE,  0x0398) /* Θ */ \
    M(LTHE,  0x03B8) /* θ */ \
    M(ULAM,  0x039B) /* Λ */ \
    M(LLAM,  0x03BB) /* λ */ \
    M(UMU,   0x039C) /* M */ \
    M(LMU,   0x03BC) /* μ */ \
    M(UPI,   0x03A0) /* Π */ \
    M(LPI,   0x03C0) /* π */ \
    M(URHO,  0x03A1) /* Ρ */ \
    M(LRHO,  0x03C1) /* ρ */ \
    M(USIG,  0x03A3) /* Σ */ \
    M(LSIG,  0x03C3) /* σ */ \
    M(UTAU,  0x03A4) /* Τ */ \
    M(LTAU,  0x03C4) /* τ */ \
    M(UPHI,  0x03A6) /* Φ */ \
    M(LPHI,  0x03C6) /* φ */ \
    M(UPSI,  0x03A8) /* Ψ */ \
    M(LPSI,  0x03C8) /* ψ */ \
    M(UOME,  0x03A9) /* Ω */ \
    M(LOME,  0x03C9) /* ω */ \
    M(A__ACUT    , 0x00E1)\
    M(A__ACUT__U , 0x00C1)\
    M(A__CIRC    , 0x00E2)\
    M(A__CIRC__U , 0x00C2)\
    M(A__GRAV    , 0x00E0)\
    M(A__GRAV__U , 0x00C0)\
    M(C__ACUT    , 0x0107)\
    M(C__ACUT__U , 0x0106)\
    M(C__CARO    , 0x010D)\
    M(C__CARO__U , 0x010C)\
    M(C__CDIL    , 0x00E7)\
    M(C__CDIL__U , 0x00C7)\
    M(D__CARO    , 0x010E)\
    M(D__CARO__U , 0x010F)\
    M(D__STRK    , 0x0111)\
    M(D__STRK__U , 0x0110)\
    M(E__ACUT    , 0x00E9)\
    M(E__ACUT__U , 0x00C9)\
    M(E__GRAV    , 0x00E8)\
    M(E__GRAV__U , 0x00C8)\
    M(E__CIRC    , 0x00EA)\
    M(E__CIRC__U , 0x00CA)\
    M(I__ACUT    , 0x00ED)\
    M(I__ACUT__U , 0x00CD)\
    M(I__CIRC    , 0x00EE)\
    M(I__CIRC__U , 0x00CE)\
    M(I__UML     , 0x00EF)\
    M(I__UML__U  , 0x00CF)\
    M(O__ACUT    , 0x00F3)\
    M(O__ACUT__U , 0x00D3)\
    M(O__DACU    , 0x0151)\
    M(O__DACU__U , 0x0150)\
    M(O__CIRC    , 0x00F4)\
    M(O__CIRC__U , 0x00D4)\
    M(O__UML     , 0x00F6)\
    M(O__UML__U  , 0x00DC)\
    M(U__ACUT    , 0x00F9)\
    M(U__ACUT__U , 0x00D9)\
    M(U__DACU    , 0x0171)\
    M(U__DACU__U , 0x0170)\
    M(U__CIRC    , 0x00FB)\
    M(U__CIRC__U , 0x00DB)\
    M(U__GRAV    , 0x00F9)\
    M(U__GRAV__U , 0x00D9)\
    M(U__UML     , 0x00FC)\
    M(U__UML__U  , 0x00DC)\
    M(S__CARO    , 0x0161)\
    M(S__CARO__U , 0x0160)\
    M(Z__CARO    , 0x017E)\
    M(Z__CARO__U , 0x017D)\
    M(DED__GRAV  , 0x0300)\
    M(DED__ACUT  , 0x0301)\
    M(DED__CIR   , 0x0302)\
    M(DED__UML   , 0x0308)\
    M(DED__DACU  , 0x030B)\
    M(DED__CARO  , 0x030C)\
    M(DEGREE     , 0x00B0)\
    M(MICRO      , 0x00B5)

// clang-format on

#define UC_KEYCODE(name, code)  name = UC(code),        // LALP = UC(0x03B1),

#define UCM_NAME(name, code)    UCM_ ## name,           // UCM_LALP,
#define UCM_ENTRY(name, code)   [UCM_ ## name] = code,  // [UCM_LALP] = 0x03B1,
#define UCM_KEYCODE(name, code) name = X(UCM_ ## name), // LALP = X(UCM_LALP)

#if defined(UNICODE_ENABLE)
enum unicode_keycodes {
    FOREACH_UNICODE(UC_KEYCODE)
};
#elif defined(UNICODEMAP_ENABLE)
enum unicode_names {
    FOREACH_UNICODE(UCM_NAME)
};

extern const uint32_t PROGMEM unicode_map[];

enum unicode_keycodes {
    FOREACH_UNICODE(UCM_KEYCODE)
};
#endif


#define ALPHA XP(LALP, UALP)
#define BETA  XP(LBET, UBET)
#define GAMMA XP(LGAM, UGAM)
#define DELTA XP(LDEL, UDEL)
#define EPSLN XP(LEPS, UEPS)
#define ETA   XP(LETA, UETA)
#define THETA XP(LTHE, UTHE)
#define LAMBD XP(LLAM, ULAM)
#define GMU   XP(LMU,  UMU)
#define PI    XP(LPI,  UPI)
#define RHO   XP(LRHO, URHO)
#define SIGMA XP(LSIG, USIG)
#define TAU   XP(LTAU, UTAU)
#define PHI   XP(LPHI, UPHI)
#define OMEGA XP(LOME, UOME)

#define A_ACUT  XP(A__ACUT, A__ACUT__U)
#define A_CIRC  XP(A__CIRC, A__CIRC__U)
#define A_GRAV  XP(A__GRAV, A__GRAV__U)
#define C_ACUT  XP(C__ACUT, C__ACUT__U)
#define C_CARO  XP(C__CARO, C__CARO__U)
#define C_CDIL  XP(C__CDIL, C__CDIL__U)
#define D_CARO  XP(D__CARO, D__CARO__U)
#define D_ETH   XP(D__ETH , D__ETH__U )
#define D_STRK  XP(D__STRK, D__STRK__U)
#define E_ACUT  XP(E__ACUT, E__ACUT__U)
#define E_CIRC  XP(E__CIRC, E__CIRC__U)
#define E_GRAV  XP(E__GRAV, E__GRAV__U)
#define I_ACUT  XP(I__CIRC, I__CIRC__U)
#define I_CIRC  XP(I__CIRC, I__CIRC__U)
#define I_UML   XP(I__UML , I__UML__U )
#define O_ACUT  XP(O__ACUT, O__ACUT__U)
#define O_DACU  XP(O__DACU, O__DACU__U)
#define O_CIRC  XP(O__CIRC, O__CIRC__U)
#define O_UML   XP(O__UML , O__UML__U )
#define U_ACUT  XP(U__ACUT, U__ACUT__U)
#define U_DACU  XP(U__DACU, U__DACU__U)
#define U_CIRC  XP(U__CIRC, U__CIRC__U)
#define U_GRAV  XP(U__GRAV, U__GRAV__U)
#define U_UML   XP(U__UML , U__UML__U )
#define S_CARO  XP(S__CARO, S__CARO__U)
#define Z_CARO  XP(Z__CARO, Z__CARO__U)
#define __GRAV  X(DED__GRAV)
#define __ACUT  X(DED__ACUT)
#define __CIR   X(DED__CIR)
#define __UML   X(DED__UML)
#define __DACU  X(DED__DACU)
#define __CARO  X(DED__CARO)
#define DEGREE  X(DEGREE)
#define MICRO   X(MICRO)
