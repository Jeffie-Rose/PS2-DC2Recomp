#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CAquaFishEffFv
// Address: 0x20efc0 - 0x20f310
void Draw__12CAquaFishEffFv_0x20efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CAquaFishEffFv_0x20efc0");
#endif

    switch (ctx->pc) {
        case 0x20efc0u: goto label_20efc0;
        case 0x20efc4u: goto label_20efc4;
        case 0x20efc8u: goto label_20efc8;
        case 0x20efccu: goto label_20efcc;
        case 0x20efd0u: goto label_20efd0;
        case 0x20efd4u: goto label_20efd4;
        case 0x20efd8u: goto label_20efd8;
        case 0x20efdcu: goto label_20efdc;
        case 0x20efe0u: goto label_20efe0;
        case 0x20efe4u: goto label_20efe4;
        case 0x20efe8u: goto label_20efe8;
        case 0x20efecu: goto label_20efec;
        case 0x20eff0u: goto label_20eff0;
        case 0x20eff4u: goto label_20eff4;
        case 0x20eff8u: goto label_20eff8;
        case 0x20effcu: goto label_20effc;
        case 0x20f000u: goto label_20f000;
        case 0x20f004u: goto label_20f004;
        case 0x20f008u: goto label_20f008;
        case 0x20f00cu: goto label_20f00c;
        case 0x20f010u: goto label_20f010;
        case 0x20f014u: goto label_20f014;
        case 0x20f018u: goto label_20f018;
        case 0x20f01cu: goto label_20f01c;
        case 0x20f020u: goto label_20f020;
        case 0x20f024u: goto label_20f024;
        case 0x20f028u: goto label_20f028;
        case 0x20f02cu: goto label_20f02c;
        case 0x20f030u: goto label_20f030;
        case 0x20f034u: goto label_20f034;
        case 0x20f038u: goto label_20f038;
        case 0x20f03cu: goto label_20f03c;
        case 0x20f040u: goto label_20f040;
        case 0x20f044u: goto label_20f044;
        case 0x20f048u: goto label_20f048;
        case 0x20f04cu: goto label_20f04c;
        case 0x20f050u: goto label_20f050;
        case 0x20f054u: goto label_20f054;
        case 0x20f058u: goto label_20f058;
        case 0x20f05cu: goto label_20f05c;
        case 0x20f060u: goto label_20f060;
        case 0x20f064u: goto label_20f064;
        case 0x20f068u: goto label_20f068;
        case 0x20f06cu: goto label_20f06c;
        case 0x20f070u: goto label_20f070;
        case 0x20f074u: goto label_20f074;
        case 0x20f078u: goto label_20f078;
        case 0x20f07cu: goto label_20f07c;
        case 0x20f080u: goto label_20f080;
        case 0x20f084u: goto label_20f084;
        case 0x20f088u: goto label_20f088;
        case 0x20f08cu: goto label_20f08c;
        case 0x20f090u: goto label_20f090;
        case 0x20f094u: goto label_20f094;
        case 0x20f098u: goto label_20f098;
        case 0x20f09cu: goto label_20f09c;
        case 0x20f0a0u: goto label_20f0a0;
        case 0x20f0a4u: goto label_20f0a4;
        case 0x20f0a8u: goto label_20f0a8;
        case 0x20f0acu: goto label_20f0ac;
        case 0x20f0b0u: goto label_20f0b0;
        case 0x20f0b4u: goto label_20f0b4;
        case 0x20f0b8u: goto label_20f0b8;
        case 0x20f0bcu: goto label_20f0bc;
        case 0x20f0c0u: goto label_20f0c0;
        case 0x20f0c4u: goto label_20f0c4;
        case 0x20f0c8u: goto label_20f0c8;
        case 0x20f0ccu: goto label_20f0cc;
        case 0x20f0d0u: goto label_20f0d0;
        case 0x20f0d4u: goto label_20f0d4;
        case 0x20f0d8u: goto label_20f0d8;
        case 0x20f0dcu: goto label_20f0dc;
        case 0x20f0e0u: goto label_20f0e0;
        case 0x20f0e4u: goto label_20f0e4;
        case 0x20f0e8u: goto label_20f0e8;
        case 0x20f0ecu: goto label_20f0ec;
        case 0x20f0f0u: goto label_20f0f0;
        case 0x20f0f4u: goto label_20f0f4;
        case 0x20f0f8u: goto label_20f0f8;
        case 0x20f0fcu: goto label_20f0fc;
        case 0x20f100u: goto label_20f100;
        case 0x20f104u: goto label_20f104;
        case 0x20f108u: goto label_20f108;
        case 0x20f10cu: goto label_20f10c;
        case 0x20f110u: goto label_20f110;
        case 0x20f114u: goto label_20f114;
        case 0x20f118u: goto label_20f118;
        case 0x20f11cu: goto label_20f11c;
        case 0x20f120u: goto label_20f120;
        case 0x20f124u: goto label_20f124;
        case 0x20f128u: goto label_20f128;
        case 0x20f12cu: goto label_20f12c;
        case 0x20f130u: goto label_20f130;
        case 0x20f134u: goto label_20f134;
        case 0x20f138u: goto label_20f138;
        case 0x20f13cu: goto label_20f13c;
        case 0x20f140u: goto label_20f140;
        case 0x20f144u: goto label_20f144;
        case 0x20f148u: goto label_20f148;
        case 0x20f14cu: goto label_20f14c;
        case 0x20f150u: goto label_20f150;
        case 0x20f154u: goto label_20f154;
        case 0x20f158u: goto label_20f158;
        case 0x20f15cu: goto label_20f15c;
        case 0x20f160u: goto label_20f160;
        case 0x20f164u: goto label_20f164;
        case 0x20f168u: goto label_20f168;
        case 0x20f16cu: goto label_20f16c;
        case 0x20f170u: goto label_20f170;
        case 0x20f174u: goto label_20f174;
        case 0x20f178u: goto label_20f178;
        case 0x20f17cu: goto label_20f17c;
        case 0x20f180u: goto label_20f180;
        case 0x20f184u: goto label_20f184;
        case 0x20f188u: goto label_20f188;
        case 0x20f18cu: goto label_20f18c;
        case 0x20f190u: goto label_20f190;
        case 0x20f194u: goto label_20f194;
        case 0x20f198u: goto label_20f198;
        case 0x20f19cu: goto label_20f19c;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f1a4u: goto label_20f1a4;
        case 0x20f1a8u: goto label_20f1a8;
        case 0x20f1acu: goto label_20f1ac;
        case 0x20f1b0u: goto label_20f1b0;
        case 0x20f1b4u: goto label_20f1b4;
        case 0x20f1b8u: goto label_20f1b8;
        case 0x20f1bcu: goto label_20f1bc;
        case 0x20f1c0u: goto label_20f1c0;
        case 0x20f1c4u: goto label_20f1c4;
        case 0x20f1c8u: goto label_20f1c8;
        case 0x20f1ccu: goto label_20f1cc;
        case 0x20f1d0u: goto label_20f1d0;
        case 0x20f1d4u: goto label_20f1d4;
        case 0x20f1d8u: goto label_20f1d8;
        case 0x20f1dcu: goto label_20f1dc;
        case 0x20f1e0u: goto label_20f1e0;
        case 0x20f1e4u: goto label_20f1e4;
        case 0x20f1e8u: goto label_20f1e8;
        case 0x20f1ecu: goto label_20f1ec;
        case 0x20f1f0u: goto label_20f1f0;
        case 0x20f1f4u: goto label_20f1f4;
        case 0x20f1f8u: goto label_20f1f8;
        case 0x20f1fcu: goto label_20f1fc;
        case 0x20f200u: goto label_20f200;
        case 0x20f204u: goto label_20f204;
        case 0x20f208u: goto label_20f208;
        case 0x20f20cu: goto label_20f20c;
        case 0x20f210u: goto label_20f210;
        case 0x20f214u: goto label_20f214;
        case 0x20f218u: goto label_20f218;
        case 0x20f21cu: goto label_20f21c;
        case 0x20f220u: goto label_20f220;
        case 0x20f224u: goto label_20f224;
        case 0x20f228u: goto label_20f228;
        case 0x20f22cu: goto label_20f22c;
        case 0x20f230u: goto label_20f230;
        case 0x20f234u: goto label_20f234;
        case 0x20f238u: goto label_20f238;
        case 0x20f23cu: goto label_20f23c;
        case 0x20f240u: goto label_20f240;
        case 0x20f244u: goto label_20f244;
        case 0x20f248u: goto label_20f248;
        case 0x20f24cu: goto label_20f24c;
        case 0x20f250u: goto label_20f250;
        case 0x20f254u: goto label_20f254;
        case 0x20f258u: goto label_20f258;
        case 0x20f25cu: goto label_20f25c;
        case 0x20f260u: goto label_20f260;
        case 0x20f264u: goto label_20f264;
        case 0x20f268u: goto label_20f268;
        case 0x20f26cu: goto label_20f26c;
        case 0x20f270u: goto label_20f270;
        case 0x20f274u: goto label_20f274;
        case 0x20f278u: goto label_20f278;
        case 0x20f27cu: goto label_20f27c;
        case 0x20f280u: goto label_20f280;
        case 0x20f284u: goto label_20f284;
        case 0x20f288u: goto label_20f288;
        case 0x20f28cu: goto label_20f28c;
        case 0x20f290u: goto label_20f290;
        case 0x20f294u: goto label_20f294;
        case 0x20f298u: goto label_20f298;
        case 0x20f29cu: goto label_20f29c;
        case 0x20f2a0u: goto label_20f2a0;
        case 0x20f2a4u: goto label_20f2a4;
        case 0x20f2a8u: goto label_20f2a8;
        case 0x20f2acu: goto label_20f2ac;
        case 0x20f2b0u: goto label_20f2b0;
        case 0x20f2b4u: goto label_20f2b4;
        case 0x20f2b8u: goto label_20f2b8;
        case 0x20f2bcu: goto label_20f2bc;
        case 0x20f2c0u: goto label_20f2c0;
        case 0x20f2c4u: goto label_20f2c4;
        case 0x20f2c8u: goto label_20f2c8;
        case 0x20f2ccu: goto label_20f2cc;
        case 0x20f2d0u: goto label_20f2d0;
        case 0x20f2d4u: goto label_20f2d4;
        case 0x20f2d8u: goto label_20f2d8;
        case 0x20f2dcu: goto label_20f2dc;
        case 0x20f2e0u: goto label_20f2e0;
        case 0x20f2e4u: goto label_20f2e4;
        case 0x20f2e8u: goto label_20f2e8;
        case 0x20f2ecu: goto label_20f2ec;
        case 0x20f2f0u: goto label_20f2f0;
        case 0x20f2f4u: goto label_20f2f4;
        case 0x20f2f8u: goto label_20f2f8;
        case 0x20f2fcu: goto label_20f2fc;
        case 0x20f300u: goto label_20f300;
        case 0x20f304u: goto label_20f304;
        case 0x20f308u: goto label_20f308;
        case 0x20f30cu: goto label_20f30c;
        default: break;
    }

    ctx->pc = 0x20efc0u;

