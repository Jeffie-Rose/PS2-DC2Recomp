#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TexAnime__15mgCTextureAnimeFiP13sceVif1Packet
// Address: 0x13bd90 - 0x13d1e8
void TexAnime__15mgCTextureAnimeFiP13sceVif1Packet_0x13bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TexAnime__15mgCTextureAnimeFiP13sceVif1Packet_0x13bd90");
#endif

    switch (ctx->pc) {
        case 0x13bdecu: goto label_13bdec;
        case 0x13bdfcu: goto label_13bdfc;
        case 0x13be14u: goto label_13be14;
        case 0x13be28u: goto label_13be28;
        case 0x13be44u: goto label_13be44;
        case 0x13be50u: goto label_13be50;
        case 0x13be5cu: goto label_13be5c;
        case 0x13be68u: goto label_13be68;
        case 0x13beb0u: goto label_13beb0;
        case 0x13bed8u: goto label_13bed8;
        case 0x13bee8u: goto label_13bee8;
        case 0x13bef4u: goto label_13bef4;
        case 0x13bf08u: goto label_13bf08;
        case 0x13bf18u: goto label_13bf18;
        case 0x13bf28u: goto label_13bf28;
        case 0x13bf38u: goto label_13bf38;
        case 0x13bf48u: goto label_13bf48;
        case 0x13bf54u: goto label_13bf54;
        case 0x13bfd4u: goto label_13bfd4;
        case 0x13c008u: goto label_13c008;
        case 0x13c020u: goto label_13c020;
        case 0x13c040u: goto label_13c040;
        case 0x13c050u: goto label_13c050;
        case 0x13c068u: goto label_13c068;
        case 0x13c088u: goto label_13c088;
        case 0x13c09cu: goto label_13c09c;
        case 0x13c0b8u: goto label_13c0b8;
        case 0x13c1f0u: goto label_13c1f0;
        case 0x13c210u: goto label_13c210;
        case 0x13c25cu: goto label_13c25c;
        case 0x13c284u: goto label_13c284;
        case 0x13c30cu: goto label_13c30c;
        case 0x13c31cu: goto label_13c31c;
        case 0x13c32cu: goto label_13c32c;
        case 0x13c348u: goto label_13c348;
        case 0x13c35cu: goto label_13c35c;
        case 0x13c374u: goto label_13c374;
        case 0x13c398u: goto label_13c398;
        case 0x13c3c0u: goto label_13c3c0;
        case 0x13c3ccu: goto label_13c3cc;
        case 0x13c3e4u: goto label_13c3e4;
        case 0x13c564u: goto label_13c564;
        case 0x13c5ccu: goto label_13c5cc;
        case 0x13c63cu: goto label_13c63c;
        case 0x13c658u: goto label_13c658;
        case 0x13c7b8u: goto label_13c7b8;
        case 0x13c820u: goto label_13c820;
        case 0x13c87cu: goto label_13c87c;
        case 0x13c8e0u: goto label_13c8e0;
        case 0x13c930u: goto label_13c930;
        case 0x13c994u: goto label_13c994;
        case 0x13c9e4u: goto label_13c9e4;
        case 0x13ca00u: goto label_13ca00;
        case 0x13ca98u: goto label_13ca98;
        case 0x13cab4u: goto label_13cab4;
        case 0x13cad0u: goto label_13cad0;
        case 0x13cb2cu: goto label_13cb2c;
        case 0x13cb4cu: goto label_13cb4c;
        case 0x13cba4u: goto label_13cba4;
        case 0x13cbc4u: goto label_13cbc4;
        case 0x13cc1cu: goto label_13cc1c;
        case 0x13cc3cu: goto label_13cc3c;
        case 0x13cc94u: goto label_13cc94;
        case 0x13cd1cu: goto label_13cd1c;
        case 0x13cd2cu: goto label_13cd2c;
        case 0x13cd3cu: goto label_13cd3c;
        case 0x13cd58u: goto label_13cd58;
        case 0x13cd6cu: goto label_13cd6c;
        case 0x13cd84u: goto label_13cd84;
        case 0x13cd98u: goto label_13cd98;
        case 0x13cdb0u: goto label_13cdb0;
        case 0x13cdc0u: goto label_13cdc0;
        case 0x13cdd4u: goto label_13cdd4;
        case 0x13cdecu: goto label_13cdec;
        case 0x13ce00u: goto label_13ce00;
        case 0x13ce18u: goto label_13ce18;
        case 0x13ce28u: goto label_13ce28;
        case 0x13ce3cu: goto label_13ce3c;
        case 0x13ce54u: goto label_13ce54;
        case 0x13ce68u: goto label_13ce68;
        case 0x13ce80u: goto label_13ce80;
        case 0x13ce90u: goto label_13ce90;
        case 0x13cea4u: goto label_13cea4;
        case 0x13cebcu: goto label_13cebc;
        case 0x13ced0u: goto label_13ced0;
        case 0x13cee8u: goto label_13cee8;
        case 0x13cef4u: goto label_13cef4;
        case 0x13cf0cu: goto label_13cf0c;
        case 0x13d160u: goto label_13d160;
        case 0x13d170u: goto label_13d170;
        case 0x13d188u: goto label_13d188;
        case 0x13d19cu: goto label_13d19c;
        case 0x13d1a8u: goto label_13d1a8;
        case 0x13d1b4u: goto label_13d1b4;
        default: break;
    }

    ctx->pc = 0x13bd90u;

    // 0x13bd90: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x13bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x13bd94: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13bd98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13bd9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13bd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13bda0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13bda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13bda4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13bda8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13bdac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13bdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13bdb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13bdb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bdb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bdbc: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x13bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
    // 0x13bdc0: 0xafa50158  sw          $a1, 0x158($sp)
    ctx->pc = 0x13bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
    // 0x13bdc4: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x13bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x13bdc8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x13bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13bdcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BDCCu;
    {
        const bool branch_taken_0x13bdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bdcc) {
            ctx->pc = 0x13BDDCu;
            goto label_13bddc;
        }
    }
    ctx->pc = 0x13BDD4u;
    // 0x13bdd4: 0x8f828774  lw          $v0, -0x788C($gp)
    ctx->pc = 0x13bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x13bdd8: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x13bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_13bddc:
    // 0x13bddc: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13bde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bde4: 0xc041ae4  jal         func_106B90
    ctx->pc = 0x13BDE4u;
    SET_GPR_U32(ctx, 31, 0x13BDECu);
    ctx->pc = 0x106B90u;
    if (runtime->hasFunction(0x106B90u)) {
        auto targetFn = runtime->lookupFunction(0x106B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BDECu; }
        if (ctx->pc != 0x13BDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCnt_0x106b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BDECu; }
        if (ctx->pc != 0x13BDECu) { return; }
    }
    ctx->pc = 0x13BDECu;
label_13bdec:
    // 0x13bdec: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13bdf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bdf4: 0xc041b2c  jal         func_106CB0
    ctx->pc = 0x13BDF4u;
    SET_GPR_U32(ctx, 31, 0x13BDFCu);
    ctx->pc = 0x106CB0u;
    if (runtime->hasFunction(0x106CB0u)) {
        auto targetFn = runtime->lookupFunction(0x106CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BDFCu; }
        if (ctx->pc != 0x13BDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenDirectCode_0x106cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BDFCu; }
        if (ctx->pc != 0x13BDFCu) { return; }
    }
    ctx->pc = 0x13BDFCu;
label_13bdfc:
    // 0x13bdfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13be00: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x13be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x13be04: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13be04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13be08: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x13be08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13be0c: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x13BE0Cu;
    SET_GPR_U32(ctx, 31, 0x13BE14u);
    ctx->pc = 0x106D38u;
    if (runtime->hasFunction(0x106D38u)) {
        auto targetFn = runtime->lookupFunction(0x106D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE14u; }
        if (ctx->pc != 0x13BE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenGifTag_0x106d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE14u; }
        if (ctx->pc != 0x13BE14u) { return; }
    }
    ctx->pc = 0x13BE14u;
label_13be14:
    // 0x13be14: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13be14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13be18: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x13be18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13be1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13be1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be20: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x13BE20u;
    SET_GPR_U32(ctx, 31, 0x13BE28u);
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE28u; }
        if (ctx->pc != 0x13BE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE28u; }
        if (ctx->pc != 0x13BE28u) { return; }
    }
    ctx->pc = 0x13BE28u;
label_13be28:
    // 0x13be28: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13be2c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x13be2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x13be30: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13be30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13be34: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x13be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13be38: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x13be38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13be3c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x13BE3Cu;
    SET_GPR_U32(ctx, 31, 0x13BE44u);
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE44u; }
        if (ctx->pc != 0x13BE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE44u; }
        if (ctx->pc != 0x13BE44u) { return; }
    }
    ctx->pc = 0x13BE44u;
label_13be44:
    // 0x13be44: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13be44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13be48: 0xc041b54  jal         func_106D50
    ctx->pc = 0x13BE48u;
    SET_GPR_U32(ctx, 31, 0x13BE50u);
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE50u; }
        if (ctx->pc != 0x13BE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseGifTag_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE50u; }
        if (ctx->pc != 0x13BE50u) { return; }
    }
    ctx->pc = 0x13BE50u;
label_13be50:
    // 0x13be50: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13be54: 0xc041b42  jal         func_106D08
    ctx->pc = 0x13BE54u;
    SET_GPR_U32(ctx, 31, 0x13BE5Cu);
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE5Cu; }
        if (ctx->pc != 0x13BE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseDirectCode_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE5Cu; }
        if (ctx->pc != 0x13BE5Cu) { return; }
    }
    ctx->pc = 0x13BE5Cu;
label_13be5c:
    // 0x13be5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13be5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13BE60u;
    {
        const bool branch_taken_0x13be60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be60) {
            ctx->pc = 0x13BEB4u;
            goto label_13beb4;
        }
    }
    ctx->pc = 0x13BE68u;
label_13be68:
    // 0x13be68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x13be68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13be6c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x13be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x13be70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13be70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13be74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13be78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13BE78u;
    {
        const bool branch_taken_0x13be78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be78) {
            ctx->pc = 0x13BEB0u;
            goto label_13beb0;
        }
    }
    ctx->pc = 0x13BE80u;
    // 0x13be80: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x13be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x13be84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13BE84u;
    {
        const bool branch_taken_0x13be84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be84) {
            ctx->pc = 0x13BEB0u;
            goto label_13beb0;
        }
    }
    ctx->pc = 0x13BE8Cu;
    // 0x13be8c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x13be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13be90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BE90u;
    {
        const bool branch_taken_0x13be90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be90) {
            ctx->pc = 0x13BEB0u;
            goto label_13beb0;
        }
    }
    ctx->pc = 0x13BE98u;
    // 0x13be98: 0x80450002  lb          $a1, 0x2($v0)
    ctx->pc = 0x13be98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x13be9c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BE9Cu;
    {
        const bool branch_taken_0x13be9c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x13be9c) {
            ctx->pc = 0x13BEB0u;
            goto label_13beb0;
        }
    }
    ctx->pc = 0x13BEA4u;
    // 0x13bea4: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x13bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x13bea8: 0xc04f600  jal         func_13D800
    ctx->pc = 0x13BEA8u;
    SET_GPR_U32(ctx, 31, 0x13BEB0u);
    ctx->pc = 0x13D800u;
    if (runtime->hasFunction(0x13D800u)) {
        auto targetFn = runtime->lookupFunction(0x13D800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEB0u; }
        if (ctx->pc != 0x13BEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enable__15mgCTextureAnimeFi_0x13d800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEB0u; }
        if (ctx->pc != 0x13BEB0u) { return; }
    }
    ctx->pc = 0x13BEB0u;
label_13beb0:
    // 0x13beb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13beb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13beb4:
    // 0x13beb4: 0x0  nop
    ctx->pc = 0x13beb4u;
    // NOP
    // 0x13beb8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x13beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x13bebc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bec0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13bec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13bec4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x13BEC4u;
    {
        const bool branch_taken_0x13bec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bec4) {
            ctx->pc = 0x13BE68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13be68;
        }
    }
    ctx->pc = 0x13BECCu;
    // 0x13becc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x13beccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x13bed0: 0xc04e214  jal         func_138850
    ctx->pc = 0x13BED0u;
    SET_GPR_U32(ctx, 31, 0x13BED8u);
    ctx->pc = 0x138850u;
    if (runtime->hasFunction(0x138850u)) {
        auto targetFn = runtime->lookupFunction(0x138850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BED8u; }
        if (ctx->pc != 0x13BED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCDrawEnvFv_0x138850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BED8u; }
        if (ctx->pc != 0x13BED8u) { return; }
    }
    ctx->pc = 0x13BED8u;
label_13bed8:
    // 0x13bed8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x13bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x13bedc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bee0: 0xc04e22c  jal         func_1388B0
    ctx->pc = 0x13BEE0u;
    SET_GPR_U32(ctx, 31, 0x13BEE8u);
    ctx->pc = 0x1388B0u;
    if (runtime->hasFunction(0x1388B0u)) {
        auto targetFn = runtime->lookupFunction(0x1388B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEE8u; }
        if (ctx->pc != 0x13BEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCDrawEnvFi_0x1388b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEE8u; }
        if (ctx->pc != 0x13BEE8u) { return; }
    }
    ctx->pc = 0x13BEE8u;
label_13bee8:
    // 0x13bee8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13beec: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x13BEECu;
    SET_GPR_U32(ctx, 31, 0x13BEF4u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEF4u; }
        if (ctx->pc != 0x13BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEF4u; }
        if (ctx->pc != 0x13BEF4u) { return; }
    }
    ctx->pc = 0x13BEF4u;
