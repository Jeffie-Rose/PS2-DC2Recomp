#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateChangeFrame__FP10mgLoadDataP8mgCFrame
// Address: 0x178010 - 0x178164
void CreateChangeFrame__FP10mgLoadDataP8mgCFrame_0x178010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateChangeFrame__FP10mgLoadDataP8mgCFrame_0x178010");
#endif

    switch (ctx->pc) {
        case 0x178010u: goto label_178010;
        case 0x178014u: goto label_178014;
        case 0x178018u: goto label_178018;
        case 0x17801cu: goto label_17801c;
        case 0x178020u: goto label_178020;
        case 0x178024u: goto label_178024;
        case 0x178028u: goto label_178028;
        case 0x17802cu: goto label_17802c;
        case 0x178030u: goto label_178030;
        case 0x178034u: goto label_178034;
        case 0x178038u: goto label_178038;
        case 0x17803cu: goto label_17803c;
        case 0x178040u: goto label_178040;
        case 0x178044u: goto label_178044;
        case 0x178048u: goto label_178048;
        case 0x17804cu: goto label_17804c;
        case 0x178050u: goto label_178050;
        case 0x178054u: goto label_178054;
        case 0x178058u: goto label_178058;
        case 0x17805cu: goto label_17805c;
        case 0x178060u: goto label_178060;
        case 0x178064u: goto label_178064;
        case 0x178068u: goto label_178068;
        case 0x17806cu: goto label_17806c;
        case 0x178070u: goto label_178070;
        case 0x178074u: goto label_178074;
        case 0x178078u: goto label_178078;
        case 0x17807cu: goto label_17807c;
        case 0x178080u: goto label_178080;
        case 0x178084u: goto label_178084;
        case 0x178088u: goto label_178088;
        case 0x17808cu: goto label_17808c;
        case 0x178090u: goto label_178090;
        case 0x178094u: goto label_178094;
        case 0x178098u: goto label_178098;
        case 0x17809cu: goto label_17809c;
        case 0x1780a0u: goto label_1780a0;
        case 0x1780a4u: goto label_1780a4;
        case 0x1780a8u: goto label_1780a8;
        case 0x1780acu: goto label_1780ac;
        case 0x1780b0u: goto label_1780b0;
        case 0x1780b4u: goto label_1780b4;
        case 0x1780b8u: goto label_1780b8;
        case 0x1780bcu: goto label_1780bc;
        case 0x1780c0u: goto label_1780c0;
        case 0x1780c4u: goto label_1780c4;
        case 0x1780c8u: goto label_1780c8;
        case 0x1780ccu: goto label_1780cc;
        case 0x1780d0u: goto label_1780d0;
        case 0x1780d4u: goto label_1780d4;
        case 0x1780d8u: goto label_1780d8;
        case 0x1780dcu: goto label_1780dc;
        case 0x1780e0u: goto label_1780e0;
        case 0x1780e4u: goto label_1780e4;
        case 0x1780e8u: goto label_1780e8;
        case 0x1780ecu: goto label_1780ec;
        case 0x1780f0u: goto label_1780f0;
        case 0x1780f4u: goto label_1780f4;
        case 0x1780f8u: goto label_1780f8;
        case 0x1780fcu: goto label_1780fc;
        case 0x178100u: goto label_178100;
        case 0x178104u: goto label_178104;
        case 0x178108u: goto label_178108;
        case 0x17810cu: goto label_17810c;
        case 0x178110u: goto label_178110;
        case 0x178114u: goto label_178114;
        case 0x178118u: goto label_178118;
        case 0x17811cu: goto label_17811c;
        case 0x178120u: goto label_178120;
        case 0x178124u: goto label_178124;
        case 0x178128u: goto label_178128;
        case 0x17812cu: goto label_17812c;
        case 0x178130u: goto label_178130;
        case 0x178134u: goto label_178134;
        case 0x178138u: goto label_178138;
        case 0x17813cu: goto label_17813c;
        case 0x178140u: goto label_178140;
        case 0x178144u: goto label_178144;
        case 0x178148u: goto label_178148;
        case 0x17814cu: goto label_17814c;
        case 0x178150u: goto label_178150;
        case 0x178154u: goto label_178154;
        case 0x178158u: goto label_178158;
        case 0x17815cu: goto label_17815c;
        case 0x178160u: goto label_178160;
        default: break;
    }

    ctx->pc = 0x178010u;

