#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveActionRound__9CAquaFishFv
// Address: 0x20de00 - 0x20e0d4
void MoveActionRound__9CAquaFishFv_0x20de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveActionRound__9CAquaFishFv_0x20de00");
#endif

    switch (ctx->pc) {
        case 0x20de00u: goto label_20de00;
        case 0x20de04u: goto label_20de04;
        case 0x20de08u: goto label_20de08;
        case 0x20de0cu: goto label_20de0c;
        case 0x20de10u: goto label_20de10;
        case 0x20de14u: goto label_20de14;
        case 0x20de18u: goto label_20de18;
        case 0x20de1cu: goto label_20de1c;
        case 0x20de20u: goto label_20de20;
        case 0x20de24u: goto label_20de24;
        case 0x20de28u: goto label_20de28;
        case 0x20de2cu: goto label_20de2c;
        case 0x20de30u: goto label_20de30;
        case 0x20de34u: goto label_20de34;
        case 0x20de38u: goto label_20de38;
        case 0x20de3cu: goto label_20de3c;
        case 0x20de40u: goto label_20de40;
        case 0x20de44u: goto label_20de44;
        case 0x20de48u: goto label_20de48;
        case 0x20de4cu: goto label_20de4c;
        case 0x20de50u: goto label_20de50;
        case 0x20de54u: goto label_20de54;
        case 0x20de58u: goto label_20de58;
        case 0x20de5cu: goto label_20de5c;
        case 0x20de60u: goto label_20de60;
        case 0x20de64u: goto label_20de64;
        case 0x20de68u: goto label_20de68;
        case 0x20de6cu: goto label_20de6c;
        case 0x20de70u: goto label_20de70;
        case 0x20de74u: goto label_20de74;
        case 0x20de78u: goto label_20de78;
        case 0x20de7cu: goto label_20de7c;
        case 0x20de80u: goto label_20de80;
        case 0x20de84u: goto label_20de84;
        case 0x20de88u: goto label_20de88;
        case 0x20de8cu: goto label_20de8c;
        case 0x20de90u: goto label_20de90;
        case 0x20de94u: goto label_20de94;
        case 0x20de98u: goto label_20de98;
        case 0x20de9cu: goto label_20de9c;
        case 0x20dea0u: goto label_20dea0;
        case 0x20dea4u: goto label_20dea4;
        case 0x20dea8u: goto label_20dea8;
        case 0x20deacu: goto label_20deac;
        case 0x20deb0u: goto label_20deb0;
        case 0x20deb4u: goto label_20deb4;
        case 0x20deb8u: goto label_20deb8;
        case 0x20debcu: goto label_20debc;
        case 0x20dec0u: goto label_20dec0;
        case 0x20dec4u: goto label_20dec4;
        case 0x20dec8u: goto label_20dec8;
        case 0x20deccu: goto label_20decc;
        case 0x20ded0u: goto label_20ded0;
        case 0x20ded4u: goto label_20ded4;
        case 0x20ded8u: goto label_20ded8;
        case 0x20dedcu: goto label_20dedc;
        case 0x20dee0u: goto label_20dee0;
        case 0x20dee4u: goto label_20dee4;
        case 0x20dee8u: goto label_20dee8;
        case 0x20deecu: goto label_20deec;
        case 0x20def0u: goto label_20def0;
        case 0x20def4u: goto label_20def4;
        case 0x20def8u: goto label_20def8;
        case 0x20defcu: goto label_20defc;
        case 0x20df00u: goto label_20df00;
        case 0x20df04u: goto label_20df04;
        case 0x20df08u: goto label_20df08;
        case 0x20df0cu: goto label_20df0c;
        case 0x20df10u: goto label_20df10;
        case 0x20df14u: goto label_20df14;
        case 0x20df18u: goto label_20df18;
        case 0x20df1cu: goto label_20df1c;
        case 0x20df20u: goto label_20df20;
        case 0x20df24u: goto label_20df24;
        case 0x20df28u: goto label_20df28;
        case 0x20df2cu: goto label_20df2c;
        case 0x20df30u: goto label_20df30;
        case 0x20df34u: goto label_20df34;
        case 0x20df38u: goto label_20df38;
        case 0x20df3cu: goto label_20df3c;
        case 0x20df40u: goto label_20df40;
        case 0x20df44u: goto label_20df44;
        case 0x20df48u: goto label_20df48;
        case 0x20df4cu: goto label_20df4c;
        case 0x20df50u: goto label_20df50;
        case 0x20df54u: goto label_20df54;
        case 0x20df58u: goto label_20df58;
        case 0x20df5cu: goto label_20df5c;
        case 0x20df60u: goto label_20df60;
        case 0x20df64u: goto label_20df64;
        case 0x20df68u: goto label_20df68;
        case 0x20df6cu: goto label_20df6c;
        case 0x20df70u: goto label_20df70;
        case 0x20df74u: goto label_20df74;
        case 0x20df78u: goto label_20df78;
        case 0x20df7cu: goto label_20df7c;
        case 0x20df80u: goto label_20df80;
        case 0x20df84u: goto label_20df84;
        case 0x20df88u: goto label_20df88;
        case 0x20df8cu: goto label_20df8c;
        case 0x20df90u: goto label_20df90;
        case 0x20df94u: goto label_20df94;
        case 0x20df98u: goto label_20df98;
        case 0x20df9cu: goto label_20df9c;
        case 0x20dfa0u: goto label_20dfa0;
        case 0x20dfa4u: goto label_20dfa4;
        case 0x20dfa8u: goto label_20dfa8;
        case 0x20dfacu: goto label_20dfac;
        case 0x20dfb0u: goto label_20dfb0;
        case 0x20dfb4u: goto label_20dfb4;
        case 0x20dfb8u: goto label_20dfb8;
        case 0x20dfbcu: goto label_20dfbc;
        case 0x20dfc0u: goto label_20dfc0;
        case 0x20dfc4u: goto label_20dfc4;
        case 0x20dfc8u: goto label_20dfc8;
        case 0x20dfccu: goto label_20dfcc;
        case 0x20dfd0u: goto label_20dfd0;
        case 0x20dfd4u: goto label_20dfd4;
        case 0x20dfd8u: goto label_20dfd8;
        case 0x20dfdcu: goto label_20dfdc;
        case 0x20dfe0u: goto label_20dfe0;
        case 0x20dfe4u: goto label_20dfe4;
        case 0x20dfe8u: goto label_20dfe8;
        case 0x20dfecu: goto label_20dfec;
        case 0x20dff0u: goto label_20dff0;
        case 0x20dff4u: goto label_20dff4;
        case 0x20dff8u: goto label_20dff8;
        case 0x20dffcu: goto label_20dffc;
        case 0x20e000u: goto label_20e000;
        case 0x20e004u: goto label_20e004;
        case 0x20e008u: goto label_20e008;
        case 0x20e00cu: goto label_20e00c;
        case 0x20e010u: goto label_20e010;
        case 0x20e014u: goto label_20e014;
        case 0x20e018u: goto label_20e018;
        case 0x20e01cu: goto label_20e01c;
        case 0x20e020u: goto label_20e020;
        case 0x20e024u: goto label_20e024;
        case 0x20e028u: goto label_20e028;
        case 0x20e02cu: goto label_20e02c;
        case 0x20e030u: goto label_20e030;
        case 0x20e034u: goto label_20e034;
        case 0x20e038u: goto label_20e038;
        case 0x20e03cu: goto label_20e03c;
        case 0x20e040u: goto label_20e040;
        case 0x20e044u: goto label_20e044;
        case 0x20e048u: goto label_20e048;
        case 0x20e04cu: goto label_20e04c;
        case 0x20e050u: goto label_20e050;
        case 0x20e054u: goto label_20e054;
        case 0x20e058u: goto label_20e058;
        case 0x20e05cu: goto label_20e05c;
        case 0x20e060u: goto label_20e060;
        case 0x20e064u: goto label_20e064;
        case 0x20e068u: goto label_20e068;
        case 0x20e06cu: goto label_20e06c;
        case 0x20e070u: goto label_20e070;
        case 0x20e074u: goto label_20e074;
        case 0x20e078u: goto label_20e078;
        case 0x20e07cu: goto label_20e07c;
        case 0x20e080u: goto label_20e080;
        case 0x20e084u: goto label_20e084;
        case 0x20e088u: goto label_20e088;
        case 0x20e08cu: goto label_20e08c;
        case 0x20e090u: goto label_20e090;
        case 0x20e094u: goto label_20e094;
        case 0x20e098u: goto label_20e098;
        case 0x20e09cu: goto label_20e09c;
        case 0x20e0a0u: goto label_20e0a0;
        case 0x20e0a4u: goto label_20e0a4;
        case 0x20e0a8u: goto label_20e0a8;
        case 0x20e0acu: goto label_20e0ac;
        case 0x20e0b0u: goto label_20e0b0;
        case 0x20e0b4u: goto label_20e0b4;
        case 0x20e0b8u: goto label_20e0b8;
        case 0x20e0bcu: goto label_20e0bc;
        case 0x20e0c0u: goto label_20e0c0;
        case 0x20e0c4u: goto label_20e0c4;
        case 0x20e0c8u: goto label_20e0c8;
        case 0x20e0ccu: goto label_20e0cc;
        case 0x20e0d0u: goto label_20e0d0;
        default: break;
    }

    ctx->pc = 0x20de00u;

