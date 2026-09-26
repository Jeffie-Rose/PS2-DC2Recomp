#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawActiveItemCursor__Fiif
// Address: 0x1bbf80 - 0x1bc414
void DrawActiveItemCursor__Fiif_0x1bbf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawActiveItemCursor__Fiif_0x1bbf80");
#endif

    switch (ctx->pc) {
        case 0x1bbfb4u: goto label_1bbfb4;
        case 0x1bbfbcu: goto label_1bbfbc;
        case 0x1bbfccu: goto label_1bbfcc;
        case 0x1bbfd4u: goto label_1bbfd4;
        case 0x1bbfe0u: goto label_1bbfe0;
        case 0x1bbfecu: goto label_1bbfec;
        case 0x1bbff8u: goto label_1bbff8;
        case 0x1bc004u: goto label_1bc004;
        case 0x1bc014u: goto label_1bc014;
        case 0x1bc02cu: goto label_1bc02c;
        case 0x1bc0a8u: goto label_1bc0a8;
        case 0x1bc0bcu: goto label_1bc0bc;
        case 0x1bc0e8u: goto label_1bc0e8;
        case 0x1bc0fcu: goto label_1bc0fc;
        case 0x1bc130u: goto label_1bc130;
        case 0x1bc13cu: goto label_1bc13c;
        case 0x1bc150u: goto label_1bc150;
        case 0x1bc164u: goto label_1bc164;
        case 0x1bc184u: goto label_1bc184;
        case 0x1bc190u: goto label_1bc190;
        case 0x1bc1c0u: goto label_1bc1c0;
        case 0x1bc1ccu: goto label_1bc1cc;
        case 0x1bc1e4u: goto label_1bc1e4;
        case 0x1bc1f0u: goto label_1bc1f0;
        case 0x1bc210u: goto label_1bc210;
        case 0x1bc21cu: goto label_1bc21c;
        case 0x1bc248u: goto label_1bc248;
        case 0x1bc254u: goto label_1bc254;
        case 0x1bc26cu: goto label_1bc26c;
        case 0x1bc278u: goto label_1bc278;
        case 0x1bc298u: goto label_1bc298;
        case 0x1bc2a4u: goto label_1bc2a4;
        case 0x1bc2d0u: goto label_1bc2d0;
        case 0x1bc2dcu: goto label_1bc2dc;
        case 0x1bc2f4u: goto label_1bc2f4;
        case 0x1bc300u: goto label_1bc300;
        case 0x1bc320u: goto label_1bc320;
        case 0x1bc32cu: goto label_1bc32c;
        case 0x1bc358u: goto label_1bc358;
        case 0x1bc364u: goto label_1bc364;
        case 0x1bc378u: goto label_1bc378;
        case 0x1bc384u: goto label_1bc384;
        case 0x1bc3a4u: goto label_1bc3a4;
        case 0x1bc3b0u: goto label_1bc3b0;
        case 0x1bc3dcu: goto label_1bc3dc;
        case 0x1bc3e8u: goto label_1bc3e8;
        case 0x1bc3f0u: goto label_1bc3f0;
        default: break;
    }

    ctx->pc = 0x1bbf80u;

    // 0x1bbf80: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x1bbf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x1bbf84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bbf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bbf88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bbf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bbf8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bbf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bbf90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bbf90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bbf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bbf98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bbf98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf9c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1bbf9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bbfa0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bbfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bbfa4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1bbfa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bbfa8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1bbfa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bbfac: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BBFACu;
    SET_GPR_U32(ctx, 31, 0x1BBFB4u);
    ctx->pc = 0x1BBFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFACu;
            // 0x1bbfb0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFB4u; }
        if (ctx->pc != 0x1BBFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFB4u; }
        if (ctx->pc != 0x1BBFB4u) { return; }
    }
    ctx->pc = 0x1BBFB4u;
label_1bbfb4:
    // 0x1bbfb4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BBFB4u;
    SET_GPR_U32(ctx, 31, 0x1BBFBCu);
    ctx->pc = 0x1BBFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFB4u;
            // 0x1bbfb8: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFBCu; }
        if (ctx->pc != 0x1BBFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFBCu; }
        if (ctx->pc != 0x1BBFBCu) { return; }
    }
    ctx->pc = 0x1BBFBCu;
