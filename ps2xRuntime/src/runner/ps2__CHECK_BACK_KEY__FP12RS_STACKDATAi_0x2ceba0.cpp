#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_BACK_KEY__FP12RS_STACKDATAi
// Address: 0x2ceba0 - 0x2ced50
void ps2__CHECK_BACK_KEY__FP12RS_STACKDATAi_0x2ceba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_BACK_KEY__FP12RS_STACKDATAi_0x2ceba0");
#endif

    switch (ctx->pc) {
        case 0x2ceba0u: goto label_2ceba0;
        case 0x2ceba4u: goto label_2ceba4;
        case 0x2ceba8u: goto label_2ceba8;
        case 0x2cebacu: goto label_2cebac;
        case 0x2cebb0u: goto label_2cebb0;
        case 0x2cebb4u: goto label_2cebb4;
        case 0x2cebb8u: goto label_2cebb8;
        case 0x2cebbcu: goto label_2cebbc;
        case 0x2cebc0u: goto label_2cebc0;
        case 0x2cebc4u: goto label_2cebc4;
        case 0x2cebc8u: goto label_2cebc8;
        case 0x2cebccu: goto label_2cebcc;
        case 0x2cebd0u: goto label_2cebd0;
        case 0x2cebd4u: goto label_2cebd4;
        case 0x2cebd8u: goto label_2cebd8;
        case 0x2cebdcu: goto label_2cebdc;
        case 0x2cebe0u: goto label_2cebe0;
        case 0x2cebe4u: goto label_2cebe4;
        case 0x2cebe8u: goto label_2cebe8;
        case 0x2cebecu: goto label_2cebec;
        case 0x2cebf0u: goto label_2cebf0;
        case 0x2cebf4u: goto label_2cebf4;
        case 0x2cebf8u: goto label_2cebf8;
        case 0x2cebfcu: goto label_2cebfc;
        case 0x2cec00u: goto label_2cec00;
        case 0x2cec04u: goto label_2cec04;
        case 0x2cec08u: goto label_2cec08;
        case 0x2cec0cu: goto label_2cec0c;
        case 0x2cec10u: goto label_2cec10;
        case 0x2cec14u: goto label_2cec14;
        case 0x2cec18u: goto label_2cec18;
        case 0x2cec1cu: goto label_2cec1c;
        case 0x2cec20u: goto label_2cec20;
        case 0x2cec24u: goto label_2cec24;
        case 0x2cec28u: goto label_2cec28;
        case 0x2cec2cu: goto label_2cec2c;
        case 0x2cec30u: goto label_2cec30;
        case 0x2cec34u: goto label_2cec34;
        case 0x2cec38u: goto label_2cec38;
        case 0x2cec3cu: goto label_2cec3c;
        case 0x2cec40u: goto label_2cec40;
        case 0x2cec44u: goto label_2cec44;
        case 0x2cec48u: goto label_2cec48;
        case 0x2cec4cu: goto label_2cec4c;
        case 0x2cec50u: goto label_2cec50;
        case 0x2cec54u: goto label_2cec54;
        case 0x2cec58u: goto label_2cec58;
        case 0x2cec5cu: goto label_2cec5c;
        case 0x2cec60u: goto label_2cec60;
        case 0x2cec64u: goto label_2cec64;
        case 0x2cec68u: goto label_2cec68;
        case 0x2cec6cu: goto label_2cec6c;
        case 0x2cec70u: goto label_2cec70;
        case 0x2cec74u: goto label_2cec74;
        case 0x2cec78u: goto label_2cec78;
        case 0x2cec7cu: goto label_2cec7c;
        case 0x2cec80u: goto label_2cec80;
        case 0x2cec84u: goto label_2cec84;
        case 0x2cec88u: goto label_2cec88;
        case 0x2cec8cu: goto label_2cec8c;
        case 0x2cec90u: goto label_2cec90;
        case 0x2cec94u: goto label_2cec94;
        case 0x2cec98u: goto label_2cec98;
        case 0x2cec9cu: goto label_2cec9c;
        case 0x2ceca0u: goto label_2ceca0;
        case 0x2ceca4u: goto label_2ceca4;
        case 0x2ceca8u: goto label_2ceca8;
        case 0x2cecacu: goto label_2cecac;
        case 0x2cecb0u: goto label_2cecb0;
        case 0x2cecb4u: goto label_2cecb4;
        case 0x2cecb8u: goto label_2cecb8;
        case 0x2cecbcu: goto label_2cecbc;
        case 0x2cecc0u: goto label_2cecc0;
        case 0x2cecc4u: goto label_2cecc4;
        case 0x2cecc8u: goto label_2cecc8;
        case 0x2cecccu: goto label_2ceccc;
        case 0x2cecd0u: goto label_2cecd0;
        case 0x2cecd4u: goto label_2cecd4;
        case 0x2cecd8u: goto label_2cecd8;
        case 0x2cecdcu: goto label_2cecdc;
        case 0x2cece0u: goto label_2cece0;
        case 0x2cece4u: goto label_2cece4;
        case 0x2cece8u: goto label_2cece8;
        case 0x2cececu: goto label_2cecec;
        case 0x2cecf0u: goto label_2cecf0;
        case 0x2cecf4u: goto label_2cecf4;
        case 0x2cecf8u: goto label_2cecf8;
        case 0x2cecfcu: goto label_2cecfc;
        case 0x2ced00u: goto label_2ced00;
        case 0x2ced04u: goto label_2ced04;
        case 0x2ced08u: goto label_2ced08;
        case 0x2ced0cu: goto label_2ced0c;
        case 0x2ced10u: goto label_2ced10;
        case 0x2ced14u: goto label_2ced14;
        case 0x2ced18u: goto label_2ced18;
        case 0x2ced1cu: goto label_2ced1c;
        case 0x2ced20u: goto label_2ced20;
        case 0x2ced24u: goto label_2ced24;
        case 0x2ced28u: goto label_2ced28;
        case 0x2ced2cu: goto label_2ced2c;
        case 0x2ced30u: goto label_2ced30;
        case 0x2ced34u: goto label_2ced34;
        case 0x2ced38u: goto label_2ced38;
        case 0x2ced3cu: goto label_2ced3c;
        case 0x2ced40u: goto label_2ced40;
        case 0x2ced44u: goto label_2ced44;
        case 0x2ced48u: goto label_2ced48;
        case 0x2ced4cu: goto label_2ced4c;
        default: break;
    }

    ctx->pc = 0x2ceba0u;

