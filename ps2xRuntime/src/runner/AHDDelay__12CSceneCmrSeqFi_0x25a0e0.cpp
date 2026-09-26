#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AHDDelay__12CSceneCmrSeqFi
// Address: 0x25a0e0 - 0x25a114
void AHDDelay__12CSceneCmrSeqFi_0x25a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AHDDelay__12CSceneCmrSeqFi_0x25a0e0");
#endif

    switch (ctx->pc) {
        case 0x25a0f4u: goto label_25a0f4;
        default: break;
    }

    ctx->pc = 0x25a0e0u;

    // 0x25a0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a0ec: 0xc096698  jal         func_259A60
    ctx->pc = 0x25A0ECu;
    SET_GPR_U32(ctx, 31, 0x25A0F4u);
    ctx->pc = 0x25A0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A0ECu;
            // 0x25a0f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A60u;
    if (runtime->hasFunction(0x259A60u)) {
        auto targetFn = runtime->lookupFunction(0x259A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A0F4u; }
        if (ctx->pc != 0x25A0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A0F4u; }
        if (ctx->pc != 0x25A0F4u) { return; }
    }
    ctx->pc = 0x25A0F4u;
label_25a0f4:
    // 0x25a0f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A0F4u;
    {
        const bool branch_taken_0x25a0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A0F4u;
            // 0x25a0f8: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0f4) {
            ctx->pc = 0x25A104u;
            goto label_25a104;
        }
    }
    ctx->pc = 0x25A0FCu;
    // 0x25a0fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a100: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x25a100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_25a104:
    // 0x25a104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a10c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A10Cu;
            // 0x25a110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A114u;
}