label_1bbfbc:
    // 0x1bbfbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bbfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bbfc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfc4: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BBFC4u;
    SET_GPR_U32(ctx, 31, 0x1BBFCCu);
    ctx->pc = 0x1BBFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFC4u;
            // 0x1bbfc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFCCu; }
        if (ctx->pc != 0x1BBFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFCCu; }
        if (ctx->pc != 0x1BBFCCu) { return; }
    }
    ctx->pc = 0x1BBFCCu;
label_1bbfcc:
    // 0x1bbfcc: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BBFCCu;
    SET_GPR_U32(ctx, 31, 0x1BBFD4u);
    ctx->pc = 0x1BBFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFCCu;
            // 0x1bbfd0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFD4u; }
        if (ctx->pc != 0x1BBFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFD4u; }
        if (ctx->pc != 0x1BBFD4u) { return; }
    }
    ctx->pc = 0x1BBFD4u;
label_1bbfd4:
    // 0x1bbfd4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bbfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bbfd8: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1BBFD8u;
    SET_GPR_U32(ctx, 31, 0x1BBFE0u);
    ctx->pc = 0x1BBFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFD8u;
            // 0x1bbfdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFE0u; }
        if (ctx->pc != 0x1BBFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFE0u; }
        if (ctx->pc != 0x1BBFE0u) { return; }
    }
    ctx->pc = 0x1BBFE0u;
label_1bbfe0:
    // 0x1bbfe0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bbfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bbfe4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BBFE4u;
    SET_GPR_U32(ctx, 31, 0x1BBFECu);
    ctx->pc = 0x1BBFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFE4u;
            // 0x1bbfe8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFECu; }
        if (ctx->pc != 0x1BBFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFECu; }
        if (ctx->pc != 0x1BBFECu) { return; }
    }
    ctx->pc = 0x1BBFECu;
label_1bbfec:
    // 0x1bbfec: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bbfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bbff0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BBFF0u;
    SET_GPR_U32(ctx, 31, 0x1BBFF8u);
    ctx->pc = 0x1BBFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFF0u;
            // 0x1bbff4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFF8u; }
        if (ctx->pc != 0x1BBFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFF8u; }
        if (ctx->pc != 0x1BBFF8u) { return; }
    }
    ctx->pc = 0x1BBFF8u;
label_1bbff8:
    // 0x1bbff8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bbff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bbffc: 0xc079ff0  jal         func_1E7FC0
    ctx->pc = 0x1BBFFCu;
    SET_GPR_U32(ctx, 31, 0x1BC004u);
    ctx->pc = 0x1BC000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFFCu;
            // 0x1bc000: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7FC0u;
    if (runtime->hasFunction(0x1E7FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC004u; }
        if (ctx->pc != 0x1BC004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaBlend__10CPreSpriteFi_0x1e7fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC004u; }
        if (ctx->pc != 0x1BC004u) { return; }
    }
    ctx->pc = 0x1BC004u;
label_1bc004:
    // 0x1bc004: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1bc004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1bc008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc00c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BC00Cu;
    SET_GPR_U32(ctx, 31, 0x1BC014u);
    ctx->pc = 0x1BC010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC00Cu;
            // 0x1bc010: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC014u; }
        if (ctx->pc != 0x1BC014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC014u; }
        if (ctx->pc != 0x1BC014u) { return; }
    }
    ctx->pc = 0x1BC014u;
label_1bc014:
    // 0x1bc014: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bc014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bc018: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1bc018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc01c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc020: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bc020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc024: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BC024u;
    SET_GPR_U32(ctx, 31, 0x1BC02Cu);
    ctx->pc = 0x1BC028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC024u;
            // 0x1bc028: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC02Cu; }
        if (ctx->pc != 0x1BC02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC02Cu; }
        if (ctx->pc != 0x1BC02Cu) { return; }
    }
    ctx->pc = 0x1BC02Cu;
