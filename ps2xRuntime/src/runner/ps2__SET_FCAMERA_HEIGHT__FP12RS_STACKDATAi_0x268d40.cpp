#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FCAMERA_HEIGHT__FP12RS_STACKDATAi
// Address: 0x268d40 - 0x268d98
void ps2__SET_FCAMERA_HEIGHT__FP12RS_STACKDATAi_0x268d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FCAMERA_HEIGHT__FP12RS_STACKDATAi_0x268d40");
#endif

    switch (ctx->pc) {
        case 0x268d5cu: goto label_268d5c;
        case 0x268d78u: goto label_268d78;
        case 0x268d84u: goto label_268d84;
        default: break;
    }

    ctx->pc = 0x268d40u;

    // 0x268d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x268d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d50: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x268d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x268d54: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x268D54u;
    SET_GPR_U32(ctx, 31, 0x268D5Cu);
    ctx->pc = 0x268D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268D54u;
            // 0x268d58: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D5Cu; }
        if (ctx->pc != 0x268D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D5Cu; }
        if (ctx->pc != 0x268D5Cu) { return; }
    }
    ctx->pc = 0x268D5Cu;
label_268d5c:
    // 0x268d5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x268d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x268D60u;
    {
        const bool branch_taken_0x268d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x268D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268D60u;
            // 0x268d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d60) {
            ctx->pc = 0x268D70u;
            goto label_268d70;
        }
    }
    ctx->pc = 0x268D68u;
    // 0x268d68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x268D68u;
    {
        const bool branch_taken_0x268d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268D68u;
            // 0x268d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d68) {
            ctx->pc = 0x268D88u;
            goto label_268d88;
        }
    }
    ctx->pc = 0x268D70u;
label_268d70:
    // 0x268d70: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x268D70u;
    SET_GPR_U32(ctx, 31, 0x268D78u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D78u; }
        if (ctx->pc != 0x268D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D78u; }
        if (ctx->pc != 0x268D78u) { return; }
    }
    ctx->pc = 0x268D78u;
label_268d78:
    // 0x268d78: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x268d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d7c: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x268D7Cu;
    SET_GPR_U32(ctx, 31, 0x268D84u);
    ctx->pc = 0x268D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268D7Cu;
            // 0x268d80: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D84u; }
        if (ctx->pc != 0x268D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D84u; }
        if (ctx->pc != 0x268D84u) { return; }
    }
    ctx->pc = 0x268D84u;
label_268d84:
    // 0x268d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268d88:
    // 0x268d88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268d90: 0x3e00008  jr          $ra
    ctx->pc = 0x268D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268D90u;
            // 0x268d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268D98u;
}
