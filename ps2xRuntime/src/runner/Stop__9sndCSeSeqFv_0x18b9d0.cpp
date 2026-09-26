#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Stop__9sndCSeSeqFv
// Address: 0x18b9d0 - 0x18ba04
void Stop__9sndCSeSeqFv_0x18b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Stop__9sndCSeSeqFv_0x18b9d0");
#endif

    switch (ctx->pc) {
        case 0x18b9e4u: goto label_18b9e4;
        default: break;
    }

    ctx->pc = 0x18b9d0u;

    // 0x18b9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b9dc: 0xc062f74  jal         func_18BDD0
    ctx->pc = 0x18B9DCu;
    SET_GPR_U32(ctx, 31, 0x18B9E4u);
    ctx->pc = 0x18B9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B9DCu;
            // 0x18b9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BDD0u;
    if (runtime->hasFunction(0x18BDD0u)) {
        auto targetFn = runtime->lookupFunction(0x18BDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B9E4u; }
        if (ctx->pc != 0x18B9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllNoteOff__9sndCSeSeqFv_0x18bdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B9E4u; }
        if (ctx->pc != 0x18B9E4u) { return; }
    }
    ctx->pc = 0x18B9E4u;
label_18b9e4:
    // 0x18b9e4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x18b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x18b9e8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x18b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x18b9ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x18b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x18b9f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x18b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x18b9f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b9f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x18B9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B9FCu;
            // 0x18ba00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BA04u;
}