label_1bc02c:
    // 0x1bc02c: 0x83828d5c  lb          $v0, -0x72A4($gp)
    ctx->pc = 0x1bc02cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937948)));
    // 0x1bc030: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC030u;
    {
        const bool branch_taken_0x1bc030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC030u;
            // 0x1bc034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc030) {
            ctx->pc = 0x1BC048u;
            goto label_1bc048;
        }
    }
    ctx->pc = 0x1BC038u;
    // 0x1bc038: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1bc038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1bc03c: 0xa3828d5c  sb          $v0, -0x72A4($gp)
    ctx->pc = 0x1bc03cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937948), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bc040: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1bc040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1bc044: 0xaf828d58  sw          $v0, -0x72A8($gp)
    ctx->pc = 0x1bc044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937944), GPR_U32(ctx, 2));
label_1bc048:
    // 0x1bc048: 0xc7828d58  lwc1        $f2, -0x72A8($gp)
    ctx->pc = 0x1bc048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bc04c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1bc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1bc050: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x1bc050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1bc054: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bc054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc058: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bc058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bc05c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bc05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bc060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc064: 0x0  nop
    ctx->pc = 0x1bc064u;
    // NOP
    // 0x1bc068: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1bc068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1bc06c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc06cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc070: 0x0  nop
    ctx->pc = 0x1bc070u;
    // NOP
    // 0x1bc074: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC074u;
    {
        const bool branch_taken_0x1bc074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC074u;
            // 0x1bc078: 0xe7818d58  swc1        $f1, -0x72A8($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937944), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc074) {
            ctx->pc = 0x1BC094u;
            goto label_1bc094;
        }
    }
    ctx->pc = 0x1BC07Cu;
    // 0x1bc07c: 0x3c0241c9  lui         $v0, 0x41C9
    ctx->pc = 0x1bc07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16841 << 16));
    // 0x1bc080: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bc080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bc084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc088: 0x0  nop
    ctx->pc = 0x1bc088u;
    // NOP
    // 0x1bc08c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bc08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bc090: 0xe7808d58  swc1        $f0, -0x72A8($gp)
    ctx->pc = 0x1bc090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937944), bits); }
label_1bc094:
    // 0x1bc094: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc098: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x1bc098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x1bc09c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1bc09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bc0a0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC0A0u;
    SET_GPR_U32(ctx, 31, 0x1BC0A8u);
    ctx->pc = 0x1BC0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0A0u;
            // 0x1bc0a4: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0A8u; }
        if (ctx->pc != 0x1BC0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0A8u; }
        if (ctx->pc != 0x1BC0A8u) { return; }
    }
    ctx->pc = 0x1BC0A8u;
label_1bc0a8:
    // 0x1bc0a8: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x1bc0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x1bc0ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc0b0: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc0b4: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC0B4u;
    SET_GPR_U32(ctx, 31, 0x1BC0BCu);
    ctx->pc = 0x1BC0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0B4u;
            // 0x1bc0b8: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0BCu; }
        if (ctx->pc != 0x1BC0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0BCu; }
        if (ctx->pc != 0x1BC0BCu) { return; }
    }
    ctx->pc = 0x1BC0BCu;
label_1bc0bc:
    // 0x1bc0bc: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x1bc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x1bc0c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc0c4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1bc0c4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc0c8: 0x0  nop
    ctx->pc = 0x1bc0c8u;
    // NOP
    // 0x1bc0cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc0d0: 0x4600b081  sub.s       $f2, $f22, $f0
    ctx->pc = 0x1bc0d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1bc0d4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1bc0d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc0d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1bc0d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1bc0dc: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc0e0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC0E0u;
    SET_GPR_U32(ctx, 31, 0x1BC0E8u);
    ctx->pc = 0x1BC0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0E0u;
            // 0x1bc0e4: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0E8u; }
        if (ctx->pc != 0x1BC0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0E8u; }
        if (ctx->pc != 0x1BC0E8u) { return; }
    }
    ctx->pc = 0x1BC0E8u;
