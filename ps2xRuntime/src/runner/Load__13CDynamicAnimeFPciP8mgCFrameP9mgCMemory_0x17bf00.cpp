#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Load__13CDynamicAnimeFPciP8mgCFrameP9mgCMemory
// Address: 0x17bf00 - 0x17c08c
void Load__13CDynamicAnimeFPciP8mgCFrameP9mgCMemory_0x17bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load__13CDynamicAnimeFPciP8mgCFrameP9mgCMemory_0x17bf00");
#endif

    switch (ctx->pc) {
        case 0x17bf00u: goto label_17bf00;
        case 0x17bf04u: goto label_17bf04;
        case 0x17bf08u: goto label_17bf08;
        case 0x17bf0cu: goto label_17bf0c;
        case 0x17bf10u: goto label_17bf10;
        case 0x17bf14u: goto label_17bf14;
        case 0x17bf18u: goto label_17bf18;
        case 0x17bf1cu: goto label_17bf1c;
        case 0x17bf20u: goto label_17bf20;
        case 0x17bf24u: goto label_17bf24;
        case 0x17bf28u: goto label_17bf28;
        case 0x17bf2cu: goto label_17bf2c;
        case 0x17bf30u: goto label_17bf30;
        case 0x17bf34u: goto label_17bf34;
        case 0x17bf38u: goto label_17bf38;
        case 0x17bf3cu: goto label_17bf3c;
        case 0x17bf40u: goto label_17bf40;
        case 0x17bf44u: goto label_17bf44;
        case 0x17bf48u: goto label_17bf48;
        case 0x17bf4cu: goto label_17bf4c;
        case 0x17bf50u: goto label_17bf50;
        case 0x17bf54u: goto label_17bf54;
        case 0x17bf58u: goto label_17bf58;
        case 0x17bf5cu: goto label_17bf5c;
        case 0x17bf60u: goto label_17bf60;
        case 0x17bf64u: goto label_17bf64;
        case 0x17bf68u: goto label_17bf68;
        case 0x17bf6cu: goto label_17bf6c;
        case 0x17bf70u: goto label_17bf70;
        case 0x17bf74u: goto label_17bf74;
        case 0x17bf78u: goto label_17bf78;
        case 0x17bf7cu: goto label_17bf7c;
        case 0x17bf80u: goto label_17bf80;
        case 0x17bf84u: goto label_17bf84;
        case 0x17bf88u: goto label_17bf88;
        case 0x17bf8cu: goto label_17bf8c;
        case 0x17bf90u: goto label_17bf90;
        case 0x17bf94u: goto label_17bf94;
        case 0x17bf98u: goto label_17bf98;
        case 0x17bf9cu: goto label_17bf9c;
        case 0x17bfa0u: goto label_17bfa0;
        case 0x17bfa4u: goto label_17bfa4;
        case 0x17bfa8u: goto label_17bfa8;
        case 0x17bfacu: goto label_17bfac;
        case 0x17bfb0u: goto label_17bfb0;
        case 0x17bfb4u: goto label_17bfb4;
        case 0x17bfb8u: goto label_17bfb8;
        case 0x17bfbcu: goto label_17bfbc;
        case 0x17bfc0u: goto label_17bfc0;
        case 0x17bfc4u: goto label_17bfc4;
        case 0x17bfc8u: goto label_17bfc8;
        case 0x17bfccu: goto label_17bfcc;
        case 0x17bfd0u: goto label_17bfd0;
        case 0x17bfd4u: goto label_17bfd4;
        case 0x17bfd8u: goto label_17bfd8;
        case 0x17bfdcu: goto label_17bfdc;
        case 0x17bfe0u: goto label_17bfe0;
        case 0x17bfe4u: goto label_17bfe4;
        case 0x17bfe8u: goto label_17bfe8;
        case 0x17bfecu: goto label_17bfec;
        case 0x17bff0u: goto label_17bff0;
        case 0x17bff4u: goto label_17bff4;
        case 0x17bff8u: goto label_17bff8;
        case 0x17bffcu: goto label_17bffc;
        case 0x17c000u: goto label_17c000;
        case 0x17c004u: goto label_17c004;
        case 0x17c008u: goto label_17c008;
        case 0x17c00cu: goto label_17c00c;
        case 0x17c010u: goto label_17c010;
        case 0x17c014u: goto label_17c014;
        case 0x17c018u: goto label_17c018;
        case 0x17c01cu: goto label_17c01c;
        case 0x17c020u: goto label_17c020;
        case 0x17c024u: goto label_17c024;
        case 0x17c028u: goto label_17c028;
        case 0x17c02cu: goto label_17c02c;
        case 0x17c030u: goto label_17c030;
        case 0x17c034u: goto label_17c034;
        case 0x17c038u: goto label_17c038;
        case 0x17c03cu: goto label_17c03c;
        case 0x17c040u: goto label_17c040;
        case 0x17c044u: goto label_17c044;
        case 0x17c048u: goto label_17c048;
        case 0x17c04cu: goto label_17c04c;
        case 0x17c050u: goto label_17c050;
        case 0x17c054u: goto label_17c054;
        case 0x17c058u: goto label_17c058;
        case 0x17c05cu: goto label_17c05c;
        case 0x17c060u: goto label_17c060;
        case 0x17c064u: goto label_17c064;
        case 0x17c068u: goto label_17c068;
        case 0x17c06cu: goto label_17c06c;
        case 0x17c070u: goto label_17c070;
        case 0x17c074u: goto label_17c074;
        case 0x17c078u: goto label_17c078;
        case 0x17c07cu: goto label_17c07c;
        case 0x17c080u: goto label_17c080;
        case 0x17c084u: goto label_17c084;
        case 0x17c088u: goto label_17c088;
        default: break;
    }

    ctx->pc = 0x17bf00u;

