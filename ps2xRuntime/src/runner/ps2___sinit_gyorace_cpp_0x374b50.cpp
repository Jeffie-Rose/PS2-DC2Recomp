#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_gyorace.cpp
// Address: 0x374b50 - 0x374b90
void ps2___sinit_gyorace_cpp_0x374b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_gyorace_cpp_0x374b50");
#endif

    switch (ctx->pc) {
        case 0x374b64u: goto label_374b64;
        case 0x374b70u: goto label_374b70;
        case 0x374b84u: goto label_374b84;
        default: break;
    }

    ctx->pc = 0x374b50u;

    // 0x374b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374b54: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374b5c: 0xc04e640  jal         func_139900
    ctx->pc = 0x374B5Cu;
    SET_GPR_U32(ctx, 31, 0x374B64u);
    ctx->pc = 0x374B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374B5Cu;
            // 0x374b60: 0x2484a220  addiu       $a0, $a0, -0x5DE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B64u; }
        if (ctx->pc != 0x374B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B64u; }
        if (ctx->pc != 0x374B64u) { return; }
    }
    ctx->pc = 0x374B64u;
label_374b64:
    // 0x374b64: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374b68: 0xc04e640  jal         func_139900
    ctx->pc = 0x374B68u;
    SET_GPR_U32(ctx, 31, 0x374B70u);
    ctx->pc = 0x374B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374B68u;
            // 0x374b6c: 0x2484a250  addiu       $a0, $a0, -0x5DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B70u; }
        if (ctx->pc != 0x374B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B70u; }
        if (ctx->pc != 0x374B70u) { return; }
    }
    ctx->pc = 0x374B70u;
label_374b70:
    // 0x374b70: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x374b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x374b74: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374b78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x374b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x374b7c: 0xc04c58c  jal         func_131630
    ctx->pc = 0x374B7Cu;
    SET_GPR_U32(ctx, 31, 0x374B84u);
    ctx->pc = 0x374B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374B7Cu;
            // 0x374b80: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131630u;
    if (runtime->hasFunction(0x131630u)) {
        auto targetFn = runtime->lookupFunction(0x131630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B84u; }
        if (ctx->pc != 0x374B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9mgCCameraFf_0x131630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374B84u; }
        if (ctx->pc != 0x374B84u) { return; }
    }
    ctx->pc = 0x374B84u;
label_374b84:
    // 0x374b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374b88: 0x3e00008  jr          $ra
    ctx->pc = 0x374B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374B88u;
            // 0x374b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374B90u;
}
