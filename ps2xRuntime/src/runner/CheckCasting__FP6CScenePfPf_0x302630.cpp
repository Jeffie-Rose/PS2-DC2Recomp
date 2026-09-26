#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckCasting__FP6CScenePfPf
// Address: 0x302630 - 0x302a0c
void CheckCasting__FP6CScenePfPf_0x302630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckCasting__FP6CScenePfPf_0x302630");
#endif

    switch (ctx->pc) {
        case 0x302678u: goto label_302678;
        case 0x3026f4u: goto label_3026f4;
        case 0x302724u: goto label_302724;
        case 0x3027b4u: goto label_3027b4;
        case 0x30280cu: goto label_30280c;
        case 0x302820u: goto label_302820;
        case 0x302864u: goto label_302864;
        case 0x302898u: goto label_302898;
        case 0x3028c0u: goto label_3028c0;
        case 0x3028dcu: goto label_3028dc;
        case 0x3028fcu: goto label_3028fc;
        case 0x30291cu: goto label_30291c;
        case 0x30292cu: goto label_30292c;
        case 0x302954u: goto label_302954;
        case 0x30297cu: goto label_30297c;
        case 0x3029dcu: goto label_3029dc;
        default: break;
    }

    ctx->pc = 0x302630u;

    // 0x302630: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x302630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x302634: 0x3421bc60  ori         $at, $at, 0xBC60
    ctx->pc = 0x302634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48224);
    // 0x302638: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x302638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30263c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x302640: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x302640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x302644: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x302644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x302648: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x302648u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30264c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x302650: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x302650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302654: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x302654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x302658: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x302658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30265c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30265cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x302660: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x302660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x302664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x302668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30266c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x30266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x302670: 0xc04bd2c  jal         func_12F4B0
    ctx->pc = 0x302670u;
    SET_GPR_U32(ctx, 31, 0x302678u);
    ctx->pc = 0x302674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302670u;
            // 0x302674: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302678u; }
        if (ctx->pc != 0x302678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302678u; }
        if (ctx->pc != 0x302678u) { return; }
    }
    ctx->pc = 0x302678u;
label_302678:
    // 0x302678: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x302678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x30267c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30267cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302680: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x302680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x302684: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x302684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x302688: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x302688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30268c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302690: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x302690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302694: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x302694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x302698: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x302698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30269c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x30269cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3026a0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3026a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3026a4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x3026a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3026a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3026a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3026ac: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x3026acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x3026b0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3026b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3026b4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3026b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3026b8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3026b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3026bc: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x3026bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3026c0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x3026c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3026c4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3026c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3026c8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3026c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3026cc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3026ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3026d0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3026d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3026d4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x3026d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3026d8: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x3026d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x3026dc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3026dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3026e0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3026e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3026e4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3026e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3026e8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3026e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3026ec: 0xc0b1ed4  jal         func_2C7B50
    ctx->pc = 0x3026ECu;
    SET_GPR_U32(ctx, 31, 0x3026F4u);
    ctx->pc = 0x3026F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3026ECu;
            // 0x3026f0: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3026F4u; }
        if (ctx->pc != 0x3026F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3026F4u; }
        if (ctx->pc != 0x3026F4u) { return; }
    }
    ctx->pc = 0x3026F4u;
label_3026f4:
    // 0x3026f4: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x3026f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3026f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3026f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3026fc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3026fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x302700: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302708: 0x342140a0  ori         $at, $at, 0x40A0
    ctx->pc = 0x302708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16544);
    // 0x30270c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x30270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x302710: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x302710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302714: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x302714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x302718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30271c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x30271Cu;
    SET_GPR_U32(ctx, 31, 0x302724u);
    ctx->pc = 0x302720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30271Cu;
            // 0x302720: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302724u; }
        if (ctx->pc != 0x302724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302724u; }
        if (ctx->pc != 0x302724u) { return; }
    }
    ctx->pc = 0x302724u;
