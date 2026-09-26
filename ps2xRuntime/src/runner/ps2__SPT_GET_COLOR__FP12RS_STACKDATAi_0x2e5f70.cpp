#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_GET_COLOR__FP12RS_STACKDATAi
// Address: 0x2e5f70 - 0x2e6000
void ps2__SPT_GET_COLOR__FP12RS_STACKDATAi_0x2e5f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_GET_COLOR__FP12RS_STACKDATAi_0x2e5f70");
#endif

    switch (ctx->pc) {
        case 0x2e5f94u: goto label_2e5f94;
        case 0x2e5fa0u: goto label_2e5fa0;
        case 0x2e5fc0u: goto label_2e5fc0;
        case 0x2e5fd0u: goto label_2e5fd0;
        case 0x2e5fe0u: goto label_2e5fe0;
        case 0x2e5fecu: goto label_2e5fec;
        default: break;
    }

    ctx->pc = 0x2e5f70u;

    // 0x2e5f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5f74: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e5f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e5f7c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5F7Cu;
    {
        const bool branch_taken_0x2e5f7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F7Cu;
            // 0x2e5f80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f7c) {
            ctx->pc = 0x2E5F8Cu;
            goto label_2e5f8c;
        }
    }
    ctx->pc = 0x2E5F84u;
    // 0x2e5f84: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E5F84u;
    {
        const bool branch_taken_0x2e5f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F84u;
            // 0x2e5f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f84) {
            ctx->pc = 0x2E5FF0u;
            goto label_2e5ff0;
        }
    }
    ctx->pc = 0x2E5F8Cu;
label_2e5f8c:
    // 0x2e5f8c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F94u);
    ctx->pc = 0x2E5F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F8Cu;
            // 0x2e5f90: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F94u; }
        if (ctx->pc != 0x2E5F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F94u; }
        if (ctx->pc != 0x2E5F94u) { return; }
    }
    ctx->pc = 0x2E5F94u;
label_2e5f94:
    // 0x2e5f94: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e5f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e5f98: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5F98u;
    SET_GPR_U32(ctx, 31, 0x2E5FA0u);
    ctx->pc = 0x2E5F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F98u;
            // 0x2e5f9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FA0u; }
        if (ctx->pc != 0x2E5FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FA0u; }
        if (ctx->pc != 0x2E5FA0u) { return; }
    }
    ctx->pc = 0x2E5FA0u;
label_2e5fa0:
    // 0x2e5fa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5FA0u;
    {
        const bool branch_taken_0x2e5fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5fa0) {
            ctx->pc = 0x2E5FB0u;
            goto label_2e5fb0;
        }
    }
    ctx->pc = 0x2E5FA8u;
    // 0x2e5fa8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E5FA8u;
    {
        const bool branch_taken_0x2e5fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FA8u;
            // 0x2e5fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fa8) {
            ctx->pc = 0x2E5FF0u;
            goto label_2e5ff0;
        }
    }
    ctx->pc = 0x2E5FB0u;
label_2e5fb0:
    // 0x2e5fb0: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x2e5fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5fb8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5FB8u;
    SET_GPR_U32(ctx, 31, 0x2E5FC0u);
    ctx->pc = 0x2E5FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FB8u;
            // 0x2e5fbc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FC0u; }
        if (ctx->pc != 0x2E5FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FC0u; }
        if (ctx->pc != 0x2E5FC0u) { return; }
    }
    ctx->pc = 0x2E5FC0u;
label_2e5fc0:
    // 0x2e5fc0: 0xc44c0034  lwc1        $f12, 0x34($v0)
    ctx->pc = 0x2e5fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5fc8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5FC8u;
    SET_GPR_U32(ctx, 31, 0x2E5FD0u);
    ctx->pc = 0x2E5FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FC8u;
            // 0x2e5fcc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FD0u; }
        if (ctx->pc != 0x2E5FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FD0u; }
        if (ctx->pc != 0x2E5FD0u) { return; }
    }
    ctx->pc = 0x2E5FD0u;
label_2e5fd0:
    // 0x2e5fd0: 0xc44c0038  lwc1        $f12, 0x38($v0)
    ctx->pc = 0x2e5fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5fd8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5FD8u;
    SET_GPR_U32(ctx, 31, 0x2E5FE0u);
    ctx->pc = 0x2E5FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FD8u;
            // 0x2e5fdc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FE0u; }
        if (ctx->pc != 0x2E5FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FE0u; }
        if (ctx->pc != 0x2E5FE0u) { return; }
    }
    ctx->pc = 0x2E5FE0u;
label_2e5fe0:
    // 0x2e5fe0: 0xc44c003c  lwc1        $f12, 0x3C($v0)
    ctx->pc = 0x2e5fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5fe4: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5FE4u;
    SET_GPR_U32(ctx, 31, 0x2E5FECu);
    ctx->pc = 0x2E5FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FE4u;
            // 0x2e5fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FECu; }
        if (ctx->pc != 0x2E5FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FECu; }
        if (ctx->pc != 0x2E5FECu) { return; }
    }
    ctx->pc = 0x2E5FECu;
label_2e5fec:
    // 0x2e5fec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5ff0:
    // 0x2e5ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FF8u;
            // 0x2e5ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6000u;
}
