#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuRemovalInit__FP9mgCMemoryPi
// Address: 0x1fdc70 - 0x1fe0ec
void MenuRemovalInit__FP9mgCMemoryPi_0x1fdc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuRemovalInit__FP9mgCMemoryPi_0x1fdc70");
#endif

    switch (ctx->pc) {
        case 0x1fdc70u: goto label_1fdc70;
        case 0x1fdc74u: goto label_1fdc74;
        case 0x1fdc78u: goto label_1fdc78;
        case 0x1fdc7cu: goto label_1fdc7c;
        case 0x1fdc80u: goto label_1fdc80;
        case 0x1fdc84u: goto label_1fdc84;
        case 0x1fdc88u: goto label_1fdc88;
        case 0x1fdc8cu: goto label_1fdc8c;
        case 0x1fdc90u: goto label_1fdc90;
        case 0x1fdc94u: goto label_1fdc94;
        case 0x1fdc98u: goto label_1fdc98;
        case 0x1fdc9cu: goto label_1fdc9c;
        case 0x1fdca0u: goto label_1fdca0;
        case 0x1fdca4u: goto label_1fdca4;
        case 0x1fdca8u: goto label_1fdca8;
        case 0x1fdcacu: goto label_1fdcac;
        case 0x1fdcb0u: goto label_1fdcb0;
        case 0x1fdcb4u: goto label_1fdcb4;
        case 0x1fdcb8u: goto label_1fdcb8;
        case 0x1fdcbcu: goto label_1fdcbc;
        case 0x1fdcc0u: goto label_1fdcc0;
        case 0x1fdcc4u: goto label_1fdcc4;
        case 0x1fdcc8u: goto label_1fdcc8;
        case 0x1fdcccu: goto label_1fdccc;
        case 0x1fdcd0u: goto label_1fdcd0;
        case 0x1fdcd4u: goto label_1fdcd4;
        case 0x1fdcd8u: goto label_1fdcd8;
        case 0x1fdcdcu: goto label_1fdcdc;
        case 0x1fdce0u: goto label_1fdce0;
        case 0x1fdce4u: goto label_1fdce4;
        case 0x1fdce8u: goto label_1fdce8;
        case 0x1fdcecu: goto label_1fdcec;
        case 0x1fdcf0u: goto label_1fdcf0;
        case 0x1fdcf4u: goto label_1fdcf4;
        case 0x1fdcf8u: goto label_1fdcf8;
        case 0x1fdcfcu: goto label_1fdcfc;
        case 0x1fdd00u: goto label_1fdd00;
        case 0x1fdd04u: goto label_1fdd04;
        case 0x1fdd08u: goto label_1fdd08;
        case 0x1fdd0cu: goto label_1fdd0c;
        case 0x1fdd10u: goto label_1fdd10;
        case 0x1fdd14u: goto label_1fdd14;
        case 0x1fdd18u: goto label_1fdd18;
        case 0x1fdd1cu: goto label_1fdd1c;
        case 0x1fdd20u: goto label_1fdd20;
        case 0x1fdd24u: goto label_1fdd24;
        case 0x1fdd28u: goto label_1fdd28;
        case 0x1fdd2cu: goto label_1fdd2c;
        case 0x1fdd30u: goto label_1fdd30;
        case 0x1fdd34u: goto label_1fdd34;
        case 0x1fdd38u: goto label_1fdd38;
        case 0x1fdd3cu: goto label_1fdd3c;
        case 0x1fdd40u: goto label_1fdd40;
        case 0x1fdd44u: goto label_1fdd44;
        case 0x1fdd48u: goto label_1fdd48;
        case 0x1fdd4cu: goto label_1fdd4c;
        case 0x1fdd50u: goto label_1fdd50;
        case 0x1fdd54u: goto label_1fdd54;
        case 0x1fdd58u: goto label_1fdd58;
        case 0x1fdd5cu: goto label_1fdd5c;
        case 0x1fdd60u: goto label_1fdd60;
        case 0x1fdd64u: goto label_1fdd64;
        case 0x1fdd68u: goto label_1fdd68;
        case 0x1fdd6cu: goto label_1fdd6c;
        case 0x1fdd70u: goto label_1fdd70;
        case 0x1fdd74u: goto label_1fdd74;
        case 0x1fdd78u: goto label_1fdd78;
        case 0x1fdd7cu: goto label_1fdd7c;
        case 0x1fdd80u: goto label_1fdd80;
        case 0x1fdd84u: goto label_1fdd84;
        case 0x1fdd88u: goto label_1fdd88;
        case 0x1fdd8cu: goto label_1fdd8c;
        case 0x1fdd90u: goto label_1fdd90;
        case 0x1fdd94u: goto label_1fdd94;
        case 0x1fdd98u: goto label_1fdd98;
        case 0x1fdd9cu: goto label_1fdd9c;
        case 0x1fdda0u: goto label_1fdda0;
        case 0x1fdda4u: goto label_1fdda4;
        case 0x1fdda8u: goto label_1fdda8;
        case 0x1fddacu: goto label_1fddac;
        case 0x1fddb0u: goto label_1fddb0;
        case 0x1fddb4u: goto label_1fddb4;
        case 0x1fddb8u: goto label_1fddb8;
        case 0x1fddbcu: goto label_1fddbc;
        case 0x1fddc0u: goto label_1fddc0;
        case 0x1fddc4u: goto label_1fddc4;
        case 0x1fddc8u: goto label_1fddc8;
        case 0x1fddccu: goto label_1fddcc;
        case 0x1fddd0u: goto label_1fddd0;
        case 0x1fddd4u: goto label_1fddd4;
        case 0x1fddd8u: goto label_1fddd8;
        case 0x1fdddcu: goto label_1fdddc;
        case 0x1fdde0u: goto label_1fdde0;
        case 0x1fdde4u: goto label_1fdde4;
        case 0x1fdde8u: goto label_1fdde8;
        case 0x1fddecu: goto label_1fddec;
        case 0x1fddf0u: goto label_1fddf0;
        case 0x1fddf4u: goto label_1fddf4;
        case 0x1fddf8u: goto label_1fddf8;
        case 0x1fddfcu: goto label_1fddfc;
        case 0x1fde00u: goto label_1fde00;
        case 0x1fde04u: goto label_1fde04;
        case 0x1fde08u: goto label_1fde08;
        case 0x1fde0cu: goto label_1fde0c;
        case 0x1fde10u: goto label_1fde10;
        case 0x1fde14u: goto label_1fde14;
        case 0x1fde18u: goto label_1fde18;
        case 0x1fde1cu: goto label_1fde1c;
        case 0x1fde20u: goto label_1fde20;
        case 0x1fde24u: goto label_1fde24;
        case 0x1fde28u: goto label_1fde28;
        case 0x1fde2cu: goto label_1fde2c;
        case 0x1fde30u: goto label_1fde30;
        case 0x1fde34u: goto label_1fde34;
        case 0x1fde38u: goto label_1fde38;
        case 0x1fde3cu: goto label_1fde3c;
        case 0x1fde40u: goto label_1fde40;
        case 0x1fde44u: goto label_1fde44;
        case 0x1fde48u: goto label_1fde48;
        case 0x1fde4cu: goto label_1fde4c;
        case 0x1fde50u: goto label_1fde50;
        case 0x1fde54u: goto label_1fde54;
        case 0x1fde58u: goto label_1fde58;
        case 0x1fde5cu: goto label_1fde5c;
        case 0x1fde60u: goto label_1fde60;
        case 0x1fde64u: goto label_1fde64;
        case 0x1fde68u: goto label_1fde68;
        case 0x1fde6cu: goto label_1fde6c;
        case 0x1fde70u: goto label_1fde70;
        case 0x1fde74u: goto label_1fde74;
        case 0x1fde78u: goto label_1fde78;
        case 0x1fde7cu: goto label_1fde7c;
        case 0x1fde80u: goto label_1fde80;
        case 0x1fde84u: goto label_1fde84;
        case 0x1fde88u: goto label_1fde88;
        case 0x1fde8cu: goto label_1fde8c;
        case 0x1fde90u: goto label_1fde90;
        case 0x1fde94u: goto label_1fde94;
        case 0x1fde98u: goto label_1fde98;
        case 0x1fde9cu: goto label_1fde9c;
        case 0x1fdea0u: goto label_1fdea0;
        case 0x1fdea4u: goto label_1fdea4;
        case 0x1fdea8u: goto label_1fdea8;
        case 0x1fdeacu: goto label_1fdeac;
        case 0x1fdeb0u: goto label_1fdeb0;
        case 0x1fdeb4u: goto label_1fdeb4;
        case 0x1fdeb8u: goto label_1fdeb8;
        case 0x1fdebcu: goto label_1fdebc;
        case 0x1fdec0u: goto label_1fdec0;
        case 0x1fdec4u: goto label_1fdec4;
        case 0x1fdec8u: goto label_1fdec8;
        case 0x1fdeccu: goto label_1fdecc;
        case 0x1fded0u: goto label_1fded0;
        case 0x1fded4u: goto label_1fded4;
        case 0x1fded8u: goto label_1fded8;
        case 0x1fdedcu: goto label_1fdedc;
        case 0x1fdee0u: goto label_1fdee0;
        case 0x1fdee4u: goto label_1fdee4;
        case 0x1fdee8u: goto label_1fdee8;
        case 0x1fdeecu: goto label_1fdeec;
        case 0x1fdef0u: goto label_1fdef0;
        case 0x1fdef4u: goto label_1fdef4;
        case 0x1fdef8u: goto label_1fdef8;
        case 0x1fdefcu: goto label_1fdefc;
        case 0x1fdf00u: goto label_1fdf00;
        case 0x1fdf04u: goto label_1fdf04;
        case 0x1fdf08u: goto label_1fdf08;
        case 0x1fdf0cu: goto label_1fdf0c;
        case 0x1fdf10u: goto label_1fdf10;
        case 0x1fdf14u: goto label_1fdf14;
        case 0x1fdf18u: goto label_1fdf18;
        case 0x1fdf1cu: goto label_1fdf1c;
        case 0x1fdf20u: goto label_1fdf20;
        case 0x1fdf24u: goto label_1fdf24;
        case 0x1fdf28u: goto label_1fdf28;
        case 0x1fdf2cu: goto label_1fdf2c;
        case 0x1fdf30u: goto label_1fdf30;
        case 0x1fdf34u: goto label_1fdf34;
        case 0x1fdf38u: goto label_1fdf38;
        case 0x1fdf3cu: goto label_1fdf3c;
        case 0x1fdf40u: goto label_1fdf40;
        case 0x1fdf44u: goto label_1fdf44;
        case 0x1fdf48u: goto label_1fdf48;
        case 0x1fdf4cu: goto label_1fdf4c;
        case 0x1fdf50u: goto label_1fdf50;
        case 0x1fdf54u: goto label_1fdf54;
        case 0x1fdf58u: goto label_1fdf58;
        case 0x1fdf5cu: goto label_1fdf5c;
        case 0x1fdf60u: goto label_1fdf60;
        case 0x1fdf64u: goto label_1fdf64;
        case 0x1fdf68u: goto label_1fdf68;
        case 0x1fdf6cu: goto label_1fdf6c;
        case 0x1fdf70u: goto label_1fdf70;
        case 0x1fdf74u: goto label_1fdf74;
        case 0x1fdf78u: goto label_1fdf78;
        case 0x1fdf7cu: goto label_1fdf7c;
        case 0x1fdf80u: goto label_1fdf80;
        case 0x1fdf84u: goto label_1fdf84;
        case 0x1fdf88u: goto label_1fdf88;
        case 0x1fdf8cu: goto label_1fdf8c;
        case 0x1fdf90u: goto label_1fdf90;
        case 0x1fdf94u: goto label_1fdf94;
        case 0x1fdf98u: goto label_1fdf98;
        case 0x1fdf9cu: goto label_1fdf9c;
        case 0x1fdfa0u: goto label_1fdfa0;
        case 0x1fdfa4u: goto label_1fdfa4;
        case 0x1fdfa8u: goto label_1fdfa8;
        case 0x1fdfacu: goto label_1fdfac;
        case 0x1fdfb0u: goto label_1fdfb0;
        case 0x1fdfb4u: goto label_1fdfb4;
        case 0x1fdfb8u: goto label_1fdfb8;
        case 0x1fdfbcu: goto label_1fdfbc;
        case 0x1fdfc0u: goto label_1fdfc0;
        case 0x1fdfc4u: goto label_1fdfc4;
        case 0x1fdfc8u: goto label_1fdfc8;
        case 0x1fdfccu: goto label_1fdfcc;
        case 0x1fdfd0u: goto label_1fdfd0;
        case 0x1fdfd4u: goto label_1fdfd4;
        case 0x1fdfd8u: goto label_1fdfd8;
        case 0x1fdfdcu: goto label_1fdfdc;
        case 0x1fdfe0u: goto label_1fdfe0;
        case 0x1fdfe4u: goto label_1fdfe4;
        case 0x1fdfe8u: goto label_1fdfe8;
        case 0x1fdfecu: goto label_1fdfec;
        case 0x1fdff0u: goto label_1fdff0;
        case 0x1fdff4u: goto label_1fdff4;
        case 0x1fdff8u: goto label_1fdff8;
        case 0x1fdffcu: goto label_1fdffc;
        case 0x1fe000u: goto label_1fe000;
        case 0x1fe004u: goto label_1fe004;
        case 0x1fe008u: goto label_1fe008;
        case 0x1fe00cu: goto label_1fe00c;
        case 0x1fe010u: goto label_1fe010;
        case 0x1fe014u: goto label_1fe014;
        case 0x1fe018u: goto label_1fe018;
        case 0x1fe01cu: goto label_1fe01c;
        case 0x1fe020u: goto label_1fe020;
        case 0x1fe024u: goto label_1fe024;
        case 0x1fe028u: goto label_1fe028;
        case 0x1fe02cu: goto label_1fe02c;
        case 0x1fe030u: goto label_1fe030;
        case 0x1fe034u: goto label_1fe034;
        case 0x1fe038u: goto label_1fe038;
        case 0x1fe03cu: goto label_1fe03c;
        case 0x1fe040u: goto label_1fe040;
        case 0x1fe044u: goto label_1fe044;
        case 0x1fe048u: goto label_1fe048;
        case 0x1fe04cu: goto label_1fe04c;
        case 0x1fe050u: goto label_1fe050;
        case 0x1fe054u: goto label_1fe054;
        case 0x1fe058u: goto label_1fe058;
        case 0x1fe05cu: goto label_1fe05c;
        case 0x1fe060u: goto label_1fe060;
        case 0x1fe064u: goto label_1fe064;
        case 0x1fe068u: goto label_1fe068;
        case 0x1fe06cu: goto label_1fe06c;
        case 0x1fe070u: goto label_1fe070;
        case 0x1fe074u: goto label_1fe074;
        case 0x1fe078u: goto label_1fe078;
        case 0x1fe07cu: goto label_1fe07c;
        case 0x1fe080u: goto label_1fe080;
        case 0x1fe084u: goto label_1fe084;
        case 0x1fe088u: goto label_1fe088;
        case 0x1fe08cu: goto label_1fe08c;
        case 0x1fe090u: goto label_1fe090;
        case 0x1fe094u: goto label_1fe094;
        case 0x1fe098u: goto label_1fe098;
        case 0x1fe09cu: goto label_1fe09c;
        case 0x1fe0a0u: goto label_1fe0a0;
        case 0x1fe0a4u: goto label_1fe0a4;
        case 0x1fe0a8u: goto label_1fe0a8;
        case 0x1fe0acu: goto label_1fe0ac;
        case 0x1fe0b0u: goto label_1fe0b0;
        case 0x1fe0b4u: goto label_1fe0b4;
        case 0x1fe0b8u: goto label_1fe0b8;
        case 0x1fe0bcu: goto label_1fe0bc;
        case 0x1fe0c0u: goto label_1fe0c0;
        case 0x1fe0c4u: goto label_1fe0c4;
        case 0x1fe0c8u: goto label_1fe0c8;
        case 0x1fe0ccu: goto label_1fe0cc;
        case 0x1fe0d0u: goto label_1fe0d0;
        case 0x1fe0d4u: goto label_1fe0d4;
        case 0x1fe0d8u: goto label_1fe0d8;
        case 0x1fe0dcu: goto label_1fe0dc;
        case 0x1fe0e0u: goto label_1fe0e0;
        case 0x1fe0e4u: goto label_1fe0e4;
        case 0x1fe0e8u: goto label_1fe0e8;
        default: break;
    }

    ctx->pc = 0x1fdc70u;

