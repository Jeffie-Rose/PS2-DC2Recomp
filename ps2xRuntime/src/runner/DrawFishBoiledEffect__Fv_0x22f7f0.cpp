#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFishBoiledEffect__Fv
// Address: 0x22f7f0 - 0x22f974
void DrawFishBoiledEffect__Fv_0x22f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFishBoiledEffect__Fv_0x22f7f0");
#endif

    switch (ctx->pc) {
        case 0x22f834u: goto label_22f834;
        case 0x22f840u: goto label_22f840;
        case 0x22f84cu: goto label_22f84c;
        case 0x22f858u: goto label_22f858;
        case 0x22f864u: goto label_22f864;
        case 0x22f894u: goto label_22f894;
        case 0x22f8c8u: goto label_22f8c8;
        case 0x22f8e0u: goto label_22f8e0;
        case 0x22f8f0u: goto label_22f8f0;
        case 0x22f908u: goto label_22f908;
        case 0x22f918u: goto label_22f918;
        case 0x22f930u: goto label_22f930;
        case 0x22f94cu: goto label_22f94c;
        default: break;
    }

    ctx->pc = 0x22f7f0u;

    // 0x22f7f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x22f7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x22f7f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22f7f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22f7fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x22f800: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22f800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22f804: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22f808: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22f808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22f80c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22f80cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22f810: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22f810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22f814: 0x87839498  lh          $v1, -0x6B68($gp)
    ctx->pc = 0x22f814u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939800)));
    // 0x22f818: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x22F818u;
    {
        const bool branch_taken_0x22f818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f818) {
            ctx->pc = 0x22F94Cu;
            goto label_22f94c;
        }
    }
    ctx->pc = 0x22F820u;
    // 0x22f820: 0x8f83949c  lw          $v1, -0x6B64($gp)
    ctx->pc = 0x22f820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939804)));
    // 0x22f824: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x22F824u;
    {
        const bool branch_taken_0x22f824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F824u;
            // 0x22f828: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f824) {
            ctx->pc = 0x22F94Cu;
            goto label_22f94c;
        }
    }
    ctx->pc = 0x22F82Cu;
    // 0x22f82c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x22F82Cu;
    SET_GPR_U32(ctx, 31, 0x22F834u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F834u; }
        if (ctx->pc != 0x22F834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F834u; }
        if (ctx->pc != 0x22F834u) { return; }
    }
    ctx->pc = 0x22F834u;
label_22f834:
    // 0x22f834: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22f834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f838: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x22F838u;
    SET_GPR_U32(ctx, 31, 0x22F840u);
    ctx->pc = 0x22F83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F838u;
            // 0x22f83c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F840u; }
        if (ctx->pc != 0x22F840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F840u; }
        if (ctx->pc != 0x22F840u) { return; }
    }
    ctx->pc = 0x22F840u;
label_22f840:
    // 0x22f840: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22f840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f844: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22F844u;
    SET_GPR_U32(ctx, 31, 0x22F84Cu);
    ctx->pc = 0x22F848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F844u;
            // 0x22f848: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F84Cu; }
        if (ctx->pc != 0x22F84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F84Cu; }
        if (ctx->pc != 0x22F84Cu) { return; }
    }
    ctx->pc = 0x22F84Cu;
label_22f84c:
    // 0x22f84c: 0x8f85949c  lw          $a1, -0x6B64($gp)
    ctx->pc = 0x22f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939804)));
    // 0x22f850: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22F850u;
    SET_GPR_U32(ctx, 31, 0x22F858u);
    ctx->pc = 0x22F854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F850u;
            // 0x22f854: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F858u; }
        if (ctx->pc != 0x22F858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F858u; }
        if (ctx->pc != 0x22F858u) { return; }
    }
    ctx->pc = 0x22F858u;
label_22f858:
    // 0x22f858: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22f858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f85c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22f85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f860: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22f860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f864:
    // 0x22f864: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22f864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22f868: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x22f868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x22f86c: 0x2442d4b0  addiu       $v0, $v0, -0x2B50
    ctx->pc = 0x22f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956208));
    // 0x22f870: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x22f870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22f874: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x22f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f878: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22f878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22f87c: 0x2442d490  addiu       $v0, $v0, -0x2B70
    ctx->pc = 0x22f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956176));
    // 0x22f880: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22f880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f884: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22f888: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x22f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f88c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x22F88Cu;
    SET_GPR_U32(ctx, 31, 0x22F894u);
    ctx->pc = 0x22F890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F88Cu;
            // 0x22f890: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F894u; }
        if (ctx->pc != 0x22F894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F894u; }
        if (ctx->pc != 0x22F894u) { return; }
    }
    ctx->pc = 0x22F894u;