label_13bef4:
    // 0x13bef4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13bef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13befc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13befcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf00: 0xc04d104  jal         func_134410
    ctx->pc = 0x13BF00u;
    SET_GPR_U32(ctx, 31, 0x13BF08u);
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF08u; }
        if (ctx->pc != 0x13BF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF08u; }
        if (ctx->pc != 0x13BF08u) { return; }
    }
    ctx->pc = 0x13BF08u;
label_13bf08:
    // 0x13bf08: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13bf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf10: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x13BF10u;
    SET_GPR_U32(ctx, 31, 0x13BF18u);
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF18u; }
        if (ctx->pc != 0x13BF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF18u; }
        if (ctx->pc != 0x13BF18u) { return; }
    }
    ctx->pc = 0x13BF18u;
label_13bf18:
    // 0x13bf18: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13bf1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bf20: 0xc04d424  jal         func_135090
    ctx->pc = 0x13BF20u;
    SET_GPR_U32(ctx, 31, 0x13BF28u);
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF28u; }
        if (ctx->pc != 0x13BF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF28u; }
        if (ctx->pc != 0x13BF28u) { return; }
    }
    ctx->pc = 0x13BF28u;
label_13bf28:
    // 0x13bf28: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13bf2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bf30: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x13BF30u;
    SET_GPR_U32(ctx, 31, 0x13BF38u);
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF38u; }
        if (ctx->pc != 0x13BF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF38u; }
        if (ctx->pc != 0x13BF38u) { return; }
    }
    ctx->pc = 0x13BF38u;
label_13bf38:
    // 0x13bf38: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13bf3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bf40: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x13BF40u;
    SET_GPR_U32(ctx, 31, 0x13BF48u);
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF48u; }
        if (ctx->pc != 0x13BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF48u; }
        if (ctx->pc != 0x13BF48u) { return; }
    }
    ctx->pc = 0x13BF48u;
label_13bf48:
    // 0x13bf48: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x13bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x13bf4c: 0x10000479  b           . + 4 + (0x479 << 2)
    ctx->pc = 0x13BF4Cu;
    {
        const bool branch_taken_0x13bf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf4c) {
            ctx->pc = 0x13D134u;
            goto label_13d134;
        }
    }
    ctx->pc = 0x13BF54u;
label_13bf54:
    // 0x13bf54: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13bf58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13bf5c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x13bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x13bf60: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x13bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13bf64: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x13bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x13bf68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13bf6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13bf70: 0x1040046d  beqz        $v0, . + 4 + (0x46D << 2)
    ctx->pc = 0x13BF70u;
    {
        const bool branch_taken_0x13bf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf70) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13BF78u;
    // 0x13bf78: 0x246200c4  addiu       $v0, $v1, 0xC4
    ctx->pc = 0x13bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
    // 0x13bf7c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x13bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x13bf80: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x13bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x13bf84: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x13bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x13bf88: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x13bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13bf8c: 0x10400466  beqz        $v0, . + 4 + (0x466 << 2)
    ctx->pc = 0x13BF8Cu;
    {
        const bool branch_taken_0x13bf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf8c) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13BF94u;
    // 0x13bf94: 0x24540008  addiu       $s4, $v0, 0x8
    ctx->pc = 0x13bf94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13bf98: 0x12800463  beqz        $s4, . + 4 + (0x463 << 2)
    ctx->pc = 0x13BF98u;
    {
        const bool branch_taken_0x13bf98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf98) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13BFA0u;
    // 0x13bfa0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13bfa4: 0x10400460  beqz        $v0, . + 4 + (0x460 << 2)
    ctx->pc = 0x13BFA4u;
    {
        const bool branch_taken_0x13bfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bfa4) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13BFACu;
    // 0x13bfac: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x13bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13bfb0: 0x1080045d  beqz        $a0, . + 4 + (0x45D << 2)
    ctx->pc = 0x13BFB0u;
    {
        const bool branch_taken_0x13bfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bfb0) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13BFB8u;
    // 0x13bfb8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x13bfb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bfbc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x13bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x13bfc0: 0x14620459  bne         $v1, $v0, . + 4 + (0x459 << 2)
    ctx->pc = 0x13BFC0u;
    {
        const bool branch_taken_0x13bfc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13bfc0) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13BFC8u;
    // 0x13bfc8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x13bfc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13bfcc: 0x14620456  bne         $v1, $v0, . + 4 + (0x456 << 2)
    ctx->pc = 0x13BFCCu;
    {
        const bool branch_taken_0x13bfcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13bfcc) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13BFD4u;
label_13bfd4:
    // 0x13bfd4: 0x0  nop
    ctx->pc = 0x13bfd4u;
    // NOP
    // 0x13bfd8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13bfdc: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x13bfdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x13bfe0: 0x28420018  slti        $v0, $v0, 0x18
    ctx->pc = 0x13bfe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13bfe4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x13BFE4u;
    {
        const bool branch_taken_0x13bfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfe4) {
            ctx->pc = 0x13C0B8u;
            goto label_13c0b8;
        }
    }
    ctx->pc = 0x13BFECu;
    // 0x13bfec: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x13bfecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x13bff0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BFF0u;
    {
        const bool branch_taken_0x13bff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bff0) {
            ctx->pc = 0x13C010u;
            goto label_13c010;
        }
    }
    ctx->pc = 0x13BFF8u;
    // 0x13bff8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13bffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c000: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x13C000u;
    SET_GPR_U32(ctx, 31, 0x13C008u);
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C008u; }
        if (ctx->pc != 0x13C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C008u; }
        if (ctx->pc != 0x13C008u) { return; }
    }
    ctx->pc = 0x13C008u;
label_13c008:
    // 0x13c008: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13C008u;
    {
        const bool branch_taken_0x13c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c008) {
            ctx->pc = 0x13C020u;
            goto label_13c020;
        }
    }
    ctx->pc = 0x13C010u;
label_13c010:
    // 0x13c010: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c018: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x13C018u;
    SET_GPR_U32(ctx, 31, 0x13C020u);
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C020u; }
        if (ctx->pc != 0x13C020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C020u; }
        if (ctx->pc != 0x13C020u) { return; }
    }
    ctx->pc = 0x13C020u;
label_13c020:
    // 0x13c020: 0x8283002d  lb          $v1, 0x2D($s4)
    ctx->pc = 0x13c020u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 45)));
    // 0x13c024: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13c028: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13C028u;
    {
        const bool branch_taken_0x13c028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c028) {
            ctx->pc = 0x13C058u;
            goto label_13c058;
        }
    }
    ctx->pc = 0x13C030u;
    // 0x13c030: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c038: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x13C038u;
    SET_GPR_U32(ctx, 31, 0x13C040u);
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C040u; }
        if (ctx->pc != 0x13C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C040u; }
        if (ctx->pc != 0x13C040u) { return; }
    }
    ctx->pc = 0x13C040u;
label_13c040:
    // 0x13c040: 0x8285002d  lb          $a1, 0x2D($s4)
    ctx->pc = 0x13c040u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 45)));
    // 0x13c044: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c048: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x13C048u;
    SET_GPR_U32(ctx, 31, 0x13C050u);
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C050u; }
        if (ctx->pc != 0x13C050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C050u; }
        if (ctx->pc != 0x13C050u) { return; }
    }
    ctx->pc = 0x13C050u;
label_13c050:
    // 0x13c050: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13C050u;
    {
        const bool branch_taken_0x13c050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c050) {
            ctx->pc = 0x13C068u;
            goto label_13c068;
        }
    }
    ctx->pc = 0x13C058u;
label_13c058:
    // 0x13c058: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c060: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x13C060u;
    SET_GPR_U32(ctx, 31, 0x13C068u);
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C068u; }
        if (ctx->pc != 0x13C068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C068u; }
        if (ctx->pc != 0x13C068u) { return; }
    }
    ctx->pc = 0x13C068u;
label_13c068:
    // 0x13c068: 0x8283002e  lb          $v1, 0x2E($s4)
    ctx->pc = 0x13c068u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 46)));
    // 0x13c06c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c070: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13C070u;
    {
        const bool branch_taken_0x13c070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c070) {
            ctx->pc = 0x13C0A4u;
            goto label_13c0a4;
        }
    }
    ctx->pc = 0x13C078u;
    // 0x13c078: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c07c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c080: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x13C080u;
    SET_GPR_U32(ctx, 31, 0x13C088u);
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C088u; }
        if (ctx->pc != 0x13C088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C088u; }
        if (ctx->pc != 0x13C088u) { return; }
    }
    ctx->pc = 0x13C088u;
label_13c088:
    // 0x13c088: 0x8285002e  lb          $a1, 0x2E($s4)
    ctx->pc = 0x13c088u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 46)));
    // 0x13c08c: 0x9286002f  lbu         $a2, 0x2F($s4)
    ctx->pc = 0x13c08cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 47)));
    // 0x13c090: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c094: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x13C094u;
    SET_GPR_U32(ctx, 31, 0x13C09Cu);
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C09Cu; }
        if (ctx->pc != 0x13C09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C09Cu; }
        if (ctx->pc != 0x13C09Cu) { return; }
    }
    ctx->pc = 0x13C09Cu;
label_13c09c:
    // 0x13c09c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C09Cu;
    {
        const bool branch_taken_0x13c09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c09c) {
            ctx->pc = 0x13C0B8u;
            goto label_13c0b8;
        }
    }
    ctx->pc = 0x13C0A4u;
label_13c0a4:
    // 0x13c0a4: 0x0  nop
    ctx->pc = 0x13c0a4u;
    // NOP
    // 0x13c0a8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c0b0: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x13C0B0u;
    SET_GPR_U32(ctx, 31, 0x13C0B8u);
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C0B8u; }
        if (ctx->pc != 0x13C0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C0B8u; }
        if (ctx->pc != 0x13C0B8u) { return; }
    }
    ctx->pc = 0x13C0B8u;
label_13c0b8:
    // 0x13c0b8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x13c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13c0bc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x13c0bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x13c0c0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13c0c4: 0x14430052  bne         $v0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x13C0C4u;
    {
        const bool branch_taken_0x13c0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13c0c4) {
            ctx->pc = 0x13C210u;
            goto label_13c210;
        }
    }
    ctx->pc = 0x13C0CCu;
    // 0x13c0cc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13c0d0: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x13c0d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x13c0d4: 0x1443004e  bne         $v0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x13C0D4u;
    {
        const bool branch_taken_0x13c0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13c0d4) {
            ctx->pc = 0x13C210u;
            goto label_13c210;
        }
    }
    ctx->pc = 0x13C0DCu;
    // 0x13c0dc: 0x82820003  lb          $v0, 0x3($s4)
    ctx->pc = 0x13c0dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x13c0e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C0E0u;
    {
        const bool branch_taken_0x13c0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c0e0) {
            ctx->pc = 0x13C108u;
            goto label_13c108;
        }
    }
    ctx->pc = 0x13C0E8u;
    // 0x13c0e8: 0x86830010  lh          $v1, 0x10($s4)
    ctx->pc = 0x13c0e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x13c0ec: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x13c0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x13c0f0: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x13C0F0u;
    {
        const bool branch_taken_0x13c0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13c0f0) {
            ctx->pc = 0x13C210u;
            goto label_13c210;
        }
    }
    ctx->pc = 0x13C0F8u;
    // 0x13c0f8: 0x86830012  lh          $v1, 0x12($s4)
    ctx->pc = 0x13c0f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x13c0fc: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x13c0fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13c100: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x13C100u;
    {
        const bool branch_taken_0x13c100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13c100) {
            ctx->pc = 0x13C210u;
            goto label_13c210;
        }
    }
    ctx->pc = 0x13C108u;