label_17bf00:
    // 0x17bf00: 0x27bdf0a0  addiu       $sp, $sp, -0xF60
    ctx->pc = 0x17bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963360));
label_17bf04:
    // 0x17bf04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_17bf08:
    // 0x17bf08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17bf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17bf0c:
    // 0x17bf0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17bf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17bf10:
    // 0x17bf10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17bf10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17bf14:
    // 0x17bf14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17bf18:
    // 0x17bf18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17bf18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17bf1c:
    // 0x17bf1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17bf20:
    // 0x17bf20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17bf20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17bf24:
    // 0x17bf24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17bf28:
    // 0x17bf28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17bf28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17bf2c:
    // 0x17bf2c: 0xc05e8a8  jal         func_17A2A0
label_17bf30:
    if (ctx->pc == 0x17BF30u) {
        ctx->pc = 0x17BF30u;
            // 0x17bf30: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BF34u;
        goto label_17bf34;
    }
    ctx->pc = 0x17BF2Cu;
    SET_GPR_U32(ctx, 31, 0x17BF34u);
    ctx->pc = 0x17BF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF2Cu;
            // 0x17bf30: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A2A0u;
    if (runtime->hasFunction(0x17A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x17A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BF34u; }
        if (ctx->pc != 0x17BF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CDynamicAnimeFv_0x17a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BF34u; }
        if (ctx->pc != 0x17BF34u) { return; }
    }
    ctx->pc = 0x17BF34u;
label_17bf34:
    // 0x17bf34: 0xaf908a14  sw          $s0, -0x75EC($gp)
    ctx->pc = 0x17bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937108), GPR_U32(ctx, 16));
label_17bf38:
    // 0x17bf38: 0xaf948a10  sw          $s4, -0x75F0($gp)
    ctx->pc = 0x17bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 20));
label_17bf3c:
    // 0x17bf3c: 0xaf918a18  sw          $s1, -0x75E8($gp)
    ctx->pc = 0x17bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 17));
label_17bf40:
    // 0x17bf40: 0xaf808a1c  sw          $zero, -0x75E4($gp)
    ctx->pc = 0x17bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
label_17bf44:
    // 0x17bf44: 0xaf808a20  sw          $zero, -0x75E0($gp)
    ctx->pc = 0x17bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 0));
