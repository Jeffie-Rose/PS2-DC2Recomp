#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CFireAfterHitFv
// Address: 0x1bfa50 - 0x1bfee4
void Draw__13CFireAfterHitFv_0x1bfa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CFireAfterHitFv_0x1bfa50");
#endif

    switch (ctx->pc) {
        case 0x1bfa90u: goto label_1bfa90;
        case 0x1bfaa0u: goto label_1bfaa0;
        case 0x1bfaa8u: goto label_1bfaa8;
        case 0x1bfab4u: goto label_1bfab4;
        case 0x1bfac0u: goto label_1bfac0;
        case 0x1bfaccu: goto label_1bfacc;
        case 0x1bfad8u: goto label_1bfad8;
        case 0x1bfae4u: goto label_1bfae4;
        case 0x1bfaf0u: goto label_1bfaf0;
        case 0x1bfafcu: goto label_1bfafc;
        case 0x1bfb08u: goto label_1bfb08;
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb3cu: goto label_1bfb3c;
        case 0x1bfb58u: goto label_1bfb58;
        case 0x1bfb70u: goto label_1bfb70;
        case 0x1bfb80u: goto label_1bfb80;
        case 0x1bfb8cu: goto label_1bfb8c;
        case 0x1bfb9cu: goto label_1bfb9c;
        case 0x1bfba8u: goto label_1bfba8;
        case 0x1bfbc0u: goto label_1bfbc0;
        case 0x1bfbd0u: goto label_1bfbd0;
        case 0x1bfbdcu: goto label_1bfbdc;
        case 0x1bfbe8u: goto label_1bfbe8;
        case 0x1bfbf4u: goto label_1bfbf4;
        case 0x1bfc2cu: goto label_1bfc2c;
        case 0x1bfce8u: goto label_1bfce8;
        case 0x1bfcfcu: goto label_1bfcfc;
        case 0x1bfd18u: goto label_1bfd18;
        case 0x1bfd3cu: goto label_1bfd3c;
        case 0x1bfd4cu: goto label_1bfd4c;
        case 0x1bfd58u: goto label_1bfd58;
        case 0x1bfd68u: goto label_1bfd68;
        case 0x1bfd74u: goto label_1bfd74;
        case 0x1bfda0u: goto label_1bfda0;
        case 0x1bfdb0u: goto label_1bfdb0;
        case 0x1bfdbcu: goto label_1bfdbc;
        case 0x1bfdccu: goto label_1bfdcc;
        case 0x1bfdd8u: goto label_1bfdd8;
        case 0x1bfdf0u: goto label_1bfdf0;
        case 0x1bfe00u: goto label_1bfe00;
        case 0x1bfe30u: goto label_1bfe30;
        case 0x1bfe5cu: goto label_1bfe5c;
        case 0x1bfe6cu: goto label_1bfe6c;
        case 0x1bfe78u: goto label_1bfe78;
        case 0x1bfe88u: goto label_1bfe88;
        case 0x1bfe94u: goto label_1bfe94;
        case 0x1bfec0u: goto label_1bfec0;
        default: break;
    }

    ctx->pc = 0x1bfa50u;

    // 0x1bfa50: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1bfa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1bfa54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bfa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bfa58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bfa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bfa5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bfa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bfa60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bfa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bfa64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bfa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bfa68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bfa6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bfa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfa70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfa74: 0x10600112  beqz        $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x1BFA74u;
    {
        const bool branch_taken_0x1bfa74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA74u;
            // 0x1bfa78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa74) {
            ctx->pc = 0x1BFEC0u;
            goto label_1bfec0;
        }
    }
    ctx->pc = 0x1BFA7Cu;
    // 0x1bfa7c: 0x8f838ea0  lw          $v1, -0x7160($gp)
    ctx->pc = 0x1bfa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938272)));
    // 0x1bfa80: 0x1060010f  beqz        $v1, . + 4 + (0x10F << 2)
    ctx->pc = 0x1BFA80u;
    {
        const bool branch_taken_0x1bfa80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA80u;
            // 0x1bfa84: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa80) {
            ctx->pc = 0x1BFEC0u;
            goto label_1bfec0;
        }
    }
    ctx->pc = 0x1BFA88u;
    // 0x1bfa88: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BFA88u;
    SET_GPR_U32(ctx, 31, 0x1BFA90u);
    ctx->pc = 0x1BFA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA88u;
            // 0x1bfa8c: 0x263202b0  addiu       $s2, $s1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA90u; }
        if (ctx->pc != 0x1BFA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA90u; }
        if (ctx->pc != 0x1BFA90u) { return; }
    }
    ctx->pc = 0x1BFA90u;
