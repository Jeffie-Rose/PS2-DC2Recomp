#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgLoopFishing__FP11SubGameInfo
// Address: 0x2fdd10 - 0x2fe04c
void sgLoopFishing__FP11SubGameInfo_0x2fdd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgLoopFishing__FP11SubGameInfo_0x2fdd10");
#endif

    switch (ctx->pc) {
        case 0x2fdd10u: goto label_2fdd10;
        case 0x2fdd14u: goto label_2fdd14;
        case 0x2fdd18u: goto label_2fdd18;
        case 0x2fdd1cu: goto label_2fdd1c;
        case 0x2fdd20u: goto label_2fdd20;
        case 0x2fdd24u: goto label_2fdd24;
        case 0x2fdd28u: goto label_2fdd28;
        case 0x2fdd2cu: goto label_2fdd2c;
        case 0x2fdd30u: goto label_2fdd30;
        case 0x2fdd34u: goto label_2fdd34;
        case 0x2fdd38u: goto label_2fdd38;
        case 0x2fdd3cu: goto label_2fdd3c;
        case 0x2fdd40u: goto label_2fdd40;
        case 0x2fdd44u: goto label_2fdd44;
        case 0x2fdd48u: goto label_2fdd48;
        case 0x2fdd4cu: goto label_2fdd4c;
        case 0x2fdd50u: goto label_2fdd50;
        case 0x2fdd54u: goto label_2fdd54;
        case 0x2fdd58u: goto label_2fdd58;
        case 0x2fdd5cu: goto label_2fdd5c;
        case 0x2fdd60u: goto label_2fdd60;
        case 0x2fdd64u: goto label_2fdd64;
        case 0x2fdd68u: goto label_2fdd68;
        case 0x2fdd6cu: goto label_2fdd6c;
        case 0x2fdd70u: goto label_2fdd70;
        case 0x2fdd74u: goto label_2fdd74;
        case 0x2fdd78u: goto label_2fdd78;
        case 0x2fdd7cu: goto label_2fdd7c;
        case 0x2fdd80u: goto label_2fdd80;
        case 0x2fdd84u: goto label_2fdd84;
        case 0x2fdd88u: goto label_2fdd88;
        case 0x2fdd8cu: goto label_2fdd8c;
        case 0x2fdd90u: goto label_2fdd90;
        case 0x2fdd94u: goto label_2fdd94;
        case 0x2fdd98u: goto label_2fdd98;
        case 0x2fdd9cu: goto label_2fdd9c;
        case 0x2fdda0u: goto label_2fdda0;
        case 0x2fdda4u: goto label_2fdda4;
        case 0x2fdda8u: goto label_2fdda8;
        case 0x2fddacu: goto label_2fddac;
        case 0x2fddb0u: goto label_2fddb0;
        case 0x2fddb4u: goto label_2fddb4;
        case 0x2fddb8u: goto label_2fddb8;
        case 0x2fddbcu: goto label_2fddbc;
        case 0x2fddc0u: goto label_2fddc0;
        case 0x2fddc4u: goto label_2fddc4;
        case 0x2fddc8u: goto label_2fddc8;
        case 0x2fddccu: goto label_2fddcc;
        case 0x2fddd0u: goto label_2fddd0;
        case 0x2fddd4u: goto label_2fddd4;
        case 0x2fddd8u: goto label_2fddd8;
        case 0x2fdddcu: goto label_2fdddc;
        case 0x2fdde0u: goto label_2fdde0;
        case 0x2fdde4u: goto label_2fdde4;
        case 0x2fdde8u: goto label_2fdde8;
        case 0x2fddecu: goto label_2fddec;
        case 0x2fddf0u: goto label_2fddf0;
        case 0x2fddf4u: goto label_2fddf4;
        case 0x2fddf8u: goto label_2fddf8;
        case 0x2fddfcu: goto label_2fddfc;
        case 0x2fde00u: goto label_2fde00;
        case 0x2fde04u: goto label_2fde04;
        case 0x2fde08u: goto label_2fde08;
        case 0x2fde0cu: goto label_2fde0c;
        case 0x2fde10u: goto label_2fde10;
        case 0x2fde14u: goto label_2fde14;
        case 0x2fde18u: goto label_2fde18;
        case 0x2fde1cu: goto label_2fde1c;
        case 0x2fde20u: goto label_2fde20;
        case 0x2fde24u: goto label_2fde24;
        case 0x2fde28u: goto label_2fde28;
        case 0x2fde2cu: goto label_2fde2c;
        case 0x2fde30u: goto label_2fde30;
        case 0x2fde34u: goto label_2fde34;
        case 0x2fde38u: goto label_2fde38;
        case 0x2fde3cu: goto label_2fde3c;
        case 0x2fde40u: goto label_2fde40;
        case 0x2fde44u: goto label_2fde44;
        case 0x2fde48u: goto label_2fde48;
        case 0x2fde4cu: goto label_2fde4c;
        case 0x2fde50u: goto label_2fde50;
        case 0x2fde54u: goto label_2fde54;
        case 0x2fde58u: goto label_2fde58;
        case 0x2fde5cu: goto label_2fde5c;
        case 0x2fde60u: goto label_2fde60;
        case 0x2fde64u: goto label_2fde64;
        case 0x2fde68u: goto label_2fde68;
        case 0x2fde6cu: goto label_2fde6c;
        case 0x2fde70u: goto label_2fde70;
        case 0x2fde74u: goto label_2fde74;
        case 0x2fde78u: goto label_2fde78;
        case 0x2fde7cu: goto label_2fde7c;
        case 0x2fde80u: goto label_2fde80;
        case 0x2fde84u: goto label_2fde84;
        case 0x2fde88u: goto label_2fde88;
        case 0x2fde8cu: goto label_2fde8c;
        case 0x2fde90u: goto label_2fde90;
        case 0x2fde94u: goto label_2fde94;
        case 0x2fde98u: goto label_2fde98;
        case 0x2fde9cu: goto label_2fde9c;
        case 0x2fdea0u: goto label_2fdea0;
        case 0x2fdea4u: goto label_2fdea4;
        case 0x2fdea8u: goto label_2fdea8;
        case 0x2fdeacu: goto label_2fdeac;
        case 0x2fdeb0u: goto label_2fdeb0;
        case 0x2fdeb4u: goto label_2fdeb4;
        case 0x2fdeb8u: goto label_2fdeb8;
        case 0x2fdebcu: goto label_2fdebc;
        case 0x2fdec0u: goto label_2fdec0;
        case 0x2fdec4u: goto label_2fdec4;
        case 0x2fdec8u: goto label_2fdec8;
        case 0x2fdeccu: goto label_2fdecc;
        case 0x2fded0u: goto label_2fded0;
        case 0x2fded4u: goto label_2fded4;
        case 0x2fded8u: goto label_2fded8;
        case 0x2fdedcu: goto label_2fdedc;
        case 0x2fdee0u: goto label_2fdee0;
        case 0x2fdee4u: goto label_2fdee4;
        case 0x2fdee8u: goto label_2fdee8;
        case 0x2fdeecu: goto label_2fdeec;
        case 0x2fdef0u: goto label_2fdef0;
        case 0x2fdef4u: goto label_2fdef4;
        case 0x2fdef8u: goto label_2fdef8;
        case 0x2fdefcu: goto label_2fdefc;
        case 0x2fdf00u: goto label_2fdf00;
        case 0x2fdf04u: goto label_2fdf04;
        case 0x2fdf08u: goto label_2fdf08;
        case 0x2fdf0cu: goto label_2fdf0c;
        case 0x2fdf10u: goto label_2fdf10;
        case 0x2fdf14u: goto label_2fdf14;
        case 0x2fdf18u: goto label_2fdf18;
        case 0x2fdf1cu: goto label_2fdf1c;
        case 0x2fdf20u: goto label_2fdf20;
        case 0x2fdf24u: goto label_2fdf24;
        case 0x2fdf28u: goto label_2fdf28;
        case 0x2fdf2cu: goto label_2fdf2c;
        case 0x2fdf30u: goto label_2fdf30;
        case 0x2fdf34u: goto label_2fdf34;
        case 0x2fdf38u: goto label_2fdf38;
        case 0x2fdf3cu: goto label_2fdf3c;
        case 0x2fdf40u: goto label_2fdf40;
        case 0x2fdf44u: goto label_2fdf44;
        case 0x2fdf48u: goto label_2fdf48;
        case 0x2fdf4cu: goto label_2fdf4c;
        case 0x2fdf50u: goto label_2fdf50;
        case 0x2fdf54u: goto label_2fdf54;
        case 0x2fdf58u: goto label_2fdf58;
        case 0x2fdf5cu: goto label_2fdf5c;
        case 0x2fdf60u: goto label_2fdf60;
        case 0x2fdf64u: goto label_2fdf64;
        case 0x2fdf68u: goto label_2fdf68;
        case 0x2fdf6cu: goto label_2fdf6c;
        case 0x2fdf70u: goto label_2fdf70;
        case 0x2fdf74u: goto label_2fdf74;
        case 0x2fdf78u: goto label_2fdf78;
        case 0x2fdf7cu: goto label_2fdf7c;
        case 0x2fdf80u: goto label_2fdf80;
        case 0x2fdf84u: goto label_2fdf84;
        case 0x2fdf88u: goto label_2fdf88;
        case 0x2fdf8cu: goto label_2fdf8c;
        case 0x2fdf90u: goto label_2fdf90;
        case 0x2fdf94u: goto label_2fdf94;
        case 0x2fdf98u: goto label_2fdf98;
        case 0x2fdf9cu: goto label_2fdf9c;
        case 0x2fdfa0u: goto label_2fdfa0;
        case 0x2fdfa4u: goto label_2fdfa4;
        case 0x2fdfa8u: goto label_2fdfa8;
        case 0x2fdfacu: goto label_2fdfac;
        case 0x2fdfb0u: goto label_2fdfb0;
        case 0x2fdfb4u: goto label_2fdfb4;
        case 0x2fdfb8u: goto label_2fdfb8;
        case 0x2fdfbcu: goto label_2fdfbc;
        case 0x2fdfc0u: goto label_2fdfc0;
        case 0x2fdfc4u: goto label_2fdfc4;
        case 0x2fdfc8u: goto label_2fdfc8;
        case 0x2fdfccu: goto label_2fdfcc;
        case 0x2fdfd0u: goto label_2fdfd0;
        case 0x2fdfd4u: goto label_2fdfd4;
        case 0x2fdfd8u: goto label_2fdfd8;
        case 0x2fdfdcu: goto label_2fdfdc;
        case 0x2fdfe0u: goto label_2fdfe0;
        case 0x2fdfe4u: goto label_2fdfe4;
        case 0x2fdfe8u: goto label_2fdfe8;
        case 0x2fdfecu: goto label_2fdfec;
        case 0x2fdff0u: goto label_2fdff0;
        case 0x2fdff4u: goto label_2fdff4;
        case 0x2fdff8u: goto label_2fdff8;
        case 0x2fdffcu: goto label_2fdffc;
        case 0x2fe000u: goto label_2fe000;
        case 0x2fe004u: goto label_2fe004;
        case 0x2fe008u: goto label_2fe008;
        case 0x2fe00cu: goto label_2fe00c;
        case 0x2fe010u: goto label_2fe010;
        case 0x2fe014u: goto label_2fe014;
        case 0x2fe018u: goto label_2fe018;
        case 0x2fe01cu: goto label_2fe01c;
        case 0x2fe020u: goto label_2fe020;
        case 0x2fe024u: goto label_2fe024;
        case 0x2fe028u: goto label_2fe028;
        case 0x2fe02cu: goto label_2fe02c;
        case 0x2fe030u: goto label_2fe030;
        case 0x2fe034u: goto label_2fe034;
        case 0x2fe038u: goto label_2fe038;
        case 0x2fe03cu: goto label_2fe03c;
        case 0x2fe040u: goto label_2fe040;
        case 0x2fe044u: goto label_2fe044;
        case 0x2fe048u: goto label_2fe048;
        default: break;
    }

    ctx->pc = 0x2fdd10u;