label_1fdc70:
    // 0x1fdc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fdc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fdc74:
    // 0x1fdc74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fdc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fdc78:
    // 0x1fdc78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fdc7c:
    // 0x1fdc7c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1fdc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1fdc80:
    // 0x1fdc80: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1fdc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1fdc84:
    // 0x1fdc84: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1fdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1fdc88:
    // 0x1fdc88: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1fdc88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1fdc8c:
    // 0x1fdc8c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fdc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1fdc90:
    // 0x1fdc90: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1fdc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1fdc94:
    // 0x1fdc94: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fdc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fdc98:
    // 0x1fdc98: 0xc04e79c  jal         func_139E70
label_1fdc9c:
    if (ctx->pc == 0x1FDC9Cu) {
        ctx->pc = 0x1FDC9Cu;
            // 0x1fdc9c: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->pc = 0x1FDCA0u;
        goto label_1fdca0;
    }
    ctx->pc = 0x1FDC98u;
    SET_GPR_U32(ctx, 31, 0x1FDCA0u);
    ctx->pc = 0x1FDC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC98u;
            // 0x1fdc9c: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCA0u; }
        if (ctx->pc != 0x1FDCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCA0u; }
        if (ctx->pc != 0x1FDCA0u) { return; }
    }
    ctx->pc = 0x1FDCA0u;
label_1fdca0:
    // 0x1fdca0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fdca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fdca4:
    // 0x1fdca4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1fdca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_1fdca8:
    // 0x1fdca8: 0x24a592e0  addiu       $a1, $a1, -0x6D20
    ctx->pc = 0x1fdca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939360));
label_1fdcac:
    // 0x1fdcac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1fdcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fdcb0:
    // 0x1fdcb0: 0xc08b2e8  jal         func_22CBA0