label_20de00:
    // 0x20de00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20de04:
    // 0x20de04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20de08:
    // 0x20de08: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20de08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20de0c:
    // 0x20de0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20de10:
    // 0x20de10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20de10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20de14:
    // 0x20de14: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20de14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20de18:
    // 0x20de18: 0x320f809  jalr        $t9
label_20de1c:
    if (ctx->pc == 0x20DE1Cu) {
        ctx->pc = 0x20DE1Cu;
            // 0x20de1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DE20u;
        goto label_20de20;
    }
    ctx->pc = 0x20DE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20DE20u);
        ctx->pc = 0x20DE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE18u;
            // 0x20de1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20DE20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20DE20u; }
            if (ctx->pc != 0x20DE20u) { return; }
        }
        }
    }
    ctx->pc = 0x20DE20u;
label_20de20:
    // 0x20de20: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20de20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20de24:
    // 0x20de24: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x20de24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_20de28:
    // 0x20de28: 0x2442f910  addiu       $v0, $v0, -0x6F0
    ctx->pc = 0x20de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
label_20de2c:
    // 0x20de2c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20de2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20de30:
    // 0x20de30: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x20de30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20de34:
    // 0x20de34: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x20de34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
label_20de38:
    // 0x20de38: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x20de38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_20de3c:
    // 0x20de3c: 0x3c02c1f8  lui         $v0, 0xC1F8
    ctx->pc = 0x20de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49656 << 16));
