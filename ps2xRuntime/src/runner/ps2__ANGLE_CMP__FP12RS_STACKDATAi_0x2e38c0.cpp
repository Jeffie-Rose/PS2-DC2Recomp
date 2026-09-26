#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ANGLE_CMP__FP12RS_STACKDATAi
// Address: 0x2e38c0 - 0x2e392c
void ps2__ANGLE_CMP__FP12RS_STACKDATAi_0x2e38c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ANGLE_CMP__FP12RS_STACKDATAi_0x2e38c0");
#endif

    switch (ctx->pc) {
        case 0x2e38e4u: goto label_2e38e4;
        case 0x2e38f4u: goto label_2e38f4;
        case 0x2e3904u: goto label_2e3904;
        case 0x2e390cu: goto label_2e390c;
        case 0x2e3918u: goto label_2e3918;
        default: break;
    }

    ctx->pc = 0x2e38c0u;

    // 0x2e38c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e38c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e38c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e38c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e38c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e38cc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E38CCu;
    {
        const bool branch_taken_0x2e38cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E38D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38CCu;
            // 0x2e38d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38cc) {
            ctx->pc = 0x2E38DCu;
            goto label_2e38dc;
        }
    }
    ctx->pc = 0x2E38D4u;
    // 0x2e38d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E38D4u;
    {
        const bool branch_taken_0x2e38d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E38D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38D4u;
            // 0x2e38d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38d4) {
            ctx->pc = 0x2E391Cu;
            goto label_2e391c;
        }
    }
    ctx->pc = 0x2E38DCu;
label_2e38dc:
    // 0x2e38dc: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E38DCu;
    SET_GPR_U32(ctx, 31, 0x2E38E4u);
    ctx->pc = 0x2E38E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38DCu;
            // 0x2e38e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38E4u; }
        if (ctx->pc != 0x2E38E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38E4u; }
        if (ctx->pc != 0x2E38E4u) { return; }
    }
    ctx->pc = 0x2E38E4u;
label_2e38e4:
    // 0x2e38e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e38e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e38e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e38e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e38ec: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E38ECu;
    SET_GPR_U32(ctx, 31, 0x2E38F4u);
    ctx->pc = 0x2E38F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38ECu;
            // 0x2e38f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38F4u; }
        if (ctx->pc != 0x2E38F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38F4u; }
        if (ctx->pc != 0x2E38F4u) { return; }
    }
    ctx->pc = 0x2E38F4u;
label_2e38f4:
    // 0x2e38f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e38f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e38f8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2e38f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2e38fc: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E38FCu;
    SET_GPR_U32(ctx, 31, 0x2E3904u);
    ctx->pc = 0x2E3900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38FCu;
            // 0x2e3900: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3904u; }
        if (ctx->pc != 0x2E3904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3904u; }
        if (ctx->pc != 0x2E3904u) { return; }
    }
    ctx->pc = 0x2E3904u;
label_2e3904:
    // 0x2e3904: 0xc04c344  jal         func_130D10
    ctx->pc = 0x2E3904u;
    SET_GPR_U32(ctx, 31, 0x2E390Cu);
    ctx->pc = 0x2E3908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3904u;
            // 0x2e3908: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E390Cu; }
        if (ctx->pc != 0x2E390Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E390Cu; }
        if (ctx->pc != 0x2E390Cu) { return; }
    }
    ctx->pc = 0x2E390Cu;
label_2e390c:
    // 0x2e390c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3910: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E3910u;
    SET_GPR_U32(ctx, 31, 0x2E3918u);
    ctx->pc = 0x2E3914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3910u;
            // 0x2e3914: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3918u; }
        if (ctx->pc != 0x2E3918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3918u; }
        if (ctx->pc != 0x2E3918u) { return; }
    }
    ctx->pc = 0x2E3918u;
label_2e3918:
    // 0x2e3918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e391c:
    // 0x2e391c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3924: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3924u;
            // 0x2e3928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E392Cu;
}