label_302724:
    // 0x302724: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302728: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x302728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30272c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x30272cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x302730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302734: 0xac2040a4  sw          $zero, 0x40A4($at)
    ctx->pc = 0x302734u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16548), GPR_U32(ctx, 0));
    // 0x302738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30273c: 0x7a6a0000  lq          $t2, 0x0($s3)
    ctx->pc = 0x30273cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x302740: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302744: 0x34214090  ori         $at, $at, 0x4090
    ctx->pc = 0x302744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16528);
    // 0x302748: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x302748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30274c: 0x3a14821  addu        $t1, $sp, $at
    ctx->pc = 0x30274cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x302750: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302754: 0x342140c0  ori         $at, $at, 0x40C0
    ctx->pc = 0x302754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16576);
    // 0x302758: 0x3a14021  addu        $t0, $sp, $at
    ctx->pc = 0x302758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30275c: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x30275cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
    // 0x302760: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302764: 0x7a890000  lq          $t1, 0x0($s4)
    ctx->pc = 0x302764u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x302768: 0x342140d0  ori         $at, $at, 0x40D0
    ctx->pc = 0x302768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16592);
    // 0x30276c: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x30276cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x302770: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302774: 0x342140cc  ori         $at, $at, 0x40CC
    ctx->pc = 0x302774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16588);
    // 0x302778: 0x3a19021  addu        $s2, $sp, $at
    ctx->pc = 0x302778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30277c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30277cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302780: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x302780u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x302784: 0x342140f0  ori         $at, $at, 0x40F0
    ctx->pc = 0x302784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16624);
    // 0x302788: 0x7a680000  lq          $t0, 0x0($s3)
    ctx->pc = 0x302788u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30278c: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x30278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x302790: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302794: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x302794u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x302798: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x302798u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x30279c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x30279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3027a0: 0xe42040c4  swc1        $f0, 0x40C4($at)
    ctx->pc = 0x3027a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16580), bits); }
    // 0x3027a4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3027a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3027a8: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x3027a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3027ac: 0xc0c0954  jal         func_302550
    ctx->pc = 0x3027ACu;
    SET_GPR_U32(ctx, 31, 0x3027B4u);
    ctx->pc = 0x3027B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3027ACu;
            // 0x3027b0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302550u;
    if (runtime->hasFunction(0x302550u)) {
        auto targetFn = runtime->lookupFunction(0x302550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3027B4u; }
        if (ctx->pc != 0x3027B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishing__FPfP6CCPolyi_0x302550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3027B4u; }
        if (ctx->pc != 0x3027B4u) { return; }
    }
    ctx->pc = 0x3027B4u;
label_3027b4:
    // 0x3027b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3027B4u;
    {
        const bool branch_taken_0x3027b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3027B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3027B4u;
            // 0x3027b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027b4) {
            ctx->pc = 0x3027C4u;
            goto label_3027c4;
        }
    }
    ctx->pc = 0x3027BCu;
    // 0x3027bc: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x3027BCu;
    {
        const bool branch_taken_0x3027bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3027C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3027BCu;
            // 0x3027c0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027bc) {
            ctx->pc = 0x3029E8u;
            goto label_3029e8;
        }
    }
    ctx->pc = 0x3027C4u;
label_3027c4:
    // 0x3027c4: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x3027c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3027c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3027c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3027cc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x3027ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3027d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3027d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3027d4: 0x342140b0  ori         $at, $at, 0x40B0
    ctx->pc = 0x3027d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16560);
    // 0x3027d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3027d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3027dc: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x3027dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x3027e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3027e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3027e4: 0x342140a0  ori         $at, $at, 0x40A0
    ctx->pc = 0x3027e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16544);
    // 0x3027e8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3027e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3027ec: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x3027ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x3027f0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3027f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3027f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3027f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3027f8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x3027f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x3027fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3027fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x302800: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x302800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302804: 0xc04bd04  jal         func_12F410
    ctx->pc = 0x302804u;
    SET_GPR_U32(ctx, 31, 0x30280Cu);
    ctx->pc = 0x302808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302804u;
            // 0x302808: 0xe42040d4  swc1        $f0, 0x40D4($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16596), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F410u;
    if (runtime->hasFunction(0x12F410u)) {
        auto targetFn = runtime->lookupFunction(0x12F410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30280Cu; }
        if (ctx->pc != 0x30280Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgNormalizeVector__FPfPff_0x12f410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30280Cu; }
        if (ctx->pc != 0x30280Cu) { return; }
    }
    ctx->pc = 0x30280Cu;
