#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __throw_catch_compare
// Address: 0x100680 - 0x1008e4
void ps2___throw_catch_compare_0x100680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_catch_compare_0x100680");
#endif

    switch (ctx->pc) {
        case 0x100758u: goto label_100758;
        case 0x10075cu: goto label_10075c;
        case 0x100780u: goto label_100780;
        case 0x1007b8u: goto label_1007b8;
        case 0x1007d8u: goto label_1007d8;
        case 0x100810u: goto label_100810;
        case 0x1008acu: goto label_1008ac;
        default: break;
    }

    ctx->pc = 0x100680u;

    // 0x100680: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x100680u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x100684: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100684u;
    {
        const bool branch_taken_0x100684 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x100688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100684u;
            // 0x100688: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100684) {
            ctx->pc = 0x100694u;
            goto label_100694;
        }
    }
    ctx->pc = 0x10068Cu;
    // 0x10068c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x10068Cu;
    {
        const bool branch_taken_0x10068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10068Cu;
            // 0x100690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10068c) {
            ctx->pc = 0x1008DCu;
            goto label_1008dc;
        }
    }
    ctx->pc = 0x100694u;
label_100694:
    // 0x100694: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x100694u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x100698: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x100698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x10069c: 0x14e3001b  bne         $a3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x10069Cu;
    {
        const bool branch_taken_0x10069c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x10069c) {
            ctx->pc = 0x10070Cu;
            goto label_10070c;
        }
    }
    ctx->pc = 0x1006A4u;
    // 0x1006a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1006a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1006a8: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1006a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1006ac: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1006b0: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1006B0u;
    {
        const bool branch_taken_0x1006b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1006b0) {
            ctx->pc = 0x1006BCu;
            goto label_1006bc;
        }
    }
    ctx->pc = 0x1006B8u;
    // 0x1006b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1006b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1006bc:
    // 0x1006bc: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1006bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1006c0: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1006c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1006c4: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1006C4u;
    {
        const bool branch_taken_0x1006c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1006c4) {
            ctx->pc = 0x1006D0u;
            goto label_1006d0;
        }
    }
    ctx->pc = 0x1006CCu;
    // 0x1006cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1006ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1006d0:
    // 0x1006d0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1006d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1006d4: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1006d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1006d8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1006D8u;
    {
        const bool branch_taken_0x1006d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1006DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006D8u;
            // 0x1006dc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006d8) {
            ctx->pc = 0x10070Cu;
            goto label_10070c;
        }
    }
    ctx->pc = 0x1006E0u;
    // 0x1006e0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1006e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1006e4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1006e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1006e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1006E8u;
    {
        const bool branch_taken_0x1006e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1006ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006E8u;
            // 0x1006ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006e8) {
            ctx->pc = 0x100700u;
            goto label_100700;
        }
    }
    ctx->pc = 0x1006F0u;
    // 0x1006f0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1006f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1006f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1006F4u;
    {
        const bool branch_taken_0x1006f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1006f4) {
            ctx->pc = 0x100708u;
            goto label_100708;
        }
    }
    ctx->pc = 0x1006FCu;
    // 0x1006fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1006fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100700:
    // 0x100700: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x100700u;
    {
        const bool branch_taken_0x100700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100700) {
            ctx->pc = 0x1008DCu;
            goto label_1008dc;
        }
    }
    ctx->pc = 0x100708u;
label_100708:
    // 0x100708: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x100708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10070c:
    // 0x10070c: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x10070cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100710: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x100710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x100714: 0x10e30008  beq         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x100714u;
    {
        const bool branch_taken_0x100714 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x100718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100714u;
            // 0x100718: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100714) {
            ctx->pc = 0x100738u;
            goto label_100738;
        }
    }
    ctx->pc = 0x10071Cu;
    // 0x10071c: 0x10e30007  beq         $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10071Cu;
    {
        const bool branch_taken_0x10071c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x100720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10071Cu;
            // 0x100720: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10071c) {
            ctx->pc = 0x10073Cu;
            goto label_10073c;
        }
    }
    ctx->pc = 0x100724u;
    // 0x100724: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x100724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x100728: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x100728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x10072c: 0x24070056  addiu       $a3, $zero, 0x56
    ctx->pc = 0x10072cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x100730: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x100730u;
    {
        const bool branch_taken_0x100730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100730u;
            // 0x100734: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100730) {
            ctx->pc = 0x100884u;
            goto label_100884;
        }
    }
    ctx->pc = 0x100738u;