label_2fdd10:
    // 0x2fdd10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fdd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2fdd14:
    // 0x2fdd14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fdd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2fdd18:
    // 0x2fdd18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fdd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fdd1c:
    // 0x2fdd1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fdd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fdd20:
    // 0x2fdd20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fdd20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fdd24:
    // 0x2fdd24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fdd28:
    // 0x2fdd28: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2fdd28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fdd2c:
    // 0x2fdd2c: 0x8e052e50  lw          $a1, 0x2E50($s0)
    ctx->pc = 0x2fdd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11856)));
label_2fdd30:
    // 0x2fdd30: 0xc0a0ed8  jal         func_283B60
label_2fdd34:
    if (ctx->pc == 0x2FDD34u) {
        ctx->pc = 0x2FDD34u;
            // 0x2fdd34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD38u;
        goto label_2fdd38;
    }
    ctx->pc = 0x2FDD30u;
    SET_GPR_U32(ctx, 31, 0x2FDD38u);
    ctx->pc = 0x2FDD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD30u;
            // 0x2fdd34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDD38u; }
        if (ctx->pc != 0x2FDD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDD38u; }
        if (ctx->pc != 0x2FDD38u) { return; }
    }
    ctx->pc = 0x2FDD38u;
label_2fdd38:
    // 0x2fdd38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fdd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fdd3c:
    // 0x2fdd3c: 0x8f829fe8  lw          $v0, -0x6018($gp)
    ctx->pc = 0x2fdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942696)));
label_2fdd40:
    // 0x2fdd40: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_2fdd44:
    if (ctx->pc == 0x2FDD44u) {
        ctx->pc = 0x2FDD48u;
        goto label_2fdd48;
    }
    ctx->pc = 0x2FDD40u;
    {
        const bool branch_taken_0x2fdd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fdd40) {
            ctx->pc = 0x2FDEC4u;
            goto label_2fdec4;
        }
    }
    ctx->pc = 0x2FDD48u;
label_2fdd48:
    // 0x2fdd48: 0x8f829ff0  lw          $v0, -0x6010($gp)
    ctx->pc = 0x2fdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942704)));
label_2fdd4c:
    // 0x2fdd4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdd50:
    // 0x2fdd50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fdd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fdd54:
    // 0x2fdd54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fdd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fdd58:
    // 0x2fdd58: 0xc0bfba4  jal         func_2FEE90