label_1bfa90:
    // 0x1bfa90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfa94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfa94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa98: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BFA98u;
    SET_GPR_U32(ctx, 31, 0x1BFAA0u);
    ctx->pc = 0x1BFA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA98u;
            // 0x1bfa9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAA0u; }
        if (ctx->pc != 0x1BFAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAA0u; }
        if (ctx->pc != 0x1BFAA0u) { return; }
    }
    ctx->pc = 0x1BFAA0u;
label_1bfaa0:
    // 0x1bfaa0: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BFAA0u;
    SET_GPR_U32(ctx, 31, 0x1BFAA8u);
    ctx->pc = 0x1BFAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAA0u;
            // 0x1bfaa4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAA8u; }
        if (ctx->pc != 0x1BFAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAA8u; }
        if (ctx->pc != 0x1BFAA8u) { return; }
    }
    ctx->pc = 0x1BFAA8u;
label_1bfaa8:
    // 0x1bfaa8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfaac: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1BFAACu;
    SET_GPR_U32(ctx, 31, 0x1BFAB4u);
    ctx->pc = 0x1BFAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAACu;
            // 0x1bfab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB4u; }
        if (ctx->pc != 0x1BFAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB4u; }
        if (ctx->pc != 0x1BFAB4u) { return; }
    }
    ctx->pc = 0x1BFAB4u;
label_1bfab4:
    // 0x1bfab4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfab8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1BFAB8u;
    SET_GPR_U32(ctx, 31, 0x1BFAC0u);
    ctx->pc = 0x1BFABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAB8u;
            // 0x1bfabc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAC0u; }
        if (ctx->pc != 0x1BFAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAC0u; }
        if (ctx->pc != 0x1BFAC0u) { return; }
    }
    ctx->pc = 0x1BFAC0u;
label_1bfac0:
    // 0x1bfac0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfac4: 0xc04d424  jal         func_135090
    ctx->pc = 0x1BFAC4u;
    SET_GPR_U32(ctx, 31, 0x1BFACCu);
    ctx->pc = 0x1BFAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAC4u;
            // 0x1bfac8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFACCu; }
        if (ctx->pc != 0x1BFACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFACCu; }
        if (ctx->pc != 0x1BFACCu) { return; }
    }
    ctx->pc = 0x1BFACCu;
label_1bfacc:
    // 0x1bfacc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfad0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1BFAD0u;
    SET_GPR_U32(ctx, 31, 0x1BFAD8u);
    ctx->pc = 0x1BFAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAD0u;
            // 0x1bfad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAD8u; }
        if (ctx->pc != 0x1BFAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAD8u; }
        if (ctx->pc != 0x1BFAD8u) { return; }
    }
    ctx->pc = 0x1BFAD8u;
label_1bfad8:
    // 0x1bfad8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfadc: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1BFADCu;
    SET_GPR_U32(ctx, 31, 0x1BFAE4u);
    ctx->pc = 0x1BFAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFADCu;
            // 0x1bfae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAE4u; }
        if (ctx->pc != 0x1BFAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAE4u; }
        if (ctx->pc != 0x1BFAE4u) { return; }
    }
    ctx->pc = 0x1BFAE4u;
label_1bfae4:
    // 0x1bfae4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfae8: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1BFAE8u;
    SET_GPR_U32(ctx, 31, 0x1BFAF0u);
    ctx->pc = 0x1BFAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAE8u;
            // 0x1bfaec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAF0u; }
        if (ctx->pc != 0x1BFAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAF0u; }
        if (ctx->pc != 0x1BFAF0u) { return; }
    }
    ctx->pc = 0x1BFAF0u;
label_1bfaf0:
    // 0x1bfaf0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfaf4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BFAF4u;
    SET_GPR_U32(ctx, 31, 0x1BFAFCu);
    ctx->pc = 0x1BFAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAF4u;
            // 0x1bfaf8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAFCu; }
        if (ctx->pc != 0x1BFAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAFCu; }
        if (ctx->pc != 0x1BFAFCu) { return; }
    }
    ctx->pc = 0x1BFAFCu;