label_178010:
    // 0x178010: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x178010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_178014:
    // 0x178014: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x178014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_178018:
    // 0x178018: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x178018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17801c:
    // 0x17801c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_178020:
    // 0x178020: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x178020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_178024:
    // 0x178024: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x178024u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178028:
    // 0x178028: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x178028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17802c:
    // 0x17802c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17802cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178030:
    // 0x178030: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x178030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_178034:
    // 0x178034: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_178038:
    // 0x178038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17803c:
    // 0x17803c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178040:
    // 0x178040: 0xc04cb98  jal         func_132E60
label_178044:
    if (ctx->pc == 0x178044u) {
        ctx->pc = 0x178044u;
            // 0x178044: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x178048u;
        goto label_178048;
    }
    ctx->pc = 0x178040u;
    SET_GPR_U32(ctx, 31, 0x178048u);
    ctx->pc = 0x178044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178040u;
            // 0x178044: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E60u;
    if (runtime->hasFunction(0x132E60u)) {
        auto targetFn = runtime->lookupFunction(0x132E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178048u; }
        if (ctx->pc != 0x178048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10mgLoadData_0x132e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178048u; }
        if (ctx->pc != 0x178048u) { return; }
    }
    ctx->pc = 0x178048u;
label_178048:
    // 0x178048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17804c:
    // 0x17804c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_178050:
    if (ctx->pc == 0x178050u) {
        ctx->pc = 0x178050u;
            // 0x178050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178054u;
        goto label_178054;
    }
    ctx->pc = 0x17804Cu;
    {
        const bool branch_taken_0x17804c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x178050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17804Cu;
            // 0x178050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17804c) {
            ctx->pc = 0x17805Cu;
            goto label_17805c;
        }
    }
    ctx->pc = 0x178054u;
label_178054:
    // 0x178054: 0x10000038  b           . + 4 + (0x38 << 2)
label_178058:
    if (ctx->pc == 0x178058u) {
        ctx->pc = 0x178058u;
            // 0x178058: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x17805Cu;
        goto label_17805c;
    }
    ctx->pc = 0x178054u;
    {
        const bool branch_taken_0x178054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178054u;
            // 0x178058: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178054) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x17805Cu;
label_17805c:
    // 0x17805c: 0x8efe000c  lw          $fp, 0xC($s7)
    ctx->pc = 0x17805cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_178060:
    // 0x178060: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x178060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178064:
    // 0x178064: 0x3d52021  addu        $a0, $fp, $s5
    ctx->pc = 0x178064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
label_178068:
    // 0x178068: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17806c:
    // 0x17806c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178070:
    // 0x178070: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_178074:
    if (ctx->pc == 0x178074u) {
        ctx->pc = 0x178078u;
        goto label_178078;
    }
    ctx->pc = 0x178070u;
    {
        const bool branch_taken_0x178070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x178070) {
            ctx->pc = 0x178130u;
            goto label_178130;
        }
    }
    ctx->pc = 0x178078u;
label_178078:
    // 0x178078: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x178078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17807c:
    // 0x17807c: 0x24910004  addiu       $s1, $a0, 0x4
    ctx->pc = 0x17807cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_178080:
    // 0x178080: 0xc04ddb4  jal         func_1376D0
label_178084:
    if (ctx->pc == 0x178084u) {
        ctx->pc = 0x178084u;
            // 0x178084: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178088u;
        goto label_178088;
    }
    ctx->pc = 0x178080u;
    SET_GPR_U32(ctx, 31, 0x178088u);
    ctx->pc = 0x178084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178080u;
            // 0x178084: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178088u; }
        if (ctx->pc != 0x178088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178088u; }
        if (ctx->pc != 0x178088u) { return; }
    }
    ctx->pc = 0x178088u;
label_178088:
    // 0x178088: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_17808c:
    if (ctx->pc == 0x17808Cu) {
        ctx->pc = 0x178090u;
        goto label_178090;
    }
    ctx->pc = 0x178088u;
    {
        const bool branch_taken_0x178088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178088) {
            ctx->pc = 0x178124u;
            goto label_178124;
        }
    }
    ctx->pc = 0x178090u;
label_178090:
    // 0x178090: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_178094:
    // 0x178094: 0xc04ddb4  jal         func_1376D0
