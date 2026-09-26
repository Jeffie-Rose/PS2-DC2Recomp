#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcTex__9CShopMenuFv
// Address: 0x293830 - 0x293f08
void CalcTex__9CShopMenuFv_0x293830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcTex__9CShopMenuFv_0x293830");
#endif

    switch (ctx->pc) {
        case 0x293884u: goto label_293884;
        case 0x293900u: goto label_293900;
        case 0x29391cu: goto label_29391c;
        case 0x293964u: goto label_293964;
        case 0x29399cu: goto label_29399c;
        case 0x2939c0u: goto label_2939c0;
        case 0x2939d4u: goto label_2939d4;
        case 0x2939dcu: goto label_2939dc;
        case 0x2939f0u: goto label_2939f0;
        case 0x293a04u: goto label_293a04;
        case 0x293a18u: goto label_293a18;
        case 0x293a20u: goto label_293a20;
        case 0x293a28u: goto label_293a28;
        case 0x293a60u: goto label_293a60;
        case 0x293accu: goto label_293acc;
        case 0x293afcu: goto label_293afc;
        case 0x293b34u: goto label_293b34;
        case 0x293b84u: goto label_293b84;
        case 0x293bb0u: goto label_293bb0;
        case 0x293bb8u: goto label_293bb8;
        case 0x293bf0u: goto label_293bf0;
        case 0x293cacu: goto label_293cac;
        case 0x293d3cu: goto label_293d3c;
        case 0x293d58u: goto label_293d58;
        case 0x293d74u: goto label_293d74;
        case 0x293d88u: goto label_293d88;
        case 0x293e30u: goto label_293e30;
        case 0x293e50u: goto label_293e50;
        case 0x293e80u: goto label_293e80;
        case 0x293eb0u: goto label_293eb0;
        default: break;
    }

    ctx->pc = 0x293830u;

    // 0x293830: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x293830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x293834: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x293834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x293838: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x293838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29383c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x293840: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x293840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x293844: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x293844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x293848: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x293848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29384c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x293850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x293854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293858: 0x8c840118  lw          $a0, 0x118($a0)
    ctx->pc = 0x293858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x29385c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29385Cu;
    {
        const bool branch_taken_0x29385c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29385Cu;
            // 0x293860: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29385c) {
            ctx->pc = 0x2938B4u;
            goto label_2938b4;
        }
    }
    ctx->pc = 0x293864u;
    // 0x293864: 0x8c22cb34  lw          $v0, -0x34CC($at)
    ctx->pc = 0x293864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953780)));
    // 0x293868: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x293868u;
    {
        const bool branch_taken_0x293868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293868u;
            // 0x29386c: 0x27b0009c  addiu       $s0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293868) {
            ctx->pc = 0x2938B4u;
            goto label_2938b4;
        }
    }
    ctx->pc = 0x293870u;
    // 0x293870: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293874: 0x24a5dc50  addiu       $a1, $a1, -0x23B0
    ctx->pc = 0x293874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958160));
    // 0x293878: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x293878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x29387c: 0xc08974c  jal         func_225D30
    ctx->pc = 0x29387Cu;
    SET_GPR_U32(ctx, 31, 0x293884u);
    ctx->pc = 0x293880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29387Cu;
            // 0x293880: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293884u; }
        if (ctx->pc != 0x293884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293884u; }
        if (ctx->pc != 0x293884u) { return; }
    }
    ctx->pc = 0x293884u;
label_293884:
    // 0x293884: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x293884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x293888: 0x868401e0  lh          $a0, 0x1E0($s4)
    ctx->pc = 0x293888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 480)));
    // 0x29388c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x29388cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x293890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293894: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x293894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293898: 0x868601e2  lh          $a2, 0x1E2($s4)
    ctx->pc = 0x293898u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 482)));
    // 0x29389c: 0x8c27ca44  lw          $a3, -0x35BC($at)
    ctx->pc = 0x29389cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x2938a0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2938a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2938a4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2938a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2938a8: 0xace31b94  sw          $v1, 0x1B94($a3)
    ctx->pc = 0x2938a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7060), GPR_U32(ctx, 3));
    // 0x2938ac: 0xace51b98  sw          $a1, 0x1B98($a3)
    ctx->pc = 0x2938acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7064), GPR_U32(ctx, 5));
    // 0x2938b0: 0xace21c34  sw          $v0, 0x1C34($a3)
    ctx->pc = 0x2938b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 2));
label_2938b4:
    // 0x2938b4: 0x8e820114  lw          $v0, 0x114($s4)
    ctx->pc = 0x2938b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2938b8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2938B8u;
    {
        const bool branch_taken_0x2938b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2938b8) {
            ctx->pc = 0x293994u;
            goto label_293994;
        }
    }
    ctx->pc = 0x2938C0u;
    // 0x2938c0: 0x8e830138  lw          $v1, 0x138($s4)
    ctx->pc = 0x2938c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
    // 0x2938c4: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2938C4u;
    {
        const bool branch_taken_0x2938c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2938c4) {
            ctx->pc = 0x293994u;
            goto label_293994;
        }
    }
    ctx->pc = 0x2938CCu;
    // 0x2938cc: 0xc68101c0  lwc1        $f1, 0x1C0($s4)
    ctx->pc = 0x2938ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2938d0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2938d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2938d4: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x2938d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
    // 0x2938d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2938d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2938dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2938dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2938e0: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2938e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2938e4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2938e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2938e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2938e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2938ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2938ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2938f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2938f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2938f4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2938f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2938f8: 0xc094514  jal         func_251450
    ctx->pc = 0x2938F8u;
    SET_GPR_U32(ctx, 31, 0x293900u);
    ctx->pc = 0x2938FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2938F8u;
            // 0x2938fc: 0x46001301  sub.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293900u; }
        if (ctx->pc != 0x293900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293900u; }
        if (ctx->pc != 0x293900u) { return; }
    }
    ctx->pc = 0x293900u;
