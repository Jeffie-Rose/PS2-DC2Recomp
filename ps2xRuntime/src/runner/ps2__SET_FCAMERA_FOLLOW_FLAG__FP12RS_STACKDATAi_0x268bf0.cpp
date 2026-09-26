#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FCAMERA_FOLLOW_FLAG__FP12RS_STACKDATAi
// Address: 0x268bf0 - 0x268c68
void ps2__SET_FCAMERA_FOLLOW_FLAG__FP12RS_STACKDATAi_0x268bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FCAMERA_FOLLOW_FLAG__FP12RS_STACKDATAi_0x268bf0");
#endif

    switch (ctx->pc) {
        case 0x268c10u: goto label_268c10;
        case 0x268c2cu: goto label_268c2c;
        case 0x268c40u: goto label_268c40;
        case 0x268c50u: goto label_268c50;
        default: break;
    }

    ctx->pc = 0x268bf0u;

    // 0x268bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x268bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x268bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x268c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c04: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x268c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x268c08: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x268C08u;
    SET_GPR_U32(ctx, 31, 0x268C10u);
    ctx->pc = 0x268C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268C08u;
            // 0x268c0c: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C10u; }
        if (ctx->pc != 0x268C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C10u; }
        if (ctx->pc != 0x268C10u) { return; }
    }
    ctx->pc = 0x268C10u;
label_268c10:
    // 0x268c10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c14: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268C14u;
    {
        const bool branch_taken_0x268c14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x268C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C14u;
            // 0x268c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c14) {
            ctx->pc = 0x268C24u;
            goto label_268c24;
        }
    }
    ctx->pc = 0x268C1Cu;
    // 0x268c1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x268C1Cu;
    {
        const bool branch_taken_0x268c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C1Cu;
            // 0x268c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c1c) {
            ctx->pc = 0x268C54u;
            goto label_268c54;
        }
    }
    ctx->pc = 0x268C24u;
label_268c24:
    // 0x268c24: 0xc097e18  jal         func_25F860
    ctx->pc = 0x268C24u;
    SET_GPR_U32(ctx, 31, 0x268C2Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C2Cu; }
        if (ctx->pc != 0x268C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C2Cu; }
        if (ctx->pc != 0x268C2Cu) { return; }
    }
    ctx->pc = 0x268C2Cu;
label_268c2c:
    // 0x268c2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x268c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268c30: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x268C30u;
    {
        const bool branch_taken_0x268c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x268C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C30u;
            // 0x268c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c30) {
            ctx->pc = 0x268C48u;
            goto label_268c48;
        }
    }
    ctx->pc = 0x268C38u;
    // 0x268c38: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x268C38u;
    SET_GPR_U32(ctx, 31, 0x268C40u);
    ctx->pc = 0x268C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268C38u;
            // 0x268c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C40u; }
        if (ctx->pc != 0x268C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C40u; }
        if (ctx->pc != 0x268C40u) { return; }
    }
    ctx->pc = 0x268C40u;
label_268c40:
    // 0x268c40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x268C40u;
    {
        const bool branch_taken_0x268c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C40u;
            // 0x268c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c40) {
            ctx->pc = 0x268C54u;
            goto label_268c54;
        }
    }
    ctx->pc = 0x268C48u;
label_268c48:
    // 0x268c48: 0xc04c66c  jal         func_1319B0
    ctx->pc = 0x268C48u;
    SET_GPR_U32(ctx, 31, 0x268C50u);
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C50u; }
        if (ctx->pc != 0x268C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C50u; }
        if (ctx->pc != 0x268C50u) { return; }
    }
    ctx->pc = 0x268C50u;
label_268c50:
    // 0x268c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268c54:
    // 0x268c54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x268c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268c60: 0x3e00008  jr          $ra
    ctx->pc = 0x268C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268C60u;
            // 0x268c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268C68u;
}