label_1fdcb4:
    if (ctx->pc == 0x1FDCB4u) {
        ctx->pc = 0x1FDCB4u;
            // 0x1fdcb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FDCB8u;
        goto label_1fdcb8;
    }
    ctx->pc = 0x1FDCB0u;
    SET_GPR_U32(ctx, 31, 0x1FDCB8u);
    ctx->pc = 0x1FDCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCB0u;
            // 0x1fdcb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CBA0u;
    if (runtime->hasFunction(0x22CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCB8u; }
        if (ctx->pc != 0x1FDCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCapture__FiP9mgCMemoryi_0x22cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCB8u; }
        if (ctx->pc != 0x1FDCB8u) { return; }
    }
    ctx->pc = 0x1FDCB8u;
label_1fdcb8:
    // 0x1fdcb8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fdcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fdcbc:
    // 0x1fdcbc: 0xc08cb18  jal         func_232C60
label_1fdcc0:
    if (ctx->pc == 0x1FDCC0u) {
        ctx->pc = 0x1FDCC0u;
            // 0x1fdcc0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x1FDCC4u;
        goto label_1fdcc4;
    }
    ctx->pc = 0x1FDCBCu;
    SET_GPR_U32(ctx, 31, 0x1FDCC4u);
    ctx->pc = 0x1FDCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCBCu;
            // 0x1fdcc0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C60u;
    if (runtime->hasFunction(0x232C60u)) {
        auto targetFn = runtime->lookupFunction(0x232C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCC4u; }
        if (ctx->pc != 0x1FDCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainImageDataEnter__Fi_0x232c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCC4u; }
        if (ctx->pc != 0x1FDCC4u) { return; }
    }
    ctx->pc = 0x1FDCC4u;
label_1fdcc4:
    // 0x1fdcc4: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x1fdcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_1fdcc8:
    // 0x1fdcc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fdcc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fdccc:
    // 0x1fdccc: 0x0  nop
    ctx->pc = 0x1fdcccu;
    // NOP
label_1fdcd0:
    // 0x1fdcd0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1fdcd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1fdcd4:
    // 0x1fdcd4: 0xc04c510  jal         func_131440
label_1fdcd8:
    if (ctx->pc == 0x1FDCD8u) {
        ctx->pc = 0x1FDCD8u;
            // 0x1fdcd8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1FDCDCu;
        goto label_1fdcdc;
    }
    ctx->pc = 0x1FDCD4u;
    SET_GPR_U32(ctx, 31, 0x1FDCDCu);
    ctx->pc = 0x1FDCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCD4u;
            // 0x1fdcd8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCDCu; }
        if (ctx->pc != 0x1FDCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCDCu; }
        if (ctx->pc != 0x1FDCDCu) { return; }
    }
    ctx->pc = 0x1FDCDCu;
label_1fdcdc:
    // 0x1fdcdc: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x1fdcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_1fdce0:
    // 0x1fdce0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1fdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1fdce4:
    // 0x1fdce4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fdce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fdce8:
    // 0x1fdce8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fdce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fdcec:
    // 0x1fdcec: 0xc04c4f8  jal         func_1313E0
label_1fdcf0:
    if (ctx->pc == 0x1FDCF0u) {
        ctx->pc = 0x1FDCF0u;
            // 0x1fdcf0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1FDCF4u;
        goto label_1fdcf4;
    }
    ctx->pc = 0x1FDCECu;
    SET_GPR_U32(ctx, 31, 0x1FDCF4u);
    ctx->pc = 0x1FDCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCECu;
            // 0x1fdcf0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCF4u; }
        if (ctx->pc != 0x1FDCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCF4u; }
        if (ctx->pc != 0x1FDCF4u) { return; }
    }
    ctx->pc = 0x1FDCF4u;
label_1fdcf4:
    // 0x1fdcf4: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x1fdcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_1fdcf8:
    // 0x1fdcf8: 0xc0a0f58  jal         func_283D60
label_1fdcfc:
    if (ctx->pc == 0x1FDCFCu) {
        ctx->pc = 0x1FDCFCu;
            // 0x1fdcfc: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1FDD00u;
        goto label_1fdd00;
    }
    ctx->pc = 0x1FDCF8u;
    SET_GPR_U32(ctx, 31, 0x1FDD00u);
    ctx->pc = 0x1FDCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCF8u;
            // 0x1fdcfc: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD00u; }
        if (ctx->pc != 0x1FDD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD00u; }
        if (ctx->pc != 0x1FDD00u) { return; }
    }
    ctx->pc = 0x1FDD00u;
label_1fdd00:
    // 0x1fdd00: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1fdd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1fdd04:
    // 0x1fdd04: 0xaf828ff8  sw          $v0, -0x7008($gp)
    ctx->pc = 0x1fdd04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938616), GPR_U32(ctx, 2));
label_1fdd08:
    // 0x1fdd08: 0x248492e0  addiu       $a0, $a0, -0x6D20
    ctx->pc = 0x1fdd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
label_1fdd0c:
    // 0x1fdd0c: 0xc04e748  jal         func_139D20
label_1fdd10:
    if (ctx->pc == 0x1FDD10u) {
        ctx->pc = 0x1FDD10u;
            // 0x1fdd10: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
        ctx->pc = 0x1FDD14u;
        goto label_1fdd14;
    }
    ctx->pc = 0x1FDD0Cu;
    SET_GPR_U32(ctx, 31, 0x1FDD14u);
    ctx->pc = 0x1FDD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD0Cu;
            // 0x1fdd10: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD14u; }
        if (ctx->pc != 0x1FDD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD14u; }
        if (ctx->pc != 0x1FDD14u) { return; }
    }
    ctx->pc = 0x1FDD14u;
label_1fdd14:
    // 0x1fdd14: 0x24041500  addiu       $a0, $zero, 0x1500
    ctx->pc = 0x1fdd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
label_1fdd18:
    // 0x1fdd18: 0xc04e638  jal         func_1398E0
label_1fdd1c:
    if (ctx->pc == 0x1FDD1Cu) {
        ctx->pc = 0x1FDD1Cu;
            // 0x1fdd1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD20u;
        goto label_1fdd20;
    }
    ctx->pc = 0x1FDD18u;
    SET_GPR_U32(ctx, 31, 0x1FDD20u);
    ctx->pc = 0x1FDD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD18u;
            // 0x1fdd1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD20u; }
        if (ctx->pc != 0x1FDD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD20u; }
        if (ctx->pc != 0x1FDD20u) { return; }
    }
    ctx->pc = 0x1FDD20u;
label_1fdd20:
    // 0x1fdd20: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_1fdd24:
    if (ctx->pc == 0x1FDD24u) {
        ctx->pc = 0x1FDD24u;
            // 0x1fdd24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD28u;
        goto label_1fdd28;
    }
    ctx->pc = 0x1FDD20u;
    {
        const bool branch_taken_0x1fdd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD20u;
            // 0x1fdd24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd20) {
            ctx->pc = 0x1FDEB0u;
            goto label_1fdeb0;
        }
    }
    ctx->pc = 0x1FDD28u;
label_1fdd28:
    // 0x1fdd28: 0xc08dc2c  jal         func_2370B0
label_1fdd2c:
    if (ctx->pc == 0x1FDD2Cu) {
        ctx->pc = 0x1FDD2Cu;
            // 0x1fdd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD30u;
        goto label_1fdd30;
    }
    ctx->pc = 0x1FDD28u;
    SET_GPR_U32(ctx, 31, 0x1FDD30u);
    ctx->pc = 0x1FDD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD28u;
            // 0x1fdd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD30u; }
        if (ctx->pc != 0x1FDD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD30u; }
        if (ctx->pc != 0x1FDD30u) { return; }
    }
    ctx->pc = 0x1FDD30u;
label_1fdd30:
    // 0x1fdd30: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1fdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1fdd34:
    // 0x1fdd34: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1fdd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_1fdd38:
    // 0x1fdd38: 0x24425d20  addiu       $v0, $v0, 0x5D20
    ctx->pc = 0x1fdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23840));
label_1fdd3c:
    // 0x1fdd3c: 0xc04e640  jal         func_139900
label_1fdd40:
    if (ctx->pc == 0x1FDD40u) {
        ctx->pc = 0x1FDD40u;
            // 0x1fdd40: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1FDD44u;
        goto label_1fdd44;
    }
    ctx->pc = 0x1FDD3Cu;
    SET_GPR_U32(ctx, 31, 0x1FDD44u);
    ctx->pc = 0x1FDD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD3Cu;
            // 0x1fdd40: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD44u; }
        if (ctx->pc != 0x1FDD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD44u; }
        if (ctx->pc != 0x1FDD44u) { return; }
    }
    ctx->pc = 0x1FDD44u;
label_1fdd44:
    // 0x1fdd44: 0xc04e640  jal         func_139900
label_1fdd48:
    if (ctx->pc == 0x1FDD48u) {
        ctx->pc = 0x1FDD48u;
            // 0x1fdd48: 0x2604041c  addiu       $a0, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->pc = 0x1FDD4Cu;
        goto label_1fdd4c;
    }
    ctx->pc = 0x1FDD44u;
    SET_GPR_U32(ctx, 31, 0x1FDD4Cu);
    ctx->pc = 0x1FDD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD44u;
            // 0x1fdd48: 0x2604041c  addiu       $a0, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD4Cu; }
        if (ctx->pc != 0x1FDD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD4Cu; }
        if (ctx->pc != 0x1FDD4Cu) { return; }
    }
    ctx->pc = 0x1FDD4Cu;
