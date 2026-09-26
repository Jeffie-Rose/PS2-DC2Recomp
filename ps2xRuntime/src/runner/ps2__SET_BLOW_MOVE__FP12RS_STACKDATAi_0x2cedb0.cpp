#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BLOW_MOVE__FP12RS_STACKDATAi
// Address: 0x2cedb0 - 0x2cef38
void ps2__SET_BLOW_MOVE__FP12RS_STACKDATAi_0x2cedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BLOW_MOVE__FP12RS_STACKDATAi_0x2cedb0");
#endif

    switch (ctx->pc) {
        case 0x2cedb0u: goto label_2cedb0;
        case 0x2cedb4u: goto label_2cedb4;
        case 0x2cedb8u: goto label_2cedb8;
        case 0x2cedbcu: goto label_2cedbc;
        case 0x2cedc0u: goto label_2cedc0;
        case 0x2cedc4u: goto label_2cedc4;
        case 0x2cedc8u: goto label_2cedc8;
        case 0x2cedccu: goto label_2cedcc;
        case 0x2cedd0u: goto label_2cedd0;
        case 0x2cedd4u: goto label_2cedd4;
        case 0x2cedd8u: goto label_2cedd8;
        case 0x2ceddcu: goto label_2ceddc;
        case 0x2cede0u: goto label_2cede0;
        case 0x2cede4u: goto label_2cede4;
        case 0x2cede8u: goto label_2cede8;
        case 0x2cedecu: goto label_2cedec;
        case 0x2cedf0u: goto label_2cedf0;
        case 0x2cedf4u: goto label_2cedf4;
        case 0x2cedf8u: goto label_2cedf8;
        case 0x2cedfcu: goto label_2cedfc;
        case 0x2cee00u: goto label_2cee00;
        case 0x2cee04u: goto label_2cee04;
        case 0x2cee08u: goto label_2cee08;
        case 0x2cee0cu: goto label_2cee0c;
        case 0x2cee10u: goto label_2cee10;
        case 0x2cee14u: goto label_2cee14;
        case 0x2cee18u: goto label_2cee18;
        case 0x2cee1cu: goto label_2cee1c;
        case 0x2cee20u: goto label_2cee20;
        case 0x2cee24u: goto label_2cee24;
        case 0x2cee28u: goto label_2cee28;
        case 0x2cee2cu: goto label_2cee2c;
        case 0x2cee30u: goto label_2cee30;
        case 0x2cee34u: goto label_2cee34;
        case 0x2cee38u: goto label_2cee38;
        case 0x2cee3cu: goto label_2cee3c;
        case 0x2cee40u: goto label_2cee40;
        case 0x2cee44u: goto label_2cee44;
        case 0x2cee48u: goto label_2cee48;
        case 0x2cee4cu: goto label_2cee4c;
        case 0x2cee50u: goto label_2cee50;
        case 0x2cee54u: goto label_2cee54;
        case 0x2cee58u: goto label_2cee58;
        case 0x2cee5cu: goto label_2cee5c;
        case 0x2cee60u: goto label_2cee60;
        case 0x2cee64u: goto label_2cee64;
        case 0x2cee68u: goto label_2cee68;
        case 0x2cee6cu: goto label_2cee6c;
        case 0x2cee70u: goto label_2cee70;
        case 0x2cee74u: goto label_2cee74;
        case 0x2cee78u: goto label_2cee78;
        case 0x2cee7cu: goto label_2cee7c;
        case 0x2cee80u: goto label_2cee80;
        case 0x2cee84u: goto label_2cee84;
        case 0x2cee88u: goto label_2cee88;
        case 0x2cee8cu: goto label_2cee8c;
        case 0x2cee90u: goto label_2cee90;
        case 0x2cee94u: goto label_2cee94;
        case 0x2cee98u: goto label_2cee98;
        case 0x2cee9cu: goto label_2cee9c;
        case 0x2ceea0u: goto label_2ceea0;
        case 0x2ceea4u: goto label_2ceea4;
        case 0x2ceea8u: goto label_2ceea8;
        case 0x2ceeacu: goto label_2ceeac;
        case 0x2ceeb0u: goto label_2ceeb0;
        case 0x2ceeb4u: goto label_2ceeb4;
        case 0x2ceeb8u: goto label_2ceeb8;
        case 0x2ceebcu: goto label_2ceebc;
        case 0x2ceec0u: goto label_2ceec0;
        case 0x2ceec4u: goto label_2ceec4;
        case 0x2ceec8u: goto label_2ceec8;
        case 0x2ceeccu: goto label_2ceecc;
        case 0x2ceed0u: goto label_2ceed0;
        case 0x2ceed4u: goto label_2ceed4;
        case 0x2ceed8u: goto label_2ceed8;
        case 0x2ceedcu: goto label_2ceedc;
        case 0x2ceee0u: goto label_2ceee0;
        case 0x2ceee4u: goto label_2ceee4;
        case 0x2ceee8u: goto label_2ceee8;
        case 0x2ceeecu: goto label_2ceeec;
        case 0x2ceef0u: goto label_2ceef0;
        case 0x2ceef4u: goto label_2ceef4;
        case 0x2ceef8u: goto label_2ceef8;
        case 0x2ceefcu: goto label_2ceefc;
        case 0x2cef00u: goto label_2cef00;
        case 0x2cef04u: goto label_2cef04;
        case 0x2cef08u: goto label_2cef08;
        case 0x2cef0cu: goto label_2cef0c;
        case 0x2cef10u: goto label_2cef10;
        case 0x2cef14u: goto label_2cef14;
        case 0x2cef18u: goto label_2cef18;
        case 0x2cef1cu: goto label_2cef1c;
        case 0x2cef20u: goto label_2cef20;
        case 0x2cef24u: goto label_2cef24;
        case 0x2cef28u: goto label_2cef28;
        case 0x2cef2cu: goto label_2cef2c;
        case 0x2cef30u: goto label_2cef30;
        case 0x2cef34u: goto label_2cef34;
        default: break;
    }

    ctx->pc = 0x2cedb0u;