label_2fdd5c:
    if (ctx->pc == 0x2FDD5Cu) {
        ctx->pc = 0x2FDD5Cu;
            // 0x2fdd5c: 0xaf829ff0  sw          $v0, -0x6010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942704), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDD60u;
        goto label_2fdd60;
    }
    ctx->pc = 0x2FDD58u;
    SET_GPR_U32(ctx, 31, 0x2FDD60u);
    ctx->pc = 0x2FDD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD58u;
            // 0x2fdd5c: 0xaf829ff0  sw          $v0, -0x6010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FEE90u;
    if (runtime->hasFunction(0x2FEE90u)) {
        auto targetFn = runtime->lookupFunction(0x2FEE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDD60u; }
        if (ctx->pc != 0x2FDD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaControl__FP6CSceneP11CPadControl_0x2fee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDD60u; }
        if (ctx->pc != 0x2FDD60u) { return; }
    }
    ctx->pc = 0x2FDD60u;
label_2fdd60:
    // 0x2fdd60: 0x8f849fec  lw          $a0, -0x6014($gp)
    ctx->pc = 0x2fdd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942700)));
label_2fdd64:
    // 0x2fdd64: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x2fdd64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2fdd68:
    // 0x2fdd68: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_2fdd6c:
    if (ctx->pc == 0x2FDD6Cu) {
        ctx->pc = 0x2FDD6Cu;
            // 0x2fdd6c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2FDD70u;
        goto label_2fdd70;
    }
    ctx->pc = 0x2FDD68u;
    {
        const bool branch_taken_0x2fdd68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD68u;
            // 0x2fdd6c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd68) {
            ctx->pc = 0x2FDEACu;
            goto label_2fdeac;
        }
    }
    ctx->pc = 0x2FDD70u;
label_2fdd70:
    // 0x2fdd70: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2fdd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2fdd74:
    // 0x2fdd74: 0x24631f60  addiu       $v1, $v1, 0x1F60
    ctx->pc = 0x2fdd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8032));
label_2fdd78:
    // 0x2fdd78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fdd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fdd7c:
    // 0x2fdd7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fdd80:
    // 0x2fdd80: 0x400008  jr          $v0
label_2fdd84:
    if (ctx->pc == 0x2FDD84u) {
        ctx->pc = 0x2FDD88u;
        goto label_2fdd88;
    }
    ctx->pc = 0x2FDD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FDD88u: goto label_2fdd88;
            case 0x2FDDBCu: goto label_2fddbc;
            case 0x2FDDD8u: goto label_2fddd8;
            case 0x2FDE00u: goto label_2fde00;
            case 0x2FDE24u: goto label_2fde24;
            case 0x2FDE54u: goto label_2fde54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FDD88u;
label_2fdd88:
    // 0x2fdd88: 0x8f829ff0  lw          $v0, -0x6010($gp)
    ctx->pc = 0x2fdd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942704)));
label_2fdd8c:
    // 0x2fdd8c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2fdd8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2fdd90:
    // 0x2fdd90: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2fdd94:
    if (ctx->pc == 0x2FDD94u) {
        ctx->pc = 0x2FDD94u;
            // 0x2fdd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD98u;
        goto label_2fdd98;
    }
    ctx->pc = 0x2FDD90u;
    {
        const bool branch_taken_0x2fdd90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD90u;
            // 0x2fdd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd90) {
            ctx->pc = 0x2FDDA8u;
            goto label_2fdda8;
        }
    }
    ctx->pc = 0x2FDD98u;
label_2fdd98:
    // 0x2fdd98: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_2fdd9c:
    if (ctx->pc == 0x2FDD9Cu) {
        ctx->pc = 0x2FDD9Cu;
            // 0x2fdd9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2FDDA0u;
        goto label_2fdda0;
    }
    ctx->pc = 0x2FDD98u;
    {
        const bool branch_taken_0x2fdd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD98u;
            // 0x2fdd9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd98) {
            ctx->pc = 0x2FE038u;
            goto label_2fe038;
        }
    }
    ctx->pc = 0x2FDDA0u;
label_2fdda0:
    // 0x2fdda0: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2fdda4:
    if (ctx->pc == 0x2FDDA4u) {
        ctx->pc = 0x2FDDA4u;
            // 0x2fdda4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDA8u;
        goto label_2fdda8;
    }
    ctx->pc = 0x2FDDA0u;
    {
        const bool branch_taken_0x2fdda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDDA0u;
            // 0x2fdda4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdda0) {
            ctx->pc = 0x2FE034u;
            goto label_2fe034;
        }
    }
    ctx->pc = 0x2FDDA8u;
label_2fdda8:
    // 0x2fdda8: 0x8e022ca0  lw          $v0, 0x2CA0($s0)
    ctx->pc = 0x2fdda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11424)));
label_2fddac:
    // 0x2fddac: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2fddacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2fddb0:
    // 0x2fddb0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2fddb4:
    if (ctx->pc == 0x2FDDB4u) {
        ctx->pc = 0x2FDDB4u;
            // 0x2fddb4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2FDDB8u;
        goto label_2fddb8;
    }
    ctx->pc = 0x2FDDB0u;
    {
        const bool branch_taken_0x2fddb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDDB0u;
            // 0x2fddb4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fddb0) {
            ctx->pc = 0x2FDDA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fdda0;
        }
    }
    ctx->pc = 0x2FDDB8u;
label_2fddb8:
    // 0x2fddb8: 0xaf829fec  sw          $v0, -0x6014($gp)
    ctx->pc = 0x2fddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942700), GPR_U32(ctx, 2));
label_2fddbc:
    // 0x2fddbc: 0xc0bf3a0  jal         func_2FCE80
label_2fddc0:
    if (ctx->pc == 0x2FDDC0u) {
        ctx->pc = 0x2FDDC4u;
        goto label_2fddc4;
    }
    ctx->pc = 0x2FDDBCu;
    SET_GPR_U32(ctx, 31, 0x2FDDC4u);
    ctx->pc = 0x2FCE80u;
    if (runtime->hasFunction(0x2FCE80u)) {
        auto targetFn = runtime->lookupFunction(0x2FCE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDDC4u; }
        if (ctx->pc != 0x2FDDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDataLoading__Fv_0x2fce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDDC4u; }
        if (ctx->pc != 0x2FDDC4u) { return; }
    }
    ctx->pc = 0x2FDDC4u;
label_2fddc4:
    // 0x2fddc4: 0x8f839fec  lw          $v1, -0x6014($gp)
    ctx->pc = 0x2fddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942700)));
label_2fddc8:
    // 0x2fddc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fddc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fddcc:
    // 0x2fddcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2fddd0:
    // 0x2fddd0: 0x10000098  b           . + 4 + (0x98 << 2)
label_2fddd4:
    if (ctx->pc == 0x2FDDD4u) {
        ctx->pc = 0x2FDDD4u;
            // 0x2fddd4: 0xaf839fec  sw          $v1, -0x6014($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942700), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDDD8u;
        goto label_2fddd8;
    }
    ctx->pc = 0x2FDDD0u;
    {
        const bool branch_taken_0x2fddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDDD0u;
            // 0x2fddd4: 0xaf839fec  sw          $v1, -0x6014($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fddd0) {
            ctx->pc = 0x2FE034u;
            goto label_2fe034;
        }
    }
    ctx->pc = 0x2FDDD8u;
label_2fddd8:
    // 0x2fddd8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fddd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fdddc:
    // 0x2fdddc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fdddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fdde0:
    // 0x2fdde0: 0xac209d54  sw          $zero, -0x62AC($at)
    ctx->pc = 0x2fdde0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942036), GPR_U32(ctx, 0));
label_2fdde4:
    // 0x2fdde4: 0x24849d30  addiu       $a0, $a0, -0x62D0
    ctx->pc = 0x2fdde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942000));
label_2fdde8:
    // 0x2fdde8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fdde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fddec:
    // 0x2fddec: 0xc0bf3e8  jal         func_2FCFA0
