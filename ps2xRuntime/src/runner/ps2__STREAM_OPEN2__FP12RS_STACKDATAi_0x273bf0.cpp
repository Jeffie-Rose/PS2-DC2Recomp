#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_OPEN2__FP12RS_STACKDATAi
// Address: 0x273bf0 - 0x273c40
void ps2__STREAM_OPEN2__FP12RS_STACKDATAi_0x273bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_OPEN2__FP12RS_STACKDATAi_0x273bf0");
#endif

    switch (ctx->pc) {
        case 0x273c04u: goto label_273c04;
        case 0x273c14u: goto label_273c14;
        case 0x273c20u: goto label_273c20;
        default: break;
    }

    ctx->pc = 0x273bf0u;

    // 0x273bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273bfc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273BFCu;
    SET_GPR_U32(ctx, 31, 0x273C04u);
    ctx->pc = 0x273C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273BFCu;
            // 0x273c00: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C04u; }
        if (ctx->pc != 0x273C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C04u; }
        if (ctx->pc != 0x273C04u) { return; }
    }
    ctx->pc = 0x273C04u;
label_273c04:
    // 0x273c04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c0c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x273C0Cu;
    SET_GPR_U32(ctx, 31, 0x273C14u);
    ctx->pc = 0x273C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C0Cu;
            // 0x273c10: 0xac20e568  sw          $zero, -0x1A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C14u; }
        if (ctx->pc != 0x273C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C14u; }
        if (ctx->pc != 0x273C14u) { return; }
    }
    ctx->pc = 0x273C14u;
label_273c14:
    // 0x273c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273c18: 0xc09cee8  jal         func_273BA0
    ctx->pc = 0x273C18u;
    SET_GPR_U32(ctx, 31, 0x273C20u);
    ctx->pc = 0x273C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C18u;
            // 0x273c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273BA0u;
    if (runtime->hasFunction(0x273BA0u)) {
        auto targetFn = runtime->lookupFunction(0x273BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C20u; }
        if (ctx->pc != 0x273C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommandStreamOpen2__FiPc_0x273ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C20u; }
        if (ctx->pc != 0x273C20u) { return; }
    }
    ctx->pc = 0x273C20u;
label_273c20:
    // 0x273c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273c24: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x273C24u;
    {
        const bool branch_taken_0x273c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x273C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C24u;
            // 0x273c28: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c24) {
            ctx->pc = 0x273C30u;
            goto label_273c30;
        }
    }
    ctx->pc = 0x273C2Cu;
    // 0x273c2c: 0xac23e62c  sw          $v1, -0x19D4($at)
    ctx->pc = 0x273c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960684), GPR_U32(ctx, 3));
label_273c30:
    // 0x273c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273c38: 0x3e00008  jr          $ra
    ctx->pc = 0x273C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C38u;
            // 0x273c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273C40u;
}
