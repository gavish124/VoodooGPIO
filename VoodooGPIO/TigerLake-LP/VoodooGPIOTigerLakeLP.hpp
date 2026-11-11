//
//  VoodooGPIOTigerLakeLP.hpp
//  Tiger Lake-LP / Alder Lake-P (ACPI INTC1055) pin layout for VoodooGPIO.
//
//  Pad group layout derived from OpenBSD sys/dev/acpi/pchgpio.c:
//  Copyright (c) 2020 Mark Kettenis
//  Copyright (c) 2020 James Hastings
//  Permission to use, copy, modify, and distribute this software for any
//  purpose with or without fee is hereby granted, provided that the above
//  copyright notice and this permission notice appear in all copies.
//  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
//  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
//  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
//  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
//  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
//  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
//  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//
//  Offsets other than GPI_IE are UNVERIFIED guesses copied from Ice Lake.
//

#include "../VoodooGPIO.hpp"

#ifndef VoodooGPIOTigerLakeLP_h
#define VoodooGPIOTigerLakeLP_h

#define TGL_PAD_OWN         0x020
#define TGL_PADCFGLOCK      0x080
#define TGL_HOSTSW_OWN      0x0b0
#define TGL_GPI_IS          0x100
#define TGL_GPI_IE          0x120

#define TGL_GPP(r, s, e, g)         \
    {                               \
        .reg_num = (r),             \
        .base = (s),                \
        .size = ((e) - (s) + 1),    \
        .gpio_base = (g),           \
    }

#define TGL_COMMUNITY(b, s, e, g)               \
    {                                           \
        .barno = (b),                           \
        .padown_offset = TGL_PAD_OWN,           \
        .padcfglock_offset = TGL_PADCFGLOCK,    \
        .hostown_offset = TGL_HOSTSW_OWN,       \
        .ie_offset = TGL_GPI_IE,                \
        .pin_base = (s),                        \
        .npins = ((e) - (s) + 1),               \
        .gpps = (g),                            \
        .ngpps = ARRAY_SIZE(g),                 \
    }

