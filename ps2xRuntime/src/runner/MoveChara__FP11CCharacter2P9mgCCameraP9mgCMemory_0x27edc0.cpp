#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveChara__FP11CCharacter2P9mgCCameraP9mgCMemory
// Address: 0x27edc0 - 0x27f1f0
void MoveChara__FP11CCharacter2P9mgCCameraP9mgCMemory_0x27edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveChara__FP11CCharacter2P9mgCCameraP9mgCMemory_0x27edc0");
#endif

    switch (ctx->pc) {
        case 0x27edc0u: goto label_27edc0;
        case 0x27edc4u: goto label_27edc4;
        case 0x27edc8u: goto label_27edc8;
        case 0x27edccu: goto label_27edcc;
        case 0x27edd0u: goto label_27edd0;
        case 0x27edd4u: goto label_27edd4;
        case 0x27edd8u: goto label_27edd8;
        case 0x27eddcu: goto label_27eddc;
        case 0x27ede0u: goto label_27ede0;
        case 0x27ede4u: goto label_27ede4;
        case 0x27ede8u: goto label_27ede8;
        case 0x27edecu: goto label_27edec;
        case 0x27edf0u: goto label_27edf0;
        case 0x27edf4u: goto label_27edf4;
        case 0x27edf8u: goto label_27edf8;
        case 0x27edfcu: goto label_27edfc;
        case 0x27ee00u: goto label_27ee00;
        case 0x27ee04u: goto label_27ee04;
        case 0x27ee08u: goto label_27ee08;
        case 0x27ee0cu: goto label_27ee0c;
        case 0x27ee10u: goto label_27ee10;
        case 0x27ee14u: goto label_27ee14;
        case 0x27ee18u: goto label_27ee18;
        case 0x27ee1cu: goto label_27ee1c;
        case 0x27ee20u: goto label_27ee20;
        case 0x27ee24u: goto label_27ee24;
        case 0x27ee28u: goto label_27ee28;
        case 0x27ee2cu: goto label_27ee2c;
        case 0x27ee30u: goto label_27ee30;
        case 0x27ee34u: goto label_27ee34;
        case 0x27ee38u: goto label_27ee38;
        case 0x27ee3cu: goto label_27ee3c;
        case 0x27ee40u: goto label_27ee40;
        case 0x27ee44u: goto label_27ee44;
        case 0x27ee48u: goto label_27ee48;
        case 0x27ee4cu: goto label_27ee4c;
        case 0x27ee50u: goto label_27ee50;
        case 0x27ee54u: goto label_27ee54;
        case 0x27ee58u: goto label_27ee58;
        case 0x27ee5cu: goto label_27ee5c;
        case 0x27ee60u: goto label_27ee60;
        case 0x27ee64u: goto label_27ee64;
        case 0x27ee68u: goto label_27ee68;
        case 0x27ee6cu: goto label_27ee6c;
        case 0x27ee70u: goto label_27ee70;
        case 0x27ee74u: goto label_27ee74;
        case 0x27ee78u: goto label_27ee78;
        case 0x27ee7cu: goto label_27ee7c;
        case 0x27ee80u: goto label_27ee80;
        case 0x27ee84u: goto label_27ee84;
        case 0x27ee88u: goto label_27ee88;
        case 0x27ee8cu: goto label_27ee8c;
        case 0x27ee90u: goto label_27ee90;
        case 0x27ee94u: goto label_27ee94;
        case 0x27ee98u: goto label_27ee98;
        case 0x27ee9cu: goto label_27ee9c;
        case 0x27eea0u: goto label_27eea0;
        case 0x27eea4u: goto label_27eea4;
        case 0x27eea8u: goto label_27eea8;
        case 0x27eeacu: goto label_27eeac;
        case 0x27eeb0u: goto label_27eeb0;
        case 0x27eeb4u: goto label_27eeb4;
        case 0x27eeb8u: goto label_27eeb8;
        case 0x27eebcu: goto label_27eebc;
        case 0x27eec0u: goto label_27eec0;
        case 0x27eec4u: goto label_27eec4;
        case 0x27eec8u: goto label_27eec8;
        case 0x27eeccu: goto label_27eecc;
        case 0x27eed0u: goto label_27eed0;
        case 0x27eed4u: goto label_27eed4;
        case 0x27eed8u: goto label_27eed8;
        case 0x27eedcu: goto label_27eedc;
        case 0x27eee0u: goto label_27eee0;
        case 0x27eee4u: goto label_27eee4;
        case 0x27eee8u: goto label_27eee8;
        case 0x27eeecu: goto label_27eeec;
        case 0x27eef0u: goto label_27eef0;
        case 0x27eef4u: goto label_27eef4;
        case 0x27eef8u: goto label_27eef8;
        case 0x27eefcu: goto label_27eefc;
        case 0x27ef00u: goto label_27ef00;
        case 0x27ef04u: goto label_27ef04;
        case 0x27ef08u: goto label_27ef08;
        case 0x27ef0cu: goto label_27ef0c;
        case 0x27ef10u: goto label_27ef10;
        case 0x27ef14u: goto label_27ef14;
        case 0x27ef18u: goto label_27ef18;
        case 0x27ef1cu: goto label_27ef1c;
        case 0x27ef20u: goto label_27ef20;
        case 0x27ef24u: goto label_27ef24;
        case 0x27ef28u: goto label_27ef28;
        case 0x27ef2cu: goto label_27ef2c;
        case 0x27ef30u: goto label_27ef30;
        case 0x27ef34u: goto label_27ef34;
        case 0x27ef38u: goto label_27ef38;
        case 0x27ef3cu: goto label_27ef3c;
        case 0x27ef40u: goto label_27ef40;
        case 0x27ef44u: goto label_27ef44;
        case 0x27ef48u: goto label_27ef48;
        case 0x27ef4cu: goto label_27ef4c;
        case 0x27ef50u: goto label_27ef50;
        case 0x27ef54u: goto label_27ef54;
        case 0x27ef58u: goto label_27ef58;
        case 0x27ef5cu: goto label_27ef5c;
        case 0x27ef60u: goto label_27ef60;
        case 0x27ef64u: goto label_27ef64;
        case 0x27ef68u: goto label_27ef68;
        case 0x27ef6cu: goto label_27ef6c;
        case 0x27ef70u: goto label_27ef70;
        case 0x27ef74u: goto label_27ef74;
        case 0x27ef78u: goto label_27ef78;
        case 0x27ef7cu: goto label_27ef7c;
        case 0x27ef80u: goto label_27ef80;
        case 0x27ef84u: goto label_27ef84;
        case 0x27ef88u: goto label_27ef88;
        case 0x27ef8cu: goto label_27ef8c;
        case 0x27ef90u: goto label_27ef90;
        case 0x27ef94u: goto label_27ef94;
        case 0x27ef98u: goto label_27ef98;
        case 0x27ef9cu: goto label_27ef9c;
        case 0x27efa0u: goto label_27efa0;
        case 0x27efa4u: goto label_27efa4;
        case 0x27efa8u: goto label_27efa8;
        case 0x27efacu: goto label_27efac;
        case 0x27efb0u: goto label_27efb0;
        case 0x27efb4u: goto label_27efb4;
        case 0x27efb8u: goto label_27efb8;
        case 0x27efbcu: goto label_27efbc;
        case 0x27efc0u: goto label_27efc0;
        case 0x27efc4u: goto label_27efc4;
        case 0x27efc8u: goto label_27efc8;
        case 0x27efccu: goto label_27efcc;
        case 0x27efd0u: goto label_27efd0;
        case 0x27efd4u: goto label_27efd4;
        case 0x27efd8u: goto label_27efd8;
        case 0x27efdcu: goto label_27efdc;
        case 0x27efe0u: goto label_27efe0;
        case 0x27efe4u: goto label_27efe4;
        case 0x27efe8u: goto label_27efe8;
        case 0x27efecu: goto label_27efec;
        case 0x27eff0u: goto label_27eff0;
        case 0x27eff4u: goto label_27eff4;
        case 0x27eff8u: goto label_27eff8;
        case 0x27effcu: goto label_27effc;
        case 0x27f000u: goto label_27f000;
        case 0x27f004u: goto label_27f004;
        case 0x27f008u: goto label_27f008;
        case 0x27f00cu: goto label_27f00c;
        case 0x27f010u: goto label_27f010;
        case 0x27f014u: goto label_27f014;
        case 0x27f018u: goto label_27f018;
        case 0x27f01cu: goto label_27f01c;
        case 0x27f020u: goto label_27f020;
        case 0x27f024u: goto label_27f024;
        case 0x27f028u: goto label_27f028;
        case 0x27f02cu: goto label_27f02c;
        case 0x27f030u: goto label_27f030;
        case 0x27f034u: goto label_27f034;
        case 0x27f038u: goto label_27f038;
        case 0x27f03cu: goto label_27f03c;
        case 0x27f040u: goto label_27f040;
        case 0x27f044u: goto label_27f044;
        case 0x27f048u: goto label_27f048;
        case 0x27f04cu: goto label_27f04c;
        case 0x27f050u: goto label_27f050;
        case 0x27f054u: goto label_27f054;
        case 0x27f058u: goto label_27f058;
        case 0x27f05cu: goto label_27f05c;
        case 0x27f060u: goto label_27f060;
        case 0x27f064u: goto label_27f064;
        case 0x27f068u: goto label_27f068;
        case 0x27f06cu: goto label_27f06c;
        case 0x27f070u: goto label_27f070;
        case 0x27f074u: goto label_27f074;
        case 0x27f078u: goto label_27f078;
        case 0x27f07cu: goto label_27f07c;
        case 0x27f080u: goto label_27f080;
        case 0x27f084u: goto label_27f084;
        case 0x27f088u: goto label_27f088;
        case 0x27f08cu: goto label_27f08c;
        case 0x27f090u: goto label_27f090;
        case 0x27f094u: goto label_27f094;
        case 0x27f098u: goto label_27f098;
        case 0x27f09cu: goto label_27f09c;
        case 0x27f0a0u: goto label_27f0a0;
        case 0x27f0a4u: goto label_27f0a4;
        case 0x27f0a8u: goto label_27f0a8;
        case 0x27f0acu: goto label_27f0ac;
        case 0x27f0b0u: goto label_27f0b0;
        case 0x27f0b4u: goto label_27f0b4;
        case 0x27f0b8u: goto label_27f0b8;
        case 0x27f0bcu: goto label_27f0bc;
        case 0x27f0c0u: goto label_27f0c0;
        case 0x27f0c4u: goto label_27f0c4;
        case 0x27f0c8u: goto label_27f0c8;
        case 0x27f0ccu: goto label_27f0cc;
        case 0x27f0d0u: goto label_27f0d0;
        case 0x27f0d4u: goto label_27f0d4;
        case 0x27f0d8u: goto label_27f0d8;
        case 0x27f0dcu: goto label_27f0dc;
        case 0x27f0e0u: goto label_27f0e0;
        case 0x27f0e4u: goto label_27f0e4;
        case 0x27f0e8u: goto label_27f0e8;
        case 0x27f0ecu: goto label_27f0ec;
        case 0x27f0f0u: goto label_27f0f0;
        case 0x27f0f4u: goto label_27f0f4;
        case 0x27f0f8u: goto label_27f0f8;
        case 0x27f0fcu: goto label_27f0fc;
        case 0x27f100u: goto label_27f100;
        case 0x27f104u: goto label_27f104;
        case 0x27f108u: goto label_27f108;
        case 0x27f10cu: goto label_27f10c;
        case 0x27f110u: goto label_27f110;
        case 0x27f114u: goto label_27f114;
        case 0x27f118u: goto label_27f118;
        case 0x27f11cu: goto label_27f11c;
        case 0x27f120u: goto label_27f120;
        case 0x27f124u: goto label_27f124;
        case 0x27f128u: goto label_27f128;
        case 0x27f12cu: goto label_27f12c;
        case 0x27f130u: goto label_27f130;
        case 0x27f134u: goto label_27f134;
        case 0x27f138u: goto label_27f138;
        case 0x27f13cu: goto label_27f13c;
        case 0x27f140u: goto label_27f140;
        case 0x27f144u: goto label_27f144;
        case 0x27f148u: goto label_27f148;
        case 0x27f14cu: goto label_27f14c;
        case 0x27f150u: goto label_27f150;
        case 0x27f154u: goto label_27f154;
        case 0x27f158u: goto label_27f158;
        case 0x27f15cu: goto label_27f15c;
        case 0x27f160u: goto label_27f160;
        case 0x27f164u: goto label_27f164;
        case 0x27f168u: goto label_27f168;
        case 0x27f16cu: goto label_27f16c;
        case 0x27f170u: goto label_27f170;
        case 0x27f174u: goto label_27f174;
        case 0x27f178u: goto label_27f178;
        case 0x27f17cu: goto label_27f17c;
        case 0x27f180u: goto label_27f180;
        case 0x27f184u: goto label_27f184;
        case 0x27f188u: goto label_27f188;
        case 0x27f18cu: goto label_27f18c;
        case 0x27f190u: goto label_27f190;
        case 0x27f194u: goto label_27f194;
        case 0x27f198u: goto label_27f198;
        case 0x27f19cu: goto label_27f19c;
        case 0x27f1a0u: goto label_27f1a0;
        case 0x27f1a4u: goto label_27f1a4;
        case 0x27f1a8u: goto label_27f1a8;
        case 0x27f1acu: goto label_27f1ac;
        case 0x27f1b0u: goto label_27f1b0;
        case 0x27f1b4u: goto label_27f1b4;
        case 0x27f1b8u: goto label_27f1b8;
        case 0x27f1bcu: goto label_27f1bc;
        case 0x27f1c0u: goto label_27f1c0;
        case 0x27f1c4u: goto label_27f1c4;
        case 0x27f1c8u: goto label_27f1c8;
        case 0x27f1ccu: goto label_27f1cc;
        case 0x27f1d0u: goto label_27f1d0;
        case 0x27f1d4u: goto label_27f1d4;
        case 0x27f1d8u: goto label_27f1d8;
        case 0x27f1dcu: goto label_27f1dc;
        case 0x27f1e0u: goto label_27f1e0;
        case 0x27f1e4u: goto label_27f1e4;
        case 0x27f1e8u: goto label_27f1e8;
        case 0x27f1ecu: goto label_27f1ec;
        default: break;
    }

    ctx->pc = 0x27edc0u;

