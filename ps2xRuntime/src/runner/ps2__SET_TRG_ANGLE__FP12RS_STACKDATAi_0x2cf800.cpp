#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_TRG_ANGLE__FP12RS_STACKDATAi
// Address: 0x2cf800 - 0x2cf93c
void ps2__SET_TRG_ANGLE__FP12RS_STACKDATAi_0x2cf800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_TRG_ANGLE__FP12RS_STACKDATAi_0x2cf800");
#endif

    switch (ctx->pc) {
        case 0x2cf800u: goto label_2cf800;
        case 0x2cf804u: goto label_2cf804;
        case 0x2cf808u: goto label_2cf808;
        case 0x2cf80cu: goto label_2cf80c;
        case 0x2cf810u: goto label_2cf810;
        case 0x2cf814u: goto label_2cf814;
        case 0x2cf818u: goto label_2cf818;
        case 0x2cf81cu: goto label_2cf81c;
        case 0x2cf820u: goto label_2cf820;
        case 0x2cf824u: goto label_2cf824;
        case 0x2cf828u: goto label_2cf828;
        case 0x2cf82cu: goto label_2cf82c;
        case 0x2cf830u: goto label_2cf830;
        case 0x2cf834u: goto label_2cf834;
        case 0x2cf838u: goto label_2cf838;
        case 0x2cf83cu: goto label_2cf83c;
        case 0x2cf840u: goto label_2cf840;
        case 0x2cf844u: goto label_2cf844;
        case 0x2cf848u: goto label_2cf848;
        case 0x2cf84cu: goto label_2cf84c;
        case 0x2cf850u: goto label_2cf850;
        case 0x2cf854u: goto label_2cf854;
        case 0x2cf858u: goto label_2cf858;
        case 0x2cf85cu: goto label_2cf85c;
        case 0x2cf860u: goto label_2cf860;
        case 0x2cf864u: goto label_2cf864;
        case 0x2cf868u: goto label_2cf868;
        case 0x2cf86cu: goto label_2cf86c;
        case 0x2cf870u: goto label_2cf870;
        case 0x2cf874u: goto label_2cf874;
        case 0x2cf878u: goto label_2cf878;
        case 0x2cf87cu: goto label_2cf87c;
        case 0x2cf880u: goto label_2cf880;
        case 0x2cf884u: goto label_2cf884;
        case 0x2cf888u: goto label_2cf888;
        case 0x2cf88cu: goto label_2cf88c;
        case 0x2cf890u: goto label_2cf890;
        case 0x2cf894u: goto label_2cf894;
        case 0x2cf898u: goto label_2cf898;
        case 0x2cf89cu: goto label_2cf89c;
        case 0x2cf8a0u: goto label_2cf8a0;
        case 0x2cf8a4u: goto label_2cf8a4;
        case 0x2cf8a8u: goto label_2cf8a8;
        case 0x2cf8acu: goto label_2cf8ac;
        case 0x2cf8b0u: goto label_2cf8b0;
        case 0x2cf8b4u: goto label_2cf8b4;
        case 0x2cf8b8u: goto label_2cf8b8;
        case 0x2cf8bcu: goto label_2cf8bc;
        case 0x2cf8c0u: goto label_2cf8c0;
        case 0x2cf8c4u: goto label_2cf8c4;
        case 0x2cf8c8u: goto label_2cf8c8;
        case 0x2cf8ccu: goto label_2cf8cc;
        case 0x2cf8d0u: goto label_2cf8d0;
        case 0x2cf8d4u: goto label_2cf8d4;
        case 0x2cf8d8u: goto label_2cf8d8;
        case 0x2cf8dcu: goto label_2cf8dc;
        case 0x2cf8e0u: goto label_2cf8e0;
        case 0x2cf8e4u: goto label_2cf8e4;
        case 0x2cf8e8u: goto label_2cf8e8;
        case 0x2cf8ecu: goto label_2cf8ec;
        case 0x2cf8f0u: goto label_2cf8f0;
        case 0x2cf8f4u: goto label_2cf8f4;
        case 0x2cf8f8u: goto label_2cf8f8;
        case 0x2cf8fcu: goto label_2cf8fc;
        case 0x2cf900u: goto label_2cf900;
        case 0x2cf904u: goto label_2cf904;
        case 0x2cf908u: goto label_2cf908;
        case 0x2cf90cu: goto label_2cf90c;
        case 0x2cf910u: goto label_2cf910;
        case 0x2cf914u: goto label_2cf914;
        case 0x2cf918u: goto label_2cf918;
        case 0x2cf91cu: goto label_2cf91c;
        case 0x2cf920u: goto label_2cf920;
        case 0x2cf924u: goto label_2cf924;
        case 0x2cf928u: goto label_2cf928;
        case 0x2cf92cu: goto label_2cf92c;
        case 0x2cf930u: goto label_2cf930;
        case 0x2cf934u: goto label_2cf934;
        case 0x2cf938u: goto label_2cf938;
        default: break;
    }

    ctx->pc = 0x2cf800u;

