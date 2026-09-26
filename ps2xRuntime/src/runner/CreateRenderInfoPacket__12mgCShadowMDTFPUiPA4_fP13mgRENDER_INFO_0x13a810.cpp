#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateRenderInfoPacket__12mgCShadowMDTFPUiPA4_fP13mgRENDER_INFO
// Address: 0x13a810 - 0x13ac70
void CreateRenderInfoPacket__12mgCShadowMDTFPUiPA4_fP13mgRENDER_INFO_0x13a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateRenderInfoPacket__12mgCShadowMDTFPUiPA4_fP13mgRENDER_INFO_0x13a810");
#endif

    switch (ctx->pc) {
        case 0x13a868u: goto label_13a868;
        case 0x13a870u: goto label_13a870;
        case 0x13a888u: goto label_13a888;
        case 0x13a90cu: goto label_13a90c;
        case 0x13a91cu: goto label_13a91c;
        case 0x13a978u: goto label_13a978;
        case 0x13a98cu: goto label_13a98c;
        case 0x13aaf4u: goto label_13aaf4;
        case 0x13ab0cu: goto label_13ab0c;
        case 0x13ab1cu: goto label_13ab1c;
        case 0x13abacu: goto label_13abac;
        case 0x13abc0u: goto label_13abc0;
        case 0x13abd4u: goto label_13abd4;
        case 0x13abe4u: goto label_13abe4;
        case 0x13ac40u: goto label_13ac40;
        default: break;
    }

    ctx->pc = 0x13a810u;

    // 0x13a810: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x13a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x13a814: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13a818: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13a81c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13a81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13a820: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13a824: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13a828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a82c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a830: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a834: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13a834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a838: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13a838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a83c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13a83cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a840: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13a840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a844: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13a844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13a848: 0x24420e50  addiu       $v0, $v0, 0xE50
    ctx->pc = 0x13a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3664));
    // 0x13a84c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x13a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13a850: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13a850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a854: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13a854u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13a858: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13a858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13a85c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x13a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13a860: 0xc04c094  jal         func_130250
    ctx->pc = 0x13A860u;
    SET_GPR_U32(ctx, 31, 0x13A868u);
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A868u; }
        if (ctx->pc != 0x13A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A868u; }
        if (ctx->pc != 0x13A868u) { return; }
    }
    ctx->pc = 0x13A868u;
label_13a868:
    // 0x13a868: 0xc04f8ec  jal         func_13E3B0
    ctx->pc = 0x13A868u;
    SET_GPR_U32(ctx, 31, 0x13A870u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A870u; }
        if (ctx->pc != 0x13A870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A870u; }
        if (ctx->pc != 0x13A870u) { return; }
    }
    ctx->pc = 0x13A870u;
label_13a870:
    // 0x13a870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13a870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a874: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x13a874u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a878: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x13a878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a87c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a880: 0xc04e494  jal         func_139250
    ctx->pc = 0x13A880u;
    SET_GPR_U32(ctx, 31, 0x13A888u);
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A888u; }
        if (ctx->pc != 0x13A888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A888u; }
        if (ctx->pc != 0x13A888u) { return; }
    }
    ctx->pc = 0x13A888u;
label_13a888:
    // 0x13a888: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13a88c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13a890: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13a890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13a894: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13a894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x13a898: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x13a898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x13a89c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x13a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x13a8a0: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x13a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x13a8a4: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x13a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x13a8a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13a8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13a8ac: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x13a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x13a8b0: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x13a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x13a8b4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x13a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x13a8b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13a8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13a8bc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x13a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x13a8c0: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x13a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13a8c4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13a8c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a8c8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x13a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x13a8cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13a8ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a8d0: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x13a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x13a8d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13a8d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a8d8: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x13a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x13a8dc: 0x8e420fbc  lw          $v0, 0xFBC($s2)
    ctx->pc = 0x13a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4028)));
    // 0x13a8e0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x13a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x13a8e4: 0xc6400fb0  lwc1        $f0, 0xFB0($s2)
    ctx->pc = 0x13a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8e8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x13a8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x13a8ec: 0xc6400fb4  lwc1        $f0, 0xFB4($s2)
    ctx->pc = 0x13a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8f0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x13a8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x13a8f4: 0xc6400fb8  lwc1        $f0, 0xFB8($s2)
    ctx->pc = 0x13a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8f8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x13a8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x13a8fc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x13a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x13a900: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13a900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13a904: 0xc041c60  jal         func_107180
    ctx->pc = 0x13A904u;
    SET_GPR_U32(ctx, 31, 0x13A90Cu);
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A90Cu; }
        if (ctx->pc != 0x13A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A90Cu; }
        if (ctx->pc != 0x13A90Cu) { return; }
    }
    ctx->pc = 0x13A90Cu;