label_2cedb0:
    // 0x2cedb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2cedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2cedb4:
    // 0x2cedb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cedb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2cedb8:
    // 0x2cedb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cedb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2cedbc:
    // 0x2cedbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cedbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cedc0:
    // 0x2cedc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cedc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cedc4:
    // 0x2cedc4: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x2cedc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_2cedc8:
    // 0x2cedc8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2cedcc:
    if (ctx->pc == 0x2CEDCCu) {
        ctx->pc = 0x2CEDCCu;
            // 0x2cedcc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2CEDD0u;
        goto label_2cedd0;
    }
    ctx->pc = 0x2CEDC8u;
    {
        const bool branch_taken_0x2cedc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEDC8u;
            // 0x2cedcc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cedc8) {
            ctx->pc = 0x2CEDD8u;
            goto label_2cedd8;
        }
    }
    ctx->pc = 0x2CEDD0u;
label_2cedd0:
    // 0x2cedd0: 0x10000053  b           . + 4 + (0x53 << 2)
label_2cedd4:
    if (ctx->pc == 0x2CEDD4u) {
        ctx->pc = 0x2CEDD4u;
            // 0x2cedd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDD8u;
        goto label_2cedd8;
    }
    ctx->pc = 0x2CEDD0u;
    {
        const bool branch_taken_0x2cedd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEDD0u;
            // 0x2cedd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cedd0) {
            ctx->pc = 0x2CEF20u;
            goto label_2cef20;
        }
    }
    ctx->pc = 0x2CEDD8u;
label_2cedd8:
    // 0x2cedd8: 0xc0b379c  jal         func_2CDE70
label_2ceddc:
    if (ctx->pc == 0x2CEDDCu) {
        ctx->pc = 0x2CEDDCu;
            // 0x2ceddc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2CEDE0u;
        goto label_2cede0;
    }
    ctx->pc = 0x2CEDD8u;
    SET_GPR_U32(ctx, 31, 0x2CEDE0u);
    ctx->pc = 0x2CEDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEDD8u;
            // 0x2ceddc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDE0u; }
        if (ctx->pc != 0x2CEDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDE0u; }
        if (ctx->pc != 0x2CEDE0u) { return; }
    }
    ctx->pc = 0x2CEDE0u;