label_2fddf0:
    if (ctx->pc == 0x2FDDF0u) {
        ctx->pc = 0x2FDDF0u;
            // 0x2fddf0: 0xac209d4c  sw          $zero, -0x62B4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942028), GPR_U32(ctx, 0));
        ctx->pc = 0x2FDDF4u;
        goto label_2fddf4;
    }
    ctx->pc = 0x2FDDECu;
    SET_GPR_U32(ctx, 31, 0x2FDDF4u);
    ctx->pc = 0x2FDDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDDECu;
            // 0x2fddf0: 0xac209d4c  sw          $zero, -0x62B4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCFA0u;
    if (runtime->hasFunction(0x2FCFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2FCFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDDF4u; }
        if (ctx->pc != 0x2FDDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateLoadThread__FP9mgCMemory_0x2fcfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDDF4u; }
        if (ctx->pc != 0x2FDDF4u) { return; }
    }
    ctx->pc = 0x2FDDF4u;
label_2fddf4:
    // 0x2fddf4: 0x8f829fec  lw          $v0, -0x6014($gp)
    ctx->pc = 0x2fddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942700)));
label_2fddf8:
    // 0x2fddf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fddfc:
    // 0x2fddfc: 0xaf829fec  sw          $v0, -0x6014($gp)
    ctx->pc = 0x2fddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942700), GPR_U32(ctx, 2));
label_2fde00:
    // 0x2fde00: 0xc0bf410  jal         func_2FD040
label_2fde04:
    if (ctx->pc == 0x2FDE04u) {
        ctx->pc = 0x2FDE08u;
        goto label_2fde08;
    }
    ctx->pc = 0x2FDE00u;
    SET_GPR_U32(ctx, 31, 0x2FDE08u);
    ctx->pc = 0x2FD040u;
    if (runtime->hasFunction(0x2FD040u)) {
        auto targetFn = runtime->lookupFunction(0x2FD040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE08u; }
        if (ctx->pc != 0x2FDE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepLoadThread__Fv_0x2fd040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE08u; }
        if (ctx->pc != 0x2FDE08u) { return; }
    }
    ctx->pc = 0x2FDE08u;
label_2fde08:
    // 0x2fde08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fde0c:
    if (ctx->pc == 0x2FDE0Cu) {
        ctx->pc = 0x2FDE0Cu;
            // 0x2fde0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE10u;
        goto label_2fde10;
    }
    ctx->pc = 0x2FDE08u;
    {
        const bool branch_taken_0x2fde08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE08u;
            // 0x2fde0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde08) {
            ctx->pc = 0x2FDE18u;
            goto label_2fde18;
        }
    }
    ctx->pc = 0x2FDE10u;
label_2fde10:
    // 0x2fde10: 0x10000088  b           . + 4 + (0x88 << 2)
label_2fde14:
    if (ctx->pc == 0x2FDE14u) {
        ctx->pc = 0x2FDE18u;
        goto label_2fde18;
    }
    ctx->pc = 0x2FDE10u;
    {
        const bool branch_taken_0x2fde10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fde10) {
            ctx->pc = 0x2FE034u;
            goto label_2fe034;
        }
    }
    ctx->pc = 0x2FDE18u;
label_2fde18:
    // 0x2fde18: 0x8f829fec  lw          $v0, -0x6014($gp)
    ctx->pc = 0x2fde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942700)));
label_2fde1c:
    // 0x2fde1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fde1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fde20:
    // 0x2fde20: 0xaf829fec  sw          $v0, -0x6014($gp)
    ctx->pc = 0x2fde20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942700), GPR_U32(ctx, 2));
label_2fde24:
    // 0x2fde24: 0xc05f69c  jal         func_17DA70
label_2fde28:
    if (ctx->pc == 0x2FDE28u) {
        ctx->pc = 0x2FDE28u;
            // 0x2fde28: 0x26042c70  addiu       $a0, $s0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
        ctx->pc = 0x2FDE2Cu;
        goto label_2fde2c;
    }
    ctx->pc = 0x2FDE24u;
    SET_GPR_U32(ctx, 31, 0x2FDE2Cu);
    ctx->pc = 0x2FDE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE24u;
            // 0x2fde28: 0x26042c70  addiu       $a0, $s0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DA70u;
    if (runtime->hasFunction(0x17DA70u)) {
        auto targetFn = runtime->lookupFunction(0x17DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE2Cu; }
        if (ctx->pc != 0x2FDE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CaptureScreen__10CFadeInOutFv_0x17da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE2Cu; }
        if (ctx->pc != 0x2FDE2Cu) { return; }
    }
    ctx->pc = 0x2FDE2Cu;
label_2fde2c:
    // 0x2fde2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fde30:
    // 0x2fde30: 0x26042c70  addiu       $a0, $s0, 0x2C70
    ctx->pc = 0x2fde30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
label_2fde34:
    // 0x2fde34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fde34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fde38:
    // 0x2fde38: 0xc05f628  jal         func_17D8A0
label_2fde3c:
    if (ctx->pc == 0x2FDE3Cu) {
        ctx->pc = 0x2FDE3Cu;
            // 0x2fde3c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2FDE40u;
        goto label_2fde40;
    }
    ctx->pc = 0x2FDE38u;
    SET_GPR_U32(ctx, 31, 0x2FDE40u);
    ctx->pc = 0x2FDE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE38u;
            // 0x2fde3c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D8A0u;
    if (runtime->hasFunction(0x17D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x17D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE40u; }
        if (ctx->pc != 0x2FDE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CrossFade__10CFadeInOutFif_0x17d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE40u; }
        if (ctx->pc != 0x2FDE40u) { return; }
    }
    ctx->pc = 0x2FDE40u;
label_2fde40:
    // 0x2fde40: 0x8f839fec  lw          $v1, -0x6014($gp)
    ctx->pc = 0x2fde40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942700)));
label_2fde44:
    // 0x2fde44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fde44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fde48:
    // 0x2fde48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fde48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2fde4c:
    // 0x2fde4c: 0x10000079  b           . + 4 + (0x79 << 2)
label_2fde50:
    if (ctx->pc == 0x2FDE50u) {
        ctx->pc = 0x2FDE50u;
            // 0x2fde50: 0xaf839fec  sw          $v1, -0x6014($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942700), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDE54u;
        goto label_2fde54;
    }
    ctx->pc = 0x2FDE4Cu;
    {
        const bool branch_taken_0x2fde4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE4Cu;
            // 0x2fde50: 0xaf839fec  sw          $v1, -0x6014($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde4c) {
            ctx->pc = 0x2FE034u;
            goto label_2fe034;
        }
    }
    ctx->pc = 0x2FDE54u;
label_2fde54:
    // 0x2fde54: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_2fde58:
    if (ctx->pc == 0x2FDE58u) {
        ctx->pc = 0x2FDE5Cu;
        goto label_2fde5c;
    }
    ctx->pc = 0x2FDE54u;
    {
        const bool branch_taken_0x2fde54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fde54) {
            ctx->pc = 0x2FDE90u;
            goto label_2fde90;
        }
    }
    ctx->pc = 0x2FDE5Cu;
label_2fde5c:
    // 0x2fde5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2fde5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fde60:
    // 0x2fde60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fde60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fde64:
    // 0x2fde64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fde64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fde68:
    // 0x2fde68: 0x24a51f28  addiu       $a1, $a1, 0x1F28
    ctx->pc = 0x2fde68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7976));