label_1bc0e8:
    // 0x1bc0e8: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x1bc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x1bc0ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc0f0: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc0f4: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC0F4u;
    SET_GPR_U32(ctx, 31, 0x1BC0FCu);
    ctx->pc = 0x1BC0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0F4u;
            // 0x1bc0f8: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0FCu; }
        if (ctx->pc != 0x1BC0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0FCu; }
        if (ctx->pc != 0x1BC0FCu) { return; }
    }
    ctx->pc = 0x1BC0FCu;
label_1bc0fc:
    // 0x1bc0fc: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x1bc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x1bc100: 0x27b00294  addiu       $s0, $sp, 0x294
    ctx->pc = 0x1bc100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
    // 0x1bc104: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc108: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc10c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1bc10cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc110: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x1bc110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1bc114: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc118: 0x240600ca  addiu       $a2, $zero, 0xCA
    ctx->pc = 0x1bc118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x1bc11c: 0x4600b080  add.s       $f2, $f22, $f0
    ctx->pc = 0x1bc11cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x1bc120: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1bc120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc124: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1bc124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1bc128: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BC128u;
    SET_GPR_U32(ctx, 31, 0x1BC130u);
    ctx->pc = 0x1BC12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC128u;
            // 0x1bc12c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC130u; }
        if (ctx->pc != 0x1BC130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC130u; }
        if (ctx->pc != 0x1BC130u) { return; }
    }
    ctx->pc = 0x1BC130u;
label_1bc130:
    // 0x1bc130: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc134: 0xc04d2dc  jal         func_134B70
    ctx->pc = 0x1BC134u;
    SET_GPR_U32(ctx, 31, 0x1BC13Cu);
    ctx->pc = 0x1BC138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC134u;
            // 0x1bc138: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B70u;
    if (runtime->hasFunction(0x134B70u)) {
        auto targetFn = runtime->lookupFunction(0x134B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC13Cu; }
        if (ctx->pc != 0x1BC13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFPf_0x134b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC13Cu; }
        if (ctx->pc != 0x1BC13Cu) { return; }
    }
    ctx->pc = 0x1BC13Cu;
label_1bc13c:
    // 0x1bc13c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1bc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x1bc140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc144: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc148: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC148u;
    SET_GPR_U32(ctx, 31, 0x1BC150u);
    ctx->pc = 0x1BC14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC148u;
            // 0x1bc14c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC150u; }
        if (ctx->pc != 0x1BC150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC150u; }
        if (ctx->pc != 0x1BC150u) { return; }
    }
    ctx->pc = 0x1BC150u;
label_1bc150:
    // 0x1bc150: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x1bc150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x1bc154: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc158: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc15c: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC15Cu;
    SET_GPR_U32(ctx, 31, 0x1BC164u);
    ctx->pc = 0x1BC160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC15Cu;
            // 0x1bc160: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC164u; }
        if (ctx->pc != 0x1BC164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC164u; }
        if (ctx->pc != 0x1BC164u) { return; }
    }
    ctx->pc = 0x1BC164u;
label_1bc164:
    // 0x1bc164: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1bc164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1bc168: 0x4600b041  sub.s       $f1, $f22, $f0
    ctx->pc = 0x1bc168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1bc16c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1bc16cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc170: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc178: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc17c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC17Cu;
    SET_GPR_U32(ctx, 31, 0x1BC184u);
    ctx->pc = 0x1BC180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC17Cu;
            // 0x1bc180: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC184u; }
        if (ctx->pc != 0x1BC184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC184u; }
        if (ctx->pc != 0x1BC184u) { return; }
    }
    ctx->pc = 0x1BC184u;
label_1bc184:
    // 0x1bc184: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc188: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC188u;
    SET_GPR_U32(ctx, 31, 0x1BC190u);
    ctx->pc = 0x1BC18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC188u;
            // 0x1bc18c: 0x4600ad82  mul.s       $f22, $f21, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC190u; }
        if (ctx->pc != 0x1BC190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC190u; }
        if (ctx->pc != 0x1BC190u) { return; }
    }
    ctx->pc = 0x1BC190u;
