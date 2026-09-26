#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Term__6CMovieFv
// Address: 0x298de0 - 0x298f2c
void Term__6CMovieFv_0x298de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Term__6CMovieFv_0x298de0");
#endif

    switch (ctx->pc) {
        case 0x298e10u: goto label_298e10;
        case 0x298e18u: goto label_298e18;
        case 0x298e24u: goto label_298e24;
        case 0x298e2cu: goto label_298e2c;
        case 0x298e5cu: goto label_298e5c;
        case 0x298e6cu: goto label_298e6c;
        case 0x298e80u: goto label_298e80;
        case 0x298e90u: goto label_298e90;
        case 0x298ea4u: goto label_298ea4;
        case 0x298eb4u: goto label_298eb4;
        case 0x298ebcu: goto label_298ebc;
        case 0x298eccu: goto label_298ecc;
        case 0x298edcu: goto label_298edc;
        case 0x298ef8u: goto label_298ef8;
        case 0x298f04u: goto label_298f04;
        case 0x298f10u: goto label_298f10;
        case 0x298f1cu: goto label_298f1c;
        default: break;
    }

    ctx->pc = 0x298de0u;

    // 0x298de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298de4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x298de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x298de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298dec: 0x34423900  ori         $v0, $v0, 0x3900
    ctx->pc = 0x298decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14592);
    // 0x298df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298df4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x298df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x298df8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x298df8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298dfc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x298DFCu;
    {
        const bool branch_taken_0x298dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298DFCu;
            // 0x298e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298dfc) {
            ctx->pc = 0x298EE8u;
            goto label_298ee8;
        }
    }
    ctx->pc = 0x298E04u;
    // 0x298e04: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x298e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x298e08: 0xc0a6474  jal         func_2991D0
    ctx->pc = 0x298E08u;
    SET_GPR_U32(ctx, 31, 0x298E10u);
    ctx->pc = 0x298E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298E08u;
            // 0x298e0c: 0x24a55350  addiu       $a1, $a1, 0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2991D0u;
    if (runtime->hasFunction(0x2991D0u)) {
        auto targetFn = runtime->lookupFunction(0x2991D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E10u; }
        if (ctx->pc != 0x298E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecFlush__6CMovieFP8VideoDec_0x2991d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E10u; }
        if (ctx->pc != 0x298E10u) { return; }
    }
    ctx->pc = 0x298E10u;
label_298e10:
    // 0x298e10: 0xc0a6e1c  jal         func_29B870
    ctx->pc = 0x298E10u;
    SET_GPR_U32(ctx, 31, 0x298E18u);
    ctx->pc = 0x29B870u;
    if (runtime->hasFunction(0x29B870u)) {
        auto targetFn = runtime->lookupFunction(0x29B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E18u; }
        if (ctx->pc != 0x298E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread__Fv_0x29b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E18u; }
        if (ctx->pc != 0x298E18u) { return; }
    }
    ctx->pc = 0x298E18u;
label_298e18:
    // 0x298e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298e1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x298E1Cu;
    {
        const bool branch_taken_0x298e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298E1Cu;
            // 0x298e20: 0xaf829920  sw          $v0, -0x66E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e1c) {
            ctx->pc = 0x298E2Cu;
            goto label_298e2c;
        }
    }
    ctx->pc = 0x298E24u;
label_298e24:
    // 0x298e24: 0xc0a6e1c  jal         func_29B870
    ctx->pc = 0x298E24u;
    SET_GPR_U32(ctx, 31, 0x298E2Cu);
    ctx->pc = 0x29B870u;
    if (runtime->hasFunction(0x29B870u)) {
        auto targetFn = runtime->lookupFunction(0x29B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E2Cu; }
        if (ctx->pc != 0x298E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread__Fv_0x29b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E2Cu; }
        if (ctx->pc != 0x298E2Cu) { return; }
    }
    ctx->pc = 0x298E2Cu;
label_298e2c:
    // 0x298e2c: 0x0  nop
    ctx->pc = 0x298e2cu;
    // NOP
    // 0x298e30: 0x8f82991c  lw          $v0, -0x66E4($gp)
    ctx->pc = 0x298e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940956)));
    // 0x298e34: 0x0  nop
    ctx->pc = 0x298e34u;
    // NOP
    // 0x298e38: 0x0  nop
    ctx->pc = 0x298e38u;
    // NOP
    // 0x298e3c: 0x0  nop
    ctx->pc = 0x298e3cu;
    // NOP
    // 0x298e40: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x298E40u;
    {
        const bool branch_taken_0x298e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298e40) {
            ctx->pc = 0x298E24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298e24;
        }
    }
    ctx->pc = 0x298E48u;
    // 0x298e48: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x298e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x298e4c: 0x3442390c  ori         $v0, $v0, 0x390C
    ctx->pc = 0x298e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14604);
    // 0x298e50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x298e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x298e54: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x298E54u;
    SET_GPR_U32(ctx, 31, 0x298E5Cu);
    ctx->pc = 0x298E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298E54u;
            // 0x298e58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (runtime->hasFunction(0x10FF30u)) {
        auto targetFn = runtime->lookupFunction(0x10FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E5Cu; }
        if (ctx->pc != 0x298E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E5Cu; }
        if (ctx->pc != 0x298E5Cu) { return; }
    }
    ctx->pc = 0x298E5Cu;