label_13a90c:
    // 0x13a90c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x13a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x13a910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13a910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a914: 0xc041c60  jal         func_107180
    ctx->pc = 0x13A914u;
    SET_GPR_U32(ctx, 31, 0x13A91Cu);
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A91Cu; }
        if (ctx->pc != 0x13A91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A91Cu; }
        if (ctx->pc != 0x13A91Cu) { return; }
    }
    ctx->pc = 0x13A91Cu;
label_13a91c:
    // 0x13a91c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x13a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13a920: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13a920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a924: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x13a924u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x13a928: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13a928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a92c: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x13a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x13a930: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13a930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a934: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x13a934u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x13a938: 0xc6400390  lwc1        $f0, 0x390($s2)
    ctx->pc = 0x13a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a93c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x13a93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x13a940: 0xc6400394  lwc1        $f0, 0x394($s2)
    ctx->pc = 0x13a940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a944: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x13a944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x13a948: 0xc6400398  lwc1        $f0, 0x398($s2)
    ctx->pc = 0x13a948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a94c: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x13a94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x13a950: 0x7a420ec0  lq          $v0, 0xEC0($s2)
    ctx->pc = 0x13a950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 3776)));
    // 0x13a954: 0x7e020170  sq          $v0, 0x170($s0)
    ctx->pc = 0x13a954u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 368), GPR_VEC(ctx, 2));
    // 0x13a958: 0x7a420ed0  lq          $v0, 0xED0($s2)
    ctx->pc = 0x13a958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 3792)));
    // 0x13a95c: 0x7e020180  sq          $v0, 0x180($s0)
    ctx->pc = 0x13a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 2));
    // 0x13a960: 0x261101a0  addiu       $s1, $s0, 0x1A0
    ctx->pc = 0x13a960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x13a964: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x13a964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13a968: 0x264502a0  addiu       $a1, $s2, 0x2A0
    ctx->pc = 0x13a968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
    // 0x13a96c: 0x264601a0  addiu       $a2, $s2, 0x1A0
    ctx->pc = 0x13a96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x13a970: 0xc04c094  jal         func_130250
    ctx->pc = 0x13A970u;
    SET_GPR_U32(ctx, 31, 0x13A978u);
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A978u; }
        if (ctx->pc != 0x13A978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A978u; }
        if (ctx->pc != 0x13A978u) { return; }
    }
    ctx->pc = 0x13A978u;
label_13a978:
    // 0x13a978: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x13a978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13a97c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13a97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a980: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13a980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a984: 0xc04c094  jal         func_130250
    ctx->pc = 0x13A984u;
    SET_GPR_U32(ctx, 31, 0x13A98Cu);
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A98Cu; }
        if (ctx->pc != 0x13A98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A98Cu; }
        if (ctx->pc != 0x13A98Cu) { return; }
    }
    ctx->pc = 0x13A98Cu;