label_20de40:
    // 0x20de40: 0xc6020704  lwc1        $f2, 0x704($s0)
    ctx->pc = 0x20de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20de44:
    // 0x20de44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20de44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20de48:
    // 0x20de48: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x20de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20de4c:
    // 0x20de4c: 0x86020700  lh          $v0, 0x700($s0)
    ctx->pc = 0x20de4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1792)));
label_20de50:
    // 0x20de50: 0xc60c0684  lwc1        $f12, 0x684($s0)
    ctx->pc = 0x20de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20de54:
    // 0x20de54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20de54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20de58:
    // 0x20de58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20de58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20de5c:
    // 0x20de5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20de5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20de60:
    // 0x20de60: 0x0  nop
    ctx->pc = 0x20de60u;
    // NOP
label_20de64:
    // 0x20de64: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_20de68:
    if (ctx->pc == 0x20DE68u) {
        ctx->pc = 0x20DE68u;
            // 0x20de68: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x20DE6Cu;
        goto label_20de6c;
    }
    ctx->pc = 0x20DE64u;
    {
        const bool branch_taken_0x20de64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE64u;
            // 0x20de68: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de64) {
            ctx->pc = 0x20DEBCu;
            goto label_20debc;
        }
    }
    ctx->pc = 0x20DE6Cu;
label_20de6c:
    // 0x20de6c: 0xc6020708  lwc1        $f2, 0x708($s0)
    ctx->pc = 0x20de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20de70:
    // 0x20de70: 0x3c02c190  lui         $v0, 0xC190
    ctx->pc = 0x20de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49552 << 16));
label_20de74:
    // 0x20de74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20de74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20de78:
    // 0x20de78: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x20de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20de7c:
    // 0x20de7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20de7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20de80:
    // 0x20de80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20de80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20de84:
    // 0x20de84: 0x0  nop
    ctx->pc = 0x20de84u;
    // NOP
label_20de88:
    // 0x20de88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_20de8c:
    if (ctx->pc == 0x20DE8Cu) {
        ctx->pc = 0x20DE8Cu;
            // 0x20de8c: 0x3c024190  lui         $v0, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
        ctx->pc = 0x20DE90u;
        goto label_20de90;
    }
    ctx->pc = 0x20DE88u;
    {
        const bool branch_taken_0x20de88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE88u;
            // 0x20de8c: 0x3c024190  lui         $v0, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de88) {
            ctx->pc = 0x20DE98u;
            goto label_20de98;
        }
    }
    ctx->pc = 0x20DE90u;
label_20de90:
    // 0x20de90: 0x10000050  b           . + 4 + (0x50 << 2)
