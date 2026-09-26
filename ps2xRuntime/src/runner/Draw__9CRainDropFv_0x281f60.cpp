#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CRainDropFv
// Address: 0x281f60 - 0x2820fc
void Draw__9CRainDropFv_0x281f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CRainDropFv_0x281f60");
#endif

    switch (ctx->pc) {
        case 0x281f80u: goto label_281f80;
        case 0x281f90u: goto label_281f90;
        case 0x281f9cu: goto label_281f9c;
        case 0x281fa8u: goto label_281fa8;
        case 0x281fb4u: goto label_281fb4;
        case 0x281fc4u: goto label_281fc4;
        case 0x281fd0u: goto label_281fd0;
        case 0x281fdcu: goto label_281fdc;
        case 0x281fe8u: goto label_281fe8;
        case 0x281ff4u: goto label_281ff4;
        case 0x282000u: goto label_282000;
        case 0x28200cu: goto label_28200c;
        case 0x282018u: goto label_282018;
        case 0x282024u: goto label_282024;
        case 0x282030u: goto label_282030;
        case 0x28203cu: goto label_28203c;
        case 0x282048u: goto label_282048;
        case 0x282050u: goto label_282050;
        case 0x282060u: goto label_282060;
        case 0x28207cu: goto label_28207c;
        case 0x28209cu: goto label_28209c;
        case 0x2820a8u: goto label_2820a8;
        case 0x2820c0u: goto label_2820c0;
        case 0x2820ccu: goto label_2820cc;
        case 0x2820e4u: goto label_2820e4;
        default: break;
    }

    ctx->pc = 0x281f60u;

    // 0x281f60: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x281f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x281f64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x281f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x281f68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x281f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281f6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x281f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281f74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281f78: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x281F78u;
    SET_GPR_U32(ctx, 31, 0x281F80u);
    ctx->pc = 0x281F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281F78u;
            // 0x281f7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F80u; }
        if (ctx->pc != 0x281F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F80u; }
        if (ctx->pc != 0x281F80u) { return; }
    }
    ctx->pc = 0x281F80u;
label_281f80:
    // 0x281f80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f88: 0xc04d104  jal         func_134410
    ctx->pc = 0x281F88u;
    SET_GPR_U32(ctx, 31, 0x281F90u);
    ctx->pc = 0x281F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281F88u;
            // 0x281f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F90u; }
        if (ctx->pc != 0x281F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F90u; }
        if (ctx->pc != 0x281F90u) { return; }
    }
    ctx->pc = 0x281F90u;
label_281f90:
    // 0x281f90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281f94: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x281F94u;
    SET_GPR_U32(ctx, 31, 0x281F9Cu);
    ctx->pc = 0x281F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281F94u;
            // 0x281f98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F9Cu; }
        if (ctx->pc != 0x281F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F9Cu; }
        if (ctx->pc != 0x281F9Cu) { return; }
    }
    ctx->pc = 0x281F9Cu;
label_281f9c:
    // 0x281f9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281fa0: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x281FA0u;
    SET_GPR_U32(ctx, 31, 0x281FA8u);
    ctx->pc = 0x281FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281FA0u;
            // 0x281fa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FA8u; }
        if (ctx->pc != 0x281FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FA8u; }
        if (ctx->pc != 0x281FA8u) { return; }
    }
    ctx->pc = 0x281FA8u;
label_281fa8:
    // 0x281fa8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281fac: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x281FACu;
    SET_GPR_U32(ctx, 31, 0x281FB4u);
    ctx->pc = 0x281FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281FACu;
            // 0x281fb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FB4u; }
        if (ctx->pc != 0x281FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FB4u; }
        if (ctx->pc != 0x281FB4u) { return; }
    }
    ctx->pc = 0x281FB4u;
label_281fb4:
    // 0x281fb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281fbc: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x281FBCu;
    SET_GPR_U32(ctx, 31, 0x281FC4u);
    ctx->pc = 0x281FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281FBCu;
            // 0x281fc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FC4u; }
        if (ctx->pc != 0x281FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FC4u; }
        if (ctx->pc != 0x281FC4u) { return; }
    }
    ctx->pc = 0x281FC4u;
label_281fc4:
    // 0x281fc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281fc8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x281FC8u;
    SET_GPR_U32(ctx, 31, 0x281FD0u);
    ctx->pc = 0x281FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281FC8u;
            // 0x281fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FD0u; }
        if (ctx->pc != 0x281FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FD0u; }
        if (ctx->pc != 0x281FD0u) { return; }
    }
    ctx->pc = 0x281FD0u;