label_13c108:
    // 0x13c108: 0xdc820038  ld          $v0, 0x38($a0)
    ctx->pc = 0x13c108u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x13c10c: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x13c10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x13c110: 0x21cbe  dsrl32      $v1, $v0, 18
    ctx->pc = 0x13c110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x13c114: 0x97a20330  lhu         $v0, 0x330($sp)
    ctx->pc = 0x13c114u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x13c118: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x13c118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x13c11c: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x13c11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x13c120: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x13c120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x13c124: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13c124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13c128: 0xa7a20330  sh          $v0, 0x330($sp)
    ctx->pc = 0x13c128u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 816), (uint16_t)GPR_U32(ctx, 2));
    // 0x13c12c: 0xdfa60330  ld          $a2, 0x330($sp)
    ctx->pc = 0x13c12cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x13c130: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x13c130u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13c134: 0x223b8  dsll        $a0, $v0, 14
    ctx->pc = 0x13c134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 14);
    // 0x13c138: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x13c138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x13c13c: 0x34433fff  ori         $v1, $v0, 0x3FFF
    ctx->pc = 0x13c13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x13c140: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x13c140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13c144: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13c144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13c148: 0xffa20330  sd          $v0, 0x330($sp)
    ctx->pc = 0x13c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 2));
    // 0x13c14c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13c150: 0x9042003e  lbu         $v0, 0x3E($v0)
    ctx->pc = 0x13c150u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x13c154: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x13c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x13c158: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x13c158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x13c15c: 0x97a60332  lhu         $a2, 0x332($sp)
    ctx->pc = 0x13c15cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 818)));
    // 0x13c160: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x13c160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x13c164: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x13c164u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c168: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x13c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x13c16c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x13c16cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x13c170: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x13c170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x13c174: 0xa7a60332  sh          $a2, 0x332($sp)
    ctx->pc = 0x13c174u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 818), (uint16_t)GPR_U32(ctx, 6));
    // 0x13c178: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x13c178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13c17c: 0xdcc60038  ld          $a2, 0x38($a2)
    ctx->pc = 0x13c17cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x13c180: 0x63378  dsll        $a2, $a2, 13
    ctx->pc = 0x13c180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 13);
    // 0x13c184: 0x634be  dsrl32      $a2, $a2, 18
    ctx->pc = 0x13c184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 18));
    // 0x13c188: 0x97a70338  lhu         $a3, 0x338($sp)
    ctx->pc = 0x13c188u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x13c18c: 0x30c63fff  andi        $a2, $a2, 0x3FFF
    ctx->pc = 0x13c18cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x13c190: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x13c190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x13c194: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x13c194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x13c198: 0xa7a50338  sh          $a1, 0x338($sp)
    ctx->pc = 0x13c198u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 824), (uint16_t)GPR_U32(ctx, 5));
    // 0x13c19c: 0xdfa50338  ld          $a1, 0x338($sp)
    ctx->pc = 0x13c19cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x13c1a0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x13c1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x13c1a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13c1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13c1a8: 0xffa30338  sd          $v1, 0x338($sp)
    ctx->pc = 0x13c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 824), GPR_U64(ctx, 3));
    // 0x13c1ac: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x13c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13c1b0: 0x9063003e  lbu         $v1, 0x3E($v1)
    ctx->pc = 0x13c1b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x13c1b4: 0x31e7c  dsll32      $v1, $v1, 25
    ctx->pc = 0x13c1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 25));
    // 0x13c1b8: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x13c1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x13c1bc: 0x97a4033a  lhu         $a0, 0x33A($sp)
    ctx->pc = 0x13c1bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 826)));
    // 0x13c1c0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x13c1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x13c1c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13c1c8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13c1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13c1cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13c1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13c1d0: 0xa7a2033a  sh          $v0, 0x33A($sp)
    ctx->pc = 0x13c1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 826), (uint16_t)GPR_U32(ctx, 2));
    // 0x13c1d4: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x13c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x13c1d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c1e0: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x13c1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13c1e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x13c1e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c1e8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13C1E8u;
    SET_GPR_U32(ctx, 31, 0x13C1F0u);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1F0u; }
        if (ctx->pc != 0x13C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C1F0u; }
        if (ctx->pc != 0x13C1F0u) { return; }
    }
    ctx->pc = 0x13C1F0u;
label_13c1f0:
    // 0x13c1f0: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x13c1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x13c1f4: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x13c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x13c1f8: 0x27a60338  addiu       $a2, $sp, 0x338
    ctx->pc = 0x13c1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x13c1fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13c1fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13c200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c204: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13c204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c208: 0xc051168  jal         func_1445A0
    ctx->pc = 0x13C208u;
    SET_GPR_U32(ctx, 31, 0x13C210u);
    ctx->pc = 0x1445A0u;
    if (runtime->hasFunction(0x1445A0u)) {
        auto targetFn = runtime->lookupFunction(0x1445A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C210u; }
        if (ctx->pc != 0x13C210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0iii_0x1445a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C210u; }
        if (ctx->pc != 0x13C210u) { return; }
    }
    ctx->pc = 0x13C210u;
label_13c210:
    // 0x13c210: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x13c210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13c214: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x13C214u;
    {
        const bool branch_taken_0x13c214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c214) {
            ctx->pc = 0x13C3E4u;
            goto label_13c3e4;
        }
    }
    ctx->pc = 0x13C21Cu;
    // 0x13c21c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x13c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13c220: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x13c220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x13c224: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x13c224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13c228: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x13C228u;
    {
        const bool branch_taken_0x13c228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c228) {
            ctx->pc = 0x13C28Cu;
            goto label_13c28c;
        }
    }
    ctx->pc = 0x13C230u;
    // 0x13c230: 0x8686000e  lh          $a2, 0xE($s4)
    ctx->pc = 0x13c230u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13c234: 0x86820012  lh          $v0, 0x12($s4)
    ctx->pc = 0x13c234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x13c238: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x13c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13c23c: 0x2448fff0  addiu       $t0, $v0, -0x10
    ctx->pc = 0x13c23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x13c240: 0x8685000c  lh          $a1, 0xC($s4)
    ctx->pc = 0x13c240u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13c244: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x13c244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x13c248: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x13c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13c24c: 0x2447fff0  addiu       $a3, $v0, -0x10
    ctx->pc = 0x13c24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x13c250: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x13c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x13c254: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13C254u;
    SET_GPR_U32(ctx, 31, 0x13C25Cu);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C25Cu; }
        if (ctx->pc != 0x13C25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C25Cu; }
        if (ctx->pc != 0x13C25Cu) { return; }
    }
    ctx->pc = 0x13C25Cu;
label_13c25c:
    // 0x13c25c: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x13c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x13c260: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13c264: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13c268: 0x86870014  lh          $a3, 0x14($s4)
    ctx->pc = 0x13c268u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13c26c: 0x86880016  lh          $t0, 0x16($s4)
    ctx->pc = 0x13c26cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13c270: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x13c270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x13c274: 0x24460038  addiu       $a2, $v0, 0x38
    ctx->pc = 0x13c274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x13c278: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13c278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c27c: 0xc051168  jal         func_1445A0
    ctx->pc = 0x13C27Cu;
    SET_GPR_U32(ctx, 31, 0x13C284u);
    ctx->pc = 0x1445A0u;
    if (runtime->hasFunction(0x1445A0u)) {
        auto targetFn = runtime->lookupFunction(0x1445A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C284u; }
        if (ctx->pc != 0x13C284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0iii_0x1445a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C284u; }
        if (ctx->pc != 0x13C284u) { return; }
    }
    ctx->pc = 0x13C284u;
label_13c284:
    // 0x13c284: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x13C284u;
    {
        const bool branch_taken_0x13c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c284) {
            ctx->pc = 0x13C3E4u;
            goto label_13c3e4;
        }
    }
    ctx->pc = 0x13C28Cu;
label_13c28c:
    // 0x13c28c: 0x0  nop
    ctx->pc = 0x13c28cu;
    // NOP
    // 0x13c290: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x13c290u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13c294: 0x30c4003f  andi        $a0, $a2, 0x3F
    ctx->pc = 0x13c294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x13c298: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C298u;
    {
        const bool branch_taken_0x13c298 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x13c298) {
            ctx->pc = 0x13C2ACu;
            goto label_13c2ac;
        }
    }
    ctx->pc = 0x13C2A0u;
    // 0x13c2a0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C2A0u;
    {
        const bool branch_taken_0x13c2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c2a0) {
            ctx->pc = 0x13C2ACu;
            goto label_13c2ac;
        }
    }
    ctx->pc = 0x13C2A8u;
    // 0x13c2a8: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x13c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_13c2ac:
    // 0x13c2ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C2ACu;
    {
        const bool branch_taken_0x13c2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c2ac) {
            ctx->pc = 0x13C2C0u;
            goto label_13c2c0;
        }
    }
    ctx->pc = 0x13C2B4u;
    // 0x13c2b4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x13c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13c2b8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x13c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13c2bc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x13c2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_13c2c0:
    // 0x13c2c0: 0x24650038  addiu       $a1, $v1, 0x38
    ctx->pc = 0x13c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x13c2c4: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x13c2c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x13c2c8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x13c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x13c2cc: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x13c2ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
    // 0x13c2d0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C2D0u;
    {
        const bool branch_taken_0x13c2d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13c2d0) {
            ctx->pc = 0x13C2E0u;
            goto label_13c2e0;
        }
    }
    ctx->pc = 0x13C2D8u;
    // 0x13c2d8: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x13c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x13c2dc: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x13c2dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_13c2e0:
    // 0x13c2e0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x13c2e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13c2e4: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x13c2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x13c2e8: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x13c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x13c2ec: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x13c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x13c2f0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x13c2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c2f4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x13c2f4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x13c2f8: 0x9462003a  lhu         $v0, 0x3A($v1)
    ctx->pc = 0x13c2f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x13c2fc: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x13c2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x13c300: 0x23ebe  dsrl32      $a3, $v0, 26
    ctx->pc = 0x13c300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x13c304: 0xc050f18  jal         func_143C60
    ctx->pc = 0x13C304u;
    SET_GPR_U32(ctx, 31, 0x13C30Cu);
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C30Cu; }
        if (ctx->pc != 0x13C30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C30Cu; }
        if (ctx->pc != 0x13C30Cu) { return; }
    }
    ctx->pc = 0x13C30Cu;
label_13c30c:
    // 0x13c30c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c310: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13c310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13c314: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x13C314u;
    SET_GPR_U32(ctx, 31, 0x13C31Cu);
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C31Cu; }
        if (ctx->pc != 0x13C31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C31Cu; }
        if (ctx->pc != 0x13C31Cu) { return; }
    }
    ctx->pc = 0x13C31Cu;
label_13c31c:
    // 0x13c31c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c320: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x13c320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13c324: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x13C324u;
    SET_GPR_U32(ctx, 31, 0x13C32Cu);
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C32Cu; }
        if (ctx->pc != 0x13C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C32Cu; }
        if (ctx->pc != 0x13C32Cu) { return; }
    }
    ctx->pc = 0x13C32Cu;
label_13c32c:
    // 0x13c32c: 0x92850030  lbu         $a1, 0x30($s4)
    ctx->pc = 0x13c32cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x13c330: 0x92860031  lbu         $a2, 0x31($s4)
    ctx->pc = 0x13c330u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x13c334: 0x92870032  lbu         $a3, 0x32($s4)
    ctx->pc = 0x13c334u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 50)));
    // 0x13c338: 0x92880033  lbu         $t0, 0x33($s4)
    ctx->pc = 0x13c338u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 51)));
    // 0x13c33c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c340: 0xc04d320  jal         func_134C80
    ctx->pc = 0x13C340u;
    SET_GPR_U32(ctx, 31, 0x13C348u);
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C348u; }
        if (ctx->pc != 0x13C348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C348u; }
        if (ctx->pc != 0x13C348u) { return; }
    }
    ctx->pc = 0x13C348u;
label_13c348:
    // 0x13c348: 0x8685000c  lh          $a1, 0xC($s4)
    ctx->pc = 0x13c348u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13c34c: 0x8686000e  lh          $a2, 0xE($s4)
    ctx->pc = 0x13c34cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13c350: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c354: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13C354u;
    SET_GPR_U32(ctx, 31, 0x13C35Cu);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C35Cu; }
        if (ctx->pc != 0x13C35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C35Cu; }
        if (ctx->pc != 0x13C35Cu) { return; }
    }
    ctx->pc = 0x13C35Cu;
label_13c35c:
    // 0x13c35c: 0x86850014  lh          $a1, 0x14($s4)
    ctx->pc = 0x13c35cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13c360: 0x86860016  lh          $a2, 0x16($s4)
    ctx->pc = 0x13c360u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13c364: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13c368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c36c: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13C36Cu;
    SET_GPR_U32(ctx, 31, 0x13C374u);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C374u; }
        if (ctx->pc != 0x13C374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C374u; }
        if (ctx->pc != 0x13C374u) { return; }
    }
    ctx->pc = 0x13C374u;
label_13c374:
    // 0x13c374: 0x8683000c  lh          $v1, 0xC($s4)
    ctx->pc = 0x13c374u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13c378: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x13c378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x13c37c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x13c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c380: 0x8683000e  lh          $v1, 0xE($s4)
    ctx->pc = 0x13c380u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13c384: 0x86820012  lh          $v0, 0x12($s4)
    ctx->pc = 0x13c384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x13c388: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x13c388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c38c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c390: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13C390u;
    SET_GPR_U32(ctx, 31, 0x13C398u);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C398u; }
        if (ctx->pc != 0x13C398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C398u; }
        if (ctx->pc != 0x13C398u) { return; }
    }
    ctx->pc = 0x13C398u;
label_13c398:
    // 0x13c398: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x13c398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13c39c: 0x86820018  lh          $v0, 0x18($s4)
    ctx->pc = 0x13c39cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x13c3a0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x13c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c3a4: 0x86830016  lh          $v1, 0x16($s4)
    ctx->pc = 0x13c3a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13c3a8: 0x8682001a  lh          $v0, 0x1A($s4)
    ctx->pc = 0x13c3a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x13c3ac: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x13c3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c3b0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c3b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13c3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3b8: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13C3B8u;
    SET_GPR_U32(ctx, 31, 0x13C3C0u);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C3C0u; }
        if (ctx->pc != 0x13C3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C3C0u; }
        if (ctx->pc != 0x13C3C0u) { return; }
    }
    ctx->pc = 0x13C3C0u;
label_13c3c0:
    // 0x13c3c0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13c3c4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x13C3C4u;
    SET_GPR_U32(ctx, 31, 0x13C3CCu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C3CCu; }
        if (ctx->pc != 0x13C3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C3CCu; }
        if (ctx->pc != 0x13C3CCu) { return; }
    }
    ctx->pc = 0x13C3CCu;
label_13c3cc:
    // 0x13c3cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c3d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13c3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13c3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3d8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x13c3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3dc: 0xc050f18  jal         func_143C60
    ctx->pc = 0x13C3DCu;
    SET_GPR_U32(ctx, 31, 0x13C3E4u);
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C3E4u; }
        if (ctx->pc != 0x13C3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C3E4u; }
        if (ctx->pc != 0x13C3E4u) { return; }
    }
    ctx->pc = 0x13C3E4u;
