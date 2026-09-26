#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw_Wind__14CWeaponElementFv
// Address: 0x1c72a0 - 0x1c74f8
void Draw_Wind__14CWeaponElementFv_0x1c72a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw_Wind__14CWeaponElementFv_0x1c72a0");
#endif

    switch (ctx->pc) {
        case 0x1c72e8u: goto label_1c72e8;
        case 0x1c72f8u: goto label_1c72f8;
        case 0x1c7308u: goto label_1c7308;
        case 0x1c7318u: goto label_1c7318;
        case 0x1c7320u: goto label_1c7320;
        case 0x1c732cu: goto label_1c732c;
        case 0x1c7338u: goto label_1c7338;
        case 0x1c7344u: goto label_1c7344;
        case 0x1c7350u: goto label_1c7350;
        case 0x1c735cu: goto label_1c735c;
        case 0x1c7368u: goto label_1c7368;
        case 0x1c7374u: goto label_1c7374;
        case 0x1c7380u: goto label_1c7380;
        case 0x1c7390u: goto label_1c7390;
        case 0x1c73d4u: goto label_1c73d4;
        case 0x1c73e4u: goto label_1c73e4;
        case 0x1c73f8u: goto label_1c73f8;
        case 0x1c7444u: goto label_1c7444;
        case 0x1c7454u: goto label_1c7454;
        case 0x1c746cu: goto label_1c746c;
        case 0x1c747cu: goto label_1c747c;
        case 0x1c7488u: goto label_1c7488;
        case 0x1c7498u: goto label_1c7498;
        case 0x1c74a4u: goto label_1c74a4;
        case 0x1c74c8u: goto label_1c74c8;
        default: break;
    }

    ctx->pc = 0x1c72a0u;

    // 0x1c72a0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1c72a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x1c72a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1c72a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1c72a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c72a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c72ac: 0x24a56c60  addiu       $a1, $a1, 0x6C60
    ctx->pc = 0x1c72acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27744));
    // 0x1c72b0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c72b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c72b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c72b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c72b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c72b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c72bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c72bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c72c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c72c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c72c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c72c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c72c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c72cc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c72d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c72d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c72d4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1c72d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1c72d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c72d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c72dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c72dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c72e0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1C72E0u;
    SET_GPR_U32(ctx, 31, 0x1C72E8u);
    ctx->pc = 0x1C72E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72E0u;
            // 0x1c72e4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72E8u; }
        if (ctx->pc != 0x1C72E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72E8u; }
        if (ctx->pc != 0x1C72E8u) { return; }
    }
    ctx->pc = 0x1C72E8u;
label_1c72e8:
    // 0x1c72e8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1c72e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c72ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c72ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72f0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C72F0u;
    SET_GPR_U32(ctx, 31, 0x1C72F8u);
    ctx->pc = 0x1C72F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72F0u;
            // 0x1c72f4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72F8u; }
        if (ctx->pc != 0x1C72F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72F8u; }
        if (ctx->pc != 0x1C72F8u) { return; }
    }
    ctx->pc = 0x1C72F8u;
label_1c72f8:
    // 0x1c72f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c72fc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7300: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C7300u;
    SET_GPR_U32(ctx, 31, 0x1C7308u);
    ctx->pc = 0x1C7304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7300u;
            // 0x1c7304: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7308u; }
        if (ctx->pc != 0x1C7308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7308u; }
        if (ctx->pc != 0x1C7308u) { return; }
    }
    ctx->pc = 0x1C7308u;
label_1c7308:
    // 0x1c7308: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c730c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c730cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7310: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C7310u;
    SET_GPR_U32(ctx, 31, 0x1C7318u);
    ctx->pc = 0x1C7314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7310u;
            // 0x1c7314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7318u; }
        if (ctx->pc != 0x1C7318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7318u; }
        if (ctx->pc != 0x1C7318u) { return; }
    }
    ctx->pc = 0x1C7318u;
