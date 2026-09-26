#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__15CRocketLauncherFPfPfPf
// Address: 0x1b5fd0 - 0x1b60a8
void SetPos__15CRocketLauncherFPfPfPf_0x1b5fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__15CRocketLauncherFPfPfPf_0x1b5fd0");
#endif

    switch (ctx->pc) {
        case 0x1b5ffcu: goto label_1b5ffc;
        case 0x1b6008u: goto label_1b6008;
        case 0x1b6014u: goto label_1b6014;
        case 0x1b6020u: goto label_1b6020;
        case 0x1b602cu: goto label_1b602c;
        case 0x1b6048u: goto label_1b6048;
        case 0x1b6058u: goto label_1b6058;
        default: break;
    }

    ctx->pc = 0x1b5fd0u;

    // 0x1b5fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b5fd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b5fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b5fd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b5fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b5fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b5fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b5fe0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b5fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5fe8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b5fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5ff0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1b5ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ff4: 0xc06da00  jal         func_1B6800
    ctx->pc = 0x1B5FF4u;
    SET_GPR_U32(ctx, 31, 0x1B5FFCu);
    ctx->pc = 0x1B5FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FF4u;
            // 0x1b5ff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6800u;
    if (runtime->hasFunction(0x1B6800u)) {
        auto targetFn = runtime->lookupFunction(0x1B6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FFCu; }
        if (ctx->pc != 0x1B5FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CRocketLauncherFv_0x1b6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FFCu; }
        if (ctx->pc != 0x1B5FFCu) { return; }
    }
    ctx->pc = 0x1B5FFCu;
label_1b5ffc:
    // 0x1b5ffc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1b5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b6000: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6000u;
    SET_GPR_U32(ctx, 31, 0x1B6008u);
    ctx->pc = 0x1B6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6000u;
            // 0x1b6004: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6008u; }
        if (ctx->pc != 0x1B6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6008u; }
        if (ctx->pc != 0x1B6008u) { return; }
    }
    ctx->pc = 0x1B6008u;
label_1b6008:
    // 0x1b6008: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b6008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b600c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B600Cu;
    SET_GPR_U32(ctx, 31, 0x1B6014u);
    ctx->pc = 0x1B6010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B600Cu;
            // 0x1b6010: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6014u; }
        if (ctx->pc != 0x1B6014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6014u; }
        if (ctx->pc != 0x1B6014u) { return; }
    }
    ctx->pc = 0x1B6014u;
label_1b6014:
    // 0x1b6014: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6018: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6018u;
    SET_GPR_U32(ctx, 31, 0x1B6020u);
    ctx->pc = 0x1B601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6018u;
            // 0x1b601c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6020u; }
        if (ctx->pc != 0x1B6020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6020u; }
        if (ctx->pc != 0x1B6020u) { return; }
    }
    ctx->pc = 0x1B6020u;
label_1b6020:
    // 0x1b6020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6024: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6024u;
    SET_GPR_U32(ctx, 31, 0x1B602Cu);
    ctx->pc = 0x1B6028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6024u;
            // 0x1b6028: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B602Cu; }
        if (ctx->pc != 0x1B602Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B602Cu; }
        if (ctx->pc != 0x1B602Cu) { return; }
    }
    ctx->pc = 0x1B602Cu;
label_1b602c:
    // 0x1b602c: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1b602cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x1b6030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6034: 0xae03015c  sw          $v1, 0x15C($s0)
    ctx->pc = 0x1b6034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 3));
    // 0x1b6038: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b6038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b603c: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1b603cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1b6040: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b6040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6044: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x1b6044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_1b6048:
    // 0x1b6048: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1b6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1b604c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1b604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b6050: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6050u;
    SET_GPR_U32(ctx, 31, 0x1B6058u);
    ctx->pc = 0x1B6054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6050u;
            // 0x1b6054: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6058u; }
        if (ctx->pc != 0x1B6058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6058u; }
        if (ctx->pc != 0x1B6058u) { return; }
    }
    ctx->pc = 0x1B6058u;
label_1b6058:
    // 0x1b6058: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b6058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b605c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x1b605cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b6060: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B6060u;
    {
        const bool branch_taken_0x1b6060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6060u;
            // 0x1b6064: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6060) {
            ctx->pc = 0x1B6048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6048;
        }
    }
    ctx->pc = 0x1B6068u;
    // 0x1b6068: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1b6068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1b606c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1b606cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b6070: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x1b6070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
    // 0x1b6074: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b6074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b6078: 0xae03016c  sw          $v1, 0x16C($s0)
    ctx->pc = 0x1b6078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 3));
    // 0x1b607c: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x1b607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1b6080: 0xae030170  sw          $v1, 0x170($s0)
    ctx->pc = 0x1b6080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 3));
    // 0x1b6084: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b6084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b6088: 0xae030164  sw          $v1, 0x164($s0)
    ctx->pc = 0x1b6088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 3));
    // 0x1b608c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b608cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6090: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b609c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b609cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b60a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60A0u;
            // 0x1b60a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B60A8u;
}
