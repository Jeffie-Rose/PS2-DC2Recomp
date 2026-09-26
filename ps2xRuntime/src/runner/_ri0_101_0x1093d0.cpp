#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ri0_101
// Address: 0x1093d0 - 0x1094b4
void _ri0_101_0x1093d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_101_0x1093d0");
#endif

    switch (ctx->pc) {
        case 0x1093f8u: goto label_1093f8;
        case 0x109418u: goto label_109418;
        default: break;
    }

    ctx->pc = 0x1093d0u;

    // 0x1093d0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1093d0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1093d4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1093d4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1093d8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1093d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1093dc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1093dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1093e0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1093e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1093e4: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1093e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1093e8: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1093e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1093ec: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1093ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1093f0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x1093f0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1093f4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1093f4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1093f8:
    // 0x1093f8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1093f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1093fc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1093fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109400: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109400u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109404: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109404u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109408: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109408u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10940c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x10940cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x109410: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x109410u;
    {
        const bool branch_taken_0x109410 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109410u;
            // 0x109414: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109410) {
            ctx->pc = 0x10946Cu;
            goto label_10946c;
        }
    }
    ctx->pc = 0x109418u;
label_109418:
    // 0x109418: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x10941c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x10941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109420: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109420u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109424: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109424u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109428: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109428u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10942c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10942cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109430: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x109430u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x109434: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x109434u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109438: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x109438u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x10943c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x10943cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109440: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x109440u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x109444: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x109444u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109448: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x109448u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10944c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x10944cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x109450: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x109450u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109454: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x109454u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x109458: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x109458u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x10945c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10945cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109460: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x109460u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x109464: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x109464u;
    {
        const bool branch_taken_0x109464 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109464u;
            // 0x109468: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109464) {
            ctx->pc = 0x109418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109418;
        }
    }
    ctx->pc = 0x10946Cu;
label_10946c:
    // 0x10946c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10946cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x109470: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x109470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x109474: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109478: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x109478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10947c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10947cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x109480: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x109480u;
    {
        const bool branch_taken_0x109480 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109480u;
            // 0x109484: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109480) {
            ctx->pc = 0x109418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109418;
        }
    }
    ctx->pc = 0x109488u;
    // 0x109488: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10948c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x10948cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109490: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109490u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109494: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x109494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x109498: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x109498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x10949c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x10949cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1094a0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1094a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1094a4: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1094A4u;
    {
        const bool branch_taken_0x1094a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1094A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1094A4u;
            // 0x1094a8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094a4) {
            ctx->pc = 0x1093F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1093f8;
        }
    }
    ctx->pc = 0x1094ACu;
    // 0x1094ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1094ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1094B4u;
}