label_2cf800:
    // 0x2cf800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cf800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2cf804:
    // 0x2cf804: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cf804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cf808:
    // 0x2cf808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cf808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cf80c:
    // 0x2cf80c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cf80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cf810:
    // 0x2cf810: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2cf810u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2cf814:
    // 0x2cf814: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2cf818:
    if (ctx->pc == 0x2CF818u) {
        ctx->pc = 0x2CF818u;
            // 0x2cf818: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2CF81Cu;
        goto label_2cf81c;
    }
    ctx->pc = 0x2CF814u;
    {
        const bool branch_taken_0x2cf814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF814u;
            // 0x2cf818: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf814) {
            ctx->pc = 0x2CF824u;
            goto label_2cf824;
        }
    }
    ctx->pc = 0x2CF81Cu;
label_2cf81c:
    // 0x2cf81c: 0x10000041  b           . + 4 + (0x41 << 2)
label_2cf820:
    if (ctx->pc == 0x2CF820u) {
        ctx->pc = 0x2CF820u;
            // 0x2cf820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF824u;
        goto label_2cf824;
    }
    ctx->pc = 0x2CF81Cu;
    {
        const bool branch_taken_0x2cf81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF81Cu;
            // 0x2cf820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf81c) {
            ctx->pc = 0x2CF924u;
            goto label_2cf924;
        }
    }
    ctx->pc = 0x2CF824u;
label_2cf824:
    // 0x2cf824: 0xc0b379c  jal         func_2CDE70
label_2cf828:
    if (ctx->pc == 0x2CF828u) {
        ctx->pc = 0x2CF828u;
            // 0x2cf828: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2CF82Cu;
        goto label_2cf82c;
    }
    ctx->pc = 0x2CF824u;
    SET_GPR_U32(ctx, 31, 0x2CF82Cu);
    ctx->pc = 0x2CF828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF824u;
            // 0x2cf828: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF82Cu; }
        if (ctx->pc != 0x2CF82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF82Cu; }
        if (ctx->pc != 0x2CF82Cu) { return; }
    }
    ctx->pc = 0x2CF82Cu;
label_2cf82c:
    // 0x2cf82c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2cf82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2cf830:
    // 0x2cf830: 0xc0b379c  jal         func_2CDE70
label_2cf834:
    if (ctx->pc == 0x2CF834u) {
        ctx->pc = 0x2CF834u;
            // 0x2cf834: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2CF838u;
        goto label_2cf838;
    }
    ctx->pc = 0x2CF830u;
    SET_GPR_U32(ctx, 31, 0x2CF838u);
    ctx->pc = 0x2CF834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF830u;
            // 0x2cf834: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF838u; }
        if (ctx->pc != 0x2CF838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF838u; }
        if (ctx->pc != 0x2CF838u) { return; }
    }
    ctx->pc = 0x2CF838u;
label_2cf838:
    // 0x2cf838: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cf83c:
    // 0x2cf83c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cf83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cf840:
    // 0x2cf840: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cf844:
    // 0x2cf844: 0x84650770  lh          $a1, 0x770($v1)
    ctx->pc = 0x2cf844u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1904)));
label_2cf848:
    // 0x2cf848: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_2cf84c:
    if (ctx->pc == 0x2CF84Cu) {
        ctx->pc = 0x2CF84Cu;
            // 0x2cf84c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2CF850u;
        goto label_2cf850;
    }
    ctx->pc = 0x2CF848u;
    {
        const bool branch_taken_0x2cf848 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CF84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF848u;
            // 0x2cf84c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf848) {
            ctx->pc = 0x2CF858u;
            goto label_2cf858;
        }
    }
    ctx->pc = 0x2CF850u;
