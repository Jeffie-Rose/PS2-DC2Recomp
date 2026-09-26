#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnvSetSave__14CSaveMenuClassFi
// Address: 0x2c2fd0 - 0x2c30cc
void EnvSetSave__14CSaveMenuClassFi_0x2c2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnvSetSave__14CSaveMenuClassFi_0x2c2fd0");
#endif

    switch (ctx->pc) {
        case 0x2c302cu: goto label_2c302c;
        case 0x2c3038u: goto label_2c3038;
        case 0x2c3060u: goto label_2c3060;
        case 0x2c3078u: goto label_2c3078;
        case 0x2c3088u: goto label_2c3088;
        case 0x2c30a4u: goto label_2c30a4;
        case 0x2c30b4u: goto label_2c30b4;
        default: break;
    }

    ctx->pc = 0x2c2fd0u;

    // 0x2c2fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c2fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c2fd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c2fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c2fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c2fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2fe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fe8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c2fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fec: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2FECu;
    {
        const bool branch_taken_0x2c2fec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2FECu;
            // 0x2c2ff0: 0xac800134  sw          $zero, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fec) {
            ctx->pc = 0x2C3008u;
            goto label_2c3008;
        }
    }
    ctx->pc = 0x2C2FF4u;
    // 0x2c2ff4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2ff8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c2ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2ffc: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x2c2ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x2c3000: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3000u;
    {
        const bool branch_taken_0x2c3000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3000u;
            // 0x2c3004: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3000) {
            ctx->pc = 0x2C3018u;
            goto label_2c3018;
        }
    }
    ctx->pc = 0x2C3008u;
label_2c3008:
    // 0x2c3008: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c3008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c300c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3010: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x2c3010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x2c3014: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c3014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3018:
    // 0x2c3018: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x2c3018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2c301c: 0x8f829cc4  lw          $v0, -0x633C($gp)
    ctx->pc = 0x2c301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3020: 0xac4304cc  sw          $v1, 0x4CC($v0)
    ctx->pc = 0x2c3020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1228), GPR_U32(ctx, 3));
    // 0x2c3024: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C3024u;
    SET_GPR_U32(ctx, 31, 0x2C302Cu);
    ctx->pc = 0x2C3028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3024u;
            // 0x2c3028: 0x8f849cc4  lw          $a0, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C302Cu; }
        if (ctx->pc != 0x2C302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C302Cu; }
        if (ctx->pc != 0x2C302Cu) { return; }
    }
    ctx->pc = 0x2C302Cu;
label_2c302c:
    // 0x2c302c: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c302cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3030: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2C3030u;
    SET_GPR_U32(ctx, 31, 0x2C3038u);
    ctx->pc = 0x2C3034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3030u;
            // 0x2c3034: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3038u; }
        if (ctx->pc != 0x2C3038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3038u; }
        if (ctx->pc != 0x2C3038u) { return; }
    }
    ctx->pc = 0x2C3038u;
label_2c3038:
    // 0x2c3038: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c3038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c303c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3040: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3040u;
    {
        const bool branch_taken_0x2c3040 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3040u;
            // 0x2c3044: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3040) {
            ctx->pc = 0x2C304Cu;
            goto label_2c304c;
        }
    }
    ctx->pc = 0x2C3048u;
    // 0x2c3048: 0x2652f000  addiu       $s2, $s2, -0x1000
    ctx->pc = 0x2c3048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963200));
label_2c304c:
    // 0x2c304c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c304cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c3050: 0x8c30ca48  lw          $s0, -0x35B8($at)
    ctx->pc = 0x2c3050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2c3054: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2c3054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c3058: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C3058u;
    SET_GPR_U32(ctx, 31, 0x2C3060u);
    ctx->pc = 0x2C305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3058u;
            // 0x2c305c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3060u; }
        if (ctx->pc != 0x2C3060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3060u; }
        if (ctx->pc != 0x2C3060u) { return; }
    }
    ctx->pc = 0x2C3060u;
label_2c3060:
    // 0x2c3060: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x2c3060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x2c3064: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c3064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c3068: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2c3068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x2c306c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c306cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3070: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C3070u;
    SET_GPR_U32(ctx, 31, 0x2C3078u);
    ctx->pc = 0x2C3074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3070u;
            // 0x2c3074: 0x24050bbf  addiu       $a1, $zero, 0xBBF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3007));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3078u; }
        if (ctx->pc != 0x2C3078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3078u; }
        if (ctx->pc != 0x2C3078u) { return; }
    }
    ctx->pc = 0x2C3078u;
label_2c3078:
    // 0x2c3078: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x2c3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2c307c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3080: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C3080u;
    SET_GPR_U32(ctx, 31, 0x2C3088u);
    ctx->pc = 0x2C3084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3080u;
            // 0x2c3084: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3088u; }
        if (ctx->pc != 0x2C3088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3088u; }
        if (ctx->pc != 0x2C3088u) { return; }
    }
    ctx->pc = 0x2C3088u;
label_2c3088:
    // 0x2c3088: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x2c3088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x2c308c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C308Cu;
    {
        const bool branch_taken_0x2c308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c308c) {
            ctx->pc = 0x2C3098u;
            goto label_2c3098;
        }
    }
    ctx->pc = 0x2C3094u;
    // 0x2c3094: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c3094u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_2c3098:
    // 0x2c3098: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x2c3098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x2c309c: 0xc08891c  jal         func_222470
    ctx->pc = 0x2C309Cu;
    SET_GPR_U32(ctx, 31, 0x2C30A4u);
    ctx->pc = 0x2C30A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C309Cu;
            // 0x2c30a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C30A4u; }
        if (ctx->pc != 0x2C30A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C30A4u; }
        if (ctx->pc != 0x2C30A4u) { return; }
    }
    ctx->pc = 0x2C30A4u;
label_2c30a4:
    // 0x2c30a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c30a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c30a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30ac: 0xc0b0bcc  jal         func_2C2F30
    ctx->pc = 0x2C30ACu;
    SET_GPR_U32(ctx, 31, 0x2C30B4u);
    ctx->pc = 0x2C30B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C30ACu;
            // 0x2c30b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F30u;
    if (runtime->hasFunction(0x2C2F30u)) {
        auto targetFn = runtime->lookupFunction(0x2C2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C30B4u; }
        if (ctx->pc != 0x2C30B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDlInfoMsg__14CSaveMenuClassFii_0x2c2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C30B4u; }
        if (ctx->pc != 0x2C30B4u) { return; }
    }
    ctx->pc = 0x2C30B4u;
label_2c30b4:
    // 0x2c30b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c30b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c30b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c30b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c30bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c30bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c30c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c30c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c30c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C30C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C30C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C30C4u;
            // 0x2c30c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C30CCu;
}