label_20efc0:
    // 0x20efc0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x20efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_20efc4:
    // 0x20efc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20efc8:
    // 0x20efc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20efcc:
    // 0x20efcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20efd0:
    // 0x20efd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20efd4:
    // 0x20efd4: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
label_20efd8:
    if (ctx->pc == 0x20EFD8u) {
        ctx->pc = 0x20EFD8u;
            // 0x20efd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EFDCu;
        goto label_20efdc;
    }
    ctx->pc = 0x20EFD4u;
    {
        const bool branch_taken_0x20efd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EFD4u;
            // 0x20efd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efd4) {
            ctx->pc = 0x20F2FCu;
            goto label_20f2fc;
        }
    }
    ctx->pc = 0x20EFDCu;
label_20efdc:
    // 0x20efdc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20efe0:
    // 0x20efe0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_20efe4:
    if (ctx->pc == 0x20EFE4u) {
        ctx->pc = 0x20EFE8u;
        goto label_20efe8;
    }
    ctx->pc = 0x20EFE0u;
    {
        const bool branch_taken_0x20efe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20efe0) {
            ctx->pc = 0x20EFF0u;
            goto label_20eff0;
        }
    }
    ctx->pc = 0x20EFE8u;
label_20efe8:
    // 0x20efe8: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_20efec:
    if (ctx->pc == 0x20EFECu) {
        ctx->pc = 0x20EFECu;
            // 0x20efec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x20EFF0u;
        goto label_20eff0;
    }
    ctx->pc = 0x20EFE8u;
    {
        const bool branch_taken_0x20efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EFE8u;
            // 0x20efec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efe8) {
            ctx->pc = 0x20F300u;
            goto label_20f300;
        }
    }
    ctx->pc = 0x20EFF0u;