label_20de94:
    if (ctx->pc == 0x20DE94u) {
        ctx->pc = 0x20DE94u;
            // 0x20de94: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20DE98u;
        goto label_20de98;
    }
    ctx->pc = 0x20DE90u;
    {
        const bool branch_taken_0x20de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE90u;
            // 0x20de94: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de90) {
            ctx->pc = 0x20DFD4u;
            goto label_20dfd4;
        }
    }
    ctx->pc = 0x20DE98u;
label_20de98:
    // 0x20de98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20de98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20de9c:
    // 0x20de9c: 0x0  nop
    ctx->pc = 0x20de9cu;
    // NOP
label_20dea0:
    // 0x20dea0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20dea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20dea4:
    // 0x20dea4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20dea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20dea8:
    // 0x20dea8: 0x0  nop
    ctx->pc = 0x20dea8u;
    // NOP
label_20deac:
    // 0x20deac: 0x45000049  bc1f        . + 4 + (0x49 << 2)
label_20deb0:
    if (ctx->pc == 0x20DEB0u) {
        ctx->pc = 0x20DEB4u;
        goto label_20deb4;
    }
    ctx->pc = 0x20DEACu;
    {
        const bool branch_taken_0x20deac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20deac) {
            ctx->pc = 0x20DFD4u;
            goto label_20dfd4;
        }
    }
    ctx->pc = 0x20DEB4u;
label_20deb4:
    // 0x20deb4: 0x10000047  b           . + 4 + (0x47 << 2)
label_20deb8:
    if (ctx->pc == 0x20DEB8u) {
        ctx->pc = 0x20DEB8u;
            // 0x20deb8: 0xc46c0004  lwc1        $f12, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20DEBCu;
        goto label_20debc;
    }
    ctx->pc = 0x20DEB4u;
    {
        const bool branch_taken_0x20deb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DEB4u;
            // 0x20deb8: 0xc46c0004  lwc1        $f12, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20deb4) {
            ctx->pc = 0x20DFD4u;
            goto label_20dfd4;
        }
    }
    ctx->pc = 0x20DEBCu;
label_20debc:
    // 0x20debc: 0x3c0241f8  lui         $v0, 0x41F8
    ctx->pc = 0x20debcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16888 << 16));
label_20dec0:
    // 0x20dec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20dec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20dec4:
    // 0x20dec4: 0x0  nop
    ctx->pc = 0x20dec4u;
    // NOP
label_20dec8:
    // 0x20dec8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20dec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20decc:
    // 0x20decc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20deccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ded0:
    // 0x20ded0: 0x0  nop
    ctx->pc = 0x20ded0u;
    // NOP
label_20ded4:
    // 0x20ded4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_20ded8:
    if (ctx->pc == 0x20DED8u) {
        ctx->pc = 0x20DEDCu;
        goto label_20dedc;
    }
    ctx->pc = 0x20DED4u;
    {
        const bool branch_taken_0x20ded4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ded4) {
            ctx->pc = 0x20DF2Cu;
            goto label_20df2c;
        }
    }
    ctx->pc = 0x20DEDCu;
label_20dedc:
    // 0x20dedc: 0xc6020708  lwc1        $f2, 0x708($s0)
    ctx->pc = 0x20dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20dee0:
    // 0x20dee0: 0x3c02c190  lui         $v0, 0xC190
    ctx->pc = 0x20dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49552 << 16));
label_20dee4:
    // 0x20dee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20dee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20dee8:
    // 0x20dee8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x20dee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20deec:
    // 0x20deec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20deecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20def0:
    // 0x20def0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20def0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20def4:
    // 0x20def4: 0x0  nop
    ctx->pc = 0x20def4u;
    // NOP
label_20def8:
    // 0x20def8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_20defc:
    if (ctx->pc == 0x20DEFCu) {
        ctx->pc = 0x20DEFCu;
            // 0x20defc: 0x3c024190  lui         $v0, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
        ctx->pc = 0x20DF00u;
        goto label_20df00;
    }
    ctx->pc = 0x20DEF8u;
    {
        const bool branch_taken_0x20def8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DEF8u;
            // 0x20defc: 0x3c024190  lui         $v0, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20def8) {
            ctx->pc = 0x20DF08u;
            goto label_20df08;
        }
    }
    ctx->pc = 0x20DF00u;
label_20df00:
    // 0x20df00: 0x10000034  b           . + 4 + (0x34 << 2)
