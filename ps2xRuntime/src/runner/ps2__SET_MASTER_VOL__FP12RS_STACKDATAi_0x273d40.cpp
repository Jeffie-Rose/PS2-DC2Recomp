#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MASTER_VOL__FP12RS_STACKDATAi
// Address: 0x273d40 - 0x273d94
void ps2__SET_MASTER_VOL__FP12RS_STACKDATAi_0x273d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MASTER_VOL__FP12RS_STACKDATAi_0x273d40");
#endif

    switch (ctx->pc) {
        case 0x273d54u: goto label_273d54;
        case 0x273d64u: goto label_273d64;
        case 0x273d70u: goto label_273d70;
        case 0x273d7cu: goto label_273d7c;
        default: break;
    }

    ctx->pc = 0x273d40u;

    // 0x273d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x273d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x273d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x273d48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x273d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x273d4c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x273D4Cu;
    SET_GPR_U32(ctx, 31, 0x273D54u);
    ctx->pc = 0x273D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273D4Cu;
            // 0x273d50: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D54u; }
        if (ctx->pc != 0x273D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D54u; }
        if (ctx->pc != 0x273D54u) { return; }
    }
    ctx->pc = 0x273D54u;
label_273d54:
    // 0x273d54: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273d58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x273d58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x273d5c: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x273D5Cu;
    SET_GPR_U32(ctx, 31, 0x273D64u);
    ctx->pc = 0x273D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273D5Cu;
            // 0x273d60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D64u; }
        if (ctx->pc != 0x273D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D64u; }
        if (ctx->pc != 0x273D64u) { return; }
    }
    ctx->pc = 0x273D64u;
label_273d64:
    // 0x273d64: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x273d64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x273d68: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x273D68u;
    SET_GPR_U32(ctx, 31, 0x273D70u);
    ctx->pc = 0x273D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273D68u;
            // 0x273d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D70u; }
        if (ctx->pc != 0x273D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D70u; }
        if (ctx->pc != 0x273D70u) { return; }
    }
    ctx->pc = 0x273D70u;
label_273d70:
    // 0x273d70: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x273d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273d74: 0xc0a98e8  jal         func_2A63A0
    ctx->pc = 0x273D74u;
    SET_GPR_U32(ctx, 31, 0x273D7Cu);
    ctx->pc = 0x273D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273D74u;
            // 0x273d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D7Cu; }
        if (ctx->pc != 0x273D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D7Cu; }
        if (ctx->pc != 0x273D7Cu) { return; }
    }
    ctx->pc = 0x273D7Cu;
label_273d7c:
    // 0x273d7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x273d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273d80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x273d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x273d84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x273D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273D8Cu;
            // 0x273d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273D94u;
}
