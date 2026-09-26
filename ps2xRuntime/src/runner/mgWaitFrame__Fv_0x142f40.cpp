#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgWaitFrame__Fv
// Address: 0x142f40 - 0x142f8c
void mgWaitFrame__Fv_0x142f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgWaitFrame__Fv_0x142f40");
#endif

    switch (ctx->pc) {
        case 0x142f54u: goto label_142f54;
        case 0x142f64u: goto label_142f64;
        case 0x142f78u: goto label_142f78;
        case 0x142f80u: goto label_142f80;
        default: break;
    }

    ctx->pc = 0x142f40u;

    // 0x142f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142f44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142f4c: 0xc040ce6  jal         func_103398
    ctx->pc = 0x142F4Cu;
    SET_GPR_U32(ctx, 31, 0x142F54u);
    ctx->pc = 0x142F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142F4Cu;
            // 0x142f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F54u; }
        if (ctx->pc != 0x142F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F54u; }
        if (ctx->pc != 0x142F54u) { return; }
    }
    ctx->pc = 0x142F54u;
label_142f54:
    // 0x142f54: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x142F54u;
    {
        const bool branch_taken_0x142f54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x142F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142F54u;
            // 0x142f58: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f54) {
            ctx->pc = 0x142F80u;
            goto label_142f80;
        }
    }
    ctx->pc = 0x142F5Cu;
    // 0x142f5c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x142F5Cu;
    SET_GPR_U32(ctx, 31, 0x142F64u);
    ctx->pc = 0x142F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142F5Cu;
            // 0x142f60: 0x248426b0  addiu       $a0, $a0, 0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F64u; }
        if (ctx->pc != 0x142F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F64u; }
        if (ctx->pc != 0x142F64u) { return; }
    }
    ctx->pc = 0x142F64u;
label_142f64:
    // 0x142f64: 0x8f828774  lw          $v0, -0x788C($gp)
    ctx->pc = 0x142f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x142f68: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x142f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x142f6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x142f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142f70: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x142F70u;
    SET_GPR_U32(ctx, 31, 0x142F78u);
    ctx->pc = 0x142F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142F70u;
            // 0x142f74: 0x248426c0  addiu       $a0, $a0, 0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F78u; }
        if (ctx->pc != 0x142F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F78u; }
        if (ctx->pc != 0x142F78u) { return; }
    }
    ctx->pc = 0x142F78u;
label_142f78:
    // 0x142f78: 0xc0463ec  jal         func_118FB0
    ctx->pc = 0x142F78u;
    SET_GPR_U32(ctx, 31, 0x142F80u);
    ctx->pc = 0x142F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142F78u;
            // 0x142f7c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118FB0u;
    if (runtime->hasFunction(0x118FB0u)) {
        auto targetFn = runtime->lookupFunction(0x118FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F80u; }
        if (ctx->pc != 0x142F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x118fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F80u; }
        if (ctx->pc != 0x142F80u) { return; }
    }
    ctx->pc = 0x142F80u;
label_142f80:
    // 0x142f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142f84: 0x3e00008  jr          $ra
    ctx->pc = 0x142F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142F84u;
            // 0x142f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142F8Cu;
}
