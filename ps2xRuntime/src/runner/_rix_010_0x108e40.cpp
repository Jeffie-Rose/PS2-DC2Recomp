#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _rix_010
// Address: 0x108e40 - 0x108eec
void _rix_010_0x108e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_010_0x108e40");
#endif

    switch (ctx->pc) {
        case 0x108e6cu: goto label_108e6c;
        default: break;
    }

    ctx->pc = 0x108e40u;

    // 0x108e40: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108e40u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108e44: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108e44u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x108e48: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108e4c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108e50: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108e54: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108e54u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108e58: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108e58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108e5c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x108e5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108e60: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x108e60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108e64: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x108e64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x108e68: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x108e68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108e6c:
    // 0x108e6c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x108e6cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108e70: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x108e70u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108e74: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108e74u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108e78: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x108e78u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x108e7c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x108e7cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x108e80: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x108e80u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108e84: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108e84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108e88: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x108e88u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108e8c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x108e8cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108e90: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x108e90u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x108e94: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x108e94u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108e98: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x108e98u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108e9c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x108e9cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x108ea0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x108ea0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x108ea4: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x108ea4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x108ea8: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x108ea8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x108eac: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x108eacu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x108eb0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x108eb0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x108eb4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x108eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x108eb8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x108eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x108ebc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x108ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x108ec0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x108ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x108ec4: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x108EC4u;
    {
        const bool branch_taken_0x108ec4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108EC4u;
            // 0x108ec8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ec4) {
            ctx->pc = 0x108E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108e6c;
        }
    }
    ctx->pc = 0x108ECCu;
    // 0x108ecc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108ed0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x108ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x108ed4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108ed8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x108ed8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x108edc: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x108EDCu;
    {
        const bool branch_taken_0x108edc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x108EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108EDCu;
            // 0x108ee0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108edc) {
            ctx->pc = 0x108E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108e6c;
        }
    }
    ctx->pc = 0x108EE4u;
    // 0x108ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x108EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108EECu;
}
