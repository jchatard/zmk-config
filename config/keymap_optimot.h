/* Copyright 2020
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ $ │ « │ » │ " │ - │ + │ * │ / │ = │ ( │ ) │ @ │ # │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ À │ J │ O │ É │ B │ F │ D │ L │ ' │ Q │ X │ Ç │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ I │ E │ U │ , │ P │ T │ S │ R │ N │ ^ │ Z │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ K │ Y │ È │ . │ W │   │ G │ C │ M │ H │ V │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘

 */
// Row 1
#define OP_DLR  GRAVE // $
#define OP_LDAQ N1    // «
#define OP_RDAQ N2    // »
#define OP_DQUO N3    // "
#define OP_MIN  N4    // -
#define OP_PLUS N5    // +
#define OP_ASTR N6    // *
#define OP_SLSH N7    // /
#define OP_EQL  N8    // =
#define OP_LPRN N9    // (
#define OP_RPRN N0    // )
#define OP_AT   MINUS // @
#define OP_HASH EQUAL // #
// Row 2
#define OP_AGRV Q     // À
#define OP_J    W     // J
#define OP_O    E     // O
#define OP_EACU R     // É
#define OP_B    T     // B
#define OP_F    Y     // F
#define OP_D    U     // D
#define OP_L    I     // L
#define OP_QUOT O     // '
#define OP_Q    P     // Q
#define OP_X    LBKT  // X
#define OP_Z    RBKT  // Z
// Row 3
#define OP_A    A     // A
#define OP_I    S     // I
#define OP_E    D     // E
#define OP_U    F     // U
#define OP_COMM G     // ,
#define OP_P    H     // P
#define OP_T    J     // T
#define OP_S    K     // S
#define OP_R    L     // R
#define OP_N    SEMI  // N
#define OP_CIR  SQT   // ^
#define OP_CCED BSLH  // Ç
// Row 4
#define OP_K    Z     // K
#define OP_Y    X     // Y
#define OP_EGRV C     // È
#define OP_DOT  V     // .
#define OP_W    B     // W
#define OP_G    N     // G
#define OP_C    M     // C
#define OP_M    COMMA // M
#define OP_H    DOT   // H
#define OP_V    FSLH  // V

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ € │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ _ │ º │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │ ? │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │ ; │   │   │   │   │   │ ! │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │ : │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_EURO  LS(OP_DLR)  // €
#define OP_1     LS(OP_LDAQ) // 1
#define OP_2     LS(OP_RDAQ) // 2
#define OP_3     LS(OP_DQUO) // 3
#define OP_4     LS(OP_MIN)  // 4
#define OP_5     LS(OP_PLUS) // 5
#define OP_6     LS(OP_ASTR) // 6
#define OP_7     LS(OP_SLSH) // 7
#define OP_8     LS(OP_EQL)  // 8
#define OP_9     LS(OP_LPRN) // 9
#define OP_0     LS(OP_RPRN) // 0
#define OP_UNDS  LS(OP_AT)   // _
#define OP_DEGRE LA(OP_HASH) // º
// Row 2
#define OP_QUES LS(OP_QUOT) // ?
// Row 3
#define OP_SCLN LS(OP_COMM) // ;
#define OP_EXL  LS(OP_CIR)  // !
// Row 4
#define OP_COLN LS(OP_DOT)  // :
// Row 5
#define OP_NBSP LS(SPACE)  //   (non-breaking space)

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¤ │ “ │ ” │ „ │ [ │ ] │ @ │ ± │ − │ ≠ │ \ │ × │ ° │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ < │ > │ œ │ ´ │ — │ – │ { │ } │ ¿ │ ° │ | │ ➼ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ æ │ ¨ │ ᵉ │ ù │ ’ │ ` │ & │ ∞ │ L │ ~ │ ¡ │ – │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ̸ │ ̣ │ ` │ … │ • │   │ µ │  ̦ │ ¯ │ ˘ │ ˇ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │           _            │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_CURR LA(OP_DLR)  // ¤
#define OP_LDQU LA(OP_LDAQ) // “
#define OP_RDQU LA(OP_RDAQ) // ”
#define OP_DLQU LA(OP_DQUO) // „
#define OP_LBRC LA(OP_LPRN) // [
#define OP_RBRC LA(OP_RPRN) // ]
#define OP_PLMN LA(OP_PLUS) // ±
#define OP_MMNS LA(OP_MIN)  // −
#define OP_NEQL LA(OP_EQL)  // ≠
#define OP_BSLS LA(OP_SLSH) // \ (backslash)
#define OP_MUL  LA(OP_ASTR) // ×
#define OP_DEG  LA(OP_HASH) // °
// Row 2
#define OP_LABK LA(OP_AGRV) // <
#define OP_RABK LA(OP_J)    // >
#define OP_OE   LA(OP_O)    // Œ
#define OP_ACUT LA(OP_EACU) // ´ (dead)
#define OP_MDSH LA(OP_B)    // —
#define OP_NDSH LA(OP_F)    // –
#define OP_LCBR LA(OP_D)    // {
#define OP_RCBR LA(OP_L)    // }
#define OP_IQUE LA(OP_QUOT) // ¿
#define OP_RNGA LA(OP_Q)    // °
#define OP_PIPE LA(OP_X)    // |
#define OP_WTRA LA(OP_Z)    // ➼
// Row 3
#define OP_AE   LA(OP_A)    // Æ
#define OP_DIAE LA(OP_I)    // ¨ (dead)
#define OP_LIGA LA(OP_E)    // ᵉ
#define OP_UGRV LA(OP_U)    // ù
#define OP_RSQU LA(OP_COMM) // ’
#define OP_LSQU LA(OP_P)    // `
#define OP_AMPR LA(OP_T)    // &
#define OP_INFI LA(OP_S)    // ∞
#define OP_L2   LA(OP_R)    // L @fixme Sorte de L étrange
#define OP_DTIL LA(OP_N)    // ~ (dead)
#define OP_IEXL LA(OP_CIR)  // ¡