label_2ceba0:
    // 0x2ceba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ceba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ceba4:
    // 0x2ceba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ceba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ceba8:
    // 0x2ceba8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ceba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2cebac:
    // 0x2cebac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2cebb0:
    // 0x2cebb0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2cebb0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2cebb4:
    // 0x2cebb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cebb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cebb8:
    // 0x2cebb8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2cebb8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2cebbc:
    // 0x2cebbc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2cebbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2cebc0:
    // 0x2cebc0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2cebc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2cebc4:
    // 0x2cebc4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2cebc8:
    if (ctx->pc == 0x2CEBC8u) {
        ctx->pc = 0x2CEBC8u;
            // 0x2cebc8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2CEBCCu;
        goto label_2cebcc;
    }
    ctx->pc = 0x2CEBC4u;
    {
        const bool branch_taken_0x2cebc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CEBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEBC4u;
            // 0x2cebc8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebc4) {
            ctx->pc = 0x2CEBD4u;
            goto label_2cebd4;
        }
    }
    ctx->pc = 0x2CEBCCu;
label_2cebcc:
    // 0x2cebcc: 0x10000057  b           . + 4 + (0x57 << 2)
label_2cebd0:
    if (ctx->pc == 0x2CEBD0u) {
        ctx->pc = 0x2CEBD0u;
            // 0x2cebd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBD4u;
        goto label_2cebd4;
    }
    ctx->pc = 0x2CEBCCu;
    {
        const bool branch_taken_0x2cebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEBCCu;
            // 0x2cebd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebcc) {
            ctx->pc = 0x2CED2Cu;
            goto label_2ced2c;
        }
    }
    ctx->pc = 0x2CEBD4u;
