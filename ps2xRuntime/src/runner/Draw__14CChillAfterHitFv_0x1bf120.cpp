#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__14CChillAfterHitFv
// Address: 0x1bf120 - 0x1bf4e8
void Draw__14CChillAfterHitFv_0x1bf120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__14CChillAfterHitFv_0x1bf120");
#endif

    switch (ctx->pc) {
        case 0x1bf164u: goto label_1bf164;
        case 0x1bf174u: goto label_1bf174;
        case 0x1bf17cu: goto label_1bf17c;
        case 0x1bf188u: goto label_1bf188;
        case 0x1bf194u: goto label_1bf194;
        case 0x1bf1a0u: goto label_1bf1a0;
        case 0x1bf1acu: goto label_1bf1ac;
        case 0x1bf1b8u: goto label_1bf1b8;
        case 0x1bf1c8u: goto label_1bf1c8;
        case 0x1bf1d0u: goto label_1bf1d0;
        case 0x1bf1f4u: goto label_1bf1f4;
        case 0x1bf204u: goto label_1bf204;
        case 0x1bf210u: goto label_1bf210;
        case 0x1bf23cu: goto label_1bf23c;
        case 0x1bf254u: goto label_1bf254;
        case 0x1bf26cu: goto label_1bf26c;
        case 0x1bf284u: goto label_1bf284;
        case 0x1bf294u: goto label_1bf294;
        case 0x1bf2a0u: goto label_1bf2a0;
        case 0x1bf2b8u: goto label_1bf2b8;
        case 0x1bf2c4u: goto label_1bf2c4;
        case 0x1bf2e0u: goto label_1bf2e0;
        case 0x1bf2ecu: goto label_1bf2ec;
        case 0x1bf304u: goto label_1bf304;
        case 0x1bf310u: goto label_1bf310;
        case 0x1bf318u: goto label_1bf318;
        case 0x1bf350u: goto label_1bf350;
        case 0x1bf360u: goto label_1bf360;
        case 0x1bf36cu: goto label_1bf36c;
        case 0x1bf384u: goto label_1bf384;
        case 0x1bf390u: goto label_1bf390;
        case 0x1bf3acu: goto label_1bf3ac;
        case 0x1bf3b8u: goto label_1bf3b8;
        case 0x1bf3d0u: goto label_1bf3d0;
        case 0x1bf3dcu: goto label_1bf3dc;
        case 0x1bf3e4u: goto label_1bf3e4;
        case 0x1bf3f0u: goto label_1bf3f0;
        case 0x1bf408u: goto label_1bf408;
        case 0x1bf418u: goto label_1bf418;
        case 0x1bf44cu: goto label_1bf44c;
        case 0x1bf464u: goto label_1bf464;
        case 0x1bf474u: goto label_1bf474;
        case 0x1bf480u: goto label_1bf480;
        case 0x1bf490u: goto label_1bf490;
        case 0x1bf49cu: goto label_1bf49c;
        case 0x1bf4a4u: goto label_1bf4a4;
        default: break;
    }

    ctx->pc = 0x1bf120u;

    // 0x1bf120: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1bf120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1bf124: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bf124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bf128: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bf128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bf12c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bf12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bf130: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bf130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bf134: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bf138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf13c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf144: 0x8f838ea4  lw          $v1, -0x715C($gp)
    ctx->pc = 0x1bf144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938276)));
    // 0x1bf148: 0x106000dd  beqz        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x1BF148u;
    {
        const bool branch_taken_0x1bf148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF148u;
            // 0x1bf14c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf148) {
            ctx->pc = 0x1BF4C0u;
            goto label_1bf4c0;
        }
    }
    ctx->pc = 0x1BF150u;
    // 0x1bf150: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1bf150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1bf154: 0x106000da  beqz        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x1BF154u;
    {
        const bool branch_taken_0x1bf154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF154u;
            // 0x1bf158: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf154) {
            ctx->pc = 0x1BF4C0u;
            goto label_1bf4c0;
        }
    }
    ctx->pc = 0x1BF15Cu;
    // 0x1bf15c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BF15Cu;
    SET_GPR_U32(ctx, 31, 0x1BF164u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF164u; }
        if (ctx->pc != 0x1BF164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF164u; }
        if (ctx->pc != 0x1BF164u) { return; }
    }
    ctx->pc = 0x1BF164u;