label_1bfafc:
    // 0x1bfafc: 0x8f858ea0  lw          $a1, -0x7160($gp)
    ctx->pc = 0x1bfafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938272)));
    // 0x1bfb00: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BFB00u;
    SET_GPR_U32(ctx, 31, 0x1BFB08u);
    ctx->pc = 0x1BFB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB00u;
            // 0x1bfb04: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB08u; }
        if (ctx->pc != 0x1BFB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB08u; }
        if (ctx->pc != 0x1BFB08u) { return; }
    }
    ctx->pc = 0x1BFB08u;
label_1bfb08:
    // 0x1bfb08: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1bfb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bfb0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bfb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bfb10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfb14: 0x29840  sll         $s3, $v0, 1
    ctx->pc = 0x1bfb14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bfb18: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1bfb18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1bfb1c: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1BFB1Cu;
    {
        const bool branch_taken_0x1bfb1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB1Cu;
            // 0x1bfb20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb1c) {
            ctx->pc = 0x1BFBB8u;
            goto label_1bfbb8;
        }
    }
    ctx->pc = 0x1BFB24u;
label_1bfb24:
    // 0x1bfb24: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x1bfb24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bfb28: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BFB28u;
    {
        const bool branch_taken_0x1bfb28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BFB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB28u;
            // 0x1bfb2c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb28) {
            ctx->pc = 0x1BFBA8u;
            goto label_1bfba8;
        }
    }
    ctx->pc = 0x1BFB30u;
    // 0x1bfb30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bfb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb34: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1BFB34u;
    SET_GPR_U32(ctx, 31, 0x1BFB3Cu);
    ctx->pc = 0x1BFB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB34u;
            // 0x1bfb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB3Cu; }
        if (ctx->pc != 0x1BFB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        trans_float_to_sceVector__FPfPfi_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB3Cu; }
        if (ctx->pc != 0x1BFB3Cu) { return; }
    }
    ctx->pc = 0x1BFB3Cu;
label_1bfb3c:
    // 0x1bfb3c: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x1bfb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfb40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bfb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bfb44: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bfb48: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1bfb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bfb4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bfb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb50: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1BFB50u;
    SET_GPR_U32(ctx, 31, 0x1BFB58u);
    ctx->pc = 0x1BFB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB50u;
            // 0x1bfb54: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB58u; }
        if (ctx->pc != 0x1BFB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB58u; }
        if (ctx->pc != 0x1BFB58u) { return; }
    }
    ctx->pc = 0x1BFB58u;
label_1bfb58:
    // 0x1bfb58: 0x86480010  lh          $t0, 0x10($s2)
    ctx->pc = 0x1bfb58u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bfb5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bfb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bfb60: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfb64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bfb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb68: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BFB68u;
    SET_GPR_U32(ctx, 31, 0x1BFB70u);
    ctx->pc = 0x1BFB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB68u;
            // 0x1bfb6c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB70u; }
        if (ctx->pc != 0x1BFB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB70u; }
        if (ctx->pc != 0x1BFB70u) { return; }
    }
    ctx->pc = 0x1BFB70u;
label_1bfb70:
    // 0x1bfb70: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1bfb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bfb74: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfb78: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BFB78u;
    SET_GPR_U32(ctx, 31, 0x1BFB80u);
    ctx->pc = 0x1BFB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB78u;
            // 0x1bfb7c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB80u; }
        if (ctx->pc != 0x1BFB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB80u; }
        if (ctx->pc != 0x1BFB80u) { return; }
    }
    ctx->pc = 0x1BFB80u;
label_1bfb80:
    // 0x1bfb80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfb84: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BFB84u;
    SET_GPR_U32(ctx, 31, 0x1BFB8Cu);
    ctx->pc = 0x1BFB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB84u;
            // 0x1bfb88: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB8Cu; }
        if (ctx->pc != 0x1BFB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB8Cu; }
        if (ctx->pc != 0x1BFB8Cu) { return; }
    }
    ctx->pc = 0x1BFB8Cu;