label_1fdd4c:
    // 0x1fdd4c: 0xc058908  jal         func_162420
label_1fdd50:
    if (ctx->pc == 0x1FDD50u) {
        ctx->pc = 0x1FDD50u;
            // 0x1fdd50: 0x26040470  addiu       $a0, $s0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
        ctx->pc = 0x1FDD54u;
        goto label_1fdd54;
    }
    ctx->pc = 0x1FDD4Cu;
    SET_GPR_U32(ctx, 31, 0x1FDD54u);
    ctx->pc = 0x1FDD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD4Cu;
            // 0x1fdd50: 0x26040470  addiu       $a0, $s0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162420u;
    if (runtime->hasFunction(0x162420u)) {
        auto targetFn = runtime->lookupFunction(0x162420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD54u; }
        if (ctx->pc != 0x1FDD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12CObjectFrameFv_0x162420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD54u; }
        if (ctx->pc != 0x1FDD54u) { return; }
    }
    ctx->pc = 0x1FDD54u;
label_1fdd54:
    // 0x1fdd54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1fdd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1fdd58:
    // 0x1fdd58: 0x260407cc  addiu       $a0, $s0, 0x7CC
    ctx->pc = 0x1fdd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1996));
label_1fdd5c:
    // 0x1fdd5c: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x1fdd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_1fdd60:
    // 0x1fdd60: 0xc07f83c  jal         func_1FE0F0
label_1fdd64:
    if (ctx->pc == 0x1FDD64u) {
        ctx->pc = 0x1FDD64u;
            // 0x1fdd64: 0xae020470  sw          $v0, 0x470($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1136), GPR_U32(ctx, 2));
        ctx->pc = 0x1FDD68u;
        goto label_1fdd68;
    }
    ctx->pc = 0x1FDD60u;
    SET_GPR_U32(ctx, 31, 0x1FDD68u);
    ctx->pc = 0x1FDD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD60u;
            // 0x1fdd64: 0xae020470  sw          $v0, 0x470($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0F0u;
    if (runtime->hasFunction(0x1FE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD68u; }
        if (ctx->pc != 0x1FDD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__19CCharaFrameMatchingFv_0x1fe0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD68u; }
        if (ctx->pc != 0x1FDD68u) { return; }
    }
    ctx->pc = 0x1FDD68u;
label_1fdd68:
    // 0x1fdd68: 0x8e190470  lw          $t9, 0x470($s0)
    ctx->pc = 0x1fdd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
label_1fdd6c:
    // 0x1fdd6c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1fdd6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1fdd70:
    // 0x1fdd70: 0x320f809  jalr        $t9
label_1fdd74:
    if (ctx->pc == 0x1FDD74u) {
        ctx->pc = 0x1FDD74u;
            // 0x1fdd74: 0x26040470  addiu       $a0, $s0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
        ctx->pc = 0x1FDD78u;
        goto label_1fdd78;
    }
    ctx->pc = 0x1FDD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FDD78u);
        ctx->pc = 0x1FDD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD70u;
            // 0x1fdd74: 0x26040470  addiu       $a0, $s0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FDD78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD78u; }
            if (ctx->pc != 0x1FDD78u) { return; }
        }
        }
    }
    ctx->pc = 0x1FDD78u;
label_1fdd78:
    // 0x1fdd78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1fdd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1fdd7c:
    // 0x1fdd7c: 0x26040b2c  addiu       $a0, $s0, 0xB2C
    ctx->pc = 0x1fdd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2860));
label_1fdd80:
    // 0x1fdd80: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x1fdd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_1fdd84:
    // 0x1fdd84: 0xc061b34  jal         func_186CD0
label_1fdd88:
    if (ctx->pc == 0x1FDD88u) {
        ctx->pc = 0x1FDD88u;
            // 0x1fdd88: 0xae020470  sw          $v0, 0x470($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1136), GPR_U32(ctx, 2));
        ctx->pc = 0x1FDD8Cu;
        goto label_1fdd8c;
    }
    ctx->pc = 0x1FDD84u;
    SET_GPR_U32(ctx, 31, 0x1FDD8Cu);
    ctx->pc = 0x1FDD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD84u;
            // 0x1fdd88: 0xae020470  sw          $v0, 0x470($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD8Cu; }
        if (ctx->pc != 0x1FDD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD8Cu; }
        if (ctx->pc != 0x1FDD8Cu) { return; }
    }
    ctx->pc = 0x1FDD8Cu;
label_1fdd8c:
    // 0x1fdd8c: 0x26040d80  addiu       $a0, $s0, 0xD80
    ctx->pc = 0x1fdd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3456));
label_1fdd90:
    // 0x1fdd90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdd94:
    // 0x1fdd94: 0xc049c86  jal         func_127218
label_1fdd98:
    if (ctx->pc == 0x1FDD98u) {
        ctx->pc = 0x1FDD98u;
            // 0x1fdd98: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x1FDD9Cu;
        goto label_1fdd9c;
    }
    ctx->pc = 0x1FDD94u;
    SET_GPR_U32(ctx, 31, 0x1FDD9Cu);
    ctx->pc = 0x1FDD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD94u;
            // 0x1fdd98: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD9Cu; }
        if (ctx->pc != 0x1FDD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD9Cu; }
        if (ctx->pc != 0x1FDD9Cu) { return; }
    }
    ctx->pc = 0x1FDD9Cu;
label_1fdd9c:
    // 0x1fdd9c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1fdd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_1fdda0:
    // 0x1fdda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdda4:
    // 0x1fdda4: 0xc04e79c  jal         func_139E70
label_1fdda8:
    if (ctx->pc == 0x1FDDA8u) {
        ctx->pc = 0x1FDDA8u;
            // 0x1fdda8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDACu;
        goto label_1fddac;
    }
    ctx->pc = 0x1FDDA4u;
    SET_GPR_U32(ctx, 31, 0x1FDDACu);
    ctx->pc = 0x1FDDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDA4u;
            // 0x1fdda8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDDACu; }
        if (ctx->pc != 0x1FDDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDDACu; }
        if (ctx->pc != 0x1FDDACu) { return; }
    }
    ctx->pc = 0x1FDDACu;
label_1fddac:
    // 0x1fddac: 0x2604041c  addiu       $a0, $s0, 0x41C
    ctx->pc = 0x1fddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_1fddb0:
    // 0x1fddb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fddb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fddb4:
    // 0x1fddb4: 0xc04e79c  jal         func_139E70
label_1fddb8:
    if (ctx->pc == 0x1FDDB8u) {
        ctx->pc = 0x1FDDB8u;
            // 0x1fddb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDBCu;
        goto label_1fddbc;
    }
    ctx->pc = 0x1FDDB4u;
    SET_GPR_U32(ctx, 31, 0x1FDDBCu);
    ctx->pc = 0x1FDDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDB4u;
            // 0x1fddb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDDBCu; }
        if (ctx->pc != 0x1FDDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDDBCu; }
        if (ctx->pc != 0x1FDDBCu) { return; }
    }
    ctx->pc = 0x1FDDBCu;
label_1fddbc:
    // 0x1fddbc: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x1fddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_1fddc0:
    // 0x1fddc0: 0x26040470  addiu       $a0, $s0, 0x470
    ctx->pc = 0x1fddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
label_1fddc4:
    // 0x1fddc4: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x1fddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
label_1fddc8:
    // 0x1fddc8: 0xae000468  sw          $zero, 0x468($s0)
    ctx->pc = 0x1fddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 0));
label_1fddcc:
    // 0x1fddcc: 0xae000464  sw          $zero, 0x464($s0)
    ctx->pc = 0x1fddccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 0));
label_1fddd0:
    // 0x1fddd0: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x1fddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
label_1fddd4:
    // 0x1fddd4: 0x8e190470  lw          $t9, 0x470($s0)
    ctx->pc = 0x1fddd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
label_1fddd8:
    // 0x1fddd8: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1fddd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1fdddc:
    // 0x1fdddc: 0x320f809  jalr        $t9
label_1fdde0:
    if (ctx->pc == 0x1FDDE0u) {
        ctx->pc = 0x1FDDE0u;
            // 0x1fdde0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDE4u;
        goto label_1fdde4;
    }
    ctx->pc = 0x1FDDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FDDE4u);
        ctx->pc = 0x1FDDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDDCu;
            // 0x1fdde0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FDDE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FDDE4u; }
            if (ctx->pc != 0x1FDDE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FDDE4u;
label_1fdde4:
    // 0x1fdde4: 0xae000454  sw          $zero, 0x454($s0)
    ctx->pc = 0x1fdde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 0));
label_1fdde8:
    // 0x1fdde8: 0x26040144  addiu       $a0, $s0, 0x144
    ctx->pc = 0x1fdde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 324));
label_1fddec:
    // 0x1fddec: 0xae00045c  sw          $zero, 0x45C($s0)
    ctx->pc = 0x1fddecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1116), GPR_U32(ctx, 0));