label_178098:
    if (ctx->pc == 0x178098u) {
        ctx->pc = 0x178098u;
            // 0x178098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17809Cu;
        goto label_17809c;
    }
    ctx->pc = 0x178094u;
    SET_GPR_U32(ctx, 31, 0x17809Cu);
    ctx->pc = 0x178098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178094u;
            // 0x178098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17809Cu; }
        if (ctx->pc != 0x17809Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17809Cu; }
        if (ctx->pc != 0x17809Cu) { return; }
    }
    ctx->pc = 0x17809Cu;
label_17809c:
    // 0x17809c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1780a0:
    if (ctx->pc == 0x1780A0u) {
        ctx->pc = 0x1780A4u;
        goto label_1780a4;
    }
    ctx->pc = 0x17809Cu;
    {
        const bool branch_taken_0x17809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17809c) {
            ctx->pc = 0x178124u;
            goto label_178124;
        }
    }
    ctx->pc = 0x1780A4u;
label_1780a4:
    // 0x1780a4: 0x8c5200f8  lw          $s2, 0xF8($v0)
    ctx->pc = 0x1780a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_1780a8:
    // 0x1780a8: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
label_1780ac:
    if (ctx->pc == 0x1780ACu) {
        ctx->pc = 0x1780B0u;
        goto label_1780b0;
    }
    ctx->pc = 0x1780A8u;
    {
        const bool branch_taken_0x1780a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1780a8) {
            ctx->pc = 0x178124u;
            goto label_178124;
        }
    }
    ctx->pc = 0x1780B0u;
label_1780b0:
    // 0x1780b0: 0x8e59001c  lw          $t9, 0x1C($s2)
    ctx->pc = 0x1780b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1780b4:
    // 0x1780b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1780b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1780b8:
    // 0x1780b8: 0x320f809  jalr        $t9
label_1780bc:
    if (ctx->pc == 0x1780BCu) {
        ctx->pc = 0x1780BCu;
            // 0x1780bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1780C0u;
        goto label_1780c0;
    }
    ctx->pc = 0x1780B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1780C0u);
        ctx->pc = 0x1780BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1780B8u;
            // 0x1780bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1780C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1780C0u; }
            if (ctx->pc != 0x1780C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1780C0u;
label_1780c0:
    // 0x1780c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1780c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1780c4:
    // 0x1780c4: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_1780c8:
    if (ctx->pc == 0x1780C8u) {
        ctx->pc = 0x1780CCu;
        goto label_1780cc;
    }
    ctx->pc = 0x1780C4u;
    {
        const bool branch_taken_0x1780c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1780c4) {
            ctx->pc = 0x178124u;
            goto label_178124;
        }
    }
    ctx->pc = 0x1780CCu;
label_1780cc:
    // 0x1780cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1780ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1780d0:
    // 0x1780d0: 0xc04ddd4  jal         func_137750
label_1780d4:
    if (ctx->pc == 0x1780D4u) {
        ctx->pc = 0x1780D4u;
            // 0x1780d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1780D8u;
        goto label_1780d8;
    }
    ctx->pc = 0x1780D0u;
    SET_GPR_U32(ctx, 31, 0x1780D8u);
    ctx->pc = 0x1780D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1780D0u;
            // 0x1780d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137750u;
    if (runtime->hasFunction(0x137750u)) {
        auto targetFn = runtime->lookupFunction(0x137750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780D8u; }
        if (ctx->pc != 0x1780D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrameID__8mgCFrameFPc_0x137750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780D8u; }
        if (ctx->pc != 0x1780D8u) { return; }
    }
    ctx->pc = 0x1780D8u;
label_1780d8:
    // 0x1780d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1780d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1780dc:
    // 0x1780dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1780dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1780e0:
    // 0x1780e0: 0xc04ddd4  jal         func_137750
label_1780e4:
    if (ctx->pc == 0x1780E4u) {
        ctx->pc = 0x1780E4u;
            // 0x1780e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1780E8u;
        goto label_1780e8;
    }
    ctx->pc = 0x1780E0u;
    SET_GPR_U32(ctx, 31, 0x1780E8u);
    ctx->pc = 0x1780E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1780E0u;
            // 0x1780e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137750u;
    if (runtime->hasFunction(0x137750u)) {
        auto targetFn = runtime->lookupFunction(0x137750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780E8u; }
        if (ctx->pc != 0x1780E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrameID__8mgCFrameFPc_0x137750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1780E8u; }
        if (ctx->pc != 0x1780E8u) { return; }
    }
    ctx->pc = 0x1780E8u;