label_27edc0:
    // 0x27edc0: 0x27bdaed0  addiu       $sp, $sp, -0x5130
    ctx->pc = 0x27edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946512));
label_27edc4:
    // 0x27edc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_27edc8:
    // 0x27edc8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x27edc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_27edcc:
    // 0x27edcc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x27edccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_27edd0:
    // 0x27edd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27edd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27edd4:
    // 0x27edd4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x27edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_27edd8:
    // 0x27edd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27edd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27eddc:
    // 0x27eddc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27ede0:
    // 0x27ede0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x27ede0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27ede4:
    // 0x27ede4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x27ede4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27ede8:
    // 0x27ede8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x27ede8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_27edec:
    // 0x27edec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x27edecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27edf0:
    // 0x27edf0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27edf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27edf4:
    // 0x27edf4: 0x126000f1  beqz        $s3, . + 4 + (0xF1 << 2)
label_27edf8:
    if (ctx->pc == 0x27EDF8u) {
        ctx->pc = 0x27EDF8u;
            // 0x27edf8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x27EDFCu;
        goto label_27edfc;
    }
    ctx->pc = 0x27EDF4u;
    {
        const bool branch_taken_0x27edf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EDF4u;
            // 0x27edf8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edf4) {
            ctx->pc = 0x27F1BCu;
            goto label_27f1bc;
        }
    }
    ctx->pc = 0x27EDFCu;