label_1fddf0:
    // 0x1fddf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fddf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fddf4:
    // 0x1fddf4: 0xae0014a0  sw          $zero, 0x14A0($s0)
    ctx->pc = 0x1fddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5280), GPR_U32(ctx, 0));
label_1fddf8:
    // 0x1fddf8: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1fddf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1fddfc:
    // 0x1fddfc: 0xae0014b4  sw          $zero, 0x14B4($s0)
    ctx->pc = 0x1fddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5300), GPR_U32(ctx, 0));
label_1fde00:
    // 0x1fde00: 0xae0014ec  sw          $zero, 0x14EC($s0)
    ctx->pc = 0x1fde00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5356), GPR_U32(ctx, 0));
label_1fde04:
    // 0x1fde04: 0xae0014f0  sw          $zero, 0x14F0($s0)
    ctx->pc = 0x1fde04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5360), GPR_U32(ctx, 0));
label_1fde08:
    // 0x1fde08: 0xae0014f4  sw          $zero, 0x14F4($s0)
    ctx->pc = 0x1fde08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5364), GPR_U32(ctx, 0));
label_1fde0c:
    // 0x1fde0c: 0xae000458  sw          $zero, 0x458($s0)
    ctx->pc = 0x1fde0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1112), GPR_U32(ctx, 0));
label_1fde10:
    // 0x1fde10: 0xae0014ac  sw          $zero, 0x14AC($s0)
    ctx->pc = 0x1fde10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5292), GPR_U32(ctx, 0));
label_1fde14:
    // 0x1fde14: 0xae0014b0  sw          $zero, 0x14B0($s0)
    ctx->pc = 0x1fde14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5296), GPR_U32(ctx, 0));
label_1fde18:
    // 0x1fde18: 0xc049c86  jal         func_127218
label_1fde1c:
    if (ctx->pc == 0x1FDE1Cu) {
        ctx->pc = 0x1FDE1Cu;
            // 0x1fde1c: 0xae000414  sw          $zero, 0x414($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
        ctx->pc = 0x1FDE20u;
        goto label_1fde20;
    }
    ctx->pc = 0x1FDE18u;
    SET_GPR_U32(ctx, 31, 0x1FDE20u);
    ctx->pc = 0x1FDE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE18u;
            // 0x1fde1c: 0xae000414  sw          $zero, 0x414($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE20u; }
        if (ctx->pc != 0x1FDE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE20u; }
        if (ctx->pc != 0x1FDE20u) { return; }
    }
    ctx->pc = 0x1FDE20u;
label_1fde20:
    // 0x1fde20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fde20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fde24:
    // 0x1fde24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fde24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fde28:
    // 0x1fde28: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x1fde28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1fde2c:
    // 0x1fde2c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1fde2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1fde30:
    // 0x1fde30: 0xaca014c4  sw          $zero, 0x14C4($a1)
    ctx->pc = 0x1fde30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5316), GPR_U32(ctx, 0));
label_1fde34:
    // 0x1fde34: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1fde34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fde38:
    // 0x1fde38: 0xaca014c8  sw          $zero, 0x14C8($a1)
    ctx->pc = 0x1fde38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5320), GPR_U32(ctx, 0));
label_1fde3c:
    // 0x1fde3c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1fde3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1fde40:
    // 0x1fde40: 0xaca014cc  sw          $zero, 0x14CC($a1)
    ctx->pc = 0x1fde40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5324), GPR_U32(ctx, 0));
label_1fde44:
    // 0x1fde44: 0xaca014d0  sw          $zero, 0x14D0($a1)
    ctx->pc = 0x1fde44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5328), GPR_U32(ctx, 0));
label_1fde48:
    // 0x1fde48: 0xaca014d4  sw          $zero, 0x14D4($a1)
    ctx->pc = 0x1fde48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5332), GPR_U32(ctx, 0));
label_1fde4c:
    // 0x1fde4c: 0xaca014d8  sw          $zero, 0x14D8($a1)
    ctx->pc = 0x1fde4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5336), GPR_U32(ctx, 0));
label_1fde50:
    // 0x1fde50: 0xaca014dc  sw          $zero, 0x14DC($a1)
    ctx->pc = 0x1fde50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5340), GPR_U32(ctx, 0));
label_1fde54:
    // 0x1fde54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1fde58:
    if (ctx->pc == 0x1FDE58u) {
        ctx->pc = 0x1FDE58u;
            // 0x1fde58: 0xaca014e0  sw          $zero, 0x14E0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 5344), GPR_U32(ctx, 0));
        ctx->pc = 0x1FDE5Cu;
        goto label_1fde5c;
    }
    ctx->pc = 0x1FDE54u;
    {
        const bool branch_taken_0x1fde54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE54u;
            // 0x1fde58: 0xaca014e0  sw          $zero, 0x14E0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 5344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde54) {
            ctx->pc = 0x1FDE28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fde28;
        }
    }
    ctx->pc = 0x1FDE5Cu;
label_1fde5c:
    // 0x1fde5c: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1fde5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1fde60:
    // 0x1fde60: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1fde64:
    if (ctx->pc == 0x1FDE64u) {
        ctx->pc = 0x1FDE64u;
            // 0x1fde64: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1FDE68u;
        goto label_1fde68;
    }
    ctx->pc = 0x1FDE60u;
    {
        const bool branch_taken_0x1fde60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE60u;
            // 0x1fde64: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde60) {
            ctx->pc = 0x1FDE88u;
            goto label_1fde88;
        }
    }
    ctx->pc = 0x1FDE68u;
label_1fde68:
    // 0x1fde68: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x1fde68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1fde6c:
    // 0x1fde6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fde70:
    // 0x1fde70: 0xac4014c4  sw          $zero, 0x14C4($v0)
    ctx->pc = 0x1fde70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5316), GPR_U32(ctx, 0));
label_1fde74:
    // 0x1fde74: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1fde74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1fde78:
    // 0x1fde78: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1fde78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1fde7c:
    // 0x1fde7c: 0x0  nop
    ctx->pc = 0x1fde7cu;
    // NOP
label_1fde80:
    // 0x1fde80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1fde84:
    if (ctx->pc == 0x1FDE84u) {
        ctx->pc = 0x1FDE88u;
        goto label_1fde88;
    }
    ctx->pc = 0x1FDE80u;
    {
        const bool branch_taken_0x1fde80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fde80) {
            ctx->pc = 0x1FDE68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fde68;
        }
    }
    ctx->pc = 0x1FDE88u;
label_1fde88:
    // 0x1fde88: 0xae0014b8  sw          $zero, 0x14B8($s0)
    ctx->pc = 0x1fde88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5304), GPR_U32(ctx, 0));
label_1fde8c:
    // 0x1fde8c: 0xae0014bc  sw          $zero, 0x14BC($s0)
    ctx->pc = 0x1fde8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5308), GPR_U32(ctx, 0));
label_1fde90:
    // 0x1fde90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fde90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fde94:
    // 0x1fde94: 0xae0014c0  sw          $zero, 0x14C0($s0)
    ctx->pc = 0x1fde94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5312), GPR_U32(ctx, 0));
label_1fde98:
    // 0x1fde98: 0xae0014f4  sw          $zero, 0x14F4($s0)
    ctx->pc = 0x1fde98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5364), GPR_U32(ctx, 0));
label_1fde9c:
    // 0x1fde9c: 0xae0014f8  sw          $zero, 0x14F8($s0)
    ctx->pc = 0x1fde9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5368), GPR_U32(ctx, 0));
label_1fdea0:
    // 0x1fdea0: 0xae0014fc  sw          $zero, 0x14FC($s0)
    ctx->pc = 0x1fdea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5372), GPR_U32(ctx, 0));
label_1fdea4:
    // 0x1fdea4: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x1fdea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
label_1fdea8:
    // 0x1fdea8: 0xae00044c  sw          $zero, 0x44C($s0)
    ctx->pc = 0x1fdea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 0));
label_1fdeac:
    // 0x1fdeac: 0xae020450  sw          $v0, 0x450($s0)
    ctx->pc = 0x1fdeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1104), GPR_U32(ctx, 2));
label_1fdeb0:
    // 0x1fdeb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdeb4:
    // 0x1fdeb4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1fdeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1fdeb8:
    // 0x1fdeb8: 0xa3828f74  sb          $v0, -0x708C($gp)
    ctx->pc = 0x1fdeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938484), (uint8_t)GPR_U32(ctx, 2));
label_1fdebc:
    // 0x1fdebc: 0xaf9090d0  sw          $s0, -0x6F30($gp)
    ctx->pc = 0x1fdebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938832), GPR_U32(ctx, 16));
label_1fdec0:
    // 0x1fdec0: 0xaf809020  sw          $zero, -0x6FE0($gp)
    ctx->pc = 0x1fdec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 0));
label_1fdec4:
    // 0x1fdec4: 0xaf808f7c  sw          $zero, -0x7084($gp)
    ctx->pc = 0x1fdec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938492), GPR_U32(ctx, 0));
label_1fdec8:
    // 0x1fdec8: 0xaf808f80  sw          $zero, -0x7080($gp)
    ctx->pc = 0x1fdec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938496), GPR_U32(ctx, 0));
label_1fdecc:
    // 0x1fdecc: 0xa7808f6c  sh          $zero, -0x7094($gp)
    ctx->pc = 0x1fdeccu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938476), (uint16_t)GPR_U32(ctx, 0));
