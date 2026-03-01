#pragma once
#include "quantum/unicode/unicode.h"

/* -----------------------------------------------------------------
   List of Unicode symbols – each entry is (NAME, CODEPOINT)
   ----------------------------------------------------------------- */
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
    M(UMU,   0x039C) /* Μ */ \
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
    M(A__ACUT    , 0x00E1) \
    M(A__ACUT__U , 0x00C1) \
    M(A__CIRC    , 0x00E2) \
    M(A__CIRC__U , 0x00C2) \
    M(A__GRAV    , 0x00E0) \
    M(A__GRAV__U , 0x00C0) \
    M(C__ACUT    , 0x0107) \
    M(C__ACUT__U , 0x0106) \
    M(C__CARO    , 0x010D) \
    M(C__CARO__U , 0x010C) \
    M(C__CDIL    , 0x00E7) \
    M(C__CDIL__U , 0x00C7) \
    M(D__CARO    , 0x010E) \
    M(D__CARO__U , 0x010F) \
    M(D__STRK    , 0x0111) \
    M(D__STRK__U , 0x0110) \
    M(E__ACUT    , 0x00E9) \
    M(E__ACUT__U , 0x00C9) \
    M(E__GRAV    , 0x00E8) \
    M(E__GRAV__U , 0x00C8) \
    M(E__CIRC    , 0x00EA) \
    M(E__CIRC__U , 0x00CA) \
    M(I__ACUT    , 0x00ED) \
    M(I__ACUT__U , 0x00CD) \
    M(I__CIRC    , 0x00EE) \
    M(I__CIRC__U , 0x00CE) \
    M(I__UML     , 0x00EF) \
    M(I__UML__U  , 0x00CF) \
    M(O__ACUT    , 0x00F3) \
    M(O__ACUT__U , 0x00D3) \
    M(O__DACU    , 0x0151) \
    M(O__DACU__U , 0x0150) \
    M(O__CIRC    , 0x00F4) \
    M(O__CIRC__U , 0x00D4) \
    M(O__UML     , 0x00F6) \
    M(O__UML__U  , 0x00DC) \
    M(U__ACUT    , 0x00F9) \
    M(U__ACUT__U , 0x00D9) \
    M(U__DACU    , 0x0171) \
    M(U__DACU__U , 0x0170) \
    M(U__CIRC    , 0x00FB) \
    M(U__CIRC__U , 0x00DB) \
    M(U__GRAV    , 0x00F9) \
    M(U__GRAV__U , 0x00D9) \
    M(U__UML     , 0x00FC) \
    M(U__UML__U  , 0x00DC) \
    M(S__CARO    , 0x0161) \
    M(S__CARO__U , 0x0160) \
    M(Z__CARO    , 0x017E) \
    M(Z__CARO__U , 0x017D) \
    M(DED__GRAV  , 0x0300) \
    M(DED__ACUT  , 0x0301) \
    M(DED__CIR   , 0x0302) \
    M(DED__UML   , 0x0308) \
    M(DED__DACU  , 0x030B) \
    M(DED__CARO  , 0x030C) \
    M(DEGREE     , 0x00B0) \
    M(MICRO      , 0x00B5)


enum unicode_names {
#define ENUM_ENTRY(name, code) name,
    FOREACH_UNICODE(ENUM_ENTRY)
#undef ENUM_ENTRY
};

const uint32_t PROGMEM unicode_map[] = {
#define MAP_ENTRY(name, code) [name] = code,
    FOREACH_UNICODE(MAP_ENTRY)
#undef MAP_ENTRY
};

#ifdef UNICODEMAP_ENABLE

#define ALPHA  X(LALP)
#define BETA   X(LBET)
#define GAMMA  X(LGAM)
#define DELTA  X(LDEL)
#define EPSLN  X(LEPS)
#define ETA    X(LETA)
#define THETA  X(LTHE)
#define LAMBD  X(LLAM)
#define GMU    X(LMU)
#define PI     X(LPI)
#define RHO    X(LRHO)
#define SIGMA  X(LSIG)
#define TAU    X(LTAU)
#define PHI    X(LPHI)
#define OMEGA  X(LOME)

#define A_ACUT  X(A__ACUT)
#define A_CIRC  X(A__CIRC)
#define A_GRAV  X(A__GRAV)

#define C_ACUT  X(C__ACUT)
#define C_CARO  X(C__CARO)
#define C_CDIL  X(C__CDIL)

#define D_CARO  X(D__CARO)
#define D_STRK  X(D__STRK)

#define E_ACUT  X(E__ACUT)
#define E_CIRC  X(E__CIRC)
#define E_GRAV  X(E__GRAV)

#define I_ACUT  X(I__ACUT)
#define I_CIRC  X(I__CIRC)
#define I_UML   X(I__UML)

#define O_ACUT  X(O__ACUT)
#define O_DACU  X(O__DACU)
#define O_CIRC  X(O__CIRC)
#define O_UML   X(O__UML)

#define U_ACUT  X(U__ACUT)
#define U_DACU  X(U__DACU)
#define U_CIRC  X(U__CIRC)
#define U_GRAV  X(U__GRAV)
#define U_UML   X(U__UML)

#define S_CARO  X(S__CARO)
#define Z_CARO  X(Z__CARO)

#define E_ACUT_U  X(E__ACUT__U)
#define E_CIRC_U  X(E__CIRC__U)
#define E_GRAV_U  X(E__GRAV__U)

#define A_ACUT_U  X(A__ACUT__U)
#define A_CIRC_U  X(A__CIRC__U)
#define A_GRAV_U  X(A__GRAV__U)

#define C_ACUT_U  X(C__ACUT__U)
#define C_CARO_U  X(C__CARO__U)
#define C_CDIL_U  X(C__CDIL__U)

#define D_CARO_U  X(D__CARO__U)
#define D_STRK_U  X(D__STRK__U)

#define I_ACUT_U  X(I__ACUT__U)
#define I_CIRC_U  X(I__CIRC__U)
#define I_UML_U   X(I__UML__U)

#define O_ACUT_U  X(O__ACUT__U)
#define O_DACU_U  X(O__DACU__U)
#define O_CIRC_U  X(O__CIRC__U)
#define O_UML_U   X(O__UML__U)

#define U_ACUT_U  X(U__ACUT__U)
#define U_DACU_U  X(U__DACU__U)
#define U_CIRC_U  X(U__CIRC__U)
#define U_GRAV_U  X(U__GRAV__U)
#define U_UML_U   X(U__UML__U)

#define S_CARO_U  X(S__CARO__U)
#define Z_CARO_U  X(Z__CARO__U)

#define DEGREE  X(DEGREE)
#define MICRO   X(MICRO)

#endif


void keyboard_post_init_user(void) {
    set_unicode_input_mode(UNICODE_MODE_LINUX);
}