label_1bf164:
    // 0x1bf164: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf16c: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BF16Cu;
    SET_GPR_U32(ctx, 31, 0x1BF174u);
    ctx->pc = 0x1BF170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF16Cu;
            // 0x1bf170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF174u; }
        if (ctx->pc != 0x1BF174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF174u; }
        if (ctx->pc != 0x1BF174u) { return; }
    }
    ctx->pc = 0x1BF174u;
label_1bf174:
    // 0x1bf174: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BF174u;
    SET_GPR_U32(ctx, 31, 0x1BF17Cu);
    ctx->pc = 0x1BF178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF174u;
            // 0x1bf178: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF17Cu; }
        if (ctx->pc != 0x1BF17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF17Cu; }
        if (ctx->pc != 0x1BF17Cu) { return; }
    }
    ctx->pc = 0x1BF17Cu;
label_1bf17c:
    // 0x1bf17c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf180: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1BF180u;
    SET_GPR_U32(ctx, 31, 0x1BF188u);
    ctx->pc = 0x1BF184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF180u;
            // 0x1bf184: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF188u; }
        if (ctx->pc != 0x1BF188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF188u; }
        if (ctx->pc != 0x1BF188u) { return; }
    }
    ctx->pc = 0x1BF188u;
label_1bf188:
    // 0x1bf188: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf18c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1BF18Cu;
    SET_GPR_U32(ctx, 31, 0x1BF194u);
    ctx->pc = 0x1BF190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF18Cu;
            // 0x1bf190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF194u; }
        if (ctx->pc != 0x1BF194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF194u; }
        if (ctx->pc != 0x1BF194u) { return; }
    }
    ctx->pc = 0x1BF194u;
label_1bf194:
    // 0x1bf194: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf198: 0xc04d424  jal         func_135090
    ctx->pc = 0x1BF198u;
    SET_GPR_U32(ctx, 31, 0x1BF1A0u);
    ctx->pc = 0x1BF19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF198u;
            // 0x1bf19c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1A0u; }
        if (ctx->pc != 0x1BF1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1A0u; }
        if (ctx->pc != 0x1BF1A0u) { return; }
    }
    ctx->pc = 0x1BF1A0u;
label_1bf1a0:
    // 0x1bf1a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf1a4: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1BF1A4u;
    SET_GPR_U32(ctx, 31, 0x1BF1ACu);
    ctx->pc = 0x1BF1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1A4u;
            // 0x1bf1a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1ACu; }
        if (ctx->pc != 0x1BF1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1ACu; }
        if (ctx->pc != 0x1BF1ACu) { return; }
    }
    ctx->pc = 0x1BF1ACu;
label_1bf1ac:
    // 0x1bf1ac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf1b0: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1BF1B0u;
    SET_GPR_U32(ctx, 31, 0x1BF1B8u);
    ctx->pc = 0x1BF1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1B0u;
            // 0x1bf1b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1B8u; }
        if (ctx->pc != 0x1BF1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1B8u; }
        if (ctx->pc != 0x1BF1B8u) { return; }
    }
    ctx->pc = 0x1BF1B8u;
label_1bf1b8:
    // 0x1bf1b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf1bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf1c0: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1BF1C0u;
    SET_GPR_U32(ctx, 31, 0x1BF1C8u);
    ctx->pc = 0x1BF1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1C0u;
            // 0x1bf1c4: 0x26d10020  addiu       $s1, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1C8u; }
        if (ctx->pc != 0x1BF1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1C8u; }
        if (ctx->pc != 0x1BF1C8u) { return; }
    }
    ctx->pc = 0x1BF1C8u;
label_1bf1c8:
    // 0x1bf1c8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1BF1C8u;
    {
        const bool branch_taken_0x1bf1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1C8u;
            // 0x1bf1cc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1c8) {
            ctx->pc = 0x1BF4B0u;
            goto label_1bf4b0;
        }
    }
    ctx->pc = 0x1BF1D0u;
