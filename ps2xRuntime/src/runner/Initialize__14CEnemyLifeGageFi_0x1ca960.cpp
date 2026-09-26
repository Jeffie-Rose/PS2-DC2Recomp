#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CEnemyLifeGageFi
// Address: 0x1ca960 - 0x1ca994
void Initialize__14CEnemyLifeGageFi_0x1ca960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CEnemyLifeGageFi_0x1ca960");
#endif

    switch (ctx->pc) {
        case 0x1ca974u: goto label_1ca974;
        default: break;
    }

    ctx->pc = 0x1ca960u;

    // 0x1ca960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca96c: 0xc072a44  jal         func_1CA910
    ctx->pc = 0x1CA96Cu;
    SET_GPR_U32(ctx, 31, 0x1CA974u);
    ctx->pc = 0x1CA970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA96Cu;
            // 0x1ca970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA910u;
    if (runtime->hasFunction(0x1CA910u)) {
        auto targetFn = runtime->lookupFunction(0x1CA910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA974u; }
        if (ctx->pc != 0x1CA974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetGekirin__14CEnemyLifeGageFi_0x1ca910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA974u; }
        if (ctx->pc != 0x1CA974u) { return; }
    }
    ctx->pc = 0x1CA974u;
label_1ca974:
    // 0x1ca974: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ca974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ca978: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ca978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ca97c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ca97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ca980: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ca980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1ca984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca98c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA98Cu;
            // 0x1ca990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA994u;
}