label_293900:
    // 0x293900: 0x8e840138  lw          $a0, 0x138($s4)
    ctx->pc = 0x293900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
    // 0x293904: 0x27b000a4  addiu       $s0, $sp, 0xA4
    ctx->pc = 0x293904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x293908: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29390c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x29390cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x293910: 0x24a5dc58  addiu       $a1, $a1, -0x23A8
    ctx->pc = 0x293910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958168));
    // 0x293914: 0xc08976c  jal         func_225DB0
    ctx->pc = 0x293914u;
    SET_GPR_U32(ctx, 31, 0x29391Cu);
    ctx->pc = 0x293918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293914u;
            // 0x293918: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (runtime->hasFunction(0x225DB0u)) {
        auto targetFn = runtime->lookupFunction(0x225DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29391Cu; }
        if (ctx->pc != 0x29391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRfRf_0x225db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29391Cu; }
        if (ctx->pc != 0x29391Cu) { return; }
    }
    ctx->pc = 0x29391Cu;
label_29391c:
    // 0x29391c: 0x8e830138  lw          $v1, 0x138($s4)
    ctx->pc = 0x29391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
    // 0x293920: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x293920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x293924: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x293924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29392c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29392cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x293930: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x293930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x293934: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x293934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293938: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x293938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29393c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x29393cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x293940: 0xc68201c0  lwc1        $f2, 0x1C0($s4)
    ctx->pc = 0x293940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293944: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x293944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x293948: 0xc6810128  lwc1        $f1, 0x128($s4)
    ctx->pc = 0x293948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29394c: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x29394cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x293950: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x293950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x293954: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x293954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x293958: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x293958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29395c: 0xc094514  jal         func_251450
    ctx->pc = 0x29395Cu;
    SET_GPR_U32(ctx, 31, 0x293964u);
    ctx->pc = 0x293960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29395Cu;
            // 0x293960: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293964u; }
        if (ctx->pc != 0x293964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293964u; }
        if (ctx->pc != 0x293964u) { return; }
    }
    ctx->pc = 0x293964u;
label_293964:
    // 0x293964: 0x8e83012c  lw          $v1, 0x12C($s4)
    ctx->pc = 0x293964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x293968: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x293968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x29396c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x29396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293970: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x293970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x293974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293978: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x293978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x29397c: 0x8e830130  lw          $v1, 0x130($s4)
    ctx->pc = 0x29397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x293980: 0x8e820134  lw          $v0, 0x134($s4)
    ctx->pc = 0x293980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
    // 0x293984: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x293984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293988: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x293988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29398c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29398cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293990: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x293990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_293994:
    // 0x293994: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x293994u;
    SET_GPR_U32(ctx, 31, 0x29399Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29399Cu; }
        if (ctx->pc != 0x29399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29399Cu; }
        if (ctx->pc != 0x29399Cu) { return; }
    }
    ctx->pc = 0x29399Cu;
label_29399c:
    // 0x29399c: 0x8e84011c  lw          $a0, 0x11C($s4)
    ctx->pc = 0x29399cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2939a0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2939A0u;
    {
        const bool branch_taken_0x2939a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2939A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2939A0u;
            // 0x2939a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939a0) {
            ctx->pc = 0x2939C0u;
            goto label_2939c0;
        }
    }
    ctx->pc = 0x2939A8u;
    // 0x2939a8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2939a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2939ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2939acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2939b0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2939b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2939b4: 0x8c264d9c  lw          $a2, 0x4D9C($at)
    ctx->pc = 0x2939b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
    // 0x2939b8: 0xc089728  jal         func_225CA0
    ctx->pc = 0x2939B8u;
    SET_GPR_U32(ctx, 31, 0x2939C0u);
    ctx->pc = 0x2939BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2939B8u;
            // 0x2939bc: 0x24a5dc68  addiu       $a1, $a1, -0x2398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2939C0u; }
        if (ctx->pc != 0x2939C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2939C0u; }
        if (ctx->pc != 0x2939C0u) { return; }
    }
    ctx->pc = 0x2939C0u;
label_2939c0:
    // 0x2939c0: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2939c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2939c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2939C4u;
    {
        const bool branch_taken_0x2939c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2939C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2939C4u;
            // 0x2939c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939c4) {
            ctx->pc = 0x2939F0u;
            goto label_2939f0;
        }
    }
    ctx->pc = 0x2939CCu;
    // 0x2939cc: 0xc067158  jal         func_19C560
    ctx->pc = 0x2939CCu;
    SET_GPR_U32(ctx, 31, 0x2939D4u);
    ctx->pc = 0x19C560u;
    if (runtime->hasFunction(0x19C560u)) {
        auto targetFn = runtime->lookupFunction(0x19C560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2939D4u; }
        if (ctx->pc != 0x2939D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboAbs__16CUserDataManagerFv_0x19c560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2939D4u; }
        if (ctx->pc != 0x2939D4u) { return; }
    }
    ctx->pc = 0x2939D4u;
label_2939d4:
    // 0x2939d4: 0xc0945c8  jal         func_251720
    ctx->pc = 0x2939D4u;
    SET_GPR_U32(ctx, 31, 0x2939DCu);
    ctx->pc = 0x2939D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2939D4u;
            // 0x2939d8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2939DCu; }
        if (ctx->pc != 0x2939DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2939DCu; }
        if (ctx->pc != 0x2939DCu) { return; }
    }
    ctx->pc = 0x2939DCu;
