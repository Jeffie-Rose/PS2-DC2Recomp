#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13sndCSeSeqDataFv
// Address: 0x18df00 - 0x18df28
void ps2___ct__13sndCSeSeqDataFv_0x18df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13sndCSeSeqDataFv_0x18df00");
#endif

    switch (ctx->pc) {
        case 0x18df14u: goto label_18df14;
        default: break;
    }

    ctx->pc = 0x18df00u;

    // 0x18df00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18df04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18df08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18df08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18df0c: 0xc062d44  jal         func_18B510
    ctx->pc = 0x18DF0Cu;
    SET_GPR_U32(ctx, 31, 0x18DF14u);
    ctx->pc = 0x18DF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF0Cu;
            // 0x18df10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B510u;
    if (runtime->hasFunction(0x18B510u)) {
        auto targetFn = runtime->lookupFunction(0x18B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF14u; }
        if (ctx->pc != 0x18DF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13sndCSeSeqDataFv_0x18b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF14u; }
        if (ctx->pc != 0x18DF14u) { return; }
    }
    ctx->pc = 0x18DF14u;
label_18df14:
    // 0x18df14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18df14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18df18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18df1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18df1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18df20: 0x3e00008  jr          $ra
    ctx->pc = 0x18DF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF20u;
            // 0x18df24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DF28u;
}
