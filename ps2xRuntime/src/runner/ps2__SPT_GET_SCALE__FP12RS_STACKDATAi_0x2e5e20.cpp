#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_GET_SCALE__FP12RS_STACKDATAi
// Address: 0x2e5e20 - 0x2e5e90
void ps2__SPT_GET_SCALE__FP12RS_STACKDATAi_0x2e5e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_GET_SCALE__FP12RS_STACKDATAi_0x2e5e20");
#endif

    switch (ctx->pc) {
        case 0x2e5e44u: goto label_2e5e44;
        case 0x2e5e50u: goto label_2e5e50;
        case 0x2e5e70u: goto label_2e5e70;
        case 0x2e5e7cu: goto label_2e5e7c;
        default: break;
    }

    ctx->pc = 0x2e5e20u;

    // 0x2e5e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5e24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e5e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e5e2c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5E2Cu;
    {
        const bool branch_taken_0x2e5e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E2Cu;
            // 0x2e5e30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e2c) {
            ctx->pc = 0x2E5E3Cu;
            goto label_2e5e3c;
        }
    }
    ctx->pc = 0x2E5E34u;
    // 0x2e5e34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5E34u;
    {
        const bool branch_taken_0x2e5e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E34u;
            // 0x2e5e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e34) {
            ctx->pc = 0x2E5E80u;
            goto label_2e5e80;
        }
    }
    ctx->pc = 0x2E5E3Cu;
label_2e5e3c:
    // 0x2e5e3c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E5E44u);
    ctx->pc = 0x2E5E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E3Cu;
            // 0x2e5e40: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E44u; }
        if (ctx->pc != 0x2E5E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E44u; }
        if (ctx->pc != 0x2E5E44u) { return; }
    }
    ctx->pc = 0x2E5E44u;
label_2e5e44:
    // 0x2e5e44: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e5e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e5e48: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5E48u;
    SET_GPR_U32(ctx, 31, 0x2E5E50u);
    ctx->pc = 0x2E5E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E48u;
            // 0x2e5e4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E50u; }
        if (ctx->pc != 0x2E5E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E50u; }
        if (ctx->pc != 0x2E5E50u) { return; }
    }
    ctx->pc = 0x2E5E50u;
label_2e5e50:
    // 0x2e5e50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5E50u;
    {
        const bool branch_taken_0x2e5e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5e50) {
            ctx->pc = 0x2E5E60u;
            goto label_2e5e60;
        }
    }
    ctx->pc = 0x2E5E58u;
    // 0x2e5e58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5E58u;
    {
        const bool branch_taken_0x2e5e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E58u;
            // 0x2e5e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e58) {
            ctx->pc = 0x2E5E80u;
            goto label_2e5e80;
        }
    }
    ctx->pc = 0x2E5E60u;
label_2e5e60:
    // 0x2e5e60: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x2e5e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e68: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5E68u;
    SET_GPR_U32(ctx, 31, 0x2E5E70u);
    ctx->pc = 0x2E5E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E68u;
            // 0x2e5e6c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E70u; }
        if (ctx->pc != 0x2E5E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E70u; }
        if (ctx->pc != 0x2E5E70u) { return; }
    }
    ctx->pc = 0x2E5E70u;
label_2e5e70:
    // 0x2e5e70: 0xc44c0044  lwc1        $f12, 0x44($v0)
    ctx->pc = 0x2e5e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5e74: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E5E74u;
    SET_GPR_U32(ctx, 31, 0x2E5E7Cu);
    ctx->pc = 0x2E5E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E74u;
            // 0x2e5e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E7Cu; }
        if (ctx->pc != 0x2E5E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E7Cu; }
        if (ctx->pc != 0x2E5E7Cu) { return; }
    }
    ctx->pc = 0x2E5E7Cu;
label_2e5e7c:
    // 0x2e5e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5e80:
    // 0x2e5e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5e88: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E88u;
            // 0x2e5e8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5E90u;
}