label_281fd0:
    // 0x281fd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281fd4: 0xc04d424  jal         func_135090
    ctx->pc = 0x281FD4u;
    SET_GPR_U32(ctx, 31, 0x281FDCu);
    ctx->pc = 0x281FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281FD4u;
            // 0x281fd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FDCu; }
        if (ctx->pc != 0x281FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FDCu; }
        if (ctx->pc != 0x281FDCu) { return; }
    }
    ctx->pc = 0x281FDCu;
label_281fdc:
    // 0x281fdc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281fe0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x281FE0u;
    SET_GPR_U32(ctx, 31, 0x281FE8u);
    ctx->pc = 0x281FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281FE0u;
            // 0x281fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FE8u; }
        if (ctx->pc != 0x281FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FE8u; }
        if (ctx->pc != 0x281FE8u) { return; }
    }
    ctx->pc = 0x281FE8u;
label_281fe8:
    // 0x281fe8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281fec: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x281FECu;
    SET_GPR_U32(ctx, 31, 0x281FF4u);
    ctx->pc = 0x281FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281FECu;
            // 0x281ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FF4u; }
        if (ctx->pc != 0x281FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281FF4u; }
        if (ctx->pc != 0x281FF4u) { return; }
    }
    ctx->pc = 0x281FF4u;
label_281ff4:
    // 0x281ff4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281ff8: 0xc04d44c  jal         func_135130
    ctx->pc = 0x281FF8u;
    SET_GPR_U32(ctx, 31, 0x282000u);
    ctx->pc = 0x281FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281FF8u;
            // 0x281ffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282000u; }
        if (ctx->pc != 0x282000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282000u; }
        if (ctx->pc != 0x282000u) { return; }
    }
    ctx->pc = 0x282000u;
label_282000:
    // 0x282000: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x282000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282004: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x282004u;
    SET_GPR_U32(ctx, 31, 0x28200Cu);
    ctx->pc = 0x282008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282004u;
            // 0x282008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28200Cu; }
        if (ctx->pc != 0x28200Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28200Cu; }
        if (ctx->pc != 0x28200Cu) { return; }
    }
    ctx->pc = 0x28200Cu;
label_28200c:
    // 0x28200c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282010: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x282010u;
    SET_GPR_U32(ctx, 31, 0x282018u);
    ctx->pc = 0x282014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282010u;
            // 0x282014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282018u; }
        if (ctx->pc != 0x282018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282018u; }
        if (ctx->pc != 0x282018u) { return; }
    }
    ctx->pc = 0x282018u;
label_282018:
    // 0x282018: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x282018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28201c: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x28201Cu;
    SET_GPR_U32(ctx, 31, 0x282024u);
    ctx->pc = 0x282020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28201Cu;
            // 0x282020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282024u; }
        if (ctx->pc != 0x282024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282024u; }
        if (ctx->pc != 0x282024u) { return; }
    }
    ctx->pc = 0x282024u;
label_282024:
    // 0x282024: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x282024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282028: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x282028u;
    SET_GPR_U32(ctx, 31, 0x282030u);
    ctx->pc = 0x28202Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282028u;
            // 0x28202c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282030u; }
        if (ctx->pc != 0x282030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282030u; }
        if (ctx->pc != 0x282030u) { return; }
    }
    ctx->pc = 0x282030u;
label_282030:
    // 0x282030: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x282030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282034: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x282034u;
    SET_GPR_U32(ctx, 31, 0x28203Cu);
    ctx->pc = 0x282038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282034u;
            // 0x282038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28203Cu; }
        if (ctx->pc != 0x28203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28203Cu; }
        if (ctx->pc != 0x28203Cu) { return; }
    }
    ctx->pc = 0x28203Cu;
label_28203c:
    // 0x28203c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282040: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x282040u;
    SET_GPR_U32(ctx, 31, 0x282048u);
    ctx->pc = 0x282044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282040u;
            // 0x282044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282048u; }
        if (ctx->pc != 0x282048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282048u; }
        if (ctx->pc != 0x282048u) { return; }
    }
    ctx->pc = 0x282048u;
label_282048:
    // 0x282048: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x282048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28204c: 0x24110070  addiu       $s1, $zero, 0x70
    ctx->pc = 0x28204cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_282050:
    // 0x282050: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x282050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x282054: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x282054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x282058: 0xc051638  jal         func_1458E0
    ctx->pc = 0x282058u;
    SET_GPR_U32(ctx, 31, 0x282060u);
    ctx->pc = 0x28205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282058u;
            // 0x28205c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282060u; }
        if (ctx->pc != 0x282060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282060u; }
        if (ctx->pc != 0x282060u) { return; }
    }
    ctx->pc = 0x282060u;