label_27edfc:
    // 0x27edfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27edfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27ee00:
    // 0x27ee00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x27ee00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_27ee04:
    // 0x27ee04: 0x320f809  jalr        $t9
label_27ee08:
    if (ctx->pc == 0x27EE08u) {
        ctx->pc = 0x27EE08u;
            // 0x27ee08: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x27EE0Cu;
        goto label_27ee0c;
    }
    ctx->pc = 0x27EE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27EE0Cu);
        ctx->pc = 0x27EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE04u;
            // 0x27ee08: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27EE0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27EE0Cu; }
            if (ctx->pc != 0x27EE0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27EE0Cu;
label_27ee0c:
    // 0x27ee0c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x27ee0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27ee10:
    // 0x27ee10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27ee14:
    // 0x27ee14: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x27ee14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27ee18:
    // 0x27ee18: 0x320f809  jalr        $t9
label_27ee1c:
    if (ctx->pc == 0x27EE1Cu) {
        ctx->pc = 0x27EE1Cu;
            // 0x27ee1c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x27EE20u;
        goto label_27ee20;
    }
    ctx->pc = 0x27EE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27EE20u);
        ctx->pc = 0x27EE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE18u;
            // 0x27ee1c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27EE20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27EE20u; }
            if (ctx->pc != 0x27EE20u) { return; }
        }
        }
    }
    ctx->pc = 0x27EE20u;
label_27ee20:
    // 0x27ee20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27ee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ee24:
    // 0x27ee24: 0xc04c574  jal         func_1315D0
label_27ee28:
    if (ctx->pc == 0x27EE28u) {
        ctx->pc = 0x27EE28u;
            // 0x27ee28: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x27EE2Cu;
        goto label_27ee2c;
    }
    ctx->pc = 0x27EE24u;
    SET_GPR_U32(ctx, 31, 0x27EE2Cu);
    ctx->pc = 0x27EE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE24u;
            // 0x27ee28: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE2Cu; }
        if (ctx->pc != 0x27EE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE2Cu; }
        if (ctx->pc != 0x27EE2Cu) { return; }
    }
    ctx->pc = 0x27EE2Cu;
label_27ee2c:
    // 0x27ee2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27ee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ee30:
    // 0x27ee30: 0xc04c578  jal         func_1315E0
label_27ee34:
    if (ctx->pc == 0x27EE34u) {
        ctx->pc = 0x27EE34u;
            // 0x27ee34: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x27EE38u;
        goto label_27ee38;
    }
    ctx->pc = 0x27EE30u;
    SET_GPR_U32(ctx, 31, 0x27EE38u);
    ctx->pc = 0x27EE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE30u;
            // 0x27ee34: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE38u; }
        if (ctx->pc != 0x27EE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE38u; }
        if (ctx->pc != 0x27EE38u) { return; }
    }
    ctx->pc = 0x27EE38u;
label_27ee38:
    // 0x27ee38: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27ee3c:
    // 0x27ee3c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x27ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_27ee40:
    // 0x27ee40: 0xc041c3e  jal         func_1070F8
label_27ee44:
    if (ctx->pc == 0x27EE44u) {
        ctx->pc = 0x27EE44u;
            // 0x27ee44: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x27EE48u;
        goto label_27ee48;
    }
    ctx->pc = 0x27EE40u;
    SET_GPR_U32(ctx, 31, 0x27EE48u);
    ctx->pc = 0x27EE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE40u;
            // 0x27ee44: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE48u; }
        if (ctx->pc != 0x27EE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE48u; }
        if (ctx->pc != 0x27EE48u) { return; }
    }
    ctx->pc = 0x27EE48u;
label_27ee48:
    // 0x27ee48: 0xc7ad00b8  lwc1        $f13, 0xB8($sp)
    ctx->pc = 0x27ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_27ee4c:
    // 0x27ee4c: 0xc047c76  jal         func_11F1D8
label_27ee50:
    if (ctx->pc == 0x27EE50u) {
        ctx->pc = 0x27EE50u;
            // 0x27ee50: 0xc7ac00b0  lwc1        $f12, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27EE54u;
        goto label_27ee54;
    }
    ctx->pc = 0x27EE4Cu;
    SET_GPR_U32(ctx, 31, 0x27EE54u);
    ctx->pc = 0x27EE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE4Cu;
            // 0x27ee50: 0xc7ac00b0  lwc1        $f12, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE54u; }
        if (ctx->pc != 0x27EE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE54u; }
        if (ctx->pc != 0x27EE54u) { return; }
    }
    ctx->pc = 0x27EE54u;
