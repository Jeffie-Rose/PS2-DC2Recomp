#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Preset2D__10CPreSpriteFv
// Address: 0x1e7d70 - 0x1e7df0
void Preset2D__10CPreSpriteFv_0x1e7d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Preset2D__10CPreSpriteFv_0x1e7d70");
#endif

    switch (ctx->pc) {
        case 0x1e7d88u: goto label_1e7d88;
        case 0x1e7d94u: goto label_1e7d94;
        case 0x1e7da0u: goto label_1e7da0;
        case 0x1e7db0u: goto label_1e7db0;
        case 0x1e7dbcu: goto label_1e7dbc;
        case 0x1e7dc8u: goto label_1e7dc8;
        case 0x1e7dd4u: goto label_1e7dd4;
        case 0x1e7de0u: goto label_1e7de0;
        default: break;
    }

    ctx->pc = 0x1e7d70u;

    // 0x1e7d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7d74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7d80: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1E7D80u;
    SET_GPR_U32(ctx, 31, 0x1E7D88u);
    ctx->pc = 0x1E7D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D80u;
            // 0x1e7d84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D88u; }
        if (ctx->pc != 0x1E7D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D88u; }
        if (ctx->pc != 0x1E7D88u) { return; }
    }
    ctx->pc = 0x1E7D88u;
label_1e7d88:
    // 0x1e7d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d8c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1E7D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E7D94u);
    ctx->pc = 0x1E7D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D8Cu;
            // 0x1e7d90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D94u; }
        if (ctx->pc != 0x1E7D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D94u; }
        if (ctx->pc != 0x1E7D94u) { return; }
    }
    ctx->pc = 0x1E7D94u;
label_1e7d94:
    // 0x1e7d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d98: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1E7D98u;
    SET_GPR_U32(ctx, 31, 0x1E7DA0u);
    ctx->pc = 0x1E7D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D98u;
            // 0x1e7d9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DA0u; }
        if (ctx->pc != 0x1E7DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DA0u; }
        if (ctx->pc != 0x1E7DA0u) { return; }
    }
    ctx->pc = 0x1E7DA0u;
label_1e7da0:
    // 0x1e7da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7da4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7da8: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x1E7DA8u;
    SET_GPR_U32(ctx, 31, 0x1E7DB0u);
    ctx->pc = 0x1E7DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DA8u;
            // 0x1e7dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DB0u; }
        if (ctx->pc != 0x1E7DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DB0u; }
        if (ctx->pc != 0x1E7DB0u) { return; }
    }
    ctx->pc = 0x1E7DB0u;
label_1e7db0:
    // 0x1e7db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7db4: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1E7DB4u;
    SET_GPR_U32(ctx, 31, 0x1E7DBCu);
    ctx->pc = 0x1E7DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DB4u;
            // 0x1e7db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DBCu; }
        if (ctx->pc != 0x1E7DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DBCu; }
        if (ctx->pc != 0x1E7DBCu) { return; }
    }
    ctx->pc = 0x1E7DBCu;
label_1e7dbc:
    // 0x1e7dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dc0: 0xc04d424  jal         func_135090
    ctx->pc = 0x1E7DC0u;
    SET_GPR_U32(ctx, 31, 0x1E7DC8u);
    ctx->pc = 0x1E7DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DC0u;
            // 0x1e7dc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DC8u; }
        if (ctx->pc != 0x1E7DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DC8u; }
        if (ctx->pc != 0x1E7DC8u) { return; }
    }
    ctx->pc = 0x1E7DC8u;
label_1e7dc8:
    // 0x1e7dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dcc: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1E7DCCu;
    SET_GPR_U32(ctx, 31, 0x1E7DD4u);
    ctx->pc = 0x1E7DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DCCu;
            // 0x1e7dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DD4u; }
        if (ctx->pc != 0x1E7DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DD4u; }
        if (ctx->pc != 0x1E7DD4u) { return; }
    }
    ctx->pc = 0x1E7DD4u;
label_1e7dd4:
    // 0x1e7dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dd8: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1E7DD8u;
    SET_GPR_U32(ctx, 31, 0x1E7DE0u);
    ctx->pc = 0x1E7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DD8u;
            // 0x1e7ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DE0u; }
        if (ctx->pc != 0x1E7DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DE0u; }
        if (ctx->pc != 0x1E7DE0u) { return; }
    }
    ctx->pc = 0x1E7DE0u;
label_1e7de0:
    // 0x1e7de0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DE8u;
            // 0x1e7dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7DF0u;
}
