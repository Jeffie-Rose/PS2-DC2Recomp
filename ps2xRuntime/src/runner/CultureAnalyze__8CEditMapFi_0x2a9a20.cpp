#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CultureAnalyze__8CEditMapFi
// Address: 0x2a9a20 - 0x2a9aac
void CultureAnalyze__8CEditMapFi_0x2a9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CultureAnalyze__8CEditMapFi_0x2a9a20");
#endif

    switch (ctx->pc) {
        case 0x2a9a48u: goto label_2a9a48;
        case 0x2a9a54u: goto label_2a9a54;
        case 0x2a9a68u: goto label_2a9a68;
        default: break;
    }

    ctx->pc = 0x2a9a20u;

    // 0x2a9a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a9a24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a9a28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a9a2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a9a30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a9a30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a9a38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a9a38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a9a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a9a44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a9a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9a48:
    // 0x2a9a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a9a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9A4Cu;
    {
        const bool branch_taken_0x2a9a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A4Cu;
            // 0x2a9a50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a4c) {
            ctx->pc = 0x2A9A70u;
            goto label_2a9a70;
        }
    }
    ctx->pc = 0x2A9A54u;
label_2a9a54:
    // 0x2a9a54: 0x0  nop
    ctx->pc = 0x2a9a54u;
    // NOP
    // 0x2a9a58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a9a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a9a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a60: 0xc0aa608  jal         func_2A9820
    ctx->pc = 0x2A9A60u;
    SET_GPR_U32(ctx, 31, 0x2A9A68u);
    ctx->pc = 0x2A9A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A60u;
            // 0x2a9a64: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9820u;
    if (runtime->hasFunction(0x2A9820u)) {
        auto targetFn = runtime->lookupFunction(0x2A9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A68u; }
        if (ctx->pc != 0x2A9A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CultureAnalyzeParts__8CEditMapFii_0x2a9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A68u; }
        if (ctx->pc != 0x2A9A68u) { return; }
    }
    ctx->pc = 0x2A9A68u;
label_2a9a68:
    // 0x2a9a68: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2a9a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a9a6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a9a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a9a70:
    // 0x2a9a70: 0x8e820d40  lw          $v0, 0xD40($s4)
    ctx->pc = 0x2a9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3392)));
    // 0x2a9a74: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a9a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a9a78: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A9A78u;
    {
        const bool branch_taken_0x2a9a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9a78) {
            ctx->pc = 0x2A9A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9a54;
        }
    }
    ctx->pc = 0x2A9A80u;
    // 0x2a9a80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a9a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a9a84: 0x1a20fff0  blez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A9A84u;
    {
        const bool branch_taken_0x2a9a84 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2A9A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A84u;
            // 0x2a9a88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a84) {
            ctx->pc = 0x2A9A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9a48;
        }
    }
    ctx->pc = 0x2A9A8Cu;
    // 0x2a9a8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a9a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9a90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a9a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9a94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9a98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AA4u;
            // 0x2a9aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9AACu;
}