label_27ee54:
    // 0x27ee54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27ee58:
    // 0x27ee58: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27ee5c:
    // 0x27ee5c: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x27ee5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_27ee60:
    // 0x27ee60: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_27ee64:
    // 0x27ee64: 0xc052cc0  jal         func_14B300
label_27ee68:
    if (ctx->pc == 0x27EE68u) {
        ctx->pc = 0x27EE68u;
            // 0x27ee68: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x27EE6Cu;
        goto label_27ee6c;
    }
    ctx->pc = 0x27EE64u;
    SET_GPR_U32(ctx, 31, 0x27EE6Cu);
    ctx->pc = 0x27EE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE64u;
            // 0x27ee68: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE6Cu; }
        if (ctx->pc != 0x27EE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE6Cu; }
        if (ctx->pc != 0x27EE6Cu) { return; }
    }
    ctx->pc = 0x27EE6Cu;
label_27ee6c:
    // 0x27ee6c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27ee70:
    // 0x27ee70: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x27ee70u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
label_27ee74:
    // 0x27ee74: 0xc052cb0  jal         func_14B2C0
label_27ee78:
    if (ctx->pc == 0x27EE78u) {
        ctx->pc = 0x27EE78u;
            // 0x27ee78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27EE7Cu;
        goto label_27ee7c;
    }
    ctx->pc = 0x27EE74u;
    SET_GPR_U32(ctx, 31, 0x27EE7Cu);
    ctx->pc = 0x27EE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE74u;
            // 0x27ee78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE7Cu; }
        if (ctx->pc != 0x27EE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE7Cu; }
        if (ctx->pc != 0x27EE7Cu) { return; }
    }
    ctx->pc = 0x27EE7Cu;
label_27ee7c:
    // 0x27ee7c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27ee80:
    // 0x27ee80: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x27ee80u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
label_27ee84:
    // 0x27ee84: 0xc052cd0  jal         func_14B340
label_27ee88:
    if (ctx->pc == 0x27EE88u) {
        ctx->pc = 0x27EE88u;
            // 0x27ee88: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27EE8Cu;
        goto label_27ee8c;
    }
    ctx->pc = 0x27EE84u;
    SET_GPR_U32(ctx, 31, 0x27EE8Cu);
    ctx->pc = 0x27EE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE84u;
            // 0x27ee88: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE8Cu; }
        if (ctx->pc != 0x27EE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE8Cu; }
        if (ctx->pc != 0x27EE8Cu) { return; }
    }
    ctx->pc = 0x27EE8Cu;
label_27ee8c:
    // 0x27ee8c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27ee90:
    // 0x27ee90: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27ee94:
    // 0x27ee94: 0x460005c7  neg.s       $f23, $f0
    ctx->pc = 0x27ee94u;
    ctx->f[23] = FPU_NEG_S(ctx->f[0]);
label_27ee98:
    // 0x27ee98: 0xc052cf0  jal         func_14B3C0
label_27ee9c:
    if (ctx->pc == 0x27EE9Cu) {
        ctx->pc = 0x27EE9Cu;
            // 0x27ee9c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27EEA0u;
        goto label_27eea0;
    }
    ctx->pc = 0x27EE98u;
    SET_GPR_U32(ctx, 31, 0x27EEA0u);
    ctx->pc = 0x27EE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE98u;
            // 0x27ee9c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EEA0u; }
        if (ctx->pc != 0x27EEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EEA0u; }
        if (ctx->pc != 0x27EEA0u) { return; }
    }
    ctx->pc = 0x27EEA0u;
label_27eea0:
    // 0x27eea0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27eea4:
    if (ctx->pc == 0x27EEA4u) {
        ctx->pc = 0x27EEA4u;
            // 0x27eea4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27EEA8u;
        goto label_27eea8;
    }
    ctx->pc = 0x27EEA0u;
    {
        const bool branch_taken_0x27eea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EEA0u;
            // 0x27eea4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eea0) {
            ctx->pc = 0x27EEC4u;
            goto label_27eec4;
        }
    }
    ctx->pc = 0x27EEA8u;
label_27eea8:
    // 0x27eea8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x27eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27eeac:
    // 0x27eeac: 0x3c02bdf5  lui         $v0, 0xBDF5
    ctx->pc = 0x27eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48629 << 16));
label_27eeb0:
    // 0x27eeb0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x27eeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_27eeb4:
    // 0x27eeb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27eeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27eeb8:
    // 0x27eeb8: 0x0  nop
    ctx->pc = 0x27eeb8u;
    // NOP
label_27eebc:
    // 0x27eebc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27eebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27eec0:
    // 0x27eec0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x27eec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_27eec4:
    // 0x27eec4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27eec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27eec8:
    // 0x27eec8: 0xc052cf0  jal         func_14B3C0
label_27eecc:
    if (ctx->pc == 0x27EECCu) {
        ctx->pc = 0x27EECCu;
            // 0x27eecc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27EED0u;
        goto label_27eed0;
    }
    ctx->pc = 0x27EEC8u;
    SET_GPR_U32(ctx, 31, 0x27EED0u);
    ctx->pc = 0x27EECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EEC8u;
            // 0x27eecc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EED0u; }
        if (ctx->pc != 0x27EED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EED0u; }
        if (ctx->pc != 0x27EED0u) { return; }
    }
    ctx->pc = 0x27EED0u;
label_27eed0:
    // 0x27eed0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27eed4:
    if (ctx->pc == 0x27EED4u) {
        ctx->pc = 0x27EED4u;
            // 0x27eed4: 0x27a300a4  addiu       $v1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->pc = 0x27EED8u;
        goto label_27eed8;
    }
    ctx->pc = 0x27EED0u;
    {
        const bool branch_taken_0x27eed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EED0u;
            // 0x27eed4: 0x27a300a4  addiu       $v1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eed0) {
            ctx->pc = 0x27EEF4u;
            goto label_27eef4;
        }
    }
    ctx->pc = 0x27EED8u;
label_27eed8:
    // 0x27eed8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x27eed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27eedc:
    // 0x27eedc: 0x3c023df5  lui         $v0, 0x3DF5
    ctx->pc = 0x27eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15861 << 16));
label_27eee0:
    // 0x27eee0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x27eee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_27eee4:
    // 0x27eee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27eee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27eee8:
    // 0x27eee8: 0x0  nop
    ctx->pc = 0x27eee8u;
    // NOP
label_27eeec:
    // 0x27eeec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27eeecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27eef0:
    // 0x27eef0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x27eef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_27eef4:
    // 0x27eef4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_27eef8:
    // 0x27eef8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27eef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27eefc:
    // 0x27eefc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27ef00:
    // 0x27ef00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ef00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ef04:
    // 0x27ef04: 0x0  nop
    ctx->pc = 0x27ef04u;
    // NOP