// Row 4
#define OP_BARR LA(OP_K)    //  ̸
#define OP_DOTB LA(OP_Y)    //  ̣
#define OP_GRV  LA(OP_EGRV) // `
#define OP_ELLP LA(OP_DOT)  // …
#define OP_BULL LA(OP_W)    // •
#define OP_DGRK LA(OP_G)    // µ (dead)
#define OP_DCMM LA(OP_C)    //  ̦
#define OP_MACR LA(OP_M)    // ¯
#define OP_BREV LA(OP_H)    // ˘ (dead)
#define OP_CARN LA(OP_V)    // ˇ (dead)


/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ © │ ¼ │ ½ │ ¾ │ ⅓ │ ⅔ │ ′ │ ″ │ ‑ │ ≈ │ ÷ │ ‾ │ ª │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ⩽ │ ⩾ │ Œ │ § │ ¶ │ ✦ │ ♠ │ ♥ │ ♦ │ ♣ │ ↪ │ ↩ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Æ │ ̛ │ ̉ │ Ù │ ✓ │ ✻ │ ⬅│ ⬇ │ ⬆│ ➡ │ ⸮ │ 🄯 │   │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ⎈ │ ⌥ │ ⌘ │ · │ ✗ │   │ ✣ │ † │ ‡ │ ® │ ™ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_COPY LS(LA(OP_DLR))  // ©
#define OP_QRTR LS(LA(OP_LDAQ)) // ¼
#define OP_HALF LS(LA(OP_RDAQ)) // ½
#define OP_TQTR LS(LA(OP_DQUO)) // ¾
#define OP_OTRD LS(LA(OP_LPRN)) // ⅓
#define OP_TTRD LS(LA(OP_RPRN)) // ⅔
#define OP_PRIM LS(LA(OP_PERC)) // ′
#define OP_DPRM LS(LA(OP_PLUS)) // ″
#define OP_NBHY LS(LA(OP_MIN))  // ‑
#define OP_AEQL LS(LA(OP_EQL))  // ≈
#define OP_DIV  LS(LA(OP_SLSH)) // ÷
#define OP_OVER LS(LA(OP_ASTR)) // ‾
#define OP_ORDI LS(LA(OP_HASH)) // ª
// Row 2
#define OP_LEQL LS(LA(OP_AGRV)) // ⩽
#define OP_GEQL LS(LA(OP_J))    // ⩾
#define OP_SECT LS(LA(OP_EACU)) // §
#define OP_PARA LS(LA(OP_B))    // ¶
#define OP_FSTA LS(LA(OP_F))    // ✦
#define OP_SPAD LS(LA(OP_D))    // ♠
#define OP_HEAR LS(LA(OP_L))    // ♥
#define OP_DIAM LS(LA(OP_QUOT)) // ♦
#define OP_CLU  LS(LA(OP_Q))    // ♣
#define OP_RWAR LS(LA(OP_X))    // ↪
#define OP_LWAR LS(LA(OP_CCED)) // ↩
// Row 3
#define OP_HORN LS(LA(OP_I)    //  ̛ (dead)
#define OP_HOKA LS(LA(OP_E)    //  ̉ (dead)
#define OP_CHEC LS(LA(OP_COMM) // ✓
#define OP_TSAS LS(LA(OP_P)    // ✻
#define OP_LWBA LS(LA(OP_T)    // ⬅
#define OP_DWBA LS(LA(OP_S)    // ⬇
#define OP_UWBA LS(LA(OP_R)    // ⬆
#define OP_RWBA LS(LA(OP_N)    // ➡
#define OP_RQUE LS(LA(OP_CIR)  // ⸮

// Row 4
#define OP_HELM LS(LA(OP_K))    // ⎈
#define OP_OPTI LS(LA(OP_Y))    // ⌥
#define OP_PINT LS(LA(OP_EGRV)) // ⌘
#define OP_MDDT LS(LA(OP_DOT))  // ·
#define OP_BALX LS(LA(OP_W))    // ✗
#define OP_FBAS LS(LA(OP_G))    // ✣
#define OP_DAGG LS(LA(OP_C))    // †
#define OP_DDAG LS(LA(OP_M))    // ‡
#define OP_REGD LS(LA(OP_H))    // ®

// Row 5
#define OP_NNBS LS(LA(SPC))  //   (narrow non-breaking space)
#define OP_PERC LS(OP_HASH)  // %