static struct pinctrl_pin_desc tgllp_pins[] = {
    /* GPP_B */
    PINCTRL_PIN(0, (char *)"GPP_B0"),
    PINCTRL_PIN(1, (char *)"GPP_B1"),
    PINCTRL_PIN(2, (char *)"GPP_B2"),
    PINCTRL_PIN(3, (char *)"GPP_B3"),
    PINCTRL_PIN(4, (char *)"GPP_B4"),
    PINCTRL_PIN(5, (char *)"GPP_B5"),
    PINCTRL_PIN(6, (char *)"GPP_B6"),
    PINCTRL_PIN(7, (char *)"GPP_B7"),
    PINCTRL_PIN(8, (char *)"GPP_B8"),
    PINCTRL_PIN(9, (char *)"GPP_B9"),
    PINCTRL_PIN(10, (char *)"GPP_B10"),
    PINCTRL_PIN(11, (char *)"GPP_B11"),
    PINCTRL_PIN(12, (char *)"GPP_B12"),
    PINCTRL_PIN(13, (char *)"GPP_B13"),
    PINCTRL_PIN(14, (char *)"GPP_B14"),
    PINCTRL_PIN(15, (char *)"GPP_B15"),
    PINCTRL_PIN(16, (char *)"GPP_B16"),
    PINCTRL_PIN(17, (char *)"GPP_B17"),
    PINCTRL_PIN(18, (char *)"GPP_B18"),
    PINCTRL_PIN(19, (char *)"GPP_B19"),
    PINCTRL_PIN(20, (char *)"GPP_B20"),
    PINCTRL_PIN(21, (char *)"GPP_B21"),
    PINCTRL_PIN(22, (char *)"GPP_B22"),
    PINCTRL_PIN(23, (char *)"GPP_B23"),
    PINCTRL_PIN(24, (char *)"GPP_B24"),
    PINCTRL_PIN(25, (char *)"GPP_B25"),
    /* GPP_T */
    PINCTRL_PIN(26, (char *)"GPP_T0"),
    PINCTRL_PIN(27, (char *)"GPP_T1"),
    PINCTRL_PIN(28, (char *)"GPP_T2"),
    PINCTRL_PIN(29, (char *)"GPP_T3"),
    PINCTRL_PIN(30, (char *)"GPP_T4"),
    PINCTRL_PIN(31, (char *)"GPP_T5"),
    PINCTRL_PIN(32, (char *)"GPP_T6"),
    PINCTRL_PIN(33, (char *)"GPP_T7"),
    PINCTRL_PIN(34, (char *)"GPP_T8"),
    PINCTRL_PIN(35, (char *)"GPP_T9"),
    PINCTRL_PIN(36, (char *)"GPP_T10"),
    PINCTRL_PIN(37, (char *)"GPP_T11"),
    PINCTRL_PIN(38, (char *)"GPP_T12"),
    PINCTRL_PIN(39, (char *)"GPP_T13"),
    PINCTRL_PIN(40, (char *)"GPP_T14"),
    PINCTRL_PIN(41, (char *)"GPP_T15"),
    /* GPP_A */
    PINCTRL_PIN(42, (char *)"GPP_A0"),
    PINCTRL_PIN(43, (char *)"GPP_A1"),
    PINCTRL_PIN(44, (char *)"GPP_A2"),
    PINCTRL_PIN(45, (char *)"GPP_A3"),
    PINCTRL_PIN(46, (char *)"GPP_A4"),
    PINCTRL_PIN(47, (char *)"GPP_A5"),
    PINCTRL_PIN(48, (char *)"GPP_A6"),
    PINCTRL_PIN(49, (char *)"GPP_A7"),
    PINCTRL_PIN(50, (char *)"GPP_A8"),
    PINCTRL_PIN(51, (char *)"GPP_A9"),
    PINCTRL_PIN(52, (char *)"GPP_A10"),
    PINCTRL_PIN(53, (char *)"GPP_A11"),
    PINCTRL_PIN(54, (char *)"GPP_A12"),
    PINCTRL_PIN(55, (char *)"GPP_A13"),
    PINCTRL_PIN(56, (char *)"GPP_A14"),
    PINCTRL_PIN(57, (char *)"GPP_A15"),
    PINCTRL_PIN(58, (char *)"GPP_A16"),
    PINCTRL_PIN(59, (char *)"GPP_A17"),
    PINCTRL_PIN(60, (char *)"GPP_A18"),
    PINCTRL_PIN(61, (char *)"GPP_A19"),
    PINCTRL_PIN(62, (char *)"GPP_A20"),
    PINCTRL_PIN(63, (char *)"GPP_A21"),
    PINCTRL_PIN(64, (char *)"GPP_A22"),
    PINCTRL_PIN(65, (char *)"GPP_A23"),
    PINCTRL_PIN(66, (char *)"GPP_A24"),
    /* GPP_S */
    PINCTRL_PIN(67, (char *)"GPP_S0"),
    PINCTRL_PIN(68, (char *)"GPP_S1"),
    PINCTRL_PIN(69, (char *)"GPP_S2"),
    PINCTRL_PIN(70, (char *)"GPP_S3"),
    PINCTRL_PIN(71, (char *)"GPP_S4"),
    PINCTRL_PIN(72, (char *)"GPP_S5"),
    PINCTRL_PIN(73, (char *)"GPP_S6"),
    PINCTRL_PIN(74, (char *)"GPP_S7"),
    /* GPP_H */
    PINCTRL_PIN(75, (char *)"GPP_H0"),
    PINCTRL_PIN(76, (char *)"GPP_H1"),
    PINCTRL_PIN(77, (char *)"GPP_H2"),
    PINCTRL_PIN(78, (char *)"GPP_H3"),
    PINCTRL_PIN(79, (char *)"GPP_H4"),
    PINCTRL_PIN(80, (char *)"GPP_H5"),
    PINCTRL_PIN(81, (char *)"GPP_H6"),
    PINCTRL_PIN(82, (char *)"GPP_H7"),
    PINCTRL_PIN(83, (char *)"GPP_H8"),
    PINCTRL_PIN(84, (char *)"GPP_H9"),
    PINCTRL_PIN(85, (char *)"GPP_H10"),
    PINCTRL_PIN(86, (char *)"GPP_H11"),
    PINCTRL_PIN(87, (char *)"GPP_H12"),
    PINCTRL_PIN(88, (char *)"GPP_H13"),
    PINCTRL_PIN(89, (char *)"GPP_H14"),
    PINCTRL_PIN(90, (char *)"GPP_H15"),
    PINCTRL_PIN(91, (char *)"GPP_H16"),
    PINCTRL_PIN(92, (char *)"GPP_H17"),
    PINCTRL_PIN(93, (char *)"GPP_H18"),
    PINCTRL_PIN(94, (char *)"GPP_H19"),
    PINCTRL_PIN(95, (char *)"GPP_H20"),
    PINCTRL_PIN(96, (char *)"GPP_H21"),
    PINCTRL_PIN(97, (char *)"GPP_H22"),
    PINCTRL_PIN(98, (char *)"GPP_H23"),
    /* GPP_D */
    PINCTRL_PIN(99, (char *)"GPP_D0"),
    PINCTRL_PIN(100, (char *)"GPP_D1"),
    PINCTRL_PIN(101, (char *)"GPP_D2"),
    PINCTRL_PIN(102, (char *)"GPP_D3"),
    PINCTRL_PIN(103, (char *)"GPP_D4"),
    PINCTRL_PIN(104, (char *)"GPP_D5"),
    PINCTRL_PIN(105, (char *)"GPP_D6"),
    PINCTRL_PIN(106, (char *)"GPP_D7"),
    PINCTRL_PIN(107, (char *)"GPP_D8"),
    PINCTRL_PIN(108, (char *)"GPP_D9"),
    PINCTRL_PIN(109, (char *)"GPP_D10"),
    PINCTRL_PIN(110, (char *)"GPP_D11"),
    PINCTRL_PIN(111, (char *)"GPP_D12"),
    PINCTRL_PIN(112, (char *)"GPP_D13"),
    PINCTRL_PIN(113, (char *)"GPP_D14"),
    PINCTRL_PIN(114, (char *)"GPP_D15"),
    PINCTRL_PIN(115, (char *)"GPP_D16"),
    PINCTRL_PIN(116, (char *)"GPP_D17"),
    PINCTRL_PIN(117, (char *)"GPP_D18"),
    PINCTRL_PIN(118, (char *)"GPP_D19"),
    PINCTRL_PIN(119, (char *)"GPP_D20"),
    /* GPP_U */
    PINCTRL_PIN(120, (char *)"GPP_U0"),
    PINCTRL_PIN(121, (char *)"GPP_U1"),
    PINCTRL_PIN(122, (char *)"GPP_U2"),
    PINCTRL_PIN(123, (char *)"GPP_U3"),
    PINCTRL_PIN(124, (char *)"GPP_U4"),
    PINCTRL_PIN(125, (char *)"GPP_U5"),
    PINCTRL_PIN(126, (char *)"GPP_U6"),
    PINCTRL_PIN(127, (char *)"GPP_U7"),
    PINCTRL_PIN(128, (char *)"GPP_U8"),
    PINCTRL_PIN(129, (char *)"GPP_U9"),
    PINCTRL_PIN(130, (char *)"GPP_U10"),
    PINCTRL_PIN(131, (char *)"GPP_U11"),
    PINCTRL_PIN(132, (char *)"GPP_U12"),
    PINCTRL_PIN(133, (char *)"GPP_U13"),
    PINCTRL_PIN(134, (char *)"GPP_U14"),
    PINCTRL_PIN(135, (char *)"GPP_U15"),
    PINCTRL_PIN(136, (char *)"GPP_U16"),
    PINCTRL_PIN(137, (char *)"GPP_U17"),
    PINCTRL_PIN(138, (char *)"GPP_U18"),
    PINCTRL_PIN(139, (char *)"GPP_U19"),
    PINCTRL_PIN(140, (char *)"GPP_U20"),
    PINCTRL_PIN(141, (char *)"GPP_U21"),
    PINCTRL_PIN(142, (char *)"GPP_U22"),
    PINCTRL_PIN(143, (char *)"GPP_U23"),
    /* GPP_C */
    PINCTRL_PIN(171, (char *)"GPP_C0"),
    PINCTRL_PIN(172, (char *)"GPP_C1"),
    PINCTRL_PIN(173, (char *)"GPP_C2"),
    PINCTRL_PIN(174, (char *)"GPP_C3"),
    PINCTRL_PIN(175, (char *)"GPP_C4"),
    PINCTRL_PIN(176, (char *)"GPP_C5"),
    PINCTRL_PIN(177, (char *)"GPP_C6"),
    PINCTRL_PIN(178, (char *)"GPP_C7"),
    PINCTRL_PIN(179, (char *)"GPP_C8"),
    PINCTRL_PIN(180, (char *)"GPP_C9"),
    PINCTRL_PIN(181, (char *)"GPP_C10"),
    PINCTRL_PIN(182, (char *)"GPP_C11"),
    PINCTRL_PIN(183, (char *)"GPP_C12"),
    PINCTRL_PIN(184, (char *)"GPP_C13"),
    PINCTRL_PIN(185, (char *)"GPP_C14"),
    PINCTRL_PIN(186, (char *)"GPP_C15"),
    PINCTRL_PIN(187, (char *)"GPP_C16"),
    PINCTRL_PIN(188, (char *)"GPP_C17"),
    PINCTRL_PIN(189, (char *)"GPP_C18"),
    PINCTRL_PIN(190, (char *)"GPP_C19"),
    PINCTRL_PIN(191, (char *)"GPP_C20"),
    PINCTRL_PIN(192, (char *)"GPP_C21"),
    PINCTRL_PIN(193, (char *)"GPP_C22"),
    PINCTRL_PIN(194, (char *)"GPP_C23"),
    /* GPP_F */
    PINCTRL_PIN(195, (char *)"GPP_F0"),
    PINCTRL_PIN(196, (char *)"GPP_F1"),
    PINCTRL_PIN(197, (char *)"GPP_F2"),
    PINCTRL_PIN(198, (char *)"GPP_F3"),
    PINCTRL_PIN(199, (char *)"GPP_F4"),
    PINCTRL_PIN(200, (char *)"GPP_F5"),
    PINCTRL_PIN(201, (char *)"GPP_F6"),
    PINCTRL_PIN(202, (char *)"GPP_F7"),
    PINCTRL_PIN(203, (char *)"GPP_F8"),
    PINCTRL_PIN(204, (char *)"GPP_F9"),
    PINCTRL_PIN(205, (char *)"GPP_F10"),
    PINCTRL_PIN(206, (char *)"GPP_F11"),
    PINCTRL_PIN(207, (char *)"GPP_F12"),
    PINCTRL_PIN(208, (char *)"GPP_F13"),
    PINCTRL_PIN(209, (char *)"GPP_F14"),
    PINCTRL_PIN(210, (char *)"GPP_F15"),
    PINCTRL_PIN(211, (char *)"GPP_F16"),
    PINCTRL_PIN(212, (char *)"GPP_F17"),
    PINCTRL_PIN(213, (char *)"GPP_F18"),
    PINCTRL_PIN(214, (char *)"GPP_F19"),
    PINCTRL_PIN(215, (char *)"GPP_F20"),
    PINCTRL_PIN(216, (char *)"GPP_F21"),
    PINCTRL_PIN(217, (char *)"GPP_F22"),
    PINCTRL_PIN(218, (char *)"GPP_F23"),
    PINCTRL_PIN(219, (char *)"GPP_F24"),
    /* GPP_E */
    PINCTRL_PIN(226, (char *)"GPP_E0"),
    PINCTRL_PIN(227, (char *)"GPP_E1"),
    PINCTRL_PIN(228, (char *)"GPP_E2"),
    PINCTRL_PIN(229, (char *)"GPP_E3"),
    PINCTRL_PIN(230, (char *)"GPP_E4"),
    PINCTRL_PIN(231, (char *)"GPP_E5"),
    PINCTRL_PIN(232, (char *)"GPP_E6"),
    PINCTRL_PIN(233, (char *)"GPP_E7"),
    PINCTRL_PIN(234, (char *)"GPP_E8"),
    PINCTRL_PIN(235, (char *)"GPP_E9"),
    PINCTRL_PIN(236, (char *)"GPP_E10"),
    PINCTRL_PIN(237, (char *)"GPP_E11"),
    PINCTRL_PIN(238, (char *)"GPP_E12"),
    PINCTRL_PIN(239, (char *)"GPP_E13"),
    PINCTRL_PIN(240, (char *)"GPP_E14"),
    PINCTRL_PIN(241, (char *)"GPP_E15"),
    PINCTRL_PIN(242, (char *)"GPP_E16"),
    PINCTRL_PIN(243, (char *)"GPP_E17"),
    PINCTRL_PIN(244, (char *)"GPP_E18"),
    PINCTRL_PIN(245, (char *)"GPP_E19"),
    PINCTRL_PIN(246, (char *)"GPP_E20"),
    PINCTRL_PIN(247, (char *)"GPP_E21"),
    PINCTRL_PIN(248, (char *)"GPP_E22"),
    PINCTRL_PIN(249, (char *)"GPP_E23"),
    PINCTRL_PIN(250, (char *)"GPP_E24"),
    /* GPP_R */
    PINCTRL_PIN(260, (char *)"GPP_R0"),
    PINCTRL_PIN(261, (char *)"GPP_R1"),
    PINCTRL_PIN(262, (char *)"GPP_R2"),
    PINCTRL_PIN(263, (char *)"GPP_R3"),
    PINCTRL_PIN(264, (char *)"GPP_R4"),
    PINCTRL_PIN(265, (char *)"GPP_R5"),
    PINCTRL_PIN(266, (char *)"GPP_R6"),
    PINCTRL_PIN(267, (char *)"GPP_R7"),
};

