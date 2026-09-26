#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleCopyRightStep__Fv
// Address: 0x2a3070 - 0x2a340c
void TitleCopyRightStep__Fv_0x2a3070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleCopyRightStep__Fv_0x2a3070");
#endif

    switch (ctx->pc) {
        case 0x2a3118u: goto label_2a3118;
        case 0x2a312cu: goto label_2a312c;
        case 0x2a317cu: goto label_2a317c;
        case 0x2a3190u: goto label_2a3190;
        case 0x2a31acu: goto label_2a31ac;
        case 0x2a31c0u: goto label_2a31c0;
        case 0x2a3210u: goto label_2a3210;
        case 0x2a3224u: goto label_2a3224;
        case 0x2a3244u: goto label_2a3244;
        case 0x2a324cu: goto label_2a324c;
        case 0x2a3288u: goto label_2a3288;
        case 0x2a329cu: goto label_2a329c;
        case 0x2a32c0u: goto label_2a32c0;
        case 0x2a32d0u: goto label_2a32d0;
        case 0x2a32d8u: goto label_2a32d8;
        case 0x2a32e0u: goto label_2a32e0;
        case 0x2a32e8u: goto label_2a32e8;
        case 0x2a32f0u: goto label_2a32f0;
        case 0x2a330cu: goto label_2a330c;
        case 0x2a3330u: goto label_2a3330;
        case 0x2a3344u: goto label_2a3344;
        case 0x2a3370u: goto label_2a3370;
        case 0x2a3378u: goto label_2a3378;
        case 0x2a3398u: goto label_2a3398;
        case 0x2a33c4u: goto label_2a33c4;
        case 0x2a33ecu: goto label_2a33ec;
        default: break;
    }

    ctx->pc = 0x2a3070u;

    // 0x2a3070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a3070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a3074: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a3074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a3078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a307c: 0x838499b4  lb          $a0, -0x664C($gp)
    ctx->pc = 0x2a307cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941108)));
    // 0x2a3080: 0x108300dc  beq         $a0, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x2A3080u;
    {
        const bool branch_taken_0x2a3080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A3084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3080u;
            // 0x2a3084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3080) {
            ctx->pc = 0x2A33F4u;
            goto label_2a33f4;
        }
    }
    ctx->pc = 0x2A3088u;
    // 0x2a3088: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a3088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a308c: 0x108200cf  beq         $a0, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x2A308Cu;
    {
        const bool branch_taken_0x2a308c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A308Cu;
            // 0x2a3090: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a308c) {
            ctx->pc = 0x2A33CCu;
            goto label_2a33cc;
        }
    }
    ctx->pc = 0x2A3094u;
    // 0x2a3094: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2A3094u;
    {
        const bool branch_taken_0x2a3094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3094u;
            // 0x2a3098: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3094) {
            ctx->pc = 0x2A3318u;
            goto label_2a3318;
        }
    }
    ctx->pc = 0x2A309Cu;
    // 0x2a309c: 0x10820098  beq         $a0, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2A309Cu;
    {
        const bool branch_taken_0x2a309c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A30A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A309Cu;
            // 0x2a30a0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a309c) {
            ctx->pc = 0x2A3300u;
            goto label_2a3300;
        }
    }
    ctx->pc = 0x2A30A4u;
    // 0x2a30a4: 0x1083005c  beq         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2A30A4u;
    {
        const bool branch_taken_0x2a30a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A30A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30A4u;
            // 0x2a30a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30a4) {
            ctx->pc = 0x2A3218u;
            goto label_2a3218;
        }
    }
    ctx->pc = 0x2A30ACu;
    // 0x2a30ac: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2A30ACu;
    {
        const bool branch_taken_0x2a30ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a30ac) {
            ctx->pc = 0x2A31D4u;
            goto label_2a31d4;
        }
    }
    ctx->pc = 0x2A30B4u;
    // 0x2a30b4: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2A30B4u;
    {
        const bool branch_taken_0x2a30b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A30B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30B4u;
            // 0x2a30b8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30b4) {
            ctx->pc = 0x2A31B4u;
            goto label_2a31b4;
        }
    }
    ctx->pc = 0x2A30BCu;
    // 0x2a30bc: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2A30BCu;
    {
        const bool branch_taken_0x2a30bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A30C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30BCu;
            // 0x2a30c0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30bc) {
            ctx->pc = 0x2A3184u;
            goto label_2a3184;
        }
    }
    ctx->pc = 0x2A30C4u;
    // 0x2a30c4: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A30C4u;
    {
        const bool branch_taken_0x2a30c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A30C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30C4u;
            // 0x2a30c8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30c4) {
            ctx->pc = 0x2A3140u;
            goto label_2a3140;
        }
    }
    ctx->pc = 0x2A30CCu;
    // 0x2a30cc: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A30CCu;
    {
        const bool branch_taken_0x2a30cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A30D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30CCu;
            // 0x2a30d0: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30cc) {
            ctx->pc = 0x2A3120u;
            goto label_2a3120;
        }
    }
    ctx->pc = 0x2A30D4u;
    // 0x2a30d4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A30D4u;
    {
        const bool branch_taken_0x2a30d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a30d4) {
            ctx->pc = 0x2A30E4u;
            goto label_2a30e4;
        }
    }
    ctx->pc = 0x2A30DCu;
    // 0x2a30dc: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2A30DCu;
    {
        const bool branch_taken_0x2a30dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A30E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30DCu;
            // 0x2a30e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30dc) {
            ctx->pc = 0x2A3400u;
            goto label_2a3400;
        }
    }
    ctx->pc = 0x2A30E4u;
