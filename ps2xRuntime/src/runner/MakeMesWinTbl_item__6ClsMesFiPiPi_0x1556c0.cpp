#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWinTbl_item__6ClsMesFiPiPi
// Address: 0x1556c0 - 0x155c6c
void MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWinTbl_item__6ClsMesFiPiPi_0x1556c0");
#endif

    switch (ctx->pc) {
        case 0x15585cu: goto label_15585c;
        case 0x155870u: goto label_155870;
        case 0x155874u: goto label_155874;
        case 0x1558bcu: goto label_1558bc;
        case 0x15592cu: goto label_15592c;
        case 0x15596cu: goto label_15596c;
        case 0x155980u: goto label_155980;
        case 0x155994u: goto label_155994;
        case 0x1559a0u: goto label_1559a0;
        case 0x1559ccu: goto label_1559cc;
        case 0x155a78u: goto label_155a78;
        case 0x155a84u: goto label_155a84;
        case 0x155adcu: goto label_155adc;
        case 0x155b5cu: goto label_155b5c;
        case 0x155b68u: goto label_155b68;
        case 0x155b78u: goto label_155b78;
        case 0x155bbcu: goto label_155bbc;
        case 0x155bd4u: goto label_155bd4;
        case 0x155becu: goto label_155bec;
        case 0x155c14u: goto label_155c14;
        default: break;
    }

    ctx->pc = 0x1556c0u;

    // 0x1556c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1556c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1556c4: 0x3401fb00  ori         $at, $zero, 0xFB00
    ctx->pc = 0x1556c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64256);
    // 0x1556c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1556c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1556cc: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1556ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1556d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1556d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1556d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1556d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1556d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1556d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1556dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1556dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1556e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1556e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1556e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1556e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1556e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1556e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1556ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1556ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1556f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1556F0u;
    {
        const bool branch_taken_0x1556f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556F0u;
            // 0x1556f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556f0) {
            ctx->pc = 0x155700u;
            goto label_155700;
        }
    }
    ctx->pc = 0x1556F8u;
    // 0x1556f8: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x1556F8u;
    {
        const bool branch_taken_0x1556f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556F8u;
            // 0x1556fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556f8) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x155700u;
label_155700:
    // 0x155700: 0x3401fc00  ori         $at, $zero, 0xFC00
    ctx->pc = 0x155700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x155704: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x155704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x155708: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x155708u;
    {
        const bool branch_taken_0x155708 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15570Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155708u;
            // 0x15570c: 0x24a38000  addiu       $v1, $a1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155708) {
            ctx->pc = 0x155718u;
            goto label_155718;
        }
    }
    ctx->pc = 0x155710u;
    // 0x155710: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x155710u;
    {
        const bool branch_taken_0x155710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155710u;
            // 0x155714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155710) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x155718u;
label_155718:
    // 0x155718: 0x240200e7  addiu       $v0, $zero, 0xE7
    ctx->pc = 0x155718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x15571c: 0x24638500  addiu       $v1, $v1, -0x7B00
    ctx->pc = 0x15571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935808));
    // 0x155720: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x155720u;
    {
        const bool branch_taken_0x155720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155720u;
            // 0x155724: 0x240200e8  addiu       $v0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155720) {
            ctx->pc = 0x155820u;
            goto label_155820;
        }
    }
    ctx->pc = 0x155728u;
    // 0x155728: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x155728u;
    {
        const bool branch_taken_0x155728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15572Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155728u;
            // 0x15572c: 0x240200e9  addiu       $v0, $zero, 0xE9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155728) {
            ctx->pc = 0x155818u;
            goto label_155818;
        }
    }
    ctx->pc = 0x155730u;
    // 0x155730: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x155730u;
    {
        const bool branch_taken_0x155730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155730u;
            // 0x155734: 0x240200ea  addiu       $v0, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155730) {
            ctx->pc = 0x155810u;
            goto label_155810;
        }
    }
    ctx->pc = 0x155738u;
    // 0x155738: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x155738u;
    {
        const bool branch_taken_0x155738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15573Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155738u;
            // 0x15573c: 0x240200eb  addiu       $v0, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155738) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x155740u;
    // 0x155740: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x155740u;
    {
        const bool branch_taken_0x155740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155740u;
            // 0x155744: 0x240200ec  addiu       $v0, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155740) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x155748u;
    // 0x155748: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x155748u;
    {
        const bool branch_taken_0x155748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155748u;
            // 0x15574c: 0x240200ed  addiu       $v0, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155748) {
            ctx->pc = 0x1557F8u;
            goto label_1557f8;
        }
    }
    ctx->pc = 0x155750u;
    // 0x155750: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x155750u;
    {
        const bool branch_taken_0x155750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155750u;
            // 0x155754: 0x240200ee  addiu       $v0, $zero, 0xEE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155750) {
            ctx->pc = 0x1557F0u;
            goto label_1557f0;
        }
    }
    ctx->pc = 0x155758u;
    // 0x155758: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x155758u;
    {
        const bool branch_taken_0x155758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155758u;
            // 0x15575c: 0x240200ef  addiu       $v0, $zero, 0xEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155758) {
            ctx->pc = 0x1557E8u;
            goto label_1557e8;
        }
    }
    ctx->pc = 0x155760u;
    // 0x155760: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x155760u;
    {
        const bool branch_taken_0x155760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155760u;
            // 0x155764: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155760) {
            ctx->pc = 0x1557E0u;
            goto label_1557e0;
        }
    }
    ctx->pc = 0x155768u;
    // 0x155768: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x155768u;
    {
        const bool branch_taken_0x155768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155768u;
            // 0x15576c: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155768) {
            ctx->pc = 0x1557D8u;
            goto label_1557d8;
        }
    }
    ctx->pc = 0x155770u;
    // 0x155770: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x155770u;
    {
        const bool branch_taken_0x155770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155770u;
            // 0x155774: 0x240200f2  addiu       $v0, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155770) {
            ctx->pc = 0x1557D0u;
            goto label_1557d0;
        }
    }
    ctx->pc = 0x155778u;
    // 0x155778: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x155778u;
    {
        const bool branch_taken_0x155778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15577Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155778u;
            // 0x15577c: 0x240200fb  addiu       $v0, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155778) {
            ctx->pc = 0x1557C8u;
            goto label_1557c8;
        }
    }
    ctx->pc = 0x155780u;
    // 0x155780: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x155780u;
    {
        const bool branch_taken_0x155780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155780u;
            // 0x155784: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155780) {
            ctx->pc = 0x1557C0u;
            goto label_1557c0;
        }
    }
    ctx->pc = 0x155788u;
    // 0x155788: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x155788u;
    {
        const bool branch_taken_0x155788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155788u;
            // 0x15578c: 0x240200fd  addiu       $v0, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155788) {
            ctx->pc = 0x1557B8u;
            goto label_1557b8;
        }
    }
    ctx->pc = 0x155790u;
    // 0x155790: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155790u;
    {
        const bool branch_taken_0x155790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155790u;
            // 0x155794: 0x240200fe  addiu       $v0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155790) {
            ctx->pc = 0x1557B0u;
            goto label_1557b0;
        }
    }
    ctx->pc = 0x155798u;
    // 0x155798: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155798u;
    {
        const bool branch_taken_0x155798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155798) {
            ctx->pc = 0x1557A8u;
            goto label_1557a8;
        }
    }
    ctx->pc = 0x1557A0u;
    // 0x1557a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1557A0u;
    {
        const bool branch_taken_0x1557a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557A0u;
            // 0x1557a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557a0) {
            ctx->pc = 0x155828u;
            goto label_155828;
        }
    }
    ctx->pc = 0x1557A8u;