label_2939dc:
    // 0x2939dc: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x2939dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2939e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2939e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2939e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2939e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2939e8: 0xc089728  jal         func_225CA0
    ctx->pc = 0x2939E8u;
    SET_GPR_U32(ctx, 31, 0x2939F0u);
    ctx->pc = 0x2939ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2939E8u;
            // 0x2939ec: 0x24a5dc70  addiu       $a1, $a1, -0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2939F0u; }
        if (ctx->pc != 0x2939F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2939F0u; }
        if (ctx->pc != 0x2939F0u) { return; }
    }
    ctx->pc = 0x2939F0u;
label_2939f0:
    // 0x2939f0: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x2939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x2939f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2939F4u;
    {
        const bool branch_taken_0x2939f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2939f4) {
            ctx->pc = 0x293A18u;
            goto label_293a18;
        }
    }
    ctx->pc = 0x2939FCu;
    // 0x2939fc: 0xc0a468c  jal         func_291A30
    ctx->pc = 0x2939FCu;
    SET_GPR_U32(ctx, 31, 0x293A04u);
    ctx->pc = 0x293A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2939FCu;
            // 0x293a00: 0x8f849840  lw          $a0, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291A30u;
    if (runtime->hasFunction(0x291A30u)) {
        auto targetFn = runtime->lookupFunction(0x291A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A04u; }
        if (ctx->pc != 0x293A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMoney__5CShopFv_0x291a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A04u; }
        if (ctx->pc != 0x293A04u) { return; }
    }
    ctx->pc = 0x293A04u;
label_293a04:
    // 0x293a04: 0x8e840124  lw          $a0, 0x124($s4)
    ctx->pc = 0x293a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x293a08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293a0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x293a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a10: 0xc089728  jal         func_225CA0
    ctx->pc = 0x293A10u;
    SET_GPR_U32(ctx, 31, 0x293A18u);
    ctx->pc = 0x293A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293A10u;
            // 0x293a14: 0x24a5dc68  addiu       $a1, $a1, -0x2398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A18u; }
        if (ctx->pc != 0x293A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A18u; }
        if (ctx->pc != 0x293A18u) { return; }
    }
    ctx->pc = 0x293A18u;
label_293a18:
    // 0x293a18: 0xc08b050  jal         func_22C140
    ctx->pc = 0x293A18u;
    SET_GPR_U32(ctx, 31, 0x293A20u);
    ctx->pc = 0x293A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293A18u;
            // 0x293a1c: 0x8e8401b8  lw          $a0, 0x1B8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C140u;
    if (runtime->hasFunction(0x22C140u)) {
        auto targetFn = runtime->lookupFunction(0x22C140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A20u; }
        if (ctx->pc != 0x293A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemBrdPosStep__Fi_0x22c140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A20u; }
        if (ctx->pc != 0x293A20u) { return; }
    }
    ctx->pc = 0x293A20u;
label_293a20:
    // 0x293a20: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x293A20u;
    SET_GPR_U32(ctx, 31, 0x293A28u);
    ctx->pc = 0x293A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293A20u;
            // 0x293a24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A28u; }
        if (ctx->pc != 0x293A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__9CShopMenuFv_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A28u; }
        if (ctx->pc != 0x293A28u) { return; }
    }
    ctx->pc = 0x293A28u;
label_293a28:
    // 0x293a28: 0x8f839364  lw          $v1, -0x6C9C($gp)
    ctx->pc = 0x293a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939492)));
    // 0x293a2c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x293A2Cu;
    {
        const bool branch_taken_0x293a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293A2Cu;
            // 0x293a30: 0xaf829360  sw          $v0, -0x6CA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a2c) {
            ctx->pc = 0x293AA8u;
            goto label_293aa8;
        }
    }
    ctx->pc = 0x293A34u;
    // 0x293a34: 0xdf849880  ld          $a0, -0x6780($gp)
    ctx->pc = 0x293a34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294940800)));
    // 0x293a38: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x293a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x293a3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293a40: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x293a40u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x293a44: 0x86840014  lh          $a0, 0x14($s4)
    ctx->pc = 0x293a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x293a48: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x293A48u;
    {
        const bool branch_taken_0x293a48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x293A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293A48u;
            // 0x293a4c: 0x24030280  addiu       $v1, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a48) {
            ctx->pc = 0x293A68u;
            goto label_293a68;
        }
    }
    ctx->pc = 0x293A50u;
    // 0x293a50: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x293a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x293a54: 0x8e8601b4  lw          $a2, 0x1B4($s4)
    ctx->pc = 0x293a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x293a58: 0xc08b0e0  jal         func_22C380
    ctx->pc = 0x293A58u;
    SET_GPR_U32(ctx, 31, 0x293A60u);
    ctx->pc = 0x293A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293A58u;
            // 0x293a5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A60u; }
        if (ctx->pc != 0x293A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293A60u; }
        if (ctx->pc != 0x293A60u) { return; }
    }
    ctx->pc = 0x293A60u;
label_293a60:
    // 0x293a60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x293A60u;
    {
        const bool branch_taken_0x293a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293A60u;
            // 0x293a64: 0xc7a000a8  lwc1        $f0, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a60) {
            ctx->pc = 0x293A7Cu;
            goto label_293a7c;
        }
    }
    ctx->pc = 0x293A68u;
