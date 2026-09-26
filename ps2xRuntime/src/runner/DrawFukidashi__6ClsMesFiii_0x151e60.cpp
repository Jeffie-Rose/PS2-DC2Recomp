#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFukidashi__6ClsMesFiii
// Address: 0x151e60 - 0x151f68
void DrawFukidashi__6ClsMesFiii_0x151e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFukidashi__6ClsMesFiii_0x151e60");
#endif

    switch (ctx->pc) {
        case 0x151e90u: goto label_151e90;
        case 0x151ea0u: goto label_151ea0;
        case 0x151eacu: goto label_151eac;
        case 0x151eb8u: goto label_151eb8;
        case 0x151ec4u: goto label_151ec4;
        case 0x151ed4u: goto label_151ed4;
        case 0x151ee0u: goto label_151ee0;
        case 0x151eecu: goto label_151eec;
        case 0x151ef8u: goto label_151ef8;
        case 0x151f04u: goto label_151f04;
        case 0x151f10u: goto label_151f10;
        case 0x151f28u: goto label_151f28;
        case 0x151f34u: goto label_151f34;
        case 0x151f4cu: goto label_151f4c;
        default: break;
    }

    ctx->pc = 0x151e60u;

    // 0x151e60: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x151e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x151e64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x151e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x151e68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x151e6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151e70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x151e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151e78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x151e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151e80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x151e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e84: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x151e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e88: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x151E88u;
    SET_GPR_U32(ctx, 31, 0x151E90u);
    ctx->pc = 0x151E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E88u;
            // 0x151e8c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E90u; }
        if (ctx->pc != 0x151E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E90u; }
        if (ctx->pc != 0x151E90u) { return; }
    }
    ctx->pc = 0x151E90u;
label_151e90:
    // 0x151e90: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e98: 0xc04d104  jal         func_134410
    ctx->pc = 0x151E98u;
    SET_GPR_U32(ctx, 31, 0x151EA0u);
    ctx->pc = 0x151E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E98u;
            // 0x151e9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EA0u; }
        if (ctx->pc != 0x151EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EA0u; }
        if (ctx->pc != 0x151EA0u) { return; }
    }
    ctx->pc = 0x151EA0u;
label_151ea0:
    // 0x151ea0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151ea4: 0xc04d424  jal         func_135090
    ctx->pc = 0x151EA4u;
    SET_GPR_U32(ctx, 31, 0x151EACu);
    ctx->pc = 0x151EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151EA4u;
            // 0x151ea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EACu; }
        if (ctx->pc != 0x151EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EACu; }
        if (ctx->pc != 0x151EACu) { return; }
    }
    ctx->pc = 0x151EACu;
label_151eac:
    // 0x151eac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151eb0: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x151EB0u;
    SET_GPR_U32(ctx, 31, 0x151EB8u);
    ctx->pc = 0x151EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151EB0u;
            // 0x151eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EB8u; }
        if (ctx->pc != 0x151EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EB8u; }
        if (ctx->pc != 0x151EB8u) { return; }
    }
    ctx->pc = 0x151EB8u;
label_151eb8:
    // 0x151eb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151ebc: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x151EBCu;
    SET_GPR_U32(ctx, 31, 0x151EC4u);
    ctx->pc = 0x151EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151EBCu;
            // 0x151ec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EC4u; }
        if (ctx->pc != 0x151EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EC4u; }
        if (ctx->pc != 0x151EC4u) { return; }
    }
    ctx->pc = 0x151EC4u;
label_151ec4:
    // 0x151ec4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ecc: 0xc04d3d4  jal         func_134F50
    ctx->pc = 0x151ECCu;
    SET_GPR_U32(ctx, 31, 0x151ED4u);
    ctx->pc = 0x151ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151ECCu;
            // 0x151ed0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F50u;
    if (runtime->hasFunction(0x134F50u)) {
        auto targetFn = runtime->lookupFunction(0x134F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151ED4u; }
        if (ctx->pc != 0x151ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DAlphaTest__11mgCDrawPrimFii_0x134f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151ED4u; }
        if (ctx->pc != 0x151ED4u) { return; }
    }
    ctx->pc = 0x151ED4u;