label_13c3e4:
    // 0x13c3e4: 0x0  nop
    ctx->pc = 0x13c3e4u;
    // NOP
    // 0x13c3e8: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x13c3e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13c3ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c3f0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C3F0u;
    {
        const bool branch_taken_0x13c3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13c3f0) {
            ctx->pc = 0x13C404u;
            goto label_13c404;
        }
    }
    ctx->pc = 0x13C3F8u;
    // 0x13c3f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c3fc: 0x144302fb  bne         $v0, $v1, . + 4 + (0x2FB << 2)
    ctx->pc = 0x13C3FCu;
    {
        const bool branch_taken_0x13c3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13c3fc) {
            ctx->pc = 0x13CFECu;
            goto label_13cfec;
        }
    }
    ctx->pc = 0x13C404u;
label_13c404:
    // 0x13c404: 0x0  nop
    ctx->pc = 0x13c404u;
    // NOP
    // 0x13c408: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x13c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13c40c: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x13c40cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x13c410: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x13c410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13c414: 0x102000ce  beqz        $at, . + 4 + (0xCE << 2)
    ctx->pc = 0x13C414u;
    {
        const bool branch_taken_0x13c414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c414) {
            ctx->pc = 0x13C750u;
            goto label_13c750;
        }
    }
    ctx->pc = 0x13C41Cu;
    // 0x13c41c: 0x8684000c  lh          $a0, 0xC($s4)
    ctx->pc = 0x13c41cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13c420: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x13c420u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x13c424: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x13c424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x13c428: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C428u;
    {
        const bool branch_taken_0x13c428 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13c428) {
            ctx->pc = 0x13C43Cu;
            goto label_13c43c;
        }
    }
    ctx->pc = 0x13C430u;
    // 0x13c430: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x13c430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x13c434: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13c434u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13c438: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x13c438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_13c43c:
    // 0x13c43c: 0x8684000e  lh          $a0, 0xE($s4)
    ctx->pc = 0x13c43cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13c440: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x13c440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x13c444: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x13c444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x13c448: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C448u;
    {
        const bool branch_taken_0x13c448 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13c448) {
            ctx->pc = 0x13C45Cu;
            goto label_13c45c;
        }
    }
    ctx->pc = 0x13C450u;
    // 0x13c450: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x13c450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x13c454: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13c454u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13c458: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x13c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_13c45c:
    // 0x13c45c: 0x86830010  lh          $v1, 0x10($s4)
    ctx->pc = 0x13c45cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x13c460: 0x3a903  sra         $s5, $v1, 4
    ctx->pc = 0x13c460u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13c464: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C464u;
    {
        const bool branch_taken_0x13c464 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13c464) {
            ctx->pc = 0x13C474u;
            goto label_13c474;
        }
    }
    ctx->pc = 0x13C46Cu;
    // 0x13c46c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x13c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x13c470: 0x3a903  sra         $s5, $v1, 4
    ctx->pc = 0x13c470u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 4));
label_13c474:
    // 0x13c474: 0x86830012  lh          $v1, 0x12($s4)
    ctx->pc = 0x13c474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x13c478: 0x3b903  sra         $s7, $v1, 4
    ctx->pc = 0x13c478u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13c47c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C47Cu;
    {
        const bool branch_taken_0x13c47c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13c47c) {
            ctx->pc = 0x13C48Cu;
            goto label_13c48c;
        }
    }
    ctx->pc = 0x13C484u;
    // 0x13c484: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x13c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x13c488: 0x3b903  sra         $s7, $v1, 4
    ctx->pc = 0x13c488u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 3), 4));
label_13c48c:
    // 0x13c48c: 0x86840014  lh          $a0, 0x14($s4)
    ctx->pc = 0x13c48cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13c490: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x13c490u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x13c494: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x13c494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x13c498: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C498u;
    {
        const bool branch_taken_0x13c498 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13c498) {
            ctx->pc = 0x13C4ACu;
            goto label_13c4ac;
        }
    }
    ctx->pc = 0x13C4A0u;
    // 0x13c4a0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x13c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x13c4a4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13c4a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13c4a8: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x13c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_13c4ac:
    // 0x13c4ac: 0x86840016  lh          $a0, 0x16($s4)
    ctx->pc = 0x13c4acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13c4b0: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x13c4b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x13c4b4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x13c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x13c4b8: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C4B8u;
    {
        const bool branch_taken_0x13c4b8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13c4b8) {
            ctx->pc = 0x13C4CCu;
            goto label_13c4cc;
        }
    }
    ctx->pc = 0x13C4C0u;
    // 0x13c4c0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x13c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x13c4c4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13c4c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13c4c8: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x13c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_13c4cc:
    // 0x13c4cc: 0x86830018  lh          $v1, 0x18($s4)
    ctx->pc = 0x13c4ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x13c4d0: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x13c4d0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13c4d4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C4D4u;
    {
        const bool branch_taken_0x13c4d4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13c4d4) {
            ctx->pc = 0x13C4E4u;
            goto label_13c4e4;
        }
    }
    ctx->pc = 0x13C4DCu;
    // 0x13c4dc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x13c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x13c4e0: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x13c4e0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_13c4e4:
    // 0x13c4e4: 0x8683001a  lh          $v1, 0x1A($s4)
    ctx->pc = 0x13c4e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x13c4e8: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x13c4e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13c4ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C4ECu;
    {
        const bool branch_taken_0x13c4ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13c4ec) {
            ctx->pc = 0x13C4FCu;
            goto label_13c4fc;
        }
    }
    ctx->pc = 0x13C4F4u;
    // 0x13c4f4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x13c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x13c4f8: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x13c4f8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
label_13c4fc:
    // 0x13c4fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c500: 0x14430035  bne         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x13C500u;
    {
        const bool branch_taken_0x13c500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13c500) {
            ctx->pc = 0x13C5D8u;
            goto label_13c5d8;
        }
    }
    ctx->pc = 0x13C508u;
    // 0x13c508: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x13c508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13c50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c510: 0x0  nop
    ctx->pc = 0x13c510u;
    // NOP
    // 0x13c514: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13c514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13c518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c51c: 0x0  nop
    ctx->pc = 0x13c51cu;
    // NOP
    // 0x13c520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13c520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c524: 0x0  nop
    ctx->pc = 0x13c524u;
    // NOP
    // 0x13c528: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13C528u;
    {
        const bool branch_taken_0x13c528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c528) {
            ctx->pc = 0x13C534u;
            goto label_13c534;
        }
    }
    ctx->pc = 0x13C530u;
    // 0x13c530: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x13c530u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_13c534:
    // 0x13c534: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x13c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13c538: 0x86820020  lh          $v0, 0x20($s4)
    ctx->pc = 0x13c538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13c53c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x13c53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c544: 0x0  nop
    ctx->pc = 0x13c544u;
    // NOP
    // 0x13c548: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c54c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x13c54cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x13c550: 0x0  nop
    ctx->pc = 0x13c550u;
    // NOP
    // 0x13c554: 0x0  nop
    ctx->pc = 0x13c554u;
    // NOP
    // 0x13c558: 0x0  nop
    ctx->pc = 0x13c558u;
    // NOP
    // 0x13c55c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13C55Cu;
    SET_GPR_U32(ctx, 31, 0x13C564u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C564u; }
        if (ctx->pc != 0x13C564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C564u; }
        if (ctx->pc != 0x13C564u) { return; }
    }
    ctx->pc = 0x13C564u;
label_13c564:
    // 0x13c564: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13c564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c568: 0x8682001e  lh          $v0, 0x1E($s4)
    ctx->pc = 0x13c568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x13c56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c570: 0x0  nop
    ctx->pc = 0x13c570u;
    // NOP
    // 0x13c574: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x13c574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x13c578: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x13c578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x13c57c: 0x86820022  lh          $v0, 0x22($s4)
    ctx->pc = 0x13c57cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x13c580: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x13c580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c588: 0x0  nop
    ctx->pc = 0x13c588u;
    // NOP
    // 0x13c58c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13c58cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13c590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c594: 0x0  nop
    ctx->pc = 0x13c594u;
    // NOP
    // 0x13c598: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13c598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c59c: 0x0  nop
    ctx->pc = 0x13c59cu;
    // NOP
    // 0x13c5a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13C5A0u;
    {
        const bool branch_taken_0x13c5a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c5a0) {
            ctx->pc = 0x13C5ACu;
            goto label_13c5ac;
        }
    }
    ctx->pc = 0x13C5A8u;
    // 0x13c5a8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x13c5a8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_13c5ac:
    // 0x13c5ac: 0x0  nop
    ctx->pc = 0x13c5acu;
    // NOP
    // 0x13c5b0: 0x0  nop
    ctx->pc = 0x13c5b0u;
    // NOP
    // 0x13c5b4: 0x46020b03  div.s       $f12, $f1, $f2
    ctx->pc = 0x13c5b4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x13c5b8: 0x0  nop
    ctx->pc = 0x13c5b8u;
    // NOP
    // 0x13c5bc: 0x0  nop
    ctx->pc = 0x13c5bcu;
    // NOP
    // 0x13c5c0: 0x0  nop
    ctx->pc = 0x13c5c0u;
    // NOP
    // 0x13c5c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13C5C4u;
    SET_GPR_U32(ctx, 31, 0x13C5CCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C5CCu; }
        if (ctx->pc != 0x13C5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C5CCu; }
        if (ctx->pc != 0x13C5CCu) { return; }
    }
    ctx->pc = 0x13C5CCu;
label_13c5cc:
    // 0x13c5cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13c5ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c5d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13C5D0u;
    {
        const bool branch_taken_0x13c5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c5d0) {
            ctx->pc = 0x13C5E0u;
            goto label_13c5e0;
        }
    }
    ctx->pc = 0x13C5D8u;
label_13c5d8:
    // 0x13c5d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13c5d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c5dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13c5dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c5e0:
    // 0x13c5e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13c5e4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x13c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x13c5e8: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x13c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x13c5ec: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x13c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13c5f0: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x13c5f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c5f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13c5f8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x13c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13c5fc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x13c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x13c600: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x13c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13c604: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x13c604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c608: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c60c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13c610: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x13c610u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c614: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c618: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13c61c: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x13c61cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c620: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x13c620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x13c624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c62c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13c62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13c630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c634: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13C634u;
    SET_GPR_U32(ctx, 31, 0x13C63Cu);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C63Cu; }
        if (ctx->pc != 0x13C63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C63Cu; }
        if (ctx->pc != 0x13C63Cu) { return; }
    }
    ctx->pc = 0x13C63Cu;
label_13c63c:
    // 0x13c63c: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x13c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x13c640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c648: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13c648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c64c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13c64cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c650: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13C650u;
    SET_GPR_U32(ctx, 31, 0x13C658u);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C658u; }
        if (ctx->pc != 0x13C658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C658u; }
        if (ctx->pc != 0x13C658u) { return; }
    }
    ctx->pc = 0x13C658u;
label_13c658:
    // 0x13c658: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x13c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13c65c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x13c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13c660: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x13c660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c664: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x13c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13c668: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x13c668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13c66c: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x13c66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c670: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c674: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13c678: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x13c678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13c67c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c680: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13c684: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x13c684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13c688: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13c68c: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x13c68cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c690: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C690u;
    {
        const bool branch_taken_0x13c690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c690) {
            ctx->pc = 0x13C69Cu;
            goto label_13c69c;
        }
    }
    ctx->pc = 0x13C698u;
    // 0x13c698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c69c:
    // 0x13c69c: 0x0  nop
    ctx->pc = 0x13c69cu;
    // NOP
    // 0x13c6a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13c6a4: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x13c6a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c6a8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C6A8u;
    {
        const bool branch_taken_0x13c6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6a8) {
            ctx->pc = 0x13C6B4u;
            goto label_13c6b4;
        }
    }
    ctx->pc = 0x13C6B0u;
    // 0x13c6b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13c6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c6b4:
    // 0x13c6b4: 0x0  nop
    ctx->pc = 0x13c6b4u;
    // NOP
    // 0x13c6b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c6bc: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x13c6bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c6c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C6C0u;
    {
        const bool branch_taken_0x13c6c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6c0) {
            ctx->pc = 0x13C6CCu;
            goto label_13c6cc;
        }
    }
    ctx->pc = 0x13C6C8u;
    // 0x13c6c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13c6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c6cc:
    // 0x13c6cc: 0x0  nop
    ctx->pc = 0x13c6ccu;
    // NOP
    // 0x13c6d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c6d4: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x13c6d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c6d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C6D8u;
    {
        const bool branch_taken_0x13c6d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6d8) {
            ctx->pc = 0x13C6E4u;
            goto label_13c6e4;
        }
    }
    ctx->pc = 0x13C6E0u;
    // 0x13c6e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13c6e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c6e4:
    // 0x13c6e4: 0x0  nop
    ctx->pc = 0x13c6e4u;
    // NOP
    // 0x13c6e8: 0x2d0082a  slt         $at, $s6, $s0
    ctx->pc = 0x13c6e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13c6ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C6ECu;
    {
        const bool branch_taken_0x13c6ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6ec) {
            ctx->pc = 0x13C6F8u;
            goto label_13c6f8;
        }
    }
    ctx->pc = 0x13C6F4u;
    // 0x13c6f4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x13c6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13c6f8:
    // 0x13c6f8: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x13c6f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x13c6fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C6FCu;
    {
        const bool branch_taken_0x13c6fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6fc) {
            ctx->pc = 0x13C708u;
            goto label_13c708;
        }
    }
    ctx->pc = 0x13C704u;
    // 0x13c704: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x13c704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13c708:
    // 0x13c708: 0x3d2082a  slt         $at, $fp, $s2
    ctx->pc = 0x13c708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x13c70c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C70Cu;
    {
        const bool branch_taken_0x13c70c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c70c) {
            ctx->pc = 0x13C718u;
            goto label_13c718;
        }
    }
    ctx->pc = 0x13C714u;
    // 0x13c714: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x13c714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13c718:
    // 0x13c718: 0x2f3082a  slt         $at, $s7, $s3
    ctx->pc = 0x13c718u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x13c71c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C71Cu;
    {
        const bool branch_taken_0x13c71c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c71c) {
            ctx->pc = 0x13C728u;
            goto label_13c728;
        }
    }
    ctx->pc = 0x13C724u;
    // 0x13c724: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x13c724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13c728:
    // 0x13c728: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x13c728u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x13c72c: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x13c72cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13c730: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x13c730u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13c734: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x13c734u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13c738: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x13c738u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x13c73c: 0x15a900  sll         $s5, $s5, 4
    ctx->pc = 0x13c73cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x13c740: 0x1ef100  sll         $fp, $fp, 4
    ctx->pc = 0x13c740u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13c744: 0x17b900  sll         $s7, $s7, 4
    ctx->pc = 0x13c744u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x13c748: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x13C748u;
    {
        const bool branch_taken_0x13c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c748) {
            ctx->pc = 0x13CA68u;
            goto label_13ca68;
        }
    }
    ctx->pc = 0x13C750u;