label_1557a8:
    // 0x1557a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1557A8u;
    {
        const bool branch_taken_0x1557a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557A8u;
            // 0x1557ac: 0x8ea51a04  lw          $a1, 0x1A04($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557a8) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557B0u;
label_1557b0:
    // 0x1557b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1557B0u;
    {
        const bool branch_taken_0x1557b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557B0u;
            // 0x1557b4: 0x8ea51a08  lw          $a1, 0x1A08($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557b0) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557B8u;
label_1557b8:
    // 0x1557b8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1557B8u;
    {
        const bool branch_taken_0x1557b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557B8u;
            // 0x1557bc: 0x8ea51a0c  lw          $a1, 0x1A0C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557b8) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557C0u;
label_1557c0:
    // 0x1557c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1557C0u;
    {
        const bool branch_taken_0x1557c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557C0u;
            // 0x1557c4: 0x8ea51a10  lw          $a1, 0x1A10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557c0) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557C8u;
label_1557c8:
    // 0x1557c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1557C8u;
    {
        const bool branch_taken_0x1557c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557C8u;
            // 0x1557cc: 0x8ea51a14  lw          $a1, 0x1A14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557c8) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557D0u;
label_1557d0:
    // 0x1557d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1557D0u;
    {
        const bool branch_taken_0x1557d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557D0u;
            // 0x1557d4: 0x8ea51a18  lw          $a1, 0x1A18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557d0) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557D8u;
label_1557d8:
    // 0x1557d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1557D8u;
    {
        const bool branch_taken_0x1557d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557D8u;
            // 0x1557dc: 0x8ea51a1c  lw          $a1, 0x1A1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557d8) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557E0u;
label_1557e0:
    // 0x1557e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1557E0u;
    {
        const bool branch_taken_0x1557e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557E0u;
            // 0x1557e4: 0x8ea51a20  lw          $a1, 0x1A20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557e0) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557E8u;
label_1557e8:
    // 0x1557e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1557E8u;
    {
        const bool branch_taken_0x1557e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557E8u;
            // 0x1557ec: 0x8ea51a24  lw          $a1, 0x1A24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557e8) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557F0u;
label_1557f0:
    // 0x1557f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1557F0u;
    {
        const bool branch_taken_0x1557f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557F0u;
            // 0x1557f4: 0x8ea51a28  lw          $a1, 0x1A28($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557f0) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557F8u;
label_1557f8:
    // 0x1557f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1557F8u;
    {
        const bool branch_taken_0x1557f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557F8u;
            // 0x1557fc: 0x8ea51a2c  lw          $a1, 0x1A2C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557f8) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x155800u;
label_155800:
    // 0x155800: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x155800u;
    {
        const bool branch_taken_0x155800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155800u;
            // 0x155804: 0x8ea51a30  lw          $a1, 0x1A30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155800) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x155808u;
label_155808:
    // 0x155808: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x155808u;
    {
        const bool branch_taken_0x155808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155808u;
            // 0x15580c: 0x8ea51a34  lw          $a1, 0x1A34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155808) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x155810u;
label_155810:
    // 0x155810: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155810u;
    {
        const bool branch_taken_0x155810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155810u;
            // 0x155814: 0x8ea51a38  lw          $a1, 0x1A38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155810) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x155818u;
label_155818:
    // 0x155818: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x155818u;
    {
        const bool branch_taken_0x155818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155818u;
            // 0x15581c: 0x8ea51a3c  lw          $a1, 0x1A3C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155818) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x155820u;
label_155820:
    // 0x155820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x155820u;
    {
        const bool branch_taken_0x155820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155820u;
            // 0x155824: 0x8ea51a40  lw          $a1, 0x1A40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155820) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x155828u;
label_155828:
    // 0x155828: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x155828u;
    {
        const bool branch_taken_0x155828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155828) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x155830u;
label_155830:
    // 0x155830: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155830u;
    {
        const bool branch_taken_0x155830 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x155834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155830u;
            // 0x155834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155830) {
            ctx->pc = 0x155840u;
            goto label_155840;
        }
    }
    ctx->pc = 0x155838u;
    // 0x155838: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x155838u;
    {
        const bool branch_taken_0x155838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155838) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x155840u;
label_155840:
    // 0x155840: 0x8ea221d8  lw          $v0, 0x21D8($s5)
    ctx->pc = 0x155840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8664)));
    // 0x155844: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155844u;
    {
        const bool branch_taken_0x155844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155844u;
            // 0x155848: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155844) {
            ctx->pc = 0x155854u;
            goto label_155854;
        }
    }
    ctx->pc = 0x15584Cu;
    // 0x15584c: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x15584Cu;
    {
        const bool branch_taken_0x15584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15584Cu;
            // 0x155850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15584c) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x155854u;
label_155854:
    // 0x155854: 0xc0557d4  jal         func_155F50
    ctx->pc = 0x155854u;
    SET_GPR_U32(ctx, 31, 0x15585Cu);
    ctx->pc = 0x155F50u;
    if (runtime->hasFunction(0x155F50u)) {
        auto targetFn = runtime->lookupFunction(0x155F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15585Cu; }
        if (ctx->pc != 0x15585Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextLineDataTop_system__6ClsMesFi_0x155f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15585Cu; }
        if (ctx->pc != 0x15585Cu) { return; }
    }
    ctx->pc = 0x15585Cu;
label_15585c:
    // 0x15585c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15585cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155860: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155860u;
    {
        const bool branch_taken_0x155860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x155864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155860u;
            // 0x155864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155860) {
            ctx->pc = 0x155870u;
            goto label_155870;
        }
    }
    ctx->pc = 0x155868u;
    // 0x155868: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x155868u;
    {
        const bool branch_taken_0x155868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155868) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x155870u;
label_155870:
    // 0x155870: 0x96110000  lhu         $s1, 0x0($s0)
    ctx->pc = 0x155870u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_155874:
    // 0x155874: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x155874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x155878: 0x12220026  beq         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x155878u;
    {
        const bool branch_taken_0x155878 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x15587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155878u;
            // 0x15587c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155878) {
            ctx->pc = 0x155914u;
            goto label_155914;
        }
    }
    ctx->pc = 0x155880u;
    // 0x155880: 0x3402ff02  ori         $v0, $zero, 0xFF02
    ctx->pc = 0x155880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65282);
    // 0x155884: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x155884u;
    {
        const bool branch_taken_0x155884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x155888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155884u;
            // 0x155888: 0x3402ff01  ori         $v0, $zero, 0xFF01 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155884) {
            ctx->pc = 0x1558A8u;
            goto label_1558a8;
        }
    }
    ctx->pc = 0x15588Cu;
    // 0x15588c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15588Cu;
    {
        const bool branch_taken_0x15588c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x15588c) {
            ctx->pc = 0x15589Cu;
            goto label_15589c;
        }
    }
    ctx->pc = 0x155894u;
    // 0x155894: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x155894u;
    {
        const bool branch_taken_0x155894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155894) {
            ctx->pc = 0x155944u;
            goto label_155944;
        }
    }
    ctx->pc = 0x15589Cu;
label_15589c:
    // 0x15589c: 0x0  nop
    ctx->pc = 0x15589cu;
    // NOP
    // 0x1558a0: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x1558A0u;
    {
        const bool branch_taken_0x1558a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558A0u;
            // 0x1558a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558a0) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x1558A8u;
label_1558a8:
    // 0x1558a8: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x1558a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1558ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1558acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558b0: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1558b4: 0xc055834  jal         func_1560D0
    ctx->pc = 0x1558B4u;
    SET_GPR_U32(ctx, 31, 0x1558BCu);
    ctx->pc = 0x1558B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1558B4u;
            // 0x1558b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558BCu; }
        if (ctx->pc != 0x1558BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1558BCu; }
        if (ctx->pc != 0x1558BCu) { return; }
    }
    ctx->pc = 0x1558BCu;
label_1558bc:
    // 0x1558bc: 0x8ea21ae0  lw          $v0, 0x1AE0($s5)
    ctx->pc = 0x1558bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6880)));
    // 0x1558c0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1558C0u;
    {
        const bool branch_taken_0x1558c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1558c0) {
            ctx->pc = 0x1558D4u;
            goto label_1558d4;
        }
    }
    ctx->pc = 0x1558C8u;
    // 0x1558c8: 0x8ea21adc  lw          $v0, 0x1ADC($s5)
    ctx->pc = 0x1558c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6876)));
    // 0x1558cc: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1558CCu;
    {
        const bool branch_taken_0x1558cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1558cc) {
            ctx->pc = 0x1558ECu;
            goto label_1558ec;
        }
    }
    ctx->pc = 0x1558D4u;