label_1bc190:
    // 0x1bc190: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x1bc190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
    // 0x1bc194: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc198: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc19c: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x1bc19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1bc1a0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1bc1a0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc1a4: 0x240600ca  addiu       $a2, $zero, 0xCA
    ctx->pc = 0x1bc1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x1bc1a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc1a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc1ac: 0x4600b080  add.s       $f2, $f22, $f0
    ctx->pc = 0x1bc1acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x1bc1b0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1bc1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc1b4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1bc1b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1bc1b8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BC1B8u;
    SET_GPR_U32(ctx, 31, 0x1BC1C0u);
    ctx->pc = 0x1BC1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1B8u;
            // 0x1bc1bc: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1C0u; }
        if (ctx->pc != 0x1BC1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1C0u; }
        if (ctx->pc != 0x1BC1C0u) { return; }
    }
    ctx->pc = 0x1BC1C0u;
label_1bc1c0:
    // 0x1bc1c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc1c4: 0xc04d2dc  jal         func_134B70
    ctx->pc = 0x1BC1C4u;
    SET_GPR_U32(ctx, 31, 0x1BC1CCu);
    ctx->pc = 0x1BC1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1C4u;
            // 0x1bc1c8: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B70u;
    if (runtime->hasFunction(0x134B70u)) {
        auto targetFn = runtime->lookupFunction(0x134B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1CCu; }
        if (ctx->pc != 0x1BC1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFPf_0x134b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1CCu; }
        if (ctx->pc != 0x1BC1CCu) { return; }
    }
    ctx->pc = 0x1BC1CCu;
label_1bc1cc:
    // 0x1bc1cc: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1bc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x1bc1d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc1d4: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc1d8: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1bc1d8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1bc1dc: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC1DCu;
    SET_GPR_U32(ctx, 31, 0x1BC1E4u);
    ctx->pc = 0x1BC1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1DCu;
            // 0x1bc1e0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1E4u; }
        if (ctx->pc != 0x1BC1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1E4u; }
        if (ctx->pc != 0x1BC1E4u) { return; }
    }
    ctx->pc = 0x1BC1E4u;
label_1bc1e4:
    // 0x1bc1e4: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc1e8: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC1E8u;
    SET_GPR_U32(ctx, 31, 0x1BC1F0u);
    ctx->pc = 0x1BC1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1E8u;
            // 0x1bc1ec: 0x4600a582  mul.s       $f22, $f20, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1F0u; }
        if (ctx->pc != 0x1BC1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1F0u; }
        if (ctx->pc != 0x1BC1F0u) { return; }
    }
    ctx->pc = 0x1BC1F0u;
label_1bc1f0:
    // 0x1bc1f0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1bc1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1bc1f4: 0x4600b041  sub.s       $f1, $f22, $f0
    ctx->pc = 0x1bc1f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1bc1f8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1bc1f8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc1fc: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc200: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc204: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc208: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC208u;
    SET_GPR_U32(ctx, 31, 0x1BC210u);
    ctx->pc = 0x1BC20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC208u;
            // 0x1bc20c: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC210u; }
        if (ctx->pc != 0x1BC210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC210u; }
        if (ctx->pc != 0x1BC210u) { return; }
    }
    ctx->pc = 0x1BC210u;
label_1bc210:
    // 0x1bc210: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc214: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC214u;
    SET_GPR_U32(ctx, 31, 0x1BC21Cu);
    ctx->pc = 0x1BC218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC214u;
            // 0x1bc218: 0x4600ad82  mul.s       $f22, $f21, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC21Cu; }
        if (ctx->pc != 0x1BC21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC21Cu; }
        if (ctx->pc != 0x1BC21Cu) { return; }
    }
    ctx->pc = 0x1BC21Cu;
label_1bc21c:
    // 0x1bc21c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1bc21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bc220: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc224: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x1bc224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1bc228: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1bc228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc22c: 0x4600b040  add.s       $f1, $f22, $f0
    ctx->pc = 0x1bc22cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x1bc230: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bc230u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc234: 0x0  nop
    ctx->pc = 0x1bc234u;
    // NOP
    // 0x1bc238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc23c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc23cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc240: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BC240u;
    SET_GPR_U32(ctx, 31, 0x1BC248u);
    ctx->pc = 0x1BC244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC240u;
            // 0x1bc244: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC248u; }
        if (ctx->pc != 0x1BC248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC248u; }
        if (ctx->pc != 0x1BC248u) { return; }
    }
    ctx->pc = 0x1BC248u;