label_27ef08:
    // 0x27ef08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27ef08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ef0c:
    // 0x27ef0c: 0x0  nop
    ctx->pc = 0x27ef0cu;
    // NOP
label_27ef10:
    // 0x27ef10: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_27ef14:
    if (ctx->pc == 0x27EF14u) {
        ctx->pc = 0x27EF14u;
            // 0x27ef14: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x27EF18u;
        goto label_27ef18;
    }
    ctx->pc = 0x27EF10u;
    {
        const bool branch_taken_0x27ef10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF10u;
            // 0x27ef14: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef10) {
            ctx->pc = 0x27EF2Cu;
            goto label_27ef2c;
        }
    }
    ctx->pc = 0x27EF18u;
label_27ef18:
    // 0x27ef18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27ef18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27ef1c:
    // 0x27ef1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ef1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ef20:
    // 0x27ef20: 0x0  nop
    ctx->pc = 0x27ef20u;
    // NOP
label_27ef24:
    // 0x27ef24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ef24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27ef28:
    // 0x27ef28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27ef28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27ef2c:
    // 0x27ef2c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27ef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ef30:
    // 0x27ef30: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x27ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_27ef34:
    // 0x27ef34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27ef34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27ef38:
    // 0x27ef38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ef38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ef3c:
    // 0x27ef3c: 0x0  nop
    ctx->pc = 0x27ef3cu;
    // NOP
label_27ef40:
    // 0x27ef40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ef40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27ef44:
    // 0x27ef44: 0x0  nop
    ctx->pc = 0x27ef44u;
    // NOP
label_27ef48:
    // 0x27ef48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_27ef4c:
    if (ctx->pc == 0x27EF4Cu) {
        ctx->pc = 0x27EF4Cu;
            // 0x27ef4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x27EF50u;
        goto label_27ef50;
    }
    ctx->pc = 0x27EF48u;
    {
        const bool branch_taken_0x27ef48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF48u;
            // 0x27ef4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef48) {
            ctx->pc = 0x27EF68u;
            goto label_27ef68;
        }
    }
    ctx->pc = 0x27EF50u;
label_27ef50:
    // 0x27ef50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x27ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_27ef54:
    // 0x27ef54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27ef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27ef58:
    // 0x27ef58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ef58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ef5c:
    // 0x27ef5c: 0x0  nop
    ctx->pc = 0x27ef5cu;
    // NOP
label_27ef60:
    // 0x27ef60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ef60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27ef64:
    // 0x27ef64: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27ef64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27ef68:
    // 0x27ef68: 0xc047964  jal         func_11E590
label_27ef6c:
    if (ctx->pc == 0x27EF6Cu) {
        ctx->pc = 0x27EF70u;
        goto label_27ef70;
    }
    ctx->pc = 0x27EF68u;
    SET_GPR_U32(ctx, 31, 0x27EF70u);
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF70u; }
        if (ctx->pc != 0x27EF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF70u; }
        if (ctx->pc != 0x27EF70u) { return; }
    }
    ctx->pc = 0x27EF70u;
label_27ef70:
    // 0x27ef70: 0x4600ae42  mul.s       $f25, $f21, $f0
    ctx->pc = 0x27ef70u;
    ctx->f[25] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_27ef74:
    // 0x27ef74: 0xc047a42  jal         func_11E908
label_27ef78:
    if (ctx->pc == 0x27EF78u) {
        ctx->pc = 0x27EF78u;
            // 0x27ef78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x27EF7Cu;
        goto label_27ef7c;
    }
    ctx->pc = 0x27EF74u;
    SET_GPR_U32(ctx, 31, 0x27EF7Cu);
    ctx->pc = 0x27EF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF74u;
            // 0x27ef78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF7Cu; }
        if (ctx->pc != 0x27EF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF7Cu; }
        if (ctx->pc != 0x27EF7Cu) { return; }
    }
    ctx->pc = 0x27EF7Cu;
label_27ef7c:
    // 0x27ef7c: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x27ef7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_27ef80:
    // 0x27ef80: 0x4600c800  add.s       $f0, $f25, $f0
    ctx->pc = 0x27ef80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_27ef84:
    // 0x27ef84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27ef84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27ef88:
    // 0x27ef88: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x27ef88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_27ef8c:
    // 0x27ef8c: 0xc047964  jal         func_11E590
label_27ef90:
    if (ctx->pc == 0x27EF90u) {
        ctx->pc = 0x27EF90u;
            // 0x27ef90: 0xe7b600c4  swc1        $f22, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x27EF94u;
        goto label_27ef94;
    }
    ctx->pc = 0x27EF8Cu;
    SET_GPR_U32(ctx, 31, 0x27EF94u);
    ctx->pc = 0x27EF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF8Cu;
            // 0x27ef90: 0xe7b600c4  swc1        $f22, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF94u; }
        if (ctx->pc != 0x27EF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF94u; }
        if (ctx->pc != 0x27EF94u) { return; }
    }
    ctx->pc = 0x27EF94u;
label_27ef94:
    // 0x27ef94: 0x4600bd82  mul.s       $f22, $f23, $f0
    ctx->pc = 0x27ef94u;
    ctx->f[22] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_27ef98:
    // 0x27ef98: 0xc047a42  jal         func_11E908
label_27ef9c:
    if (ctx->pc == 0x27EF9Cu) {
        ctx->pc = 0x27EF9Cu;
            // 0x27ef9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x27EFA0u;
        goto label_27efa0;
    }
    ctx->pc = 0x27EF98u;
    SET_GPR_U32(ctx, 31, 0x27EFA0u);
    ctx->pc = 0x27EF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF98u;
            // 0x27ef9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFA0u; }
        if (ctx->pc != 0x27EFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFA0u; }
        if (ctx->pc != 0x27EFA0u) { return; }
    }
    ctx->pc = 0x27EFA0u;
label_27efa0:
    // 0x27efa0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x27efa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_27efa4:
    // 0x27efa4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27efa8:
    // 0x27efa8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_27efac:
    // 0x27efac: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27efacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27efb0:
    // 0x27efb0: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x27efb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_27efb4:
    // 0x27efb4: 0xc052cf0  jal         func_14B3C0
label_27efb8:
    if (ctx->pc == 0x27EFB8u) {
        ctx->pc = 0x27EFB8u;
            // 0x27efb8: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x27EFBCu;
        goto label_27efbc;
    }
    ctx->pc = 0x27EFB4u;
    SET_GPR_U32(ctx, 31, 0x27EFBCu);
    ctx->pc = 0x27EFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFB4u;
            // 0x27efb8: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFBCu; }
        if (ctx->pc != 0x27EFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFBCu; }
        if (ctx->pc != 0x27EFBCu) { return; }
    }
    ctx->pc = 0x27EFBCu;