label_20df04:
    if (ctx->pc == 0x20DF04u) {
        ctx->pc = 0x20DF04u;
            // 0x20df04: 0xc46c0008  lwc1        $f12, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20DF08u;
        goto label_20df08;
    }
    ctx->pc = 0x20DF00u;
    {
        const bool branch_taken_0x20df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DF00u;
            // 0x20df04: 0xc46c0008  lwc1        $f12, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df00) {
            ctx->pc = 0x20DFD4u;
            goto label_20dfd4;
        }
    }
    ctx->pc = 0x20DF08u;
label_20df08:
    // 0x20df08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20df08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20df0c:
    // 0x20df0c: 0x0  nop
    ctx->pc = 0x20df0cu;
    // NOP
label_20df10:
    // 0x20df10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20df10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20df14:
    // 0x20df14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20df14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20df18:
    // 0x20df18: 0x0  nop
    ctx->pc = 0x20df18u;
    // NOP
label_20df1c:
    // 0x20df1c: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_20df20:
    if (ctx->pc == 0x20DF20u) {
        ctx->pc = 0x20DF24u;
        goto label_20df24;
    }
    ctx->pc = 0x20DF1Cu;
    {
        const bool branch_taken_0x20df1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20df1c) {
            ctx->pc = 0x20DFD4u;
            goto label_20dfd4;
        }
    }
    ctx->pc = 0x20DF24u;
label_20df24:
    // 0x20df24: 0x1000002b  b           . + 4 + (0x2B << 2)
label_20df28:
    if (ctx->pc == 0x20DF28u) {
        ctx->pc = 0x20DF28u;
            // 0x20df28: 0xc46c000c  lwc1        $f12, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20DF2Cu;
        goto label_20df2c;
    }
    ctx->pc = 0x20DF24u;
    {
        const bool branch_taken_0x20df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DF24u;
            // 0x20df28: 0xc46c000c  lwc1        $f12, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df24) {
            ctx->pc = 0x20DFD4u;
            goto label_20dfd4;
        }
    }
    ctx->pc = 0x20DF2Cu;
label_20df2c:
    // 0x20df2c: 0x8e020924  lw          $v0, 0x924($s0)
    ctx->pc = 0x20df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2340)));
label_20df30:
    // 0x20df30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20df30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20df34:
    // 0x20df34: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_20df38:
    if (ctx->pc == 0x20DF38u) {
        ctx->pc = 0x20DF3Cu;
        goto label_20df3c;
    }
    ctx->pc = 0x20DF34u;
    {
        const bool branch_taken_0x20df34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20df34) {
            ctx->pc = 0x20DFD0u;
            goto label_20dfd0;
        }
    }
    ctx->pc = 0x20DF3Cu;
label_20df3c:
    // 0x20df3c: 0x8e020928  lw          $v0, 0x928($s0)
    ctx->pc = 0x20df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2344)));
label_20df40:
    // 0x20df40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20df44:
    // 0x20df44: 0xae020928  sw          $v0, 0x928($s0)
    ctx->pc = 0x20df44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2344), GPR_U32(ctx, 2));
label_20df48:
    // 0x20df48: 0x8e020928  lw          $v0, 0x928($s0)
    ctx->pc = 0x20df48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2344)));
label_20df4c:
    // 0x20df4c: 0x284100f1  slti        $at, $v0, 0xF1
    ctx->pc = 0x20df4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)241) ? 1 : 0);
label_20df50:
    // 0x20df50: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
label_20df54:
    if (ctx->pc == 0x20DF54u) {
        ctx->pc = 0x20DF58u;
        goto label_20df58;
    }
    ctx->pc = 0x20DF50u;
    {
        const bool branch_taken_0x20df50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20df50) {
            ctx->pc = 0x20DFD4u;
            goto label_20dfd4;
        }
    }
    ctx->pc = 0x20DF58u;
label_20df58:
    // 0x20df58: 0x86030700  lh          $v1, 0x700($s0)
    ctx->pc = 0x20df58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1792)));
label_20df5c:
    // 0x20df5c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_20df60:
    if (ctx->pc == 0x20DF60u) {
        ctx->pc = 0x20DF60u;
            // 0x20df60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20DF64u;
        goto label_20df64;
    }
    ctx->pc = 0x20DF5Cu;
    {
        const bool branch_taken_0x20df5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DF5Cu;
            // 0x20df60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df5c) {
            ctx->pc = 0x20DF84u;
            goto label_20df84;
        }
    }
    ctx->pc = 0x20DF64u;
label_20df64:
    // 0x20df64: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x20df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20df68:
    // 0x20df68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20df68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20df6c:
    // 0x20df6c: 0x0  nop
    ctx->pc = 0x20df6cu;
    // NOP