label_1780e8:
    // 0x1780e8: 0x8ee40018  lw          $a0, 0x18($s7)
    ctx->pc = 0x1780e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_1780ec:
    // 0x1780ec: 0x8ed4006c  lw          $s4, 0x6C($s6)
    ctx->pc = 0x1780ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_1780f0:
    // 0x1780f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1780f4:
    if (ctx->pc == 0x1780F4u) {
        ctx->pc = 0x1780F4u;
            // 0x1780f4: 0x8ed30068  lw          $s3, 0x68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
        ctx->pc = 0x1780F8u;
        goto label_1780f8;
    }
    ctx->pc = 0x1780F0u;
    {
        const bool branch_taken_0x1780f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1780F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1780F0u;
            // 0x1780f4: 0x8ed30068  lw          $s3, 0x68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780f0) {
            ctx->pc = 0x178110u;
            goto label_178110;
        }
    }
    ctx->pc = 0x1780F8u;
label_1780f8:
    // 0x1780f8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1780f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1780fc:
    // 0x1780fc: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1780fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_178100:
    // 0x178100: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x178100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_178104:
    // 0x178104: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x178104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_178108:
    // 0x178108: 0xc049c18  jal         func_127060
label_17810c:
    if (ctx->pc == 0x17810Cu) {
        ctx->pc = 0x17810Cu;
            // 0x17810c: 0x2832021  addu        $a0, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x178110u;
        goto label_178110;
    }
    ctx->pc = 0x178108u;
    SET_GPR_U32(ctx, 31, 0x178110u);
    ctx->pc = 0x17810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178108u;
            // 0x17810c: 0x2832021  addu        $a0, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178110u; }
        if (ctx->pc != 0x178110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178110u; }
        if (ctx->pc != 0x178110u) { return; }
    }
    ctx->pc = 0x178110u;
label_178110:
    // 0x178110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_178114:
    // 0x178114: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x178114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_178118:
    // 0x178118: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x178118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17811c:
    // 0x17811c: 0xc0a2620  jal         func_289880
label_178120:
    if (ctx->pc == 0x178120u) {
        ctx->pc = 0x178120u;
            // 0x178120: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178124u;
        goto label_178124;
    }
    ctx->pc = 0x17811Cu;
    SET_GPR_U32(ctx, 31, 0x178124u);
    ctx->pc = 0x178120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17811Cu;
            // 0x178120: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289880u;
    if (runtime->hasFunction(0x289880u)) {
        auto targetFn = runtime->lookupFunction(0x289880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178124u; }
        if (ctx->pc != 0x178124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeWeight__18mgCVisualMotionMDTFPP8mgCFramePA4_A4_fi_0x289880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178124u; }
        if (ctx->pc != 0x178124u) { return; }
    }
    ctx->pc = 0x178124u;
label_178124:
    // 0x178124: 0x0  nop
    ctx->pc = 0x178124u;
    // NOP
label_178128:
    // 0x178128: 0x1000ffce  b           . + 4 + (-0x32 << 2)
label_17812c:
    if (ctx->pc == 0x17812Cu) {
        ctx->pc = 0x17812Cu;
            // 0x17812c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x178130u;
        goto label_178130;
    }
    ctx->pc = 0x178128u;
    {
        const bool branch_taken_0x178128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178128u;
            // 0x17812c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178128) {
            ctx->pc = 0x178064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178064;
        }
    }
    ctx->pc = 0x178130u;
label_178130:
    // 0x178130: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178134:
    // 0x178134: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x178134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_178138:
    // 0x178138: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x178138u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17813c:
    // 0x17813c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17813cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_178140:
    // 0x178140: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x178140u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_178144:
    // 0x178144: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x178144u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_178148:
    // 0x178148: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x178148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17814c:
    // 0x17814c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17814cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_178150:
    // 0x178150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178154:
    // 0x178154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178158:
    // 0x178158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17815c:
    // 0x17815c: 0x3e00008  jr          $ra
label_178160:
    if (ctx->pc == 0x178160u) {
        ctx->pc = 0x178160u;
            // 0x178160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x178164u;
        goto label_fallthrough_0x17815c;
    }
    ctx->pc = 0x17815Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17815Cu;
            // 0x178160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17815c:
    ctx->pc = 0x178164u;
}