label_298e5c:
    // 0x298e5c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298e60: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x298e60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x298e64: 0xc043fbc  jal         func_10FEF0
    ctx->pc = 0x298E64u;
    SET_GPR_U32(ctx, 31, 0x298E6Cu);
    ctx->pc = 0x298E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298E64u;
            // 0x298e68: 0x8c24390c  lw          $a0, 0x390C($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEF0u;
    if (runtime->hasFunction(0x10FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E6Cu; }
        if (ctx->pc != 0x298E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E6Cu; }
        if (ctx->pc != 0x298E6Cu) { return; }
    }
    ctx->pc = 0x298E6Cu;
label_298e6c:
    // 0x298e6c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x298e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x298e70: 0x34423904  ori         $v0, $v0, 0x3904
    ctx->pc = 0x298e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14596);
    // 0x298e74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x298e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x298e78: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x298E78u;
    SET_GPR_U32(ctx, 31, 0x298E80u);
    ctx->pc = 0x298E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298E78u;
            // 0x298e7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (runtime->hasFunction(0x10FF30u)) {
        auto targetFn = runtime->lookupFunction(0x10FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E80u; }
        if (ctx->pc != 0x298E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E80u; }
        if (ctx->pc != 0x298E80u) { return; }
    }
    ctx->pc = 0x298E80u;
label_298e80:
    // 0x298e80: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298e84: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x298e84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x298e88: 0xc043fbc  jal         func_10FEF0
    ctx->pc = 0x298E88u;
    SET_GPR_U32(ctx, 31, 0x298E90u);
    ctx->pc = 0x298E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298E88u;
            // 0x298e8c: 0x8c243904  lw          $a0, 0x3904($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14596)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEF0u;
    if (runtime->hasFunction(0x10FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E90u; }
        if (ctx->pc != 0x298E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E90u; }
        if (ctx->pc != 0x298E90u) { return; }
    }
    ctx->pc = 0x298E90u;
label_298e90:
    // 0x298e90: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x298e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x298e94: 0x34423908  ori         $v0, $v0, 0x3908
    ctx->pc = 0x298e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14600);
    // 0x298e98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x298e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x298e9c: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x298E9Cu;
    SET_GPR_U32(ctx, 31, 0x298EA4u);
    ctx->pc = 0x298EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298E9Cu;
            // 0x298ea0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (runtime->hasFunction(0x10FF30u)) {
        auto targetFn = runtime->lookupFunction(0x10FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EA4u; }
        if (ctx->pc != 0x298EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EA4u; }
        if (ctx->pc != 0x298EA4u) { return; }
    }
    ctx->pc = 0x298EA4u;
label_298ea4:
    // 0x298ea4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298ea8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x298ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x298eac: 0xc043fbc  jal         func_10FEF0
    ctx->pc = 0x298EACu;
    SET_GPR_U32(ctx, 31, 0x298EB4u);
    ctx->pc = 0x298EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298EACu;
            // 0x298eb0: 0x8c243908  lw          $a0, 0x3908($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEF0u;
    if (runtime->hasFunction(0x10FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EB4u; }
        if (ctx->pc != 0x298EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EB4u; }
        if (ctx->pc != 0x298EB4u) { return; }
    }
    ctx->pc = 0x298EB4u;
label_298eb4:
    // 0x298eb4: 0xc044324  jal         func_110C90
    ctx->pc = 0x298EB4u;
    SET_GPR_U32(ctx, 31, 0x298EBCu);
    ctx->pc = 0x298EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298EB4u;
            // 0x298eb8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110C90u;
    if (runtime->hasFunction(0x110C90u)) {
        auto targetFn = runtime->lookupFunction(0x110C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EBCu; }
        if (ctx->pc != 0x298EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x110c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EBCu; }
        if (ctx->pc != 0x298EBCu) { return; }
    }
    ctx->pc = 0x298EBCu;
