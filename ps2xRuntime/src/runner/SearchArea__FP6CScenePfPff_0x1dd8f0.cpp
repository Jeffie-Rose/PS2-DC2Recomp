#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchArea__FP6CScenePfPff
// Address: 0x1dd8f0 - 0x1dd9f8
void SearchArea__FP6CScenePfPff_0x1dd8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchArea__FP6CScenePfPff_0x1dd8f0");
#endif

    switch (ctx->pc) {
        case 0x1dd8f0u: goto label_1dd8f0;
        case 0x1dd8f4u: goto label_1dd8f4;
        case 0x1dd8f8u: goto label_1dd8f8;
        case 0x1dd8fcu: goto label_1dd8fc;
        case 0x1dd900u: goto label_1dd900;
        case 0x1dd904u: goto label_1dd904;
        case 0x1dd908u: goto label_1dd908;
        case 0x1dd90cu: goto label_1dd90c;
        case 0x1dd910u: goto label_1dd910;
        case 0x1dd914u: goto label_1dd914;
        case 0x1dd918u: goto label_1dd918;
        case 0x1dd91cu: goto label_1dd91c;
        case 0x1dd920u: goto label_1dd920;
        case 0x1dd924u: goto label_1dd924;
        case 0x1dd928u: goto label_1dd928;
        case 0x1dd92cu: goto label_1dd92c;
        case 0x1dd930u: goto label_1dd930;
        case 0x1dd934u: goto label_1dd934;
        case 0x1dd938u: goto label_1dd938;
        case 0x1dd93cu: goto label_1dd93c;
        case 0x1dd940u: goto label_1dd940;
        case 0x1dd944u: goto label_1dd944;
        case 0x1dd948u: goto label_1dd948;
        case 0x1dd94cu: goto label_1dd94c;
        case 0x1dd950u: goto label_1dd950;
        case 0x1dd954u: goto label_1dd954;
        case 0x1dd958u: goto label_1dd958;
        case 0x1dd95cu: goto label_1dd95c;
        case 0x1dd960u: goto label_1dd960;
        case 0x1dd964u: goto label_1dd964;
        case 0x1dd968u: goto label_1dd968;
        case 0x1dd96cu: goto label_1dd96c;
        case 0x1dd970u: goto label_1dd970;
        case 0x1dd974u: goto label_1dd974;
        case 0x1dd978u: goto label_1dd978;
        case 0x1dd97cu: goto label_1dd97c;
        case 0x1dd980u: goto label_1dd980;
        case 0x1dd984u: goto label_1dd984;
        case 0x1dd988u: goto label_1dd988;
        case 0x1dd98cu: goto label_1dd98c;
        case 0x1dd990u: goto label_1dd990;
        case 0x1dd994u: goto label_1dd994;
        case 0x1dd998u: goto label_1dd998;
        case 0x1dd99cu: goto label_1dd99c;
        case 0x1dd9a0u: goto label_1dd9a0;
        case 0x1dd9a4u: goto label_1dd9a4;
        case 0x1dd9a8u: goto label_1dd9a8;
        case 0x1dd9acu: goto label_1dd9ac;
        case 0x1dd9b0u: goto label_1dd9b0;
        case 0x1dd9b4u: goto label_1dd9b4;
        case 0x1dd9b8u: goto label_1dd9b8;
        case 0x1dd9bcu: goto label_1dd9bc;
        case 0x1dd9c0u: goto label_1dd9c0;
        case 0x1dd9c4u: goto label_1dd9c4;
        case 0x1dd9c8u: goto label_1dd9c8;
        case 0x1dd9ccu: goto label_1dd9cc;
        case 0x1dd9d0u: goto label_1dd9d0;
        case 0x1dd9d4u: goto label_1dd9d4;
        case 0x1dd9d8u: goto label_1dd9d8;
        case 0x1dd9dcu: goto label_1dd9dc;
        case 0x1dd9e0u: goto label_1dd9e0;
        case 0x1dd9e4u: goto label_1dd9e4;
        case 0x1dd9e8u: goto label_1dd9e8;
        case 0x1dd9ecu: goto label_1dd9ec;
        case 0x1dd9f0u: goto label_1dd9f0;
        case 0x1dd9f4u: goto label_1dd9f4;
        default: break;
    }

    ctx->pc = 0x1dd8f0u;

label_1dd8f0:
    // 0x1dd8f0: 0x27bdd790  addiu       $sp, $sp, -0x2870
    ctx->pc = 0x1dd8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956944));