label_2fde6c:
    // 0x2fde6c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2fde6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2fde70:
    // 0x2fde70: 0x320f809  jalr        $t9
label_2fde74:
    if (ctx->pc == 0x2FDE74u) {
        ctx->pc = 0x2FDE74u;
            // 0x2fde74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FDE78u;
        goto label_2fde78;
    }
    ctx->pc = 0x2FDE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FDE78u);
        ctx->pc = 0x2FDE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE70u;
            // 0x2fde74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FDE78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE78u; }
            if (ctx->pc != 0x2FDE78u) { return; }
        }
        }
    }
    ctx->pc = 0x2FDE78u;
label_2fde78:
    // 0x2fde78: 0xc05cdc0  jal         func_173700
label_2fde7c:
    if (ctx->pc == 0x2FDE7Cu) {
        ctx->pc = 0x2FDE7Cu;
            // 0x2fde7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE80u;
        goto label_2fde80;
    }
    ctx->pc = 0x2FDE78u;
    SET_GPR_U32(ctx, 31, 0x2FDE80u);
    ctx->pc = 0x2FDE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE78u;
            // 0x2fde7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE80u; }
        if (ctx->pc != 0x2FDE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE80u; }
        if (ctx->pc != 0x2FDE80u) { return; }
    }
    ctx->pc = 0x2FDE80u;
label_2fde80:
    // 0x2fde80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2fde80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fde84:
    // 0x2fde84: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2fde84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2fde88:
    // 0x2fde88: 0x320f809  jalr        $t9
label_2fde8c:
    if (ctx->pc == 0x2FDE8Cu) {
        ctx->pc = 0x2FDE8Cu;
            // 0x2fde8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE90u;
        goto label_2fde90;
    }
    ctx->pc = 0x2FDE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FDE90u);
        ctx->pc = 0x2FDE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE88u;
            // 0x2fde8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FDE90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE90u; }
            if (ctx->pc != 0x2FDE90u) { return; }
        }
        }
    }
    ctx->pc = 0x2FDE90u;
label_2fde90:
    // 0x2fde90: 0xc0bf420  jal         func_2FD080
label_2fde94:
    if (ctx->pc == 0x2FDE94u) {
        ctx->pc = 0x2FDE98u;
        goto label_2fde98;
    }
    ctx->pc = 0x2FDE90u;
    SET_GPR_U32(ctx, 31, 0x2FDE98u);
    ctx->pc = 0x2FD080u;
    if (runtime->hasFunction(0x2FD080u)) {
        auto targetFn = runtime->lookupFunction(0x2FD080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE98u; }
        if (ctx->pc != 0x2FDE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteLoadThread__Fv_0x2fd080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE98u; }
        if (ctx->pc != 0x2FDE98u) { return; }
    }
    ctx->pc = 0x2FDE98u;
label_2fde98:
    // 0x2fde98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fde98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fde9c:
    // 0x2fde9c: 0xaf809fec  sw          $zero, -0x6014($gp)
    ctx->pc = 0x2fde9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942700), GPR_U32(ctx, 0));
label_2fdea0:
    // 0x2fdea0: 0xaf829fe8  sw          $v0, -0x6018($gp)
    ctx->pc = 0x2fdea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942696), GPR_U32(ctx, 2));
label_2fdea4:
    // 0x2fdea4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2fdea8:
    if (ctx->pc == 0x2FDEA8u) {
        ctx->pc = 0x2FDEA8u;
            // 0x2fdea8: 0xaf809ff0  sw          $zero, -0x6010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942704), GPR_U32(ctx, 0));
        ctx->pc = 0x2FDEACu;
        goto label_2fdeac;
    }
    ctx->pc = 0x2FDEA4u;
    {
        const bool branch_taken_0x2fdea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEA4u;
            // 0x2fdea8: 0xaf809ff0  sw          $zero, -0x6010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdea4) {
            ctx->pc = 0x2FDEC4u;
            goto label_2fdec4;
        }
    }
    ctx->pc = 0x2FDEACu;
label_2fdeac:
    // 0x2fdeac: 0xc0bf1d4  jal         func_2FC750
label_2fdeb0:
    if (ctx->pc == 0x2FDEB0u) {
        ctx->pc = 0x2FDEB0u;
            // 0x2fdeb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEB4u;
        goto label_2fdeb4;
    }
    ctx->pc = 0x2FDEACu;
    SET_GPR_U32(ctx, 31, 0x2FDEB4u);
    ctx->pc = 0x2FDEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEACu;
            // 0x2fdeb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC750u;
    if (runtime->hasFunction(0x2FC750u)) {
        auto targetFn = runtime->lookupFunction(0x2FC750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDEB4u; }
        if (ctx->pc != 0x2FDEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExitFishing__FP6CScene_0x2fc750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDEB4u; }
        if (ctx->pc != 0x2FDEB4u) { return; }
    }
    ctx->pc = 0x2FDEB4u;
label_2fdeb4:
    // 0x2fdeb4: 0xc0bf714  jal         func_2FDC50
label_2fdeb8:
    if (ctx->pc == 0x2FDEB8u) {
        ctx->pc = 0x2FDEB8u;
            // 0x2fdeb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEBCu;
        goto label_2fdebc;
    }
    ctx->pc = 0x2FDEB4u;
    SET_GPR_U32(ctx, 31, 0x2FDEBCu);
    ctx->pc = 0x2FDEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEB4u;
            // 0x2fdeb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC50u;
    if (runtime->hasFunction(0x2FDC50u)) {
        auto targetFn = runtime->lookupFunction(0x2FDC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDEBCu; }
        if (ctx->pc != 0x2FDEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgExitFishing__FP11SubGameInfo_0x2fdc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDEBCu; }
        if (ctx->pc != 0x2FDEBCu) { return; }
    }
    ctx->pc = 0x2FDEBCu;
label_2fdebc:
    // 0x2fdebc: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2fdec0:
    if (ctx->pc == 0x2FDEC0u) {
        ctx->pc = 0x2FDEC0u;
            // 0x2fdec0: 0x8f82a05c  lw          $v0, -0x5FA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942812)));
        ctx->pc = 0x2FDEC4u;
        goto label_2fdec4;
    }
    ctx->pc = 0x2FDEBCu;
    {
        const bool branch_taken_0x2fdebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEBCu;
            // 0x2fdec0: 0x8f82a05c  lw          $v0, -0x5FA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdebc) {
            ctx->pc = 0x2FE034u;
            goto label_2fe034;
        }
    }
    ctx->pc = 0x2FDEC4u;
label_2fdec4:
    // 0x2fdec4: 0x3c11003d  lui         $s1, 0x3D
    ctx->pc = 0x2fdec4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61 << 16));
label_2fdec8:
    // 0x2fdec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fdec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fdecc:
    // 0x2fdecc: 0xc0c0fe0  jal         func_303F80
label_2fded0:
    if (ctx->pc == 0x2FDED0u) {
        ctx->pc = 0x2FDED0u;
            // 0x2fded0: 0x26317b60  addiu       $s1, $s1, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31584));
        ctx->pc = 0x2FDED4u;
        goto label_2fded4;
    }
    ctx->pc = 0x2FDECCu;
    SET_GPR_U32(ctx, 31, 0x2FDED4u);
    ctx->pc = 0x2FDED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDECCu;
            // 0x2fded0: 0x26317b60  addiu       $s1, $s1, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F80u;
    if (runtime->hasFunction(0x303F80u)) {
        auto targetFn = runtime->lookupFunction(0x303F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDED4u; }
        if (ctx->pc != 0x2FDED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgSetMenuOpenEnableFlag__Fi_0x303f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDED4u; }
        if (ctx->pc != 0x2FDED4u) { return; }
    }
    ctx->pc = 0x2FDED4u;