label_1bfb8c:
    // 0x1bfb8c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bfb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bfb90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfb94: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BFB94u;
    SET_GPR_U32(ctx, 31, 0x1BFB9Cu);
    ctx->pc = 0x1BFB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB94u;
            // 0x1bfb98: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB9Cu; }
        if (ctx->pc != 0x1BFB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB9Cu; }
        if (ctx->pc != 0x1BFB9Cu) { return; }
    }
    ctx->pc = 0x1BFB9Cu;
label_1bfb9c:
    // 0x1bfb9c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfba0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BFBA0u;
    SET_GPR_U32(ctx, 31, 0x1BFBA8u);
    ctx->pc = 0x1BFBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBA0u;
            // 0x1bfba4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBA8u; }
        if (ctx->pc != 0x1BFBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBA8u; }
        if (ctx->pc != 0x1BFBA8u) { return; }
    }
    ctx->pc = 0x1BFBA8u;
label_1bfba8:
    // 0x1bfba8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bfba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bfbac: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1bfbacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1bfbb0: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BFBB0u;
    {
        const bool branch_taken_0x1bfbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBB0u;
            // 0x1bfbb4: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbb0) {
            ctx->pc = 0x1BFB24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bfb24;
        }
    }
    ctx->pc = 0x1BFBB8u;
label_1bfbb8:
    // 0x1bfbb8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BFBB8u;
    SET_GPR_U32(ctx, 31, 0x1BFBC0u);
    ctx->pc = 0x1BFBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBB8u;
            // 0x1bfbbc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBC0u; }
        if (ctx->pc != 0x1BFBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBC0u; }
        if (ctx->pc != 0x1BFBC0u) { return; }
    }
    ctx->pc = 0x1BFBC0u;
label_1bfbc0:
    // 0x1bfbc0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfbc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bfbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfbc8: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1BFBC8u;
    SET_GPR_U32(ctx, 31, 0x1BFBD0u);
    ctx->pc = 0x1BFBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBC8u;
            // 0x1bfbcc: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBD0u; }
        if (ctx->pc != 0x1BFBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBD0u; }
        if (ctx->pc != 0x1BFBD0u) { return; }
    }
    ctx->pc = 0x1BFBD0u;
label_1bfbd0:
    // 0x1bfbd0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfbd4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BFBD4u;
    SET_GPR_U32(ctx, 31, 0x1BFBDCu);
    ctx->pc = 0x1BFBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBD4u;
            // 0x1bfbd8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBDCu; }
        if (ctx->pc != 0x1BFBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBDCu; }
        if (ctx->pc != 0x1BFBDCu) { return; }
    }
    ctx->pc = 0x1BFBDCu;
label_1bfbdc:
    // 0x1bfbdc: 0x8f858ea0  lw          $a1, -0x7160($gp)
    ctx->pc = 0x1bfbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938272)));
    // 0x1bfbe0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BFBE0u;
    SET_GPR_U32(ctx, 31, 0x1BFBE8u);
    ctx->pc = 0x1BFBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBE0u;
            // 0x1bfbe4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBE8u; }
        if (ctx->pc != 0x1BFBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBE8u; }
        if (ctx->pc != 0x1BFBE8u) { return; }
    }
    ctx->pc = 0x1BFBE8u;
label_1bfbe8:
    // 0x1bfbe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bfbe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbec: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1BFBECu;
    {
        const bool branch_taken_0x1bfbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBECu;
            // 0x1bfbf0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbec) {
            ctx->pc = 0x1BFEA4u;
            goto label_1bfea4;
        }
    }
    ctx->pc = 0x1BFBF4u;
label_1bfbf4:
    // 0x1bfbf4: 0x86620020  lh          $v0, 0x20($s3)
    ctx->pc = 0x1bfbf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1bfbf8: 0x184000a6  blez        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1BFBF8u;
    {
        const bool branch_taken_0x1bfbf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1bfbf8) {
            ctx->pc = 0x1BFE94u;
            goto label_1bfe94;
        }
    }
    ctx->pc = 0x1BFC00u;
    // 0x1bfc00: 0x82620027  lb          $v0, 0x27($s3)
    ctx->pc = 0x1bfc00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
    // 0x1bfc04: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x1bfc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bfc08: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1BFC08u;
    {
        const bool branch_taken_0x1bfc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc08) {
            ctx->pc = 0x1BFE94u;
            goto label_1bfe94;
        }
    }
    ctx->pc = 0x1BFC10u;
    // 0x1bfc10: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x1bfc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfc14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bfc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bfc18: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1bfc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bfc1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bfc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bfc20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc24: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1BFC24u;
    SET_GPR_U32(ctx, 31, 0x1BFC2Cu);
    ctx->pc = 0x1BFC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC24u;
            // 0x1bfc28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC2Cu; }
        if (ctx->pc != 0x1BFC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC2Cu; }
        if (ctx->pc != 0x1BFC2Cu) { return; }
    }
    ctx->pc = 0x1BFC2Cu;