label_13a98c:
    // 0x13a98c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x13a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13a990: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13a990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a994: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x13a994u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x13a998: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x13a998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13a99c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13a99cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a9a0: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x13a9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x13a9a4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x13a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13a9a8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13a9a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a9ac: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x13a9acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x13a9b0: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x13a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13a9b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13a9b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a9b8: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x13a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x13a9bc: 0x7a4202e0  lq          $v0, 0x2E0($s2)
    ctx->pc = 0x13a9bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x13a9c0: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x13a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x13a9c4: 0x7a4202f0  lq          $v0, 0x2F0($s2)
    ctx->pc = 0x13a9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 752)));
    // 0x13a9c8: 0x7e220060  sq          $v0, 0x60($s1)
    ctx->pc = 0x13a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 2));
    // 0x13a9cc: 0x7a420300  lq          $v0, 0x300($s2)
    ctx->pc = 0x13a9ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 768)));
    // 0x13a9d0: 0x7e220070  sq          $v0, 0x70($s1)
    ctx->pc = 0x13a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 2));
    // 0x13a9d4: 0x7a420310  lq          $v0, 0x310($s2)
    ctx->pc = 0x13a9d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 784)));
    // 0x13a9d8: 0x7e220080  sq          $v0, 0x80($s1)
    ctx->pc = 0x13a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 2));
    // 0x13a9dc: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x13a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x13a9e0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x13a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13a9e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a9e8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x13a9e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13a9ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A9ECu;
    {
        const bool branch_taken_0x13a9ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13a9ec) {
            ctx->pc = 0x13A9FCu;
            goto label_13a9fc;
        }
    }
    ctx->pc = 0x13A9F4u;
    // 0x13a9f4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13a9f8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13a9f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13a9fc:
    // 0x13a9fc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x13a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x13aa00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13aa04: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13aa08: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x13aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x13aa0c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13aa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13aa10: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x13aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x13aa14: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x13aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x13aa18: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x13aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x13aa1c: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x13aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x13aa20: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x13aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x13aa24: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x13aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x13aa28: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x13aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x13aa2c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x13aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13aa30: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13aa34: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x13aa34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13aa38: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AA38u;
    {
        const bool branch_taken_0x13aa38 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13aa38) {
            ctx->pc = 0x13AA48u;
            goto label_13aa48;
        }
    }
    ctx->pc = 0x13AA40u;
    // 0x13aa40: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13aa44: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13aa44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13aa48:
    // 0x13aa48: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x13aa48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x13aa4c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AA4Cu;
    {
        const bool branch_taken_0x13aa4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13aa4c) {
            ctx->pc = 0x13AA5Cu;
            goto label_13aa5c;
        }
    }
    ctx->pc = 0x13AA54u;
    // 0x13aa54: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x13aa58: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x13aa58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_13aa5c:
    // 0x13aa5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13aa60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13aa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13aa64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13aa68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13aa6c: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x13aa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13aa70: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x13aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x13aa74: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x13aa74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x13aa78: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x13aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x13aa7c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13aa80: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x13aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x13aa84: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x13aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    // 0x13aa88: 0x34028003  ori         $v0, $zero, 0x8003
    ctx->pc = 0x13aa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x13aa8c: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x13aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x13aa90: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x13aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x13aa94: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x13aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13aa98: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x13aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x13aa9c: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x13aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x13aaa0: 0x262300c0  addiu       $v1, $s1, 0xC0
    ctx->pc = 0x13aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x13aaa4: 0xfe2000c0  sd          $zero, 0xC0($s1)
    ctx->pc = 0x13aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 192), GPR_U64(ctx, 0));
    // 0x13aaa8: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x13aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x13aaac: 0xfe2200c8  sd          $v0, 0xC8($s1)
    ctx->pc = 0x13aaacu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 200), GPR_U64(ctx, 2));
    // 0x13aab0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x13aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13aab4: 0xfe2200d0  sd          $v0, 0xD0($s1)
    ctx->pc = 0x13aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 208), GPR_U64(ctx, 2));
    // 0x13aab8: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x13aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x13aabc: 0xfe2200d8  sd          $v0, 0xD8($s1)
    ctx->pc = 0x13aabcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 216), GPR_U64(ctx, 2));
    // 0x13aac0: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x13aac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x13aac4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x13aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x13aac8: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x13aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x13aacc: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x13aaccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    // 0x13aad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13aad4: 0xfe2200e8  sd          $v0, 0xE8($s1)
    ctx->pc = 0x13aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 232), GPR_U64(ctx, 2));
    // 0x13aad8: 0x24710030  addiu       $s1, $v1, 0x30
    ctx->pc = 0x13aad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13aadc: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13aae0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13AAE0u;
    {
        const bool branch_taken_0x13aae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aae0) {
            ctx->pc = 0x13AAFCu;
            goto label_13aafc;
        }
    }
    ctx->pc = 0x13AAE8u;
    // 0x13aae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aaec: 0xc04e220  jal         func_138880
    ctx->pc = 0x13AAECu;
    SET_GPR_U32(ctx, 31, 0x13AAF4u);
    ctx->pc = 0x138880u;
    if (runtime->hasFunction(0x138880u)) {
        auto targetFn = runtime->lookupFunction(0x138880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AAF4u; }
        if (ctx->pc != 0x13AAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__10mgCDrawEnvFR10mgCDrawEnv_0x138880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AAF4u; }
        if (ctx->pc != 0x13AAF4u) { return; }
    }
    ctx->pc = 0x13AAF4u;