label_1dd8f4:
    // 0x1dd8f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dd8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1dd8f8:
    // 0x1dd8f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dd8fc:
    // 0x1dd8fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1dd900:
    // 0x1dd900: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dd900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dd904:
    // 0x1dd904: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dd904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1dd908:
    // 0x1dd908: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dd90c:
    // 0x1dd90c: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x1dd90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_1dd910:
    // 0x1dd910: 0xc0a0f58  jal         func_283D60
label_1dd914:
    if (ctx->pc == 0x1DD914u) {
        ctx->pc = 0x1DD914u;
            // 0x1dd914: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DD918u;
        goto label_1dd918;
    }
    ctx->pc = 0x1DD910u;
    SET_GPR_U32(ctx, 31, 0x1DD918u);
    ctx->pc = 0x1DD914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD910u;
            // 0x1dd914: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD918u; }
        if (ctx->pc != 0x1DD918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD918u; }
        if (ctx->pc != 0x1DD918u) { return; }
    }
    ctx->pc = 0x1DD918u;
label_1dd918:
    // 0x1dd918: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dd91c:
    if (ctx->pc == 0x1DD91Cu) {
        ctx->pc = 0x1DD91Cu;
            // 0x1dd91c: 0x3c034120  lui         $v1, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x1DD920u;
        goto label_1dd920;
    }
    ctx->pc = 0x1DD918u;
    {
        const bool branch_taken_0x1dd918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD918u;
            // 0x1dd91c: 0x3c034120  lui         $v1, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd918) {
            ctx->pc = 0x1DD928u;
            goto label_1dd928;
        }
    }
    ctx->pc = 0x1DD920u;
label_1dd920:
    // 0x1dd920: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1dd924:
    if (ctx->pc == 0x1DD924u) {
        ctx->pc = 0x1DD924u;
            // 0x1dd924: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1DD928u;
        goto label_1dd928;
    }
    ctx->pc = 0x1DD920u;
    {
        const bool branch_taken_0x1dd920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD920u;
            // 0x1dd924: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd920) {
            ctx->pc = 0x1DD9E0u;
            goto label_1dd9e0;
        }
    }
    ctx->pc = 0x1DD928u;
label_1dd928:
    // 0x1dd928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd92c:
    // 0x1dd92c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dd92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd930:
    // 0x1dd930: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1dd930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1dd934:
    // 0x1dd934: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1dd934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd938:
    // 0x1dd938: 0x27a62840  addiu       $a2, $sp, 0x2840
    ctx->pc = 0x1dd938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10304));
label_1dd93c:
    // 0x1dd93c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1dd93cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_1dd940:
    // 0x1dd940: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dd944:
    // 0x1dd944: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd948:
    // 0x1dd948: 0xe7a02840  swc1        $f0, 0x2840($sp)
    ctx->pc = 0x1dd948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10304), bits); }
label_1dd94c:
    // 0x1dd94c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1dd94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd950:
    // 0x1dd950: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1dd950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1dd954:
    // 0x1dd954: 0xe7a02850  swc1        $f0, 0x2850($sp)
    ctx->pc = 0x1dd954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10320), bits); }
label_1dd958:
    // 0x1dd958: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1dd958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd95c:
    // 0x1dd95c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd960:
    // 0x1dd960: 0xe7a02844  swc1        $f0, 0x2844($sp)
    ctx->pc = 0x1dd960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10308), bits); }
label_1dd964:
    // 0x1dd964: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1dd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd968:
    // 0x1dd968: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1dd968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1dd96c:
    // 0x1dd96c: 0xe7a02854  swc1        $f0, 0x2854($sp)
    ctx->pc = 0x1dd96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10324), bits); }
label_1dd970:
    // 0x1dd970: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1dd970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd974:
    // 0x1dd974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd978:
    // 0x1dd978: 0xe7a02848  swc1        $f0, 0x2848($sp)
    ctx->pc = 0x1dd978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10312), bits); }
label_1dd97c:
    // 0x1dd97c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1dd97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd980:
    // 0x1dd980: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1dd980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1dd984:
    // 0x1dd984: 0xafa3284c  sw          $v1, 0x284C($sp)
    ctx->pc = 0x1dd984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10316), GPR_U32(ctx, 3));
label_1dd988:
    // 0x1dd988: 0xafa3285c  sw          $v1, 0x285C($sp)
    ctx->pc = 0x1dd988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10332), GPR_U32(ctx, 3));
label_1dd98c:
    // 0x1dd98c: 0xe7a02858  swc1        $f0, 0x2858($sp)
    ctx->pc = 0x1dd98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10328), bits); }
label_1dd990:
    // 0x1dd990: 0x8c590d00  lw          $t9, 0xD00($v0)
    ctx->pc = 0x1dd990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_1dd994:
    // 0x1dd994: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1dd994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1dd998:
    // 0x1dd998: 0x320f809  jalr        $t9