label_2cebd4:
    // 0x2cebd4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cebd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cebd8:
    // 0x2cebd8: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cebdc:
    // 0x2cebdc: 0x84820772  lh          $v0, 0x772($a0)
    ctx->pc = 0x2cebdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1906)));
label_2cebe0:
    // 0x2cebe0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2cebe4:
    if (ctx->pc == 0x2CEBE4u) {
        ctx->pc = 0x2CEBE8u;
        goto label_2cebe8;
    }
    ctx->pc = 0x2CEBE0u;
    {
        const bool branch_taken_0x2cebe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cebe0) {
            ctx->pc = 0x2CEBFCu;
            goto label_2cebfc;
        }
    }
    ctx->pc = 0x2CEBE8u;
label_2cebe8:
    // 0x2cebe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cebec:
    // 0x2cebec: 0xc0b37ac  jal         func_2CDEB0
label_2cebf0:
    if (ctx->pc == 0x2CEBF0u) {
        ctx->pc = 0x2CEBF0u;
            // 0x2cebf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBF4u;
        goto label_2cebf4;
    }
    ctx->pc = 0x2CEBECu;
    SET_GPR_U32(ctx, 31, 0x2CEBF4u);
    ctx->pc = 0x2CEBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEBECu;
            // 0x2cebf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEBF4u; }
        if (ctx->pc != 0x2CEBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEBF4u; }
        if (ctx->pc != 0x2CEBF4u) { return; }
    }
    ctx->pc = 0x2CEBF4u;
label_2cebf4:
    // 0x2cebf4: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2cebf8:
    if (ctx->pc == 0x2CEBF8u) {
        ctx->pc = 0x2CEBF8u;
            // 0x2cebf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CEBFCu;
        goto label_2cebfc;
    }
    ctx->pc = 0x2CEBF4u;
    {
        const bool branch_taken_0x2cebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEBF4u;
            // 0x2cebf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebf4) {
            ctx->pc = 0x2CED2Cu;
            goto label_2ced2c;
        }
    }
    ctx->pc = 0x2CEBFCu;
label_2cebfc:
    // 0x2cebfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cebfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cec00:
    // 0x2cec00: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2cec00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2cec04:
    // 0x2cec04: 0x320f809  jalr        $t9
label_2cec08:
    if (ctx->pc == 0x2CEC08u) {
        ctx->pc = 0x2CEC08u;
            // 0x2cec08: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2CEC0Cu;
        goto label_2cec0c;
    }
    ctx->pc = 0x2CEC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CEC0Cu);
        ctx->pc = 0x2CEC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC04u;
            // 0x2cec08: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CEC0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC0Cu; }
            if (ctx->pc != 0x2CEC0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CEC0Cu;
label_2cec0c:
    // 0x2cec0c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cec0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cec10:
    // 0x2cec10: 0xc04c678  jal         func_1319E0
label_2cec14:
    if (ctx->pc == 0x2CEC14u) {
        ctx->pc = 0x2CEC14u;
            // 0x2cec14: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->pc = 0x2CEC18u;
        goto label_2cec18;
    }
    ctx->pc = 0x2CEC10u;
    SET_GPR_U32(ctx, 31, 0x2CEC18u);
    ctx->pc = 0x2CEC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC10u;
            // 0x2cec14: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC18u; }
        if (ctx->pc != 0x2CEC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC18u; }
        if (ctx->pc != 0x2CEC18u) { return; }
    }
    ctx->pc = 0x2CEC18u;
label_2cec18:
    // 0x2cec18: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2cec18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2cec1c:
    // 0x2cec1c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2cec1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2cec20:
    // 0x2cec20: 0xc052cc0  jal         func_14B300
label_2cec24:
    if (ctx->pc == 0x2CEC24u) {
        ctx->pc = 0x2CEC24u;
            // 0x2cec24: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2CEC28u;
        goto label_2cec28;
    }
    ctx->pc = 0x2CEC20u;
    SET_GPR_U32(ctx, 31, 0x2CEC28u);
    ctx->pc = 0x2CEC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC20u;
            // 0x2cec24: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC28u; }
        if (ctx->pc != 0x2CEC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC28u; }
        if (ctx->pc != 0x2CEC28u) { return; }
    }
    ctx->pc = 0x2CEC28u;