label_13aaf4:
    // 0x13aaf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AAF4u;
    {
        const bool branch_taken_0x13aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aaf4) {
            ctx->pc = 0x13AB0Cu;
            goto label_13ab0c;
        }
    }
    ctx->pc = 0x13AAFCu;
label_13aafc:
    // 0x13aafc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13aafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab00: 0x26450f20  addiu       $a1, $s2, 0xF20
    ctx->pc = 0x13ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3872));
    // 0x13ab04: 0xc04e220  jal         func_138880
    ctx->pc = 0x13AB04u;
    SET_GPR_U32(ctx, 31, 0x13AB0Cu);
    ctx->pc = 0x138880u;
    if (runtime->hasFunction(0x138880u)) {
        auto targetFn = runtime->lookupFunction(0x138880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB0Cu; }
        if (ctx->pc != 0x13AB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__10mgCDrawEnvFR10mgCDrawEnv_0x138880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB0Cu; }
        if (ctx->pc != 0x13AB0Cu) { return; }
    }
    ctx->pc = 0x13AB0Cu;
label_13ab0c:
    // 0x13ab0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13ab14: 0xc04e290  jal         func_138A40
    ctx->pc = 0x13AB14u;
    SET_GPR_U32(ctx, 31, 0x13AB1Cu);
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB1Cu; }
        if (ctx->pc != 0x13AB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB1Cu; }
        if (ctx->pc != 0x13AB1Cu) { return; }
    }
    ctx->pc = 0x13AB1Cu;
label_13ab1c:
    // 0x13ab1c: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x13ab1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x13ab20: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x13ab20u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13ab24: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x13ab24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13ab28: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x13ab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x13ab2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ab2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ab30: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x13ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ab34: 0x92240012  lbu         $a0, 0x12($s1)
    ctx->pc = 0x13ab34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x13ab38: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x13ab38u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x13ab3c: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x13ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x13ab40: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13ab44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ab44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ab48: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x13ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ab4c: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x13ab4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13ab50: 0x30050001  andi        $a1, $zero, 0x1
    ctx->pc = 0x13ab50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x13ab54: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x13ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x13ab58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13ab58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13ab5c: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x13ab5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ab60: 0x92240011  lbu         $a0, 0x11($s1)
    ctx->pc = 0x13ab60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x13ab64: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x13ab64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x13ab68: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ab6c: 0x2402ffcf  addiu       $v0, $zero, -0x31
    ctx->pc = 0x13ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x13ab70: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13ab74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ab78: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x13ab78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ab7c: 0x92240011  lbu         $a0, 0x11($s1)
    ctx->pc = 0x13ab7cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x13ab80: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x13ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x13ab84: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x13ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13ab88: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13ab8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ab90: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x13ab90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ab94: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x13ab94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x13ab98: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13ab9c: 0x26450340  addiu       $a1, $s2, 0x340
    ctx->pc = 0x13ab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x13aba0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13aba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aba4: 0xc04c094  jal         func_130250
    ctx->pc = 0x13ABA4u;
    SET_GPR_U32(ctx, 31, 0x13ABACu);
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABACu; }
        if (ctx->pc != 0x13ABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABACu; }
        if (ctx->pc != 0x13ABACu) { return; }
    }
    ctx->pc = 0x13ABACu;