label_27efbc:
    // 0x27efbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_27efc0:
    if (ctx->pc == 0x27EFC0u) {
        ctx->pc = 0x27EFC0u;
            // 0x27efc0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27EFC4u;
        goto label_27efc4;
    }
    ctx->pc = 0x27EFBCu;
    {
        const bool branch_taken_0x27efbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFBCu;
            // 0x27efc0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efbc) {
            ctx->pc = 0x27EFCCu;
            goto label_27efcc;
        }
    }
    ctx->pc = 0x27EFC4u;
label_27efc4:
    // 0x27efc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_27efc8:
    // 0x27efc8: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x27efc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_27efcc:
    // 0x27efcc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x27efccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_27efd0:
    // 0x27efd0: 0xc041c4a  jal         func_107128
label_27efd4:
    if (ctx->pc == 0x27EFD4u) {
        ctx->pc = 0x27EFD4u;
            // 0x27efd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27EFD8u;
        goto label_27efd8;
    }
    ctx->pc = 0x27EFD0u;
    SET_GPR_U32(ctx, 31, 0x27EFD8u);
    ctx->pc = 0x27EFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFD0u;
            // 0x27efd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFD8u; }
        if (ctx->pc != 0x27EFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFD8u; }
        if (ctx->pc != 0x27EFD8u) { return; }
    }
    ctx->pc = 0x27EFD8u;
label_27efd8:
    // 0x27efd8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27efd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27efdc:
    // 0x27efdc: 0x8c225018  lw          $v0, 0x5018($at)
    ctx->pc = 0x27efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20504)));
label_27efe0:
    // 0x27efe0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_27efe4:
    if (ctx->pc == 0x27EFE4u) {
        ctx->pc = 0x27EFE4u;
            // 0x27efe4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x27EFE8u;
        goto label_27efe8;
    }
    ctx->pc = 0x27EFE0u;
    {
        const bool branch_taken_0x27efe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFE0u;
            // 0x27efe4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efe0) {
            ctx->pc = 0x27F13Cu;
            goto label_27f13c;
        }
    }
    ctx->pc = 0x27EFE8u;
label_27efe8:
    // 0x27efe8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x27efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_27efec:
    // 0x27efec: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x27efecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27eff0:
    // 0x27eff0: 0xc041c38  jal         func_1070E0
label_27eff4:
    if (ctx->pc == 0x27EFF4u) {
        ctx->pc = 0x27EFF4u;
            // 0x27eff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27EFF8u;
        goto label_27eff8;
    }
    ctx->pc = 0x27EFF0u;
    SET_GPR_U32(ctx, 31, 0x27EFF8u);
    ctx->pc = 0x27EFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFF0u;
            // 0x27eff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFF8u; }
        if (ctx->pc != 0x27EFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFF8u; }
        if (ctx->pc != 0x27EFF8u) { return; }
    }
    ctx->pc = 0x27EFF8u;
label_27eff8:
    // 0x27eff8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x27eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27effc:
    // 0x27effc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x27effcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_27f000:
    // 0x27f000: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27f000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27f004:
    // 0x27f004: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x27f004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_27f008:
    // 0x27f008: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x27f008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27f00c:
    // 0x27f00c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27f010:
    // 0x27f010: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x27f010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27f014:
    // 0x27f014: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x27f014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_27f018:
    // 0x27f018: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x27f018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_27f01c:
    // 0x27f01c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x27f01cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_27f020:
    // 0x27f020: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x27f020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_27f024:
    // 0x27f024: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x27f024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_27f028:
    // 0x27f028: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x27f028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_27f02c:
    // 0x27f02c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x27f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27f030:
    // 0x27f030: 0x46041040  add.s       $f1, $f2, $f4
    ctx->pc = 0x27f030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_27f034:
    // 0x27f034: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x27f034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_27f038:
    // 0x27f038: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x27f038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_27f03c:
    // 0x27f03c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x27f03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_27f040:
    // 0x27f040: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x27f040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_27f044:
    // 0x27f044: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x27f044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_27f048:
    // 0x27f048: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x27f048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_27f04c:
    // 0x27f04c: 0xc0b1ed4  jal         func_2C7B50
label_27f050:
    if (ctx->pc == 0x27F050u) {
        ctx->pc = 0x27F050u;
            // 0x27f050: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->pc = 0x27F054u;
        goto label_27f054;
    }
    ctx->pc = 0x27F04Cu;
    SET_GPR_U32(ctx, 31, 0x27F054u);
    ctx->pc = 0x27F050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F04Cu;
            // 0x27f050: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F054u; }
        if (ctx->pc != 0x27F054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F054u; }
        if (ctx->pc != 0x27F054u) { return; }
    }
    ctx->pc = 0x27F054u;
label_27f054:
    // 0x27f054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f058:
    // 0x27f058: 0x27a45100  addiu       $a0, $sp, 0x5100
    ctx->pc = 0x27f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20736));
label_27f05c:
    // 0x27f05c: 0xc041c5c  jal         func_107170
label_27f060:
    if (ctx->pc == 0x27F060u) {
        ctx->pc = 0x27F060u;
            // 0x27f060: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x27F064u;
        goto label_27f064;
    }
    ctx->pc = 0x27F05Cu;
    SET_GPR_U32(ctx, 31, 0x27F064u);
    ctx->pc = 0x27F060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F05Cu;
            // 0x27f060: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F064u; }
        if (ctx->pc != 0x27F064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F064u; }
        if (ctx->pc != 0x27F064u) { return; }
    }
    ctx->pc = 0x27F064u;
label_27f064:
    // 0x27f064: 0xc7a05104  lwc1        $f0, 0x5104($sp)
    ctx->pc = 0x27f064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f068:
    // 0x27f068: 0x3c02421c  lui         $v0, 0x421C
    ctx->pc = 0x27f068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16924 << 16));
label_27f06c:
    // 0x27f06c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27f06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27f070:
    // 0x27f070: 0x27a45110  addiu       $a0, $sp, 0x5110
    ctx->pc = 0x27f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20752));
label_27f074:
    // 0x27f074: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x27f074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_27f078:
    // 0x27f078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27f078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27f07c:
    // 0x27f07c: 0xafa2510c  sw          $v0, 0x510C($sp)
    ctx->pc = 0x27f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20748), GPR_U32(ctx, 2));
label_27f080:
    // 0x27f080: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27f080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27f084:
    // 0x27f084: 0xc041c5c  jal         func_107170