label_30280c:
    // 0x30280c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30280cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302810: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x302810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302814: 0x342140b0  ori         $at, $at, 0x40B0
    ctx->pc = 0x302814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16560);
    // 0x302818: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x302818u;
    SET_GPR_U32(ctx, 31, 0x302820u);
    ctx->pc = 0x30281Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302818u;
            // 0x30281c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302820u; }
        if (ctx->pc != 0x302820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302820u; }
        if (ctx->pc != 0x302820u) { return; }
    }
    ctx->pc = 0x302820u;
label_302820:
    // 0x302820: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302828: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x302828u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30282c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30282cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302830: 0xc4204094  lwc1        $f0, 0x4094($at)
    ctx->pc = 0x302830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302834: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302838: 0x342140b0  ori         $at, $at, 0x40B0
    ctx->pc = 0x302838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16560);
    // 0x30283c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x30283cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x302840: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302844: 0x342140e0  ori         $at, $at, 0x40E0
    ctx->pc = 0x302844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16608);
    // 0x302848: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x302848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30284c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302850: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x302850u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x302854: 0xe42040b4  swc1        $f0, 0x40B4($at)
    ctx->pc = 0x302854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16564), bits); }
    // 0x302858: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x302858u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30285c: 0xc0c0954  jal         func_302550
    ctx->pc = 0x30285Cu;
    SET_GPR_U32(ctx, 31, 0x302864u);
    ctx->pc = 0x302860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30285Cu;
            // 0x302860: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302550u;
    if (runtime->hasFunction(0x302550u)) {
        auto targetFn = runtime->lookupFunction(0x302550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302864u; }
        if (ctx->pc != 0x302864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishing__FPfP6CCPolyi_0x302550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302864u; }
        if (ctx->pc != 0x302864u) { return; }
    }
    ctx->pc = 0x302864u;
label_302864:
    // 0x302864: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302864u;
    {
        const bool branch_taken_0x302864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302864u;
            // 0x302868: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302864) {
            ctx->pc = 0x302874u;
            goto label_302874;
        }
    }
    ctx->pc = 0x30286Cu;
    // 0x30286c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x30286Cu;
    {
        const bool branch_taken_0x30286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30286Cu;
            // 0x302870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30286c) {
            ctx->pc = 0x3029E4u;
            goto label_3029e4;
        }
    }
    ctx->pc = 0x302874u;
label_302874:
    // 0x302874: 0x34214100  ori         $at, $at, 0x4100
    ctx->pc = 0x302874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16640);
    // 0x302878: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x302878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30287c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302880: 0x342140f0  ori         $at, $at, 0x40F0
    ctx->pc = 0x302880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16624);
    // 0x302884: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x302884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x302888: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x30288c: 0x342140e0  ori         $at, $at, 0x40E0
    ctx->pc = 0x30288cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16608);
    // 0x302890: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x302890u;
    SET_GPR_U32(ctx, 31, 0x302898u);
    ctx->pc = 0x302894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302890u;
            // 0x302894: 0x3a13021  addu        $a2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302898u; }
        if (ctx->pc != 0x302898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302898u; }
        if (ctx->pc != 0x302898u) { return; }
    }
    ctx->pc = 0x302898u;