label_13abac:
    // 0x13abac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13abacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13abb0: 0x264501a0  addiu       $a1, $s2, 0x1A0
    ctx->pc = 0x13abb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x13abb4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13abb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abb8: 0xc04c094  jal         func_130250
    ctx->pc = 0x13ABB8u;
    SET_GPR_U32(ctx, 31, 0x13ABC0u);
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABC0u; }
        if (ctx->pc != 0x13ABC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABC0u; }
        if (ctx->pc != 0x13ABC0u) { return; }
    }
    ctx->pc = 0x13ABC0u;
label_13abc0:
    // 0x13abc0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13abc4: 0x264502a0  addiu       $a1, $s2, 0x2A0
    ctx->pc = 0x13abc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
    // 0x13abc8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13abc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abcc: 0xc04c094  jal         func_130250
    ctx->pc = 0x13ABCCu;
    SET_GPR_U32(ctx, 31, 0x13ABD4u);
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABD4u; }
        if (ctx->pc != 0x13ABD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABD4u; }
        if (ctx->pc != 0x13ABD4u) { return; }
    }
    ctx->pc = 0x13ABD4u;
label_13abd4:
    // 0x13abd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13abd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abd8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x13abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13abdc: 0xc04e7c4  jal         func_139F10
    ctx->pc = 0x13ABDCu;
    SET_GPR_U32(ctx, 31, 0x13ABE4u);
    ctx->pc = 0x139F10u;
    if (runtime->hasFunction(0x139F10u)) {
        auto targetFn = runtime->lookupFunction(0x139F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABE4u; }
        if (ctx->pc != 0x13ABE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetShadowData__FPUiPA4_f_0x139f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABE4u; }
        if (ctx->pc != 0x13ABE4u) { return; }
    }
    ctx->pc = 0x13ABE4u;
label_13abe4:
    // 0x13abe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13abe8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x13abe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13abec: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x13abecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x13abf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13abf4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x13abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x13abf8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x13abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x13abfc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x13abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x13ac00: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x13ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13ac04: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x13ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x13ac08: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x13ac08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13ac0c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AC0Cu;
    {
        const bool branch_taken_0x13ac0c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13ac0c) {
            ctx->pc = 0x13AC1Cu;
            goto label_13ac1c;
        }
    }
    ctx->pc = 0x13AC14u;
    // 0x13ac14: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13ac18: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13ac18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13ac1c:
    // 0x13ac1c: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x13ac1cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x13ac20: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AC20u;
    {
        const bool branch_taken_0x13ac20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13ac20) {
            ctx->pc = 0x13AC30u;
            goto label_13ac30;
        }
    }
    ctx->pc = 0x13AC28u;
    // 0x13ac28: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x13ac2c: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x13ac2cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_13ac30:
    // 0x13ac30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13ac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ac34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac38: 0xc04f8f4  jal         func_13E3D0
    ctx->pc = 0x13AC38u;
    SET_GPR_U32(ctx, 31, 0x13AC40u);
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC40u; }
        if (ctx->pc != 0x13AC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC40u; }
        if (ctx->pc != 0x13AC40u) { return; }
    }
    ctx->pc = 0x13AC40u;
label_13ac40:
    // 0x13ac40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13ac40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13ac44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13ac48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13ac48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ac4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13ac4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ac50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13ac50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ac54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13ac54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ac58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ac58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ac5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ac5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ac60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ac60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ac64: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x13ac64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x13AC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13AC70u;
}
