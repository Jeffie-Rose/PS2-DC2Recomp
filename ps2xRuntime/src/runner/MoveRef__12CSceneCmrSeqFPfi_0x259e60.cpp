#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveRef__12CSceneCmrSeqFPfi
// Address: 0x259e60 - 0x259ebc
void MoveRef__12CSceneCmrSeqFPfi_0x259e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveRef__12CSceneCmrSeqFPfi_0x259e60");
#endif

    switch (ctx->pc) {
        case 0x259e80u: goto label_259e80;
        case 0x259ea0u: goto label_259ea0;
        default: break;
    }

    ctx->pc = 0x259e60u;

    // 0x259e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259e64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x259e68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x259e6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259e70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x259e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x259e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e78: 0xc096680  jal         func_259A00
    ctx->pc = 0x259E78u;
    SET_GPR_U32(ctx, 31, 0x259E80u);
    ctx->pc = 0x259E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259E78u;
            // 0x259e7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E80u; }
        if (ctx->pc != 0x259E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E80u; }
        if (ctx->pc != 0x259E80u) { return; }
    }
    ctx->pc = 0x259E80u;
label_259e80:
    // 0x259e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e84: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x259E84u;
    {
        const bool branch_taken_0x259e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x259e84) {
            ctx->pc = 0x259EA4u;
            goto label_259ea4;
        }
    }
    ctx->pc = 0x259E8Cu;
    // 0x259e8c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x259e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x259e90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x259e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x259e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x259e98: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259E98u;
    SET_GPR_U32(ctx, 31, 0x259EA0u);
    ctx->pc = 0x259E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259E98u;
            // 0x259e9c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259EA0u; }
        if (ctx->pc != 0x259EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259EA0u; }
        if (ctx->pc != 0x259EA0u) { return; }
    }
    ctx->pc = 0x259EA0u;
label_259ea0:
    // 0x259ea0: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x259ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_259ea4:
    // 0x259ea4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x259ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259ea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x259EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259EB4u;
            // 0x259eb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259EBCu;
}