label_17bf48:
    // 0x17bf48: 0xaf808a24  sw          $zero, -0x75DC($gp)
    ctx->pc = 0x17bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937124), GPR_U32(ctx, 0));
label_17bf4c:
    // 0x17bf4c: 0xaf808a28  sw          $zero, -0x75D8($gp)
    ctx->pc = 0x17bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 0));
label_17bf50:
    // 0x17bf50: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x17bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
label_17bf54:
    // 0x17bf54: 0x12200045  beqz        $s1, . + 4 + (0x45 << 2)
label_17bf58:
    if (ctx->pc == 0x17BF58u) {
        ctx->pc = 0x17BF58u;
            // 0x17bf58: 0xaf808a30  sw          $zero, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
        ctx->pc = 0x17BF5Cu;
        goto label_17bf5c;
    }
    ctx->pc = 0x17BF54u;
    {
        const bool branch_taken_0x17bf54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF54u;
            // 0x17bf58: 0xaf808a30  sw          $zero, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf54) {
            ctx->pc = 0x17C06Cu;
            goto label_17c06c;
        }
    }
    ctx->pc = 0x17BF5Cu;
label_17bf5c:
    // 0x17bf5c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x17bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_17bf60:
    // 0x17bf60: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
label_17bf64:
    // 0x17bf64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17bf64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bf68:
    // 0x17bf68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17bf68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17bf6c:
    // 0x17bf6c: 0x320f809  jalr        $t9
label_17bf70:
    if (ctx->pc == 0x17BF70u) {
        ctx->pc = 0x17BF70u;
            // 0x17bf70: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x17BF74u;
        goto label_17bf74;
    }
    ctx->pc = 0x17BF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BF74u);
        ctx->pc = 0x17BF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF6Cu;
            // 0x17bf70: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BF74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BF74u; }
            if (ctx->pc != 0x17BF74u) { return; }
        }
        }
    }
    ctx->pc = 0x17BF74u;
label_17bf74:
    // 0x17bf74: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
label_17bf78:
    // 0x17bf78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17bf78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bf7c:
    // 0x17bf7c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x17bf7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_17bf80:
    // 0x17bf80: 0x320f809  jalr        $t9
label_17bf84:
    if (ctx->pc == 0x17BF84u) {
        ctx->pc = 0x17BF84u;
            // 0x17bf84: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17BF88u;
        goto label_17bf88;
    }
    ctx->pc = 0x17BF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BF88u);
        ctx->pc = 0x17BF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF80u;
            // 0x17bf84: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BF88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BF88u; }
            if (ctx->pc != 0x17BF88u) { return; }
        }
        }
    }
    ctx->pc = 0x17BF88u;
label_17bf88:
    // 0x17bf88: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
label_17bf8c:
    // 0x17bf8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17bf8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bf90:
    // 0x17bf90: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17bf90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17bf94:
    // 0x17bf94: 0x320f809  jalr        $t9
label_17bf98:
    if (ctx->pc == 0x17BF98u) {
        ctx->pc = 0x17BF98u;
            // 0x17bf98: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x17BF9Cu;
        goto label_17bf9c;
    }
    ctx->pc = 0x17BF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BF9Cu);
        ctx->pc = 0x17BF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF94u;
            // 0x17bf98: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BF9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BF9Cu; }
            if (ctx->pc != 0x17BF9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17BF9Cu;
label_17bf9c:
    // 0x17bf9c: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
label_17bfa0:
    // 0x17bfa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17bfa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17bfa4:
    // 0x17bfa4: 0x0  nop
    ctx->pc = 0x17bfa4u;
    // NOP
label_17bfa8:
    // 0x17bfa8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17bfa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_17bfac:
    // 0x17bfac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17bfacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bfb0:
    // 0x17bfb0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x17bfb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_17bfb4:
    // 0x17bfb4: 0x320f809  jalr        $t9
label_17bfb8:
    if (ctx->pc == 0x17BFB8u) {
        ctx->pc = 0x17BFB8u;
            // 0x17bfb8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x17BFBCu;
        goto label_17bfbc;
    }
    ctx->pc = 0x17BFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BFBCu);
        ctx->pc = 0x17BFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFB4u;
            // 0x17bfb8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BFBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BFBCu; }
            if (ctx->pc != 0x17BFBCu) { return; }
        }
        }
    }
    ctx->pc = 0x17BFBCu;