label_2cf850:
    // 0x2cf850: 0x10000034  b           . + 4 + (0x34 << 2)
label_2cf854:
    if (ctx->pc == 0x2CF854u) {
        ctx->pc = 0x2CF854u;
            // 0x2cf854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CF858u;
        goto label_2cf858;
    }
    ctx->pc = 0x2CF850u;
    {
        const bool branch_taken_0x2cf850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF850u;
            // 0x2cf854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf850) {
            ctx->pc = 0x2CF924u;
            goto label_2cf924;
        }
    }
    ctx->pc = 0x2CF858u;
label_2cf858:
    // 0x2cf858: 0xc0a0ed8  jal         func_283B60
label_2cf85c:
    if (ctx->pc == 0x2CF85Cu) {
        ctx->pc = 0x2CF85Cu;
            // 0x2cf85c: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->pc = 0x2CF860u;
        goto label_2cf860;
    }
    ctx->pc = 0x2CF858u;
    SET_GPR_U32(ctx, 31, 0x2CF860u);
    ctx->pc = 0x2CF85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF858u;
            // 0x2cf85c: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF860u; }
        if (ctx->pc != 0x2CF860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF860u; }
        if (ctx->pc != 0x2CF860u) { return; }
    }
    ctx->pc = 0x2CF860u;
label_2cf860:
    // 0x2cf860: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2cf864:
    if (ctx->pc == 0x2CF864u) {
        ctx->pc = 0x2CF868u;
        goto label_2cf868;
    }
    ctx->pc = 0x2CF860u;
    {
        const bool branch_taken_0x2cf860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf860) {
            ctx->pc = 0x2CF920u;
            goto label_2cf920;
        }
    }
    ctx->pc = 0x2CF868u;
label_2cf868:
    // 0x2cf868: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x2cf868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cf86c:
    // 0x2cf86c: 0x4615a880  add.s       $f2, $f21, $f21
    ctx->pc = 0x2cf86cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_2cf870:
    // 0x2cf870: 0xc44012f4  lwc1        $f0, 0x12F4($v0)
    ctx->pc = 0x2cf870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cf874:
    // 0x2cf874: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2cf874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2cf878:
    // 0x2cf878: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cf878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cf87c:
    // 0x2cf87c: 0x0  nop
    ctx->pc = 0x2cf87cu;
    // NOP
label_2cf880:
    // 0x2cf880: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_2cf884:
    if (ctx->pc == 0x2CF884u) {
        ctx->pc = 0x2CF884u;
            // 0x2cf884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF888u;
        goto label_2cf888;
    }
    ctx->pc = 0x2CF880u;
    {
        const bool branch_taken_0x2cf880 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF880u;
            // 0x2cf884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf880) {
            ctx->pc = 0x2CF920u;
            goto label_2cf920;
        }
    }
    ctx->pc = 0x2CF888u;
label_2cf888:
    // 0x2cf888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf88c:
    // 0x2cf88c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cf88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf890:
    // 0x2cf890: 0xc05d420  jal         func_175080
label_2cf894:
    if (ctx->pc == 0x2CF894u) {
        ctx->pc = 0x2CF894u;
            // 0x2cf894: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CF898u;
        goto label_2cf898;
    }
    ctx->pc = 0x2CF890u;
    SET_GPR_U32(ctx, 31, 0x2CF898u);
    ctx->pc = 0x2CF894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF890u;
            // 0x2cf894: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF898u; }
        if (ctx->pc != 0x2CF898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF898u; }
        if (ctx->pc != 0x2CF898u) { return; }
    }
    ctx->pc = 0x2CF898u;
label_2cf898:
    // 0x2cf898: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cf89c:
    // 0x2cf89c: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cf8a0:
    // 0x2cf8a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cf8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf8a4:
    // 0x2cf8a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2cf8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2cf8a8:
    // 0x2cf8a8: 0x320f809  jalr        $t9
