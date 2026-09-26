#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetMenuScissor__Fv
// Address: 0x2201c0 - 0x2201fc
void ResetMenuScissor__Fv_0x2201c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetMenuScissor__Fv_0x2201c0");
#endif

    switch (ctx->pc) {
        case 0x2201e8u: goto label_2201e8;
        case 0x2201f0u: goto label_2201f0;
        default: break;
    }

    ctx->pc = 0x2201c0u;

    // 0x2201c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2201c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2201c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2201c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2201c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2201cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2201ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2201d0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2201d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2201d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2201d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201d8: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2201d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2201dc: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x2201dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2201e0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2201E0u;
    SET_GPR_U32(ctx, 31, 0x2201E8u);
    ctx->pc = 0x2201E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2201E0u;
            // 0x2201e4: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201E8u; }
        if (ctx->pc != 0x2201E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201E8u; }
        if (ctx->pc != 0x2201E8u) { return; }
    }
    ctx->pc = 0x2201E8u;
label_2201e8:
    // 0x2201e8: 0xc088050  jal         func_220140
    ctx->pc = 0x2201E8u;
    SET_GPR_U32(ctx, 31, 0x2201F0u);
    ctx->pc = 0x2201ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2201E8u;
            // 0x2201ec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201F0u; }
        if (ctx->pc != 0x2201F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201F0u; }
        if (ctx->pc != 0x2201F0u) { return; }
    }
    ctx->pc = 0x2201F0u;
label_2201f0:
    // 0x2201f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2201f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2201f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2201F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2201F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2201F4u;
            // 0x2201f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2201FCu;
}