label_293a68:
    // 0x293a68: 0xaf809360  sw          $zero, -0x6CA0($gp)
    ctx->pc = 0x293a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939488), GPR_U32(ctx, 0));
    // 0x293a6c: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x293a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x293a70: 0x240301b8  addiu       $v1, $zero, 0x1B8
    ctx->pc = 0x293a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x293a74: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x293a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x293a78: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x293a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293a7c:
    // 0x293a7c: 0x8f849364  lw          $a0, -0x6C9C($gp)
    ctx->pc = 0x293a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939492)));
    // 0x293a80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x293a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x293a88: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x293a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x293a8c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x293a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293a90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x293a94: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x293a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x293a98: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x293a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x293a9c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x293A9Cu;
    {
        const bool branch_taken_0x293a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x293a9c) {
            ctx->pc = 0x293AA8u;
            goto label_293aa8;
        }
    }
    ctx->pc = 0x293AA4u;
    // 0x293aa4: 0xaf809360  sw          $zero, -0x6CA0($gp)
    ctx->pc = 0x293aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939488), GPR_U32(ctx, 0));
label_293aa8:
    // 0x293aa8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x293aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x293aac: 0x8c30ca48  lw          $s0, -0x35B8($at)
    ctx->pc = 0x293aacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x293ab0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x293ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x293ab4: 0x8c31cb38  lw          $s1, -0x34C8($at)
    ctx->pc = 0x293ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
    // 0x293ab8: 0x12200098  beqz        $s1, . + 4 + (0x98 << 2)
    ctx->pc = 0x293AB8u;
    {
        const bool branch_taken_0x293ab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x293ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293AB8u;
            // 0x293abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ab8) {
            ctx->pc = 0x293D1Cu;
            goto label_293d1c;
        }
    }
    ctx->pc = 0x293AC0u;
    // 0x293ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ac4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x293AC4u;
    SET_GPR_U32(ctx, 31, 0x293ACCu);
    ctx->pc = 0x293AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293AC4u;
            // 0x293ac8: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293ACCu; }
        if (ctx->pc != 0x293ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293ACCu; }
        if (ctx->pc != 0x293ACCu) { return; }
    }
    ctx->pc = 0x293ACCu;
label_293acc:
    // 0x293acc: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x293accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x293ad0: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x293AD0u;
    {
        const bool branch_taken_0x293ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x293ad0) {
            ctx->pc = 0x293D1Cu;
            goto label_293d1c;
        }
    }
    ctx->pc = 0x293AD8u;
    // 0x293ad8: 0x86840014  lh          $a0, 0x14($s4)
    ctx->pc = 0x293ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x293adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293ae0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x293AE0u;
    {
        const bool branch_taken_0x293ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x293AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293AE0u;
            // 0x293ae4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ae0) {
            ctx->pc = 0x293AF0u;
            goto label_293af0;
        }
    }
    ctx->pc = 0x293AE8u;
    // 0x293ae8: 0x1483008c  bne         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x293AE8u;
    {
        const bool branch_taken_0x293ae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x293ae8) {
            ctx->pc = 0x293D1Cu;
            goto label_293d1c;
        }
    }
    ctx->pc = 0x293AF0u;
label_293af0:
    // 0x293af0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x293af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293af4: 0xc0a5028  jal         func_2940A0
    ctx->pc = 0x293AF4u;
    SET_GPR_U32(ctx, 31, 0x293AFCu);
    ctx->pc = 0x293AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293AF4u;
            // 0x293af8: 0x269501e4  addiu       $s5, $s4, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 484));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2940A0u;
    if (runtime->hasFunction(0x2940A0u)) {
        auto targetFn = runtime->lookupFunction(0x2940A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293AFCu; }
        if (ctx->pc != 0x293AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__9CShopMenuFv_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293AFCu; }
        if (ctx->pc != 0x293AFCu) { return; }
    }
    ctx->pc = 0x293AFCu;
label_293afc:
    // 0x293afc: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x293afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x293b00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x293b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b04: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x293b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x293b08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x293b08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b0c: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x293B0Cu;
    {
        const bool branch_taken_0x293b0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x293B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293B0Cu;
            // 0x293b10: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b0c) {
            ctx->pc = 0x293BB0u;
            goto label_293bb0;
        }
    }
    ctx->pc = 0x293B14u;
    // 0x293b14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293b18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x293b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b1c: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x293b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x293b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b24: 0x8f849840  lw          $a0, -0x67C0($gp)
    ctx->pc = 0x293b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x293b28: 0x27a700bc  addiu       $a3, $sp, 0xBC
    ctx->pc = 0x293b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x293b2c: 0xc0a4610  jal         func_291840
    ctx->pc = 0x293B2Cu;
    SET_GPR_U32(ctx, 31, 0x293B34u);
    ctx->pc = 0x293B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293B2Cu;
            // 0x293b30: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291840u;
    if (runtime->hasFunction(0x291840u)) {
        auto targetFn = runtime->lookupFunction(0x291840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293B34u; }
        if (ctx->pc != 0x293B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrice__5CShopFP13CGameDataUsedPiPi_0x291840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293B34u; }
        if (ctx->pc != 0x293B34u) { return; }
    }
    ctx->pc = 0x293B34u;