label_1bf1d0:
    // 0x1bf1d0: 0x86230034  lh          $v1, 0x34($s1)
    ctx->pc = 0x1bf1d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1bf1d4: 0x186000b3  blez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1BF1D4u;
    {
        const bool branch_taken_0x1bf1d4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1bf1d4) {
            ctx->pc = 0x1BF4A4u;
            goto label_1bf4a4;
        }
    }
    ctx->pc = 0x1BF1DCu;
    // 0x1bf1dc: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x1bf1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf1e0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1bf1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1bf1e4: 0xc62e0028  lwc1        $f14, 0x28($s1)
    ctx->pc = 0x1bf1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bf1e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1ec: 0xc06fb1c  jal         func_1BEC70
    ctx->pc = 0x1BF1ECu;
    SET_GPR_U32(ctx, 31, 0x1BF1F4u);
    ctx->pc = 0x1BF1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1ECu;
            // 0x1bf1f0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC70u;
    if (runtime->hasFunction(0x1BEC70u)) {
        auto targetFn = runtime->lookupFunction(0x1BEC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1F4u; }
        if (ctx->pc != 0x1BF1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LocalTransWorldPrimPos__FPA4_iPffff_0x1bec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1F4u; }
        if (ctx->pc != 0x1BF1F4u) { return; }
    }
    ctx->pc = 0x1BF1F4u;
label_1bf1f4:
    // 0x1bf1f4: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1BF1F4u;
    {
        const bool branch_taken_0x1bf1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1F4u;
            // 0x1bf1f8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1f4) {
            ctx->pc = 0x1BF4A4u;
            goto label_1bf4a4;
        }
    }
    ctx->pc = 0x1BF1FCu;
    // 0x1bf1fc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BF1FCu;
    SET_GPR_U32(ctx, 31, 0x1BF204u);
    ctx->pc = 0x1BF200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1FCu;
            // 0x1bf200: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF204u; }
        if (ctx->pc != 0x1BF204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF204u; }
        if (ctx->pc != 0x1BF204u) { return; }
    }
    ctx->pc = 0x1BF204u;
label_1bf204:
    // 0x1bf204: 0x8f858ea4  lw          $a1, -0x715C($gp)
    ctx->pc = 0x1bf204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938276)));
    // 0x1bf208: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BF208u;
    SET_GPR_U32(ctx, 31, 0x1BF210u);
    ctx->pc = 0x1BF20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF208u;
            // 0x1bf20c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF210u; }
        if (ctx->pc != 0x1BF210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF210u; }
        if (ctx->pc != 0x1BF210u) { return; }
    }
    ctx->pc = 0x1BF210u;
label_1bf210:
    // 0x1bf210: 0x82240030  lb          $a0, 0x30($s1)
    ctx->pc = 0x1bf210u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1bf214: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bf214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bf218: 0x86330034  lh          $s3, 0x34($s1)
    ctx->pc = 0x1bf218u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1bf21c: 0x24428cf0  addiu       $v0, $v0, -0x7310
    ctx->pc = 0x1bf21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
    // 0x1bf220: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bf220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf224: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bf224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf228: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bf228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bf22c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bf230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf234: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1BF234u;
    {
        const bool branch_taken_0x1bf234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF234u;
            // 0x1bf238: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf234) {
            ctx->pc = 0x1BF324u;
            goto label_1bf324;
        }
    }
    ctx->pc = 0x1BF23Cu;
label_1bf23c:
    // 0x1bf23c: 0x0  nop
    ctx->pc = 0x1bf23cu;
    // NOP
    // 0x1bf240: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1bf240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1bf244: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x1bf244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x1bf248: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bf248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf24c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1BF24Cu;
    SET_GPR_U32(ctx, 31, 0x1BF254u);
    ctx->pc = 0x1BF250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF24Cu;
            // 0x1bf250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF254u; }
        if (ctx->pc != 0x1BF254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        trans_float_to_sceVector__FPfPfi_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF254u; }
        if (ctx->pc != 0x1BF254u) { return; }
    }
    ctx->pc = 0x1BF254u;