label_1bfc2c:
    // 0x1bfc2c: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1BFC2Cu;
    {
        const bool branch_taken_0x1bfc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc2c) {
            ctx->pc = 0x1BFE94u;
            goto label_1bfe94;
        }
    }
    ctx->pc = 0x1BFC34u;
    // 0x1bfc34: 0x86620022  lh          $v0, 0x22($s3)
    ctx->pc = 0x1bfc34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1bfc38: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1bfc38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bfc3c: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1BFC3Cu;
    {
        const bool branch_taken_0x1bfc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc3c) {
            ctx->pc = 0x1BFD84u;
            goto label_1bfd84;
        }
    }
    ctx->pc = 0x1BFC44u;
    // 0x1bfc44: 0x82630026  lb          $v1, 0x26($s3)
    ctx->pc = 0x1bfc44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x1bfc48: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x1bfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1bfc4c: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x1bfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1bfc50: 0x2464fffd  addiu       $a0, $v1, -0x3
    ctx->pc = 0x1bfc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1bfc54: 0x2465fffe  addiu       $a1, $v1, -0x2
    ctx->pc = 0x1bfc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1bfc58: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFC58u;
    {
        const bool branch_taken_0x1bfc58 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1BFC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC58u;
            // 0x1bfc5c: 0x2468ffff  addiu       $t0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc58) {
            ctx->pc = 0x1BFC64u;
            goto label_1bfc64;
        }
    }
    ctx->pc = 0x1BFC60u;
    // 0x1bfc60: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x1bfc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
label_1bfc64:
    // 0x1bfc64: 0x0  nop
    ctx->pc = 0x1bfc64u;
    // NOP
    // 0x1bfc68: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFC68u;
    {
        const bool branch_taken_0x1bfc68 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1bfc68) {
            ctx->pc = 0x1BFC74u;
            goto label_1bfc74;
        }
    }
    ctx->pc = 0x1BFC70u;
    // 0x1bfc70: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1bfc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_1bfc74:
    // 0x1bfc74: 0x0  nop
    ctx->pc = 0x1bfc74u;
    // NOP
    // 0x1bfc78: 0x5010002  bgez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFC78u;
    {
        const bool branch_taken_0x1bfc78 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1bfc78) {
            ctx->pc = 0x1BFC84u;
            goto label_1bfc84;
        }
    }
    ctx->pc = 0x1BFC80u;
    // 0x1bfc80: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x1bfc80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
label_1bfc84:
    // 0x1bfc84: 0x0  nop
    ctx->pc = 0x1bfc84u;
    // NOP
    // 0x1bfc88: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1bfc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
    // 0x1bfc8c: 0x2463f210  addiu       $v1, $v1, -0xDF0
    ctx->pc = 0x1bfc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963728));
    // 0x1bfc90: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x1bfc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1bfc94: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1bfc94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bfc98: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1bfc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfc9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bfc9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfca0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bfca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfca4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1bfca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bfca8: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1bfca8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x1bfcac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bfcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bfcb0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1bfcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bfcb4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bfcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bfcb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bfcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bfcbc: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1bfcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bfcc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfcc4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1bfcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfcc8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1bfcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1bfccc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1bfcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1bfcd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfcd4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1bfcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1bfcd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfcdc: 0xafa501e0  sw          $a1, 0x1E0($sp)
    ctx->pc = 0x1bfcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 5));
    // 0x1bfce0: 0xafa401e4  sw          $a0, 0x1E4($sp)
    ctx->pc = 0x1bfce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    // 0x1bfce4: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x1bfce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_1bfce8:
    // 0x1bfce8: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1bfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1bfcec: 0x8c4501e0  lw          $a1, 0x1E0($v0)
    ctx->pc = 0x1bfcecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x1bfcf0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bfcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bfcf4: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1BFCF4u;
    SET_GPR_U32(ctx, 31, 0x1BFCFCu);
    ctx->pc = 0x1BFCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCF4u;
            // 0x1bfcf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCFCu; }
        if (ctx->pc != 0x1BFCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        trans_float_to_sceVector__FPfPfi_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCFCu; }
        if (ctx->pc != 0x1BFCFCu) { return; }
    }
    ctx->pc = 0x1BFCFCu;