label_293b34:
    // 0x293b34: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x293b34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x293b38: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x293b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x293b3c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x293B3Cu;
    {
        const bool branch_taken_0x293b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293b3c) {
            ctx->pc = 0x293B48u;
            goto label_293b48;
        }
    }
    ctx->pc = 0x293B44u;
    // 0x293b44: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x293b44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293b48:
    // 0x293b48: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x293b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x293b4c: 0x1ca0000b  bgtz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x293B4Cu;
    {
        const bool branch_taken_0x293b4c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x293B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293B4Cu;
            // 0x293b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b4c) {
            ctx->pc = 0x293B7Cu;
            goto label_293b7c;
        }
    }
    ctx->pc = 0x293B54u;
    // 0x293b54: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x293b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x293b58: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x293b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x293b5c: 0xa20201b0  sb          $v0, 0x1B0($s0)
    ctx->pc = 0x293b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 432), (uint8_t)GPR_U32(ctx, 2));
    // 0x293b60: 0x269501e8  addiu       $s5, $s4, 0x1E8
    ctx->pc = 0x293b60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 488));
    // 0x293b64: 0xa20301b1  sb          $v1, 0x1B1($s0)
    ctx->pc = 0x293b64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 3));
    // 0x293b68: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x293b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x293b6c: 0xa20301b2  sb          $v1, 0x1B2($s0)
    ctx->pc = 0x293b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 3));
    // 0x293b70: 0x241203ea  addiu       $s2, $zero, 0x3EA
    ctx->pc = 0x293b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
    // 0x293b74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x293B74u;
    {
        const bool branch_taken_0x293b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293B74u;
            // 0x293b78: 0xa20201b3  sb          $v0, 0x1B3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 435), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b74) {
            ctx->pc = 0x293BA4u;
            goto label_293ba4;
        }
    }
    ctx->pc = 0x293B7Cu;
label_293b7c:
    // 0x293b7c: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x293B7Cu;
    SET_GPR_U32(ctx, 31, 0x293B84u);
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293B84u; }
        if (ctx->pc != 0x293B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293B84u; }
        if (ctx->pc != 0x293B84u) { return; }
    }
    ctx->pc = 0x293B84u;
label_293b84:
    // 0x293b84: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x293b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x293b88: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x293b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x293b8c: 0xa20201b0  sb          $v0, 0x1B0($s0)
    ctx->pc = 0x293b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 432), (uint8_t)GPR_U32(ctx, 2));
    // 0x293b90: 0x241203e8  addiu       $s2, $zero, 0x3E8
    ctx->pc = 0x293b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x293b94: 0xa20301b1  sb          $v1, 0x1B1($s0)
    ctx->pc = 0x293b94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 3));
    // 0x293b98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x293b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x293b9c: 0xa20301b2  sb          $v1, 0x1B2($s0)
    ctx->pc = 0x293b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 3));
    // 0x293ba0: 0xa20201b3  sb          $v0, 0x1B3($s0)
    ctx->pc = 0x293ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 435), (uint8_t)GPR_U32(ctx, 2));
label_293ba4:
    // 0x293ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ba8: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x293BA8u;
    SET_GPR_U32(ctx, 31, 0x293BB0u);
    ctx->pc = 0x293BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293BA8u;
            // 0x293bac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293BB0u; }
        if (ctx->pc != 0x293BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293BB0u; }
        if (ctx->pc != 0x293BB0u) { return; }
    }
    ctx->pc = 0x293BB0u;
label_293bb0:
    // 0x293bb0: 0xc087898  jal         func_21E260
    ctx->pc = 0x293BB0u;
    SET_GPR_U32(ctx, 31, 0x293BB8u);
    ctx->pc = 0x293BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293BB0u;
            // 0x293bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293BB8u; }
        if (ctx->pc != 0x293BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293BB8u; }
        if (ctx->pc != 0x293BB8u) { return; }
    }
    ctx->pc = 0x293BB8u;
label_293bb8:
    // 0x293bb8: 0x8e8601b4  lw          $a2, 0x1B4($s4)
    ctx->pc = 0x293bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x293bbc: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x293bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x293bc0: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x293bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x293bc4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x293bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x293bc8: 0x8e8201b8  lw          $v0, 0x1B8($s4)
    ctx->pc = 0x293bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x293bcc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x293bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x293bd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x293bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293bd4: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x293bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x293bd8: 0x647c2  srl         $t0, $a2, 31
    ctx->pc = 0x293bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x293bdc: 0x0  nop
    ctx->pc = 0x293bdcu;
    // NOP
    // 0x293be0: 0x1810  mfhi        $v1
    ctx->pc = 0x293be0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x293be4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x293be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x293be8: 0xc08b09c  jal         func_22C270
    ctx->pc = 0x293BE8u;
    SET_GPR_U32(ctx, 31, 0x293BF0u);
    ctx->pc = 0x293BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293BE8u;
            // 0x293bec: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C270u;
    if (runtime->hasFunction(0x22C270u)) {
        auto targetFn = runtime->lookupFunction(0x22C270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293BF0u; }
        if (ctx->pc != 0x293BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemBrdKoma__18CMenuPosDataManageFPiii_0x22c270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293BF0u; }
        if (ctx->pc != 0x293BF0u) { return; }
    }
    ctx->pc = 0x293BF0u;