label_1bf254:
    // 0x1bf254: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x1bf254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf258: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1bf258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1bf25c: 0xc62e0028  lwc1        $f14, 0x28($s1)
    ctx->pc = 0x1bf25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bf260: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1bf260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf264: 0xc06fb1c  jal         func_1BEC70
    ctx->pc = 0x1BF264u;
    SET_GPR_U32(ctx, 31, 0x1BF26Cu);
    ctx->pc = 0x1BF268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF264u;
            // 0x1bf268: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC70u;
    if (runtime->hasFunction(0x1BEC70u)) {
        auto targetFn = runtime->lookupFunction(0x1BEC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF26Cu; }
        if (ctx->pc != 0x1BF26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LocalTransWorldPrimPos__FPA4_iPffff_0x1bec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF26Cu; }
        if (ctx->pc != 0x1BF26Cu) { return; }
    }
    ctx->pc = 0x1BF26Cu;
label_1bf26c:
    // 0x1bf26c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bf26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bf270: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf274: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bf274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf278: 0x240700b6  addiu       $a3, $zero, 0xB6
    ctx->pc = 0x1bf278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x1bf27c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BF27Cu;
    SET_GPR_U32(ctx, 31, 0x1BF284u);
    ctx->pc = 0x1BF280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF27Cu;
            // 0x1bf280: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF284u; }
        if (ctx->pc != 0x1BF284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF284u; }
        if (ctx->pc != 0x1BF284u) { return; }
    }
    ctx->pc = 0x1BF284u;
label_1bf284:
    // 0x1bf284: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1bf284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf288: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1bf288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf28c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF28Cu;
    SET_GPR_U32(ctx, 31, 0x1BF294u);
    ctx->pc = 0x1BF290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF28Cu;
            // 0x1bf290: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF294u; }
        if (ctx->pc != 0x1BF294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF294u; }
        if (ctx->pc != 0x1BF294u) { return; }
    }
    ctx->pc = 0x1BF294u;
label_1bf294:
    // 0x1bf294: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf298: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF298u;
    SET_GPR_U32(ctx, 31, 0x1BF2A0u);
    ctx->pc = 0x1BF29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF298u;
            // 0x1bf29c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2A0u; }
        if (ctx->pc != 0x1BF2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2A0u; }
        if (ctx->pc != 0x1BF2A0u) { return; }
    }
    ctx->pc = 0x1BF2A0u;
label_1bf2a0:
    // 0x1bf2a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf2a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf2a8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1bf2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf2ac: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1bf2acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf2b0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF2B0u;
    SET_GPR_U32(ctx, 31, 0x1BF2B8u);
    ctx->pc = 0x1BF2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2B0u;
            // 0x1bf2b4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2B8u; }
        if (ctx->pc != 0x1BF2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2B8u; }
        if (ctx->pc != 0x1BF2B8u) { return; }
    }
    ctx->pc = 0x1BF2B8u;
label_1bf2b8:
    // 0x1bf2b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf2bc: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF2BCu;
    SET_GPR_U32(ctx, 31, 0x1BF2C4u);
    ctx->pc = 0x1BF2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2BCu;
            // 0x1bf2c0: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2C4u; }
        if (ctx->pc != 0x1BF2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2C4u; }
        if (ctx->pc != 0x1BF2C4u) { return; }
    }
    ctx->pc = 0x1BF2C4u;
label_1bf2c4:
    // 0x1bf2c4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1bf2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf2c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf2cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf2d0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf2d4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1bf2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bf2d8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF2D8u;
    SET_GPR_U32(ctx, 31, 0x1BF2E0u);
    ctx->pc = 0x1BF2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2D8u;
            // 0x1bf2dc: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2E0u; }
        if (ctx->pc != 0x1BF2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2E0u; }
        if (ctx->pc != 0x1BF2E0u) { return; }
    }
    ctx->pc = 0x1BF2E0u;
label_1bf2e0:
    // 0x1bf2e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf2e4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF2E4u;
    SET_GPR_U32(ctx, 31, 0x1BF2ECu);
    ctx->pc = 0x1BF2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2E4u;
            // 0x1bf2e8: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2ECu; }
        if (ctx->pc != 0x1BF2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2ECu; }
        if (ctx->pc != 0x1BF2ECu) { return; }
    }
    ctx->pc = 0x1BF2ECu;