label_1fded0:
    // 0x1fded0: 0xa7808f70  sh          $zero, -0x7090($gp)
    ctx->pc = 0x1fded0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938480), (uint16_t)GPR_U32(ctx, 0));
label_1fded4:
    // 0x1fded4: 0xc08d1d0  jal         func_234740
label_1fded8:
    if (ctx->pc == 0x1FDED8u) {
        ctx->pc = 0x1FDED8u;
            // 0x1fded8: 0xaf808f64  sw          $zero, -0x709C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938468), GPR_U32(ctx, 0));
        ctx->pc = 0x1FDEDCu;
        goto label_1fdedc;
    }
    ctx->pc = 0x1FDED4u;
    SET_GPR_U32(ctx, 31, 0x1FDEDCu);
    ctx->pc = 0x1FDED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDED4u;
            // 0x1fded8: 0xaf808f64  sw          $zero, -0x709C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234740u;
    if (runtime->hasFunction(0x234740u)) {
        auto targetFn = runtime->lookupFunction(0x234740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEDCu; }
        if (ctx->pc != 0x1FDEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainPosCfgBuffer__FPi_0x234740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEDCu; }
        if (ctx->pc != 0x1FDEDCu) { return; }
    }
    ctx->pc = 0x1FDEDCu;
label_1fdedc:
    // 0x1fdedc: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1fdedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1fdee0:
    // 0x1fdee0: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1fdee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
label_1fdee4:
    // 0x1fdee4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdee8:
    // 0x1fdee8: 0xc094f98  jal         func_253E60
label_1fdeec:
    if (ctx->pc == 0x1FDEECu) {
        ctx->pc = 0x1FDEECu;
            // 0x1fdeec: 0x24c692e0  addiu       $a2, $a2, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939360));
        ctx->pc = 0x1FDEF0u;
        goto label_1fdef0;
    }
    ctx->pc = 0x1FDEE8u;
    SET_GPR_U32(ctx, 31, 0x1FDEF0u);
    ctx->pc = 0x1FDEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDEE8u;
            // 0x1fdeec: 0x24c692e0  addiu       $a2, $a2, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEF0u; }
        if (ctx->pc != 0x1FDEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEF0u; }
        if (ctx->pc != 0x1FDEF0u) { return; }
    }
    ctx->pc = 0x1FDEF0u;
label_1fdef0:
    // 0x1fdef0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fdef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fdef4:
    // 0x1fdef4: 0x8f8290d0  lw          $v0, -0x6F30($gp)
    ctx->pc = 0x1fdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_1fdef8:
    // 0x1fdef8: 0x8c249304  lw          $a0, -0x6CFC($at)
    ctx->pc = 0x1fdef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939396)));
label_1fdefc:
    // 0x1fdefc: 0x24061180  addiu       $a2, $zero, 0x1180
    ctx->pc = 0x1fdefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4480));
label_1fdf00:
    // 0x1fdf00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fdf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fdf04:
    // 0x1fdf04: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1fdf04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1fdf08:
    // 0x1fdf08: 0x8c239300  lw          $v1, -0x6D00($at)
    ctx->pc = 0x1fdf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939392)));
label_1fdf0c:
    // 0x1fdf0c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fdf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fdf10:
    // 0x1fdf10: 0xc04e79c  jal         func_139E70
label_1fdf14:
    if (ctx->pc == 0x1FDF14u) {
        ctx->pc = 0x1FDF14u;
            // 0x1fdf14: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->pc = 0x1FDF18u;
        goto label_1fdf18;
    }
    ctx->pc = 0x1FDF10u;
    SET_GPR_U32(ctx, 31, 0x1FDF18u);
    ctx->pc = 0x1FDF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF10u;
            // 0x1fdf14: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF18u; }
        if (ctx->pc != 0x1FDF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF18u; }
        if (ctx->pc != 0x1FDF18u) { return; }
    }
    ctx->pc = 0x1FDF18u;
label_1fdf18:
    // 0x1fdf18: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1fdf18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1fdf1c:
    // 0x1fdf1c: 0x24051180  addiu       $a1, $zero, 0x1180
    ctx->pc = 0x1fdf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4480));
label_1fdf20:
    // 0x1fdf20: 0xc04e748  jal         func_139D20
label_1fdf24:
    if (ctx->pc == 0x1FDF24u) {
        ctx->pc = 0x1FDF24u;
            // 0x1fdf24: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->pc = 0x1FDF28u;
        goto label_1fdf28;
    }
    ctx->pc = 0x1FDF20u;
    SET_GPR_U32(ctx, 31, 0x1FDF28u);
    ctx->pc = 0x1FDF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF20u;
            // 0x1fdf24: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF28u; }
        if (ctx->pc != 0x1FDF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF28u; }
        if (ctx->pc != 0x1FDF28u) { return; }
    }
    ctx->pc = 0x1FDF28u;
label_1fdf28:
    // 0x1fdf28: 0xc08ef58  jal         func_23BD60
label_1fdf2c:
    if (ctx->pc == 0x1FDF2Cu) {
        ctx->pc = 0x1FDF2Cu;
            // 0x1fdf2c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x1FDF30u;
        goto label_1fdf30;
    }
    ctx->pc = 0x1FDF28u;
    SET_GPR_U32(ctx, 31, 0x1FDF30u);
    ctx->pc = 0x1FDF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF28u;
            // 0x1fdf2c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BD60u;
    if (runtime->hasFunction(0x23BD60u)) {
        auto targetFn = runtime->lookupFunction(0x23BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF30u; }
        if (ctx->pc != 0x1FDF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachFuncData__12CMenuKeyFuncFv_0x23bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF30u; }
        if (ctx->pc != 0x1FDF30u) { return; }
    }
    ctx->pc = 0x1FDF30u;
label_1fdf30:
    // 0x1fdf30: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fdf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fdf34:
    // 0x1fdf34: 0x8f8290d0  lw          $v0, -0x6F30($gp)
    ctx->pc = 0x1fdf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_1fdf38:
    // 0x1fdf38: 0x8c23d648  lw          $v1, -0x29B8($at)
    ctx->pc = 0x1fdf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
label_1fdf3c:
    // 0x1fdf3c: 0xac430418  sw          $v1, 0x418($v0)
    ctx->pc = 0x1fdf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1048), GPR_U32(ctx, 3));
label_1fdf40:
    // 0x1fdf40: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1fdf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
label_1fdf44:
    // 0x1fdf44: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1fdf48:
    if (ctx->pc == 0x1FDF48u) {
        ctx->pc = 0x1FDF4Cu;
        goto label_1fdf4c;
    }
    ctx->pc = 0x1FDF44u;
    {
        const bool branch_taken_0x1fdf44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf44) {
            ctx->pc = 0x1FDFCCu;
            goto label_1fdfcc;
        }
    }
    ctx->pc = 0x1FDF4Cu;
label_1fdf4c:
    // 0x1fdf4c: 0x8f8390d0  lw          $v1, -0x6F30($gp)
    ctx->pc = 0x1fdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_1fdf50:
    // 0x1fdf50: 0x8c620418  lw          $v0, 0x418($v1)
    ctx->pc = 0x1fdf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1048)));
label_1fdf54:
    // 0x1fdf54: 0xaf828f68  sw          $v0, -0x7098($gp)
    ctx->pc = 0x1fdf54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938472), GPR_U32(ctx, 2));
label_1fdf58:
    // 0x1fdf58: 0xc06c310  jal         func_1B0C40
label_1fdf5c:
    if (ctx->pc == 0x1FDF5Cu) {
        ctx->pc = 0x1FDF5Cu;
            // 0x1fdf5c: 0x8c650418  lw          $a1, 0x418($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1048)));
        ctx->pc = 0x1FDF60u;
        goto label_1fdf60;
    }
    ctx->pc = 0x1FDF58u;
    SET_GPR_U32(ctx, 31, 0x1FDF60u);
    ctx->pc = 0x1FDF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF58u;
            // 0x1fdf5c: 0x8c650418  lw          $a1, 0x418($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1048)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF60u; }
        if (ctx->pc != 0x1FDF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF60u; }
        if (ctx->pc != 0x1FDF60u) { return; }
    }
    ctx->pc = 0x1FDF60u;
label_1fdf60:
    // 0x1fdf60: 0x8f8390d0  lw          $v1, -0x6F30($gp)
    ctx->pc = 0x1fdf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_1fdf64:
    // 0x1fdf64: 0xac620454  sw          $v0, 0x454($v1)
    ctx->pc = 0x1fdf64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1108), GPR_U32(ctx, 2));
label_1fdf68:
    // 0x1fdf68: 0x8f8490d0  lw          $a0, -0x6F30($gp)
    ctx->pc = 0x1fdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_1fdf6c:
    // 0x1fdf6c: 0x8c820454  lw          $v0, 0x454($a0)
    ctx->pc = 0x1fdf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1108)));
label_1fdf70:
    // 0x1fdf70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1fdf74:
    if (ctx->pc == 0x1FDF74u) {
        ctx->pc = 0x1FDF78u;
        goto label_1fdf78;
    }
    ctx->pc = 0x1FDF70u;
    {
        const bool branch_taken_0x1fdf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf70) {
            ctx->pc = 0x1FDF9Cu;
            goto label_1fdf9c;
        }
    }
    ctx->pc = 0x1FDF78u;