label_2fded4:
    // 0x2fded4: 0x8f829fe0  lw          $v0, -0x6020($gp)
    ctx->pc = 0x2fded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
label_2fded8:
    // 0x2fded8: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x2fded8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2fdedc:
    // 0x2fdedc: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_2fdee0:
    if (ctx->pc == 0x2FDEE0u) {
        ctx->pc = 0x2FDEE0u;
            // 0x2fdee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEE4u;
        goto label_2fdee4;
    }
    ctx->pc = 0x2FDEDCu;
    {
        const bool branch_taken_0x2fdedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEDCu;
            // 0x2fdee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdedc) {
            ctx->pc = 0x2FDFA4u;
            goto label_2fdfa4;
        }
    }
    ctx->pc = 0x2FDEE4u;
label_2fdee4:
    // 0x2fdee4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2fdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_2fdee8:
    // 0x2fdee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2fdee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fdeec:
    // 0x2fdeec: 0x24631f40  addiu       $v1, $v1, 0x1F40
    ctx->pc = 0x2fdeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8000));
label_2fdef0:
    // 0x2fdef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fdef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fdef4:
    // 0x2fdef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fdef8:
    // 0x2fdef8: 0x400008  jr          $v0
label_2fdefc:
    if (ctx->pc == 0x2FDEFCu) {
        ctx->pc = 0x2FDF00u;
        goto label_2fdf00;
    }
    ctx->pc = 0x2FDEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FDF00u: goto label_2fdf00;
            case 0x2FDF14u: goto label_2fdf14;
            case 0x2FDF28u: goto label_2fdf28;
            case 0x2FDF3Cu: goto label_2fdf3c;
            case 0x2FDF50u: goto label_2fdf50;
            case 0x2FDF64u: goto label_2fdf64;
            case 0x2FDF78u: goto label_2fdf78;
            case 0x2FDFA0u: goto label_2fdfa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FDF00u;
label_2fdf00:
    // 0x2fdf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf04:
    // 0x2fdf04: 0xc0bfba4  jal         func_2FEE90
label_2fdf08:
    if (ctx->pc == 0x2FDF08u) {
        ctx->pc = 0x2FDF08u;
            // 0x2fdf08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF0Cu;
        goto label_2fdf0c;
    }
    ctx->pc = 0x2FDF04u;
    SET_GPR_U32(ctx, 31, 0x2FDF0Cu);
    ctx->pc = 0x2FDF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF04u;
            // 0x2fdf08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FEE90u;
    if (runtime->hasFunction(0x2FEE90u)) {
        auto targetFn = runtime->lookupFunction(0x2FEE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF0Cu; }
        if (ctx->pc != 0x2FDF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaControl__FP6CSceneP11CPadControl_0x2fee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF0Cu; }
        if (ctx->pc != 0x2FDF0Cu) { return; }
    }
    ctx->pc = 0x2FDF0Cu;
label_2fdf0c:
    // 0x2fdf0c: 0x10000024  b           . + 4 + (0x24 << 2)
label_2fdf10:
    if (ctx->pc == 0x2FDF10u) {
        ctx->pc = 0x2FDF14u;
        goto label_2fdf14;
    }
    ctx->pc = 0x2FDF0Cu;
    {
        const bool branch_taken_0x2fdf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf0c) {
            ctx->pc = 0x2FDFA0u;
            goto label_2fdfa0;
        }
    }
    ctx->pc = 0x2FDF14u;
label_2fdf14:
    // 0x2fdf14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf18:
    // 0x2fdf18: 0xc0bfd74  jal         func_2FF5D0
label_2fdf1c:
    if (ctx->pc == 0x2FDF1Cu) {
        ctx->pc = 0x2FDF1Cu;
            // 0x2fdf1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF20u;
        goto label_2fdf20;
    }
    ctx->pc = 0x2FDF18u;
    SET_GPR_U32(ctx, 31, 0x2FDF20u);
    ctx->pc = 0x2FDF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF18u;
            // 0x2fdf1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FF5D0u;
    if (runtime->hasFunction(0x2FF5D0u)) {
        auto targetFn = runtime->lookupFunction(0x2FF5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF20u; }
        if (ctx->pc != 0x2FDF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectCastingPoint__FP6CSceneP11CPadControl_0x2ff5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF20u; }
        if (ctx->pc != 0x2FDF20u) { return; }
    }
    ctx->pc = 0x2FDF20u;
label_2fdf20:
    // 0x2fdf20: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2fdf24:
    if (ctx->pc == 0x2FDF24u) {
        ctx->pc = 0x2FDF28u;
        goto label_2fdf28;
    }
    ctx->pc = 0x2FDF20u;
    {
        const bool branch_taken_0x2fdf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf20) {
            ctx->pc = 0x2FDFA0u;
            goto label_2fdfa0;
        }
    }
    ctx->pc = 0x2FDF28u;
label_2fdf28:
    // 0x2fdf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf2c:
    // 0x2fdf2c: 0xc0bffa4  jal         func_2FFE90
label_2fdf30:
    if (ctx->pc == 0x2FDF30u) {
        ctx->pc = 0x2FDF30u;
            // 0x2fdf30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF34u;
        goto label_2fdf34;
    }
    ctx->pc = 0x2FDF2Cu;
    SET_GPR_U32(ctx, 31, 0x2FDF34u);
    ctx->pc = 0x2FDF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF2Cu;
            // 0x2fdf30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFE90u;
    if (runtime->hasFunction(0x2FFE90u)) {
        auto targetFn = runtime->lookupFunction(0x2FFE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF34u; }
        if (ctx->pc != 0x2FDF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CastingLoop__FP6CSceneP11CPadControl_0x2ffe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF34u; }
        if (ctx->pc != 0x2FDF34u) { return; }
    }
    ctx->pc = 0x2FDF34u;
label_2fdf34:
    // 0x2fdf34: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2fdf38:
    if (ctx->pc == 0x2FDF38u) {
        ctx->pc = 0x2FDF3Cu;
        goto label_2fdf3c;
    }
    ctx->pc = 0x2FDF34u;
    {
        const bool branch_taken_0x2fdf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf34) {
            ctx->pc = 0x2FDFA0u;
            goto label_2fdfa0;
        }
    }
    ctx->pc = 0x2FDF3Cu;
label_2fdf3c:
    // 0x2fdf3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf40:
    // 0x2fdf40: 0xc0c0028  jal         func_3000A0
label_2fdf44:
    if (ctx->pc == 0x2FDF44u) {
        ctx->pc = 0x2FDF44u;
            // 0x2fdf44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF48u;
        goto label_2fdf48;
    }
    ctx->pc = 0x2FDF40u;
    SET_GPR_U32(ctx, 31, 0x2FDF48u);
    ctx->pc = 0x2FDF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF40u;
            // 0x2fdf44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3000A0u;
    if (runtime->hasFunction(0x3000A0u)) {
        auto targetFn = runtime->lookupFunction(0x3000A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF48u; }
        if (ctx->pc != 0x2FDF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UkiWaitLoop__FP6CSceneP11CPadControl_0x3000a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF48u; }
        if (ctx->pc != 0x2FDF48u) { return; }
    }
    ctx->pc = 0x2FDF48u;