label_2cede0:
    // 0x2cede0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cede0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cede4:
    // 0x2cede4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cede8:
    // 0x2cede8: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cedec:
    // 0x2cedec: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2cedecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2cedf0:
    // 0x2cedf0: 0xc0b379c  jal         func_2CDE70
label_2cedf4:
    if (ctx->pc == 0x2CEDF4u) {
        ctx->pc = 0x2CEDF4u;
            // 0x2cedf4: 0xe44007b0  swc1        $f0, 0x7B0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1968), bits); }
        ctx->pc = 0x2CEDF8u;
        goto label_2cedf8;
    }
    ctx->pc = 0x2CEDF0u;
    SET_GPR_U32(ctx, 31, 0x2CEDF8u);
    ctx->pc = 0x2CEDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEDF0u;
            // 0x2cedf4: 0xe44007b0  swc1        $f0, 0x7B0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1968), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDF8u; }
        if (ctx->pc != 0x2CEDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDF8u; }
        if (ctx->pc != 0x2CEDF8u) { return; }
    }
    ctx->pc = 0x2CEDF8u;
label_2cedf8:
    // 0x2cedf8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cedf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cedfc:
    // 0x2cedfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cedfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cee00:
    // 0x2cee00: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cee04:
    // 0x2cee04: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2cee04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2cee08:
    // 0x2cee08: 0xc0b378c  jal         func_2CDE30
label_2cee0c:
    if (ctx->pc == 0x2CEE0Cu) {
        ctx->pc = 0x2CEE0Cu;
            // 0x2cee0c: 0xe44007b4  swc1        $f0, 0x7B4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1972), bits); }
        ctx->pc = 0x2CEE10u;
        goto label_2cee10;
    }
    ctx->pc = 0x2CEE08u;
    SET_GPR_U32(ctx, 31, 0x2CEE10u);
    ctx->pc = 0x2CEE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE08u;
            // 0x2cee0c: 0xe44007b4  swc1        $f0, 0x7B4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1972), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE10u; }
        if (ctx->pc != 0x2CEE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE10u; }
        if (ctx->pc != 0x2CEE10u) { return; }
    }
    ctx->pc = 0x2CEE10u;
label_2cee10:
    // 0x2cee10: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cee10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cee14:
    // 0x2cee14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cee18:
    // 0x2cee18: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cee1c:
    // 0x2cee1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2cee1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2cee20:
    // 0x2cee20: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
label_2cee24:
    if (ctx->pc == 0x2CEE24u) {
        ctx->pc = 0x2CEE24u;
            // 0x2cee24: 0xac8207b8  sw          $v0, 0x7B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 2));
        ctx->pc = 0x2CEE28u;
        goto label_2cee28;
    }
    ctx->pc = 0x2CEE20u;
    {
        const bool branch_taken_0x2cee20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CEE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE20u;
            // 0x2cee24: 0xac8207b8  sw          $v0, 0x7B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee20) {
            ctx->pc = 0x2CEE44u;
            goto label_2cee44;
        }
    }
    ctx->pc = 0x2CEE28u;
label_2cee28:
    // 0x2cee28: 0xc0b379c  jal         func_2CDE70
label_2cee2c:
    if (ctx->pc == 0x2CEE2Cu) {
        ctx->pc = 0x2CEE2Cu;
            // 0x2cee2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE30u;
        goto label_2cee30;
    }
    ctx->pc = 0x2CEE28u;
    SET_GPR_U32(ctx, 31, 0x2CEE30u);
    ctx->pc = 0x2CEE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE28u;
            // 0x2cee2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE30u; }
        if (ctx->pc != 0x2CEE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE30u; }
        if (ctx->pc != 0x2CEE30u) { return; }
    }
    ctx->pc = 0x2CEE30u;