label_2a30e4:
    // 0x2a30e4: 0x878299b8  lh          $v0, -0x6648($gp)
    ctx->pc = 0x2a30e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941112)));
    // 0x2a30e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a30ec: 0xa78299b8  sh          $v0, -0x6648($gp)
    ctx->pc = 0x2a30ecu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941112), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a30f0: 0x878299b8  lh          $v0, -0x6648($gp)
    ctx->pc = 0x2a30f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941112)));
    // 0x2a30f4: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x2a30f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2a30f8: 0x142000c0  bnez        $at, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2A30F8u;
    {
        const bool branch_taken_0x2a30f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a30f8) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A3100u;
    // 0x2a3100: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3104: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2a3104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a3108: 0xa78099b8  sh          $zero, -0x6648($gp)
    ctx->pc = 0x2a3108u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a310c: 0xa38099b4  sb          $zero, -0x664C($gp)
    ctx->pc = 0x2a310cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3110: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x2A3110u;
    SET_GPR_U32(ctx, 31, 0x2A3118u);
    ctx->pc = 0x2A3114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3110u;
            // 0x2a3114: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3118u; }
        if (ctx->pc != 0x2A3118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3118u; }
        if (ctx->pc != 0x2A3118u) { return; }
    }
    ctx->pc = 0x2A3118u;
label_2a3118:
    // 0x2a3118: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x2A3118u;
    {
        const bool branch_taken_0x2a3118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3118) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A3120u;
label_2a3120:
    // 0x2a3120: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3124: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A3124u;
    SET_GPR_U32(ctx, 31, 0x2A312Cu);
    ctx->pc = 0x2A3128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3124u;
            // 0x2a3128: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A312Cu; }
        if (ctx->pc != 0x2A312Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A312Cu; }
        if (ctx->pc != 0x2A312Cu) { return; }
    }
    ctx->pc = 0x2A312Cu;
