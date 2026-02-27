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
    M(A__ACUT    , 0x00E1) /* á */ \
    M(A__ACUT__U , 0x00C1) /* Á */ \
    M(A__CIRC    , 0x00E2) /* â */ \
    M(A__CIRC__U , 0x00C2) /* Â */ \
    M(A__GRAV    , 0x00E0) /* à */ \
    M(A__GRAV__U , 0x00C0) /* À */ \
    M(C__ACUT    , 0x0107) /* ć */ \
    M(C__ACUT__U , 0x0106) /* Ć */ \
    M(C__CARO    , 0x010D) /* č */ \
    M(C__CARO__U , 0x010C) /* Č */ \
    M(C__CDIL    , 0x00E7) /* ç */ \
    M(C__CDIL__U , 0x00C7) /* Ç */ \
    M(D__STRK    , 0x0111) /* đ */ \
    M(D__STRK__U , 0x0110) /* Đ */ \
    M(E__ACUT    , 0x00E9) /* é */ \
    M(E__ACUT__U , 0x00C9) /* É */ \
    M(E__CIRC    , 0x00EA) /* ê */ \
    M(E__CIRC__U , 0x00CA) /* Ê */ \
    M(E__GRAV    , 0x00E8) /* è */ \
    M(E__GRAV__U , 0x00C8) /* È */ \
    M(I__ACUT    , 0x00ED) /* í */ \
    M(I__ACUT__U , 0x00CD) /* Í */ \
    M(O__ACUT    , 0x00F3) /* ó */ \
    M(O__ACUT__U , 0x00D3) /* Ó */ \
    M(U__ACUT    , 0x00FA) /* ú */ \
    M(U__ACUT__U , 0x00DA) /* Ú */ \
    M(MICRO      , 0x00B5) /* µ */ \
    M(DEGREE     , 0x00B0) /* ° */ \
    M(UML_DIAER  , 0x0308) /* combining diaeresis */ \
    M(CIR_CIRC   , 0x0302) /* combining circumflex */ \
    M(GRA_GRAV   , 0x0300) /* combining grave */ \
    M(ACU_ACUT   , 0x0301) /* combining acute */ \
    M(DAC_DOUBLE , 0x030B) /* combining double acute */ \
    M(CAR_CARON  , 0x030C) /* combining caron */

// Define UCM_ENTRY macro to generate enum entries
#define UCM_ENTRY(name, code) name,

enum unicode_names {
    FOREACH_UNICODE(UCM_ENTRY)
};

#undef UCM_ENTRY

// Redefine UCM_ENTRY to generate the unicode_map entries
#define UCM_ENTRY(name, code) code,
