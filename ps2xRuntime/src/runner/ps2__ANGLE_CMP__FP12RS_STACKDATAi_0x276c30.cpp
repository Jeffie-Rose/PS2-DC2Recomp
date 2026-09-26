#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ANGLE_CMP__FP12RS_STACKDATAi
// Address: 0x276c30 - 0x276c8c
void ps2__ANGLE_CMP__FP12RS_STACKDATAi_0x276c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ANGLE_CMP__FP12RS_STACKDATAi_0x276c30");
#endif

    switch (ctx->pc) {
        case 0x276c44u: goto label_276c44;
        case 0x276c54u: goto label_276c54;
        case 0x276c64u: goto label_276c64;
        case 0x276c6cu: goto label_276c6c;
        case 0x276c78u: goto label_276c78;
        default: break;
    }

    ctx->pc = 0x276c30u;

    // 0x276c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276c3c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276C3Cu;
    SET_GPR_U32(ctx, 31, 0x276C44u);
    ctx->pc = 0x276C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276C3Cu;
            // 0x276c40: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C44u; }
        if (ctx->pc != 0x276C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C44u; }
        if (ctx->pc != 0x276C44u) { return; }
    }
    ctx->pc = 0x276C44u;
label_276c44:
    // 0x276c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x276c48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x276c4c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276C4Cu;
    SET_GPR_U32(ctx, 31, 0x276C54u);
    ctx->pc = 0x276C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276C4Cu;
            // 0x276c50: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C54u; }
        if (ctx->pc != 0x276C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C54u; }
        if (ctx->pc != 0x276C54u) { return; }
    }
    ctx->pc = 0x276C54u;
label_276c54:
    // 0x276c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c58: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x276c58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x276c5c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276C5Cu;
    SET_GPR_U32(ctx, 31, 0x276C64u);
    ctx->pc = 0x276C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276C5Cu;
            // 0x276c60: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C64u; }
        if (ctx->pc != 0x276C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C64u; }
        if (ctx->pc != 0x276C64u) { return; }
    }
    ctx->pc = 0x276C64u;
label_276c64:
    // 0x276c64: 0xc04c344  jal         func_130D10
    ctx->pc = 0x276C64u;
    SET_GPR_U32(ctx, 31, 0x276C6Cu);
    ctx->pc = 0x276C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276C64u;
            // 0x276c68: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C6Cu; }
        if (ctx->pc != 0x276C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C6Cu; }
        if (ctx->pc != 0x276C6Cu) { return; }
    }
    ctx->pc = 0x276C6Cu;
label_276c6c:
    // 0x276c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c70: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x276C70u;
    SET_GPR_U32(ctx, 31, 0x276C78u);
    ctx->pc = 0x276C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276C70u;
            // 0x276c74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C78u; }
        if (ctx->pc != 0x276C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C78u; }
        if (ctx->pc != 0x276C78u) { return; }
    }
    ctx->pc = 0x276C78u;
label_276c78:
    // 0x276c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276c84: 0x3e00008  jr          $ra
    ctx->pc = 0x276C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276C84u;
            // 0x276c88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276C8Cu;
}