label_20eff0:
    // 0x20eff0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x20eff0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_20eff4:
    // 0x20eff4: 0x106000c1  beqz        $v1, . + 4 + (0xC1 << 2)
label_20eff8:
    if (ctx->pc == 0x20EFF8u) {
        ctx->pc = 0x20EFFCu;
        goto label_20effc;
    }
    ctx->pc = 0x20EFF4u;
    {
        const bool branch_taken_0x20eff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eff4) {
            ctx->pc = 0x20F2FCu;
            goto label_20f2fc;
        }
    }
    ctx->pc = 0x20EFFCu;
label_20effc:
    // 0x20effc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20f000:
    // 0x20f000: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x20f000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_20f004:
    // 0x20f004: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20f008:
    if (ctx->pc == 0x20F008u) {
        ctx->pc = 0x20F008u;
            // 0x20f008: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x20F00Cu;
        goto label_20f00c;
    }
    ctx->pc = 0x20F004u;
    {
        const bool branch_taken_0x20f004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F004u;
            // 0x20f008: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f004) {
            ctx->pc = 0x20F010u;
            goto label_20f010;
        }
    }
    ctx->pc = 0x20F00Cu;
label_20f00c:
    // 0x20f00c: 0x288c0  sll         $s1, $v0, 3
    ctx->pc = 0x20f00cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20f010:
    // 0x20f010: 0xc04d0e8  jal         func_1343A0
label_20f014:
    if (ctx->pc == 0x20F014u) {
        ctx->pc = 0x20F014u;
            // 0x20f014: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20F018u;
        goto label_20f018;
    }
    ctx->pc = 0x20F010u;
    SET_GPR_U32(ctx, 31, 0x20F018u);
    ctx->pc = 0x20F014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F010u;
            // 0x20f014: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F018u; }
        if (ctx->pc != 0x20F018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F018u; }
        if (ctx->pc != 0x20F018u) { return; }
    }
    ctx->pc = 0x20F018u;
label_20f018:
    // 0x20f018: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20f018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f01c:
    // 0x20f01c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20f01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20f020:
    // 0x20f020: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20f020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20f024:
    // 0x20f024: 0x320f809  jalr        $t9
label_20f028:
    if (ctx->pc == 0x20F028u) {
        ctx->pc = 0x20F028u;
            // 0x20f028: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x20F02Cu;
        goto label_20f02c;
    }
    ctx->pc = 0x20F024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20F02Cu);
        ctx->pc = 0x20F028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F024u;
            // 0x20f028: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F02Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F02Cu; }
            if (ctx->pc != 0x20F02Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20F02Cu;
label_20f02c:
    // 0x20f02c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f030:
    // 0x20f030: 0xc087ec4  jal         func_21FB10
label_20f034:
    if (ctx->pc == 0x20F034u) {
        ctx->pc = 0x20F034u;
            // 0x20f034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F038u;
        goto label_20f038;
    }
    ctx->pc = 0x20F030u;
    SET_GPR_U32(ctx, 31, 0x20F038u);
    ctx->pc = 0x20F034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F030u;
            // 0x20f034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F038u; }
        if (ctx->pc != 0x20F038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F038u; }
        if (ctx->pc != 0x20F038u) { return; }
    }
    ctx->pc = 0x20F038u;
label_20f038:
    // 0x20f038: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f03c:
    // 0x20f03c: 0xc04d44c  jal         func_135130
label_20f040:
    if (ctx->pc == 0x20F040u) {
        ctx->pc = 0x20F040u;
            // 0x20f040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20F044u;
        goto label_20f044;
    }
    ctx->pc = 0x20F03Cu;
    SET_GPR_U32(ctx, 31, 0x20F044u);
    ctx->pc = 0x20F040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F03Cu;
            // 0x20f040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F044u; }
        if (ctx->pc != 0x20F044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F044u; }
        if (ctx->pc != 0x20F044u) { return; }
    }
    ctx->pc = 0x20F044u;
label_20f044:
    // 0x20f044: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f048:
    // 0x20f048: 0xc04d3e4  jal         func_134F90
label_20f04c:
    if (ctx->pc == 0x20F04Cu) {
        ctx->pc = 0x20F04Cu;
            // 0x20f04c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20F050u;
        goto label_20f050;
    }
    ctx->pc = 0x20F048u;
    SET_GPR_U32(ctx, 31, 0x20F050u);
    ctx->pc = 0x20F04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F048u;
            // 0x20f04c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F050u; }
        if (ctx->pc != 0x20F050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F050u; }
        if (ctx->pc != 0x20F050u) { return; }
    }
    ctx->pc = 0x20F050u;
label_20f050:
    // 0x20f050: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f054:
    // 0x20f054: 0xc04d430  jal         func_1350C0