label_293bf0:
    // 0x293bf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293bf4: 0x16c3001a  bne         $s6, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x293BF4u;
    {
        const bool branch_taken_0x293bf4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x293bf4) {
            ctx->pc = 0x293C60u;
            goto label_293c60;
        }
    }
    ctx->pc = 0x293BFCu;
    // 0x293bfc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x293bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293c00: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x293c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x293c04: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x293c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x293c08: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x293c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x293c0c: 0x86a50000  lh          $a1, 0x0($s5)
    ctx->pc = 0x293c0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x293c10: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x293c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293c14: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x293c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x293c18: 0x24c3000a  addiu       $v1, $a2, 0xA
    ctx->pc = 0x293c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x293c1c: 0x2484ffe2  addiu       $a0, $a0, -0x1E
    ctx->pc = 0x293c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x293c20: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x293c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293c24: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x293C24u;
    {
        const bool branch_taken_0x293c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293C24u;
            // 0x293c28: 0x24a4006d  addiu       $a0, $a1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c24) {
            ctx->pc = 0x293C30u;
            goto label_293c30;
        }
    }
    ctx->pc = 0x293C2Cu;
    // 0x293c2c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x293c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_293c30:
    // 0x293c30: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x293c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x293c34: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x293c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293c38: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x293c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x293c3c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x293c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x293c40: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x293c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293c44: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x293c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293c48: 0x24a6ffe6  addiu       $a2, $a1, -0x1A
    ctx->pc = 0x293c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967270));
    // 0x293c4c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x293c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x293c50: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x293c50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x293c54: 0xae0401a8  sw          $a0, 0x1A8($s0)
    ctx->pc = 0x293c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 4));
    // 0x293c58: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x293C58u;
    {
        const bool branch_taken_0x293c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293C58u;
            // 0x293c5c: 0xae0501ac  sw          $a1, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c58) {
            ctx->pc = 0x293D00u;
            goto label_293d00;
        }
    }
    ctx->pc = 0x293C60u;
label_293c60:
    // 0x293c60: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x293c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293c64: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x293c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x293c68: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x293c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x293c6c: 0x86a50000  lh          $a1, 0x0($s5)
    ctx->pc = 0x293c6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x293c70: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x293C70u;
    {
        const bool branch_taken_0x293c70 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x293C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293C70u;
            // 0x293c74: 0x51843  sra         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c70) {
            ctx->pc = 0x293C80u;
            goto label_293c80;
        }
    }
    ctx->pc = 0x293C78u;
    // 0x293c78: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x293c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x293c7c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x293c7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_293c80:
    // 0x293c80: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x293c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293c84: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x293c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x293c88: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x293c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x293c8c: 0x2486ffd8  addiu       $a2, $a0, -0x28
    ctx->pc = 0x293c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967256));
    // 0x293c90: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x293c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x293c94: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x293c94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x293c98: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x293C98u;
    {
        const bool branch_taken_0x293c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293C98u;
            // 0x293c9c: 0xc52023  subu        $a0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c98) {
            ctx->pc = 0x293CCCu;
            goto label_293ccc;
        }
    }
    ctx->pc = 0x293CA0u;
    // 0x293ca0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x293ca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293ca4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x293CA4u;
    {
        const bool branch_taken_0x293ca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x293ca4) {
            ctx->pc = 0x293CCCu;
            goto label_293ccc;
        }
    }
    ctx->pc = 0x293CACu;
label_293cac:
    // 0x293cac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x293cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x293cb0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x293cb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293cb4: 0x0  nop
    ctx->pc = 0x293cb4u;
    // NOP
    // 0x293cb8: 0x0  nop
    ctx->pc = 0x293cb8u;
    // NOP
    // 0x293cbc: 0x0  nop
    ctx->pc = 0x293cbcu;
    // NOP
    // 0x293cc0: 0x0  nop
    ctx->pc = 0x293cc0u;
    // NOP
    // 0x293cc4: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x293CC4u;
    {
        const bool branch_taken_0x293cc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x293cc4) {
            ctx->pc = 0x293CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293cac;
        }
    }
    ctx->pc = 0x293CCCu;
label_293ccc:
    // 0x293ccc: 0x0  nop
    ctx->pc = 0x293cccu;
    // NOP
    // 0x293cd0: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x293cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x293cd4: 0x2a640003  slti        $a0, $s3, 0x3
    ctx->pc = 0x293cd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x293cd8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293CD8u;
    {
        const bool branch_taken_0x293cd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x293CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293CD8u;
            // 0x293cdc: 0x24a60032  addiu       $a2, $a1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293cd8) {
            ctx->pc = 0x293CF0u;
            goto label_293cf0;
        }
    }
    ctx->pc = 0x293CE0u;
    // 0x293ce0: 0x240403ea  addiu       $a0, $zero, 0x3EA
    ctx->pc = 0x293ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
    // 0x293ce4: 0x16440002  bne         $s2, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x293CE4u;
    {
        const bool branch_taken_0x293ce4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x293CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293CE4u;
            // 0x293ce8: 0x24a6ffb0  addiu       $a2, $a1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ce4) {
            ctx->pc = 0x293CF0u;
            goto label_293cf0;
        }
    }
    ctx->pc = 0x293CECu;
    // 0x293cec: 0x24a6ffce  addiu       $a2, $a1, -0x32
    ctx->pc = 0x293cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967246));
label_293cf0:
    // 0x293cf0: 0xe32023  subu        $a0, $a3, $v1
    ctx->pc = 0x293cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x293cf4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x293cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x293cf8: 0xae0401a8  sw          $a0, 0x1A8($s0)
    ctx->pc = 0x293cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 4));
    // 0x293cfc: 0xae0501ac  sw          $a1, 0x1AC($s0)
    ctx->pc = 0x293cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 5));