label_302898:
    // 0x302898: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x30289c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30289cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3028a0: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x3028a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x3028a4: 0xac204104  sw          $zero, 0x4104($at)
    ctx->pc = 0x3028a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16644), GPR_U32(ctx, 0));
    // 0x3028a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3028a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3028ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3028acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3028b0: 0x34214100  ori         $at, $at, 0x4100
    ctx->pc = 0x3028b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16640);
    // 0x3028b4: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x3028b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x3028b8: 0xc04bd04  jal         func_12F410
    ctx->pc = 0x3028B8u;
    SET_GPR_U32(ctx, 31, 0x3028C0u);
    ctx->pc = 0x3028BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3028B8u;
            // 0x3028bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F410u;
    if (runtime->hasFunction(0x12F410u)) {
        auto targetFn = runtime->lookupFunction(0x12F410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028C0u; }
        if (ctx->pc != 0x3028C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgNormalizeVector__FPfPff_0x12f410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028C0u; }
        if (ctx->pc != 0x3028C0u) { return; }
    }
    ctx->pc = 0x3028C0u;
label_3028c0:
    // 0x3028c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3028c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3028c4: 0x342140e0  ori         $at, $at, 0x40E0
    ctx->pc = 0x3028c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16608);
    // 0x3028c8: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x3028c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x3028cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3028ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3028d0: 0x342140f0  ori         $at, $at, 0x40F0
    ctx->pc = 0x3028d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16624);
    // 0x3028d4: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x3028D4u;
    SET_GPR_U32(ctx, 31, 0x3028DCu);
    ctx->pc = 0x3028D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3028D4u;
            // 0x3028d8: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028DCu; }
        if (ctx->pc != 0x3028DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028DCu; }
        if (ctx->pc != 0x3028DCu) { return; }
    }
    ctx->pc = 0x3028DCu;
label_3028dc:
    // 0x3028dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3028dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3028e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3028e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3028e4: 0x0  nop
    ctx->pc = 0x3028e4u;
    // NOP
    // 0x3028e8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3028e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3028ec: 0x0  nop
    ctx->pc = 0x3028ecu;
    // NOP
    // 0x3028f0: 0x0  nop
    ctx->pc = 0x3028f0u;
    // NOP
    // 0x3028f4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3028F4u;
    SET_GPR_U32(ctx, 31, 0x3028FCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028FCu; }
        if (ctx->pc != 0x3028FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3028FCu; }
        if (ctx->pc != 0x3028FCu) { return; }
    }
    ctx->pc = 0x3028FCu;
label_3028fc:
    // 0x3028fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3028fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302900: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x302900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302904: 0x342140e0  ori         $at, $at, 0x40E0
    ctx->pc = 0x302904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16608);
    // 0x302908: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x302908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30290c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30290cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302910: 0x34214100  ori         $at, $at, 0x4100
    ctx->pc = 0x302910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16640);
    // 0x302914: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x302914u;
    SET_GPR_U32(ctx, 31, 0x30291Cu);
    ctx->pc = 0x302918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302914u;
            // 0x302918: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30291Cu; }
        if (ctx->pc != 0x30291Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30291Cu; }
        if (ctx->pc != 0x30291Cu) { return; }
    }
    ctx->pc = 0x30291Cu;
label_30291c:
    // 0x30291c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x30291cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x302920: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x302920u;
    {
        const bool branch_taken_0x302920 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x302924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302920u;
            // 0x302924: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302920) {
            ctx->pc = 0x30298Cu;
            goto label_30298c;
        }
    }
    ctx->pc = 0x302928u;
    // 0x302928: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_30292c:
    // 0x30292c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30292cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302930: 0x342140e0  ori         $at, $at, 0x40E0
    ctx->pc = 0x302930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16608);
    // 0x302934: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x302934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302938: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x302938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30293c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30293cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302940: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302944: 0x34214110  ori         $at, $at, 0x4110
    ctx->pc = 0x302944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16656);
    // 0x302948: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x302948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30294c: 0xc0c0954  jal         func_302550
    ctx->pc = 0x30294Cu;
    SET_GPR_U32(ctx, 31, 0x302954u);
    ctx->pc = 0x302950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30294Cu;
            // 0x302950: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302550u;
    if (runtime->hasFunction(0x302550u)) {
        auto targetFn = runtime->lookupFunction(0x302550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302954u; }
        if (ctx->pc != 0x302954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishing__FPfP6CCPolyi_0x302550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302954u; }
        if (ctx->pc != 0x302954u) { return; }
    }
    ctx->pc = 0x302954u;