static unsigned int tgllp_dummy_pins[] = { 0 };

static struct intel_pingroup tgllp_groups[] = {
    PIN_GROUP((char *)"dummy_grp", tgllp_dummy_pins, 1),
};

static char * const tgllp_dummy_groups[] = { (char *)"dummy_grp" };

static struct intel_function tgllp_functions[] = {
    FUNCTION((char *)"dummy", tgllp_dummy_groups),
};

static struct intel_padgroup tgllp_community0_gpps[] = {
    TGL_GPP(0, 0, 25, 0),    /* GPP_B */
    TGL_GPP(1, 26, 41, 32),    /* GPP_T */
    TGL_GPP(2, 42, 66, 64),    /* GPP_A */
};

static struct intel_padgroup tgllp_community1_gpps[] = {
    TGL_GPP(0, 67, 74, 96),    /* GPP_S */
    TGL_GPP(1, 75, 98, 128),    /* GPP_H */
    TGL_GPP(2, 99, 119, 160),    /* GPP_D */
    TGL_GPP(3, 120, 143, 192),    /* GPP_U */
};

static struct intel_padgroup tgllp_community2_gpps[] = {
    TGL_GPP(0, 171, 194, 256),    /* GPP_C */
    TGL_GPP(1, 195, 219, 288),    /* GPP_F */
    TGL_GPP(3, 226, 250, 320),    /* GPP_E */
};

static struct intel_padgroup tgllp_community3_gpps[] = {
    TGL_GPP(0, 260, 267, 352),    /* GPP_R */
};

static struct intel_community tgllp_communities[] = {
    TGL_COMMUNITY(0, 0, 66, tgllp_community0_gpps),
    TGL_COMMUNITY(1, 67, 143, tgllp_community1_gpps),
    TGL_COMMUNITY(2, 171, 250, tgllp_community2_gpps),
    TGL_COMMUNITY(3, 260, 267, tgllp_community3_gpps),
};

class VoodooGPIOTigerLakeLP : public VoodooGPIO {
    OSDeclareDefaultStructors(VoodooGPIOTigerLakeLP);

    bool start(IOService *provider) override;
};

#endif /* VoodooGPIOTigerLakeLP_h */
