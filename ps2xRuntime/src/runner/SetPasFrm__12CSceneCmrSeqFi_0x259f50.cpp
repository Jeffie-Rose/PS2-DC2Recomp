#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPasFrm__12CSceneCmrSeqFi
// Address: 0x259f50 - 0x259f84
void SetPasFrm__12CSceneCmrSeqFi_0x259f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPasFrm__12CSceneCmrSeqFi_0x259f50");
#endif

    switch (ctx->pc) {
        case 0x259f64u: goto label_259f64;
        default: break;
    }

    ctx->pc = 0x259f50u;

    // 0x259f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259f5c: 0xc096680  jal         func_259A00
    ctx->pc = 0x259F5Cu;
    SET_GPR_U32(ctx, 31, 0x259F64u);
    ctx->pc = 0x259F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259F5Cu;
            // 0x259f60: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F64u; }
        if (ctx->pc != 0x259F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F64u; }
        if (ctx->pc != 0x259F64u) { return; }
    }
    ctx->pc = 0x259F64u;
label_259f64:
    // 0x259f64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259F64u;
    {
        const bool branch_taken_0x259f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259F64u;
            // 0x259f68: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f64) {
            ctx->pc = 0x259F74u;
            goto label_259f74;
        }
    }
    ctx->pc = 0x259F6Cu;
    // 0x259f6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259f70: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x259f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_259f74:
    // 0x259f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x259F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259F7Cu;
            // 0x259f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259F84u;
}