label_20f058:
    if (ctx->pc == 0x20F058u) {
        ctx->pc = 0x20F058u;
            // 0x20f058: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20F05Cu;
        goto label_20f05c;
    }
    ctx->pc = 0x20F054u;
    SET_GPR_U32(ctx, 31, 0x20F05Cu);
    ctx->pc = 0x20F058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F054u;
            // 0x20f058: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F05Cu; }
        if (ctx->pc != 0x20F05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F05Cu; }
        if (ctx->pc != 0x20F05Cu) { return; }
    }
    ctx->pc = 0x20F05Cu;
label_20f05c:
    // 0x20f05c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f060:
    // 0x20f060: 0xc04d128  jal         func_1344A0
label_20f064:
    if (ctx->pc == 0x20F064u) {
        ctx->pc = 0x20F064u;
            // 0x20f064: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20F068u;
        goto label_20f068;
    }
    ctx->pc = 0x20F060u;
    SET_GPR_U32(ctx, 31, 0x20F068u);
    ctx->pc = 0x20F064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F060u;
            // 0x20f064: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F068u; }
        if (ctx->pc != 0x20F068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F068u; }
        if (ctx->pc != 0x20F068u) { return; }
    }
    ctx->pc = 0x20F068u;
label_20f068:
    // 0x20f068: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x20f068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20f06c:
    // 0x20f06c: 0xc04d368  jal         func_134DA0
label_20f070:
    if (ctx->pc == 0x20F070u) {
        ctx->pc = 0x20F070u;
            // 0x20f070: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20F074u;
        goto label_20f074;
    }
    ctx->pc = 0x20F06Cu;
    SET_GPR_U32(ctx, 31, 0x20F074u);
    ctx->pc = 0x20F070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F06Cu;
            // 0x20f070: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F074u; }
        if (ctx->pc != 0x20F074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F074u; }
        if (ctx->pc != 0x20F074u) { return; }
    }
    ctx->pc = 0x20F074u;
label_20f074:
    // 0x20f074: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20f074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20f078:
    // 0x20f078: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x20f078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f07c:
    // 0x20f07c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f080:
    // 0x20f080: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20f080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f084:
    // 0x20f084: 0xc04d320  jal         func_134C80
label_20f088:
    if (ctx->pc == 0x20F088u) {
        ctx->pc = 0x20F088u;
            // 0x20f088: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F08Cu;
        goto label_20f08c;
    }
    ctx->pc = 0x20F084u;
    SET_GPR_U32(ctx, 31, 0x20F08Cu);
    ctx->pc = 0x20F088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F084u;
            // 0x20f088: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F08Cu; }
        if (ctx->pc != 0x20F08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F08Cu; }
        if (ctx->pc != 0x20F08Cu) { return; }
    }
    ctx->pc = 0x20F08Cu;
label_20f08c:
    // 0x20f08c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x20f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20f090:
    // 0x20f090: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20f094:
    if (ctx->pc == 0x20F094u) {
        ctx->pc = 0x20F094u;
            // 0x20f094: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x20F098u;
        goto label_20f098;
    }
    ctx->pc = 0x20F090u;
    {
        const bool branch_taken_0x20f090 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20F094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F090u;
            // 0x20f094: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f090) {
            ctx->pc = 0x20F0A4u;
            goto label_20f0a4;
        }
    }
    ctx->pc = 0x20F098u;
label_20f098:
    // 0x20f098: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20f09c:
    if (ctx->pc == 0x20F09Cu) {
        ctx->pc = 0x20F0A0u;
        goto label_20f0a0;
    }
    ctx->pc = 0x20F098u;
    {
        const bool branch_taken_0x20f098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f098) {
            ctx->pc = 0x20F0A4u;
            goto label_20f0a4;
        }
    }
    ctx->pc = 0x20F0A0u;
label_20f0a0:
    // 0x20f0a0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x20f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_20f0a4:
    // 0x20f0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f0a8:
    // 0x20f0a8: 0x0  nop
    ctx->pc = 0x20f0a8u;
    // NOP
label_20f0ac:
    // 0x20f0ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20f0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20f0b0:
    // 0x20f0b0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_20f0b4:
    // 0x20f0b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20f0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20f0b8:
    // 0x20f0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f0bc:
    // 0x20f0bc: 0xc047a42  jal         func_11E908
label_20f0c0:
    if (ctx->pc == 0x20F0C0u) {
        ctx->pc = 0x20F0C0u;
            // 0x20f0c0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x20F0C4u;
        goto label_20f0c4;
    }
    ctx->pc = 0x20F0BCu;
    SET_GPR_U32(ctx, 31, 0x20F0C4u);
    ctx->pc = 0x20F0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F0BCu;
            // 0x20f0c0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F0C4u; }
        if (ctx->pc != 0x20F0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F0C4u; }
        if (ctx->pc != 0x20F0C4u) { return; }
    }
    ctx->pc = 0x20F0C4u;
label_20f0c4:
    // 0x20f0c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20f0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f0c8:
    // 0x20f0c8: 0x0  nop
    ctx->pc = 0x20f0c8u;
    // NOP
label_20f0cc:
    // 0x20f0cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20f0ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f0d0:
    // 0x20f0d0: 0x0  nop
    ctx->pc = 0x20f0d0u;
    // NOP
label_20f0d4:
    // 0x20f0d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_20f0d8:
    if (ctx->pc == 0x20F0D8u) {
        ctx->pc = 0x20F0DCu;
        goto label_20f0dc;
    }
    ctx->pc = 0x20F0D4u;
    {
        const bool branch_taken_0x20f0d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f0d4) {
            ctx->pc = 0x20F0E0u;
            goto label_20f0e0;
        }
    }
    ctx->pc = 0x20F0DCu;
label_20f0dc:
    // 0x20f0dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20f0dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_20f0e0:
    // 0x20f0e0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x20f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_20f0e4:
    // 0x20f0e4: 0x3c0240a9  lui         $v0, 0x40A9
    ctx->pc = 0x20f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16553 << 16));