label_2a312c:
    // 0x2a312c: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2A312Cu;
    {
        const bool branch_taken_0x2a312c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A312Cu;
            // 0x2a3130: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a312c) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A3134u;
    // 0x2a3134: 0xa78099b8  sh          $zero, -0x6648($gp)
    ctx->pc = 0x2a3134u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a3138: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2A3138u;
    {
        const bool branch_taken_0x2a3138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3138u;
            // 0x2a313c: 0xa38299b4  sb          $v0, -0x664C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3138) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A3140u;
label_2a3140:
    // 0x2a3140: 0x878299b8  lh          $v0, -0x6648($gp)
    ctx->pc = 0x2a3140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941112)));
    // 0x2a3144: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3148: 0xa78299b8  sh          $v0, -0x6648($gp)
    ctx->pc = 0x2a3148u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941112), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a314c: 0x878299b8  lh          $v0, -0x6648($gp)
    ctx->pc = 0x2a314cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941112)));
    // 0x2a3150: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x2a3150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x2a3154: 0x142000a9  bnez        $at, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2A3154u;
    {
        const bool branch_taken_0x2a3154 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3154) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A315Cu;
    // 0x2a315c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3160: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a3160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3164: 0xa38399b4  sb          $v1, -0x664C($gp)
    ctx->pc = 0x2a3164u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a3168: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2a3168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a316c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a316cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3170: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a3170u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3174: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A3174u;
    SET_GPR_U32(ctx, 31, 0x2A317Cu);
    ctx->pc = 0x2A3178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3174u;
            // 0x2a3178: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A317Cu; }
        if (ctx->pc != 0x2A317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A317Cu; }
        if (ctx->pc != 0x2A317Cu) { return; }
    }
    ctx->pc = 0x2A317Cu;
label_2a317c:
    // 0x2a317c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2A317Cu;
    {
        const bool branch_taken_0x2a317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a317c) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A3184u;
label_2a3184:
    // 0x2a3184: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3188: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A3188u;
    SET_GPR_U32(ctx, 31, 0x2A3190u);
    ctx->pc = 0x2A318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3188u;
            // 0x2a318c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3190u; }
        if (ctx->pc != 0x2A3190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3190u; }
        if (ctx->pc != 0x2A3190u) { return; }
    }
    ctx->pc = 0x2A3190u;
label_2a3190:
    // 0x2a3190: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2A3190u;
    {
        const bool branch_taken_0x2a3190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3190) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A3198u;
    // 0x2a3198: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a319c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2a319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a31a0: 0xa38099b4  sb          $zero, -0x664C($gp)
    ctx->pc = 0x2a31a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a31a4: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x2A31A4u;
    SET_GPR_U32(ctx, 31, 0x2A31ACu);
    ctx->pc = 0x2A31A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31A4u;
            // 0x2a31a8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31ACu; }
        if (ctx->pc != 0x2A31ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31ACu; }
        if (ctx->pc != 0x2A31ACu) { return; }
    }
    ctx->pc = 0x2A31ACu;
label_2a31ac:
    // 0x2a31ac: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2A31ACu;
    {
        const bool branch_taken_0x2a31ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a31ac) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A31B4u;
label_2a31b4:
    // 0x2a31b4: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a31b8: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A31B8u;
    SET_GPR_U32(ctx, 31, 0x2A31C0u);
    ctx->pc = 0x2A31BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31B8u;
            // 0x2a31bc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31C0u; }
        if (ctx->pc != 0x2A31C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A31C0u; }
        if (ctx->pc != 0x2A31C0u) { return; }
    }
    ctx->pc = 0x2A31C0u;