label_1bf2ec:
    // 0x1bf2ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1bf2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf2f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf2f4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1bf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf2f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1bf2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf2fc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF2FCu;
    SET_GPR_U32(ctx, 31, 0x1BF304u);
    ctx->pc = 0x1BF300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2FCu;
            // 0x1bf300: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF304u; }
        if (ctx->pc != 0x1BF304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF304u; }
        if (ctx->pc != 0x1BF304u) { return; }
    }
    ctx->pc = 0x1BF304u;
label_1bf304:
    // 0x1bf304: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf308: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF308u;
    SET_GPR_U32(ctx, 31, 0x1BF310u);
    ctx->pc = 0x1BF30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF308u;
            // 0x1bf30c: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF310u; }
        if (ctx->pc != 0x1BF310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF310u; }
        if (ctx->pc != 0x1BF310u) { return; }
    }
    ctx->pc = 0x1BF310u;
label_1bf310:
    // 0x1bf310: 0xc04d198  jal         func_134660
    ctx->pc = 0x1BF310u;
    SET_GPR_U32(ctx, 31, 0x1BF318u);
    ctx->pc = 0x1BF314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF310u;
            // 0x1bf314: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134660u;
    if (runtime->hasFunction(0x134660u)) {
        auto targetFn = runtime->lookupFunction(0x134660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF318u; }
        if (ctx->pc != 0x1BF318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Flush__11mgCDrawPrimFv_0x134660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF318u; }
        if (ctx->pc != 0x1BF318u) { return; }
    }
    ctx->pc = 0x1BF318u;
label_1bf318:
    // 0x1bf318: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x1bf318u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x1bf31c: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1bf31cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x1bf320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bf320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bf324:
    // 0x1bf324: 0x0  nop
    ctx->pc = 0x1bf324u;
    // NOP
    // 0x1bf328: 0x82220032  lb          $v0, 0x32($s1)
    ctx->pc = 0x1bf328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1bf32c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1bf32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bf330: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1BF330u;
    {
        const bool branch_taken_0x1bf330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf330) {
            ctx->pc = 0x1BF23Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf23c;
        }
    }
    ctx->pc = 0x1BF338u;
    // 0x1bf338: 0x86280034  lh          $t0, 0x34($s1)
    ctx->pc = 0x1bf338u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1bf33c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bf33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bf340: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf344: 0x240700b6  addiu       $a3, $zero, 0xB6
    ctx->pc = 0x1bf344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x1bf348: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BF348u;
    SET_GPR_U32(ctx, 31, 0x1BF350u);
    ctx->pc = 0x1BF34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF348u;
            // 0x1bf34c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF350u; }
        if (ctx->pc != 0x1BF350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF350u; }
        if (ctx->pc != 0x1BF350u) { return; }
    }
    ctx->pc = 0x1BF350u;
label_1bf350:
    // 0x1bf350: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1bf350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf354: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1bf354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf358: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF358u;
    SET_GPR_U32(ctx, 31, 0x1BF360u);
    ctx->pc = 0x1BF35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF358u;
            // 0x1bf35c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF360u; }
        if (ctx->pc != 0x1BF360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF360u; }
        if (ctx->pc != 0x1BF360u) { return; }
    }
    ctx->pc = 0x1BF360u;
label_1bf360:
    // 0x1bf360: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf364: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF364u;
    SET_GPR_U32(ctx, 31, 0x1BF36Cu);
    ctx->pc = 0x1BF368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF364u;
            // 0x1bf368: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF36Cu; }
        if (ctx->pc != 0x1BF36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF36Cu; }
        if (ctx->pc != 0x1BF36Cu) { return; }
    }
    ctx->pc = 0x1BF36Cu;
label_1bf36c:
    // 0x1bf36c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf370: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf374: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1bf374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf378: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1bf378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf37c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF37Cu;
    SET_GPR_U32(ctx, 31, 0x1BF384u);
    ctx->pc = 0x1BF380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF37Cu;
            // 0x1bf380: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF384u; }
        if (ctx->pc != 0x1BF384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF384u; }
        if (ctx->pc != 0x1BF384u) { return; }
    }
    ctx->pc = 0x1BF384u;