label_2cec28:
    // 0x2cec28: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2cec28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2cec2c:
    // 0x2cec2c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2cec2cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2cec30:
    // 0x2cec30: 0xc052cd0  jal         func_14B340
label_2cec34:
    if (ctx->pc == 0x2CEC34u) {
        ctx->pc = 0x2CEC34u;
            // 0x2cec34: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2CEC38u;
        goto label_2cec38;
    }
    ctx->pc = 0x2CEC30u;
    SET_GPR_U32(ctx, 31, 0x2CEC38u);
    ctx->pc = 0x2CEC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC30u;
            // 0x2cec34: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC38u; }
        if (ctx->pc != 0x2CEC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC38u; }
        if (ctx->pc != 0x2CEC38u) { return; }
    }
    ctx->pc = 0x2CEC38u;
label_2cec38:
    // 0x2cec38: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2cec38u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_2cec3c:
    // 0x2cec3c: 0xc047964  jal         func_11E590
label_2cec40:
    if (ctx->pc == 0x2CEC40u) {
        ctx->pc = 0x2CEC40u;
            // 0x2cec40: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2CEC44u;
        goto label_2cec44;
    }
    ctx->pc = 0x2CEC3Cu;
    SET_GPR_U32(ctx, 31, 0x2CEC44u);
    ctx->pc = 0x2CEC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC3Cu;
            // 0x2cec40: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC44u; }
        if (ctx->pc != 0x2CEC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC44u; }
        if (ctx->pc != 0x2CEC44u) { return; }
    }
    ctx->pc = 0x2CEC44u;
label_2cec44:
    // 0x2cec44: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x2cec44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2cec48:
    // 0x2cec48: 0xc047a42  jal         func_11E908
label_2cec4c:
    if (ctx->pc == 0x2CEC4Cu) {
        ctx->pc = 0x2CEC4Cu;
            // 0x2cec4c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2CEC50u;
        goto label_2cec50;
    }
    ctx->pc = 0x2CEC48u;
    SET_GPR_U32(ctx, 31, 0x2CEC50u);
    ctx->pc = 0x2CEC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC48u;
            // 0x2cec4c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC50u; }
        if (ctx->pc != 0x2CEC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC50u; }
        if (ctx->pc != 0x2CEC50u) { return; }
    }
    ctx->pc = 0x2CEC50u;
label_2cec50:
    // 0x2cec50: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2cec50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_2cec54:
    // 0x2cec54: 0x4600a600  add.s       $f24, $f20, $f0
    ctx->pc = 0x2cec54u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2cec58:
    // 0x2cec58: 0xc047a42  jal         func_11E908
label_2cec5c:
    if (ctx->pc == 0x2CEC5Cu) {
        ctx->pc = 0x2CEC5Cu;
            // 0x2cec5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2CEC60u;
        goto label_2cec60;
    }
    ctx->pc = 0x2CEC58u;
    SET_GPR_U32(ctx, 31, 0x2CEC60u);
    ctx->pc = 0x2CEC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC58u;
            // 0x2cec5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC60u; }
        if (ctx->pc != 0x2CEC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC60u; }
        if (ctx->pc != 0x2CEC60u) { return; }
    }
    ctx->pc = 0x2CEC60u;
label_2cec60:
    // 0x2cec60: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x2cec60u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
label_2cec64:
    // 0x2cec64: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2cec64u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2cec68:
    // 0x2cec68: 0xc047964  jal         func_11E590
label_2cec6c:
    if (ctx->pc == 0x2CEC6Cu) {
        ctx->pc = 0x2CEC6Cu;
            // 0x2cec6c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2CEC70u;
        goto label_2cec70;
    }
    ctx->pc = 0x2CEC68u;
    SET_GPR_U32(ctx, 31, 0x2CEC70u);
    ctx->pc = 0x2CEC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC68u;
            // 0x2cec6c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC70u; }
        if (ctx->pc != 0x2CEC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC70u; }
        if (ctx->pc != 0x2CEC70u) { return; }
    }
    ctx->pc = 0x2CEC70u;