label_1558d4:
    // 0x1558d4: 0x0  nop
    ctx->pc = 0x1558d4u;
    // NOP
    // 0x1558d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1558d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1558dc: 0x8ea21adc  lw          $v0, 0x1ADC($s5)
    ctx->pc = 0x1558dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6876)));
    // 0x1558e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1558e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1558e4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1558E4u;
    {
        const bool branch_taken_0x1558e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558E4u;
            // 0x1558e8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558e4) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x1558ECu;
label_1558ec:
    // 0x1558ec: 0x0  nop
    ctx->pc = 0x1558ecu;
    // NOP
    // 0x1558f0: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x1558f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x1558f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1558F4u;
    {
        const bool branch_taken_0x1558f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1558F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558F4u;
            // 0x1558f8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558f4) {
            ctx->pc = 0x155904u;
            goto label_155904;
        }
    }
    ctx->pc = 0x1558FCu;
    // 0x1558fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1558fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x155900: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x155900u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_155904:
    // 0x155904: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x155904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15590c: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x15590Cu;
    {
        const bool branch_taken_0x15590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15590Cu;
            // 0x155910: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15590c) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155914u;
label_155914:
    // 0x155914: 0x0  nop
    ctx->pc = 0x155914u;
    // NOP
    // 0x155918: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x155918u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15591c: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x15591cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155924: 0xc055834  jal         func_1560D0
    ctx->pc = 0x155924u;
    SET_GPR_U32(ctx, 31, 0x15592Cu);
    ctx->pc = 0x155928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155924u;
            // 0x155928: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15592Cu; }
        if (ctx->pc != 0x15592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15592Cu; }
        if (ctx->pc != 0x15592Cu) { return; }
    }
    ctx->pc = 0x15592Cu;