label_1bfcfc:
    // 0x1bfcfc: 0xc4ac000c  lwc1        $f12, 0xC($a1)
    ctx->pc = 0x1bfcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfd00: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bfd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bfd04: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1bfd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bfd08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bfd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd0c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1bfd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bfd10: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1BFD10u;
    SET_GPR_U32(ctx, 31, 0x1BFD18u);
    ctx->pc = 0x1BFD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD10u;
            // 0x1bfd14: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD18u; }
        if (ctx->pc != 0x1BFD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD18u; }
        if (ctx->pc != 0x1BFD18u) { return; }
    }
    ctx->pc = 0x1BFD18u;
label_1bfd18:
    // 0x1bfd18: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bfd1c: 0x86680020  lh          $t0, 0x20($s3)
    ctx->pc = 0x1bfd1cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1bfd20: 0x24428d38  addiu       $v0, $v0, -0x72C8
    ctx->pc = 0x1bfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937912));
    // 0x1bfd24: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfd28: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1bfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1bfd2c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bfd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bfd30: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bfd30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfd34: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BFD34u;
    SET_GPR_U32(ctx, 31, 0x1BFD3Cu);
    ctx->pc = 0x1BFD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD34u;
            // 0x1bfd38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD3Cu; }
        if (ctx->pc != 0x1BFD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD3Cu; }
        if (ctx->pc != 0x1BFD3Cu) { return; }
    }
    ctx->pc = 0x1BFD3Cu;
label_1bfd3c:
    // 0x1bfd3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfd40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1bfd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bfd44: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BFD44u;
    SET_GPR_U32(ctx, 31, 0x1BFD4Cu);
    ctx->pc = 0x1BFD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD44u;
            // 0x1bfd48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD4Cu; }
        if (ctx->pc != 0x1BFD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD4Cu; }
        if (ctx->pc != 0x1BFD4Cu) { return; }
    }
    ctx->pc = 0x1BFD4Cu;
label_1bfd4c:
    // 0x1bfd4c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfd50: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BFD50u;
    SET_GPR_U32(ctx, 31, 0x1BFD58u);
    ctx->pc = 0x1BFD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD50u;
            // 0x1bfd54: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD58u; }
        if (ctx->pc != 0x1BFD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD58u; }
        if (ctx->pc != 0x1BFD58u) { return; }
    }
    ctx->pc = 0x1BFD58u;
label_1bfd58:
    // 0x1bfd58: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfd5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bfd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bfd60: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BFD60u;
    SET_GPR_U32(ctx, 31, 0x1BFD68u);
    ctx->pc = 0x1BFD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD60u;
            // 0x1bfd64: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD68u; }
        if (ctx->pc != 0x1BFD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD68u; }
        if (ctx->pc != 0x1BFD68u) { return; }
    }
    ctx->pc = 0x1BFD68u;
label_1bfd68:
    // 0x1bfd68: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfd6c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BFD6Cu;
    SET_GPR_U32(ctx, 31, 0x1BFD74u);
    ctx->pc = 0x1BFD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD6Cu;
            // 0x1bfd70: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD74u; }
        if (ctx->pc != 0x1BFD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD74u; }
        if (ctx->pc != 0x1BFD74u) { return; }
    }
    ctx->pc = 0x1BFD74u;
label_1bfd74:
    // 0x1bfd74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bfd74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1bfd78: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1bfd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bfd7c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1BFD7Cu;
    {
        const bool branch_taken_0x1bfd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD7Cu;
            // 0x1bfd80: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd7c) {
            ctx->pc = 0x1BFCE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bfce8;
        }
    }
    ctx->pc = 0x1BFD84u;
