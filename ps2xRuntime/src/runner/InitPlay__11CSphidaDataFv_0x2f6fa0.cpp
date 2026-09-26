#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPlay__11CSphidaDataFv
// Address: 0x2f6fa0 - 0x2f6fe4
void InitPlay__11CSphidaDataFv_0x2f6fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPlay__11CSphidaDataFv_0x2f6fa0");
#endif

    switch (ctx->pc) {
        case 0x2f6fc4u: goto label_2f6fc4;
        case 0x2f6fd4u: goto label_2f6fd4;
        default: break;
    }

    ctx->pc = 0x2f6fa0u;

    // 0x2f6fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6fac: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2f6facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f6fb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6fb4: 0xa4801478  sh          $zero, 0x1478($a0)
    ctx->pc = 0x2f6fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5240), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f6fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fbc: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F6FBCu;
    SET_GPR_U32(ctx, 31, 0x2F6FC4u);
    ctx->pc = 0x2F6FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6FBCu;
            // 0x2f6fc0: 0x26041448  addiu       $a0, $s0, 0x1448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6FC4u; }
        if (ctx->pc != 0x2F6FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6FC4u; }
        if (ctx->pc != 0x2F6FC4u) { return; }
    }
    ctx->pc = 0x2F6FC4u;
label_2f6fc4:
    // 0x2f6fc4: 0x2604147c  addiu       $a0, $s0, 0x147C
    ctx->pc = 0x2f6fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5244));
    // 0x2f6fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fcc: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F6FCCu;
    SET_GPR_U32(ctx, 31, 0x2F6FD4u);
    ctx->pc = 0x2F6FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6FCCu;
            // 0x2f6fd0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6FD4u; }
        if (ctx->pc != 0x2F6FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6FD4u; }
        if (ctx->pc != 0x2F6FD4u) { return; }
    }
    ctx->pc = 0x2F6FD4u;
label_2f6fd4:
    // 0x2f6fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6FDCu;
            // 0x2f6fe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6FE4u;
}