label_2a31c0:
    // 0x2a31c0: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2A31C0u;
    {
        const bool branch_taken_0x2a31c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A31C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31C0u;
            // 0x2a31c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a31c0) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A31C8u;
    // 0x2a31c8: 0xa78099b8  sh          $zero, -0x6648($gp)
    ctx->pc = 0x2a31c8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a31cc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2A31CCu;
    {
        const bool branch_taken_0x2a31cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A31D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A31CCu;
            // 0x2a31d0: 0xa38299b4  sb          $v0, -0x664C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a31cc) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A31D4u;
label_2a31d4:
    // 0x2a31d4: 0x878299b8  lh          $v0, -0x6648($gp)
    ctx->pc = 0x2a31d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941112)));
    // 0x2a31d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a31dc: 0xa78299b8  sh          $v0, -0x6648($gp)
    ctx->pc = 0x2a31dcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941112), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a31e0: 0x878299b8  lh          $v0, -0x6648($gp)
    ctx->pc = 0x2a31e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941112)));
    // 0x2a31e4: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x2a31e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2a31e8: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2A31E8u;
    {
        const bool branch_taken_0x2a31e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a31e8) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A31F0u;
    // 0x2a31f0: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a31f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a31f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a31f8: 0xa38399b4  sb          $v1, -0x664C($gp)
    ctx->pc = 0x2a31f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a31fc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2a31fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a3200: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a3200u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3204: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a3204u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3208: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A3208u;
    SET_GPR_U32(ctx, 31, 0x2A3210u);
    ctx->pc = 0x2A320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3208u;
            // 0x2a320c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3210u; }
        if (ctx->pc != 0x2A3210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3210u; }
        if (ctx->pc != 0x2A3210u) { return; }
    }
    ctx->pc = 0x2A3210u;
label_2a3210:
    // 0x2a3210: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2A3210u;
    {
        const bool branch_taken_0x2a3210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3210) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A3218u;
label_2a3218:
    // 0x2a3218: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a321c: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A321Cu;
    SET_GPR_U32(ctx, 31, 0x2A3224u);
    ctx->pc = 0x2A3220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A321Cu;
            // 0x2a3220: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3224u; }
        if (ctx->pc != 0x2A3224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3224u; }
        if (ctx->pc != 0x2A3224u) { return; }
    }
    ctx->pc = 0x2A3224u;
label_2a3224:
    // 0x2a3224: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2A3224u;
    {
        const bool branch_taken_0x2a3224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3224u;
            // 0x2a3228: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3224) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A322Cu;
    // 0x2a322c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2a322cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2a3230: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2a3230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2a3234: 0xa38299b4  sb          $v0, -0x664C($gp)
    ctx->pc = 0x2a3234u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3238: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x2a3238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2a323c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A323Cu;
    SET_GPR_U32(ctx, 31, 0x2A3244u);
    ctx->pc = 0x2A3240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A323Cu;
            // 0x2a3240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3244u; }
        if (ctx->pc != 0x2A3244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3244u; }
        if (ctx->pc != 0x2A3244u) { return; }
    }
    ctx->pc = 0x2A3244u;
label_2a3244:
    // 0x2a3244: 0xc04e640  jal         func_139900
    ctx->pc = 0x2A3244u;
    SET_GPR_U32(ctx, 31, 0x2A324Cu);
    ctx->pc = 0x2A3248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3244u;
            // 0x2a3248: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A324Cu; }
        if (ctx->pc != 0x2A324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A324Cu; }
        if (ctx->pc != 0x2A324Cu) { return; }
    }
    ctx->pc = 0x2A324Cu;
label_2a324c:
    // 0x2a324c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3250: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a3250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3254: 0xac206124  sw          $zero, 0x6124($at)
    ctx->pc = 0x2a3254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24868), GPR_U32(ctx, 0));
    // 0x2a3258: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a325c: 0xac20611c  sw          $zero, 0x611C($at)
    ctx->pc = 0x2a325cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24860), GPR_U32(ctx, 0));
    // 0x2a3260: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3264: 0x8c236128  lw          $v1, 0x6128($at)
    ctx->pc = 0x2a3264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24872)));
    // 0x2a3268: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a326c: 0x8c256124  lw          $a1, 0x6124($at)
    ctx->pc = 0x2a326cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24868)));
    // 0x2a3270: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3274: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2a3274u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a3278: 0x8c226120  lw          $v0, 0x6120($at)
    ctx->pc = 0x2a3278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24864)));
    // 0x2a327c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2a327cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a3280: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2A3280u;
    SET_GPR_U32(ctx, 31, 0x2A3288u);
    ctx->pc = 0x2A3284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3280u;
            // 0x2a3284: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3288u; }
        if (ctx->pc != 0x2A3288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3288u; }
        if (ctx->pc != 0x2A3288u) { return; }
    }
    ctx->pc = 0x2A3288u;