label_2cf8ac:
    if (ctx->pc == 0x2CF8ACu) {
        ctx->pc = 0x2CF8ACu;
            // 0x2cf8ac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2CF8B0u;
        goto label_2cf8b0;
    }
    ctx->pc = 0x2CF8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CF8B0u);
        ctx->pc = 0x2CF8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF8A8u;
            // 0x2cf8ac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CF8B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CF8B0u; }
            if (ctx->pc != 0x2CF8B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CF8B0u;
label_2cf8b0:
    // 0x2cf8b0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2cf8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cf8b4:
    // 0x2cf8b4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2cf8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2cf8b8:
    // 0x2cf8b8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2cf8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cf8bc:
    // 0x2cf8bc: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x2cf8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2cf8c0:
    // 0x2cf8c0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2cf8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cf8c4:
    // 0x2cf8c4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cf8c8:
    // 0x2cf8c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2cf8c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2cf8cc:
    // 0x2cf8cc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2cf8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2cf8d0:
    // 0x2cf8d0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2cf8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cf8d4:
    // 0x2cf8d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cf8d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cf8d8:
    // 0x2cf8d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2cf8dc:
    // 0x2cf8dc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cf8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cf8e0:
    // 0x2cf8e0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2cf8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cf8e4:
    // 0x2cf8e4: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x2cf8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2cf8e8:
    // 0x2cf8e8: 0xc047c76  jal         func_11F1D8
label_2cf8ec:
    if (ctx->pc == 0x2CF8ECu) {
        ctx->pc = 0x2CF8ECu;
            // 0x2cf8ec: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2CF8F0u;
        goto label_2cf8f0;
    }
    ctx->pc = 0x2CF8E8u;
    SET_GPR_U32(ctx, 31, 0x2CF8F0u);
    ctx->pc = 0x2CF8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF8E8u;
            // 0x2cf8ec: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF8F0u; }
        if (ctx->pc != 0x2CF8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF8F0u; }
        if (ctx->pc != 0x2CF8F0u) { return; }
    }
    ctx->pc = 0x2CF8F0u;
label_2cf8f0:
    // 0x2cf8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf8f4:
    // 0x2cf8f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2cf8f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2cf8f8:
    // 0x2cf8f8: 0xc072408  jal         func_1C9020
label_2cf8fc:
    if (ctx->pc == 0x2CF8FCu) {
        ctx->pc = 0x2CF8FCu;
            // 0x2cf8fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2CF900u;
        goto label_2cf900;
    }
    ctx->pc = 0x2CF8F8u;
    SET_GPR_U32(ctx, 31, 0x2CF900u);
    ctx->pc = 0x2CF8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF8F8u;
            // 0x2cf8fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF900u; }
        if (ctx->pc != 0x2CF900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF900u; }
        if (ctx->pc != 0x2CF900u) { return; }
    }
    ctx->pc = 0x2CF900u;
label_2cf900:
    // 0x2cf900: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cf904:
    // 0x2cf904: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cf908:
    // 0x2cf908: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cf908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cf90c:
    // 0x2cf90c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2cf90cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2cf910:
    // 0x2cf910: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cf910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf914:
    // 0x2cf914: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2cf914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2cf918:
    // 0x2cf918: 0x320f809  jalr        $t9
label_2cf91c:
    if (ctx->pc == 0x2CF91Cu) {
        ctx->pc = 0x2CF91Cu;
            // 0x2cf91c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2CF920u;
        goto label_2cf920;
    }
    ctx->pc = 0x2CF918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CF920u);
        ctx->pc = 0x2CF91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF918u;
            // 0x2cf91c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CF920u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CF920u; }
            if (ctx->pc != 0x2CF920u) { return; }
        }
        }
    }
    ctx->pc = 0x2CF920u;
label_2cf920:
    // 0x2cf920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf924:
    // 0x2cf924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cf924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf928:
    // 0x2cf928: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2cf928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cf92c:
    // 0x2cf92c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf930:
    // 0x2cf930: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cf930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cf934:
    // 0x2cf934: 0x3e00008  jr          $ra
label_2cf938:
    if (ctx->pc == 0x2CF938u) {
        ctx->pc = 0x2CF938u;
            // 0x2cf938: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2CF93Cu;
        goto label_fallthrough_0x2cf934;
    }
    ctx->pc = 0x2CF934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF934u;
            // 0x2cf938: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cf934:
    ctx->pc = 0x2CF93Cu;
}