label_1fdf78:
    // 0x1fdf78: 0x8c430324  lw          $v1, 0x324($v0)
    ctx->pc = 0x1fdf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
label_1fdf7c:
    // 0x1fdf7c: 0xac830458  sw          $v1, 0x458($a0)
    ctx->pc = 0x1fdf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1112), GPR_U32(ctx, 3));
label_1fdf80:
    // 0x1fdf80: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x1fdf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1fdf84:
    // 0x1fdf84: 0x8f8490d0  lw          $a0, -0x6F30($gp)
    ctx->pc = 0x1fdf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_1fdf88:
    // 0x1fdf88: 0x8c830458  lw          $v1, 0x458($a0)
    ctx->pc = 0x1fdf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1112)));
label_1fdf8c:
    // 0x1fdf8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fdf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fdf90:
    // 0x1fdf90: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1fdf94:
    if (ctx->pc == 0x1FDF94u) {
        ctx->pc = 0x1FDF94u;
            // 0x1fdf94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FDF98u;
        goto label_1fdf98;
    }
    ctx->pc = 0x1FDF90u;
    {
        const bool branch_taken_0x1fdf90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FDF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF90u;
            // 0x1fdf94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf90) {
            ctx->pc = 0x1FDF9Cu;
            goto label_1fdf9c;
        }
    }
    ctx->pc = 0x1FDF98u;
label_1fdf98:
    // 0x1fdf98: 0xac82044c  sw          $v0, 0x44C($a0)
    ctx->pc = 0x1fdf98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1100), GPR_U32(ctx, 2));
label_1fdf9c:
    // 0x1fdf9c: 0x8f8390d0  lw          $v1, -0x6F30($gp)
    ctx->pc = 0x1fdf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_1fdfa0:
    // 0x1fdfa0: 0x8c620454  lw          $v0, 0x454($v1)
    ctx->pc = 0x1fdfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1108)));
label_1fdfa4:
    // 0x1fdfa4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fdfa8:
    if (ctx->pc == 0x1FDFA8u) {
        ctx->pc = 0x1FDFACu;
        goto label_1fdfac;
    }
    ctx->pc = 0x1FDFA4u;
    {
        const bool branch_taken_0x1fdfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfa4) {
            ctx->pc = 0x1FDFCCu;
            goto label_1fdfcc;
        }
    }
    ctx->pc = 0x1FDFACu;
label_1fdfac:
    // 0x1fdfac: 0x8c420328  lw          $v0, 0x328($v0)
    ctx->pc = 0x1fdfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
label_1fdfb0:
    // 0x1fdfb0: 0xac62045c  sw          $v0, 0x45C($v1)
    ctx->pc = 0x1fdfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1116), GPR_U32(ctx, 2));
label_1fdfb4:
    // 0x1fdfb4: 0x8f8390d0  lw          $v1, -0x6F30($gp)
    ctx->pc = 0x1fdfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_1fdfb8:
    // 0x1fdfb8: 0x8c62045c  lw          $v0, 0x45C($v1)
    ctx->pc = 0x1fdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1116)));
label_1fdfbc:
    // 0x1fdfbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fdfc0:
    if (ctx->pc == 0x1FDFC0u) {
        ctx->pc = 0x1FDFC4u;
        goto label_1fdfc4;
    }
    ctx->pc = 0x1FDFBCu;
    {
        const bool branch_taken_0x1fdfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfbc) {
            ctx->pc = 0x1FDFCCu;
            goto label_1fdfcc;
        }
    }
    ctx->pc = 0x1FDFC4u;
label_1fdfc4:
    // 0x1fdfc4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1fdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fdfc8:
    // 0x1fdfc8: 0xac620450  sw          $v0, 0x450($v1)
    ctx->pc = 0x1fdfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 2));
label_1fdfcc:
    // 0x1fdfcc: 0x8f8290d0  lw          $v0, -0x6F30($gp)
    ctx->pc = 0x1fdfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_1fdfd0:
    // 0x1fdfd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fdfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fdfd4:
    // 0x1fdfd4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fdfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fdfd8:
    // 0x1fdfd8: 0x24a58938  addiu       $a1, $a1, -0x76C8
    ctx->pc = 0x1fdfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936888));
label_1fdfdc:
    // 0x1fdfdc: 0x8c42045c  lw          $v0, 0x45C($v0)
    ctx->pc = 0x1fdfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1116)));
label_1fdfe0:
    // 0x1fdfe0: 0xc08ab90  jal         func_22AE40
label_1fdfe4:
    if (ctx->pc == 0x1FDFE4u) {
        ctx->pc = 0x1FDFE4u;
            // 0x1fdfe4: 0xaf828f60  sw          $v0, -0x70A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938464), GPR_U32(ctx, 2));
        ctx->pc = 0x1FDFE8u;
        goto label_1fdfe8;
    }
    ctx->pc = 0x1FDFE0u;
    SET_GPR_U32(ctx, 31, 0x1FDFE8u);
    ctx->pc = 0x1FDFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFE0u;
            // 0x1fdfe4: 0xaf828f60  sw          $v0, -0x70A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFE8u; }
        if (ctx->pc != 0x1FDFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFE8u; }
        if (ctx->pc != 0x1FDFE8u) { return; }
    }
    ctx->pc = 0x1FDFE8u;
label_1fdfe8:
    // 0x1fdfe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fdfe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdfec:
    // 0x1fdfec: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_1fdff0:
    if (ctx->pc == 0x1FDFF0u) {
        ctx->pc = 0x1FDFF0u;
            // 0x1fdff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FDFF4u;
        goto label_1fdff4;
    }
    ctx->pc = 0x1FDFECu;
    {
        const bool branch_taken_0x1fdfec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFECu;
            // 0x1fdff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfec) {
            ctx->pc = 0x1FE034u;
            goto label_1fe034;
        }
    }
    ctx->pc = 0x1FDFF4u;
label_1fdff4:
    // 0x1fdff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fdff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fdff8:
    // 0x1fdff8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1fdff8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1fdffc:
    // 0x1fdffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe000:
    // 0x1fe000: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x1fe000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1fe004:
    // 0x1fe004: 0xc0896cc  jal         func_225B30
label_1fe008:
    if (ctx->pc == 0x1FE008u) {
        ctx->pc = 0x1FE008u;
            // 0x1fe008: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1FE00Cu;
        goto label_1fe00c;
    }
    ctx->pc = 0x1FE004u;
    SET_GPR_U32(ctx, 31, 0x1FE00Cu);
    ctx->pc = 0x1FE008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE004u;
            // 0x1fe008: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE00Cu; }
        if (ctx->pc != 0x1FE00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE00Cu; }
        if (ctx->pc != 0x1FE00Cu) { return; }
    }
    ctx->pc = 0x1FE00Cu;
label_1fe00c:
    // 0x1fe00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe010:
    // 0x1fe010: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe014:
    // 0x1fe014: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x1fe014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1fe018:
    // 0x1fe018: 0xc0896cc  jal         func_225B30
label_1fe01c:
    if (ctx->pc == 0x1FE01Cu) {
        ctx->pc = 0x1FE01Cu;
            // 0x1fe01c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1FE020u;
        goto label_1fe020;
    }
    ctx->pc = 0x1FE018u;
    SET_GPR_U32(ctx, 31, 0x1FE020u);
    ctx->pc = 0x1FE01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE018u;
            // 0x1fe01c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE020u; }
        if (ctx->pc != 0x1FE020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE020u; }
        if (ctx->pc != 0x1FE020u) { return; }
    }
    ctx->pc = 0x1FE020u;
label_1fe020:
    // 0x1fe020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe024:
    // 0x1fe024: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fe024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe028:
    // 0x1fe028: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x1fe028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1fe02c:
    // 0x1fe02c: 0xc0896cc  jal         func_225B30
label_1fe030:
    if (ctx->pc == 0x1FE030u) {
        ctx->pc = 0x1FE030u;
            // 0x1fe030: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1FE034u;
        goto label_1fe034;
    }
    ctx->pc = 0x1FE02Cu;
    SET_GPR_U32(ctx, 31, 0x1FE034u);
    ctx->pc = 0x1FE030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE02Cu;
            // 0x1fe030: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE034u; }
        if (ctx->pc != 0x1FE034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE034u; }
        if (ctx->pc != 0x1FE034u) { return; }
    }
    ctx->pc = 0x1FE034u;
label_1fe034:
    // 0x1fe034: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fe034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fe038:
    // 0x1fe038: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fe038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fe03c:
    // 0x1fe03c: 0xc08ab90  jal         func_22AE40
label_1fe040:
    if (ctx->pc == 0x1FE040u) {
        ctx->pc = 0x1FE040u;
            // 0x1fe040: 0x24a58fe8  addiu       $a1, $a1, -0x7018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938600));
        ctx->pc = 0x1FE044u;
        goto label_1fe044;
    }
    ctx->pc = 0x1FE03Cu;
    SET_GPR_U32(ctx, 31, 0x1FE044u);
    ctx->pc = 0x1FE040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE03Cu;
            // 0x1fe040: 0x24a58fe8  addiu       $a1, $a1, -0x7018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE044u; }
        if (ctx->pc != 0x1FE044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE044u; }
        if (ctx->pc != 0x1FE044u) { return; }
    }
    ctx->pc = 0x1FE044u;