label_20f0e8:
    // 0x20f0e8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x20f0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_20f0ec:
    // 0x20f0ec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x20f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_20f0f0:
    // 0x20f0f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x20f0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20f0f4:
    // 0x20f0f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20f0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20f0f8:
    // 0x20f0f8: 0x0  nop
    ctx->pc = 0x20f0f8u;
    // NOP
label_20f0fc:
    // 0x20f0fc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x20f0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_20f100:
    // 0x20f100: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20f104:
    // 0x20f104: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x20f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f108:
    // 0x20f108: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20f108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20f10c:
    // 0x20f10c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20f10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20f110:
    // 0x20f110: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x20f110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_20f114:
    // 0x20f114: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x20f114u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_20f118:
    // 0x20f118: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
label_20f11c:
    if (ctx->pc == 0x20F11Cu) {
        ctx->pc = 0x20F11Cu;
            // 0x20f11c: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x20F120u;
        goto label_20f120;
    }
    ctx->pc = 0x20F118u;
    {
        const bool branch_taken_0x20f118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F118u;
            // 0x20f11c: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f118) {
            ctx->pc = 0x20F294u;
            goto label_20f294;
        }
    }
    ctx->pc = 0x20F120u;
label_20f120:
    // 0x20f120: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20f120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20f124:
    // 0x20f124: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_20f128:
    if (ctx->pc == 0x20F128u) {
        ctx->pc = 0x20F128u;
            // 0x20f128: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x20F12Cu;
        goto label_20f12c;
    }
    ctx->pc = 0x20F124u;
    {
        const bool branch_taken_0x20f124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F124u;
            // 0x20f128: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f124) {
            ctx->pc = 0x20F22Cu;
            goto label_20f22c;
        }
    }
    ctx->pc = 0x20F12Cu;
label_20f12c:
    // 0x20f12c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20f130:
    // 0x20f130: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_20f134:
    if (ctx->pc == 0x20F134u) {
        ctx->pc = 0x20F138u;
        goto label_20f138;
    }
    ctx->pc = 0x20F130u;
    {
        const bool branch_taken_0x20f130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f130) {
            ctx->pc = 0x20F228u;
            goto label_20f228;
        }
    }
    ctx->pc = 0x20F138u;
label_20f138:
    // 0x20f138: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20f13c:
    // 0x20f13c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_20f140:
    if (ctx->pc == 0x20F140u) {
        ctx->pc = 0x20F140u;
            // 0x20f140: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x20F144u;
        goto label_20f144;
    }
    ctx->pc = 0x20F13Cu;
    {
        const bool branch_taken_0x20f13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F13Cu;
            // 0x20f140: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f13c) {
            ctx->pc = 0x20F1C4u;
            goto label_20f1c4;
        }
    }
    ctx->pc = 0x20F144u;
label_20f144:
    // 0x20f144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f148:
    // 0x20f148: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_20f14c:
    if (ctx->pc == 0x20F14Cu) {
        ctx->pc = 0x20F14Cu;
            // 0x20f14c: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x20F150u;
        goto label_20f150;
    }
    ctx->pc = 0x20F148u;
    {
        const bool branch_taken_0x20f148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F148u;
            // 0x20f14c: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f148) {
            ctx->pc = 0x20F15Cu;
            goto label_20f15c;
        }
    }
    ctx->pc = 0x20F150u;
label_20f150:
    // 0x20f150: 0x10000068  b           . + 4 + (0x68 << 2)
label_20f154:
    if (ctx->pc == 0x20F154u) {
        ctx->pc = 0x20F154u;
            // 0x20f154: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20F158u;
        goto label_20f158;
    }
    ctx->pc = 0x20F150u;
    {
        const bool branch_taken_0x20f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F150u;
            // 0x20f154: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f150) {
            ctx->pc = 0x20F2F4u;
            goto label_20f2f4;
        }
    }
    ctx->pc = 0x20F158u;
label_20f158:
    // 0x20f158: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20f158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20f15c:
    // 0x20f15c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x20f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_20f160:
    // 0x20f160: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f164:
    // 0x20f164: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x20f164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_20f168:
    // 0x20f168: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x20f168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_20f16c:
    // 0x20f16c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f16cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f170:
    // 0x20f170: 0xc0516ec  jal         func_145BB0
label_20f174:
    if (ctx->pc == 0x20F174u) {
        ctx->pc = 0x20F174u;
            // 0x20f174: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x20F178u;
        goto label_20f178;
    }
    ctx->pc = 0x20F170u;
    SET_GPR_U32(ctx, 31, 0x20F178u);
    ctx->pc = 0x20F174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F170u;
            // 0x20f174: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F178u; }
        if (ctx->pc != 0x20F178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F178u; }
        if (ctx->pc != 0x20F178u) { return; }
    }
    ctx->pc = 0x20F178u;
label_20f178:
    // 0x20f178: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_20f17c:
    if (ctx->pc == 0x20F17Cu) {
        ctx->pc = 0x20F180u;
        goto label_20f180;
    }
    ctx->pc = 0x20F178u;
    {
        const bool branch_taken_0x20f178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f178) {
            ctx->pc = 0x20F2F0u;
            goto label_20f2f0;
        }
    }
    ctx->pc = 0x20F180u;
label_20f180:
    // 0x20f180: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f184:
    // 0x20f184: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x20f184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_20f188:
    // 0x20f188: 0xc04d35c  jal         func_134D70
label_20f18c:
    if (ctx->pc == 0x20F18Cu) {
        ctx->pc = 0x20F18Cu;
            // 0x20f18c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x20F190u;
        goto label_20f190;
    }
    ctx->pc = 0x20F188u;
    SET_GPR_U32(ctx, 31, 0x20F190u);
    ctx->pc = 0x20F18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F188u;
            // 0x20f18c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F190u; }
        if (ctx->pc != 0x20F190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F190u; }
        if (ctx->pc != 0x20F190u) { return; }
    }
    ctx->pc = 0x20F190u;
label_20f190:
    // 0x20f190: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f194:
    // 0x20f194: 0xc04d318  jal         func_134C60