label_151ed4:
    // 0x151ed4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151ed8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x151ED8u;
    SET_GPR_U32(ctx, 31, 0x151EE0u);
    ctx->pc = 0x151EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151ED8u;
            // 0x151edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EE0u; }
        if (ctx->pc != 0x151EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EE0u; }
        if (ctx->pc != 0x151EE0u) { return; }
    }
    ctx->pc = 0x151EE0u;
label_151ee0:
    // 0x151ee0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151ee4: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x151EE4u;
    SET_GPR_U32(ctx, 31, 0x151EECu);
    ctx->pc = 0x151EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151EE4u;
            // 0x151ee8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EECu; }
        if (ctx->pc != 0x151EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EECu; }
        if (ctx->pc != 0x151EECu) { return; }
    }
    ctx->pc = 0x151EECu;
label_151eec:
    // 0x151eec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151ef0: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x151EF0u;
    SET_GPR_U32(ctx, 31, 0x151EF8u);
    ctx->pc = 0x151EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151EF0u;
            // 0x151ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EF8u; }
        if (ctx->pc != 0x151EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151EF8u; }
        if (ctx->pc != 0x151EF8u) { return; }
    }
    ctx->pc = 0x151EF8u;
label_151ef8:
    // 0x151ef8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151efc: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x151EFCu;
    SET_GPR_U32(ctx, 31, 0x151F04u);
    ctx->pc = 0x151F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151EFCu;
            // 0x151f00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F04u; }
        if (ctx->pc != 0x151F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F04u; }
        if (ctx->pc != 0x151F04u) { return; }
    }
    ctx->pc = 0x151F04u;
label_151f04:
    // 0x151f04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151f08: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x151F08u;
    SET_GPR_U32(ctx, 31, 0x151F10u);
    ctx->pc = 0x151F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151F08u;
            // 0x151f0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F10u; }
        if (ctx->pc != 0x151F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F10u; }
        if (ctx->pc != 0x151F10u) { return; }
    }
    ctx->pc = 0x151F10u;
label_151f10:
    // 0x151f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x151f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f14: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x151f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151f18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x151f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f1c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x151f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f20: 0xc054650  jal         func_151940
    ctx->pc = 0x151F20u;
    SET_GPR_U32(ctx, 31, 0x151F28u);
    ctx->pc = 0x151F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151F20u;
            // 0x151f24: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151940u;
    if (runtime->hasFunction(0x151940u)) {
        auto targetFn = runtime->lookupFunction(0x151940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F28u; }
        if (ctx->pc != 0x151F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFukidashi_sub__6ClsMesFP11mgCDrawPrimiii_0x151940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F28u; }
        if (ctx->pc != 0x151F28u) { return; }
    }
    ctx->pc = 0x151F28u;
label_151f28:
    // 0x151f28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151f2c: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x151F2Cu;
    SET_GPR_U32(ctx, 31, 0x151F34u);
    ctx->pc = 0x151F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151F2Cu;
            // 0x151f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F34u; }
        if (ctx->pc != 0x151F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F34u; }
        if (ctx->pc != 0x151F34u) { return; }
    }
    ctx->pc = 0x151F34u;
label_151f34:
    // 0x151f34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x151f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x151f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x151f3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f40: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x151f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f44: 0xc054650  jal         func_151940
    ctx->pc = 0x151F44u;
    SET_GPR_U32(ctx, 31, 0x151F4Cu);
    ctx->pc = 0x151F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151F44u;
            // 0x151f48: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151940u;
    if (runtime->hasFunction(0x151940u)) {
        auto targetFn = runtime->lookupFunction(0x151940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F4Cu; }
        if (ctx->pc != 0x151F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFukidashi_sub__6ClsMesFP11mgCDrawPrimiii_0x151940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F4Cu; }
        if (ctx->pc != 0x151F4Cu) { return; }
    }
    ctx->pc = 0x151F4Cu;
label_151f4c:
    // 0x151f4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x151f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151f50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151f50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151f54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151f60: 0x3e00008  jr          $ra
    ctx->pc = 0x151F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F60u;
            // 0x151f64: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151F68u;
}