label_1bf384:
    // 0x1bf384: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf388: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF388u;
    SET_GPR_U32(ctx, 31, 0x1BF390u);
    ctx->pc = 0x1BF38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF388u;
            // 0x1bf38c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF390u; }
        if (ctx->pc != 0x1BF390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF390u; }
        if (ctx->pc != 0x1BF390u) { return; }
    }
    ctx->pc = 0x1BF390u;
label_1bf390:
    // 0x1bf390: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1bf390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf394: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf398: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf39c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bf39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf3a0: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1bf3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bf3a4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF3A4u;
    SET_GPR_U32(ctx, 31, 0x1BF3ACu);
    ctx->pc = 0x1BF3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3A4u;
            // 0x1bf3a8: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3ACu; }
        if (ctx->pc != 0x1BF3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3ACu; }
        if (ctx->pc != 0x1BF3ACu) { return; }
    }
    ctx->pc = 0x1BF3ACu;
label_1bf3ac:
    // 0x1bf3ac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf3b0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF3B0u;
    SET_GPR_U32(ctx, 31, 0x1BF3B8u);
    ctx->pc = 0x1BF3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3B0u;
            // 0x1bf3b4: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3B8u; }
        if (ctx->pc != 0x1BF3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3B8u; }
        if (ctx->pc != 0x1BF3B8u) { return; }
    }
    ctx->pc = 0x1BF3B8u;
label_1bf3b8:
    // 0x1bf3b8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1bf3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf3bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf3c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1bf3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf3c4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1bf3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf3c8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF3C8u;
    SET_GPR_U32(ctx, 31, 0x1BF3D0u);
    ctx->pc = 0x1BF3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3C8u;
            // 0x1bf3cc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3D0u; }
        if (ctx->pc != 0x1BF3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3D0u; }
        if (ctx->pc != 0x1BF3D0u) { return; }
    }
    ctx->pc = 0x1BF3D0u;
label_1bf3d0:
    // 0x1bf3d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf3d4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF3D4u;
    SET_GPR_U32(ctx, 31, 0x1BF3DCu);
    ctx->pc = 0x1BF3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3D4u;
            // 0x1bf3d8: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3DCu; }
        if (ctx->pc != 0x1BF3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3DCu; }
        if (ctx->pc != 0x1BF3DCu) { return; }
    }
    ctx->pc = 0x1BF3DCu;
label_1bf3dc:
    // 0x1bf3dc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BF3DCu;
    SET_GPR_U32(ctx, 31, 0x1BF3E4u);
    ctx->pc = 0x1BF3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3DCu;
            // 0x1bf3e0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3E4u; }
        if (ctx->pc != 0x1BF3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3E4u; }
        if (ctx->pc != 0x1BF3E4u) { return; }
    }
    ctx->pc = 0x1BF3E4u;
label_1bf3e4:
    // 0x1bf3e4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf3e8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BF3E8u;
    SET_GPR_U32(ctx, 31, 0x1BF3F0u);
    ctx->pc = 0x1BF3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3E8u;
            // 0x1bf3ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3F0u; }
        if (ctx->pc != 0x1BF3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3F0u; }
        if (ctx->pc != 0x1BF3F0u) { return; }
    }
    ctx->pc = 0x1BF3F0u;
label_1bf3f0:
    // 0x1bf3f0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1bf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1bf3f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bf3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf3f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bf3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bf3fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf400: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1BF400u;
    SET_GPR_U32(ctx, 31, 0x1BF408u);
    ctx->pc = 0x1BF404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF400u;
            // 0x1bf404: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF408u; }
        if (ctx->pc != 0x1BF408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF408u; }
        if (ctx->pc != 0x1BF408u) { return; }
    }
    ctx->pc = 0x1BF408u;
label_1bf408:
    // 0x1bf408: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bf408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf40c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf410: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1BF410u;
    SET_GPR_U32(ctx, 31, 0x1BF418u);
    ctx->pc = 0x1BF414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF410u;
            // 0x1bf414: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF418u; }
        if (ctx->pc != 0x1BF418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF418u; }
        if (ctx->pc != 0x1BF418u) { return; }
    }
    ctx->pc = 0x1BF418u;
