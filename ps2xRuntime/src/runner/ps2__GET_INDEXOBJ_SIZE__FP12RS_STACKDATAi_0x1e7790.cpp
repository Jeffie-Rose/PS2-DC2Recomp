#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_INDEXOBJ_SIZE__FP12RS_STACKDATAi
// Address: 0x1e7790 - 0x1e77f4
void ps2__GET_INDEXOBJ_SIZE__FP12RS_STACKDATAi_0x1e7790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_INDEXOBJ_SIZE__FP12RS_STACKDATAi_0x1e7790");
#endif

    switch (ctx->pc) {
        case 0x1e77b4u: goto label_1e77b4;
        case 0x1e77e0u: goto label_1e77e0;
        default: break;
    }

    ctx->pc = 0x1e7790u;

    // 0x1e7790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e779c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E779Cu;
    {
        const bool branch_taken_0x1e779c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E77A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E779Cu;
            // 0x1e77a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e779c) {
            ctx->pc = 0x1E77ACu;
            goto label_1e77ac;
        }
    }
    ctx->pc = 0x1E77A4u;
    // 0x1e77a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E77A4u;
    {
        const bool branch_taken_0x1e77a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E77A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E77A4u;
            // 0x1e77a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e77a4) {
            ctx->pc = 0x1E77E4u;
            goto label_1e77e4;
        }
    }
    ctx->pc = 0x1E77ACu;
label_1e77ac:
    // 0x1e77ac: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E77ACu;
    SET_GPR_U32(ctx, 31, 0x1E77B4u);
    ctx->pc = 0x1E77B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E77ACu;
            // 0x1e77b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E77B4u; }
        if (ctx->pc != 0x1E77B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E77B4u; }
        if (ctx->pc != 0x1E77B4u) { return; }
    }
    ctx->pc = 0x1E77B4u;
label_1e77b4:
    // 0x1e77b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e77b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e77b8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E77B8u;
    {
        const bool branch_taken_0x1e77b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e77b8) {
            ctx->pc = 0x1E77C4u;
            goto label_1e77c4;
        }
    }
    ctx->pc = 0x1E77C0u;
    // 0x1e77c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e77c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e77c4:
    // 0x1e77c4: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e77c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e77cc: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x1e77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x1e77d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e77d4: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1e77d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e77d8: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E77D8u;
    SET_GPR_U32(ctx, 31, 0x1E77E0u);
    ctx->pc = 0x1E77DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E77D8u;
            // 0x1e77dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E77E0u; }
        if (ctx->pc != 0x1E77E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E77E0u; }
        if (ctx->pc != 0x1E77E0u) { return; }
    }
    ctx->pc = 0x1E77E0u;
label_1e77e0:
    // 0x1e77e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e77e4:
    // 0x1e77e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e77e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e77e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e77e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e77ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E77ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E77F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E77ECu;
            // 0x1e77f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E77F4u;
}