label_20df70:
    // 0x20df70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20df70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20df74:
    // 0x20df74: 0x0  nop
    ctx->pc = 0x20df74u;
    // NOP
label_20df78:
    // 0x20df78: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_20df7c:
    if (ctx->pc == 0x20DF7Cu) {
        ctx->pc = 0x20DF7Cu;
            // 0x20df7c: 0x3c02bfc9  lui         $v0, 0xBFC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
        ctx->pc = 0x20DF80u;
        goto label_20df80;
    }
    ctx->pc = 0x20DF78u;
    {
        const bool branch_taken_0x20df78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DF78u;
            // 0x20df7c: 0x3c02bfc9  lui         $v0, 0xBFC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df78) {
            ctx->pc = 0x20DFACu;
            goto label_20dfac;
        }
    }
    ctx->pc = 0x20DF80u;
label_20df80:
    // 0x20df80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20df80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20df84:
    // 0x20df84: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_20df88:
    if (ctx->pc == 0x20DF88u) {
        ctx->pc = 0x20DF88u;
            // 0x20df88: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->pc = 0x20DF8Cu;
        goto label_20df8c;
    }
    ctx->pc = 0x20DF84u;
    {
        const bool branch_taken_0x20df84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20DF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DF84u;
            // 0x20df88: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df84) {
            ctx->pc = 0x20DFBCu;
            goto label_20dfbc;
        }
    }
    ctx->pc = 0x20DF8Cu;
label_20df8c:
    // 0x20df8c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x20df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20df90:
    // 0x20df90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20df90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20df94:
    // 0x20df94: 0x0  nop
    ctx->pc = 0x20df94u;
    // NOP
label_20df98:
    // 0x20df98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20df98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20df9c:
    // 0x20df9c: 0x0  nop
    ctx->pc = 0x20df9cu;
    // NOP
label_20dfa0:
    // 0x20dfa0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_20dfa4:
    if (ctx->pc == 0x20DFA4u) {
        ctx->pc = 0x20DFA8u;
        goto label_20dfa8;
    }
    ctx->pc = 0x20DFA0u;
    {
        const bool branch_taken_0x20dfa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dfa0) {
            ctx->pc = 0x20DFBCu;
            goto label_20dfbc;
        }
    }
    ctx->pc = 0x20DFA8u;
label_20dfa8:
    // 0x20dfa8: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x20dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
label_20dfac:
    // 0x20dfac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20dfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20dfb0:
    // 0x20dfb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20dfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20dfb4:
    // 0x20dfb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_20dfb8:
    if (ctx->pc == 0x20DFB8u) {
        ctx->pc = 0x20DFB8u;
            // 0x20dfb8: 0xae000928  sw          $zero, 0x928($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2344), GPR_U32(ctx, 0));
        ctx->pc = 0x20DFBCu;
        goto label_20dfbc;
    }
    ctx->pc = 0x20DFB4u;
    {
        const bool branch_taken_0x20dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DFB4u;
            // 0x20dfb8: 0xae000928  sw          $zero, 0x928($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfb4) {
            ctx->pc = 0x20DFC8u;
            goto label_20dfc8;
        }
    }
    ctx->pc = 0x20DFBCu;
label_20dfbc:
    // 0x20dfbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20dfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20dfc0:
    // 0x20dfc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20dfc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20dfc4:
    // 0x20dfc4: 0xae000928  sw          $zero, 0x928($s0)
    ctx->pc = 0x20dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2344), GPR_U32(ctx, 0));
label_20dfc8:
    // 0x20dfc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_20dfcc:
    if (ctx->pc == 0x20DFCCu) {
        ctx->pc = 0x20DFCCu;
            // 0x20dfcc: 0xc60106d0  lwc1        $f1, 0x6D0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x20DFD0u;
        goto label_20dfd0;
    }
    ctx->pc = 0x20DFC8u;
    {
        const bool branch_taken_0x20dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DFC8u;
            // 0x20dfcc: 0xc60106d0  lwc1        $f1, 0x6D0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfc8) {
            ctx->pc = 0x20DFD8u;
            goto label_20dfd8;
        }
    }
    ctx->pc = 0x20DFD0u;
label_20dfd0:
    // 0x20dfd0: 0xae000928  sw          $zero, 0x928($s0)
    ctx->pc = 0x20dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2344), GPR_U32(ctx, 0));