label_1dd99c:
    if (ctx->pc == 0x1DD99Cu) {
        ctx->pc = 0x1DD99Cu;
            // 0x1dd99c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1DD9A0u;
        goto label_1dd9a0;
    }
    ctx->pc = 0x1DD998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD9A0u);
        ctx->pc = 0x1DD99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD998u;
            // 0x1dd99c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD9A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9A0u; }
            if (ctx->pc != 0x1DD9A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD9A0u;
label_1dd9a0:
    // 0x1dd9a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1dd9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9a4:
    // 0x1dd9a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dd9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1dd9a8:
    // 0x1dd9a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9ac:
    // 0x1dd9ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9b0:
    // 0x1dd9b0: 0x27a82860  addiu       $t0, $sp, 0x2860
    ctx->pc = 0x1dd9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 10336));
label_1dd9b4:
    // 0x1dd9b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dd9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd9b8:
    // 0x1dd9b8: 0xc053794  jal         func_14DE50
label_1dd9bc:
    if (ctx->pc == 0x1DD9BCu) {
        ctx->pc = 0x1DD9BCu;
            // 0x1dd9bc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DD9C0u;
        goto label_1dd9c0;
    }
    ctx->pc = 0x1DD9B8u;
    SET_GPR_U32(ctx, 31, 0x1DD9C0u);
    ctx->pc = 0x1DD9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9B8u;
            // 0x1dd9bc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9C0u; }
        if (ctx->pc != 0x1DD9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9C0u; }
        if (ctx->pc != 0x1DD9C0u) { return; }
    }
    ctx->pc = 0x1DD9C0u;
label_1dd9c0:
    // 0x1dd9c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1dd9c4:
    if (ctx->pc == 0x1DD9C4u) {
        ctx->pc = 0x1DD9C4u;
            // 0x1dd9c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9C8u;
        goto label_1dd9c8;
    }
    ctx->pc = 0x1DD9C0u;
    {
        const bool branch_taken_0x1dd9c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DD9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9C0u;
            // 0x1dd9c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9c0) {
            ctx->pc = 0x1DD9D0u;
            goto label_1dd9d0;
        }
    }
    ctx->pc = 0x1DD9C8u;
label_1dd9c8:
    // 0x1dd9c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd9cc:
    if (ctx->pc == 0x1DD9CCu) {
        ctx->pc = 0x1DD9CCu;
            // 0x1dd9cc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1DD9D0u;
        goto label_1dd9d0;
    }
    ctx->pc = 0x1DD9C8u;
    {
        const bool branch_taken_0x1dd9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9C8u;
            // 0x1dd9cc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9c8) {
            ctx->pc = 0x1DD9E0u;
            goto label_1dd9e0;
        }
    }
    ctx->pc = 0x1DD9D0u;
label_1dd9d0:
    // 0x1dd9d0: 0xc04c018  jal         func_130060
label_1dd9d4:
    if (ctx->pc == 0x1DD9D4u) {
        ctx->pc = 0x1DD9D4u;
            // 0x1dd9d4: 0x27a42860  addiu       $a0, $sp, 0x2860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10336));
        ctx->pc = 0x1DD9D8u;
        goto label_1dd9d8;
    }
    ctx->pc = 0x1DD9D0u;
    SET_GPR_U32(ctx, 31, 0x1DD9D8u);
    ctx->pc = 0x1DD9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9D0u;
            // 0x1dd9d4: 0x27a42860  addiu       $a0, $sp, 0x2860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9D8u; }
        if (ctx->pc != 0x1DD9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9D8u; }
        if (ctx->pc != 0x1DD9D8u) { return; }
    }
    ctx->pc = 0x1DD9D8u;
label_1dd9d8:
    // 0x1dd9d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1dd9d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1dd9dc:
    // 0x1dd9dc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1dd9dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1dd9e0:
    // 0x1dd9e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dd9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd9e4:
    // 0x1dd9e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dd9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dd9e8:
    // 0x1dd9e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd9ec:
    // 0x1dd9ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd9f0:
    // 0x1dd9f0: 0x3e00008  jr          $ra
label_1dd9f4:
    if (ctx->pc == 0x1DD9F4u) {
        ctx->pc = 0x1DD9F4u;
            // 0x1dd9f4: 0x27bd2870  addiu       $sp, $sp, 0x2870 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10352));
        ctx->pc = 0x1DD9F8u;
        goto label_fallthrough_0x1dd9f0;
    }
    ctx->pc = 0x1DD9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9F0u;
            // 0x1dd9f4: 0x27bd2870  addiu       $sp, $sp, 0x2870 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dd9f0:
    ctx->pc = 0x1DD9F8u;
}