label_27f088:
    if (ctx->pc == 0x27F088u) {
        ctx->pc = 0x27F088u;
            // 0x27f088: 0xe7a05104  swc1        $f0, 0x5104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20740), bits); }
        ctx->pc = 0x27F08Cu;
        goto label_27f08c;
    }
    ctx->pc = 0x27F084u;
    SET_GPR_U32(ctx, 31, 0x27F08Cu);
    ctx->pc = 0x27F088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F084u;
            // 0x27f088: 0xe7a05104  swc1        $f0, 0x5104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20740), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F08Cu; }
        if (ctx->pc != 0x27F08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F08Cu; }
        if (ctx->pc != 0x27F08Cu) { return; }
    }
    ctx->pc = 0x27F08Cu;
label_27f08c:
    // 0x27f08c: 0xc7a15114  lwc1        $f1, 0x5114($sp)
    ctx->pc = 0x27f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f090:
    // 0x27f090: 0x3c02421c  lui         $v0, 0x421C
    ctx->pc = 0x27f090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16924 << 16));
label_27f094:
    // 0x27f094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27f098:
    // 0x27f098: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x27f098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27f09c:
    // 0x27f09c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f0a0:
    // 0x27f0a0: 0x27a65100  addiu       $a2, $sp, 0x5100
    ctx->pc = 0x27f0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20736));
label_27f0a4:
    // 0x27f0a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27f0a8:
    // 0x27f0a8: 0x27a75110  addiu       $a3, $sp, 0x5110
    ctx->pc = 0x27f0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20752));
label_27f0ac:
    // 0x27f0ac: 0xafa2511c  sw          $v0, 0x511C($sp)
    ctx->pc = 0x27f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20764), GPR_U32(ctx, 2));
label_27f0b0:
    // 0x27f0b0: 0x27a85120  addiu       $t0, $sp, 0x5120
    ctx->pc = 0x27f0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
label_27f0b4:
    // 0x27f0b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x27f0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f0b8:
    // 0x27f0b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27f0b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f0bc:
    // 0x27f0bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27f0bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27f0c0:
    // 0x27f0c0: 0xc053794  jal         func_14DE50
label_27f0c4:
    if (ctx->pc == 0x27F0C4u) {
        ctx->pc = 0x27F0C4u;
            // 0x27f0c4: 0xe7a05114  swc1        $f0, 0x5114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20756), bits); }
        ctx->pc = 0x27F0C8u;
        goto label_27f0c8;
    }
    ctx->pc = 0x27F0C0u;
    SET_GPR_U32(ctx, 31, 0x27F0C8u);
    ctx->pc = 0x27F0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0C0u;
            // 0x27f0c4: 0xe7a05114  swc1        $f0, 0x5114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20756), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0C8u; }
        if (ctx->pc != 0x27F0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0C8u; }
        if (ctx->pc != 0x27F0C8u) { return; }
    }
    ctx->pc = 0x27F0C8u;
label_27f0c8:
    // 0x27f0c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_27f0cc:
    if (ctx->pc == 0x27F0CCu) {
        ctx->pc = 0x27F0D0u;
        goto label_27f0d0;
    }
    ctx->pc = 0x27F0C8u;
    {
        const bool branch_taken_0x27f0c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27f0c8) {
            ctx->pc = 0x27F0DCu;
            goto label_27f0dc;
        }
    }
    ctx->pc = 0x27F0D0u;
label_27f0d0:
    // 0x27f0d0: 0xc7a05124  lwc1        $f0, 0x5124($sp)
    ctx->pc = 0x27f0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f0d4:
    // 0x27f0d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_27f0d8:
    if (ctx->pc == 0x27F0D8u) {
        ctx->pc = 0x27F0D8u;
            // 0x27f0d8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x27F0DCu;
        goto label_27f0dc;
    }
    ctx->pc = 0x27F0D4u;
    {
        const bool branch_taken_0x27f0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0D4u;
            // 0x27f0d8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0d4) {
            ctx->pc = 0x27F0F4u;
            goto label_27f0f4;
        }
    }
    ctx->pc = 0x27F0DCu;
label_27f0dc:
    // 0x27f0dc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27f0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f0e0:
    // 0x27f0e0: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x27f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_27f0e4:
    // 0x27f0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27f0e8:
    // 0x27f0e8: 0x0  nop
    ctx->pc = 0x27f0e8u;
    // NOP
label_27f0ec:
    // 0x27f0ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27f0ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27f0f0:
    // 0x27f0f0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27f0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_27f0f4:
    // 0x27f0f4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27f0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f0f8:
    // 0x27f0f8: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x27f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_27f0fc:
    // 0x27f0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27f100:
    // 0x27f100: 0x0  nop
    ctx->pc = 0x27f100u;
    // NOP
label_27f104:
    // 0x27f104: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27f108:
    // 0x27f108: 0x0  nop
    ctx->pc = 0x27f108u;
    // NOP
label_27f10c:
    // 0x27f10c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27f110:
    if (ctx->pc == 0x27F110u) {
        ctx->pc = 0x27F110u;
            // 0x27f110: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x27F114u;
        goto label_27f114;
    }
    ctx->pc = 0x27F10Cu;
    {
        const bool branch_taken_0x27f10c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F10Cu;
            // 0x27f110: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f10c) {
            ctx->pc = 0x27F11Cu;
            goto label_27f11c;
        }
    }
    ctx->pc = 0x27F114u;
label_27f114:
    // 0x27f114: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x27f114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_27f118:
    // 0x27f118: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x27f118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_27f11c:
    // 0x27f11c: 0xc041c5c  jal         func_107170
label_27f120:
    if (ctx->pc == 0x27F120u) {
        ctx->pc = 0x27F120u;
            // 0x27f120: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x27F124u;
        goto label_27f124;
    }
    ctx->pc = 0x27F11Cu;
    SET_GPR_U32(ctx, 31, 0x27F124u);
    ctx->pc = 0x27F120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F11Cu;
            // 0x27f120: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F124u; }
        if (ctx->pc != 0x27F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F124u; }
        if (ctx->pc != 0x27F124u) { return; }
    }
    ctx->pc = 0x27F124u;
label_27f124:
    // 0x27f124: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27f124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_27f128:
    // 0x27f128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f12c:
    // 0x27f12c: 0xc04a0d2  jal         func_128348
label_27f130:
    if (ctx->pc == 0x27F130u) {
        ctx->pc = 0x27F130u;
            // 0x27f130: 0x2484cf38  addiu       $a0, $a0, -0x30C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954808));
        ctx->pc = 0x27F134u;
        goto label_27f134;
    }
    ctx->pc = 0x27F12Cu;
    SET_GPR_U32(ctx, 31, 0x27F134u);
    ctx->pc = 0x27F130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F12Cu;
            // 0x27f130: 0x2484cf38  addiu       $a0, $a0, -0x30C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F134u; }
        if (ctx->pc != 0x27F134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F134u; }
        if (ctx->pc != 0x27F134u) { return; }
    }
    ctx->pc = 0x27F134u;
label_27f134:
    // 0x27f134: 0x10000005  b           . + 4 + (0x5 << 2)