label_293d00:
    // 0x293d00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x293d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293d04: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x293d04u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293d08: 0x0  nop
    ctx->pc = 0x293d08u;
    // NOP
    // 0x293d0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x293d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x293d10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x293d14: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x293d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x293d18: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x293d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_293d1c:
    // 0x293d1c: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x293d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x293d20: 0x10800063  beqz        $a0, . + 4 + (0x63 << 2)
    ctx->pc = 0x293D20u;
    {
        const bool branch_taken_0x293d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293D20u;
            // 0x293d24: 0x27b20084  addiu       $s2, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d20) {
            ctx->pc = 0x293EB0u;
            goto label_293eb0;
        }
    }
    ctx->pc = 0x293D28u;
    // 0x293d28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293d2c: 0x24a5dc78  addiu       $a1, $a1, -0x2388
    ctx->pc = 0x293d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958200));
    // 0x293d30: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x293d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x293d34: 0xc08974c  jal         func_225D30
    ctx->pc = 0x293D34u;
    SET_GPR_U32(ctx, 31, 0x293D3Cu);
    ctx->pc = 0x293D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293D34u;
            // 0x293d38: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293D3Cu; }
        if (ctx->pc != 0x293D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293D3Cu; }
        if (ctx->pc != 0x293D3Cu) { return; }
    }
    ctx->pc = 0x293D3Cu;
label_293d3c:
    // 0x293d3c: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x293d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x293d40: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x293d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x293d44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293d48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x293d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d4c: 0x24a5dc80  addiu       $a1, $a1, -0x2380
    ctx->pc = 0x293d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958208));
    // 0x293d50: 0xc08974c  jal         func_225D30
    ctx->pc = 0x293D50u;
    SET_GPR_U32(ctx, 31, 0x293D58u);
    ctx->pc = 0x293D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293D50u;
            // 0x293d54: 0x26070004  addiu       $a3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293D58u; }
        if (ctx->pc != 0x293D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293D58u; }
        if (ctx->pc != 0x293D58u) { return; }
    }
    ctx->pc = 0x293D58u;
label_293d58:
    // 0x293d58: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x293d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x293d5c: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x293d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x293d60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293d64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x293d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d68: 0x24a5dc88  addiu       $a1, $a1, -0x2378
    ctx->pc = 0x293d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958216));
    // 0x293d6c: 0xc08974c  jal         func_225D30
    ctx->pc = 0x293D6Cu;
    SET_GPR_U32(ctx, 31, 0x293D74u);
    ctx->pc = 0x293D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293D6Cu;
            // 0x293d70: 0x26270004  addiu       $a3, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293D74u; }
        if (ctx->pc != 0x293D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293D74u; }
        if (ctx->pc != 0x293D74u) { return; }
    }
    ctx->pc = 0x293D74u;
label_293d74:
    // 0x293d74: 0x868601ca  lh          $a2, 0x1CA($s4)
    ctx->pc = 0x293d74u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 458)));
    // 0x293d78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293d7c: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x293d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x293d80: 0xc089728  jal         func_225CA0
    ctx->pc = 0x293D80u;
    SET_GPR_U32(ctx, 31, 0x293D88u);
    ctx->pc = 0x293D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293D80u;
            // 0x293d84: 0x24a5dc98  addiu       $a1, $a1, -0x2368 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293D88u; }
        if (ctx->pc != 0x293D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293D88u; }
        if (ctx->pc != 0x293D88u) { return; }
    }
    ctx->pc = 0x293D88u;
label_293d88:
    // 0x293d88: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x293d88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x293d8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x293d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293d90: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x293D90u;
    {
        const bool branch_taken_0x293d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293d90) {
            ctx->pc = 0x293DB8u;
            goto label_293db8;
        }
    }
    ctx->pc = 0x293D98u;
    // 0x293d98: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x293d98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x293d9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x293d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293da0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x293DA0u;
    {
        const bool branch_taken_0x293da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x293DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293DA0u;
            // 0x293da4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293da0) {
            ctx->pc = 0x293E10u;
            goto label_293e10;
        }
    }
    ctx->pc = 0x293DA8u;
    // 0x293da8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x293DA8u;
    {
        const bool branch_taken_0x293da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x293DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293DA8u;
            // 0x293dac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293da8) {
            ctx->pc = 0x293E10u;
            goto label_293e10;
        }
    }
    ctx->pc = 0x293DB0u;
    // 0x293db0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x293DB0u;
    {
        const bool branch_taken_0x293db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x293db0) {
            ctx->pc = 0x293E10u;
            goto label_293e10;
        }
    }
    ctx->pc = 0x293DB8u;
label_293db8:
    // 0x293db8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x293db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x293dbc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x293dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x293dc0: 0x8c24ca4c  lw          $a0, -0x35B4($at)
    ctx->pc = 0x293dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x293dc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293dc8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x293dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x293dcc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x293dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x293dd0: 0xac821b94  sw          $v0, 0x1B94($a0)
    ctx->pc = 0x293dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7060), GPR_U32(ctx, 2));
    // 0x293dd4: 0xac851b98  sw          $a1, 0x1B98($a0)
    ctx->pc = 0x293dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7064), GPR_U32(ctx, 5));
    // 0x293dd8: 0xac831c34  sw          $v1, 0x1C34($a0)
    ctx->pc = 0x293dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7220), GPR_U32(ctx, 3));
    // 0x293ddc: 0x8c24ca4c  lw          $a0, -0x35B4($at)
    ctx->pc = 0x293ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x293de0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x293de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293de4: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x293de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x293de8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x293de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x293dec: 0xac821b9c  sw          $v0, 0x1B9C($a0)
    ctx->pc = 0x293decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7068), GPR_U32(ctx, 2));
    // 0x293df0: 0xac851ba0  sw          $a1, 0x1BA0($a0)
    ctx->pc = 0x293df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7072), GPR_U32(ctx, 5));
    // 0x293df4: 0xac831c38  sw          $v1, 0x1C38($a0)
    ctx->pc = 0x293df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7224), GPR_U32(ctx, 3));
    // 0x293df8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x293df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293dfc: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x293dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x293e00: 0x8c24ca4c  lw          $a0, -0x35B4($at)
    ctx->pc = 0x293e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x293e04: 0xac821ba4  sw          $v0, 0x1BA4($a0)
    ctx->pc = 0x293e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7076), GPR_U32(ctx, 2));
    // 0x293e08: 0xac851ba8  sw          $a1, 0x1BA8($a0)
    ctx->pc = 0x293e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7080), GPR_U32(ctx, 5));
    // 0x293e0c: 0xac831c3c  sw          $v1, 0x1C3C($a0)
    ctx->pc = 0x293e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7228), GPR_U32(ctx, 3));
