#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReStartEnvSoundMenu__Fv
// Address: 0x250b50 - 0x250ba8
void ReStartEnvSoundMenu__Fv_0x250b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReStartEnvSoundMenu__Fv_0x250b50");
#endif

    switch (ctx->pc) {
        case 0x250b64u: goto label_250b64;
        case 0x250b70u: goto label_250b70;
        case 0x250b88u: goto label_250b88;
        case 0x250b90u: goto label_250b90;
        case 0x250b9cu: goto label_250b9c;
        default: break;
    }

    ctx->pc = 0x250b50u;

    // 0x250b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250b58: 0xc78c9790  lwc1        $f12, -0x6870($gp)
    ctx->pc = 0x250b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x250b5c: 0xc063508  jal         func_18D420
    ctx->pc = 0x250B5Cu;
    SET_GPR_U32(ctx, 31, 0x250B64u);
    ctx->pc = 0x250B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B5Cu;
            // 0x250b60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D420u;
    if (runtime->hasFunction(0x18D420u)) {
        auto targetFn = runtime->lookupFunction(0x18D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B64u; }
        if (ctx->pc != 0x250B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetPortVol__Fif_0x18d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B64u; }
        if (ctx->pc != 0x250B64u) { return; }
    }
    ctx->pc = 0x250B64u;
label_250b64:
    // 0x250b64: 0xc78c9794  lwc1        $f12, -0x686C($gp)
    ctx->pc = 0x250b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x250b68: 0xc063508  jal         func_18D420
    ctx->pc = 0x250B68u;
    SET_GPR_U32(ctx, 31, 0x250B70u);
    ctx->pc = 0x250B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B68u;
            // 0x250b6c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D420u;
    if (runtime->hasFunction(0x18D420u)) {
        auto targetFn = runtime->lookupFunction(0x18D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B70u; }
        if (ctx->pc != 0x250B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetPortVol__Fif_0x18d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B70u; }
        if (ctx->pc != 0x250B70u) { return; }
    }
    ctx->pc = 0x250B70u;
label_250b70:
    // 0x250b70: 0x8f82979c  lw          $v0, -0x6864($gp)
    ctx->pc = 0x250b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940572)));
    // 0x250b74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x250B74u;
    {
        const bool branch_taken_0x250b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250b74) {
            ctx->pc = 0x250B88u;
            goto label_250b88;
        }
    }
    ctx->pc = 0x250B7Cu;
    // 0x250b7c: 0xc78c9798  lwc1        $f12, -0x6868($gp)
    ctx->pc = 0x250b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x250b80: 0xc063508  jal         func_18D420
    ctx->pc = 0x250B80u;
    SET_GPR_U32(ctx, 31, 0x250B88u);
    ctx->pc = 0x250B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B80u;
            // 0x250b84: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D420u;
    if (runtime->hasFunction(0x18D420u)) {
        auto targetFn = runtime->lookupFunction(0x18D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B88u; }
        if (ctx->pc != 0x250B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetPortVol__Fif_0x18d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B88u; }
        if (ctx->pc != 0x250B88u) { return; }
    }
    ctx->pc = 0x250B88u;
label_250b88:
    // 0x250b88: 0xc06421c  jal         func_190870
    ctx->pc = 0x250B88u;
    SET_GPR_U32(ctx, 31, 0x250B90u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B90u; }
        if (ctx->pc != 0x250B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B90u; }
        if (ctx->pc != 0x250B90u) { return; }
    }
    ctx->pc = 0x250B90u;
label_250b90:
    // 0x250b90: 0xc78c97a0  lwc1        $f12, -0x6860($gp)
    ctx->pc = 0x250b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x250b94: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x250B94u;
    SET_GPR_U32(ctx, 31, 0x250B9Cu);
    ctx->pc = 0x250B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B94u;
            // 0x250b98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (runtime->hasFunction(0x2A6720u)) {
        auto targetFn = runtime->lookupFunction(0x2A6720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B9Cu; }
        if (ctx->pc != 0x250B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvBGMVol__6CSceneFf_0x2a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B9Cu; }
        if (ctx->pc != 0x250B9Cu) { return; }
    }
    ctx->pc = 0x250B9Cu;
label_250b9c:
    // 0x250b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x250BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250BA0u;
            // 0x250ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x250BA8u;
}