label_2cec70:
    // 0x2cec70: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2cec70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_2cec74:
    // 0x2cec74: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2cec74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_2cec78:
    // 0x2cec78: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2cec78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2cec7c:
    // 0x2cec7c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x2cec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_2cec80:
    // 0x2cec80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2cec80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2cec84:
    // 0x2cec84: 0x4600a340  add.s       $f13, $f20, $f0
    ctx->pc = 0x2cec84u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2cec88:
    // 0x2cec88: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2cec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cec8c:
    // 0x2cec8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cec8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cec90:
    // 0x2cec90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cec90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cec94:
    // 0x2cec94: 0x0  nop
    ctx->pc = 0x2cec94u;
    // NOP
label_2cec98:
    // 0x2cec98: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x2cec98u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2cec9c:
    // 0x2cec9c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2cec9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ceca0:
    // 0x2ceca0: 0x0  nop
    ctx->pc = 0x2ceca0u;
    // NOP
label_2ceca4:
    // 0x2ceca4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2ceca8:
    if (ctx->pc == 0x2CECA8u) {
        ctx->pc = 0x2CECA8u;
            // 0x2ceca8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x2CECACu;
        goto label_2cecac;
    }
    ctx->pc = 0x2CECA4u;
    {
        const bool branch_taken_0x2ceca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CECA4u;
            // 0x2ceca8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceca4) {
            ctx->pc = 0x2CECBCu;
            goto label_2cecbc;
        }
    }
    ctx->pc = 0x2CECACu;
label_2cecac:
    // 0x2cecac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2cecacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2cecb0:
    // 0x2cecb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cecb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cecb4:
    // 0x2cecb4: 0x0  nop
    ctx->pc = 0x2cecb4u;
    // NOP
label_2cecb8:
    // 0x2cecb8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2cecb8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2cecbc:
    // 0x2cecbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cecbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cecc0:
    // 0x2cecc0: 0x0  nop
    ctx->pc = 0x2cecc0u;
    // NOP
label_2cecc4:
    // 0x2cecc4: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x2cecc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cecc8:
    // 0x2cecc8: 0x0  nop
    ctx->pc = 0x2cecc8u;
    // NOP
label_2ceccc:
    // 0x2ceccc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_2cecd0:
    if (ctx->pc == 0x2CECD0u) {
        ctx->pc = 0x2CECD0u;
            // 0x2cecd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CECD4u;
        goto label_2cecd4;
    }
    ctx->pc = 0x2CECCCu;
    {
        const bool branch_taken_0x2ceccc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CECD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CECCCu;
            // 0x2cecd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceccc) {
            ctx->pc = 0x2CED20u;
            goto label_2ced20;
        }
    }
    ctx->pc = 0x2CECD4u;
label_2cecd4:
    // 0x2cecd4: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x2cecd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cecd8:
    // 0x2cecd8: 0x0  nop
    ctx->pc = 0x2cecd8u;
    // NOP
label_2cecdc:
    // 0x2cecdc: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_2cece0:
    if (ctx->pc == 0x2CECE0u) {
        ctx->pc = 0x2CECE0u;
            // 0x2cece0: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x2CECE4u;
        goto label_2cece4;
    }
    ctx->pc = 0x2CECDCu;
    {
        const bool branch_taken_0x2cecdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CECDCu;
            // 0x2cece0: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cecdc) {
            ctx->pc = 0x2CED1Cu;
            goto label_2ced1c;
        }
    }
    ctx->pc = 0x2CECE4u;
label_2cece4:
    // 0x2cece4: 0xc047c76  jal         func_11F1D8
label_2cece8:
    if (ctx->pc == 0x2CECE8u) {
        ctx->pc = 0x2CECECu;
        goto label_2cecec;
    }
    ctx->pc = 0x2CECE4u;
    SET_GPR_U32(ctx, 31, 0x2CECECu);
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CECECu; }
        if (ctx->pc != 0x2CECECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CECECu; }
        if (ctx->pc != 0x2CECECu) { return; }
    }
    ctx->pc = 0x2CECECu;
label_2cecec:
    // 0x2cecec: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x2cececu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