label_13c750:
    // 0x13c750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c754: 0x14430035  bne         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x13C754u;
    {
        const bool branch_taken_0x13c754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13c754) {
            ctx->pc = 0x13C82Cu;
            goto label_13c82c;
        }
    }
    ctx->pc = 0x13C75Cu;
    // 0x13c75c: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x13c75cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13c760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c764: 0x0  nop
    ctx->pc = 0x13c764u;
    // NOP
    // 0x13c768: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13c768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13c76c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c76cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c770: 0x0  nop
    ctx->pc = 0x13c770u;
    // NOP
    // 0x13c774: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13c774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c778: 0x0  nop
    ctx->pc = 0x13c778u;
    // NOP
    // 0x13c77c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13C77Cu;
    {
        const bool branch_taken_0x13c77c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c77c) {
            ctx->pc = 0x13C788u;
            goto label_13c788;
        }
    }
    ctx->pc = 0x13C784u;
    // 0x13c784: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x13c784u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_13c788:
    // 0x13c788: 0x86830018  lh          $v1, 0x18($s4)
    ctx->pc = 0x13c788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x13c78c: 0x86820020  lh          $v0, 0x20($s4)
    ctx->pc = 0x13c78cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13c790: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x13c790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c798: 0x0  nop
    ctx->pc = 0x13c798u;
    // NOP
    // 0x13c79c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c79cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c7a0: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x13c7a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x13c7a4: 0x0  nop
    ctx->pc = 0x13c7a4u;
    // NOP
    // 0x13c7a8: 0x0  nop
    ctx->pc = 0x13c7a8u;
    // NOP
    // 0x13c7ac: 0x0  nop
    ctx->pc = 0x13c7acu;
    // NOP
    // 0x13c7b0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13C7B0u;
    SET_GPR_U32(ctx, 31, 0x13C7B8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C7B8u; }
        if (ctx->pc != 0x13C7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C7B8u; }
        if (ctx->pc != 0x13C7B8u) { return; }
    }
    ctx->pc = 0x13C7B8u;
label_13c7b8:
    // 0x13c7b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13c7b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7bc: 0x8682001e  lh          $v0, 0x1E($s4)
    ctx->pc = 0x13c7bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x13c7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c7c4: 0x0  nop
    ctx->pc = 0x13c7c4u;
    // NOP
    // 0x13c7c8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x13c7c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x13c7cc: 0x8683001a  lh          $v1, 0x1A($s4)
    ctx->pc = 0x13c7ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x13c7d0: 0x86820022  lh          $v0, 0x22($s4)
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x13c7d4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x13c7d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c7dc: 0x0  nop
    ctx->pc = 0x13c7dcu;
    // NOP
    // 0x13c7e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13c7e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13c7e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c7e8: 0x0  nop
    ctx->pc = 0x13c7e8u;
    // NOP
    // 0x13c7ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13c7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c7f0: 0x0  nop
    ctx->pc = 0x13c7f0u;
    // NOP
    // 0x13c7f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13C7F4u;
    {
        const bool branch_taken_0x13c7f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c7f4) {
            ctx->pc = 0x13C800u;
            goto label_13c800;
        }
    }
    ctx->pc = 0x13C7FCu;
    // 0x13c7fc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x13c7fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_13c800:
    // 0x13c800: 0x0  nop
    ctx->pc = 0x13c800u;
    // NOP
    // 0x13c804: 0x0  nop
    ctx->pc = 0x13c804u;
    // NOP
    // 0x13c808: 0x46020b03  div.s       $f12, $f1, $f2
    ctx->pc = 0x13c808u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x13c80c: 0x0  nop
    ctx->pc = 0x13c80cu;
    // NOP
    // 0x13c810: 0x0  nop
    ctx->pc = 0x13c810u;
    // NOP
    // 0x13c814: 0x0  nop
    ctx->pc = 0x13c814u;
    // NOP
    // 0x13c818: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13C818u;
    SET_GPR_U32(ctx, 31, 0x13C820u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C820u; }
        if (ctx->pc != 0x13C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C820u; }
        if (ctx->pc != 0x13C820u) { return; }
    }
    ctx->pc = 0x13C820u;
label_13c820:
    // 0x13c820: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13c820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c824: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x13C824u;
    {
        const bool branch_taken_0x13c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c824) {
            ctx->pc = 0x13C998u;
            goto label_13c998;
        }
    }
    ctx->pc = 0x13C82Cu;
label_13c82c:
    // 0x13c82c: 0x0  nop
    ctx->pc = 0x13c82cu;
    // NOP
    // 0x13c830: 0x86820020  lh          $v0, 0x20($s4)
    ctx->pc = 0x13c830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13c834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c838: 0x0  nop
    ctx->pc = 0x13c838u;
    // NOP
    // 0x13c83c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c83cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c840: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x13c844: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13c844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13c848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13c848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c84c: 0x0  nop
    ctx->pc = 0x13c84cu;
    // NOP
    // 0x13c850: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13c850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13c854: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x13c854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13c858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c85c: 0x0  nop
    ctx->pc = 0x13c85cu;
    // NOP
    // 0x13c860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c864: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x13c864u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13c868: 0x0  nop
    ctx->pc = 0x13c868u;
    // NOP
    // 0x13c86c: 0x0  nop
    ctx->pc = 0x13c86cu;
    // NOP
    // 0x13c870: 0x0  nop
    ctx->pc = 0x13c870u;
    // NOP
    // 0x13c874: 0xc047a42  jal         func_11E908
    ctx->pc = 0x13C874u;
    SET_GPR_U32(ctx, 31, 0x13C87Cu);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C87Cu; }
        if (ctx->pc != 0x13C87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C87Cu; }
        if (ctx->pc != 0x13C87Cu) { return; }
    }
    ctx->pc = 0x13C87Cu;
label_13c87c:
    // 0x13c87c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13c880: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13c880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c884: 0x0  nop
    ctx->pc = 0x13c884u;
    // NOP
    // 0x13c888: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13c888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13c88c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13c890: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13c890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c894: 0x0  nop
    ctx->pc = 0x13c894u;
    // NOP
    // 0x13c898: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x13c898u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x13c89c: 0x86820024  lh          $v0, 0x24($s4)
    ctx->pc = 0x13c89cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x13c8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c8a4: 0x0  nop
    ctx->pc = 0x13c8a4u;
    // NOP
    // 0x13c8a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c8ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13c8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13c8b0: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13c8b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13c8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13c8b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13c8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c8bc: 0x0  nop
    ctx->pc = 0x13c8bcu;
    // NOP
    // 0x13c8c0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x13c8c0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x13c8c4: 0x86820018  lh          $v0, 0x18($s4)
    ctx->pc = 0x13c8c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x13c8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c8cc: 0x0  nop
    ctx->pc = 0x13c8ccu;
    // NOP
    // 0x13c8d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c8d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c8d4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x13c8d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13c8d8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13C8D8u;
    SET_GPR_U32(ctx, 31, 0x13C8E0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8E0u; }
        if (ctx->pc != 0x13C8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8E0u; }
        if (ctx->pc != 0x13C8E0u) { return; }
    }
    ctx->pc = 0x13C8E0u;
label_13c8e0:
    // 0x13c8e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13c8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8e4: 0x86820022  lh          $v0, 0x22($s4)
    ctx->pc = 0x13c8e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x13c8e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c8ec: 0x0  nop
    ctx->pc = 0x13c8ecu;
    // NOP
    // 0x13c8f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13c8f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13c8f4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x13c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x13c8f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13c8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13c8fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c900: 0x0  nop
    ctx->pc = 0x13c900u;
    // NOP
    // 0x13c904: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x13c904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13c908: 0x8682001e  lh          $v0, 0x1E($s4)
    ctx->pc = 0x13c908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x13c90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c910: 0x0  nop
    ctx->pc = 0x13c910u;
    // NOP
    // 0x13c914: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c918: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x13c918u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13c91c: 0x0  nop
    ctx->pc = 0x13c91cu;
    // NOP
    // 0x13c920: 0x0  nop
    ctx->pc = 0x13c920u;
    // NOP
    // 0x13c924: 0x0  nop
    ctx->pc = 0x13c924u;
    // NOP
    // 0x13c928: 0xc047a42  jal         func_11E908
    ctx->pc = 0x13C928u;
    SET_GPR_U32(ctx, 31, 0x13C930u);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C930u; }
        if (ctx->pc != 0x13C930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C930u; }
        if (ctx->pc != 0x13C930u) { return; }
    }
    ctx->pc = 0x13C930u;
label_13c930:
    // 0x13c930: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13c930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13c934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13c934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c938: 0x0  nop
    ctx->pc = 0x13c938u;
    // NOP
    // 0x13c93c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13c93cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13c940: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13c940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13c944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c948: 0x0  nop
    ctx->pc = 0x13c948u;
    // NOP
    // 0x13c94c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13c94cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13c950: 0x86820026  lh          $v0, 0x26($s4)
    ctx->pc = 0x13c950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 38)));
    // 0x13c954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c958: 0x0  nop
    ctx->pc = 0x13c958u;
    // NOP
    // 0x13c95c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c95cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c960: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x13c960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13c964: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13c964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13c968: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13c968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13c96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c970: 0x0  nop
    ctx->pc = 0x13c970u;
    // NOP
    // 0x13c974: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13c974u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13c978: 0x8682001a  lh          $v0, 0x1A($s4)
    ctx->pc = 0x13c978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x13c97c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13c97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c980: 0x0  nop
    ctx->pc = 0x13c980u;
    // NOP
    // 0x13c984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13c984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13c988: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x13c988u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13c98c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13C98Cu;
    SET_GPR_U32(ctx, 31, 0x13C994u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C994u; }
        if (ctx->pc != 0x13C994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C994u; }
        if (ctx->pc != 0x13C994u) { return; }
    }
    ctx->pc = 0x13C994u;
label_13c994:
    // 0x13c994: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13c994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c998:
    // 0x13c998: 0x8683000c  lh          $v1, 0xC($s4)
    ctx->pc = 0x13c998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13c99c: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x13c99cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x13c9a0: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x13c9a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c9a4: 0x8683000e  lh          $v1, 0xE($s4)
    ctx->pc = 0x13c9a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13c9a8: 0x86820012  lh          $v0, 0x12($s4)
    ctx->pc = 0x13c9a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x13c9ac: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x13c9acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c9b0: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x13c9b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13c9b4: 0x86820018  lh          $v0, 0x18($s4)
    ctx->pc = 0x13c9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x13c9b8: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x13c9b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c9bc: 0x86830016  lh          $v1, 0x16($s4)
    ctx->pc = 0x13c9bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13c9c0: 0x8682001a  lh          $v0, 0x1A($s4)
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x13c9c4: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x13c9c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c9c8: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x13c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x13c9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13c9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13c9d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13C9DCu;
    SET_GPR_U32(ctx, 31, 0x13C9E4u);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C9E4u; }
        if (ctx->pc != 0x13C9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C9E4u; }
        if (ctx->pc != 0x13C9E4u) { return; }
    }
    ctx->pc = 0x13C9E4u;
label_13c9e4:
    // 0x13c9e4: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x13c9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x13c9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13c9f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13c9f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9f8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13C9F8u;
    SET_GPR_U32(ctx, 31, 0x13CA00u);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CA00u; }
        if (ctx->pc != 0x13CA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CA00u; }
        if (ctx->pc != 0x13CA00u) { return; }
    }
    ctx->pc = 0x13CA00u;
label_13ca00:
    // 0x13ca00: 0x86840010  lh          $a0, 0x10($s4)
    ctx->pc = 0x13ca00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x13ca04: 0x2441818  mult        $v1, $s2, $a0
    ctx->pc = 0x13ca04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13ca08: 0x86820018  lh          $v0, 0x18($s4)
    ctx->pc = 0x13ca08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x13ca0c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13ca0cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13ca10: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13CA10u;
    {
        const bool branch_taken_0x13ca10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ca10) {
            ctx->pc = 0x13CA1Cu;
            goto label_13ca1c;
        }
    }
    ctx->pc = 0x13CA18u;
    // 0x13ca18: 0x1cd  break       0, 7
    ctx->pc = 0x13ca18u;
    runtime->handleBreak(rdram, ctx);
