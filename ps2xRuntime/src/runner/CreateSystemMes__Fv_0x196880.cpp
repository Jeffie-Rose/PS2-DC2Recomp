#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateSystemMes__Fv
// Address: 0x196880 - 0x1968b8
void CreateSystemMes__Fv_0x196880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateSystemMes__Fv_0x196880");
#endif

    switch (ctx->pc) {
        case 0x196894u: goto label_196894;
        case 0x1968a0u: goto label_1968a0;
        case 0x1968acu: goto label_1968ac;
        default: break;
    }

    ctx->pc = 0x196880u;

    // 0x196880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19688c: 0xc065a30  jal         func_1968C0
    ctx->pc = 0x19688Cu;
    SET_GPR_U32(ctx, 31, 0x196894u);
    ctx->pc = 0x196890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19688Cu;
            // 0x196890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1968C0u;
    if (runtime->hasFunction(0x1968C0u)) {
        auto targetFn = runtime->lookupFunction(0x1968C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196894u; }
        if (ctx->pc != 0x196894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSystemMes__Fii_0x1968c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196894u; }
        if (ctx->pc != 0x196894u) { return; }
    }
    ctx->pc = 0x196894u;
label_196894:
    // 0x196894: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x196894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196898: 0xc065a30  jal         func_1968C0
    ctx->pc = 0x196898u;
    SET_GPR_U32(ctx, 31, 0x1968A0u);
    ctx->pc = 0x19689Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196898u;
            // 0x19689c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1968C0u;
    if (runtime->hasFunction(0x1968C0u)) {
        auto targetFn = runtime->lookupFunction(0x1968C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968A0u; }
        if (ctx->pc != 0x1968A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSystemMes__Fii_0x1968c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968A0u; }
        if (ctx->pc != 0x1968A0u) { return; }
    }
    ctx->pc = 0x1968A0u;
label_1968a0:
    // 0x1968a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1968a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1968a4: 0xc065a30  jal         func_1968C0
    ctx->pc = 0x1968A4u;
    SET_GPR_U32(ctx, 31, 0x1968ACu);
    ctx->pc = 0x1968A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1968A4u;
            // 0x1968a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1968C0u;
    if (runtime->hasFunction(0x1968C0u)) {
        auto targetFn = runtime->lookupFunction(0x1968C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968ACu; }
        if (ctx->pc != 0x1968ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSystemMes__Fii_0x1968c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968ACu; }
        if (ctx->pc != 0x1968ACu) { return; }
    }
    ctx->pc = 0x1968ACu;
label_1968ac:
    // 0x1968ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1968acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1968b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1968B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1968B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1968B0u;
            // 0x1968b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1968B8u;
}