label_2cee30:
    // 0x2cee30: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2cee30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_2cee34:
    // 0x2cee34: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cee34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_2cee38:
    // 0x2cee38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cee38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cee3c:
    // 0x2cee3c: 0x0  nop
    ctx->pc = 0x2cee3cu;
    // NOP
label_2cee40:
    // 0x2cee40: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2cee40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2cee44:
    // 0x2cee44: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cee44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cee48:
    // 0x2cee48: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cee48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cee4c:
    // 0x2cee4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cee4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cee50:
    // 0x2cee50: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2cee50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2cee54:
    // 0x2cee54: 0x320f809  jalr        $t9
label_2cee58:
    if (ctx->pc == 0x2CEE58u) {
        ctx->pc = 0x2CEE58u;
            // 0x2cee58: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2CEE5Cu;
        goto label_2cee5c;
    }
    ctx->pc = 0x2CEE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CEE5Cu);
        ctx->pc = 0x2CEE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE54u;
            // 0x2cee58: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CEE5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE5Cu; }
            if (ctx->pc != 0x2CEE5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CEE5Cu;
label_2cee5c:
    // 0x2cee5c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2cee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cee60:
    // 0x2cee60: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2cee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2cee64:
    // 0x2cee64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2cee64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2cee68:
    // 0x2cee68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cee68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cee6c:
    // 0x2cee6c: 0x0  nop
    ctx->pc = 0x2cee6cu;
    // NOP
label_2cee70:
    // 0x2cee70: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2cee70u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_2cee74:
    // 0x2cee74: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2cee74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cee78:
    // 0x2cee78: 0x0  nop
    ctx->pc = 0x2cee78u;
    // NOP
label_2cee7c:
    // 0x2cee7c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2cee80:
    if (ctx->pc == 0x2CEE80u) {
        ctx->pc = 0x2CEE80u;
            // 0x2cee80: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x2CEE84u;
        goto label_2cee84;
    }
    ctx->pc = 0x2CEE7Cu;
    {
        const bool branch_taken_0x2cee7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE7Cu;
            // 0x2cee80: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee7c) {
            ctx->pc = 0x2CEE9Cu;
            goto label_2cee9c;
        }
    }
    ctx->pc = 0x2CEE84u;
label_2cee84:
    // 0x2cee84: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2cee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2cee88:
    // 0x2cee88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2cee88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2cee8c:
    // 0x2cee8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cee8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cee90:
    // 0x2cee90: 0x0  nop
    ctx->pc = 0x2cee90u;
    // NOP
label_2cee94:
    // 0x2cee94: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2cee94u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2cee98:
    // 0x2cee98: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x2cee98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_2cee9c:
    // 0x2cee9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2cee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2ceea0:
    // 0x2ceea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ceea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceea4:
    // 0x2ceea4: 0x0  nop
    ctx->pc = 0x2ceea4u;
    // NOP
label_2ceea8:
    // 0x2ceea8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ceea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ceeac:
    // 0x2ceeac: 0x0  nop
    ctx->pc = 0x2ceeacu;
    // NOP
label_2ceeb0:
    // 0x2ceeb0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2ceeb4:
    if (ctx->pc == 0x2CEEB4u) {
        ctx->pc = 0x2CEEB8u;
        goto label_2ceeb8;
    }
    ctx->pc = 0x2CEEB0u;
    {
        const bool branch_taken_0x2ceeb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ceeb0) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CEEB8u;
label_2ceeb8:
    // 0x2ceeb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2ceeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2ceebc:
    // 0x2ceebc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2ceebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2ceec0:
    // 0x2ceec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ceec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ceec4:
    // 0x2ceec4: 0x0  nop
    ctx->pc = 0x2ceec4u;
    // NOP
label_2ceec8:
    // 0x2ceec8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2ceec8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2ceecc:
    // 0x2ceecc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2ceeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2ceed0:
    // 0x2ceed0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2ceed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ceed4:
    // 0x2ceed4: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x2ceed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
label_2ceed8:
    // 0x2ceed8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ceed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2ceedc:
    // 0x2ceedc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ceedcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ceee0:
    // 0x2ceee0: 0xc041c7a  jal         func_1071E8
