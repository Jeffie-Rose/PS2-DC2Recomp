#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__13CRepairEffectFP9mgCMemoryi
// Address: 0x22d3d0 - 0x22d560
void Generate__13CRepairEffectFP9mgCMemoryi_0x22d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__13CRepairEffectFP9mgCMemoryi_0x22d3d0");
#endif

    switch (ctx->pc) {
        case 0x22d440u: goto label_22d440;
        case 0x22d458u: goto label_22d458;
        case 0x22d468u: goto label_22d468;
        case 0x22d498u: goto label_22d498;
        case 0x22d4b4u: goto label_22d4b4;
        case 0x22d4d8u: goto label_22d4d8;
        case 0x22d504u: goto label_22d504;
        default: break;
    }

    ctx->pc = 0x22d3d0u;

    // 0x22d3d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22d3d4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x22d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x22d3d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22d3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d3e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22d3e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22d3e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22d3ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22d3f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d3f4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x22d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x22d3f8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x22d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x22d3fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x22d3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22d400: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x22d400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x22d404: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22d408: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22d408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22d40c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d410: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x22d410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22d414: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x22d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22d418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D418u;
    {
        const bool branch_taken_0x22d418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D418u;
            // 0x22d41c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d418) {
            ctx->pc = 0x22D42Cu;
            goto label_22d42c;
        }
    }
    ctx->pc = 0x22D420u;
    // 0x22d420: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x22d420u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x22d424: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22D424u;
    {
        const bool branch_taken_0x22d424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D424u;
            // 0x22d428: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d424) {
            ctx->pc = 0x22D430u;
            goto label_22d430;
        }
    }
    ctx->pc = 0x22D42Cu;
label_22d42c:
    // 0x22d42c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x22d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_22d430:
    // 0x22d430: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x22d430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x22d434: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22d434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d438: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22D438u;
    SET_GPR_U32(ctx, 31, 0x22D440u);
    ctx->pc = 0x22D43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D438u;
            // 0x22d43c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D440u; }
        if (ctx->pc != 0x22D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D440u; }
        if (ctx->pc != 0x22D440u) { return; }
    }
    ctx->pc = 0x22D440u;
label_22d440:
    // 0x22d440: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x22d440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x22d444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22d444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d448: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22d448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22d44c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d450: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x22D450u;
    SET_GPR_U32(ctx, 31, 0x22D458u);
    ctx->pc = 0x22D454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D450u;
            // 0x22d454: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D458u; }
        if (ctx->pc != 0x22D458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D458u; }
        if (ctx->pc != 0x22D458u) { return; }
    }
    ctx->pc = 0x22D458u;
label_22d458:
    // 0x22d458: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x22d458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x22d45c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22d45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d460: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x22D460u;
    {
        const bool branch_taken_0x22d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D460u;
            // 0x22d464: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d460) {
            ctx->pc = 0x22D530u;
            goto label_22d530;
        }
    }
    ctx->pc = 0x22D468u;
label_22d468:
    // 0x22d468: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x22d468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x22d46c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22d470: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22d470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d474: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x22d474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x22d478: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x22d478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x22d47c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22d47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d480: 0xd38821  addu        $s1, $a2, $s3
    ctx->pc = 0x22d480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x22d484: 0xa2250025  sb          $a1, 0x25($s1)
    ctx->pc = 0x22d484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 5));
    // 0x22d488: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x22d488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x22d48c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x22d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x22d490: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22D490u;
    SET_GPR_U32(ctx, 31, 0x22D498u);
    ctx->pc = 0x22D494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D490u;
            // 0x22d494: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D498u; }
        if (ctx->pc != 0x22D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D498u; }
        if (ctx->pc != 0x22D498u) { return; }
    }
    ctx->pc = 0x22D498u;
label_22d498:
    // 0x22d498: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x22d498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x22d49c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x22d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x22d4a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22d4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22d4a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22d4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d4a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d4a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d4ac: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22D4ACu;
    SET_GPR_U32(ctx, 31, 0x22D4B4u);
    ctx->pc = 0x22D4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4ACu;
            // 0x22d4b0: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D4B4u; }
        if (ctx->pc != 0x22D4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D4B4u; }
        if (ctx->pc != 0x22D4B4u) { return; }
    }
    ctx->pc = 0x22D4B4u;
label_22d4b4:
    // 0x22d4b4: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x22d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22d4b8: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x22d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x22d4bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22d4c0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x22d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x22d4c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22d4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22d4c8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x22d4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22d4cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d4ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d4d0: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x22D4D0u;
    SET_GPR_U32(ctx, 31, 0x22D4D8u);
    ctx->pc = 0x22D4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4D0u;
            // 0x22d4d4: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D4D8u; }
        if (ctx->pc != 0x22D4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D4D8u; }
        if (ctx->pc != 0x22D4D8u) { return; }
    }
    ctx->pc = 0x22D4D8u;
label_22d4d8:
    // 0x22d4d8: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x22d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x22d4dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22d4dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d4e0: 0x3c033e23  lui         $v1, 0x3E23
    ctx->pc = 0x22d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15907 << 16));
    // 0x22d4e4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x22d4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x22d4e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22d4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d4ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22d4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d4f4: 0x0  nop
    ctx->pc = 0x22d4f4u;
    // NOP
    // 0x22d4f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22d4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22d4fc: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22D4FCu;
    SET_GPR_U32(ctx, 31, 0x22D504u);
    ctx->pc = 0x22D500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4FCu;
            // 0x22d500: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D504u; }
        if (ctx->pc != 0x22D504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D504u; }
        if (ctx->pc != 0x22D504u) { return; }
    }
    ctx->pc = 0x22D504u;
label_22d504:
    // 0x22d504: 0x2a410013  slti        $at, $s2, 0x13
    ctx->pc = 0x22d504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x22d508: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D508u;
    {
        const bool branch_taken_0x22d508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D508u;
            // 0x22d50c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d508) {
            ctx->pc = 0x22D51Cu;
            goto label_22d51c;
        }
    }
    ctx->pc = 0x22D510u;
    // 0x22d510: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x22d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d514: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x22d514u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22d518: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x22d518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_22d51c:
    // 0x22d51c: 0x0  nop
    ctx->pc = 0x22d51cu;
    // NOP
    // 0x22d520: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x22d520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x22d524: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x22d524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x22d528: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x22d528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x22d52c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22d52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22d530:
    // 0x22d530: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x22d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x22d534: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x22d534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22d538: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x22D538u;
    {
        const bool branch_taken_0x22d538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d538) {
            ctx->pc = 0x22D468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d468;
        }
    }
    ctx->pc = 0x22D540u;
    // 0x22d540: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22d540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d544: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22d544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d548: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d54c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d54cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d558: 0x3e00008  jr          $ra
    ctx->pc = 0x22D558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D558u;
            // 0x22d55c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D560u;
}