label_1bf418:
    // 0x1bf418: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bf418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf41c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1bf41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1bf420: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x1bf420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x1bf424: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1bf424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1bf428: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1bf428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf42c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1bf42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bf430: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf434: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1bf434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bf438: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1bf438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf43c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf43cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf440: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1bf440u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bf444: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1BF444u;
    SET_GPR_U32(ctx, 31, 0x1BF44Cu);
    ctx->pc = 0x1BF448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF444u;
            // 0x1bf448: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF44Cu; }
        if (ctx->pc != 0x1BF44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF44Cu; }
        if (ctx->pc != 0x1BF44Cu) { return; }
    }
    ctx->pc = 0x1BF44Cu;
label_1bf44c:
    // 0x1bf44c: 0x86280034  lh          $t0, 0x34($s1)
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1bf450: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bf450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bf454: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf458: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x1bf458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1bf45c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BF45Cu;
    SET_GPR_U32(ctx, 31, 0x1BF464u);
    ctx->pc = 0x1BF460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF45Cu;
            // 0x1bf460: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF464u; }
        if (ctx->pc != 0x1BF464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF464u; }
        if (ctx->pc != 0x1BF464u) { return; }
    }
    ctx->pc = 0x1BF464u;
label_1bf464:
    // 0x1bf464: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1bf464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bf468: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf46c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF46Cu;
    SET_GPR_U32(ctx, 31, 0x1BF474u);
    ctx->pc = 0x1BF470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF46Cu;
            // 0x1bf470: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF474u; }
        if (ctx->pc != 0x1BF474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF474u; }
        if (ctx->pc != 0x1BF474u) { return; }
    }
    ctx->pc = 0x1BF474u;
label_1bf474:
    // 0x1bf474: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf478: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF478u;
    SET_GPR_U32(ctx, 31, 0x1BF480u);
    ctx->pc = 0x1BF47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF478u;
            // 0x1bf47c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF480u; }
        if (ctx->pc != 0x1BF480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF480u; }
        if (ctx->pc != 0x1BF480u) { return; }
    }
    ctx->pc = 0x1BF480u;
label_1bf480:
    // 0x1bf480: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf484: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bf484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bf488: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BF488u;
    SET_GPR_U32(ctx, 31, 0x1BF490u);
    ctx->pc = 0x1BF48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF488u;
            // 0x1bf48c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF490u; }
        if (ctx->pc != 0x1BF490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF490u; }
        if (ctx->pc != 0x1BF490u) { return; }
    }
    ctx->pc = 0x1BF490u;
label_1bf490:
    // 0x1bf490: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf494: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BF494u;
    SET_GPR_U32(ctx, 31, 0x1BF49Cu);
    ctx->pc = 0x1BF498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF494u;
            // 0x1bf498: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF49Cu; }
        if (ctx->pc != 0x1BF49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF49Cu; }
        if (ctx->pc != 0x1BF49Cu) { return; }
    }
    ctx->pc = 0x1BF49Cu;
label_1bf49c:
    // 0x1bf49c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BF49Cu;
    SET_GPR_U32(ctx, 31, 0x1BF4A4u);
    ctx->pc = 0x1BF4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF49Cu;
            // 0x1bf4a0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4A4u; }
        if (ctx->pc != 0x1BF4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF4A4u; }
        if (ctx->pc != 0x1BF4A4u) { return; }
    }
    ctx->pc = 0x1BF4A4u;
label_1bf4a4:
    // 0x1bf4a4: 0x0  nop
    ctx->pc = 0x1bf4a4u;
    // NOP
    // 0x1bf4a8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bf4a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bf4ac: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x1bf4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1bf4b0:
    // 0x1bf4b0: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1bf4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1bf4b4: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x1bf4b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bf4b8: 0x1460ff45  bnez        $v1, . + 4 + (-0xBB << 2)
    ctx->pc = 0x1BF4B8u;
    {
        const bool branch_taken_0x1bf4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf4b8) {
            ctx->pc = 0x1BF1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf1d0;
        }
    }
    ctx->pc = 0x1BF4C0u;
label_1bf4c0:
    // 0x1bf4c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bf4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf4c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bf4c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf4c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bf4c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf4cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bf4ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf4d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bf4d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf4d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bf4d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf4d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf4dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4E0u;
            // 0x1bf4e4: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF4E8u;
}
