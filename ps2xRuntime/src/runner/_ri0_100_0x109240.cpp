#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ri0_100
// Address: 0x109240 - 0x1092ec
void _ri0_100_0x109240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_100_0x109240");
#endif

    switch (ctx->pc) {
        case 0x109260u: goto label_109260;
        case 0x109268u: goto label_109268;
        default: break;
    }

    ctx->pc = 0x109240u;

    // 0x109240: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109244: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109248: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109248u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10924c: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x10924cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109250: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x109250u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109254: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x109254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109258: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x109258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10925c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10925cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_109260:
    // 0x109260: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x109264: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x109264u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109268:
    // 0x109268: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109268u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10926c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x10926cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109270: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109270u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109274: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109274u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109278: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109278u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10927c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10927cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109280: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x109280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x109284: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x109284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x109288: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x109288u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10928c: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x10928cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109290: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x109290u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109294: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x109294u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x109298: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x109298u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x10929c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10929cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1092a0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1092a0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1092a4: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1092A4u;
    {
        const bool branch_taken_0x1092a4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1092A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1092A4u;
            // 0x1092a8: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092a4) {
            ctx->pc = 0x109268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109268;
        }
    }
    ctx->pc = 0x1092ACu;
    // 0x1092ac: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1092acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1092b0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1092b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1092b4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1092b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1092b8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1092b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1092bc: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1092BCu;
    {
        const bool branch_taken_0x1092bc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1092C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1092BCu;
            // 0x1092c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092bc) {
            ctx->pc = 0x109268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109268;
        }
    }
    ctx->pc = 0x1092C4u;
    // 0x1092c4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1092c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1092c8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1092c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1092cc: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1092ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1092d0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1092d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1092d4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1092d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1092d8: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1092d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1092dc: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1092DCu;
    {
        const bool branch_taken_0x1092dc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1092E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1092DCu;
            // 0x1092e0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092dc) {
            ctx->pc = 0x109260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109260;
        }
    }
    ctx->pc = 0x1092E4u;
    // 0x1092e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1092E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1092ECu;
}