label_2cecf0:
    // 0x2cecf0: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2cecf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_2cecf4:
    // 0x2cecf4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2cecf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2cecf8:
    // 0x2cecf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cecf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2cecfc:
    // 0x2cecfc: 0xc04c344  jal         func_130D10
label_2ced00:
    if (ctx->pc == 0x2CED00u) {
        ctx->pc = 0x2CED00u;
            // 0x2ced00: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2CED04u;
        goto label_2ced04;
    }
    ctx->pc = 0x2CECFCu;
    SET_GPR_U32(ctx, 31, 0x2CED04u);
    ctx->pc = 0x2CED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CECFCu;
            // 0x2ced00: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED04u; }
        if (ctx->pc != 0x2CED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED04u; }
        if (ctx->pc != 0x2CED04u) { return; }
    }
    ctx->pc = 0x2CED04u;
label_2ced04:
    // 0x2ced04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ced08:
    if (ctx->pc == 0x2CED08u) {
        ctx->pc = 0x2CED08u;
            // 0x2ced08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CED0Cu;
        goto label_2ced0c;
    }
    ctx->pc = 0x2CED04u;
    {
        const bool branch_taken_0x2ced04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED04u;
            // 0x2ced08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced04) {
            ctx->pc = 0x2CED1Cu;
            goto label_2ced1c;
        }
    }
    ctx->pc = 0x2CED0Cu;
label_2ced0c:
    // 0x2ced0c: 0xc0b37ac  jal         func_2CDEB0
label_2ced10:
    if (ctx->pc == 0x2CED10u) {
        ctx->pc = 0x2CED10u;
            // 0x2ced10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CED14u;
        goto label_2ced14;
    }
    ctx->pc = 0x2CED0Cu;
    SET_GPR_U32(ctx, 31, 0x2CED14u);
    ctx->pc = 0x2CED10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED0Cu;
            // 0x2ced10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED14u; }
        if (ctx->pc != 0x2CED14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED14u; }
        if (ctx->pc != 0x2CED14u) { return; }
    }
    ctx->pc = 0x2CED14u;
label_2ced14:
    // 0x2ced14: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ced18:
    if (ctx->pc == 0x2CED18u) {
        ctx->pc = 0x2CED18u;
            // 0x2ced18: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CED1Cu;
        goto label_2ced1c;
    }
    ctx->pc = 0x2CED14u;
    {
        const bool branch_taken_0x2ced14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED14u;
            // 0x2ced18: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced14) {
            ctx->pc = 0x2CED2Cu;
            goto label_2ced2c;
        }
    }
    ctx->pc = 0x2CED1Cu;
label_2ced1c:
    // 0x2ced1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ced1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ced20:
    // 0x2ced20: 0xc0b37ac  jal         func_2CDEB0
label_2ced24:
    if (ctx->pc == 0x2CED24u) {
        ctx->pc = 0x2CED24u;
            // 0x2ced24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CED28u;
        goto label_2ced28;
    }
    ctx->pc = 0x2CED20u;
    SET_GPR_U32(ctx, 31, 0x2CED28u);
    ctx->pc = 0x2CED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED20u;
            // 0x2ced24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED28u; }
        if (ctx->pc != 0x2CED28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED28u; }
        if (ctx->pc != 0x2CED28u) { return; }
    }
    ctx->pc = 0x2CED28u;
label_2ced28:
    // 0x2ced28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ced28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ced2c:
    // 0x2ced2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ced2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ced30:
    // 0x2ced30: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2ced30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2ced34:
    // 0x2ced34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ced34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ced38:
    // 0x2ced38: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2ced38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2ced3c:
    // 0x2ced3c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2ced3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2ced40:
    // 0x2ced40: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ced40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ced44:
    // 0x2ced44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ced44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ced48:
    // 0x2ced48: 0x3e00008  jr          $ra
label_2ced4c:
    if (ctx->pc == 0x2CED4Cu) {
        ctx->pc = 0x2CED4Cu;
            // 0x2ced4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2CED50u;
        goto label_fallthrough_0x2ced48;
    }
    ctx->pc = 0x2CED48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED48u;
            // 0x2ced4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ced48:
    ctx->pc = 0x2CED50u;
}
