#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: supplement_crt0
// Address: 0x118c40 - 0x118c88
void supplement_crt0_0x118c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("supplement_crt0_0x118c40");
#endif

    switch (ctx->pc) {
        case 0x118c64u: goto label_118c64;
        case 0x118c74u: goto label_118c74;
        default: break;
    }

    ctx->pc = 0x118c40u;

    // 0x118c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x118c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x118c4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x118c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c50: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x118c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x118c54: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x118c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x118c58: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x118c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x118c5c: 0xc044038  jal         func_1100E0
    ctx->pc = 0x118C5Cu;
    SET_GPR_U32(ctx, 31, 0x118C64u);
    ctx->pc = 0x118C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118C5Cu;
            // 0x118c60: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C64u; }
        if (ctx->pc != 0x118C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C64u; }
        if (ctx->pc != 0x118C64u) { return; }
    }
    ctx->pc = 0x118C64u;
label_118c64:
    // 0x118c64: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x118c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x118c68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x118c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x118c6c: 0xc044038  jal         func_1100E0
    ctx->pc = 0x118C6Cu;
    SET_GPR_U32(ctx, 31, 0x118C74u);
    ctx->pc = 0x118C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118C6Cu;
            // 0x118c70: 0xac621594  sw          $v0, 0x1594($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C74u; }
        if (ctx->pc != 0x118C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C74u; }
        if (ctx->pc != 0x118C74u) { return; }
    }
    ctx->pc = 0x118C74u;
label_118c74:
    // 0x118c74: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x118c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x118c78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118c7c: 0xac621598  sw          $v0, 0x1598($v1)
    ctx->pc = 0x118c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5528), GPR_U32(ctx, 2));
    // 0x118c80: 0x3e00008  jr          $ra
    ctx->pc = 0x118C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118C80u;
            // 0x118c84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118C88u;
}