label_1c7318:
    // 0x1c7318: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C7318u;
    SET_GPR_U32(ctx, 31, 0x1C7320u);
    ctx->pc = 0x1C731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7318u;
            // 0x1c731c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7320u; }
        if (ctx->pc != 0x1C7320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7320u; }
        if (ctx->pc != 0x1C7320u) { return; }
    }
    ctx->pc = 0x1C7320u;
label_1c7320:
    // 0x1c7320: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7324: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C7324u;
    SET_GPR_U32(ctx, 31, 0x1C732Cu);
    ctx->pc = 0x1C7328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7324u;
            // 0x1c7328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C732Cu; }
        if (ctx->pc != 0x1C732Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C732Cu; }
        if (ctx->pc != 0x1C732Cu) { return; }
    }
    ctx->pc = 0x1C732Cu;
label_1c732c:
    // 0x1c732c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c732cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7330: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C7330u;
    SET_GPR_U32(ctx, 31, 0x1C7338u);
    ctx->pc = 0x1C7334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7330u;
            // 0x1c7334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7338u; }
        if (ctx->pc != 0x1C7338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7338u; }
        if (ctx->pc != 0x1C7338u) { return; }
    }
    ctx->pc = 0x1C7338u;
label_1c7338:
    // 0x1c7338: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c733c: 0xc04d424  jal         func_135090
    ctx->pc = 0x1C733Cu;
    SET_GPR_U32(ctx, 31, 0x1C7344u);
    ctx->pc = 0x1C7340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C733Cu;
            // 0x1c7340: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7344u; }
        if (ctx->pc != 0x1C7344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7344u; }
        if (ctx->pc != 0x1C7344u) { return; }
    }
    ctx->pc = 0x1C7344u;
label_1c7344:
    // 0x1c7344: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7348: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C7348u;
    SET_GPR_U32(ctx, 31, 0x1C7350u);
    ctx->pc = 0x1C734Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7348u;
            // 0x1c734c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7350u; }
        if (ctx->pc != 0x1C7350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7350u; }
        if (ctx->pc != 0x1C7350u) { return; }
    }
    ctx->pc = 0x1C7350u;
label_1c7350:
    // 0x1c7350: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7354: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C7354u;
    SET_GPR_U32(ctx, 31, 0x1C735Cu);
    ctx->pc = 0x1C7358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7354u;
            // 0x1c7358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C735Cu; }
        if (ctx->pc != 0x1C735Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C735Cu; }
        if (ctx->pc != 0x1C735Cu) { return; }
    }
    ctx->pc = 0x1C735Cu;
label_1c735c:
    // 0x1c735c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7360: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C7360u;
    SET_GPR_U32(ctx, 31, 0x1C7368u);
    ctx->pc = 0x1C7364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7360u;
            // 0x1c7364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7368u; }
        if (ctx->pc != 0x1C7368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7368u; }
        if (ctx->pc != 0x1C7368u) { return; }
    }
    ctx->pc = 0x1C7368u;
label_1c7368:
    // 0x1c7368: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c736c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C736Cu;
    SET_GPR_U32(ctx, 31, 0x1C7374u);
    ctx->pc = 0x1C7370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C736Cu;
            // 0x1c7370: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7374u; }
        if (ctx->pc != 0x1C7374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7374u; }
        if (ctx->pc != 0x1C7374u) { return; }
    }
    ctx->pc = 0x1C7374u;
label_1c7374:
    // 0x1c7374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7378: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C7378u;
    SET_GPR_U32(ctx, 31, 0x1C7380u);
    ctx->pc = 0x1C737Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7378u;
            // 0x1c737c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7380u; }
        if (ctx->pc != 0x1C7380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7380u; }
        if (ctx->pc != 0x1C7380u) { return; }
    }
    ctx->pc = 0x1C7380u;
