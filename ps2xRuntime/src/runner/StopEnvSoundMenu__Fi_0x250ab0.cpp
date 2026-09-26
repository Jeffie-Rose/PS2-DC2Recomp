#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopEnvSoundMenu__Fi
// Address: 0x250ab0 - 0x250b44
void StopEnvSoundMenu__Fi_0x250ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopEnvSoundMenu__Fi_0x250ab0");
#endif

    switch (ctx->pc) {
        case 0x250ac8u: goto label_250ac8;
        case 0x250ad4u: goto label_250ad4;
        case 0x250ae4u: goto label_250ae4;
        case 0x250af0u: goto label_250af0;
        case 0x250b00u: goto label_250b00;
        case 0x250b10u: goto label_250b10;
        case 0x250b18u: goto label_250b18;
        case 0x250b20u: goto label_250b20;
        case 0x250b28u: goto label_250b28;
        case 0x250b34u: goto label_250b34;
        default: break;
    }

    ctx->pc = 0x250ab0u;

    // 0x250ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x250ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x250abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ac0: 0xc06354c  jal         func_18D530
    ctx->pc = 0x250AC0u;
    SET_GPR_U32(ctx, 31, 0x250AC8u);
    ctx->pc = 0x250AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250AC0u;
            // 0x250ac4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D530u;
    if (runtime->hasFunction(0x18D530u)) {
        auto targetFn = runtime->lookupFunction(0x18D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250AC8u; }
        if (ctx->pc != 0x250AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetPortVol__Fi_0x18d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250AC8u; }
        if (ctx->pc != 0x250AC8u) { return; }
    }
    ctx->pc = 0x250AC8u;
label_250ac8:
    // 0x250ac8: 0xe7809790  swc1        $f0, -0x6870($gp)
    ctx->pc = 0x250ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940560), bits); }
    // 0x250acc: 0xc06354c  jal         func_18D530
    ctx->pc = 0x250ACCu;
    SET_GPR_U32(ctx, 31, 0x250AD4u);
    ctx->pc = 0x250AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250ACCu;
            // 0x250ad0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D530u;
    if (runtime->hasFunction(0x18D530u)) {
        auto targetFn = runtime->lookupFunction(0x18D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250AD4u; }
        if (ctx->pc != 0x250AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetPortVol__Fi_0x18d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250AD4u; }
        if (ctx->pc != 0x250AD4u) { return; }
    }
    ctx->pc = 0x250AD4u;
label_250ad4:
    // 0x250ad4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x250ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250ad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x250ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250adc: 0xc063508  jal         func_18D420
    ctx->pc = 0x250ADCu;
    SET_GPR_U32(ctx, 31, 0x250AE4u);
    ctx->pc = 0x250AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250ADCu;
            // 0x250ae0: 0xe7809794  swc1        $f0, -0x686C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940564), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D420u;
    if (runtime->hasFunction(0x18D420u)) {
        auto targetFn = runtime->lookupFunction(0x18D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250AE4u; }
        if (ctx->pc != 0x250AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetPortVol__Fif_0x18d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250AE4u; }
        if (ctx->pc != 0x250AE4u) { return; }
    }
    ctx->pc = 0x250AE4u;
label_250ae4:
    // 0x250ae4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x250ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250ae8: 0xc063508  jal         func_18D420
    ctx->pc = 0x250AE8u;
    SET_GPR_U32(ctx, 31, 0x250AF0u);
    ctx->pc = 0x250AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250AE8u;
            // 0x250aec: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D420u;
    if (runtime->hasFunction(0x18D420u)) {
        auto targetFn = runtime->lookupFunction(0x18D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250AF0u; }
        if (ctx->pc != 0x250AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetPortVol__Fif_0x18d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250AF0u; }
        if (ctx->pc != 0x250AF0u) { return; }
    }
    ctx->pc = 0x250AF0u;
label_250af0:
    // 0x250af0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x250AF0u;
    {
        const bool branch_taken_0x250af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250AF0u;
            // 0x250af4: 0xaf90979c  sw          $s0, -0x6864($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940572), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250af0) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x250AF8u;
    // 0x250af8: 0xc06354c  jal         func_18D530
    ctx->pc = 0x250AF8u;
    SET_GPR_U32(ctx, 31, 0x250B00u);
    ctx->pc = 0x250AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250AF8u;
            // 0x250afc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D530u;
    if (runtime->hasFunction(0x18D530u)) {
        auto targetFn = runtime->lookupFunction(0x18D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B00u; }
        if (ctx->pc != 0x250B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetPortVol__Fi_0x18d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B00u; }
        if (ctx->pc != 0x250B00u) { return; }
    }
    ctx->pc = 0x250B00u;
label_250b00:
    // 0x250b00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x250b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250b04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x250b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x250b08: 0xc063508  jal         func_18D420
    ctx->pc = 0x250B08u;
    SET_GPR_U32(ctx, 31, 0x250B10u);
    ctx->pc = 0x250B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B08u;
            // 0x250b0c: 0xe7809798  swc1        $f0, -0x6868($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940568), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D420u;
    if (runtime->hasFunction(0x18D420u)) {
        auto targetFn = runtime->lookupFunction(0x18D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B10u; }
        if (ctx->pc != 0x250B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetPortVol__Fif_0x18d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B10u; }
        if (ctx->pc != 0x250B10u) { return; }
    }
    ctx->pc = 0x250B10u;
label_250b10:
    // 0x250b10: 0xc06421c  jal         func_190870
    ctx->pc = 0x250B10u;
    SET_GPR_U32(ctx, 31, 0x250B18u);
    ctx->pc = 0x250B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B10u;
            // 0x250b14: 0xaf90979c  sw          $s0, -0x6864($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940572), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B18u; }
        if (ctx->pc != 0x250B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B18u; }
        if (ctx->pc != 0x250B18u) { return; }
    }
    ctx->pc = 0x250B18u;
label_250b18:
    // 0x250b18: 0xc0a99ec  jal         func_2A67B0
    ctx->pc = 0x250B18u;
    SET_GPR_U32(ctx, 31, 0x250B20u);
    ctx->pc = 0x250B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B18u;
            // 0x250b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67B0u;
    if (runtime->hasFunction(0x2A67B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B20u; }
        if (ctx->pc != 0x250B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnvBGMVol__6CSceneFv_0x2a67b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B20u; }
        if (ctx->pc != 0x250B20u) { return; }
    }
    ctx->pc = 0x250B20u;
label_250b20:
    // 0x250b20: 0xc06421c  jal         func_190870
    ctx->pc = 0x250B20u;
    SET_GPR_U32(ctx, 31, 0x250B28u);
    ctx->pc = 0x250B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B20u;
            // 0x250b24: 0xe78097a0  swc1        $f0, -0x6860($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940576), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B28u; }
        if (ctx->pc != 0x250B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B28u; }
        if (ctx->pc != 0x250B28u) { return; }
    }
    ctx->pc = 0x250B28u;
label_250b28:
    // 0x250b28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x250b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250b2c: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x250B2Cu;
    SET_GPR_U32(ctx, 31, 0x250B34u);
    ctx->pc = 0x250B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B2Cu;
            // 0x250b30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (runtime->hasFunction(0x2A6720u)) {
        auto targetFn = runtime->lookupFunction(0x2A6720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B34u; }
        if (ctx->pc != 0x250B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvBGMVol__6CSceneFf_0x2a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B34u; }
        if (ctx->pc != 0x250B34u) { return; }
    }
    ctx->pc = 0x250B34u;
label_250b34:
    // 0x250b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x250B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250B3Cu;
            // 0x250b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x250B44u;
}