label_2fdf48:
    // 0x2fdf48: 0x10000015  b           . + 4 + (0x15 << 2)
label_2fdf4c:
    if (ctx->pc == 0x2FDF4Cu) {
        ctx->pc = 0x2FDF50u;
        goto label_2fdf50;
    }
    ctx->pc = 0x2FDF48u;
    {
        const bool branch_taken_0x2fdf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf48) {
            ctx->pc = 0x2FDFA0u;
            goto label_2fdfa0;
        }
    }
    ctx->pc = 0x2FDF50u;
label_2fdf50:
    // 0x2fdf50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf54:
    // 0x2fdf54: 0xc0c03d4  jal         func_300F50
label_2fdf58:
    if (ctx->pc == 0x2FDF58u) {
        ctx->pc = 0x2FDF58u;
            // 0x2fdf58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF5Cu;
        goto label_2fdf5c;
    }
    ctx->pc = 0x2FDF54u;
    SET_GPR_U32(ctx, 31, 0x2FDF5Cu);
    ctx->pc = 0x2FDF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF54u;
            // 0x2fdf58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x300F50u;
    if (runtime->hasFunction(0x300F50u)) {
        auto targetFn = runtime->lookupFunction(0x300F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF5Cu; }
        if (ctx->pc != 0x2FDF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BattleLoop__FP6CSceneP11CPadControl_0x300f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF5Cu; }
        if (ctx->pc != 0x2FDF5Cu) { return; }
    }
    ctx->pc = 0x2FDF5Cu;
label_2fdf5c:
    // 0x2fdf5c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2fdf60:
    if (ctx->pc == 0x2FDF60u) {
        ctx->pc = 0x2FDF64u;
        goto label_2fdf64;
    }
    ctx->pc = 0x2FDF5Cu;
    {
        const bool branch_taken_0x2fdf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf5c) {
            ctx->pc = 0x2FDFA0u;
            goto label_2fdfa0;
        }
    }
    ctx->pc = 0x2FDF64u;
label_2fdf64:
    // 0x2fdf64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf68:
    // 0x2fdf68: 0xc0c0634  jal         func_3018D0
label_2fdf6c:
    if (ctx->pc == 0x2FDF6Cu) {
        ctx->pc = 0x2FDF6Cu;
            // 0x2fdf6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF70u;
        goto label_2fdf70;
    }
    ctx->pc = 0x2FDF68u;
    SET_GPR_U32(ctx, 31, 0x2FDF70u);
    ctx->pc = 0x2FDF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF68u;
            // 0x2fdf6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3018D0u;
    if (runtime->hasFunction(0x3018D0u)) {
        auto targetFn = runtime->lookupFunction(0x3018D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF70u; }
        if (ctx->pc != 0x2FDF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FalseLoop__FP6CSceneP11CPadControl_0x3018d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF70u; }
        if (ctx->pc != 0x2FDF70u) { return; }
    }
    ctx->pc = 0x2FDF70u;
label_2fdf70:
    // 0x2fdf70: 0x1000000b  b           . + 4 + (0xB << 2)
label_2fdf74:
    if (ctx->pc == 0x2FDF74u) {
        ctx->pc = 0x2FDF78u;
        goto label_2fdf78;
    }
    ctx->pc = 0x2FDF70u;
    {
        const bool branch_taken_0x2fdf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf70) {
            ctx->pc = 0x2FDFA0u;
            goto label_2fdfa0;
        }
    }
    ctx->pc = 0x2FDF78u;
label_2fdf78:
    // 0x2fdf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf7c:
    // 0x2fdf7c: 0xc0c07e4  jal         func_301F90
label_2fdf80:
    if (ctx->pc == 0x2FDF80u) {
        ctx->pc = 0x2FDF80u;
            // 0x2fdf80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF84u;
        goto label_2fdf84;
    }
    ctx->pc = 0x2FDF7Cu;
    SET_GPR_U32(ctx, 31, 0x2FDF84u);
    ctx->pc = 0x2FDF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF7Cu;
            // 0x2fdf80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301F90u;
    if (runtime->hasFunction(0x301F90u)) {
        auto targetFn = runtime->lookupFunction(0x301F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF84u; }
        if (ctx->pc != 0x2FDF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SuccessLoop__FP6CSceneP11CPadControl_0x301f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDF84u; }
        if (ctx->pc != 0x2FDF84u) { return; }
    }
    ctx->pc = 0x2FDF84u;
label_2fdf84:
    // 0x2fdf84: 0x8f849fa4  lw          $a0, -0x605C($gp)
    ctx->pc = 0x2fdf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942628)));
label_2fdf88:
    // 0x2fdf88: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2fdf8c:
    if (ctx->pc == 0x2FDF8Cu) {
        ctx->pc = 0x2FDF90u;
        goto label_2fdf90;
    }
    ctx->pc = 0x2FDF88u;
    {
        const bool branch_taken_0x2fdf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf88) {
            ctx->pc = 0x2FDFA0u;
            goto label_2fdfa0;
        }
    }
    ctx->pc = 0x2FDF90u;
label_2fdf90:
    // 0x2fdf90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fdf90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fdf94:
    // 0x2fdf94: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2fdf94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2fdf98:
    // 0x2fdf98: 0x320f809  jalr        $t9
label_2fdf9c:
    if (ctx->pc == 0x2FDF9Cu) {
        ctx->pc = 0x2FDFA0u;
        goto label_2fdfa0;
    }
    ctx->pc = 0x2FDF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FDFA0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FDFA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFA0u; }
            if (ctx->pc != 0x2FDFA0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FDFA0u;
label_2fdfa0:
    // 0x2fdfa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fdfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fdfa4:
    // 0x2fdfa4: 0xc0bb548  jal         func_2ED520
label_2fdfa8:
    if (ctx->pc == 0x2FDFA8u) {
        ctx->pc = 0x2FDFA8u;
            // 0x2fdfa8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FDFACu;
        goto label_2fdfac;
    }
    ctx->pc = 0x2FDFA4u;
    SET_GPR_U32(ctx, 31, 0x2FDFACu);
    ctx->pc = 0x2FDFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFA4u;
            // 0x2fdfa8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFACu; }
        if (ctx->pc != 0x2FDFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFACu; }
        if (ctx->pc != 0x2FDFACu) { return; }
    }
    ctx->pc = 0x2FDFACu;
label_2fdfac:
    // 0x2fdfac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fdfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fdfb0:
    // 0x2fdfb0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2fdfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2fdfb4:
    // 0x2fdfb4: 0xc0bb548  jal         func_2ED520
label_2fdfb8:
    if (ctx->pc == 0x2FDFB8u) {
        ctx->pc = 0x2FDFB8u;
            // 0x2fdfb8: 0xe7809fc8  swc1        $f0, -0x6038($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942664), bits); }
        ctx->pc = 0x2FDFBCu;
        goto label_2fdfbc;
    }
    ctx->pc = 0x2FDFB4u;
    SET_GPR_U32(ctx, 31, 0x2FDFBCu);
    ctx->pc = 0x2FDFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFB4u;
            // 0x2fdfb8: 0xe7809fc8  swc1        $f0, -0x6038($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942664), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFBCu; }
        if (ctx->pc != 0x2FDFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFBCu; }
        if (ctx->pc != 0x2FDFBCu) { return; }
    }
    ctx->pc = 0x2FDFBCu;
label_2fdfbc:
    // 0x2fdfbc: 0x8f829fe4  lw          $v0, -0x601C($gp)
    ctx->pc = 0x2fdfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942692)));