label_1bfd84:
    // 0x1bfd84: 0x0  nop
    ctx->pc = 0x1bfd84u;
    // NOP
    // 0x1bfd88: 0x86680020  lh          $t0, 0x20($s3)
    ctx->pc = 0x1bfd88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1bfd8c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bfd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bfd90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfd94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bfd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd98: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BFD98u;
    SET_GPR_U32(ctx, 31, 0x1BFDA0u);
    ctx->pc = 0x1BFD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD98u;
            // 0x1bfd9c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDA0u; }
        if (ctx->pc != 0x1BFDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDA0u; }
        if (ctx->pc != 0x1BFDA0u) { return; }
    }
    ctx->pc = 0x1BFDA0u;
label_1bfda0:
    // 0x1bfda0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfda4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfda8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BFDA8u;
    SET_GPR_U32(ctx, 31, 0x1BFDB0u);
    ctx->pc = 0x1BFDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDA8u;
            // 0x1bfdac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDB0u; }
        if (ctx->pc != 0x1BFDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDB0u; }
        if (ctx->pc != 0x1BFDB0u) { return; }
    }
    ctx->pc = 0x1BFDB0u;
label_1bfdb0:
    // 0x1bfdb0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfdb4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BFDB4u;
    SET_GPR_U32(ctx, 31, 0x1BFDBCu);
    ctx->pc = 0x1BFDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDB4u;
            // 0x1bfdb8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDBCu; }
        if (ctx->pc != 0x1BFDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDBCu; }
        if (ctx->pc != 0x1BFDBCu) { return; }
    }
    ctx->pc = 0x1BFDBCu;
label_1bfdbc:
    // 0x1bfdbc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1bfdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bfdc0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfdc4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BFDC4u;
    SET_GPR_U32(ctx, 31, 0x1BFDCCu);
    ctx->pc = 0x1BFDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDC4u;
            // 0x1bfdc8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDCCu; }
        if (ctx->pc != 0x1BFDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDCCu; }
        if (ctx->pc != 0x1BFDCCu) { return; }
    }
    ctx->pc = 0x1BFDCCu;
label_1bfdcc:
    // 0x1bfdcc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfdd0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BFDD0u;
    SET_GPR_U32(ctx, 31, 0x1BFDD8u);
    ctx->pc = 0x1BFDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDD0u;
            // 0x1bfdd4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDD8u; }
        if (ctx->pc != 0x1BFDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDD8u; }
        if (ctx->pc != 0x1BFDD8u) { return; }
    }
    ctx->pc = 0x1BFDD8u;
label_1bfdd8:
    // 0x1bfdd8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1bfdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1bfddc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bfddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bfde0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bfde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bfde4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bfde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bfde8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1BFDE8u;
    SET_GPR_U32(ctx, 31, 0x1BFDF0u);
    ctx->pc = 0x1BFDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDE8u;
            // 0x1bfdec: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDF0u; }
        if (ctx->pc != 0x1BFDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDF0u; }
        if (ctx->pc != 0x1BFDF0u) { return; }
    }
    ctx->pc = 0x1BFDF0u;
label_1bfdf0:
    // 0x1bfdf0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bfdf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bfdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfdf8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1BFDF8u;
    SET_GPR_U32(ctx, 31, 0x1BFE00u);
    ctx->pc = 0x1BFDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDF8u;
            // 0x1bfdfc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE00u; }
        if (ctx->pc != 0x1BFE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE00u; }
        if (ctx->pc != 0x1BFE00u) { return; }
    }
    ctx->pc = 0x1BFE00u;
label_1bfe00:
    // 0x1bfe00: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bfe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bfe04: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x1bfe04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x1bfe08: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1bfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x1bfe0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bfe0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfe10: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x1bfe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfe14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bfe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bfe18: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1bfe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bfe1c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1bfe1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bfe20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bfe20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe24: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1bfe24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bfe28: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1BFE28u;
    SET_GPR_U32(ctx, 31, 0x1BFE30u);
    ctx->pc = 0x1BFE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE28u;
            // 0x1bfe2c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE30u; }
        if (ctx->pc != 0x1BFE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE30u; }
        if (ctx->pc != 0x1BFE30u) { return; }
    }
    ctx->pc = 0x1BFE30u;