label_20f198:
    if (ctx->pc == 0x20F198u) {
        ctx->pc = 0x20F198u;
            // 0x20f198: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x20F19Cu;
        goto label_20f19c;
    }
    ctx->pc = 0x20F194u;
    SET_GPR_U32(ctx, 31, 0x20F19Cu);
    ctx->pc = 0x20F198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F194u;
            // 0x20f198: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F19Cu; }
        if (ctx->pc != 0x20F19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F19Cu; }
        if (ctx->pc != 0x20F19Cu) { return; }
    }
    ctx->pc = 0x20F19Cu;
label_20f19c:
    // 0x20f19c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f1a0:
    // 0x20f1a0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20f1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20f1a4:
    // 0x20f1a4: 0xc04d35c  jal         func_134D70
label_20f1a8:
    if (ctx->pc == 0x20F1A8u) {
        ctx->pc = 0x20F1A8u;
            // 0x20f1a8: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x20F1ACu;
        goto label_20f1ac;
    }
    ctx->pc = 0x20F1A4u;
    SET_GPR_U32(ctx, 31, 0x20F1ACu);
    ctx->pc = 0x20F1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F1A4u;
            // 0x20f1a8: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F1ACu; }
        if (ctx->pc != 0x20F1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F1ACu; }
        if (ctx->pc != 0x20F1ACu) { return; }
    }
    ctx->pc = 0x20F1ACu;
label_20f1ac:
    // 0x20f1ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f1b0:
    // 0x20f1b0: 0xc04d318  jal         func_134C60
label_20f1b4:
    if (ctx->pc == 0x20F1B4u) {
        ctx->pc = 0x20F1B4u;
            // 0x20f1b4: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x20F1B8u;
        goto label_20f1b8;
    }
    ctx->pc = 0x20F1B0u;
    SET_GPR_U32(ctx, 31, 0x20F1B8u);
    ctx->pc = 0x20F1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F1B0u;
            // 0x20f1b4: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F1B8u; }
        if (ctx->pc != 0x20F1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F1B8u; }
        if (ctx->pc != 0x20F1B8u) { return; }
    }
    ctx->pc = 0x20F1B8u;
label_20f1b8:
    // 0x20f1b8: 0x1000004d  b           . + 4 + (0x4D << 2)
label_20f1bc:
    if (ctx->pc == 0x20F1BCu) {
        ctx->pc = 0x20F1C0u;
        goto label_20f1c0;
    }
    ctx->pc = 0x20F1B8u;
    {
        const bool branch_taken_0x20f1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f1b8) {
            ctx->pc = 0x20F2F0u;
            goto label_20f2f0;
        }
    }
    ctx->pc = 0x20F1C0u;
label_20f1c0:
    // 0x20f1c0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20f1c4:
    // 0x20f1c4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x20f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_20f1c8:
    // 0x20f1c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f1cc:
    // 0x20f1cc: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x20f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_20f1d0:
    // 0x20f1d0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x20f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_20f1d4:
    // 0x20f1d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f1d8:
    // 0x20f1d8: 0xc0516ec  jal         func_145BB0
label_20f1dc:
    if (ctx->pc == 0x20F1DCu) {
        ctx->pc = 0x20F1DCu;
            // 0x20f1dc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x20F1E0u;
        goto label_20f1e0;
    }
    ctx->pc = 0x20F1D8u;
    SET_GPR_U32(ctx, 31, 0x20F1E0u);
    ctx->pc = 0x20F1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F1D8u;
            // 0x20f1dc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F1E0u; }
        if (ctx->pc != 0x20F1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F1E0u; }
        if (ctx->pc != 0x20F1E0u) { return; }
    }
    ctx->pc = 0x20F1E0u;
label_20f1e0:
    // 0x20f1e0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_20f1e4:
    if (ctx->pc == 0x20F1E4u) {
        ctx->pc = 0x20F1E8u;
        goto label_20f1e8;
    }
    ctx->pc = 0x20F1E0u;
    {
        const bool branch_taken_0x20f1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f1e0) {
            ctx->pc = 0x20F2F0u;
            goto label_20f2f0;
        }
    }
    ctx->pc = 0x20F1E8u;
label_20f1e8:
    // 0x20f1e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f1ec:
    // 0x20f1ec: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x20f1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_20f1f0:
    // 0x20f1f0: 0xc04d35c  jal         func_134D70
label_20f1f4:
    if (ctx->pc == 0x20F1F4u) {
        ctx->pc = 0x20F1F4u;
            // 0x20f1f4: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x20F1F8u;
        goto label_20f1f8;
    }
    ctx->pc = 0x20F1F0u;
    SET_GPR_U32(ctx, 31, 0x20F1F8u);
    ctx->pc = 0x20F1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F1F0u;
            // 0x20f1f4: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F1F8u; }
        if (ctx->pc != 0x20F1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F1F8u; }
        if (ctx->pc != 0x20F1F8u) { return; }
    }
    ctx->pc = 0x20F1F8u;
label_20f1f8:
    // 0x20f1f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f1fc:
    // 0x20f1fc: 0xc04d318  jal         func_134C60
label_20f200:
    if (ctx->pc == 0x20F200u) {
        ctx->pc = 0x20F200u;
            // 0x20f200: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x20F204u;
        goto label_20f204;
    }
    ctx->pc = 0x20F1FCu;
    SET_GPR_U32(ctx, 31, 0x20F204u);
    ctx->pc = 0x20F200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F1FCu;
            // 0x20f200: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F204u; }
        if (ctx->pc != 0x20F204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F204u; }
        if (ctx->pc != 0x20F204u) { return; }
    }
    ctx->pc = 0x20F204u;
label_20f204:
    // 0x20f204: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f208:
    // 0x20f208: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20f208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20f20c:
    // 0x20f20c: 0xc04d35c  jal         func_134D70