label_302954:
    // 0x302954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302954u;
    {
        const bool branch_taken_0x302954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302954u;
            // 0x302958: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302954) {
            ctx->pc = 0x302964u;
            goto label_302964;
        }
    }
    ctx->pc = 0x30295Cu;
    // 0x30295c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x30295Cu;
    {
        const bool branch_taken_0x30295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30295Cu;
            // 0x302960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30295c) {
            ctx->pc = 0x3029E4u;
            goto label_3029e4;
        }
    }
    ctx->pc = 0x302964u;
label_302964:
    // 0x302964: 0x342140e0  ori         $at, $at, 0x40E0
    ctx->pc = 0x302964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16608);
    // 0x302968: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x302968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x30296c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30296cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302970: 0x34214100  ori         $at, $at, 0x4100
    ctx->pc = 0x302970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16640);
    // 0x302974: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x302974u;
    SET_GPR_U32(ctx, 31, 0x30297Cu);
    ctx->pc = 0x302978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302974u;
            // 0x302978: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30297Cu; }
        if (ctx->pc != 0x30297Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30297Cu; }
        if (ctx->pc != 0x30297Cu) { return; }
    }
    ctx->pc = 0x30297Cu;
label_30297c:
    // 0x30297c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30297cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x302980: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x302980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x302984: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x302984u;
    {
        const bool branch_taken_0x302984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302984u;
            // 0x302988: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302984) {
            ctx->pc = 0x30292Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30292c;
        }
    }
    ctx->pc = 0x30298Cu;
label_30298c:
    // 0x30298c: 0x0  nop
    ctx->pc = 0x30298cu;
    // NOP
    // 0x302990: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x302990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x302994: 0x342140c0  ori         $at, $at, 0x40C0
    ctx->pc = 0x302994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16576);
    // 0x302998: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x302998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30299c: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x30299cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x3029a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3029a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3029a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3029a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3029a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3029a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3029ac: 0x342140d0  ori         $at, $at, 0x40D0
    ctx->pc = 0x3029acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16592);
    // 0x3029b0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3029b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3029b4: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x3029b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x3029b8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3029b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3029bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3029bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3029c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3029c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3029c4: 0x34214320  ori         $at, $at, 0x4320
    ctx->pc = 0x3029c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17184);
    // 0x3029c8: 0x3a14821  addu        $t1, $sp, $at
    ctx->pc = 0x3029c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x3029cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3029ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3029d0: 0x34214120  ori         $at, $at, 0x4120
    ctx->pc = 0x3029d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16672);
    // 0x3029d4: 0xc0538ec  jal         func_14E3B0
    ctx->pc = 0x3029D4u;
    SET_GPR_U32(ctx, 31, 0x3029DCu);
    ctx->pc = 0x3029D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3029D4u;
            // 0x3029d8: 0x3a15021  addu        $t2, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3029DCu; }
        if (ctx->pc != 0x3029DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3029DCu; }
        if (ctx->pc != 0x3029DCu) { return; }
    }
    ctx->pc = 0x3029DCu;
label_3029dc:
    // 0x3029dc: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x3029dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3029e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3029e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3029e4:
    // 0x3029e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3029e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3029e8:
    // 0x3029e8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3029e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3029ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3029ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3029f0: 0x342143a0  ori         $at, $at, 0x43A0
    ctx->pc = 0x3029f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17312);
    // 0x3029f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3029f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3029f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3029f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3029fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3029fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302a00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x302a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302a04: 0x3e00008  jr          $ra
    ctx->pc = 0x302A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302A04u;
            // 0x302a08: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302A0Cu;
}
