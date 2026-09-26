#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ri0_111
// Address: 0x109780 - 0x109894
void _ri0_111_0x109780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_111_0x109780");
#endif

    switch (ctx->pc) {
        case 0x1097a8u: goto label_1097a8;
        case 0x1097e0u: goto label_1097e0;
        default: break;
    }

    ctx->pc = 0x109780u;

    // 0x109780: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109780u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109784: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109784u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x109788: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x109788u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x10978c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10978cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109790: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109794: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109794u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109798: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109798u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10979c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x10979cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1097a0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1097a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1097a4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1097a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1097a8:
    // 0x1097a8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1097a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1097ac: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1097acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1097b0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1097b0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1097b4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1097b4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1097b8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1097b8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1097bc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1097bcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1097c0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1097c0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1097c4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1097c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1097c8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1097c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1097cc: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1097ccu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1097d0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1097d0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1097d4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1097d4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1097d8: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1097D8u;
    {
        const bool branch_taken_0x1097d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1097D8u;
            // 0x1097dc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097d8) {
            ctx->pc = 0x10984Cu;
            goto label_10984c;
        }
    }
    ctx->pc = 0x1097E0u;
label_1097e0:
    // 0x1097e0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1097e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1097e4: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1097e4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1097e8: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1097e8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1097ec: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1097ecu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1097f0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1097f0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1097f4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1097f4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1097f8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1097f8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1097fc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1097fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109800: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109804: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109804u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109808: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109808u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10980c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10980cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109810: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x109810u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109814: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x109814u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x109818: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x109818u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10981c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10981cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x109820: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x109820u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x109824: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x109824u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109828: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x109828u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x10982c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x10982cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109830: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x109830u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x109834: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x109834u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x109838: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x109838u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x10983c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10983cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109840: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x109840u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x109844: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x109844u;
    {
        const bool branch_taken_0x109844 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x109848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109844u;
            // 0x109848: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109844) {
            ctx->pc = 0x1097E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1097e0;
        }
    }
    ctx->pc = 0x10984Cu;
label_10984c:
    // 0x10984c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10984cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x109850: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x109850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x109854: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109858: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x109858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10985c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10985cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x109860: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x109860u;
    {
        const bool branch_taken_0x109860 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109860u;
            // 0x109864: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109860) {
            ctx->pc = 0x1097E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1097e0;
        }
    }
    ctx->pc = 0x109868u;
    // 0x109868: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10986c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x10986cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109870: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109870u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109874: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x109874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x109878: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x109878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x10987c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x10987cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x109880: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x109880u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x109884: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x109884u;
    {
        const bool branch_taken_0x109884 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109884u;
            // 0x109888: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109884) {
            ctx->pc = 0x1097A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1097a8;
        }
    }
    ctx->pc = 0x10988Cu;
    // 0x10988c: 0x3e00008  jr          $ra
    ctx->pc = 0x10988Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109894u;
}