label_1fe044:
    // 0x1fe044: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1fe048:
    if (ctx->pc == 0x1FE048u) {
        ctx->pc = 0x1FE04Cu;
        goto label_1fe04c;
    }
    ctx->pc = 0x1FE044u;
    {
        const bool branch_taken_0x1fe044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe044) {
            ctx->pc = 0x1FE050u;
            goto label_1fe050;
        }
    }
    ctx->pc = 0x1FE04Cu;
label_1fe04c:
    // 0x1fe04c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1fe04cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1fe050:
    // 0x1fe050: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fe050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fe054:
    // 0x1fe054: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fe054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fe058:
    // 0x1fe058: 0xc08ab90  jal         func_22AE40
label_1fe05c:
    if (ctx->pc == 0x1FE05Cu) {
        ctx->pc = 0x1FE05Cu;
            // 0x1fe05c: 0x24a58ff8  addiu       $a1, $a1, -0x7008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938616));
        ctx->pc = 0x1FE060u;
        goto label_1fe060;
    }
    ctx->pc = 0x1FE058u;
    SET_GPR_U32(ctx, 31, 0x1FE060u);
    ctx->pc = 0x1FE05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE058u;
            // 0x1fe05c: 0x24a58ff8  addiu       $a1, $a1, -0x7008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE060u; }
        if (ctx->pc != 0x1FE060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE060u; }
        if (ctx->pc != 0x1FE060u) { return; }
    }
    ctx->pc = 0x1FE060u;
label_1fe060:
    // 0x1fe060: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1fe064:
    if (ctx->pc == 0x1FE064u) {
        ctx->pc = 0x1FE068u;
        goto label_1fe068;
    }
    ctx->pc = 0x1FE060u;
    {
        const bool branch_taken_0x1fe060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe060) {
            ctx->pc = 0x1FE06Cu;
            goto label_1fe06c;
        }
    }
    ctx->pc = 0x1FE068u;
label_1fe068:
    // 0x1fe068: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1fe068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1fe06c:
    // 0x1fe06c: 0xc08ad38  jal         func_22B4E0
label_1fe070:
    if (ctx->pc == 0x1FE070u) {
        ctx->pc = 0x1FE070u;
            // 0x1fe070: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x1FE074u;
        goto label_1fe074;
    }
    ctx->pc = 0x1FE06Cu;
    SET_GPR_U32(ctx, 31, 0x1FE074u);
    ctx->pc = 0x1FE070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE06Cu;
            // 0x1fe070: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE074u; }
        if (ctx->pc != 0x1FE074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE074u; }
        if (ctx->pc != 0x1FE074u) { return; }
    }
    ctx->pc = 0x1FE074u;
label_1fe074:
    // 0x1fe074: 0xc08ac10  jal         func_22B040
label_1fe078:
    if (ctx->pc == 0x1FE078u) {
        ctx->pc = 0x1FE078u;
            // 0x1fe078: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x1FE07Cu;
        goto label_1fe07c;
    }
    ctx->pc = 0x1FE074u;
    SET_GPR_U32(ctx, 31, 0x1FE07Cu);
    ctx->pc = 0x1FE078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE074u;
            // 0x1fe078: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B040u;
    if (runtime->hasFunction(0x22B040u)) {
        auto targetFn = runtime->lookupFunction(0x22B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE07Cu; }
        if (ctx->pc != 0x1FE07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDrawList__14CPosDataManageFv_0x22b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE07Cu; }
        if (ctx->pc != 0x1FE07Cu) { return; }
    }
    ctx->pc = 0x1FE07Cu;
label_1fe07c:
    // 0x1fe07c: 0xc08aa80  jal         func_22AA00
label_1fe080:
    if (ctx->pc == 0x1FE080u) {
        ctx->pc = 0x1FE080u;
            // 0x1fe080: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x1FE084u;
        goto label_1fe084;
    }
    ctx->pc = 0x1FE07Cu;
    SET_GPR_U32(ctx, 31, 0x1FE084u);
    ctx->pc = 0x1FE080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE07Cu;
            // 0x1fe080: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AA00u;
    if (runtime->hasFunction(0x22AA00u)) {
        auto targetFn = runtime->lookupFunction(0x22AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE084u; }
        if (ctx->pc != 0x1FE084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureInfoAll__14CPosDataManageFv_0x22aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE084u; }
        if (ctx->pc != 0x1FE084u) { return; }
    }
    ctx->pc = 0x1FE084u;
label_1fe084:
    // 0x1fe084: 0xc087d68  jal         func_21F5A0
label_1fe088:
    if (ctx->pc == 0x1FE088u) {
        ctx->pc = 0x1FE08Cu;
        goto label_1fe08c;
    }
    ctx->pc = 0x1FE084u;
    SET_GPR_U32(ctx, 31, 0x1FE08Cu);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE08Cu; }
        if (ctx->pc != 0x1FE08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE08Cu; }
        if (ctx->pc != 0x1FE08Cu) { return; }
    }
    ctx->pc = 0x1FE08Cu;
label_1fe08c:
    // 0x1fe08c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fe08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fe090:
    // 0x1fe090: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1fe090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1fe094:
    // 0x1fe094: 0x8c22cb30  lw          $v0, -0x34D0($at)
    ctx->pc = 0x1fe094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953776)));
label_1fe098:
    // 0x1fe098: 0x248492e0  addiu       $a0, $a0, -0x6D20
    ctx->pc = 0x1fe098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
label_1fe09c:
    // 0x1fe09c: 0x278581c8  addiu       $a1, $gp, -0x7E38
    ctx->pc = 0x1fe09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
label_1fe0a0:
    // 0x1fe0a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe0a4:
    // 0x1fe0a4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1fe0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1fe0a8:
    // 0x1fe0a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fe0ac:
    // 0x1fe0ac: 0x8c22cb34  lw          $v0, -0x34CC($at)
    ctx->pc = 0x1fe0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953780)));
label_1fe0b0:
    // 0x1fe0b0: 0xc094470  jal         func_2511C0
label_1fe0b4:
    if (ctx->pc == 0x1FE0B4u) {
        ctx->pc = 0x1FE0B4u;
            // 0x1fe0b4: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FE0B8u;
        goto label_1fe0b8;
    }
    ctx->pc = 0x1FE0B0u;
    SET_GPR_U32(ctx, 31, 0x1FE0B8u);
    ctx->pc = 0x1FE0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0B0u;
            // 0x1fe0b4: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2511C0u;
    if (runtime->hasFunction(0x2511C0u)) {
        auto targetFn = runtime->lookupFunction(0x2511C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE0B8u; }
        if (ctx->pc != 0x1FE0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCommonReadData__FP9mgCMemoryPPci_0x2511c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE0B8u; }
        if (ctx->pc != 0x1FE0B8u) { return; }
    }
    ctx->pc = 0x1FE0B8u;
label_1fe0b8:
    // 0x1fe0b8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1fe0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1fe0bc:
    // 0x1fe0bc: 0xc04e780  jal         func_139E00
label_1fe0c0:
    if (ctx->pc == 0x1FE0C0u) {
        ctx->pc = 0x1FE0C0u;
            // 0x1fe0c0: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->pc = 0x1FE0C4u;
        goto label_1fe0c4;
    }
    ctx->pc = 0x1FE0BCu;
    SET_GPR_U32(ctx, 31, 0x1FE0C4u);
    ctx->pc = 0x1FE0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0BCu;
            // 0x1fe0c0: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE0C4u; }
        if (ctx->pc != 0x1FE0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE0C4u; }
        if (ctx->pc != 0x1FE0C4u) { return; }
    }
    ctx->pc = 0x1FE0C4u;
label_1fe0c4:
    // 0x1fe0c4: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x1fe0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fe0c8:
    // 0x1fe0c8: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x1fe0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
label_1fe0cc:
    // 0x1fe0cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1fe0d0:
    if (ctx->pc == 0x1FE0D0u) {
        ctx->pc = 0x1FE0D0u;
            // 0x1fe0d0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1FE0D4u;
        goto label_1fe0d4;
    }
    ctx->pc = 0x1FE0CCu;
    {
        const bool branch_taken_0x1fe0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0CCu;
            // 0x1fe0d0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0cc) {
            ctx->pc = 0x1FE0D8u;
            goto label_1fe0d8;
        }
    }
    ctx->pc = 0x1FE0D4u;
label_1fe0d4:
    // 0x1fe0d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1fe0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1fe0d8:
    // 0x1fe0d8: 0xac20d630  sw          $zero, -0x29D0($at)
    ctx->pc = 0x1fe0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 0));
label_1fe0dc:
    // 0x1fe0dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe0e0:
    // 0x1fe0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe0e4:
    // 0x1fe0e4: 0x3e00008  jr          $ra
label_1fe0e8:
    if (ctx->pc == 0x1FE0E8u) {
        ctx->pc = 0x1FE0E8u;
            // 0x1fe0e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1FE0ECu;
        goto label_fallthrough_0x1fe0e4;
    }
    ctx->pc = 0x1FE0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0E4u;
            // 0x1fe0e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fe0e4:
    ctx->pc = 0x1FE0ECu;
}