label_20f210:
    if (ctx->pc == 0x20F210u) {
        ctx->pc = 0x20F210u;
            // 0x20f210: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->pc = 0x20F214u;
        goto label_20f214;
    }
    ctx->pc = 0x20F20Cu;
    SET_GPR_U32(ctx, 31, 0x20F214u);
    ctx->pc = 0x20F210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F20Cu;
            // 0x20f210: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F214u; }
        if (ctx->pc != 0x20F214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F214u; }
        if (ctx->pc != 0x20F214u) { return; }
    }
    ctx->pc = 0x20F214u;
label_20f214:
    // 0x20f214: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f218:
    // 0x20f218: 0xc04d318  jal         func_134C60
label_20f21c:
    if (ctx->pc == 0x20F21Cu) {
        ctx->pc = 0x20F21Cu;
            // 0x20f21c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x20F220u;
        goto label_20f220;
    }
    ctx->pc = 0x20F218u;
    SET_GPR_U32(ctx, 31, 0x20F220u);
    ctx->pc = 0x20F21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F218u;
            // 0x20f21c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F220u; }
        if (ctx->pc != 0x20F220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F220u; }
        if (ctx->pc != 0x20F220u) { return; }
    }
    ctx->pc = 0x20F220u;
label_20f220:
    // 0x20f220: 0x10000033  b           . + 4 + (0x33 << 2)
label_20f224:
    if (ctx->pc == 0x20F224u) {
        ctx->pc = 0x20F228u;
        goto label_20f228;
    }
    ctx->pc = 0x20F220u;
    {
        const bool branch_taken_0x20f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f220) {
            ctx->pc = 0x20F2F0u;
            goto label_20f2f0;
        }
    }
    ctx->pc = 0x20F228u;
label_20f228:
    // 0x20f228: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20f228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20f22c:
    // 0x20f22c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x20f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_20f230:
    // 0x20f230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f234:
    // 0x20f234: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x20f234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_20f238:
    // 0x20f238: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x20f238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_20f23c:
    // 0x20f23c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f23cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f240:
    // 0x20f240: 0xc0516ec  jal         func_145BB0
label_20f244:
    if (ctx->pc == 0x20F244u) {
        ctx->pc = 0x20F244u;
            // 0x20f244: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x20F248u;
        goto label_20f248;
    }
    ctx->pc = 0x20F240u;
    SET_GPR_U32(ctx, 31, 0x20F248u);
    ctx->pc = 0x20F244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F240u;
            // 0x20f244: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F248u; }
        if (ctx->pc != 0x20F248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F248u; }
        if (ctx->pc != 0x20F248u) { return; }
    }
    ctx->pc = 0x20F248u;
label_20f248:
    // 0x20f248: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_20f24c:
    if (ctx->pc == 0x20F24Cu) {
        ctx->pc = 0x20F250u;
        goto label_20f250;
    }
    ctx->pc = 0x20F248u;
    {
        const bool branch_taken_0x20f248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f248) {
            ctx->pc = 0x20F2F0u;
            goto label_20f2f0;
        }
    }
    ctx->pc = 0x20F250u;
label_20f250:
    // 0x20f250: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f254:
    // 0x20f254: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x20f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_20f258:
    // 0x20f258: 0xc04d35c  jal         func_134D70
label_20f25c:
    if (ctx->pc == 0x20F25Cu) {
        ctx->pc = 0x20F25Cu;
            // 0x20f25c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F260u;
        goto label_20f260;
    }
    ctx->pc = 0x20F258u;
    SET_GPR_U32(ctx, 31, 0x20F260u);
    ctx->pc = 0x20F25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F258u;
            // 0x20f25c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F260u; }
        if (ctx->pc != 0x20F260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F260u; }
        if (ctx->pc != 0x20F260u) { return; }
    }
    ctx->pc = 0x20F260u;
label_20f260:
    // 0x20f260: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f264:
    // 0x20f264: 0xc04d318  jal         func_134C60
label_20f268:
    if (ctx->pc == 0x20F268u) {
        ctx->pc = 0x20F268u;
            // 0x20f268: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x20F26Cu;
        goto label_20f26c;
    }
    ctx->pc = 0x20F264u;
    SET_GPR_U32(ctx, 31, 0x20F26Cu);
    ctx->pc = 0x20F268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F264u;
            // 0x20f268: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F26Cu; }
        if (ctx->pc != 0x20F26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F26Cu; }
        if (ctx->pc != 0x20F26Cu) { return; }
    }
    ctx->pc = 0x20F26Cu;
label_20f26c:
    // 0x20f26c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f270:
    // 0x20f270: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20f270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20f274:
    // 0x20f274: 0xc04d35c  jal         func_134D70
label_20f278:
    if (ctx->pc == 0x20F278u) {
        ctx->pc = 0x20F278u;
            // 0x20f278: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x20F27Cu;
        goto label_20f27c;
    }
    ctx->pc = 0x20F274u;
    SET_GPR_U32(ctx, 31, 0x20F27Cu);
    ctx->pc = 0x20F278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F274u;
            // 0x20f278: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F27Cu; }
        if (ctx->pc != 0x20F27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F27Cu; }
        if (ctx->pc != 0x20F27Cu) { return; }
    }
    ctx->pc = 0x20F27Cu;
label_20f27c:
    // 0x20f27c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f280:
    // 0x20f280: 0xc04d318  jal         func_134C60
label_20f284:
    if (ctx->pc == 0x20F284u) {
        ctx->pc = 0x20F284u;
            // 0x20f284: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x20F288u;
        goto label_20f288;
    }
    ctx->pc = 0x20F280u;
    SET_GPR_U32(ctx, 31, 0x20F288u);
    ctx->pc = 0x20F284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F280u;
            // 0x20f284: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F288u; }
        if (ctx->pc != 0x20F288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F288u; }
        if (ctx->pc != 0x20F288u) { return; }
    }
    ctx->pc = 0x20F288u;
label_20f288:
    // 0x20f288: 0x10000019  b           . + 4 + (0x19 << 2)