label_17bfbc:
    // 0x17bfbc: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
label_17bfc0:
    // 0x17bfc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17bfc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17bfc4:
    // 0x17bfc4: 0x0  nop
    ctx->pc = 0x17bfc4u;
    // NOP
label_17bfc8:
    // 0x17bfc8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17bfc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_17bfcc:
    // 0x17bfcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17bfccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bfd0:
    // 0x17bfd0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x17bfd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17bfd4:
    // 0x17bfd4: 0x320f809  jalr        $t9
label_17bfd8:
    if (ctx->pc == 0x17BFD8u) {
        ctx->pc = 0x17BFD8u;
            // 0x17bfd8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x17BFDCu;
        goto label_17bfdc;
    }
    ctx->pc = 0x17BFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BFDCu);
        ctx->pc = 0x17BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFD4u;
            // 0x17bfd8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BFDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BFDCu; }
            if (ctx->pc != 0x17BFDCu) { return; }
        }
        }
    }
    ctx->pc = 0x17BFDCu;
label_17bfdc:
    // 0x17bfdc: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
label_17bfe0:
    // 0x17bfe0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17bfe4:
    // 0x17bfe4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17bfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17bfe8:
    // 0x17bfe8: 0x0  nop
    ctx->pc = 0x17bfe8u;
    // NOP
label_17bfec:
    // 0x17bfec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17bfecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_17bff0:
    // 0x17bff0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17bff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bff4:
    // 0x17bff4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17bff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17bff8:
    // 0x17bff8: 0x320f809  jalr        $t9
label_17bffc:
    if (ctx->pc == 0x17BFFCu) {
        ctx->pc = 0x17BFFCu;
            // 0x17bffc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x17C000u;
        goto label_17c000;
    }
    ctx->pc = 0x17BFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C000u);
        ctx->pc = 0x17BFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFF8u;
            // 0x17bffc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17C000u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C000u; }
            if (ctx->pc != 0x17C000u) { return; }
        }
        }
    }
    ctx->pc = 0x17C000u;
label_17c000:
    // 0x17c000: 0xc051a7c  jal         func_1469F0
label_17c004:
    if (ctx->pc == 0x17C004u) {
        ctx->pc = 0x17C004u;
            // 0x17c004: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x17C008u;
        goto label_17c008;
    }
    ctx->pc = 0x17C000u;
    SET_GPR_U32(ctx, 31, 0x17C008u);
    ctx->pc = 0x17C004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C000u;
            // 0x17c004: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C008u; }
        if (ctx->pc != 0x17C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C008u; }
        if (ctx->pc != 0x17C008u) { return; }
    }
    ctx->pc = 0x17C008u;
label_17c008:
    // 0x17c008: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x17c008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_17c00c:
    // 0x17c00c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_17c010:
    // 0x17c010: 0xc0519ec  jal         func_1467B0
label_17c014:
    if (ctx->pc == 0x17C014u) {
        ctx->pc = 0x17C014u;
            // 0x17c014: 0x24a54df0  addiu       $a1, $a1, 0x4DF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
        ctx->pc = 0x17C018u;
        goto label_17c018;
    }
    ctx->pc = 0x17C010u;
    SET_GPR_U32(ctx, 31, 0x17C018u);
    ctx->pc = 0x17C014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C010u;
            // 0x17c014: 0x24a54df0  addiu       $a1, $a1, 0x4DF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C018u; }
        if (ctx->pc != 0x17C018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C018u; }
        if (ctx->pc != 0x17C018u) { return; }
    }
    ctx->pc = 0x17C018u;
label_17c018:
    // 0x17c018: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17c018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17c01c:
    // 0x17c01c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17c01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17c020:
    // 0x17c020: 0xc051a60  jal         func_146980