label_100738:
    // 0x100738: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x100738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10073c:
    // 0x10073c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x10073cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100740: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x100740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x100744: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x100744u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x100748: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100748u;
    {
        const bool branch_taken_0x100748 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x10074Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100748u;
            // 0x10074c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100748) {
            ctx->pc = 0x100758u;
            goto label_100758;
        }
    }
    ctx->pc = 0x100750u;
    // 0x100750: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x100750u;
    {
        const bool branch_taken_0x100750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100750u;
            // 0x100754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100750) {
            ctx->pc = 0x1008DCu;
            goto label_1008dc;
        }
    }
    ctx->pc = 0x100758u;
label_100758:
    // 0x100758: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x100758u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10075c:
    // 0x10075c: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x10075cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100760: 0x15030015  bne         $t0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x100760u;
    {
        const bool branch_taken_0x100760 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x100764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100760u;
            // 0x100764: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100760) {
            ctx->pc = 0x1007B8u;
            goto label_1007b8;
        }
    }
    ctx->pc = 0x100768u;
    // 0x100768: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x100768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x10076c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10076cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x100770: 0x1507fff9  bne         $t0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100770u;
    {
        const bool branch_taken_0x100770 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x100770) {
            ctx->pc = 0x100758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100758;
        }
    }
    ctx->pc = 0x100778u;
    // 0x100778: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x100778u;
    {
        const bool branch_taken_0x100778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10077Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100778u;
            // 0x10077c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100778) {
            ctx->pc = 0x10079Cu;
            goto label_10079c;
        }
    }
    ctx->pc = 0x100780u;
label_100780:
    // 0x100780: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x100780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x100784: 0x510b8  dsll        $v0, $a1, 2
    ctx->pc = 0x100784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 2);
    // 0x100788: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x100788u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10078c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x10078cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x100790: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x100790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x100794: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x100794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x100798: 0x6445ffd0  daddiu      $a1, $v0, -0x30
    ctx->pc = 0x100798u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_10079c:
    // 0x10079c: 0x0  nop
    ctx->pc = 0x10079cu;
    // NOP
    // 0x1007a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1007a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1007a4: 0x1447fff6  bne         $v0, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1007A4u;
    {
        const bool branch_taken_0x1007a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1007A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007A4u;
            // 0x1007a8: 0x2183c  dsll32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007a4) {
            ctx->pc = 0x100780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100780;
        }
    }
    ctx->pc = 0x1007ACu;
    // 0x1007ac: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1007acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1007b0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1007B0u;
    {
        const bool branch_taken_0x1007b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007B0u;
            // 0x1007b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007b0) {
            ctx->pc = 0x1008DCu;
            goto label_1008dc;
        }
    }
    ctx->pc = 0x1007B8u;
label_1007b8:
    // 0x1007b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1007b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007bc: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1007bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1007c0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1007c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1007c4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1007c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1007c8: 0x0  nop
    ctx->pc = 0x1007c8u;
    // NOP
    // 0x1007cc: 0x0  nop
    ctx->pc = 0x1007ccu;
    // NOP
    // 0x1007d0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1007D0u;
    {
        const bool branch_taken_0x1007d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1007d0) {
            ctx->pc = 0x1007B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1007b8;
        }
    }
    ctx->pc = 0x1007D8u;
label_1007d8:
    // 0x1007d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1007d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007dc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1007dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1007e0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1007e4: 0x0  nop
    ctx->pc = 0x1007e4u;
    // NOP
    // 0x1007e8: 0x0  nop
    ctx->pc = 0x1007e8u;
    // NOP
    // 0x1007ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1007ECu;
    {
        const bool branch_taken_0x1007ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1007ec) {
            ctx->pc = 0x1007D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1007d8;
        }
    }
    ctx->pc = 0x1007F4u;
    // 0x1007f4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1007f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1007f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1007F8u;
    {
        const bool branch_taken_0x1007f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1007FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007F8u;
            // 0x1007fc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007f8) {
            ctx->pc = 0x100808u;
            goto label_100808;
        }
    }
    ctx->pc = 0x100800u;
    // 0x100800: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x100800u;
    {
        const bool branch_taken_0x100800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100800u;
            // 0x100804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100800) {
            ctx->pc = 0x1008DCu;
            goto label_1008dc;
        }
    }
    ctx->pc = 0x100808u;
label_100808:
    // 0x100808: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x100808u;
    {
        const bool branch_taken_0x100808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100808u;
            // 0x10080c: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100808) {
            ctx->pc = 0x10075Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10075c;
        }
    }
    ctx->pc = 0x100810u;