label_15592c:
    // 0x15592c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x15592cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x155930: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x155930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155934: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x155934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x155938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x155938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15593c: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x15593Cu;
    {
        const bool branch_taken_0x15593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15593Cu;
            // 0x155940: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15593c) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155944u;
label_155944:
    // 0x155944: 0x0  nop
    ctx->pc = 0x155944u;
    // NOP
    // 0x155948: 0x3402fafa  ori         $v0, $zero, 0xFAFA
    ctx->pc = 0x155948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64250);
    // 0x15594c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x15594cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155950: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x155950u;
    {
        const bool branch_taken_0x155950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155950u;
            // 0x155954: 0x3401fb00  ori         $at, $zero, 0xFB00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155950) {
            ctx->pc = 0x155A24u;
            goto label_155a24;
        }
    }
    ctx->pc = 0x155958u;
    // 0x155958: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x155958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15595c: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x15595Cu;
    {
        const bool branch_taken_0x15595c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15595Cu;
            // 0x155960: 0x26228000  addiu       $v0, $s1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15595c) {
            ctx->pc = 0x155A24u;
            goto label_155a24;
        }
    }
    ctx->pc = 0x155964u;
    // 0x155964: 0xc0550e0  jal         func_154380
    ctx->pc = 0x155964u;
    SET_GPR_U32(ctx, 31, 0x15596Cu);
    ctx->pc = 0x155968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155964u;
            // 0x155968: 0x24448506  addiu       $a0, $v0, -0x7AFA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935814));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154380u;
    if (runtime->hasFunction(0x154380u)) {
        auto targetFn = runtime->lookupFunction(0x154380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15596Cu; }
        if (ctx->pc != 0x15596Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAndGetNameRegistTbl__Fi_0x154380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15596Cu; }
        if (ctx->pc != 0x15596Cu) { return; }
    }
    ctx->pc = 0x15596Cu;
