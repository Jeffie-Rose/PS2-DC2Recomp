#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DIST_VECTOR2__FP12RS_STACKDATAi
// Address: 0x2e3790 - 0x2e37f8
void ps2__DIST_VECTOR2__FP12RS_STACKDATAi_0x2e3790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DIST_VECTOR2__FP12RS_STACKDATAi_0x2e3790");
#endif

    switch (ctx->pc) {
        case 0x2e37bcu: goto label_2e37bc;
        case 0x2e37c8u: goto label_2e37c8;
        case 0x2e37d8u: goto label_2e37d8;
        case 0x2e37e4u: goto label_2e37e4;
        default: break;
    }

    ctx->pc = 0x2e3790u;

    // 0x2e3790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3794: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e3794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e3798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e379c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e37a0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E37A0u;
    {
        const bool branch_taken_0x2e37a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E37A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37A0u;
            // 0x2e37a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37a0) {
            ctx->pc = 0x2E37B0u;
            goto label_2e37b0;
        }
    }
    ctx->pc = 0x2E37A8u;
    // 0x2e37a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E37A8u;
    {
        const bool branch_taken_0x2e37a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E37ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37A8u;
            // 0x2e37ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37a8) {
            ctx->pc = 0x2E37E8u;
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E37B0u;
label_2e37b0:
    // 0x2e37b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e37b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e37b4: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E37B4u;
    SET_GPR_U32(ctx, 31, 0x2E37BCu);
    ctx->pc = 0x2E37B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37B4u;
            // 0x2e37b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37BCu; }
        if (ctx->pc != 0x2E37BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37BCu; }
        if (ctx->pc != 0x2E37BCu) { return; }
    }
    ctx->pc = 0x2E37BCu;
label_2e37bc:
    // 0x2e37bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e37c0: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E37C0u;
    SET_GPR_U32(ctx, 31, 0x2E37C8u);
    ctx->pc = 0x2E37C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37C0u;
            // 0x2e37c4: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37C8u; }
        if (ctx->pc != 0x2E37C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37C8u; }
        if (ctx->pc != 0x2E37C8u) { return; }
    }
    ctx->pc = 0x2E37C8u;
label_2e37c8:
    // 0x2e37c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e37cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2e37ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e37d0: 0xc04c018  jal         func_130060
    ctx->pc = 0x2E37D0u;
    SET_GPR_U32(ctx, 31, 0x2E37D8u);
    ctx->pc = 0x2E37D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37D0u;
            // 0x2e37d4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37D8u; }
        if (ctx->pc != 0x2E37D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37D8u; }
        if (ctx->pc != 0x2E37D8u) { return; }
    }
    ctx->pc = 0x2E37D8u;
label_2e37d8:
    // 0x2e37d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e37d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e37dc: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E37DCu;
    SET_GPR_U32(ctx, 31, 0x2E37E4u);
    ctx->pc = 0x2E37E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37DCu;
            // 0x2e37e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37E4u; }
        if (ctx->pc != 0x2E37E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37E4u; }
        if (ctx->pc != 0x2E37E4u) { return; }
    }
    ctx->pc = 0x2E37E4u;
label_2e37e4:
    // 0x2e37e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e37e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e37e8:
    // 0x2e37e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e37e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e37ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e37ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e37f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E37F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E37F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37F0u;
            // 0x2e37f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E37F8u;
}
