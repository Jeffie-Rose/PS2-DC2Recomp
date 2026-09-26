#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MURDEROUS__FP12RS_STACKDATAi
// Address: 0x2cf750 - 0x2cf7a8
void ps2__SET_MURDEROUS__FP12RS_STACKDATAi_0x2cf750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MURDEROUS__FP12RS_STACKDATAi_0x2cf750");
#endif

    switch (ctx->pc) {
        case 0x2cf774u: goto label_2cf774;
        case 0x2cf788u: goto label_2cf788;
        default: break;
    }

    ctx->pc = 0x2cf750u;

    // 0x2cf750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf754: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cf754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf75c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF75Cu;
    {
        const bool branch_taken_0x2cf75c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF75Cu;
            // 0x2cf760: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf75c) {
            ctx->pc = 0x2CF76Cu;
            goto label_2cf76c;
        }
    }
    ctx->pc = 0x2CF764u;
    // 0x2cf764: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CF764u;
    {
        const bool branch_taken_0x2cf764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF764u;
            // 0x2cf768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf764) {
            ctx->pc = 0x2CF798u;
            goto label_2cf798;
        }
    }
    ctx->pc = 0x2CF76Cu;
label_2cf76c:
    // 0x2cf76c: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF76Cu;
    SET_GPR_U32(ctx, 31, 0x2CF774u);
    ctx->pc = 0x2CF770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF76Cu;
            // 0x2cf770: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF774u; }
        if (ctx->pc != 0x2CF774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF774u; }
        if (ctx->pc != 0x2CF774u) { return; }
    }
    ctx->pc = 0x2CF774u;
label_2cf774:
    // 0x2cf774: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf77c: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf780: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF780u;
    SET_GPR_U32(ctx, 31, 0x2CF788u);
    ctx->pc = 0x2CF784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF780u;
            // 0x2cf784: 0xac620778  sw          $v0, 0x778($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF788u; }
        if (ctx->pc != 0x2CF788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF788u; }
        if (ctx->pc != 0x2CF788u) { return; }
    }
    ctx->pc = 0x2CF788u;
label_2cf788:
    // 0x2cf788: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf78c: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf790: 0xac620774  sw          $v0, 0x774($v1)
    ctx->pc = 0x2cf790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1908), GPR_U32(ctx, 2));
    // 0x2cf794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf798:
    // 0x2cf798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf79c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF7A0u;
            // 0x2cf7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF7A8u;
}