label_20dfd4:
    // 0x20dfd4: 0xc60106d0  lwc1        $f1, 0x6D0($s0)
    ctx->pc = 0x20dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20dfd8:
    // 0x20dfd8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x20dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_20dfdc:
    // 0x20dfdc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x20dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_20dfe0:
    // 0x20dfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20dfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20dfe4:
    // 0x20dfe4: 0x0  nop
    ctx->pc = 0x20dfe4u;
    // NOP
label_20dfe8:
    // 0x20dfe8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20dfe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20dfec:
    // 0x20dfec: 0xe60006d0  swc1        $f0, 0x6D0($s0)
    ctx->pc = 0x20dfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1744), bits); }
label_20dff0:
    // 0x20dff0: 0xc60106d4  lwc1        $f1, 0x6D4($s0)
    ctx->pc = 0x20dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20dff4:
    // 0x20dff4: 0xc60006d0  lwc1        $f0, 0x6D0($s0)
    ctx->pc = 0x20dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20dff8:
    // 0x20dff8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20dff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20dffc:
    // 0x20dffc: 0x0  nop
    ctx->pc = 0x20dffcu;
    // NOP
label_20e000:
    // 0x20e000: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_20e004:
    if (ctx->pc == 0x20E004u) {
        ctx->pc = 0x20E008u;
        goto label_20e008;
    }
    ctx->pc = 0x20E000u;
    {
        const bool branch_taken_0x20e000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e000) {
            ctx->pc = 0x20E00Cu;
            goto label_20e00c;
        }
    }
    ctx->pc = 0x20E008u;
label_20e008:
    // 0x20e008: 0xe60106d0  swc1        $f1, 0x6D0($s0)
    ctx->pc = 0x20e008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1744), bits); }
label_20e00c:
    // 0x20e00c: 0xc04c374  jal         func_130DD0
label_20e010:
    if (ctx->pc == 0x20E010u) {
        ctx->pc = 0x20E014u;
        goto label_20e014;
    }
    ctx->pc = 0x20E00Cu;
    SET_GPR_U32(ctx, 31, 0x20E014u);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E014u; }
        if (ctx->pc != 0x20E014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E014u; }
        if (ctx->pc != 0x20E014u) { return; }
    }
    ctx->pc = 0x20E014u;
label_20e014:
    // 0x20e014: 0xe6000684  swc1        $f0, 0x684($s0)
    ctx->pc = 0x20e014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1668), bits); }
label_20e018:
    // 0x20e018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e01c:
    // 0x20e01c: 0xc0835bc  jal         func_20D6F0
label_20e020:
    if (ctx->pc == 0x20E020u) {
        ctx->pc = 0x20E020u;
            // 0x20e020: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20E024u;
        goto label_20e024;
    }
    ctx->pc = 0x20E01Cu;
    SET_GPR_U32(ctx, 31, 0x20E024u);
    ctx->pc = 0x20E020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E01Cu;
            // 0x20e020: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6F0u;
    if (runtime->hasFunction(0x20D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E024u; }
        if (ctx->pc != 0x20E024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDirVect__9CAquaFishFPf_0x20d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E024u; }
        if (ctx->pc != 0x20E024u) { return; }
    }
    ctx->pc = 0x20E024u;
label_20e024:
    // 0x20e024: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20e028:
    // 0x20e028: 0xc041be0  jal         func_106F80
label_20e02c:
    if (ctx->pc == 0x20E02Cu) {
        ctx->pc = 0x20E02Cu;
            // 0x20e02c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E030u;
        goto label_20e030;
    }
    ctx->pc = 0x20E028u;
    SET_GPR_U32(ctx, 31, 0x20E030u);
    ctx->pc = 0x20E02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E028u;
            // 0x20e02c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E030u; }
        if (ctx->pc != 0x20E030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E030u; }
        if (ctx->pc != 0x20E030u) { return; }
    }
    ctx->pc = 0x20E030u;
label_20e030:
    // 0x20e030: 0xc601070c  lwc1        $f1, 0x70C($s0)
    ctx->pc = 0x20e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e034:
    // 0x20e034: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x20e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_20e038:
    // 0x20e038: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x20e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_20e03c:
    // 0x20e03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e040:
    // 0x20e040: 0x0  nop
    ctx->pc = 0x20e040u;
    // NOP
label_20e044:
    // 0x20e044: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20e044u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20e048:
    // 0x20e048: 0xc04c374  jal         func_130DD0
