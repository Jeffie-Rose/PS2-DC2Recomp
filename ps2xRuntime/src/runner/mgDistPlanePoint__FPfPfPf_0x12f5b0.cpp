#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgDistPlanePoint__FPfPfPf
// Address: 0x12f5b0 - 0x12f5f0
void mgDistPlanePoint__FPfPfPf_0x12f5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgDistPlanePoint__FPfPfPf_0x12f5b0");
#endif

    switch (ctx->pc) {
        case 0x12f5d4u: goto label_12f5d4;
        case 0x12f5e0u: goto label_12f5e0;
        default: break;
    }

    ctx->pc = 0x12f5b0u;

    // 0x12f5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f5b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12f5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12f5bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12f5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f5c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12f5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5cc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12F5CCu;
    SET_GPR_U32(ctx, 31, 0x12F5D4u);
    ctx->pc = 0x12F5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5CCu;
            // 0x12f5d0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F5D4u; }
        if (ctx->pc != 0x12F5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F5D4u; }
        if (ctx->pc != 0x12F5D4u) { return; }
    }
    ctx->pc = 0x12F5D4u;
label_12f5d4:
    // 0x12f5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5d8: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x12F5D8u;
    SET_GPR_U32(ctx, 31, 0x12F5E0u);
    ctx->pc = 0x12F5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5D8u;
            // 0x12f5dc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F5E0u; }
        if (ctx->pc != 0x12F5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F5E0u; }
        if (ctx->pc != 0x12F5E0u) { return; }
    }
    ctx->pc = 0x12F5E0u;
label_12f5e0:
    // 0x12f5e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12f5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5E8u;
            // 0x12f5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F5F0u;
}