label_13ca1c:
    // 0x13ca1c: 0x1812  mflo        $v1
    ctx->pc = 0x13ca1cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x13ca20: 0x8682000c  lh          $v0, 0xC($s4)
    ctx->pc = 0x13ca20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13ca24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ca28: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x13ca28u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ca2c: 0x86840012  lh          $a0, 0x12($s4)
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x13ca30: 0x2641818  mult        $v1, $s3, $a0
    ctx->pc = 0x13ca30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13ca34: 0x8682001a  lh          $v0, 0x1A($s4)
    ctx->pc = 0x13ca34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x13ca38: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13ca38u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13ca3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13CA3Cu;
    {
        const bool branch_taken_0x13ca3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ca3c) {
            ctx->pc = 0x13CA48u;
            goto label_13ca48;
        }
    }
    ctx->pc = 0x13CA44u;
    // 0x13ca44: 0x1cd  break       0, 7
    ctx->pc = 0x13ca44u;
    runtime->handleBreak(rdram, ctx);
label_13ca48:
    // 0x13ca48: 0x1812  mflo        $v1
    ctx->pc = 0x13ca48u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x13ca4c: 0x8682000e  lh          $v0, 0xE($s4)
    ctx->pc = 0x13ca4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13ca50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ca54: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x13ca54u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ca58: 0x86820014  lh          $v0, 0x14($s4)
    ctx->pc = 0x13ca58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13ca5c: 0x529021  addu        $s2, $v0, $s2
    ctx->pc = 0x13ca5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13ca60: 0x86820016  lh          $v0, 0x16($s4)
    ctx->pc = 0x13ca60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13ca64: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x13ca64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_13ca68:
    // 0x13ca68: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13ca6c: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x13ca6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x13ca70: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x13ca70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13ca74: 0x10200089  beqz        $at, . + 4 + (0x89 << 2)
    ctx->pc = 0x13CA74u;
    {
        const bool branch_taken_0x13ca74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ca74) {
            ctx->pc = 0x13CC9Cu;
            goto label_13cc9c;
        }
    }
    ctx->pc = 0x13CA7Cu;
    // 0x13ca7c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x13ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x13ca80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ca80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ca84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13ca88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13ca8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca90: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13CA90u;
    SET_GPR_U32(ctx, 31, 0x13CA98u);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CA98u; }
        if (ctx->pc != 0x13CA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CA98u; }
        if (ctx->pc != 0x13CA98u) { return; }
    }
    ctx->pc = 0x13CA98u;
label_13ca98:
    // 0x13ca98: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x13ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x13ca9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ca9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13caa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13caa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13caa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13caa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13caa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13caa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13caac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13CAACu;
    SET_GPR_U32(ctx, 31, 0x13CAB4u);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CAB4u; }
        if (ctx->pc != 0x13CAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CAB4u; }
        if (ctx->pc != 0x13CAB4u) { return; }
    }
    ctx->pc = 0x13CAB4u;
label_13cab4:
    // 0x13cab4: 0x8685000c  lh          $a1, 0xC($s4)
    ctx->pc = 0x13cab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13cab8: 0x8686000e  lh          $a2, 0xE($s4)
    ctx->pc = 0x13cab8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13cabc: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x13cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x13cac0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13cac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cac4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x13cac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cac8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13CAC8u;
    SET_GPR_U32(ctx, 31, 0x13CAD0u);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CAD0u; }
        if (ctx->pc != 0x13CAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CAD0u; }
        if (ctx->pc != 0x13CAD0u) { return; }
    }
    ctx->pc = 0x13CAD0u;
label_13cad0:
    // 0x13cad0: 0x27b702f8  addiu       $s7, $sp, 0x2F8
    ctx->pc = 0x13cad0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
    // 0x13cad4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x13cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x13cad8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x13cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x13cadc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cae4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13CAE4u;
    {
        const bool branch_taken_0x13cae4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cae4) {
            ctx->pc = 0x13CB2Cu;
            goto label_13cb2c;
        }
    }
    ctx->pc = 0x13CAECu;
    // 0x13caec: 0x8fa302fc  lw          $v1, 0x2FC($sp)
    ctx->pc = 0x13caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x13caf0: 0x8fa202f4  lw          $v0, 0x2F4($sp)
    ctx->pc = 0x13caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x13caf4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13caf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cafc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13CAFCu;
    {
        const bool branch_taken_0x13cafc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cafc) {
            ctx->pc = 0x13CB2Cu;
            goto label_13cb2c;
        }
    }
    ctx->pc = 0x13CB04u;
    // 0x13cb04: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13cb08: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13cb0c: 0x2647fff0  addiu       $a3, $s2, -0x10
    ctx->pc = 0x13cb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x13cb10: 0x2668fff0  addiu       $t0, $s3, -0x10
    ctx->pc = 0x13cb10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x13cb14: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x13cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x13cb18: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x13cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x13cb1c: 0x24460038  addiu       $a2, $v0, 0x38
    ctx->pc = 0x13cb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x13cb20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13cb20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb24: 0xc051168  jal         func_1445A0
    ctx->pc = 0x13CB24u;
    SET_GPR_U32(ctx, 31, 0x13CB2Cu);
    ctx->pc = 0x1445A0u;
    if (runtime->hasFunction(0x1445A0u)) {
        auto targetFn = runtime->lookupFunction(0x1445A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB2Cu; }
        if (ctx->pc != 0x13CB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0iii_0x1445a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB2Cu; }
        if (ctx->pc != 0x13CB2Cu) { return; }
    }
    ctx->pc = 0x13CB2Cu;
label_13cb2c:
    // 0x13cb2c: 0x0  nop
    ctx->pc = 0x13cb2cu;
    // NOP
    // 0x13cb30: 0x8685000c  lh          $a1, 0xC($s4)
    ctx->pc = 0x13cb30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13cb34: 0x26a8fff0  addiu       $t0, $s5, -0x10
    ctx->pc = 0x13cb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x13cb38: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x13cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x13cb3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13cb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb40: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13cb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb44: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13CB44u;
    SET_GPR_U32(ctx, 31, 0x13CB4Cu);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB4Cu; }
        if (ctx->pc != 0x13CB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB4Cu; }
        if (ctx->pc != 0x13CB4Cu) { return; }
    }
    ctx->pc = 0x13CB4Cu;
label_13cb4c:
    // 0x13cb4c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x13cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x13cb50: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x13cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x13cb54: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cb58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cb5c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13CB5Cu;
    {
        const bool branch_taken_0x13cb5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cb5c) {
            ctx->pc = 0x13CBA4u;
            goto label_13cba4;
        }
    }
    ctx->pc = 0x13CB64u;
    // 0x13cb64: 0x8fa302fc  lw          $v1, 0x2FC($sp)
    ctx->pc = 0x13cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x13cb68: 0x8fa202f4  lw          $v0, 0x2F4($sp)
    ctx->pc = 0x13cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x13cb6c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cb70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cb74: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13CB74u;
    {
        const bool branch_taken_0x13cb74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cb74) {
            ctx->pc = 0x13CBA4u;
            goto label_13cba4;
        }
    }
    ctx->pc = 0x13CB7Cu;
    // 0x13cb7c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13cb80: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13cb84: 0x2647fff0  addiu       $a3, $s2, -0x10
    ctx->pc = 0x13cb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x13cb88: 0x86880016  lh          $t0, 0x16($s4)
    ctx->pc = 0x13cb88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13cb8c: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x13cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x13cb90: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x13cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x13cb94: 0x24460038  addiu       $a2, $v0, 0x38
    ctx->pc = 0x13cb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x13cb98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13cb98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb9c: 0xc051168  jal         func_1445A0
    ctx->pc = 0x13CB9Cu;
    SET_GPR_U32(ctx, 31, 0x13CBA4u);
    ctx->pc = 0x1445A0u;
    if (runtime->hasFunction(0x1445A0u)) {
        auto targetFn = runtime->lookupFunction(0x1445A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBA4u; }
        if (ctx->pc != 0x13CBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0iii_0x1445a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBA4u; }
        if (ctx->pc != 0x13CBA4u) { return; }
    }
    ctx->pc = 0x13CBA4u;
label_13cba4:
    // 0x13cba4: 0x0  nop
    ctx->pc = 0x13cba4u;
    // NOP
    // 0x13cba8: 0x8686000e  lh          $a2, 0xE($s4)
    ctx->pc = 0x13cba8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13cbac: 0x26c7fff0  addiu       $a3, $s6, -0x10
    ctx->pc = 0x13cbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x13cbb0: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x13cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x13cbb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13cbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cbb8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x13cbb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cbbc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13CBBCu;
    SET_GPR_U32(ctx, 31, 0x13CBC4u);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBC4u; }
        if (ctx->pc != 0x13CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBC4u; }
        if (ctx->pc != 0x13CBC4u) { return; }
    }
    ctx->pc = 0x13CBC4u;
label_13cbc4:
    // 0x13cbc4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x13cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x13cbc8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x13cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x13cbcc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cbd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cbd4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13CBD4u;
    {
        const bool branch_taken_0x13cbd4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cbd4) {
            ctx->pc = 0x13CC1Cu;
            goto label_13cc1c;
        }
    }
    ctx->pc = 0x13CBDCu;
    // 0x13cbdc: 0x8fa302fc  lw          $v1, 0x2FC($sp)
    ctx->pc = 0x13cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x13cbe0: 0x8fa202f4  lw          $v0, 0x2F4($sp)
    ctx->pc = 0x13cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x13cbe4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cbe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cbec: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13CBECu;
    {
        const bool branch_taken_0x13cbec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cbec) {
            ctx->pc = 0x13CC1Cu;
            goto label_13cc1c;
        }
    }
    ctx->pc = 0x13CBF4u;
    // 0x13cbf4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13cbf8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13cbfc: 0x86870014  lh          $a3, 0x14($s4)
    ctx->pc = 0x13cbfcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13cc00: 0x2668fff0  addiu       $t0, $s3, -0x10
    ctx->pc = 0x13cc00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x13cc04: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x13cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x13cc08: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x13cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x13cc0c: 0x24460038  addiu       $a2, $v0, 0x38
    ctx->pc = 0x13cc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x13cc10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13cc10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc14: 0xc051168  jal         func_1445A0
    ctx->pc = 0x13CC14u;
    SET_GPR_U32(ctx, 31, 0x13CC1Cu);
    ctx->pc = 0x1445A0u;
    if (runtime->hasFunction(0x1445A0u)) {
        auto targetFn = runtime->lookupFunction(0x1445A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC1Cu; }
        if (ctx->pc != 0x13CC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0iii_0x1445a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC1Cu; }
        if (ctx->pc != 0x13CC1Cu) { return; }
    }
    ctx->pc = 0x13CC1Cu;
label_13cc1c:
    // 0x13cc1c: 0x0  nop
    ctx->pc = 0x13cc1cu;
    // NOP
    // 0x13cc20: 0x26c7fff0  addiu       $a3, $s6, -0x10
    ctx->pc = 0x13cc20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x13cc24: 0x26a8fff0  addiu       $t0, $s5, -0x10
    ctx->pc = 0x13cc24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x13cc28: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x13cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x13cc2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13cc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13cc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc34: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x13CC34u;
    SET_GPR_U32(ctx, 31, 0x13CC3Cu);
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC3Cu; }
        if (ctx->pc != 0x13CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC3Cu; }
        if (ctx->pc != 0x13CC3Cu) { return; }
    }
    ctx->pc = 0x13CC3Cu;
label_13cc3c:
    // 0x13cc3c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x13cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x13cc40: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x13cc44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cc48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cc4c: 0x184000af  blez        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x13CC4Cu;
    {
        const bool branch_taken_0x13cc4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cc4c) {
            ctx->pc = 0x13CF0Cu;
            goto label_13cf0c;
        }
    }
    ctx->pc = 0x13CC54u;
    // 0x13cc54: 0x8fa302fc  lw          $v1, 0x2FC($sp)
    ctx->pc = 0x13cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x13cc58: 0x8fa202f4  lw          $v0, 0x2F4($sp)
    ctx->pc = 0x13cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x13cc5c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cc60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cc64: 0x184000a9  blez        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x13CC64u;
    {
        const bool branch_taken_0x13cc64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cc64) {
            ctx->pc = 0x13CF0Cu;
            goto label_13cf0c;
        }
    }
    ctx->pc = 0x13CC6Cu;
    // 0x13cc6c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13cc70: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13cc74: 0x86870014  lh          $a3, 0x14($s4)
    ctx->pc = 0x13cc74u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13cc78: 0x86880016  lh          $t0, 0x16($s4)
    ctx->pc = 0x13cc78u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13cc7c: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x13cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x13cc80: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x13cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x13cc84: 0x24460038  addiu       $a2, $v0, 0x38
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x13cc88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13cc88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc8c: 0xc051168  jal         func_1445A0
    ctx->pc = 0x13CC8Cu;
    SET_GPR_U32(ctx, 31, 0x13CC94u);
    ctx->pc = 0x1445A0u;
    if (runtime->hasFunction(0x1445A0u)) {
        auto targetFn = runtime->lookupFunction(0x1445A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC94u; }
        if (ctx->pc != 0x13CC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0iii_0x1445a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC94u; }
        if (ctx->pc != 0x13CC94u) { return; }
    }
    ctx->pc = 0x13CC94u;
label_13cc94:
    // 0x13cc94: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x13CC94u;
    {
        const bool branch_taken_0x13cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc94) {
            ctx->pc = 0x13CF0Cu;
            goto label_13cf0c;
        }
    }
    ctx->pc = 0x13CC9Cu;