label_100810:
    // 0x100810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100814: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x100814u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100818: 0x14690006  bne         $v1, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x100818u;
    {
        const bool branch_taken_0x100818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x10081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100818u;
            // 0x10081c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100818) {
            ctx->pc = 0x100834u;
            goto label_100834;
        }
    }
    ctx->pc = 0x100820u;
    // 0x100820: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x100820u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100824: 0x14690002  bne         $v1, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x100824u;
    {
        const bool branch_taken_0x100824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x100824) {
            ctx->pc = 0x100830u;
            goto label_100830;
        }
    }
    ctx->pc = 0x10082Cu;
    // 0x10082c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10082cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_100830:
    // 0x100830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_100834:
    // 0x100834: 0x0  nop
    ctx->pc = 0x100834u;
    // NOP
    // 0x100838: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x100838u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10083c: 0x15090003  bne         $t0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10083Cu;
    {
        const bool branch_taken_0x10083c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x10083c) {
            ctx->pc = 0x10084Cu;
            goto label_10084c;
        }
    }
    ctx->pc = 0x100844u;
    // 0x100844: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x100844u;
    {
        const bool branch_taken_0x100844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100844u;
            // 0x100848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100844) {
            ctx->pc = 0x1008DCu;
            goto label_1008dc;
        }
    }
    ctx->pc = 0x10084Cu;
label_10084c:
    // 0x10084c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x10084cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100850: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x100850u;
    {
        const bool branch_taken_0x100850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x100850) {
            ctx->pc = 0x10086Cu;
            goto label_10086c;
        }
    }
    ctx->pc = 0x100858u;
    // 0x100858: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x100858u;
    {
        const bool branch_taken_0x100858 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x100858) {
            ctx->pc = 0x100864u;
            goto label_100864;
        }
    }
    ctx->pc = 0x100860u;
    // 0x100860: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x100860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_100864:
    // 0x100864: 0x0  nop
    ctx->pc = 0x100864u;
    // NOP
    // 0x100868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10086c:
    // 0x10086c: 0x0  nop
    ctx->pc = 0x10086cu;
    // NOP
    // 0x100870: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x100870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100874: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x100874u;
    {
        const bool branch_taken_0x100874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x100874) {
            ctx->pc = 0x100884u;
            goto label_100884;
        }
    }
    ctx->pc = 0x10087Cu;
    // 0x10087c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10087Cu;
    {
        const bool branch_taken_0x10087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10087Cu;
            // 0x100880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10087c) {
            ctx->pc = 0x1008DCu;
            goto label_1008dc;
        }
    }
    ctx->pc = 0x100884u;
label_100884:
    // 0x100884: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x100884u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100888: 0x11060003  beq         $t0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x100888u;
    {
        const bool branch_taken_0x100888 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x100888) {
            ctx->pc = 0x100898u;
            goto label_100898;
        }
    }
    ctx->pc = 0x100890u;
    // 0x100890: 0x1505000c  bne         $t0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x100890u;
    {
        const bool branch_taken_0x100890 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x100890) {
            ctx->pc = 0x1008C4u;
            goto label_1008c4;
        }
    }
    ctx->pc = 0x100898u;
label_100898:
    // 0x100898: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x100898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10089c: 0x1103ffdc  beq         $t0, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x10089Cu;
    {
        const bool branch_taken_0x10089c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x10089c) {
            ctx->pc = 0x100810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100810;
        }
    }
    ctx->pc = 0x1008A4u;
    // 0x1008a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1008A4u;
    {
        const bool branch_taken_0x1008a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1008a4) {
            ctx->pc = 0x1008C4u;
            goto label_1008c4;
        }
    }
    ctx->pc = 0x1008ACu;
label_1008ac:
    // 0x1008ac: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1008ACu;
    {
        const bool branch_taken_0x1008ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1008ac) {
            ctx->pc = 0x1008BCu;
            goto label_1008bc;
        }
    }
    ctx->pc = 0x1008B4u;
    // 0x1008b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1008B4u;
    {
        const bool branch_taken_0x1008b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1008B4u;
            // 0x1008b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008b4) {
            ctx->pc = 0x1008DCu;
            goto label_1008dc;
        }
    }
    ctx->pc = 0x1008BCu;
label_1008bc:
    // 0x1008bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1008bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1008c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1008c4:
    // 0x1008c4: 0x0  nop
    ctx->pc = 0x1008c4u;
    // NOP
    // 0x1008c8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1008c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1008cc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1008d0: 0x10a3fff6  beq         $a1, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1008D0u;
    {
        const bool branch_taken_0x1008d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1008d0) {
            ctx->pc = 0x1008ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1008ac;
        }
    }
    ctx->pc = 0x1008D8u;
    // 0x1008d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1008d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1008dc:
    // 0x1008dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1008DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1008E4u;
}