label_1bc248:
    // 0x1bc248: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc24c: 0xc04d2dc  jal         func_134B70
    ctx->pc = 0x1BC24Cu;
    SET_GPR_U32(ctx, 31, 0x1BC254u);
    ctx->pc = 0x1BC250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC24Cu;
            // 0x1bc250: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B70u;
    if (runtime->hasFunction(0x134B70u)) {
        auto targetFn = runtime->lookupFunction(0x134B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC254u; }
        if (ctx->pc != 0x1BC254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFPf_0x134b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC254u; }
        if (ctx->pc != 0x1BC254u) { return; }
    }
    ctx->pc = 0x1BC254u;
label_1bc254:
    // 0x1bc254: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1bc254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x1bc258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc25c: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc260: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1bc260u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1bc264: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC264u;
    SET_GPR_U32(ctx, 31, 0x1BC26Cu);
    ctx->pc = 0x1BC268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC264u;
            // 0x1bc268: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC26Cu; }
        if (ctx->pc != 0x1BC26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC26Cu; }
        if (ctx->pc != 0x1BC26Cu) { return; }
    }
    ctx->pc = 0x1BC26Cu;
label_1bc26c:
    // 0x1bc26c: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc270: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC270u;
    SET_GPR_U32(ctx, 31, 0x1BC278u);
    ctx->pc = 0x1BC274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC270u;
            // 0x1bc274: 0x4600a582  mul.s       $f22, $f20, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC278u; }
        if (ctx->pc != 0x1BC278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC278u; }
        if (ctx->pc != 0x1BC278u) { return; }
    }
    ctx->pc = 0x1BC278u;
label_1bc278:
    // 0x1bc278: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1bc278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1bc27c: 0x4600b041  sub.s       $f1, $f22, $f0
    ctx->pc = 0x1bc27cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1bc280: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1bc280u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc284: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc28c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc290: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC290u;
    SET_GPR_U32(ctx, 31, 0x1BC298u);
    ctx->pc = 0x1BC294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC290u;
            // 0x1bc294: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC298u; }
        if (ctx->pc != 0x1BC298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC298u; }
        if (ctx->pc != 0x1BC298u) { return; }
    }
    ctx->pc = 0x1BC298u;
label_1bc298:
    // 0x1bc298: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc29c: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC29Cu;
    SET_GPR_U32(ctx, 31, 0x1BC2A4u);
    ctx->pc = 0x1BC2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC29Cu;
            // 0x1bc2a0: 0x4600ad82  mul.s       $f22, $f21, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2A4u; }
        if (ctx->pc != 0x1BC2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2A4u; }
        if (ctx->pc != 0x1BC2A4u) { return; }
    }
    ctx->pc = 0x1BC2A4u;
label_1bc2a4:
    // 0x1bc2a4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1bc2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bc2a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc2ac: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x1bc2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1bc2b0: 0x240600ca  addiu       $a2, $zero, 0xCA
    ctx->pc = 0x1bc2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x1bc2b4: 0x4600b040  add.s       $f1, $f22, $f0
    ctx->pc = 0x1bc2b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x1bc2b8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bc2b8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc2bc: 0x0  nop
    ctx->pc = 0x1bc2bcu;
    // NOP
    // 0x1bc2c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc2c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc2c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc2c8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BC2C8u;
    SET_GPR_U32(ctx, 31, 0x1BC2D0u);
    ctx->pc = 0x1BC2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2C8u;
            // 0x1bc2cc: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2D0u; }
        if (ctx->pc != 0x1BC2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2D0u; }
        if (ctx->pc != 0x1BC2D0u) { return; }
    }
    ctx->pc = 0x1BC2D0u;