label_1c7380:
    // 0x1c7380: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c7380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7384: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7388: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c738c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c738cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7390:
    // 0x1c7390: 0x2b2a021  addu        $s4, $s5, $s2
    ctx->pc = 0x1c7390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1c7394: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1c7394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c7398: 0xc6810520  lwc1        $f1, 0x520($s4)
    ctx->pc = 0x1c7398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c739c: 0x845606fa  lh          $s6, 0x6FA($v0)
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1786)));
    // 0x1c73a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c73a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c73a4: 0x0  nop
    ctx->pc = 0x1c73a4u;
    // NOP
    // 0x1c73a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c73a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c73ac: 0x0  nop
    ctx->pc = 0x1c73acu;
    // NOP
    // 0x1c73b0: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x1C73B0u;
    {
        const bool branch_taken_0x1c73b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C73B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73B0u;
            // 0x1c73b4: 0x26970520  addiu       $s7, $s4, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73b0) {
            ctx->pc = 0x1C74A4u;
            goto label_1c74a4;
        }
    }
    ctx->pc = 0x1C73B8u;
    // 0x1c73b8: 0xc6820420  lwc1        $f2, 0x420($s4)
    ctx->pc = 0x1c73b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c73bc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1c73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c73c0: 0xc68104a0  lwc1        $f1, 0x4A0($s4)
    ctx->pc = 0x1c73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c73c4: 0xc6a005b0  lwc1        $f0, 0x5B0($s5)
    ctx->pc = 0x1c73c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c73c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c73c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c73cc: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x1C73CCu;
    SET_GPR_U32(ctx, 31, 0x1C73D4u);
    ctx->pc = 0x1C73D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73CCu;
            // 0x1c73d0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73D4u; }
        if (ctx->pc != 0x1C73D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73D4u; }
        if (ctx->pc != 0x1C73D4u) { return; }
    }
    ctx->pc = 0x1C73D4u;
label_1c73d4:
    // 0x1c73d4: 0xc68c05b4  lwc1        $f12, 0x5B4($s4)
    ctx->pc = 0x1c73d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c73d8: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1c73d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1c73dc: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x1C73DCu;
    SET_GPR_U32(ctx, 31, 0x1C73E4u);
    ctx->pc = 0x1C73E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73DCu;
            // 0x1c73e0: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73E4u; }
        if (ctx->pc != 0x1C73E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73E4u; }
        if (ctx->pc != 0x1C73E4u) { return; }
    }
    ctx->pc = 0x1C73E4u;
label_1c73e4:
    // 0x1c73e4: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x1c73e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1c73e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c73ec: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1c73ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1c73f0: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1C73F0u;
    SET_GPR_U32(ctx, 31, 0x1C73F8u);
    ctx->pc = 0x1C73F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73F0u;
            // 0x1c73f4: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73F8u; }
        if (ctx->pc != 0x1C73F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73F8u; }
        if (ctx->pc != 0x1C73F8u) { return; }
    }
    ctx->pc = 0x1C73F8u;
label_1c73f8:
    // 0x1c73f8: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x1c73f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c73fc: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1c73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1c7400: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x1c7400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c7404: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x1c7404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1c7408: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x1c7408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c740c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1c740cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c7410: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x1c7410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7418: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1c7418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c741c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1c741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7420: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c7420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7424: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x1c7424u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1c7428: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1c7428u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1c742c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c742cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c7430: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c7430u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7434: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x1c7434u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1c7438: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x1c7438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1c743c: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C743Cu;
    SET_GPR_U32(ctx, 31, 0x1C7444u);
    ctx->pc = 0x1C7440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C743Cu;
            // 0x1c7440: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7444u; }
        if (ctx->pc != 0x1C7444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7444u; }
        if (ctx->pc != 0x1C7444u) { return; }
    }
    ctx->pc = 0x1C7444u;