label_293e10:
    // 0x293e10: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x293e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x293e14: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x293e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x293e18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293e1c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x293e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e20: 0x24a5dca0  addiu       $a1, $a1, -0x2360
    ctx->pc = 0x293e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958240));
    // 0x293e24: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x293e24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e28: 0xc089734  jal         func_225CD0
    ctx->pc = 0x293E28u;
    SET_GPR_U32(ctx, 31, 0x293E30u);
    ctx->pc = 0x293E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293E28u;
            // 0x293e2c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E30u; }
        if (ctx->pc != 0x293E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E30u; }
        if (ctx->pc != 0x293E30u) { return; }
    }
    ctx->pc = 0x293E30u;
label_293e30:
    // 0x293e30: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x293e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x293e34: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x293e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x293e38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293e3c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x293e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e40: 0x24a5dca8  addiu       $a1, $a1, -0x2358
    ctx->pc = 0x293e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958248));
    // 0x293e44: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x293e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e48: 0xc089734  jal         func_225CD0
    ctx->pc = 0x293E48u;
    SET_GPR_U32(ctx, 31, 0x293E50u);
    ctx->pc = 0x293E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293E48u;
            // 0x293e4c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E50u; }
        if (ctx->pc != 0x293E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E50u; }
        if (ctx->pc != 0x293E50u) { return; }
    }
    ctx->pc = 0x293E50u;
label_293e50:
    // 0x293e50: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x293e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x293e54: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x293e54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293e58: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x293E58u;
    {
        const bool branch_taken_0x293e58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x293e58) {
            ctx->pc = 0x293E80u;
            goto label_293e80;
        }
    }
    ctx->pc = 0x293E60u;
    // 0x293e60: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x293e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x293e64: 0x240600a4  addiu       $a2, $zero, 0xA4
    ctx->pc = 0x293e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x293e68: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293e6c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x293e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x293e70: 0x24a5dca0  addiu       $a1, $a1, -0x2360
    ctx->pc = 0x293e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958240));
    // 0x293e74: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x293e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e78: 0xc089734  jal         func_225CD0
    ctx->pc = 0x293E78u;
    SET_GPR_U32(ctx, 31, 0x293E80u);
    ctx->pc = 0x293E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293E78u;
            // 0x293e7c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E80u; }
        if (ctx->pc != 0x293E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293E80u; }
        if (ctx->pc != 0x293E80u) { return; }
    }
    ctx->pc = 0x293E80u;
label_293e80:
    // 0x293e80: 0x8e8301d4  lw          $v1, 0x1D4($s4)
    ctx->pc = 0x293e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x293e84: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x293e84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293e88: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x293E88u;
    {
        const bool branch_taken_0x293e88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x293e88) {
            ctx->pc = 0x293EB0u;
            goto label_293eb0;
        }
    }
    ctx->pc = 0x293E90u;
    // 0x293e90: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x293e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x293e94: 0x240600a4  addiu       $a2, $zero, 0xA4
    ctx->pc = 0x293e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x293e98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x293e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x293e9c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x293e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x293ea0: 0x24a5dca8  addiu       $a1, $a1, -0x2358
    ctx->pc = 0x293ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958248));
    // 0x293ea4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x293ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ea8: 0xc089734  jal         func_225CD0
    ctx->pc = 0x293EA8u;
    SET_GPR_U32(ctx, 31, 0x293EB0u);
    ctx->pc = 0x293EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293EA8u;
            // 0x293eac: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293EB0u; }
        if (ctx->pc != 0x293EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293EB0u; }
        if (ctx->pc != 0x293EB0u) { return; }
    }
    ctx->pc = 0x293EB0u;
label_293eb0:
    // 0x293eb0: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x293eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x293eb4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x293eb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293eb8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x293EB8u;
    {
        const bool branch_taken_0x293eb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x293eb8) {
            ctx->pc = 0x293EC8u;
            goto label_293ec8;
        }
    }
    ctx->pc = 0x293EC0u;
    // 0x293ec0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x293ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x293ec4: 0xae8301d0  sw          $v1, 0x1D0($s4)
    ctx->pc = 0x293ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 3));
label_293ec8:
    // 0x293ec8: 0x8e8301d4  lw          $v1, 0x1D4($s4)
    ctx->pc = 0x293ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x293ecc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x293eccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x293ed0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x293ED0u;
    {
        const bool branch_taken_0x293ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x293ed0) {
            ctx->pc = 0x293EE0u;
            goto label_293ee0;
        }
    }
    ctx->pc = 0x293ED8u;
    // 0x293ed8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x293ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x293edc: 0xae8301d4  sw          $v1, 0x1D4($s4)
    ctx->pc = 0x293edcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 468), GPR_U32(ctx, 3));
label_293ee0:
    // 0x293ee0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x293ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293ee4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x293ee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293ee8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x293ee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293eec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x293eecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293ef0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x293ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293ef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x293ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293f00: 0x3e00008  jr          $ra
    ctx->pc = 0x293F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293F00u;
            // 0x293f04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F08u;
}