label_298ebc:
    // 0x298ebc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x298ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x298ec0: 0x8c255400  lw          $a1, 0x5400($at)
    ctx->pc = 0x298ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21504)));
    // 0x298ec4: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x298EC4u;
    SET_GPR_U32(ctx, 31, 0x298ECCu);
    ctx->pc = 0x298EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298EC4u;
            // 0x298ec8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (runtime->hasFunction(0x10FE10u)) {
        auto targetFn = runtime->lookupFunction(0x10FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298ECCu; }
        if (ctx->pc != 0x298ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x10fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298ECCu; }
        if (ctx->pc != 0x298ECCu) { return; }
    }
    ctx->pc = 0x298ECCu;
label_298ecc:
    // 0x298ecc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x298eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x298ed0: 0x8c255404  lw          $a1, 0x5404($at)
    ctx->pc = 0x298ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21508)));
    // 0x298ed4: 0xc043f78  jal         func_10FDE0
    ctx->pc = 0x298ED4u;
    SET_GPR_U32(ctx, 31, 0x298EDCu);
    ctx->pc = 0x298ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298ED4u;
            // 0x298ed8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FDE0u;
    if (runtime->hasFunction(0x10FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EDCu; }
        if (ctx->pc != 0x298EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveIntcHandler_0x10fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EDCu; }
        if (ctx->pc != 0x298EDCu) { return; }
    }
    ctx->pc = 0x298EDCu;
label_298edc:
    // 0x298edc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298ee0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x298ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x298ee4: 0xa0203900  sb          $zero, 0x3900($at)
    ctx->pc = 0x298ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14592), (uint8_t)GPR_U32(ctx, 0));
label_298ee8:
    // 0x298ee8: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x298ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x298eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ef0: 0xc0a6464  jal         func_299190
    ctx->pc = 0x298EF0u;
    SET_GPR_U32(ctx, 31, 0x298EF8u);
    ctx->pc = 0x298EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298EF0u;
            // 0x298ef4: 0x24a55350  addiu       $a1, $a1, 0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299190u;
    if (runtime->hasFunction(0x299190u)) {
        auto targetFn = runtime->lookupFunction(0x299190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EF8u; }
        if (ctx->pc != 0x298EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecDelete__6CMovieFP8VideoDec_0x299190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EF8u; }
        if (ctx->pc != 0x298EF8u) { return; }
    }
    ctx->pc = 0x298EF8u;
label_298ef8:
    // 0x298ef8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x298ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x298efc: 0xc0a6cac  jal         func_29B2B0
    ctx->pc = 0x298EFCu;
    SET_GPR_U32(ctx, 31, 0x298F04u);
    ctx->pc = 0x298F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298EFCu;
            // 0x298f00: 0x24845410  addiu       $a0, $a0, 0x5410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B0u;
    if (runtime->hasFunction(0x29B2B0u)) {
        auto targetFn = runtime->lookupFunction(0x29B2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F04u; }
        if (ctx->pc != 0x298F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecReset__FP8AudioDec_0x29b2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F04u; }
        if (ctx->pc != 0x298F04u) { return; }
    }
    ctx->pc = 0x298F04u;
label_298f04:
    // 0x298f04: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x298f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x298f08: 0xc0a6c5c  jal         func_29B170
    ctx->pc = 0x298F08u;
    SET_GPR_U32(ctx, 31, 0x298F10u);
    ctx->pc = 0x298F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298F08u;
            // 0x298f0c: 0x24845410  addiu       $a0, $a0, 0x5410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B170u;
    if (runtime->hasFunction(0x29B170u)) {
        auto targetFn = runtime->lookupFunction(0x29B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F10u; }
        if (ctx->pc != 0x298F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecDelete__FP8AudioDec_0x29b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F10u; }
        if (ctx->pc != 0x298F10u) { return; }
    }
    ctx->pc = 0x298F10u;
label_298f10:
    // 0x298f10: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x298f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x298f14: 0xc0a6b90  jal         func_29AE40
    ctx->pc = 0x298F14u;
    SET_GPR_U32(ctx, 31, 0x298F1Cu);
    ctx->pc = 0x298F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298F14u;
            // 0x298f18: 0x24845490  addiu       $a0, $a0, 0x5490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AE40u;
    if (runtime->hasFunction(0x29AE40u)) {
        auto targetFn = runtime->lookupFunction(0x29AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F1Cu; }
        if (ctx->pc != 0x298F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileClose__FP7StrFile_0x29ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F1Cu; }
        if (ctx->pc != 0x298F1Cu) { return; }
    }
    ctx->pc = 0x298F1Cu;
label_298f1c:
    // 0x298f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298f24: 0x3e00008  jr          $ra
    ctx->pc = 0x298F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298F24u;
            // 0x298f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298F2Cu;
}