label_15596c:
    // 0x15596c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15596cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155970: 0x1220ffbf  beqz        $s1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x155970u;
    {
        const bool branch_taken_0x155970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x155970) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155978u;
    // 0x155978: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x155978u;
    {
        const bool branch_taken_0x155978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15597Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155978u;
            // 0x15597c: 0x86320000  lh          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155978) {
            ctx->pc = 0x155A04u;
            goto label_155a04;
        }
    }
    ctx->pc = 0x155980u;
label_155980:
    // 0x155980: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x155980u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155984: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x155984u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155988: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x155988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15598c: 0xc055834  jal         func_1560D0
    ctx->pc = 0x15598Cu;
    SET_GPR_U32(ctx, 31, 0x155994u);
    ctx->pc = 0x155990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15598Cu;
            // 0x155990: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155994u; }
        if (ctx->pc != 0x155994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155994u; }
        if (ctx->pc != 0x155994u) { return; }
    }
    ctx->pc = 0x155994u;
label_155994:
    // 0x155994: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x155994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155998: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x155998u;
    SET_GPR_U32(ctx, 31, 0x1559A0u);
    ctx->pc = 0x15599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155998u;
            // 0x15599c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1559A0u; }
        if (ctx->pc != 0x1559A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1559A0u; }
        if (ctx->pc != 0x1559A0u) { return; }
    }
    ctx->pc = 0x1559A0u;
label_1559a0:
    // 0x1559a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1559A0u;
    {
        const bool branch_taken_0x1559a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1559a0) {
            ctx->pc = 0x1559BCu;
            goto label_1559bc;
        }
    }
    ctx->pc = 0x1559A8u;
    // 0x1559a8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1559a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1559ac: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x1559acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x1559b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1559b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1559b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1559B4u;
    {
        const bool branch_taken_0x1559b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559B4u;
            // 0x1559b8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559b4) {
            ctx->pc = 0x1559F8u;
            goto label_1559f8;
        }
    }
    ctx->pc = 0x1559BCu;
label_1559bc:
    // 0x1559bc: 0x0  nop
    ctx->pc = 0x1559bcu;
    // NOP
    // 0x1559c0: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x1559c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1559c4: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x1559C4u;
    SET_GPR_U32(ctx, 31, 0x1559CCu);
    ctx->pc = 0x1559C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1559C4u;
            // 0x1559c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1559CCu; }
        if (ctx->pc != 0x1559CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1559CCu; }
        if (ctx->pc != 0x1559CCu) { return; }
    }
    ctx->pc = 0x1559CCu;
label_1559cc:
    // 0x1559cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1559CCu;
    {
        const bool branch_taken_0x1559cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1559cc) {
            ctx->pc = 0x1559E8u;
            goto label_1559e8;
        }
    }
    ctx->pc = 0x1559D4u;
    // 0x1559d4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1559d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1559d8: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x1559d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x1559dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1559dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1559e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1559E0u;
    {
        const bool branch_taken_0x1559e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559E0u;
            // 0x1559e4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559e0) {
            ctx->pc = 0x1559F8u;
            goto label_1559f8;
        }
    }
    ctx->pc = 0x1559E8u;
label_1559e8:
    // 0x1559e8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1559e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1559ec: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x1559ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x1559f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1559f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1559f4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1559f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1559f8:
    // 0x1559f8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1559fc: 0x86320000  lh          $s2, 0x0($s1)
    ctx->pc = 0x1559fcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155a00: 0x0  nop
    ctx->pc = 0x155a00u;
    // NOP
label_155a04:
    // 0x155a04: 0x0  nop
    ctx->pc = 0x155a04u;
    // NOP
    // 0x155a08: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x155a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x155a0c: 0x1242ff98  beq         $s2, $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x155A0Cu;
    {
        const bool branch_taken_0x155a0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x155A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A0Cu;
            // 0x155a10: 0x3402ff01  ori         $v0, $zero, 0xFF01 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a0c) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155A14u;
    // 0x155a14: 0x1642ffda  bne         $s2, $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x155A14u;
    {
        const bool branch_taken_0x155a14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x155a14) {
            ctx->pc = 0x155980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155980;
        }
    }
    ctx->pc = 0x155A1Cu;
    // 0x155a1c: 0x1000ff95  b           . + 4 + (-0x6B << 2)
    ctx->pc = 0x155A1Cu;
    {
        const bool branch_taken_0x155a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A1Cu;
            // 0x155a20: 0x96110000  lhu         $s1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a1c) {
            ctx->pc = 0x155874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155874;
        }
    }
    ctx->pc = 0x155A24u;
