#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MODEL_LIGHT_SWITCH__FP12RS_STACKDATAi
// Address: 0x26e040 - 0x26e12c
void ps2__SET_MODEL_LIGHT_SWITCH__FP12RS_STACKDATAi_0x26e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MODEL_LIGHT_SWITCH__FP12RS_STACKDATAi_0x26e040");
#endif

    switch (ctx->pc) {
        case 0x26e064u: goto label_26e064;
        case 0x26e06cu: goto label_26e06c;
        case 0x26e088u: goto label_26e088;
        case 0x26e0a0u: goto label_26e0a0;
        case 0x26e0b0u: goto label_26e0b0;
        case 0x26e0dcu: goto label_26e0dc;
        case 0x26e10cu: goto label_26e10c;
        default: break;
    }

    ctx->pc = 0x26e040u;

    // 0x26e040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26e040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26e044: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26e044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26e048: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26e048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26e04c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26e04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26e050: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x26e050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26e054: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e058: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26e058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e05c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E05Cu;
    SET_GPR_U32(ctx, 31, 0x26E064u);
    ctx->pc = 0x26E060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E05Cu;
            // 0x26e060: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E064u; }
        if (ctx->pc != 0x26E064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E064u; }
        if (ctx->pc != 0x26E064u) { return; }
    }
    ctx->pc = 0x26E064u;
label_26e064:
    // 0x26e064: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26E064u;
    SET_GPR_U32(ctx, 31, 0x26E06Cu);
    ctx->pc = 0x26E068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E064u;
            // 0x26e068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E06Cu; }
        if (ctx->pc != 0x26E06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E06Cu; }
        if (ctx->pc != 0x26E06Cu) { return; }
    }
    ctx->pc = 0x26E06Cu;
label_26e06c:
    // 0x26e06c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e070: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E070u;
    {
        const bool branch_taken_0x26e070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E070u;
            // 0x26e074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e070) {
            ctx->pc = 0x26E080u;
            goto label_26e080;
        }
    }
    ctx->pc = 0x26E078u;
    // 0x26e078: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x26E078u;
    {
        const bool branch_taken_0x26e078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E078u;
            // 0x26e07c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e078) {
            ctx->pc = 0x26E110u;
            goto label_26e110;
        }
    }
    ctx->pc = 0x26E080u;
label_26e080:
    // 0x26e080: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E080u;
    SET_GPR_U32(ctx, 31, 0x26E088u);
    ctx->pc = 0x26E084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E080u;
            // 0x26e084: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E088u; }
        if (ctx->pc != 0x26E088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E088u; }
        if (ctx->pc != 0x26E088u) { return; }
    }
    ctx->pc = 0x26E088u;
label_26e088:
    // 0x26e088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26e088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e08c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e090: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E090u;
    {
        const bool branch_taken_0x26e090 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x26E094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E090u;
            // 0x26e094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e090) {
            ctx->pc = 0x26E0A0u;
            goto label_26e0a0;
        }
    }
    ctx->pc = 0x26E098u;
    // 0x26e098: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26E098u;
    SET_GPR_U32(ctx, 31, 0x26E0A0u);
    ctx->pc = 0x26E09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E098u;
            // 0x26e09c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E0A0u; }
        if (ctx->pc != 0x26E0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E0A0u; }
        if (ctx->pc != 0x26E0A0u) { return; }
    }
    ctx->pc = 0x26E0A0u;
label_26e0a0:
    // 0x26e0a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E0A0u;
    {
        const bool branch_taken_0x26e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0A0u;
            // 0x26e0a4: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0a0) {
            ctx->pc = 0x26E0B4u;
            goto label_26e0b4;
        }
    }
    ctx->pc = 0x26E0A8u;
    // 0x26e0a8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x26E0A8u;
    SET_GPR_U32(ctx, 31, 0x26E0B0u);
    ctx->pc = 0x26E0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0A8u;
            // 0x26e0ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E0B0u; }
        if (ctx->pc != 0x26E0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E0B0u; }
        if (ctx->pc != 0x26E0B0u) { return; }
    }
    ctx->pc = 0x26E0B0u;
label_26e0b0:
    // 0x26e0b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e0b4:
    // 0x26e0b4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E0B4u;
    {
        const bool branch_taken_0x26e0b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0B4u;
            // 0x26e0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0b4) {
            ctx->pc = 0x26E0C4u;
            goto label_26e0c4;
        }
    }
    ctx->pc = 0x26E0BCu;
    // 0x26e0bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26E0BCu;
    {
        const bool branch_taken_0x26e0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0BCu;
            // 0x26e0c0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0bc) {
            ctx->pc = 0x26E114u;
            goto label_26e114;
        }
    }
    ctx->pc = 0x26E0C4u;
label_26e0c4:
    // 0x26e0c4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E0C4u;
    {
        const bool branch_taken_0x26e0c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0C4u;
            // 0x26e0c8: 0x8c8500f4  lw          $a1, 0xF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0c4) {
            ctx->pc = 0x26E0E4u;
            goto label_26e0e4;
        }
    }
    ctx->pc = 0x26E0CCu;
    // 0x26e0cc: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x26e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
    // 0x26e0d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26e0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e0d4: 0xc04de54  jal         func_137950
    ctx->pc = 0x26E0D4u;
    SET_GPR_U32(ctx, 31, 0x26E0DCu);
    ctx->pc = 0x26E0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0D4u;
            // 0x26e0d8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E0DCu; }
        if (ctx->pc != 0x26E0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E0DCu; }
        if (ctx->pc != 0x26E0DCu) { return; }
    }
    ctx->pc = 0x26E0DCu;
label_26e0dc:
    // 0x26e0dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26E0DCu;
    {
        const bool branch_taken_0x26e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0DCu;
            // 0x26e0e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0dc) {
            ctx->pc = 0x26E110u;
            goto label_26e110;
        }
    }
    ctx->pc = 0x26E0E4u;
label_26e0e4:
    // 0x26e0e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26e0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e0e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26e0ec: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x26e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x26e0f0: 0xaca60060  sw          $a2, 0x60($a1)
    ctx->pc = 0x26e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
    // 0x26e0f4: 0xaca30070  sw          $v1, 0x70($a1)
    ctx->pc = 0x26e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
    // 0x26e0f8: 0x34478000  ori         $a3, $v0, 0x8000
    ctx->pc = 0x26e0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x26e0fc: 0xaca30074  sw          $v1, 0x74($a1)
    ctx->pc = 0x26e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 3));
    // 0x26e100: 0xaca30078  sw          $v1, 0x78($a1)
    ctx->pc = 0x26e100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 3));
    // 0x26e104: 0xc04de54  jal         func_137950
    ctx->pc = 0x26E104u;
    SET_GPR_U32(ctx, 31, 0x26E10Cu);
    ctx->pc = 0x26E108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E104u;
            // 0x26e108: 0xaca3007c  sw          $v1, 0x7C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E10Cu; }
        if (ctx->pc != 0x26E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E10Cu; }
        if (ctx->pc != 0x26E10Cu) { return; }
    }
    ctx->pc = 0x26E10Cu;
label_26e10c:
    // 0x26e10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e110:
    // 0x26e110: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26e110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26e114:
    // 0x26e114: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26e114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26e118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e124: 0x3e00008  jr          $ra
    ctx->pc = 0x26E124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E124u;
            // 0x26e128: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E12Cu;
}