label_2ceee4:
    if (ctx->pc == 0x2CEEE4u) {
        ctx->pc = 0x2CEEE4u;
            // 0x2ceee4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x2CEEE8u;
        goto label_2ceee8;
    }
    ctx->pc = 0x2CEEE0u;
    SET_GPR_U32(ctx, 31, 0x2CEEE8u);
    ctx->pc = 0x2CEEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEEE0u;
            // 0x2ceee4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEE8u; }
        if (ctx->pc != 0x2CEEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEE8u; }
        if (ctx->pc != 0x2CEEE8u) { return; }
    }
    ctx->pc = 0x2CEEE8u;
label_2ceee8:
    // 0x2ceee8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ceee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2ceeec:
    // 0x2ceeec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ceeecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ceef0:
    // 0x2ceef0: 0xc041cf6  jal         func_1073D8
label_2ceef4:
    if (ctx->pc == 0x2CEEF4u) {
        ctx->pc = 0x2CEEF4u;
            // 0x2ceef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEEF8u;
        goto label_2ceef8;
    }
    ctx->pc = 0x2CEEF0u;
    SET_GPR_U32(ctx, 31, 0x2CEEF8u);
    ctx->pc = 0x2CEEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEEF0u;
            // 0x2ceef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEF8u; }
        if (ctx->pc != 0x2CEEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEF8u; }
        if (ctx->pc != 0x2CEEF8u) { return; }
    }
    ctx->pc = 0x2CEEF8u;
label_2ceef8:
    // 0x2ceef8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2ceef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ceefc:
    // 0x2ceefc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ceefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cef00:
    // 0x2cef00: 0xc041bb0  jal         func_106EC0
label_2cef04:
    if (ctx->pc == 0x2CEF04u) {
        ctx->pc = 0x2CEF04u;
            // 0x2cef04: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF08u;
        goto label_2cef08;
    }
    ctx->pc = 0x2CEF00u;
    SET_GPR_U32(ctx, 31, 0x2CEF08u);
    ctx->pc = 0x2CEF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF00u;
            // 0x2cef04: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF08u; }
        if (ctx->pc != 0x2CEF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF08u; }
        if (ctx->pc != 0x2CEF08u) { return; }
    }
    ctx->pc = 0x2CEF08u;
label_2cef08:
    // 0x2cef08: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cef08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cef0c:
    // 0x2cef0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2cef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2cef10:
    // 0x2cef10: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cef14:
    // 0x2cef14: 0xc041c5c  jal         func_107170
label_2cef18:
    if (ctx->pc == 0x2CEF18u) {
        ctx->pc = 0x2CEF18u;
            // 0x2cef18: 0x244407a0  addiu       $a0, $v0, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1952));
        ctx->pc = 0x2CEF1Cu;
        goto label_2cef1c;
    }
    ctx->pc = 0x2CEF14u;
    SET_GPR_U32(ctx, 31, 0x2CEF1Cu);
    ctx->pc = 0x2CEF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF14u;
            // 0x2cef18: 0x244407a0  addiu       $a0, $v0, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF1Cu; }
        if (ctx->pc != 0x2CEF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF1Cu; }
        if (ctx->pc != 0x2CEF1Cu) { return; }
    }
    ctx->pc = 0x2CEF1Cu;
label_2cef1c:
    // 0x2cef1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cef20:
    // 0x2cef20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cef20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cef24:
    // 0x2cef24: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cef28:
    // 0x2cef28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cef28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cef2c:
    // 0x2cef2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cef2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cef30:
    // 0x2cef30: 0x3e00008  jr          $ra
label_2cef34:
    if (ctx->pc == 0x2CEF34u) {
        ctx->pc = 0x2CEF34u;
            // 0x2cef34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2CEF38u;
        goto label_fallthrough_0x2cef30;
    }
    ctx->pc = 0x2CEF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF30u;
            // 0x2cef34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cef30:
    ctx->pc = 0x2CEF38u;
}