label_155a24:
    // 0x155a24: 0x0  nop
    ctx->pc = 0x155a24u;
    // NOP
    // 0x155a28: 0x3402faea  ori         $v0, $zero, 0xFAEA
    ctx->pc = 0x155a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64234);
    // 0x155a2c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155a30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155A30u;
    {
        const bool branch_taken_0x155a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A30u;
            // 0x155a34: 0x3401fafa  ori         $at, $zero, 0xFAFA (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64250);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a30) {
            ctx->pc = 0x155A44u;
            goto label_155a44;
        }
    }
    ctx->pc = 0x155A38u;
    // 0x155a38: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x155a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x155a3c: 0x1420ff8c  bnez        $at, . + 4 + (-0x74 << 2)
    ctx->pc = 0x155A3Cu;
    {
        const bool branch_taken_0x155a3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x155a3c) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155A44u;
label_155a44:
    // 0x155a44: 0x0  nop
    ctx->pc = 0x155a44u;
    // NOP
    // 0x155a48: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x155a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x155a4c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155a50: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x155A50u;
    {
        const bool branch_taken_0x155a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A50u;
            // 0x155a54: 0x3401fd33  ori         $at, $zero, 0xFD33 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64819);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a50) {
            ctx->pc = 0x155A9Cu;
            goto label_155a9c;
        }
    }
    ctx->pc = 0x155A58u;
    // 0x155a58: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x155a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x155a5c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x155A5Cu;
    {
        const bool branch_taken_0x155a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155a5c) {
            ctx->pc = 0x155A9Cu;
            goto label_155a9c;
        }
    }
    ctx->pc = 0x155A64u;
    // 0x155a64: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x155a64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155a68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x155a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a6c: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x155a6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155a70: 0xc055834  jal         func_1560D0
    ctx->pc = 0x155A70u;
    SET_GPR_U32(ctx, 31, 0x155A78u);
    ctx->pc = 0x155A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155A70u;
            // 0x155a74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155A78u; }
        if (ctx->pc != 0x155A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155A78u; }
        if (ctx->pc != 0x155A78u) { return; }
    }
    ctx->pc = 0x155A78u;
label_155a78:
    // 0x155a78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a7c: 0xc054834  jal         func_1520D0
    ctx->pc = 0x155A7Cu;
    SET_GPR_U32(ctx, 31, 0x155A84u);
    ctx->pc = 0x155A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155A7Cu;
            // 0x155a80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1520D0u;
    if (runtime->hasFunction(0x1520D0u)) {
        auto targetFn = runtime->lookupFunction(0x1520D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155A84u; }
        if (ctx->pc != 0x155A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiW__6ClsMesFi_0x1520d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155A84u; }
        if (ctx->pc != 0x155A84u) { return; }
    }
    ctx->pc = 0x155A84u;
label_155a84:
    // 0x155a84: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x155a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x155a88: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x155a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155a8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155a8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155a94: 0x1000ff76  b           . + 4 + (-0x8A << 2)
    ctx->pc = 0x155A94u;
    {
        const bool branch_taken_0x155a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A94u;
            // 0x155a98: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a94) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155A9Cu;
label_155a9c:
    // 0x155a9c: 0x0  nop
    ctx->pc = 0x155a9cu;
    // NOP
    // 0x155aa0: 0x3402f700  ori         $v0, $zero, 0xF700
    ctx->pc = 0x155aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63232);
    // 0x155aa4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155aa8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x155AA8u;
    {
        const bool branch_taken_0x155aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AA8u;
            // 0x155aac: 0x3401f800  ori         $at, $zero, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155aa8) {
            ctx->pc = 0x155AE4u;
            goto label_155ae4;
        }
    }
    ctx->pc = 0x155AB0u;
    // 0x155ab0: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x155ab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x155ab4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x155AB4u;
    {
        const bool branch_taken_0x155ab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AB4u;
            // 0x155ab8: 0x26228000  addiu       $v0, $s1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ab4) {
            ctx->pc = 0x155AE4u;
            goto label_155ae4;
        }
    }
    ctx->pc = 0x155ABCu;
    // 0x155abc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x155abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ac0: 0x24428900  addiu       $v0, $v0, -0x7700
    ctx->pc = 0x155ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936832));
    // 0x155ac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155ac8: 0xaea21ae0  sw          $v0, 0x1AE0($s5)
    ctx->pc = 0x155ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6880), GPR_U32(ctx, 2));
    // 0x155acc: 0x8ea51ae0  lw          $a1, 0x1AE0($s5)
    ctx->pc = 0x155accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6880)));
    // 0x155ad0: 0x8ea600c0  lw          $a2, 0xC0($s5)
    ctx->pc = 0x155ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x155ad4: 0xc0558c8  jal         func_156320
    ctx->pc = 0x155AD4u;
    SET_GPR_U32(ctx, 31, 0x155ADCu);
    ctx->pc = 0x155AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155AD4u;
            // 0x155ad8: 0x2607fffe  addiu       $a3, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156320u;
    if (runtime->hasFunction(0x156320u)) {
        auto targetFn = runtime->lookupFunction(0x156320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155ADCu; }
        if (ctx->pc != 0x155ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcSpaceW__6ClsMesFiiPUs_0x156320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155ADCu; }
        if (ctx->pc != 0x155ADCu) { return; }
    }
    ctx->pc = 0x155ADCu;