label_2a3288:
    // 0x2a3288: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2a3288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a328c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a328cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3294: 0xc0887b0  jal         func_221EC0
    ctx->pc = 0x2A3294u;
    SET_GPR_U32(ctx, 31, 0x2A329Cu);
    ctx->pc = 0x2A3298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3294u;
            // 0x2a3298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A329Cu; }
        if (ctx->pc != 0x2A329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A329Cu; }
        if (ctx->pc != 0x2A329Cu) { return; }
    }
    ctx->pc = 0x2A329Cu;
label_2a329c:
    // 0x2a329c: 0x8f8499e0  lw          $a0, -0x6620($gp)
    ctx->pc = 0x2a329cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
    // 0x2a32a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a32a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a32a4: 0x24a5e220  addiu       $a1, $a1, -0x1DE0
    ctx->pc = 0x2a32a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959648));
    // 0x2a32a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a32a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a32ac: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a32acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a32b0: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2a32b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2a32b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a32b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a32b8: 0xc0a62b4  jal         func_298AD0
    ctx->pc = 0x2A32B8u;
    SET_GPR_U32(ctx, 31, 0x2A32C0u);
    ctx->pc = 0x2A32BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32B8u;
            // 0x2a32bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298AD0u;
    if (runtime->hasFunction(0x298AD0u)) {
        auto targetFn = runtime->lookupFunction(0x298AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32C0u; }
        if (ctx->pc != 0x2A32C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcP9mgCMemoryiibb_0x298ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32C0u; }
        if (ctx->pc != 0x2A32C0u) { return; }
    }
    ctx->pc = 0x2A32C0u;
label_2a32c0:
    // 0x2a32c0: 0x8f8499e0  lw          $a0, -0x6620($gp)
    ctx->pc = 0x2a32c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
    // 0x2a32c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a32c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a32c8: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2A32C8u;
    SET_GPR_U32(ctx, 31, 0x2A32D0u);
    ctx->pc = 0x2A32CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32C8u;
            // 0x2a32cc: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298B80u;
    if (runtime->hasFunction(0x298B80u)) {
        auto targetFn = runtime->lookupFunction(0x298B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32D0u; }
        if (ctx->pc != 0x2A32D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__6CMovieFPc_0x298b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32D0u; }
        if (ctx->pc != 0x2A32D0u) { return; }
    }
    ctx->pc = 0x2A32D0u;
label_2a32d0:
    // 0x2a32d0: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2A32D0u;
    SET_GPR_U32(ctx, 31, 0x2A32D8u);
    ctx->pc = 0x2A32D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32D0u;
            // 0x2a32d4: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32D8u; }
        if (ctx->pc != 0x2A32D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32D8u; }
        if (ctx->pc != 0x2A32D8u) { return; }
    }
    ctx->pc = 0x2A32D8u;
label_2a32d8:
    // 0x2a32d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A32D8u;
    {
        const bool branch_taken_0x2a32d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a32d8) {
            ctx->pc = 0x2A32E8u;
            goto label_2a32e8;
        }
    }
    ctx->pc = 0x2A32E0u;
label_2a32e0:
    // 0x2a32e0: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2A32E0u;
    SET_GPR_U32(ctx, 31, 0x2A32E8u);
    ctx->pc = 0x2A32E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32E0u;
            // 0x2a32e4: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32E8u; }
        if (ctx->pc != 0x2A32E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32E8u; }
        if (ctx->pc != 0x2A32E8u) { return; }
    }
    ctx->pc = 0x2A32E8u;