label_22f894:
    // 0x22f894: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22f894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22f898: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22f898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22f89c: 0x2442d450  addiu       $v0, $v0, -0x2BB0
    ctx->pc = 0x22f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956112));
    // 0x22f8a0: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x22f8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f8a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22f8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f8a8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22f8ac: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x22f8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f8b0: 0x2442d4d0  addiu       $v0, $v0, -0x2B30
    ctx->pc = 0x22f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956240));
    // 0x22f8b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x22f8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22f8b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22f8bc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x22f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f8c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22F8C0u;
    SET_GPR_U32(ctx, 31, 0x22F8C8u);
    ctx->pc = 0x22F8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F8C0u;
            // 0x22f8c4: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8C8u; }
        if (ctx->pc != 0x22F8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8C8u; }
        if (ctx->pc != 0x22F8C8u) { return; }
    }
    ctx->pc = 0x22F8C8u;
label_22f8c8:
    // 0x22f8c8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x22f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22f8cc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22f8ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f8d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22f8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8d8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22F8D8u;
    SET_GPR_U32(ctx, 31, 0x22F8E0u);
    ctx->pc = 0x22F8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F8D8u;
            // 0x22f8dc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8E0u; }
        if (ctx->pc != 0x22F8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8E0u; }
        if (ctx->pc != 0x22F8E0u) { return; }
    }
    ctx->pc = 0x22F8E0u;
label_22f8e0:
    // 0x22f8e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f8e4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x22f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22f8e8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22F8E8u;
    SET_GPR_U32(ctx, 31, 0x22F8F0u);
    ctx->pc = 0x22F8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F8E8u;
            // 0x22f8ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8F0u; }
        if (ctx->pc != 0x22F8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8F0u; }
        if (ctx->pc != 0x22F8F0u) { return; }
    }
    ctx->pc = 0x22F8F0u;
label_22f8f0:
    // 0x22f8f0: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x22f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22f8f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f8f8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22f8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22f8fc: 0x26740004  addiu       $s4, $s3, 0x4
    ctx->pc = 0x22f8fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x22f900: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22F900u;
    SET_GPR_U32(ctx, 31, 0x22F908u);
    ctx->pc = 0x22F904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F900u;
            // 0x22f904: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F908u; }
        if (ctx->pc != 0x22F908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F908u; }
        if (ctx->pc != 0x22F908u) { return; }
    }
    ctx->pc = 0x22F908u;
label_22f908:
    // 0x22f908: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22f908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f90c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x22f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22f910: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22F910u;
    SET_GPR_U32(ctx, 31, 0x22F918u);
    ctx->pc = 0x22F914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F910u;
            // 0x22f914: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F918u; }
        if (ctx->pc != 0x22F918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F918u; }
        if (ctx->pc != 0x22F918u) { return; }
    }
    ctx->pc = 0x22F918u;
label_22f918:
    // 0x22f918: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x22f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f91c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f920: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x22f920u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x22f924: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22f924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22f928: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x22F928u;
    SET_GPR_U32(ctx, 31, 0x22F930u);
    ctx->pc = 0x22F92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F928u;
            // 0x22f92c: 0x4600a340  add.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F930u; }
        if (ctx->pc != 0x22F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F930u; }
        if (ctx->pc != 0x22F930u) { return; }
    }
    ctx->pc = 0x22F930u;
label_22f930:
    // 0x22f930: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22f930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22f934: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x22f934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x22f938: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x22f938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22f93c: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x22F93Cu;
    {
        const bool branch_taken_0x22f93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F93Cu;
            // 0x22f940: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f93c) {
            ctx->pc = 0x22F864u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f864;
        }
    }
    ctx->pc = 0x22F944u;
    // 0x22f944: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22F944u;
    SET_GPR_U32(ctx, 31, 0x22F94Cu);
    ctx->pc = 0x22F948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F944u;
            // 0x22f948: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F94Cu; }
        if (ctx->pc != 0x22F94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F94Cu; }
        if (ctx->pc != 0x22F94Cu) { return; }
    }
    ctx->pc = 0x22F94Cu;
label_22f94c:
    // 0x22f94c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22f94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f950: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22f954: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22f954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f958: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22f95c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22f95cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f960: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22f960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f964: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22f964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f968: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22f968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f96c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F96Cu;
            // 0x22f970: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F974u;
}