label_155adc:
    // 0x155adc: 0x1000ff64  b           . + 4 + (-0x9C << 2)
    ctx->pc = 0x155ADCu;
    {
        const bool branch_taken_0x155adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155ADCu;
            // 0x155ae0: 0xaea21adc  sw          $v0, 0x1ADC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155adc) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155AE4u;
label_155ae4:
    // 0x155ae4: 0x0  nop
    ctx->pc = 0x155ae4u;
    // NOP
    // 0x155ae8: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x155ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x155aec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155af0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155AF0u;
    {
        const bool branch_taken_0x155af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AF0u;
            // 0x155af4: 0x3401f900  ori         $at, $zero, 0xF900 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155af0) {
            ctx->pc = 0x155B10u;
            goto label_155b10;
        }
    }
    ctx->pc = 0x155AF8u;
    // 0x155af8: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x155af8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x155afc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x155AFCu;
    {
        const bool branch_taken_0x155afc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AFCu;
            // 0x155b00: 0x26228000  addiu       $v0, $s1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155afc) {
            ctx->pc = 0x155B10u;
            goto label_155b10;
        }
    }
    ctx->pc = 0x155B04u;
    // 0x155b04: 0x24428800  addiu       $v0, $v0, -0x7800
    ctx->pc = 0x155b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936576));
    // 0x155b08: 0x1000ff59  b           . + 4 + (-0xA7 << 2)
    ctx->pc = 0x155B08u;
    {
        const bool branch_taken_0x155b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B08u;
            // 0x155b0c: 0xaea21adc  sw          $v0, 0x1ADC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b08) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155B10u;
label_155b10:
    // 0x155b10: 0x3402f900  ori         $v0, $zero, 0xF900
    ctx->pc = 0x155b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
    // 0x155b14: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155b18: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x155B18u;
    {
        const bool branch_taken_0x155b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B18u;
            // 0x155b1c: 0x3401fa00  ori         $at, $zero, 0xFA00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b18) {
            ctx->pc = 0x155B44u;
            goto label_155b44;
        }
    }
    ctx->pc = 0x155B20u;
    // 0x155b20: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x155b20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x155b24: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x155B24u;
    {
        const bool branch_taken_0x155b24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b24) {
            ctx->pc = 0x155B44u;
            goto label_155b44;
        }
    }
    ctx->pc = 0x155B2Cu;
    // 0x155b2c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x155b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155b30: 0x26238000  addiu       $v1, $s1, -0x8000
    ctx->pc = 0x155b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
    // 0x155b34: 0x24638700  addiu       $v1, $v1, -0x7900
    ctx->pc = 0x155b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
    // 0x155b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155b3c: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x155B3Cu;
    {
        const bool branch_taken_0x155b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B3Cu;
            // 0x155b40: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b3c) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155B44u;
label_155b44:
    // 0x155b44: 0x0  nop
    ctx->pc = 0x155b44u;
    // NOP
    // 0x155b48: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x155b48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155b4c: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x155b4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155b50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x155b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b54: 0xc055834  jal         func_1560D0
    ctx->pc = 0x155B54u;
    SET_GPR_U32(ctx, 31, 0x155B5Cu);
    ctx->pc = 0x155B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155B54u;
            // 0x155b58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B5Cu; }
        if (ctx->pc != 0x155B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B5Cu; }
        if (ctx->pc != 0x155B5Cu) { return; }
    }
    ctx->pc = 0x155B5Cu;
label_155b5c:
    // 0x155b5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x155b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b60: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x155B60u;
    SET_GPR_U32(ctx, 31, 0x155B68u);
    ctx->pc = 0x155B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155B60u;
            // 0x155b64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B68u; }
        if (ctx->pc != 0x155B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B68u; }
        if (ctx->pc != 0x155B68u) { return; }
    }
    ctx->pc = 0x155B68u;
label_155b68:
    // 0x155b68: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x155B68u;
    {
        const bool branch_taken_0x155b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B68u;
            // 0x155b6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b68) {
            ctx->pc = 0x155BDCu;
            goto label_155bdc;
        }
    }
    ctx->pc = 0x155B70u;
    // 0x155b70: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x155B70u;
    SET_GPR_U32(ctx, 31, 0x155B78u);
    ctx->pc = 0x155B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155B70u;
            // 0x155b74: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B78u; }
        if (ctx->pc != 0x155B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B78u; }
        if (ctx->pc != 0x155B78u) { return; }
    }
    ctx->pc = 0x155B78u;