label_2a32e8:
    // 0x2a32e8: 0xc0a63dc  jal         func_298F70
    ctx->pc = 0x2A32E8u;
    SET_GPR_U32(ctx, 31, 0x2A32F0u);
    ctx->pc = 0x2A32ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32E8u;
            // 0x2a32ec: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F70u;
    if (runtime->hasFunction(0x298F70u)) {
        auto targetFn = runtime->lookupFunction(0x298F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32F0u; }
        if (ctx->pc != 0x2A32F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsStarted__6CMovieFv_0x298f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A32F0u; }
        if (ctx->pc != 0x2A32F0u) { return; }
    }
    ctx->pc = 0x2A32F0u;
label_2a32f0:
    // 0x2a32f0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A32F0u;
    {
        const bool branch_taken_0x2a32f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a32f0) {
            ctx->pc = 0x2A32E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a32e0;
        }
    }
    ctx->pc = 0x2A32F8u;
    // 0x2a32f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2A32F8u;
    {
        const bool branch_taken_0x2a32f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A32FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A32F8u;
            // 0x2a32fc: 0xa38099bc  sb          $zero, -0x6644($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941116), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32f8) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A3300u;
label_2a3300:
    // 0x2a3300: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3304: 0xc05f5d4  jal         func_17D750
    ctx->pc = 0x2A3304u;
    SET_GPR_U32(ctx, 31, 0x2A330Cu);
    ctx->pc = 0x2A3308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3304u;
            // 0x2a3308: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A330Cu; }
        if (ctx->pc != 0x2A330Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A330Cu; }
        if (ctx->pc != 0x2A330Cu) { return; }
    }
    ctx->pc = 0x2A330Cu;
label_2a330c:
    // 0x2a330c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3310: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2A3310u;
    {
        const bool branch_taken_0x2a3310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3310u;
            // 0x2a3314: 0xa38299b4  sb          $v0, -0x664C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3310) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A3318u;
label_2a3318:
    // 0x2a3318: 0x838299bc  lb          $v0, -0x6644($gp)
    ctx->pc = 0x2a3318u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941116)));
    // 0x2a331c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A331Cu;
    {
        const bool branch_taken_0x2a331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A331Cu;
            // 0x2a3320: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a331c) {
            ctx->pc = 0x2A3370u;
            goto label_2a3370;
        }
    }
    ctx->pc = 0x2A3324u;
    // 0x2a3324: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2a3324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a3328: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A3328u;
    SET_GPR_U32(ctx, 31, 0x2A3330u);
    ctx->pc = 0x2A332Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3328u;
            // 0x2a332c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3330u; }
        if (ctx->pc != 0x2A3330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3330u; }
        if (ctx->pc != 0x2A3330u) { return; }
    }
    ctx->pc = 0x2A3330u;
label_2a3330:
    // 0x2a3330: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3330u;
    {
        const bool branch_taken_0x2a3330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3330u;
            // 0x2a3334: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3330) {
            ctx->pc = 0x2A334Cu;
            goto label_2a334c;
        }
    }
    ctx->pc = 0x2A3338u;
    // 0x2a3338: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2a3338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a333c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A333Cu;
    SET_GPR_U32(ctx, 31, 0x2A3344u);
    ctx->pc = 0x2A3340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A333Cu;
            // 0x2a3340: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3344u; }
        if (ctx->pc != 0x2A3344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3344u; }
        if (ctx->pc != 0x2A3344u) { return; }
    }
    ctx->pc = 0x2A3344u;
label_2a3344:
    // 0x2a3344: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A3344u;
    {
        const bool branch_taken_0x2a3344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3344) {
            ctx->pc = 0x2A3370u;
            goto label_2a3370;
        }
    }
    ctx->pc = 0x2A334Cu;
label_2a334c:
    // 0x2a334c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a3350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3358: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2a3358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a335c: 0xa38399bc  sb          $v1, -0x6644($gp)
    ctx->pc = 0x2a335cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941116), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a3360: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a3360u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3364: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a3364u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3368: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A3368u;
    SET_GPR_U32(ctx, 31, 0x2A3370u);
    ctx->pc = 0x2A336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3368u;
            // 0x2a336c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3370u; }
        if (ctx->pc != 0x2A3370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3370u; }
        if (ctx->pc != 0x2A3370u) { return; }
    }
    ctx->pc = 0x2A3370u;
