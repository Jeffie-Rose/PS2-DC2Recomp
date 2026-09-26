#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawGlid__11CDngFreeMapF9mgRect<f>
// Address: 0x1ec860 - 0x1ec990
void DrawGlid__11CDngFreeMapF9mgRect_f__0x1ec860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawGlid__11CDngFreeMapF9mgRect_f__0x1ec860");
#endif

    switch (ctx->pc) {
        case 0x1ec890u: goto label_1ec890;
        case 0x1ec89cu: goto label_1ec89c;
        case 0x1ec8a8u: goto label_1ec8a8;
        case 0x1ec8b4u: goto label_1ec8b4;
        case 0x1ec8bcu: goto label_1ec8bc;
        case 0x1ec8d4u: goto label_1ec8d4;
        case 0x1ec8ecu: goto label_1ec8ec;
        case 0x1ec90cu: goto label_1ec90c;
        case 0x1ec938u: goto label_1ec938;
        case 0x1ec958u: goto label_1ec958;
        case 0x1ec96cu: goto label_1ec96c;
        case 0x1ec974u: goto label_1ec974;
        default: break;
    }

    ctx->pc = 0x1ec860u;

    // 0x1ec860: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1ec860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1ec864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ec864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ec868: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1ec868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ec86c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ec86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ec870: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1ec870u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ec874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec878: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ec878u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ec87c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec880: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ec880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ec884: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ec884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ec888: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1EC888u;
    SET_GPR_U32(ctx, 31, 0x1EC890u);
    ctx->pc = 0x1EC88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC888u;
            // 0x1ec88c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC890u; }
        if (ctx->pc != 0x1EC890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC890u; }
        if (ctx->pc != 0x1EC890u) { return; }
    }
    ctx->pc = 0x1EC890u;
label_1ec890:
    // 0x1ec890: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec894: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1EC894u;
    SET_GPR_U32(ctx, 31, 0x1EC89Cu);
    ctx->pc = 0x1EC898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC894u;
            // 0x1ec898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC89Cu; }
        if (ctx->pc != 0x1EC89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC89Cu; }
        if (ctx->pc != 0x1EC89Cu) { return; }
    }
    ctx->pc = 0x1EC89Cu;
label_1ec89c:
    // 0x1ec89c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec8a0: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x1EC8A0u;
    SET_GPR_U32(ctx, 31, 0x1EC8A8u);
    ctx->pc = 0x1EC8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8A0u;
            // 0x1ec8a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8A8u; }
        if (ctx->pc != 0x1EC8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8A8u; }
        if (ctx->pc != 0x1EC8A8u) { return; }
    }
    ctx->pc = 0x1EC8A8u;
label_1ec8a8:
    // 0x1ec8a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec8ac: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EC8ACu;
    SET_GPR_U32(ctx, 31, 0x1EC8B4u);
    ctx->pc = 0x1EC8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8ACu;
            // 0x1ec8b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8B4u; }
        if (ctx->pc != 0x1EC8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8B4u; }
        if (ctx->pc != 0x1EC8B4u) { return; }
    }
    ctx->pc = 0x1EC8B4u;
label_1ec8b4:
    // 0x1ec8b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC8B4u;
    SET_GPR_U32(ctx, 31, 0x1EC8BCu);
    ctx->pc = 0x1EC8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8B4u;
            // 0x1ec8b8: 0xc60c00f0  lwc1        $f12, 0xF0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8BCu; }
        if (ctx->pc != 0x1EC8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8BCu; }
        if (ctx->pc != 0x1EC8BCu) { return; }
    }
    ctx->pc = 0x1EC8BCu;
label_1ec8bc:
    // 0x1ec8bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ec8bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec8c4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ec8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ec8c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8cc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EC8CCu;
    SET_GPR_U32(ctx, 31, 0x1EC8D4u);
    ctx->pc = 0x1EC8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8CCu;
            // 0x1ec8d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8D4u; }
        if (ctx->pc != 0x1EC8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8D4u; }
        if (ctx->pc != 0x1EC8D4u) { return; }
    }
    ctx->pc = 0x1EC8D4u;