label_1c7444:
    // 0x1c7444: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7444u;
    {
        const bool branch_taken_0x1c7444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7444) {
            ctx->pc = 0x1C74A4u;
            goto label_1c74a4;
        }
    }
    ctx->pc = 0x1C744Cu;
    // 0x1c744c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C744Cu;
    SET_GPR_U32(ctx, 31, 0x1C7454u);
    ctx->pc = 0x1C7450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C744Cu;
            // 0x1c7450: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7454u; }
        if (ctx->pc != 0x1C7454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7454u; }
        if (ctx->pc != 0x1C7454u) { return; }
    }
    ctx->pc = 0x1C7454u;
label_1c7454:
    // 0x1c7454: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c7454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c7458: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c7458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c745c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7460: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c7460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7464: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C7464u;
    SET_GPR_U32(ctx, 31, 0x1C746Cu);
    ctx->pc = 0x1C7468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7464u;
            // 0x1c7468: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C746Cu; }
        if (ctx->pc != 0x1C746Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C746Cu; }
        if (ctx->pc != 0x1C746Cu) { return; }
    }
    ctx->pc = 0x1C746Cu;
label_1c746c:
    // 0x1c746c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7470: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1c7470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c7474: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C7474u;
    SET_GPR_U32(ctx, 31, 0x1C747Cu);
    ctx->pc = 0x1C7478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7474u;
            // 0x1c7478: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C747Cu; }
        if (ctx->pc != 0x1C747Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C747Cu; }
        if (ctx->pc != 0x1C747Cu) { return; }
    }
    ctx->pc = 0x1C747Cu;
label_1c747c:
    // 0x1c747c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c747cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7480: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C7480u;
    SET_GPR_U32(ctx, 31, 0x1C7488u);
    ctx->pc = 0x1C7484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7480u;
            // 0x1c7484: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7488u; }
        if (ctx->pc != 0x1C7488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7488u; }
        if (ctx->pc != 0x1C7488u) { return; }
    }
    ctx->pc = 0x1C7488u;
label_1c7488:
    // 0x1c7488: 0x26c60030  addiu       $a2, $s6, 0x30
    ctx->pc = 0x1c7488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x1c748c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c748cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7490: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C7490u;
    SET_GPR_U32(ctx, 31, 0x1C7498u);
    ctx->pc = 0x1C7494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7490u;
            // 0x1c7494: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7498u; }
        if (ctx->pc != 0x1C7498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7498u; }
        if (ctx->pc != 0x1C7498u) { return; }
    }
    ctx->pc = 0x1C7498u;
label_1c7498:
    // 0x1c7498: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c749c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C749Cu;
    SET_GPR_U32(ctx, 31, 0x1C74A4u);
    ctx->pc = 0x1C74A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C749Cu;
            // 0x1c74a0: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74A4u; }
        if (ctx->pc != 0x1C74A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74A4u; }
        if (ctx->pc != 0x1C74A4u) { return; }
    }
    ctx->pc = 0x1C74A4u;
label_1c74a4:
    // 0x1c74a4: 0x0  nop
    ctx->pc = 0x1c74a4u;
    // NOP
    // 0x1c74a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c74a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c74ac: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1c74acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c74b0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1c74b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1c74b4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1c74b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1c74b8: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1C74B8u;
    {
        const bool branch_taken_0x1c74b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C74BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C74B8u;
            // 0x1c74bc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74b8) {
            ctx->pc = 0x1C7390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7390;
        }
    }
    ctx->pc = 0x1C74C0u;
    // 0x1c74c0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C74C0u;
    SET_GPR_U32(ctx, 31, 0x1C74C8u);
    ctx->pc = 0x1C74C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C74C0u;
            // 0x1c74c4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74C8u; }
        if (ctx->pc != 0x1C74C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74C8u; }
        if (ctx->pc != 0x1C74C8u) { return; }
    }
    ctx->pc = 0x1C74C8u;
label_1c74c8:
    // 0x1c74c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c74c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c74cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c74ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c74d0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c74d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c74d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c74d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c74d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c74d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c74dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c74dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c74e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c74e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c74e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c74e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c74e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c74e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c74ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c74ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c74f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C74F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C74F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C74F0u;
            // 0x1c74f4: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C74F8u;
}