label_2a3370:
    // 0x2a3370: 0xc0a63cc  jal         func_298F30
    ctx->pc = 0x2A3370u;
    SET_GPR_U32(ctx, 31, 0x2A3378u);
    ctx->pc = 0x2A3374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3370u;
            // 0x2a3374: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F30u;
    if (runtime->hasFunction(0x298F30u)) {
        auto targetFn = runtime->lookupFunction(0x298F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3378u; }
        if (ctx->pc != 0x2A3378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCheck__6CMovieFv_0x298f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3378u; }
        if (ctx->pc != 0x2A3378u) { return; }
    }
    ctx->pc = 0x2A3378u;
label_2a3378:
    // 0x2a3378: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3378u;
    {
        const bool branch_taken_0x2a3378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3378) {
            ctx->pc = 0x2A33A0u;
            goto label_2a33a0;
        }
    }
    ctx->pc = 0x2A3380u;
    // 0x2a3380: 0x838299bc  lb          $v0, -0x6644($gp)
    ctx->pc = 0x2a3380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941116)));
    // 0x2a3384: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A3384u;
    {
        const bool branch_taken_0x2a3384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3384) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A338Cu;
    // 0x2a338c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a338cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3390: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A3390u;
    SET_GPR_U32(ctx, 31, 0x2A3398u);
    ctx->pc = 0x2A3394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3390u;
            // 0x2a3394: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3398u; }
        if (ctx->pc != 0x2A3398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3398u; }
        if (ctx->pc != 0x2A3398u) { return; }
    }
    ctx->pc = 0x2A3398u;
label_2a3398:
    // 0x2a3398: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A3398u;
    {
        const bool branch_taken_0x2a3398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3398) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A33A0u;
label_2a33a0:
    // 0x2a33a0: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a33a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a33a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a33a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a33ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a33acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a33b0: 0xa38399b4  sb          $v1, -0x664C($gp)
    ctx->pc = 0x2a33b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a33b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a33b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a33b8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a33b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a33bc: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A33BCu;
    SET_GPR_U32(ctx, 31, 0x2A33C4u);
    ctx->pc = 0x2A33C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33BCu;
            // 0x2a33c0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A33C4u; }
        if (ctx->pc != 0x2A33C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A33C4u; }
        if (ctx->pc != 0x2A33C4u) { return; }
    }
    ctx->pc = 0x2A33C4u;
label_2a33c4:
    // 0x2a33c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A33C4u;
    {
        const bool branch_taken_0x2a33c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a33c4) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A33CCu;
label_2a33cc:
    // 0x2a33cc: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a33d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a33d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a33d4: 0xa38399b4  sb          $v1, -0x664C($gp)
    ctx->pc = 0x2a33d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941108), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a33d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a33dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a33dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a33e0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a33e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a33e4: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A33E4u;
    SET_GPR_U32(ctx, 31, 0x2A33ECu);
    ctx->pc = 0x2A33E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33E4u;
            // 0x2a33e8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A33ECu; }
        if (ctx->pc != 0x2A33ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A33ECu; }
        if (ctx->pc != 0x2A33ECu) { return; }
    }
    ctx->pc = 0x2A33ECu;
label_2a33ec:
    // 0x2a33ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A33ECu;
    {
        const bool branch_taken_0x2a33ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a33ec) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A33F4u;
label_2a33f4:
    // 0x2a33f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A33F4u;
    {
        const bool branch_taken_0x2a33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33F4u;
            // 0x2a33f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33f4) {
            ctx->pc = 0x2A3404u;
            goto label_2a3404;
        }
    }
    ctx->pc = 0x2A33FCu;
label_2a33fc:
    // 0x2a33fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a33fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3400:
    // 0x2a3400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3404:
    // 0x2a3404: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3404u;
            // 0x2a3408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A340Cu;
}
