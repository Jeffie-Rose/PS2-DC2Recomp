#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_EOH_POS__FP12RS_STACKDATAi
// Address: 0x2e8b80 - 0x2e8bf8
void ps2__GET_EOH_POS__FP12RS_STACKDATAi_0x2e8b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_EOH_POS__FP12RS_STACKDATAi_0x2e8b80");
#endif

    switch (ctx->pc) {
        case 0x2e8ba4u: goto label_2e8ba4;
        case 0x2e8bb8u: goto label_2e8bb8;
        case 0x2e8bc8u: goto label_2e8bc8;
        case 0x2e8bd8u: goto label_2e8bd8;
        case 0x2e8be4u: goto label_2e8be4;
        default: break;
    }

    ctx->pc = 0x2e8b80u;

    // 0x2e8b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8b84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e8b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e8b8c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8B8Cu;
    {
        const bool branch_taken_0x2e8b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B8Cu;
            // 0x2e8b90: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b8c) {
            ctx->pc = 0x2E8B9Cu;
            goto label_2e8b9c;
        }
    }
    ctx->pc = 0x2E8B94u;
    // 0x2e8b94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E8B94u;
    {
        const bool branch_taken_0x2e8b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B94u;
            // 0x2e8b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b94) {
            ctx->pc = 0x2E8BE8u;
            goto label_2e8be8;
        }
    }
    ctx->pc = 0x2E8B9Cu;
label_2e8b9c:
    // 0x2e8b9c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8B9Cu;
    SET_GPR_U32(ctx, 31, 0x2E8BA4u);
    ctx->pc = 0x2E8BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B9Cu;
            // 0x2e8ba0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BA4u; }
        if (ctx->pc != 0x2E8BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BA4u; }
        if (ctx->pc != 0x2E8BA4u) { return; }
    }
    ctx->pc = 0x2E8BA4u;
label_2e8ba4:
    // 0x2e8ba4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2e8ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2e8ba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e8ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bac: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2e8bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2e8bb0: 0xc097808  jal         func_25E020
    ctx->pc = 0x2E8BB0u;
    SET_GPR_U32(ctx, 31, 0x2E8BB8u);
    ctx->pc = 0x2E8BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BB0u;
            // 0x2e8bb4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E020u;
    if (runtime->hasFunction(0x25E020u)) {
        auto targetFn = runtime->lookupFunction(0x25E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BB8u; }
        if (ctx->pc != 0x2E8BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__10CEohMotherFiPf_0x25e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BB8u; }
        if (ctx->pc != 0x2E8BB8u) { return; }
    }
    ctx->pc = 0x2E8BB8u;
label_2e8bb8:
    // 0x2e8bb8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2e8bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bc0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E8BC0u;
    SET_GPR_U32(ctx, 31, 0x2E8BC8u);
    ctx->pc = 0x2E8BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BC0u;
            // 0x2e8bc4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BC8u; }
        if (ctx->pc != 0x2E8BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BC8u; }
        if (ctx->pc != 0x2E8BC8u) { return; }
    }
    ctx->pc = 0x2E8BC8u;
label_2e8bc8:
    // 0x2e8bc8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2e8bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bd0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E8BD0u;
    SET_GPR_U32(ctx, 31, 0x2E8BD8u);
    ctx->pc = 0x2E8BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BD0u;
            // 0x2e8bd4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BD8u; }
        if (ctx->pc != 0x2E8BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BD8u; }
        if (ctx->pc != 0x2E8BD8u) { return; }
    }
    ctx->pc = 0x2E8BD8u;
label_2e8bd8:
    // 0x2e8bd8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2e8bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8bdc: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E8BDCu;
    SET_GPR_U32(ctx, 31, 0x2E8BE4u);
    ctx->pc = 0x2E8BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BDCu;
            // 0x2e8be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BE4u; }
        if (ctx->pc != 0x2E8BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8BE4u; }
        if (ctx->pc != 0x2E8BE4u) { return; }
    }
    ctx->pc = 0x2E8BE4u;
label_2e8be4:
    // 0x2e8be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8be8:
    // 0x2e8be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8BF0u;
            // 0x2e8bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8BF8u;
}
