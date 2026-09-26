#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _rix_011
// Address: 0x108fa8 - 0x1090a0
void _rix_011_0x108fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_011_0x108fa8");
#endif

    switch (ctx->pc) {
        case 0x10900cu: goto label_10900c;
        default: break;
    }

    ctx->pc = 0x108fa8u;

    // 0x108fa8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108fa8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108fac: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108facu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x108fb0: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x108fb0u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x108fb4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108fb8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108fbc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108fc0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108fc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108fc4: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108fc4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108fc8: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x108fc8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108fcc: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x108fccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108fd0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x108fd0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108fd4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x108fd4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108fd8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108fd8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108fdc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x108fdcu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108fe0: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x108fe0u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x108fe4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x108fe4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108fe8: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x108fe8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108fec: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x108fecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108ff0: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x108ff0u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108ff4: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x108ff4u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x108ff8: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x108ff8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x108ffc: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x108ffcu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x109000: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x109000u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x109004: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x109004u;
    {
        const bool branch_taken_0x109004 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109004u;
            // 0x109008: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109004) {
            ctx->pc = 0x109080u;
            goto label_109080;
        }
    }
    ctx->pc = 0x10900Cu;
label_10900c:
    // 0x10900c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x10900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109010: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x109010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109014: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x109014u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109018: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x109018u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10901c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10901cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109020: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x109020u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x109024: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x109024u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x109028: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x109028u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10902c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10902cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109030: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x109030u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x109034: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109034u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109038: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x109038u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x10903c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x10903cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x109040: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x109040u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x109044: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x109044u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x109048: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x109048u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10904c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x10904cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x109050: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x109050u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x109054: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x109054u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109058: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x109058u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10905c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x10905cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109060: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x109060u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x109064: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x109064u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x109068: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x109068u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x10906c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10906cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x109070: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x109070u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x109074: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x109074u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x109078: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x109078u;
    {
        const bool branch_taken_0x109078 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10907Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109078u;
            // 0x10907c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109078) {
            ctx->pc = 0x10900Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10900c;
        }
    }
    ctx->pc = 0x109080u;
label_109080:
    // 0x109080: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x109080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x109084: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x109084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x109088: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10908c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10908cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x109090: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x109090u;
    {
        const bool branch_taken_0x109090 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109090u;
            // 0x109094: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109090) {
            ctx->pc = 0x10900Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10900c;
        }
    }
    ctx->pc = 0x109098u;
    // 0x109098: 0x3e00008  jr          $ra
    ctx->pc = 0x109098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1090A0u;
}