label_2fdfc0:
    // 0x2fdfc0: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
label_2fdfc4:
    if (ctx->pc == 0x2FDFC4u) {
        ctx->pc = 0x2FDFC4u;
            // 0x2fdfc4: 0xe7809fcc  swc1        $f0, -0x6034($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942668), bits); }
        ctx->pc = 0x2FDFC8u;
        goto label_2fdfc8;
    }
    ctx->pc = 0x2FDFC0u;
    {
        const bool branch_taken_0x2fdfc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FDFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFC0u;
            // 0x2fdfc4: 0xe7809fcc  swc1        $f0, -0x6034($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdfc0) {
            ctx->pc = 0x2FDFCCu;
            goto label_2fdfcc;
        }
    }
    ctx->pc = 0x2FDFC8u;
label_2fdfc8:
    // 0x2fdfc8: 0xaf829fe0  sw          $v0, -0x6020($gp)
    ctx->pc = 0x2fdfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942688), GPR_U32(ctx, 2));
label_2fdfcc:
    // 0x2fdfcc: 0x8f829fe0  lw          $v0, -0x6020($gp)
    ctx->pc = 0x2fdfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
label_2fdfd0:
    // 0x2fdfd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2fdfd4:
    if (ctx->pc == 0x2FDFD4u) {
        ctx->pc = 0x2FDFD4u;
            // 0x2fdfd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FDFD8u;
        goto label_2fdfd8;
    }
    ctx->pc = 0x2FDFD0u;
    {
        const bool branch_taken_0x2fdfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFD0u;
            // 0x2fdfd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdfd0) {
            ctx->pc = 0x2FDFE0u;
            goto label_2fdfe0;
        }
    }
    ctx->pc = 0x2FDFD8u;
label_2fdfd8:
    // 0x2fdfd8: 0xc0c0fe0  jal         func_303F80
label_2fdfdc:
    if (ctx->pc == 0x2FDFDCu) {
        ctx->pc = 0x2FDFE0u;
        goto label_2fdfe0;
    }
    ctx->pc = 0x2FDFD8u;
    SET_GPR_U32(ctx, 31, 0x2FDFE0u);
    ctx->pc = 0x303F80u;
    if (runtime->hasFunction(0x303F80u)) {
        auto targetFn = runtime->lookupFunction(0x303F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFE0u; }
        if (ctx->pc != 0x2FDFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgSetMenuOpenEnableFlag__Fi_0x303f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFE0u; }
        if (ctx->pc != 0x2FDFE0u) { return; }
    }
    ctx->pc = 0x2FDFE0u;
label_2fdfe0:
    // 0x2fdfe0: 0x8f82a060  lw          $v0, -0x5FA0($gp)
    ctx->pc = 0x2fdfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942816)));
label_2fdfe4:
    // 0x2fdfe4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fdfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2fdfe8:
    // 0x2fdfe8: 0xaf82a060  sw          $v0, -0x5FA0($gp)
    ctx->pc = 0x2fdfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942816), GPR_U32(ctx, 2));
label_2fdfec:
    // 0x2fdfec: 0x8f82a060  lw          $v0, -0x5FA0($gp)
    ctx->pc = 0x2fdfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942816)));
label_2fdff0:
    // 0x2fdff0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2fdff4:
    if (ctx->pc == 0x2FDFF4u) {
        ctx->pc = 0x2FDFF8u;
        goto label_2fdff8;
    }
    ctx->pc = 0x2FDFF0u;
    {
        const bool branch_taken_0x2fdff0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fdff0) {
            ctx->pc = 0x2FDFFCu;
            goto label_2fdffc;
        }
    }
    ctx->pc = 0x2FDFF8u;
label_2fdff8:
    // 0x2fdff8: 0xaf80a060  sw          $zero, -0x5FA0($gp)
    ctx->pc = 0x2fdff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942816), GPR_U32(ctx, 0));
label_2fdffc:
    // 0x2fdffc: 0x8f82a064  lw          $v0, -0x5F9C($gp)
    ctx->pc = 0x2fdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942820)));
label_2fe000:
    // 0x2fe000: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fe000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2fe004:
    // 0x2fe004: 0xaf82a064  sw          $v0, -0x5F9C($gp)
    ctx->pc = 0x2fe004u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942820), GPR_U32(ctx, 2));
label_2fe008:
    // 0x2fe008: 0x8f82a064  lw          $v0, -0x5F9C($gp)
    ctx->pc = 0x2fe008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942820)));
label_2fe00c:
    // 0x2fe00c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2fe010:
    if (ctx->pc == 0x2FE010u) {
        ctx->pc = 0x2FE014u;
        goto label_2fe014;
    }
    ctx->pc = 0x2FE00Cu;
    {
        const bool branch_taken_0x2fe00c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fe00c) {
            ctx->pc = 0x2FE018u;
            goto label_2fe018;
        }
    }
    ctx->pc = 0x2FE014u;
label_2fe014:
    // 0x2fe014: 0xaf80a064  sw          $zero, -0x5F9C($gp)
    ctx->pc = 0x2fe014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942820), GPR_U32(ctx, 0));
label_2fe018:
    // 0x2fe018: 0x8f82a05c  lw          $v0, -0x5FA4($gp)
    ctx->pc = 0x2fe018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942812)));
label_2fe01c:
    // 0x2fe01c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fe020:
    if (ctx->pc == 0x2FE020u) {
        ctx->pc = 0x2FE020u;
            // 0x2fe020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE024u;
        goto label_2fe024;
    }
    ctx->pc = 0x2FE01Cu;
    {
        const bool branch_taken_0x2fe01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE01Cu;
            // 0x2fe020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe01c) {
            ctx->pc = 0x2FE02Cu;
            goto label_2fe02c;
        }
    }
    ctx->pc = 0x2FE024u;
label_2fe024:
    // 0x2fe024: 0xc0bf714  jal         func_2FDC50
label_2fe028:
    if (ctx->pc == 0x2FE028u) {
        ctx->pc = 0x2FE02Cu;
        goto label_2fe02c;
    }
    ctx->pc = 0x2FE024u;
    SET_GPR_U32(ctx, 31, 0x2FE02Cu);
    ctx->pc = 0x2FDC50u;
    if (runtime->hasFunction(0x2FDC50u)) {
        auto targetFn = runtime->lookupFunction(0x2FDC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE02Cu; }
        if (ctx->pc != 0x2FE02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgExitFishing__FP11SubGameInfo_0x2fdc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE02Cu; }
        if (ctx->pc != 0x2FE02Cu) { return; }
    }
    ctx->pc = 0x2FE02Cu;
label_2fe02c:
    // 0x2fe02c: 0x8f82a05c  lw          $v0, -0x5FA4($gp)
    ctx->pc = 0x2fe02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942812)));
label_2fe030:
    // 0x2fe030: 0x0  nop
    ctx->pc = 0x2fe030u;
    // NOP
label_2fe034:
    // 0x2fe034: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fe034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fe038:
    // 0x2fe038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fe038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe03c:
    // 0x2fe03c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe040:
    // 0x2fe040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe044:
    // 0x2fe044: 0x3e00008  jr          $ra
label_2fe048:
    if (ctx->pc == 0x2FE048u) {
        ctx->pc = 0x2FE048u;
            // 0x2fe048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2FE04Cu;
        goto label_fallthrough_0x2fe044;
    }
    ctx->pc = 0x2FE044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE044u;
            // 0x2fe048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fe044:
    ctx->pc = 0x2FE04Cu;
}