label_282060:
    // 0x282060: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x282060u;
    {
        const bool branch_taken_0x282060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282060u;
            // 0x282064: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282060) {
            ctx->pc = 0x2820CCu;
            goto label_2820cc;
        }
    }
    ctx->pc = 0x282068u;
    // 0x282068: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x282068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x28206c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28206cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x282070: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x282070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x282074: 0xc051638  jal         func_1458E0
    ctx->pc = 0x282074u;
    SET_GPR_U32(ctx, 31, 0x28207Cu);
    ctx->pc = 0x282078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282074u;
            // 0x282078: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28207Cu; }
        if (ctx->pc != 0x28207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28207Cu; }
        if (ctx->pc != 0x28207Cu) { return; }
    }
    ctx->pc = 0x28207Cu;
label_28207c:
    // 0x28207c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28207Cu;
    {
        const bool branch_taken_0x28207c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28207c) {
            ctx->pc = 0x2820CCu;
            goto label_2820cc;
        }
    }
    ctx->pc = 0x282084u;
    // 0x282084: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x282084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x282088: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x282088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28208c: 0x8e4600a4  lw          $a2, 0xA4($s2)
    ctx->pc = 0x28208cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x282090: 0x8e4700a8  lw          $a3, 0xA8($s2)
    ctx->pc = 0x282090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x282094: 0xc04d320  jal         func_134C80
    ctx->pc = 0x282094u;
    SET_GPR_U32(ctx, 31, 0x28209Cu);
    ctx->pc = 0x282098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282094u;
            // 0x282098: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28209Cu; }
        if (ctx->pc != 0x28209Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28209Cu; }
        if (ctx->pc != 0x28209Cu) { return; }
    }
    ctx->pc = 0x28209Cu;
label_28209c:
    // 0x28209c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2820a0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2820A0u;
    SET_GPR_U32(ctx, 31, 0x2820A8u);
    ctx->pc = 0x2820A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2820A0u;
            // 0x2820a4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820A8u; }
        if (ctx->pc != 0x2820A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820A8u; }
        if (ctx->pc != 0x2820A8u) { return; }
    }
    ctx->pc = 0x2820A8u;
label_2820a8:
    // 0x2820a8: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x2820a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x2820ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2820acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2820b0: 0x8e4600a4  lw          $a2, 0xA4($s2)
    ctx->pc = 0x2820b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x2820b4: 0x8e4700a8  lw          $a3, 0xA8($s2)
    ctx->pc = 0x2820b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x2820b8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2820B8u;
    SET_GPR_U32(ctx, 31, 0x2820C0u);
    ctx->pc = 0x2820BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2820B8u;
            // 0x2820bc: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820C0u; }
        if (ctx->pc != 0x2820C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820C0u; }
        if (ctx->pc != 0x2820C0u) { return; }
    }
    ctx->pc = 0x2820C0u;
label_2820c0:
    // 0x2820c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2820c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2820c4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2820C4u;
    SET_GPR_U32(ctx, 31, 0x2820CCu);
    ctx->pc = 0x2820C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2820C4u;
            // 0x2820c8: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820CCu; }
        if (ctx->pc != 0x2820CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820CCu; }
        if (ctx->pc != 0x2820CCu) { return; }
    }
    ctx->pc = 0x2820CCu;
label_2820cc:
    // 0x2820cc: 0x0  nop
    ctx->pc = 0x2820ccu;
    // NOP
    // 0x2820d0: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x2820d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x2820d4: 0x1e00ffde  bgtz        $s0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2820D4u;
    {
        const bool branch_taken_0x2820d4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2820D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2820D4u;
            // 0x2820d8: 0x2631ffe0  addiu       $s1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820d4) {
            ctx->pc = 0x282050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282050;
        }
    }
    ctx->pc = 0x2820DCu;
    // 0x2820dc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2820DCu;
    SET_GPR_U32(ctx, 31, 0x2820E4u);
    ctx->pc = 0x2820E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2820DCu;
            // 0x2820e0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820E4u; }
        if (ctx->pc != 0x2820E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2820E4u; }
        if (ctx->pc != 0x2820E4u) { return; }
    }
    ctx->pc = 0x2820E4u;
label_2820e4:
    // 0x2820e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2820e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2820e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2820e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2820ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2820ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2820f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2820f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2820f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2820F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2820F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2820F4u;
            // 0x2820f8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2820FCu;
}