label_17c024:
    if (ctx->pc == 0x17C024u) {
        ctx->pc = 0x17C024u;
            // 0x17c024: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x17C028u;
        goto label_17c028;
    }
    ctx->pc = 0x17C020u;
    SET_GPR_U32(ctx, 31, 0x17C028u);
    ctx->pc = 0x17C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C020u;
            // 0x17c024: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C028u; }
        if (ctx->pc != 0x17C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C028u; }
        if (ctx->pc != 0x17C028u) { return; }
    }
    ctx->pc = 0x17C028u;
label_17c028:
    // 0x17c028: 0xc0519c8  jal         func_146720
label_17c02c:
    if (ctx->pc == 0x17C02Cu) {
        ctx->pc = 0x17C02Cu;
            // 0x17c02c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x17C030u;
        goto label_17c030;
    }
    ctx->pc = 0x17C028u;
    SET_GPR_U32(ctx, 31, 0x17C030u);
    ctx->pc = 0x17C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C028u;
            // 0x17c02c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C030u; }
        if (ctx->pc != 0x17C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C030u; }
        if (ctx->pc != 0x17C030u) { return; }
    }
    ctx->pc = 0x17C030u;
label_17c030:
    // 0x17c030: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17c030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
label_17c034:
    // 0x17c034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17c034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17c038:
    // 0x17c038: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x17c038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_17c03c:
    // 0x17c03c: 0x320f809  jalr        $t9
label_17c040:
    if (ctx->pc == 0x17C040u) {
        ctx->pc = 0x17C040u;
            // 0x17c040: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x17C044u;
        goto label_17c044;
    }
    ctx->pc = 0x17C03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C044u);
        ctx->pc = 0x17C040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C03Cu;
            // 0x17c040: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17C044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C044u; }
            if (ctx->pc != 0x17C044u) { return; }
        }
        }
    }
    ctx->pc = 0x17C044u;
label_17c044:
    // 0x17c044: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17c044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
label_17c048:
    // 0x17c048: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17c048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17c04c:
    // 0x17c04c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x17c04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_17c050:
    // 0x17c050: 0x320f809  jalr        $t9
label_17c054:
    if (ctx->pc == 0x17C054u) {
        ctx->pc = 0x17C054u;
            // 0x17c054: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17C058u;
        goto label_17c058;
    }
    ctx->pc = 0x17C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C058u);
        ctx->pc = 0x17C054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C050u;
            // 0x17c054: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17C058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C058u; }
            if (ctx->pc != 0x17C058u) { return; }
        }
        }
    }
    ctx->pc = 0x17C058u;
label_17c058:
    // 0x17c058: 0x8f848a18  lw          $a0, -0x75E8($gp)
    ctx->pc = 0x17c058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
label_17c05c:
    // 0x17c05c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17c05cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17c060:
    // 0x17c060: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x17c060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_17c064:
    // 0x17c064: 0x320f809  jalr        $t9
label_17c068:
    if (ctx->pc == 0x17C068u) {
        ctx->pc = 0x17C068u;
            // 0x17c068: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x17C06Cu;
        goto label_17c06c;
    }
    ctx->pc = 0x17C064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C06Cu);
        ctx->pc = 0x17C068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C064u;
            // 0x17c068: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17C06Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C06Cu; }
            if (ctx->pc != 0x17C06Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17C06Cu;
label_17c06c:
    // 0x17c06c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17c06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17c070:
    // 0x17c070: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17c070u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17c074:
    // 0x17c074: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17c074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17c078:
    // 0x17c078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17c078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17c07c:
    // 0x17c07c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17c080:
    // 0x17c080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17c084:
    // 0x17c084: 0x3e00008  jr          $ra
label_17c088:
    if (ctx->pc == 0x17C088u) {
        ctx->pc = 0x17C088u;
            // 0x17c088: 0x27bd0f60  addiu       $sp, $sp, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3936));
        ctx->pc = 0x17C08Cu;
        goto label_fallthrough_0x17c084;
    }
    ctx->pc = 0x17C084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C084u;
            // 0x17c088: 0x27bd0f60  addiu       $sp, $sp, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3936));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17c084:
    ctx->pc = 0x17C08Cu;
}
