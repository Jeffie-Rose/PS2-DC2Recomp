#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBufferNums__14CEffectManagerFPciPiPi
// Address: 0x182fa0 - 0x183038
void GetBufferNums__14CEffectManagerFPciPiPi_0x182fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBufferNums__14CEffectManagerFPciPiPi_0x182fa0");
#endif

    switch (ctx->pc) {
        case 0x182fd8u: goto label_182fd8;
        case 0x182ff0u: goto label_182ff0;
        case 0x183000u: goto label_183000;
        case 0x183008u: goto label_183008;
        default: break;
    }

    ctx->pc = 0x182fa0u;

    // 0x182fa0: 0x27bdf0d0  addiu       $sp, $sp, -0xF30
    ctx->pc = 0x182fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963408));
    // 0x182fa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x182fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x182fa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182fac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182fb0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x182fb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182fb8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x182fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182fc0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x182fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182fc8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x182fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fd0: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x182FD0u;
    SET_GPR_U32(ctx, 31, 0x182FD8u);
    ctx->pc = 0x182FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182FD0u;
            // 0x182fd4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FD8u; }
        if (ctx->pc != 0x182FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FD8u; }
        if (ctx->pc != 0x182FD8u) { return; }
    }
    ctx->pc = 0x182FD8u;
label_182fd8:
    // 0x182fd8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x182fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x182fdc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x182fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x182fe0: 0x24a54f30  addiu       $a1, $a1, 0x4F30
    ctx->pc = 0x182fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20272));
    // 0x182fe4: 0xaf908a58  sw          $s0, -0x75A8($gp)
    ctx->pc = 0x182fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937176), GPR_U32(ctx, 16));
    // 0x182fe8: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x182FE8u;
    SET_GPR_U32(ctx, 31, 0x182FF0u);
    ctx->pc = 0x182FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182FE8u;
            // 0x182fec: 0xaf808a60  sw          $zero, -0x75A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FF0u; }
        if (ctx->pc != 0x182FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FF0u; }
        if (ctx->pc != 0x182FF0u) { return; }
    }
    ctx->pc = 0x182FF0u;
label_182ff0:
    // 0x182ff0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x182ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ff4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x182ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ff8: 0xc051a60  jal         func_146980
    ctx->pc = 0x182FF8u;
    SET_GPR_U32(ctx, 31, 0x183000u);
    ctx->pc = 0x182FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182FF8u;
            // 0x182ffc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183000u; }
        if (ctx->pc != 0x183000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183000u; }
        if (ctx->pc != 0x183000u) { return; }
    }
    ctx->pc = 0x183000u;
label_183000:
    // 0x183000: 0xc0519c8  jal         func_146720
    ctx->pc = 0x183000u;
    SET_GPR_U32(ctx, 31, 0x183008u);
    ctx->pc = 0x183004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183000u;
            // 0x183004: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183008u; }
        if (ctx->pc != 0x183008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183008u; }
        if (ctx->pc != 0x183008u) { return; }
    }
    ctx->pc = 0x183008u;
label_183008:
    // 0x183008: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x183008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18300c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x18300cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x183010: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x183010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x183014: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x183014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x183018: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x183018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18301c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18301cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183020: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183024: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18302c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18302cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183030: 0x3e00008  jr          $ra
    ctx->pc = 0x183030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183030u;
            // 0x183034: 0x27bd0f30  addiu       $sp, $sp, 0xF30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3888));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183038u;
}