label_1ec8d4:
    // 0x1ec8d4: 0xc7b40034  lwc1        $f20, 0x34($sp)
    ctx->pc = 0x1ec8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ec8d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec8dc: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1ec8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec8e0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ec8e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ec8e4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EC8E4u;
    SET_GPR_U32(ctx, 31, 0x1EC8ECu);
    ctx->pc = 0x1EC8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8E4u;
            // 0x1ec8e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8ECu; }
        if (ctx->pc != 0x1EC8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8ECu; }
        if (ctx->pc != 0x1EC8ECu) { return; }
    }
    ctx->pc = 0x1EC8ECu;
label_1ec8ec:
    // 0x1ec8ec: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1ec8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec8f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec8f4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1ec8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec8f8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ec8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ec8fc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ec8fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ec900: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x1ec900u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec904: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EC904u;
    SET_GPR_U32(ctx, 31, 0x1EC90Cu);
    ctx->pc = 0x1EC908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC904u;
            // 0x1ec908: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC90Cu; }
        if (ctx->pc != 0x1EC90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC90Cu; }
        if (ctx->pc != 0x1EC90Cu) { return; }
    }
    ctx->pc = 0x1EC90Cu;
label_1ec90c:
    // 0x1ec90c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1ec90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1ec910: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x1ec910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
    // 0x1ec914: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec918: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec91c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec920: 0x0  nop
    ctx->pc = 0x1ec920u;
    // NOP
    // 0x1ec924: 0x46140580  add.s       $f22, $f0, $f20
    ctx->pc = 0x1ec924u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1ec928: 0x46150b00  add.s       $f12, $f1, $f21
    ctx->pc = 0x1ec928u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x1ec92c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ec92cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ec930: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EC930u;
    SET_GPR_U32(ctx, 31, 0x1EC938u);
    ctx->pc = 0x1EC934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC930u;
            // 0x1ec934: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC938u; }
        if (ctx->pc != 0x1EC938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC938u; }
        if (ctx->pc != 0x1EC938u) { return; }
    }
    ctx->pc = 0x1EC938u;
label_1ec938:
    // 0x1ec938: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1ec938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec93c: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x1ec93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
    // 0x1ec940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec944: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec948: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ec948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ec94c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1ec94cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1ec950: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EC950u;
    SET_GPR_U32(ctx, 31, 0x1EC958u);
    ctx->pc = 0x1EC954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC950u;
            // 0x1ec954: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC958u; }
        if (ctx->pc != 0x1EC958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC958u; }
        if (ctx->pc != 0x1EC958u) { return; }
    }
    ctx->pc = 0x1EC958u;
label_1ec958:
    // 0x1ec958: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1ec958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec95c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ec95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec960: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ec960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ec964: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EC964u;
    SET_GPR_U32(ctx, 31, 0x1EC96Cu);
    ctx->pc = 0x1EC968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC964u;
            // 0x1ec968: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC96Cu; }
        if (ctx->pc != 0x1EC96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC96Cu; }
        if (ctx->pc != 0x1EC96Cu) { return; }
    }
    ctx->pc = 0x1EC96Cu;
label_1ec96c:
    // 0x1ec96c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EC96Cu;
    SET_GPR_U32(ctx, 31, 0x1EC974u);
    ctx->pc = 0x1EC970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC96Cu;
            // 0x1ec970: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC974u; }
        if (ctx->pc != 0x1EC974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC974u; }
        if (ctx->pc != 0x1EC974u) { return; }
    }
    ctx->pc = 0x1EC974u;
label_1ec974:
    // 0x1ec974: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ec974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec978: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1ec978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ec97c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec980: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ec980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ec984: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ec984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ec988: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC988u;
            // 0x1ec98c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC990u;
}