label_1bc2d0:
    // 0x1bc2d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc2d4: 0xc04d2dc  jal         func_134B70
    ctx->pc = 0x1BC2D4u;
    SET_GPR_U32(ctx, 31, 0x1BC2DCu);
    ctx->pc = 0x1BC2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2D4u;
            // 0x1bc2d8: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B70u;
    if (runtime->hasFunction(0x134B70u)) {
        auto targetFn = runtime->lookupFunction(0x134B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2DCu; }
        if (ctx->pc != 0x1BC2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFPf_0x134b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2DCu; }
        if (ctx->pc != 0x1BC2DCu) { return; }
    }
    ctx->pc = 0x1BC2DCu;
label_1bc2dc:
    // 0x1bc2dc: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1bc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x1bc2e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc2e4: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc2e8: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1bc2e8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1bc2ec: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC2ECu;
    SET_GPR_U32(ctx, 31, 0x1BC2F4u);
    ctx->pc = 0x1BC2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2ECu;
            // 0x1bc2f0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2F4u; }
        if (ctx->pc != 0x1BC2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2F4u; }
        if (ctx->pc != 0x1BC2F4u) { return; }
    }
    ctx->pc = 0x1BC2F4u;
label_1bc2f4:
    // 0x1bc2f4: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc2f8: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC2F8u;
    SET_GPR_U32(ctx, 31, 0x1BC300u);
    ctx->pc = 0x1BC2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2F8u;
            // 0x1bc2fc: 0x4600a582  mul.s       $f22, $f20, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC300u; }
        if (ctx->pc != 0x1BC300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC300u; }
        if (ctx->pc != 0x1BC300u) { return; }
    }
    ctx->pc = 0x1BC300u;
label_1bc300:
    // 0x1bc300: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1bc300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1bc304: 0x4600b041  sub.s       $f1, $f22, $f0
    ctx->pc = 0x1bc304u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1bc308: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1bc308u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc30c: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc314: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc318: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC318u;
    SET_GPR_U32(ctx, 31, 0x1BC320u);
    ctx->pc = 0x1BC31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC318u;
            // 0x1bc31c: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC320u; }
        if (ctx->pc != 0x1BC320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC320u; }
        if (ctx->pc != 0x1BC320u) { return; }
    }
    ctx->pc = 0x1BC320u;
label_1bc320:
    // 0x1bc320: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc324: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC324u;
    SET_GPR_U32(ctx, 31, 0x1BC32Cu);
    ctx->pc = 0x1BC328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC324u;
            // 0x1bc328: 0x4600ad82  mul.s       $f22, $f21, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC32Cu; }
        if (ctx->pc != 0x1BC32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC32Cu; }
        if (ctx->pc != 0x1BC32Cu) { return; }
    }
    ctx->pc = 0x1BC32Cu;
label_1bc32c:
    // 0x1bc32c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1bc32cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bc330: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc334: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x1bc334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1bc338: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1bc338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc33c: 0x4600b040  add.s       $f1, $f22, $f0
    ctx->pc = 0x1bc33cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x1bc340: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bc340u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc344: 0x0  nop
    ctx->pc = 0x1bc344u;
    // NOP
    // 0x1bc348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc34c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc350: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BC350u;
    SET_GPR_U32(ctx, 31, 0x1BC358u);
    ctx->pc = 0x1BC354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC350u;
            // 0x1bc354: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC358u; }
        if (ctx->pc != 0x1BC358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC358u; }
        if (ctx->pc != 0x1BC358u) { return; }
    }
    ctx->pc = 0x1BC358u;
label_1bc358:
    // 0x1bc358: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc35c: 0xc04d2dc  jal         func_134B70
    ctx->pc = 0x1BC35Cu;
    SET_GPR_U32(ctx, 31, 0x1BC364u);
    ctx->pc = 0x1BC360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC35Cu;
            // 0x1bc360: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B70u;
    if (runtime->hasFunction(0x134B70u)) {
        auto targetFn = runtime->lookupFunction(0x134B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC364u; }
        if (ctx->pc != 0x1BC364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFPf_0x134b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC364u; }
        if (ctx->pc != 0x1BC364u) { return; }
    }
    ctx->pc = 0x1BC364u;
label_1bc364:
    // 0x1bc364: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1bc364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x1bc368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc36c: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc370: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC370u;
    SET_GPR_U32(ctx, 31, 0x1BC378u);
    ctx->pc = 0x1BC374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC370u;
            // 0x1bc374: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC378u; }
        if (ctx->pc != 0x1BC378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC378u; }
        if (ctx->pc != 0x1BC378u) { return; }
    }
    ctx->pc = 0x1BC378u;