label_27f138:
    if (ctx->pc == 0x27F138u) {
        ctx->pc = 0x27F138u;
            // 0x27f138: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x27F13Cu;
        goto label_27f13c;
    }
    ctx->pc = 0x27F134u;
    {
        const bool branch_taken_0x27f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F134u;
            // 0x27f138: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f134) {
            ctx->pc = 0x27F14Cu;
            goto label_27f14c;
        }
    }
    ctx->pc = 0x27F13Cu;
label_27f13c:
    // 0x27f13c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x27f13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_27f140:
    // 0x27f140: 0xc041c38  jal         func_1070E0
label_27f144:
    if (ctx->pc == 0x27F144u) {
        ctx->pc = 0x27F144u;
            // 0x27f144: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27F148u;
        goto label_27f148;
    }
    ctx->pc = 0x27F140u;
    SET_GPR_U32(ctx, 31, 0x27F148u);
    ctx->pc = 0x27F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F140u;
            // 0x27f144: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F148u; }
        if (ctx->pc != 0x27F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F148u; }
        if (ctx->pc != 0x27F148u) { return; }
    }
    ctx->pc = 0x27F148u;
label_27f148:
    // 0x27f148: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x27f148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27f14c:
    // 0x27f14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f150:
    // 0x27f150: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x27f150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_27f154:
    // 0x27f154: 0x320f809  jalr        $t9
label_27f158:
    if (ctx->pc == 0x27F158u) {
        ctx->pc = 0x27F158u;
            // 0x27f158: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x27F15Cu;
        goto label_27f15c;
    }
    ctx->pc = 0x27F154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27F15Cu);
        ctx->pc = 0x27F158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F154u;
            // 0x27f158: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27F15Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27F15Cu; }
            if (ctx->pc != 0x27F15Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27F15Cu;
label_27f15c:
    // 0x27f15c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x27f15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27f160:
    // 0x27f160: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f164:
    // 0x27f164: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27f164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27f168:
    // 0x27f168: 0x320f809  jalr        $t9
label_27f16c:
    if (ctx->pc == 0x27F16Cu) {
        ctx->pc = 0x27F16Cu;
            // 0x27f16c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x27F170u;
        goto label_27f170;
    }
    ctx->pc = 0x27F168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27F170u);
        ctx->pc = 0x27F16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F168u;
            // 0x27f16c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27F170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27F170u; }
            if (ctx->pc != 0x27F170u) { return; }
        }
        }
    }
    ctx->pc = 0x27F170u;
label_27f170:
    // 0x27f170: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f174:
    // 0x27f174: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27f174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_27f178:
    // 0x27f178: 0xc052d0c  jal         func_14B430
label_27f17c:
    if (ctx->pc == 0x27F17Cu) {
        ctx->pc = 0x27F17Cu;
            // 0x27f17c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F180u;
        goto label_27f180;
    }
    ctx->pc = 0x27F178u;
    SET_GPR_U32(ctx, 31, 0x27F180u);
    ctx->pc = 0x27F17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F178u;
            // 0x27f17c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F180u; }
        if (ctx->pc != 0x27F180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F180u; }
        if (ctx->pc != 0x27F180u) { return; }
    }
    ctx->pc = 0x27F180u;
label_27f180:
    // 0x27f180: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_27f184:
    if (ctx->pc == 0x27F184u) {
        ctx->pc = 0x27F184u;
            // 0x27f184: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x27F188u;
        goto label_27f188;
    }
    ctx->pc = 0x27F180u;
    {
        const bool branch_taken_0x27f180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F180u;
            // 0x27f184: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f180) {
            ctx->pc = 0x27F1BCu;
            goto label_27f1bc;
        }
    }
    ctx->pc = 0x27F188u;
label_27f188:
    // 0x27f188: 0xc041c5c  jal         func_107170
label_27f18c:
    if (ctx->pc == 0x27F18Cu) {
        ctx->pc = 0x27F18Cu;
            // 0x27f18c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x27F190u;
        goto label_27f190;
    }
    ctx->pc = 0x27F188u;
    SET_GPR_U32(ctx, 31, 0x27F190u);
    ctx->pc = 0x27F18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F188u;
            // 0x27f18c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F190u; }
        if (ctx->pc != 0x27F190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F190u; }
        if (ctx->pc != 0x27F190u) { return; }
    }
    ctx->pc = 0x27F190u;
label_27f190:
    // 0x27f190: 0xc6610110  lwc1        $f1, 0x110($s3)
    ctx->pc = 0x27f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f194:
    // 0x27f194: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x27f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_27f198:
    // 0x27f198: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x27f198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_27f19c:
    // 0x27f19c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27f1a0:
    // 0x27f1a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27f1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27f1a4:
    // 0x27f1a4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x27f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_27f1a8:
    // 0x27f1a8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x27f1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f1ac:
    // 0x27f1ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27f1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27f1b0:
    // 0x27f1b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27f1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27f1b4:
    // 0x27f1b4: 0xc04c518  jal         func_131460
label_27f1b8:
    if (ctx->pc == 0x27F1B8u) {
        ctx->pc = 0x27F1B8u;
            // 0x27f1b8: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->pc = 0x27F1BCu;
        goto label_27f1bc;
    }
    ctx->pc = 0x27F1B4u;
    SET_GPR_U32(ctx, 31, 0x27F1BCu);
    ctx->pc = 0x27F1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F1B4u;
            // 0x27f1b8: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F1BCu; }
        if (ctx->pc != 0x27F1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F1BCu; }
        if (ctx->pc != 0x27F1BCu) { return; }
    }
    ctx->pc = 0x27F1BCu;
label_27f1bc:
    // 0x27f1bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27f1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_27f1c0:
    // 0x27f1c0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x27f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_27f1c4:
    // 0x27f1c4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x27f1c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27f1c8:
    // 0x27f1c8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x27f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_27f1cc:
    // 0x27f1cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x27f1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27f1d0:
    // 0x27f1d0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x27f1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_27f1d4:
    // 0x27f1d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x27f1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27f1d8:
    // 0x27f1d8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x27f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27f1dc:
    // 0x27f1dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27f1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f1e0:
    // 0x27f1e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x27f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_27f1e4:
    // 0x27f1e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27f1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27f1e8:
    // 0x27f1e8: 0x3e00008  jr          $ra
label_27f1ec:
    if (ctx->pc == 0x27F1ECu) {
        ctx->pc = 0x27F1ECu;
            // 0x27f1ec: 0x27bd5130  addiu       $sp, $sp, 0x5130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20784));
        ctx->pc = 0x27F1F0u;
        goto label_fallthrough_0x27f1e8;
    }
    ctx->pc = 0x27F1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F1E8u;
            // 0x27f1ec: 0x27bd5130  addiu       $sp, $sp, 0x5130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27f1e8:
    ctx->pc = 0x27F1F0u;
}
