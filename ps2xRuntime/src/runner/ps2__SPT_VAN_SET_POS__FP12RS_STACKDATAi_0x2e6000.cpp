#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_VAN_SET_POS__FP12RS_STACKDATAi
// Address: 0x2e6000 - 0x2e60f4
void ps2__SPT_VAN_SET_POS__FP12RS_STACKDATAi_0x2e6000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_VAN_SET_POS__FP12RS_STACKDATAi_0x2e6000");
#endif

    switch (ctx->pc) {
        case 0x2e6028u: goto label_2e6028;
        case 0x2e6038u: goto label_2e6038;
        case 0x2e6044u: goto label_2e6044;
        case 0x2e6050u: goto label_2e6050;
        case 0x2e6064u: goto label_2e6064;
        case 0x2e6070u: goto label_2e6070;
        case 0x2e607cu: goto label_2e607c;
        case 0x2e60a0u: goto label_2e60a0;
        case 0x2e60b8u: goto label_2e60b8;
        default: break;
    }

    ctx->pc = 0x2e6000u;

    // 0x2e6000: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e6000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e6004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e6004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e6008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e6008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e600c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e6010: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6018: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e601c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6020: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6020u;
    SET_GPR_U32(ctx, 31, 0x2E6028u);
    ctx->pc = 0x2E6024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6020u;
            // 0x2e6024: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6028u; }
        if (ctx->pc != 0x2E6028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6028u; }
        if (ctx->pc != 0x2E6028u) { return; }
    }
    ctx->pc = 0x2E6028u;
label_2e6028:
    // 0x2e6028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e602c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e602cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6030: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E6030u;
    SET_GPR_U32(ctx, 31, 0x2E6038u);
    ctx->pc = 0x2E6034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6030u;
            // 0x2e6034: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6038u; }
        if (ctx->pc != 0x2E6038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6038u; }
        if (ctx->pc != 0x2E6038u) { return; }
    }
    ctx->pc = 0x2E6038u;
label_2e6038:
    // 0x2e6038: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e6038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e603c: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E603Cu;
    SET_GPR_U32(ctx, 31, 0x2E6044u);
    ctx->pc = 0x2E6040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E603Cu;
            // 0x2e6040: 0x26650018  addiu       $a1, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6044u; }
        if (ctx->pc != 0x2E6044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6044u; }
        if (ctx->pc != 0x2E6044u) { return; }
    }
    ctx->pc = 0x2E6044u;
label_2e6044:
    // 0x2e6044: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e6044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e6048: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E6048u;
    SET_GPR_U32(ctx, 31, 0x2E6050u);
    ctx->pc = 0x2E604Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6048u;
            // 0x2e604c: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6050u; }
        if (ctx->pc != 0x2E6050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6050u; }
        if (ctx->pc != 0x2E6050u) { return; }
    }
    ctx->pc = 0x2E6050u;
label_2e6050:
    // 0x2e6050: 0x2a42000b  slti        $v0, $s2, 0xB
    ctx->pc = 0x2e6050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2e6054: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6054u;
    {
        const bool branch_taken_0x2e6054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6054u;
            // 0x2e6058: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6054) {
            ctx->pc = 0x2E6068u;
            goto label_2e6068;
        }
    }
    ctx->pc = 0x2E605Cu;
    // 0x2e605c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E605Cu;
    SET_GPR_U32(ctx, 31, 0x2E6064u);
    ctx->pc = 0x2E6060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E605Cu;
            // 0x2e6060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6064u; }
        if (ctx->pc != 0x2E6064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6064u; }
        if (ctx->pc != 0x2E6064u) { return; }
    }
    ctx->pc = 0x2E6064u;
label_2e6064:
    // 0x2e6064: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6068:
    // 0x2e6068: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E6068u;
    {
        const bool branch_taken_0x2e6068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6068u;
            // 0x2e606c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6068) {
            ctx->pc = 0x2E60C4u;
            goto label_2e60c4;
        }
    }
    ctx->pc = 0x2E6070u;
label_2e6070:
    // 0x2e6070: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e6070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e6074: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6074u;
    SET_GPR_U32(ctx, 31, 0x2E607Cu);
    ctx->pc = 0x2E6078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6074u;
            // 0x2e6078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E607Cu; }
        if (ctx->pc != 0x2E607Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E607Cu; }
        if (ctx->pc != 0x2E607Cu) { return; }
    }
    ctx->pc = 0x2E607Cu;
label_2e607c:
    // 0x2e607c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E607Cu;
    {
        const bool branch_taken_0x2e607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E607Cu;
            // 0x2e6080: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e607c) {
            ctx->pc = 0x2E608Cu;
            goto label_2e608c;
        }
    }
    ctx->pc = 0x2E6084u;
    // 0x2e6084: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E6084u;
    {
        const bool branch_taken_0x2e6084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6084u;
            // 0x2e6088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6084) {
            ctx->pc = 0x2E60D8u;
            goto label_2e60d8;
        }
    }
    ctx->pc = 0x2E608Cu;
label_2e608c:
    // 0x2e608c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e608cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e6090: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2e6090u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6094: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e6094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6098: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2E6098u;
    SET_GPR_U32(ctx, 31, 0x2E60A0u);
    ctx->pc = 0x2E609Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6098u;
            // 0x2e609c: 0x7c430010  sq          $v1, 0x10($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E60A0u; }
        if (ctx->pc != 0x2E60A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E60A0u; }
        if (ctx->pc != 0x2E60A0u) { return; }
    }
    ctx->pc = 0x2E60A0u;
label_2e60a0:
    // 0x2e60a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e60a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e60a8: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2e60a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x2e60ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e60acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60b0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2E60B0u;
    SET_GPR_U32(ctx, 31, 0x2E60B8u);
    ctx->pc = 0x2E60B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E60B0u;
            // 0x2e60b4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E60B8u; }
        if (ctx->pc != 0x2E60B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E60B8u; }
        if (ctx->pc != 0x2E60B8u) { return; }
    }
    ctx->pc = 0x2E60B8u;
label_2e60b8:
    // 0x2e60b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e60bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e60bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e60c0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2e60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_2e60c4:
    // 0x2e60c4: 0x0  nop
    ctx->pc = 0x2e60c4u;
    // NOP
    // 0x2e60c8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e60cc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e60ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e60d0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2E60D0u;
    {
        const bool branch_taken_0x2e60d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E60D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E60D0u;
            // 0x2e60d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60d0) {
            ctx->pc = 0x2E6070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6070;
        }
    }
    ctx->pc = 0x2E60D8u;
label_2e60d8:
    // 0x2e60d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e60d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e60dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e60dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e60e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e60e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e60e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e60e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e60e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e60e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e60ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E60ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E60F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E60ECu;
            // 0x2e60f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E60F4u;
}