label_1bfe30:
    // 0x1bfe30: 0x86620020  lh          $v0, 0x20($s3)
    ctx->pc = 0x1bfe30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1bfe34: 0x24040  sll         $t0, $v0, 1
    ctx->pc = 0x1bfe34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bfe38: 0x29010100  slti        $at, $t0, 0x100
    ctx->pc = 0x1bfe38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bfe3c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFE3Cu;
    {
        const bool branch_taken_0x1bfe3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe3c) {
            ctx->pc = 0x1BFE48u;
            goto label_1bfe48;
        }
    }
    ctx->pc = 0x1BFE44u;
    // 0x1bfe44: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1bfe44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bfe48:
    // 0x1bfe48: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bfe48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bfe4c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfe50: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bfe50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe54: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BFE54u;
    SET_GPR_U32(ctx, 31, 0x1BFE5Cu);
    ctx->pc = 0x1BFE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE54u;
            // 0x1bfe58: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE5Cu; }
        if (ctx->pc != 0x1BFE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE5Cu; }
        if (ctx->pc != 0x1BFE5Cu) { return; }
    }
    ctx->pc = 0x1BFE5Cu;
label_1bfe5c:
    // 0x1bfe5c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfe60: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1bfe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bfe64: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BFE64u;
    SET_GPR_U32(ctx, 31, 0x1BFE6Cu);
    ctx->pc = 0x1BFE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE64u;
            // 0x1bfe68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE6Cu; }
        if (ctx->pc != 0x1BFE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE6Cu; }
        if (ctx->pc != 0x1BFE6Cu) { return; }
    }
    ctx->pc = 0x1BFE6Cu;
label_1bfe6c:
    // 0x1bfe6c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfe70: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BFE70u;
    SET_GPR_U32(ctx, 31, 0x1BFE78u);
    ctx->pc = 0x1BFE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE70u;
            // 0x1bfe74: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE78u; }
        if (ctx->pc != 0x1BFE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE78u; }
        if (ctx->pc != 0x1BFE78u) { return; }
    }
    ctx->pc = 0x1BFE78u;
label_1bfe78:
    // 0x1bfe78: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfe7c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bfe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bfe80: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BFE80u;
    SET_GPR_U32(ctx, 31, 0x1BFE88u);
    ctx->pc = 0x1BFE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE80u;
            // 0x1bfe84: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE88u; }
        if (ctx->pc != 0x1BFE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE88u; }
        if (ctx->pc != 0x1BFE88u) { return; }
    }
    ctx->pc = 0x1BFE88u;
label_1bfe88:
    // 0x1bfe88: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bfe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bfe8c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1BFE8Cu;
    SET_GPR_U32(ctx, 31, 0x1BFE94u);
    ctx->pc = 0x1BFE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE8Cu;
            // 0x1bfe90: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE94u; }
        if (ctx->pc != 0x1BFE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE94u; }
        if (ctx->pc != 0x1BFE94u) { return; }
    }
    ctx->pc = 0x1BFE94u;
label_1bfe94:
    // 0x1bfe94: 0x0  nop
    ctx->pc = 0x1bfe94u;
    // NOP
    // 0x1bfe98: 0x26b50078  addiu       $s5, $s5, 0x78
    ctx->pc = 0x1bfe98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
    // 0x1bfe9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bfe9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bfea0: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x1bfea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1bfea4:
    // 0x1bfea4: 0x0  nop
    ctx->pc = 0x1bfea4u;
    // NOP
    // 0x1bfea8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bfeac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1bfeacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bfeb0: 0x1440ff50  bnez        $v0, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x1BFEB0u;
    {
        const bool branch_taken_0x1bfeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEB0u;
            // 0x1bfeb4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfeb0) {
            ctx->pc = 0x1BFBF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bfbf4;
        }
    }
    ctx->pc = 0x1BFEB8u;
    // 0x1bfeb8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BFEB8u;
    SET_GPR_U32(ctx, 31, 0x1BFEC0u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEC0u; }
        if (ctx->pc != 0x1BFEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEC0u; }
        if (ctx->pc != 0x1BFEC0u) { return; }
    }
    ctx->pc = 0x1BFEC0u;
label_1bfec0:
    // 0x1bfec0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bfec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfec4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bfec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfec8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bfec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfecc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bfeccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfedc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEDCu;
            // 0x1bfee0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFEE4u;
}