label_13cc9c:
    // 0x13cc9c: 0x0  nop
    ctx->pc = 0x13cc9cu;
    // NOP
    // 0x13cca0: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x13cca0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13cca4: 0x30c4003f  andi        $a0, $a2, 0x3F
    ctx->pc = 0x13cca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x13cca8: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CCA8u;
    {
        const bool branch_taken_0x13cca8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x13cca8) {
            ctx->pc = 0x13CCBCu;
            goto label_13ccbc;
        }
    }
    ctx->pc = 0x13CCB0u;
    // 0x13ccb0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13CCB0u;
    {
        const bool branch_taken_0x13ccb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ccb0) {
            ctx->pc = 0x13CCBCu;
            goto label_13ccbc;
        }
    }
    ctx->pc = 0x13CCB8u;
    // 0x13ccb8: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x13ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_13ccbc:
    // 0x13ccbc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CCBCu;
    {
        const bool branch_taken_0x13ccbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ccbc) {
            ctx->pc = 0x13CCD0u;
            goto label_13ccd0;
        }
    }
    ctx->pc = 0x13CCC4u;
    // 0x13ccc4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x13ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13ccc8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13cccc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x13ccccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_13ccd0:
    // 0x13ccd0: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x13ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x13ccd4: 0x94430038  lhu         $v1, 0x38($v0)
    ctx->pc = 0x13ccd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13ccd8: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x13ccd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x13ccdc: 0x32143  sra         $a0, $v1, 5
    ctx->pc = 0x13ccdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
    // 0x13cce0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CCE0u;
    {
        const bool branch_taken_0x13cce0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13cce0) {
            ctx->pc = 0x13CCF0u;
            goto label_13ccf0;
        }
    }
    ctx->pc = 0x13CCE8u;
    // 0x13cce8: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x13cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x13ccec: 0x32143  sra         $a0, $v1, 5
    ctx->pc = 0x13ccecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
label_13ccf0:
    // 0x13ccf0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x13ccf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ccf4: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x13ccf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x13ccf8: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x13ccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x13ccfc: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x13ccfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x13cd00: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x13cd00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13cd04: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x13cd04u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x13cd08: 0x9442003a  lhu         $v0, 0x3A($v0)
    ctx->pc = 0x13cd08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x13cd0c: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x13cd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x13cd10: 0x23ebe  dsrl32      $a3, $v0, 26
    ctx->pc = 0x13cd10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x13cd14: 0xc050f18  jal         func_143C60
    ctx->pc = 0x13CD14u;
    SET_GPR_U32(ctx, 31, 0x13CD1Cu);
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD1Cu; }
        if (ctx->pc != 0x13CD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD1Cu; }
        if (ctx->pc != 0x13CD1Cu) { return; }
    }
    ctx->pc = 0x13CD1Cu;
label_13cd1c:
    // 0x13cd1c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cd20: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13cd24: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x13CD24u;
    SET_GPR_U32(ctx, 31, 0x13CD2Cu);
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD2Cu; }
        if (ctx->pc != 0x13CD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD2Cu; }
        if (ctx->pc != 0x13CD2Cu) { return; }
    }
    ctx->pc = 0x13CD2Cu;
label_13cd2c:
    // 0x13cd2c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cd30: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x13cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13cd34: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x13CD34u;
    SET_GPR_U32(ctx, 31, 0x13CD3Cu);
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD3Cu; }
        if (ctx->pc != 0x13CD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD3Cu; }
        if (ctx->pc != 0x13CD3Cu) { return; }
    }
    ctx->pc = 0x13CD3Cu;
label_13cd3c:
    // 0x13cd3c: 0x92850030  lbu         $a1, 0x30($s4)
    ctx->pc = 0x13cd3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x13cd40: 0x92860031  lbu         $a2, 0x31($s4)
    ctx->pc = 0x13cd40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x13cd44: 0x92870032  lbu         $a3, 0x32($s4)
    ctx->pc = 0x13cd44u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 50)));
    // 0x13cd48: 0x92880033  lbu         $t0, 0x33($s4)
    ctx->pc = 0x13cd48u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 51)));
    // 0x13cd4c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cd50: 0xc04d320  jal         func_134C80
    ctx->pc = 0x13CD50u;
    SET_GPR_U32(ctx, 31, 0x13CD58u);
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD58u; }
        if (ctx->pc != 0x13CD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD58u; }
        if (ctx->pc != 0x13CD58u) { return; }
    }
    ctx->pc = 0x13CD58u;
label_13cd58:
    // 0x13cd58: 0x8685000c  lh          $a1, 0xC($s4)
    ctx->pc = 0x13cd58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13cd5c: 0x8686000e  lh          $a2, 0xE($s4)
    ctx->pc = 0x13cd5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13cd60: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cd64: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13CD64u;
    SET_GPR_U32(ctx, 31, 0x13CD6Cu);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD6Cu; }
        if (ctx->pc != 0x13CD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD6Cu; }
        if (ctx->pc != 0x13CD6Cu) { return; }
    }
    ctx->pc = 0x13CD6Cu;
label_13cd6c:
    // 0x13cd6c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cd70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13cd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13cd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13cd78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd7c: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13CD7Cu;
    SET_GPR_U32(ctx, 31, 0x13CD84u);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD84u; }
        if (ctx->pc != 0x13CD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD84u; }
        if (ctx->pc != 0x13CD84u) { return; }
    }
    ctx->pc = 0x13CD84u;
label_13cd84:
    // 0x13cd84: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cd88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13cd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13cd8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd90: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13CD90u;
    SET_GPR_U32(ctx, 31, 0x13CD98u);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD98u; }
        if (ctx->pc != 0x13CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD98u; }
        if (ctx->pc != 0x13CD98u) { return; }
    }
    ctx->pc = 0x13CD98u;
label_13cd98:
    // 0x13cd98: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cd9c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x13cd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cda0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x13cda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cda4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13cda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cda8: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13CDA8u;
    SET_GPR_U32(ctx, 31, 0x13CDB0u);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CDB0u; }
        if (ctx->pc != 0x13CDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CDB0u; }
        if (ctx->pc != 0x13CDB0u) { return; }
    }
    ctx->pc = 0x13CDB0u;
label_13cdb0:
    // 0x13cdb0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cdb4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x13cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13cdb8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x13CDB8u;
    SET_GPR_U32(ctx, 31, 0x13CDC0u);
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CDC0u; }
        if (ctx->pc != 0x13CDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CDC0u; }
        if (ctx->pc != 0x13CDC0u) { return; }
    }
    ctx->pc = 0x13CDC0u;
label_13cdc0:
    // 0x13cdc0: 0x8685000c  lh          $a1, 0xC($s4)
    ctx->pc = 0x13cdc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13cdc4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cdc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13cdc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cdcc: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13CDCCu;
    SET_GPR_U32(ctx, 31, 0x13CDD4u);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CDD4u; }
        if (ctx->pc != 0x13CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CDD4u; }
        if (ctx->pc != 0x13CDD4u) { return; }
    }
    ctx->pc = 0x13CDD4u;
label_13cdd4:
    // 0x13cdd4: 0x86860016  lh          $a2, 0x16($s4)
    ctx->pc = 0x13cdd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13cdd8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cddc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13cddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cde0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13cde0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cde4: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13CDE4u;
    SET_GPR_U32(ctx, 31, 0x13CDECu);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CDECu; }
        if (ctx->pc != 0x13CDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CDECu; }
        if (ctx->pc != 0x13CDECu) { return; }
    }
    ctx->pc = 0x13CDECu;
label_13cdec:
    // 0x13cdec: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cdf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13cdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cdf4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13cdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cdf8: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13CDF8u;
    SET_GPR_U32(ctx, 31, 0x13CE00u);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE00u; }
        if (ctx->pc != 0x13CE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE00u; }
        if (ctx->pc != 0x13CE00u) { return; }
    }
    ctx->pc = 0x13CE00u;
label_13ce00:
    // 0x13ce00: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ce04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x13ce04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13ce08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13ce0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce10: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13CE10u;
    SET_GPR_U32(ctx, 31, 0x13CE18u);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE18u; }
        if (ctx->pc != 0x13CE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE18u; }
        if (ctx->pc != 0x13CE18u) { return; }
    }
    ctx->pc = 0x13CE18u;
label_13ce18:
    // 0x13ce18: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ce1c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x13ce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13ce20: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x13CE20u;
    SET_GPR_U32(ctx, 31, 0x13CE28u);
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE28u; }
        if (ctx->pc != 0x13CE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE28u; }
        if (ctx->pc != 0x13CE28u) { return; }
    }
    ctx->pc = 0x13CE28u;
label_13ce28:
    // 0x13ce28: 0x8686000e  lh          $a2, 0xE($s4)
    ctx->pc = 0x13ce28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x13ce2c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ce30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ce30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce34: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13CE34u;
    SET_GPR_U32(ctx, 31, 0x13CE3Cu);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE3Cu; }
        if (ctx->pc != 0x13CE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE3Cu; }
        if (ctx->pc != 0x13CE3Cu) { return; }
    }
    ctx->pc = 0x13CE3Cu;
label_13ce3c:
    // 0x13ce3c: 0x86850014  lh          $a1, 0x14($s4)
    ctx->pc = 0x13ce3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13ce40: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ce44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13ce44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13ce48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce4c: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13CE4Cu;
    SET_GPR_U32(ctx, 31, 0x13CE54u);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE54u; }
        if (ctx->pc != 0x13CE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE54u; }
        if (ctx->pc != 0x13CE54u) { return; }
    }
    ctx->pc = 0x13CE54u;
label_13ce54:
    // 0x13ce54: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ce58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13ce58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13ce5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce60: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13CE60u;
    SET_GPR_U32(ctx, 31, 0x13CE68u);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE68u; }
        if (ctx->pc != 0x13CE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE68u; }
        if (ctx->pc != 0x13CE68u) { return; }
    }
    ctx->pc = 0x13CE68u;
label_13ce68:
    // 0x13ce68: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ce6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13ce6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce70: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x13ce70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13ce74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce78: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13CE78u;
    SET_GPR_U32(ctx, 31, 0x13CE80u);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE80u; }
        if (ctx->pc != 0x13CE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE80u; }
        if (ctx->pc != 0x13CE80u) { return; }
    }
    ctx->pc = 0x13CE80u;
label_13ce80:
    // 0x13ce80: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ce84: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x13ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13ce88: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x13CE88u;
    SET_GPR_U32(ctx, 31, 0x13CE90u);
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE90u; }
        if (ctx->pc != 0x13CE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CE90u; }
        if (ctx->pc != 0x13CE90u) { return; }
    }
    ctx->pc = 0x13CE90u;
label_13ce90:
    // 0x13ce90: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ce94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ce94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13ce98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce9c: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13CE9Cu;
    SET_GPR_U32(ctx, 31, 0x13CEA4u);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CEA4u; }
        if (ctx->pc != 0x13CEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CEA4u; }
        if (ctx->pc != 0x13CEA4u) { return; }
    }
    ctx->pc = 0x13CEA4u;
label_13cea4:
    // 0x13cea4: 0x86850014  lh          $a1, 0x14($s4)
    ctx->pc = 0x13cea4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13cea8: 0x86860016  lh          $a2, 0x16($s4)
    ctx->pc = 0x13cea8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x13ceac: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ceb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13ceb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ceb4: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13CEB4u;
    SET_GPR_U32(ctx, 31, 0x13CEBCu);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CEBCu; }
        if (ctx->pc != 0x13CEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CEBCu; }
        if (ctx->pc != 0x13CEBCu) { return; }
    }
    ctx->pc = 0x13CEBCu;
label_13cebc:
    // 0x13cebc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13cec0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13cec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cec4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13cec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cec8: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x13CEC8u;
    SET_GPR_U32(ctx, 31, 0x13CED0u);
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CED0u; }
        if (ctx->pc != 0x13CED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CED0u; }
        if (ctx->pc != 0x13CED0u) { return; }
    }
    ctx->pc = 0x13CED0u;
label_13ced0:
    // 0x13ced0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ced4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13ced4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ced8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13ced8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cedc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13cedcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cee0: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x13CEE0u;
    SET_GPR_U32(ctx, 31, 0x13CEE8u);
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CEE8u; }
        if (ctx->pc != 0x13CEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CEE8u; }
        if (ctx->pc != 0x13CEE8u) { return; }
    }
    ctx->pc = 0x13CEE8u;
label_13cee8:
    // 0x13cee8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x13cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x13ceec: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x13CEECu;
    SET_GPR_U32(ctx, 31, 0x13CEF4u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CEF4u; }
        if (ctx->pc != 0x13CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CEF4u; }
        if (ctx->pc != 0x13CEF4u) { return; }
    }
    ctx->pc = 0x13CEF4u;
label_13cef4:
    // 0x13cef4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13cef8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13cef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cefc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13cefcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf00: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x13cf00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf04: 0xc050f18  jal         func_143C60
    ctx->pc = 0x13CF04u;
    SET_GPR_U32(ctx, 31, 0x13CF0Cu);
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CF0Cu; }
        if (ctx->pc != 0x13CF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CF0Cu; }
        if (ctx->pc != 0x13CF0Cu) { return; }
    }
    ctx->pc = 0x13CF0Cu;
