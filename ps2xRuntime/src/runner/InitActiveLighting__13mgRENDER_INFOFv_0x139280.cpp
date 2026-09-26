#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitActiveLighting__13mgRENDER_INFOFv
// Address: 0x139280 - 0x1392b0
void InitActiveLighting__13mgRENDER_INFOFv_0x139280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitActiveLighting__13mgRENDER_INFOFv_0x139280");
#endif

    switch (ctx->pc) {
        case 0x139294u: goto label_139294;
        case 0x1392a4u: goto label_1392a4;
        default: break;
    }

    ctx->pc = 0x139280u;

    // 0x139280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13928c: 0xc04e494  jal         func_139250
    ctx->pc = 0x13928Cu;
    SET_GPR_U32(ctx, 31, 0x139294u);
    ctx->pc = 0x139290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13928Cu;
            // 0x139290: 0xac8203f0  sw          $v0, 0x3F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139294u; }
        if (ctx->pc != 0x139294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139294u; }
        if (ctx->pc != 0x139294u) { return; }
    }
    ctx->pc = 0x139294u;
label_139294:
    // 0x139294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13929c: 0xc049c86  jal         func_127218
    ctx->pc = 0x13929Cu;
    SET_GPR_U32(ctx, 31, 0x1392A4u);
    ctx->pc = 0x1392A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13929Cu;
            // 0x1392a0: 0x24060150  addiu       $a2, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392A4u; }
        if (ctx->pc != 0x1392A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392A4u; }
        if (ctx->pc != 0x1392A4u) { return; }
    }
    ctx->pc = 0x1392A4u;
label_1392a4:
    // 0x1392a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1392a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1392a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1392A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1392ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1392A8u;
            // 0x1392ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1392B0u;
}