label_155b78:
    // 0x155b78: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x155B78u;
    {
        const bool branch_taken_0x155b78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x155b78) {
            ctx->pc = 0x155BA4u;
            goto label_155ba4;
        }
    }
    ctx->pc = 0x155B80u;
    // 0x155b80: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x155b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x155b84: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155B84u;
    {
        const bool branch_taken_0x155b84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x155B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B84u;
            // 0x155b88: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b84) {
            ctx->pc = 0x155B94u;
            goto label_155b94;
        }
    }
    ctx->pc = 0x155B8Cu;
    // 0x155b8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x155b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x155b90: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x155b90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_155b94:
    // 0x155b94: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x155b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155b9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x155B9Cu;
    {
        const bool branch_taken_0x155b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155B9Cu;
            // 0x155ba0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b9c) {
            ctx->pc = 0x155BC8u;
            goto label_155bc8;
        }
    }
    ctx->pc = 0x155BA4u;
label_155ba4:
    // 0x155ba4: 0x0  nop
    ctx->pc = 0x155ba4u;
    // NOP
    // 0x155ba8: 0xc6a100c0  lwc1        $f1, 0xC0($s5)
    ctx->pc = 0x155ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155bac: 0xc6a000c8  lwc1        $f0, 0xC8($s5)
    ctx->pc = 0x155bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155bb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x155bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x155bb4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x155BB4u;
    SET_GPR_U32(ctx, 31, 0x155BBCu);
    ctx->pc = 0x155BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155BB4u;
            // 0x155bb8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BBCu; }
        if (ctx->pc != 0x155BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BBCu; }
        if (ctx->pc != 0x155BBCu) { return; }
    }
    ctx->pc = 0x155BBCu;
label_155bbc:
    // 0x155bbc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x155bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155bc0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x155bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155bc4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x155bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_155bc8:
    // 0x155bc8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x155bc8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155bcc: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x155BCCu;
    SET_GPR_U32(ctx, 31, 0x155BD4u);
    ctx->pc = 0x155BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155BCCu;
            // 0x155bd0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BD4u; }
        if (ctx->pc != 0x155BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BD4u; }
        if (ctx->pc != 0x155BD4u) { return; }
    }
    ctx->pc = 0x155BD4u;
label_155bd4:
    // 0x155bd4: 0x1000ff26  b           . + 4 + (-0xDA << 2)
    ctx->pc = 0x155BD4u;
    {
        const bool branch_taken_0x155bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155bd4) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155BDCu;
label_155bdc:
    // 0x155bdc: 0x0  nop
    ctx->pc = 0x155bdcu;
    // NOP
    // 0x155be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155be4: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x155BE4u;
    SET_GPR_U32(ctx, 31, 0x155BECu);
    ctx->pc = 0x155BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155BE4u;
            // 0x155be8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BECu; }
        if (ctx->pc != 0x155BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BECu; }
        if (ctx->pc != 0x155BECu) { return; }
    }
    ctx->pc = 0x155BECu;
label_155bec:
    // 0x155bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155BECu;
    {
        const bool branch_taken_0x155bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155bec) {
            ctx->pc = 0x155C08u;
            goto label_155c08;
        }
    }
    ctx->pc = 0x155BF4u;
    // 0x155bf4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x155bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155bf8: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x155bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x155bfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x155bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155c00: 0x1000ff1b  b           . + 4 + (-0xE5 << 2)
    ctx->pc = 0x155C00u;
    {
        const bool branch_taken_0x155c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155C00u;
            // 0x155c04: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c00) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155C08u;
label_155c08:
    // 0x155c08: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x155c08u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155c0c: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x155C0Cu;
    SET_GPR_U32(ctx, 31, 0x155C14u);
    ctx->pc = 0x155C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155C0Cu;
            // 0x155c10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C14u; }
        if (ctx->pc != 0x155C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C14u; }
        if (ctx->pc != 0x155C14u) { return; }
    }
    ctx->pc = 0x155C14u;
label_155c14:
    // 0x155c14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155C14u;
    {
        const bool branch_taken_0x155c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c14) {
            ctx->pc = 0x155C30u;
            goto label_155c30;
        }
    }
    ctx->pc = 0x155C1Cu;
    // 0x155c1c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x155c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155c20: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x155c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x155c24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x155c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155c28: 0x1000ff11  b           . + 4 + (-0xEF << 2)
    ctx->pc = 0x155C28u;
    {
        const bool branch_taken_0x155c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155C28u;
            // 0x155c2c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c28) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155C30u;
label_155c30:
    // 0x155c30: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x155c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155c34: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x155c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x155c38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x155c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155c3c: 0x1000ff0c  b           . + 4 + (-0xF4 << 2)
    ctx->pc = 0x155C3Cu;
    {
        const bool branch_taken_0x155c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155C3Cu;
            // 0x155c40: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c3c) {
            ctx->pc = 0x155870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155870;
        }
    }
    ctx->pc = 0x155C44u;
label_155c44:
    // 0x155c44: 0x0  nop
    ctx->pc = 0x155c44u;
    // NOP
    // 0x155c48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x155c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155c4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x155c4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155c50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155c50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155c54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155c58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155c64: 0x3e00008  jr          $ra
    ctx->pc = 0x155C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155C64u;
            // 0x155c68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155C6Cu;
}