label_13cf0c:
    // 0x13cf0c: 0x0  nop
    ctx->pc = 0x13cf0cu;
    // NOP
    // 0x13cf10: 0x8f828728  lw          $v0, -0x78D8($gp)
    ctx->pc = 0x13cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
    // 0x13cf14: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x13CF14u;
    {
        const bool branch_taken_0x13cf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cf14) {
            ctx->pc = 0x13CFECu;
            goto label_13cfec;
        }
    }
    ctx->pc = 0x13CF1Cu;
    // 0x13cf1c: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x13cf1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13cf20: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13CF20u;
    {
        const bool branch_taken_0x13cf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf20) {
            ctx->pc = 0x13CF84u;
            goto label_13cf84;
        }
    }
    ctx->pc = 0x13CF28u;
    // 0x13cf28: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13CF28u;
    {
        const bool branch_taken_0x13cf28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cf28) {
            ctx->pc = 0x13CF5Cu;
            goto label_13cf5c;
        }
    }
    ctx->pc = 0x13CF30u;
    // 0x13cf30: 0x86820020  lh          $v0, 0x20($s4)
    ctx->pc = 0x13cf30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13cf34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cf38: 0xa6820020  sh          $v0, 0x20($s4)
    ctx->pc = 0x13cf38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x13cf3c: 0x86830020  lh          $v1, 0x20($s4)
    ctx->pc = 0x13cf3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13cf40: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x13cf40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13cf44: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13cf44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13cf48: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13CF48u;
    {
        const bool branch_taken_0x13cf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cf48) {
            ctx->pc = 0x13CF84u;
            goto label_13cf84;
        }
    }
    ctx->pc = 0x13CF50u;
    // 0x13cf50: 0xa6800020  sh          $zero, 0x20($s4)
    ctx->pc = 0x13cf50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x13cf54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13CF54u;
    {
        const bool branch_taken_0x13cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf54) {
            ctx->pc = 0x13CF84u;
            goto label_13cf84;
        }
    }
    ctx->pc = 0x13CF5Cu;
label_13cf5c:
    // 0x13cf5c: 0x0  nop
    ctx->pc = 0x13cf5cu;
    // NOP
    // 0x13cf60: 0x86820020  lh          $v0, 0x20($s4)
    ctx->pc = 0x13cf60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13cf64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13cf68: 0xa6820020  sh          $v0, 0x20($s4)
    ctx->pc = 0x13cf68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x13cf6c: 0x86820020  lh          $v0, 0x20($s4)
    ctx->pc = 0x13cf6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13cf70: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CF70u;
    {
        const bool branch_taken_0x13cf70 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x13cf70) {
            ctx->pc = 0x13CF84u;
            goto label_13cf84;
        }
    }
    ctx->pc = 0x13CF78u;
    // 0x13cf78: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x13cf78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13cf7c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x13cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13cf80: 0xa6820020  sh          $v0, 0x20($s4)
    ctx->pc = 0x13cf80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 2));
label_13cf84:
    // 0x13cf84: 0x0  nop
    ctx->pc = 0x13cf84u;
    // NOP
    // 0x13cf88: 0x8682001e  lh          $v0, 0x1E($s4)
    ctx->pc = 0x13cf88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x13cf8c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13CF8Cu;
    {
        const bool branch_taken_0x13cf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf8c) {
            ctx->pc = 0x13CFECu;
            goto label_13cfec;
        }
    }
    ctx->pc = 0x13CF94u;
    // 0x13cf94: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13CF94u;
    {
        const bool branch_taken_0x13cf94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cf94) {
            ctx->pc = 0x13CFC8u;
            goto label_13cfc8;
        }
    }
    ctx->pc = 0x13CF9Cu;
    // 0x13cf9c: 0x86820022  lh          $v0, 0x22($s4)
    ctx->pc = 0x13cf9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x13cfa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cfa4: 0xa6820022  sh          $v0, 0x22($s4)
    ctx->pc = 0x13cfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x13cfa8: 0x86830022  lh          $v1, 0x22($s4)
    ctx->pc = 0x13cfa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x13cfac: 0x8682001e  lh          $v0, 0x1E($s4)
    ctx->pc = 0x13cfacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x13cfb0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13cfb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13cfb4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13CFB4u;
    {
        const bool branch_taken_0x13cfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cfb4) {
            ctx->pc = 0x13CFECu;
            goto label_13cfec;
        }
    }
    ctx->pc = 0x13CFBCu;
    // 0x13cfbc: 0xa6800022  sh          $zero, 0x22($s4)
    ctx->pc = 0x13cfbcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x13cfc0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13CFC0u;
    {
        const bool branch_taken_0x13cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cfc0) {
            ctx->pc = 0x13CFECu;
            goto label_13cfec;
        }
    }
    ctx->pc = 0x13CFC8u;
label_13cfc8:
    // 0x13cfc8: 0x86820022  lh          $v0, 0x22($s4)
    ctx->pc = 0x13cfc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x13cfcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13cfd0: 0xa6820022  sh          $v0, 0x22($s4)
    ctx->pc = 0x13cfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x13cfd4: 0x86820022  lh          $v0, 0x22($s4)
    ctx->pc = 0x13cfd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x13cfd8: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CFD8u;
    {
        const bool branch_taken_0x13cfd8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x13cfd8) {
            ctx->pc = 0x13CFECu;
            goto label_13cfec;
        }
    }
    ctx->pc = 0x13CFE0u;
    // 0x13cfe0: 0x8682001e  lh          $v0, 0x1E($s4)
    ctx->pc = 0x13cfe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x13cfe4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x13cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13cfe8: 0xa6820022  sh          $v0, 0x22($s4)
    ctx->pc = 0x13cfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 2));
label_13cfec:
    // 0x13cfec: 0x0  nop
    ctx->pc = 0x13cfecu;
    // NOP
    // 0x13cff0: 0x86820028  lh          $v0, 0x28($s4)
    ctx->pc = 0x13cff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x13cff4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CFF4u;
    {
        const bool branch_taken_0x13cff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cff4) {
            ctx->pc = 0x13D01Cu;
            goto label_13d01c;
        }
    }
    ctx->pc = 0x13CFFCu;
    // 0x13cffc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x13cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13d000: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D004u;
    {
        const bool branch_taken_0x13d004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d004) {
            ctx->pc = 0x13D01Cu;
            goto label_13d01c;
        }
    }
    ctx->pc = 0x13D00Cu;
    // 0x13d00c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x13d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x13d010: 0x24540008  addiu       $s4, $v0, 0x8
    ctx->pc = 0x13d010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13d014: 0x1000fbef  b           . + 4 + (-0x411 << 2)
    ctx->pc = 0x13D014u;
    {
        const bool branch_taken_0x13d014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d014) {
            ctx->pc = 0x13BFD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13bfd4;
        }
    }
    ctx->pc = 0x13D01Cu;
label_13d01c:
    // 0x13d01c: 0x0  nop
    ctx->pc = 0x13d01cu;
    // NOP
    // 0x13d020: 0x8f828728  lw          $v0, -0x78D8($gp)
    ctx->pc = 0x13d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
    // 0x13d024: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D024u;
    {
        const bool branch_taken_0x13d024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d024) {
            ctx->pc = 0x13D044u;
            goto label_13d044;
        }
    }
    ctx->pc = 0x13D02Cu;
    // 0x13d02c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x13d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13d030: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x13d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x13d034: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d038: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x13d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x13d03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13d040: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x13d040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
label_13d044:
    // 0x13d044: 0x0  nop
    ctx->pc = 0x13d044u;
    // NOP
    // 0x13d048: 0x86840028  lh          $a0, 0x28($s4)
    ctx->pc = 0x13d048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x13d04c: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D04Cu;
    {
        const bool branch_taken_0x13d04c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13d04c) {
            ctx->pc = 0x13D06Cu;
            goto label_13d06c;
        }
    }
    ctx->pc = 0x13D054u;
    // 0x13d054: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x13d054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13d058: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x13d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x13d05c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d060: 0xac400184  sw          $zero, 0x184($v0)
    ctx->pc = 0x13d060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 0));
    // 0x13d064: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13D064u;
    {
        const bool branch_taken_0x13d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d064) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D06Cu;
label_13d06c:
    // 0x13d06c: 0x0  nop
    ctx->pc = 0x13d06cu;
    // NOP
    // 0x13d070: 0x8682002a  lh          $v0, 0x2A($s4)
    ctx->pc = 0x13d070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 42)));
    // 0x13d074: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13D074u;
    {
        const bool branch_taken_0x13d074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d074) {
            ctx->pc = 0x13D0D4u;
            goto label_13d0d4;
        }
    }
    ctx->pc = 0x13D07Cu;
    // 0x13d07c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x13d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13d080: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x13d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x13d084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13d084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d088: 0x24650184  addiu       $a1, $v1, 0x184
    ctx->pc = 0x13d088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 388));
    // 0x13d08c: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x13d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x13d090: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x13d090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13d094: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x13D094u;
    {
        const bool branch_taken_0x13d094 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d094) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D09Cu;
    // 0x13d09c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x13d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x13d0a0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x13d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13d0a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d0a8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x13d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13d0ac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x13d0b0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x13d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13d0b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d0b8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13D0B8u;
    {
        const bool branch_taken_0x13d0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d0b8) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D0C0u;
    // 0x13d0c0: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x13d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x13d0c4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x13d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13d0c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d0cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13D0CCu;
    {
        const bool branch_taken_0x13d0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d0cc) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D0D4u;
label_13d0d4:
    // 0x13d0d4: 0x0  nop
    ctx->pc = 0x13d0d4u;
    // NOP
    // 0x13d0d8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x13d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13d0dc: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x13d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x13d0e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d0e4: 0x24650184  addiu       $a1, $v1, 0x184
    ctx->pc = 0x13d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 388));
    // 0x13d0e8: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x13d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x13d0ec: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x13d0ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13d0f0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13D0F0u;
    {
        const bool branch_taken_0x13d0f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d0f0) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D0F8u;
    // 0x13d0f8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x13d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x13d0fc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x13d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13d100: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13d100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d104: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x13d104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13d108: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13d108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x13d10c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x13d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13d110: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d114: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D114u;
    {
        const bool branch_taken_0x13d114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d114) {
            ctx->pc = 0x13D128u;
            goto label_13d128;
        }
    }
    ctx->pc = 0x13D11Cu;
    // 0x13d11c: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x13d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x13d120: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x13d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13d124: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_13d128:
    // 0x13d128: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d12c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13d130: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x13d130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_13d134:
    // 0x13d134: 0x0  nop
    ctx->pc = 0x13d134u;
    // NOP
    // 0x13d138: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x13d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x13d13c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d140: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d144: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x13d144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13d148: 0x1440fb82  bnez        $v0, . + 4 + (-0x47E << 2)
    ctx->pc = 0x13D148u;
    {
        const bool branch_taken_0x13d148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d148) {
            ctx->pc = 0x13BF54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13bf54;
        }
    }
    ctx->pc = 0x13D150u;
    // 0x13d150: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13d150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13d154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d158: 0xc041ae4  jal         func_106B90
    ctx->pc = 0x13D158u;
    SET_GPR_U32(ctx, 31, 0x13D160u);
    ctx->pc = 0x106B90u;
    if (runtime->hasFunction(0x106B90u)) {
        auto targetFn = runtime->lookupFunction(0x106B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D160u; }
        if (ctx->pc != 0x13D160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCnt_0x106b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D160u; }
        if (ctx->pc != 0x13D160u) { return; }
    }
    ctx->pc = 0x13D160u;
label_13d160:
    // 0x13d160: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13d160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13d164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d168: 0xc041b2c  jal         func_106CB0
    ctx->pc = 0x13D168u;
    SET_GPR_U32(ctx, 31, 0x13D170u);
    ctx->pc = 0x106CB0u;
    if (runtime->hasFunction(0x106CB0u)) {
        auto targetFn = runtime->lookupFunction(0x106CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D170u; }
        if (ctx->pc != 0x13D170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenDirectCode_0x106cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D170u; }
        if (ctx->pc != 0x13D170u) { return; }
    }
    ctx->pc = 0x13D170u;
label_13d170:
    // 0x13d170: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13d174: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x13d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x13d178: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13d178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13d17c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x13d17cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d180: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x13D180u;
    SET_GPR_U32(ctx, 31, 0x13D188u);
    ctx->pc = 0x106D38u;
    if (runtime->hasFunction(0x106D38u)) {
        auto targetFn = runtime->lookupFunction(0x106D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D188u; }
        if (ctx->pc != 0x13D188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenGifTag_0x106d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D188u; }
        if (ctx->pc != 0x13D188u) { return; }
    }
    ctx->pc = 0x13D188u;
label_13d188:
    // 0x13d188: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13d188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13d18c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x13d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13d190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d194: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x13D194u;
    SET_GPR_U32(ctx, 31, 0x13D19Cu);
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D19Cu; }
        if (ctx->pc != 0x13D19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D19Cu; }
        if (ctx->pc != 0x13D19Cu) { return; }
    }
    ctx->pc = 0x13D19Cu;
label_13d19c:
    // 0x13d19c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13d1a0: 0xc041b54  jal         func_106D50
    ctx->pc = 0x13D1A0u;
    SET_GPR_U32(ctx, 31, 0x13D1A8u);
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D1A8u; }
        if (ctx->pc != 0x13D1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseGifTag_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D1A8u; }
        if (ctx->pc != 0x13D1A8u) { return; }
    }
    ctx->pc = 0x13D1A8u;
label_13d1a8:
    // 0x13d1a8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x13d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13d1ac: 0xc041b42  jal         func_106D08
    ctx->pc = 0x13D1ACu;
    SET_GPR_U32(ctx, 31, 0x13D1B4u);
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D1B4u; }
        if (ctx->pc != 0x13D1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseDirectCode_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D1B4u; }
        if (ctx->pc != 0x13D1B4u) { return; }
    }
    ctx->pc = 0x13D1B4u;
label_13d1b4:
    // 0x13d1b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13d1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13d1b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13d1b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13d1bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13d1bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13d1c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13d1c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13d1c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13d1c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d1c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13d1c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d1cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13d1ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d1d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d1d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d1d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d1d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d1dc: 0x27bd0340  addiu       $sp, $sp, 0x340
    ctx->pc = 0x13d1dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x13d1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D1E8u;
}