label_20f28c:
    if (ctx->pc == 0x20F28Cu) {
        ctx->pc = 0x20F290u;
        goto label_20f290;
    }
    ctx->pc = 0x20F288u;
    {
        const bool branch_taken_0x20f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f288) {
            ctx->pc = 0x20F2F0u;
            goto label_20f2f0;
        }
    }
    ctx->pc = 0x20F290u;
label_20f290:
    // 0x20f290: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20f290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20f294:
    // 0x20f294: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x20f294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_20f298:
    // 0x20f298: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f29c:
    // 0x20f29c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x20f29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_20f2a0:
    // 0x20f2a0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x20f2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_20f2a4:
    // 0x20f2a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f2a8:
    // 0x20f2a8: 0xc0516ec  jal         func_145BB0
label_20f2ac:
    if (ctx->pc == 0x20F2ACu) {
        ctx->pc = 0x20F2ACu;
            // 0x20f2ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x20F2B0u;
        goto label_20f2b0;
    }
    ctx->pc = 0x20F2A8u;
    SET_GPR_U32(ctx, 31, 0x20F2B0u);
    ctx->pc = 0x20F2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2A8u;
            // 0x20f2ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2B0u; }
        if (ctx->pc != 0x20F2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2B0u; }
        if (ctx->pc != 0x20F2B0u) { return; }
    }
    ctx->pc = 0x20F2B0u;
label_20f2b0:
    // 0x20f2b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_20f2b4:
    if (ctx->pc == 0x20F2B4u) {
        ctx->pc = 0x20F2B8u;
        goto label_20f2b8;
    }
    ctx->pc = 0x20F2B0u;
    {
        const bool branch_taken_0x20f2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f2b0) {
            ctx->pc = 0x20F2F0u;
            goto label_20f2f0;
        }
    }
    ctx->pc = 0x20F2B8u;
label_20f2b8:
    // 0x20f2b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f2bc:
    // 0x20f2bc: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x20f2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_20f2c0:
    // 0x20f2c0: 0xc04d35c  jal         func_134D70
label_20f2c4:
    if (ctx->pc == 0x20F2C4u) {
        ctx->pc = 0x20F2C4u;
            // 0x20f2c4: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->pc = 0x20F2C8u;
        goto label_20f2c8;
    }
    ctx->pc = 0x20F2C0u;
    SET_GPR_U32(ctx, 31, 0x20F2C8u);
    ctx->pc = 0x20F2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2C0u;
            // 0x20f2c4: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2C8u; }
        if (ctx->pc != 0x20F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2C8u; }
        if (ctx->pc != 0x20F2C8u) { return; }
    }
    ctx->pc = 0x20F2C8u;
label_20f2c8:
    // 0x20f2c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f2cc:
    // 0x20f2cc: 0xc04d318  jal         func_134C60
label_20f2d0:
    if (ctx->pc == 0x20F2D0u) {
        ctx->pc = 0x20F2D0u;
            // 0x20f2d0: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x20F2D4u;
        goto label_20f2d4;
    }
    ctx->pc = 0x20F2CCu;
    SET_GPR_U32(ctx, 31, 0x20F2D4u);
    ctx->pc = 0x20F2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2CCu;
            // 0x20f2d0: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2D4u; }
        if (ctx->pc != 0x20F2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2D4u; }
        if (ctx->pc != 0x20F2D4u) { return; }
    }
    ctx->pc = 0x20F2D4u;
label_20f2d4:
    // 0x20f2d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f2d8:
    // 0x20f2d8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20f2dc:
    // 0x20f2dc: 0xc04d35c  jal         func_134D70
label_20f2e0:
    if (ctx->pc == 0x20F2E0u) {
        ctx->pc = 0x20F2E0u;
            // 0x20f2e0: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x20F2E4u;
        goto label_20f2e4;
    }
    ctx->pc = 0x20F2DCu;
    SET_GPR_U32(ctx, 31, 0x20F2E4u);
    ctx->pc = 0x20F2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2DCu;
            // 0x20f2e0: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2E4u; }
        if (ctx->pc != 0x20F2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2E4u; }
        if (ctx->pc != 0x20F2E4u) { return; }
    }
    ctx->pc = 0x20F2E4u;
label_20f2e4:
    // 0x20f2e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f2e8:
    // 0x20f2e8: 0xc04d318  jal         func_134C60
label_20f2ec:
    if (ctx->pc == 0x20F2ECu) {
        ctx->pc = 0x20F2ECu;
            // 0x20f2ec: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x20F2F0u;
        goto label_20f2f0;
    }
    ctx->pc = 0x20F2E8u;
    SET_GPR_U32(ctx, 31, 0x20F2F0u);
    ctx->pc = 0x20F2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F2E8u;
            // 0x20f2ec: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2F0u; }
        if (ctx->pc != 0x20F2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2F0u; }
        if (ctx->pc != 0x20F2F0u) { return; }
    }
    ctx->pc = 0x20F2F0u;
label_20f2f0:
    // 0x20f2f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20f2f4:
    // 0x20f2f4: 0xc04d1a4  jal         func_134690
label_20f2f8:
    if (ctx->pc == 0x20F2F8u) {
        ctx->pc = 0x20F2FCu;
        goto label_20f2fc;
    }
    ctx->pc = 0x20F2F4u;
    SET_GPR_U32(ctx, 31, 0x20F2FCu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2FCu; }
        if (ctx->pc != 0x20F2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F2FCu; }
        if (ctx->pc != 0x20F2FCu) { return; }
    }
    ctx->pc = 0x20F2FCu;
label_20f2fc:
    // 0x20f2fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20f2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20f300:
    // 0x20f300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f304:
    // 0x20f304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f308:
    // 0x20f308: 0x3e00008  jr          $ra
label_20f30c:
    if (ctx->pc == 0x20F30Cu) {
        ctx->pc = 0x20F30Cu;
            // 0x20f30c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x20F310u;
        goto label_fallthrough_0x20f308;
    }
    ctx->pc = 0x20F308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F308u;
            // 0x20f30c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20f308:
    ctx->pc = 0x20F310u;
}