label_20e04c:
    if (ctx->pc == 0x20E04Cu) {
        ctx->pc = 0x20E04Cu;
            // 0x20e04c: 0xe60c070c  swc1        $f12, 0x70C($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1804), bits); }
        ctx->pc = 0x20E050u;
        goto label_20e050;
    }
    ctx->pc = 0x20E048u;
    SET_GPR_U32(ctx, 31, 0x20E050u);
    ctx->pc = 0x20E04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E048u;
            // 0x20e04c: 0xe60c070c  swc1        $f12, 0x70C($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1804), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E050u; }
        if (ctx->pc != 0x20E050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E050u; }
        if (ctx->pc != 0x20E050u) { return; }
    }
    ctx->pc = 0x20E050u;
label_20e050:
    // 0x20e050: 0xe600070c  swc1        $f0, 0x70C($s0)
    ctx->pc = 0x20e050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1804), bits); }
label_20e054:
    // 0x20e054: 0xc047a42  jal         func_11E908
label_20e058:
    if (ctx->pc == 0x20E058u) {
        ctx->pc = 0x20E058u;
            // 0x20e058: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20E05Cu;
        goto label_20e05c;
    }
    ctx->pc = 0x20E054u;
    SET_GPR_U32(ctx, 31, 0x20E05Cu);
    ctx->pc = 0x20E058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E054u;
            // 0x20e058: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E05Cu; }
        if (ctx->pc != 0x20E05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E05Cu; }
        if (ctx->pc != 0x20E05Cu) { return; }
    }
    ctx->pc = 0x20E05Cu;
label_20e05c:
    // 0x20e05c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x20e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_20e060:
    // 0x20e060: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x20e060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_20e064:
    // 0x20e064: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20e068:
    // 0x20e068: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20e068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20e06c:
    // 0x20e06c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e070:
    // 0x20e070: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x20e070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_20e074:
    // 0x20e074: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20e074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20e078:
    // 0x20e078: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_20e07c:
    // 0x20e07c: 0x8e020924  lw          $v0, 0x924($s0)
    ctx->pc = 0x20e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2340)));
label_20e080:
    // 0x20e080: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20e080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_20e084:
    // 0x20e084: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20e088:
    if (ctx->pc == 0x20E088u) {
        ctx->pc = 0x20E08Cu;
        goto label_20e08c;
    }
    ctx->pc = 0x20E084u;
    {
        const bool branch_taken_0x20e084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e084) {
            ctx->pc = 0x20E0A8u;
            goto label_20e0a8;
        }
    }
    ctx->pc = 0x20E08Cu;
label_20e08c:
    // 0x20e08c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e090:
    // 0x20e090: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x20e090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_20e094:
    // 0x20e094: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20e094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20e098:
    // 0x20e098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e09c:
    // 0x20e09c: 0x0  nop
    ctx->pc = 0x20e09cu;
    // NOP
label_20e0a0:
    // 0x20e0a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20e0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20e0a4:
    // 0x20e0a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_20e0a8:
    // 0x20e0a8: 0xc60c06d0  lwc1        $f12, 0x6D0($s0)
    ctx->pc = 0x20e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20e0ac:
    // 0x20e0ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20e0b0:
    // 0x20e0b0: 0xc041e96  jal         func_107A58
label_20e0b4:
    if (ctx->pc == 0x20E0B4u) {
        ctx->pc = 0x20E0B4u;
            // 0x20e0b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E0B8u;
        goto label_20e0b8;
    }
    ctx->pc = 0x20E0B0u;
    SET_GPR_U32(ctx, 31, 0x20E0B8u);
    ctx->pc = 0x20E0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E0B0u;
            // 0x20e0b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E0B8u; }
        if (ctx->pc != 0x20E0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E0B8u; }
        if (ctx->pc != 0x20E0B8u) { return; }
    }
    ctx->pc = 0x20E0B8u;
label_20e0b8:
    // 0x20e0b8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x20e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20e0bc:
    // 0x20e0bc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20e0bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20e0c0:
    // 0x20e0c0: 0x7e030670  sq          $v1, 0x670($s0)
    ctx->pc = 0x20e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), GPR_VEC(ctx, 3));
label_20e0c4:
    // 0x20e0c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e0c8:
    // 0x20e0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20e0cc:
    // 0x20e0cc: 0x3e00008  jr          $ra
label_20e0d0:
    if (ctx->pc == 0x20E0D0u) {
        ctx->pc = 0x20E0D0u;
            // 0x20e0d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x20E0D4u;
        goto label_fallthrough_0x20e0cc;
    }
    ctx->pc = 0x20E0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E0CCu;
            // 0x20e0d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20e0cc:
    ctx->pc = 0x20E0D4u;
}