label_1bc378:
    // 0x1bc378: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc37c: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC37Cu;
    SET_GPR_U32(ctx, 31, 0x1BC384u);
    ctx->pc = 0x1BC380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC37Cu;
            // 0x1bc380: 0x4600a582  mul.s       $f22, $f20, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC384u; }
        if (ctx->pc != 0x1BC384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC384u; }
        if (ctx->pc != 0x1BC384u) { return; }
    }
    ctx->pc = 0x1BC384u;
label_1bc384:
    // 0x1bc384: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1bc384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1bc388: 0x4600b081  sub.s       $f2, $f22, $f0
    ctx->pc = 0x1bc388u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1bc38c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1bc38cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc390: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc394: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1bc394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc398: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1bc398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1bc39c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC39Cu;
    SET_GPR_U32(ctx, 31, 0x1BC3A4u);
    ctx->pc = 0x1BC3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC39Cu;
            // 0x1bc3a0: 0xe7a00290  swc1        $f0, 0x290($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3A4u; }
        if (ctx->pc != 0x1BC3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3A4u; }
        if (ctx->pc != 0x1BC3A4u) { return; }
    }
    ctx->pc = 0x1BC3A4u;
label_1bc3a4:
    // 0x1bc3a4: 0xc78c8d58  lwc1        $f12, -0x72A8($gp)
    ctx->pc = 0x1bc3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc3a8: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BC3A8u;
    SET_GPR_U32(ctx, 31, 0x1BC3B0u);
    ctx->pc = 0x1BC3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3A8u;
            // 0x1bc3ac: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3B0u; }
        if (ctx->pc != 0x1BC3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3B0u; }
        if (ctx->pc != 0x1BC3B0u) { return; }
    }
    ctx->pc = 0x1BC3B0u;
label_1bc3b0:
    // 0x1bc3b0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1bc3b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bc3b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc3b8: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x1bc3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1bc3bc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1bc3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc3c0: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1bc3c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1bc3c4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bc3c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc3c8: 0x0  nop
    ctx->pc = 0x1bc3c8u;
    // NOP
    // 0x1bc3cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc3ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc3d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc3d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc3d4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BC3D4u;
    SET_GPR_U32(ctx, 31, 0x1BC3DCu);
    ctx->pc = 0x1BC3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3D4u;
            // 0x1bc3d8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3DCu; }
        if (ctx->pc != 0x1BC3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3DCu; }
        if (ctx->pc != 0x1BC3DCu) { return; }
    }
    ctx->pc = 0x1BC3DCu;
label_1bc3dc:
    // 0x1bc3dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc3e0: 0xc04d2dc  jal         func_134B70
    ctx->pc = 0x1BC3E0u;
    SET_GPR_U32(ctx, 31, 0x1BC3E8u);
    ctx->pc = 0x1BC3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3E0u;
            // 0x1bc3e4: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B70u;
    if (runtime->hasFunction(0x134B70u)) {
        auto targetFn = runtime->lookupFunction(0x134B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3E8u; }
        if (ctx->pc != 0x1BC3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFPf_0x134b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3E8u; }
        if (ctx->pc != 0x1BC3E8u) { return; }
    }
    ctx->pc = 0x1BC3E8u;
label_1bc3e8:
    // 0x1bc3e8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BC3E8u;
    SET_GPR_U32(ctx, 31, 0x1BC3F0u);
    ctx->pc = 0x1BC3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3E8u;
            // 0x1bc3ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3F0u; }
        if (ctx->pc != 0x1BC3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3F0u; }
        if (ctx->pc != 0x1BC3F0u) { return; }
    }
    ctx->pc = 0x1BC3F0u;
label_1bc3f0:
    // 0x1bc3f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bc3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc3f4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1bc3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1bc3f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bc3f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc3fc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1bc3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bc400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bc400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc404: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1bc404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bc408: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bc408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc40c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC40Cu;
            // 0x1bc410: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC414u;
}
