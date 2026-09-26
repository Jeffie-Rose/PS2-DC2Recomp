#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FCAMERA_DIST__FP12RS_STACKDATAi
// Address: 0x268da0 - 0x268df8
void ps2__SET_FCAMERA_DIST__FP12RS_STACKDATAi_0x268da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FCAMERA_DIST__FP12RS_STACKDATAi_0x268da0");
#endif

    switch (ctx->pc) {
        case 0x268dbcu: goto label_268dbc;
        case 0x268dd8u: goto label_268dd8;
        case 0x268de4u: goto label_268de4;
        default: break;
    }

    ctx->pc = 0x268da0u;

    // 0x268da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x268da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268db0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x268db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x268db4: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x268DB4u;
    SET_GPR_U32(ctx, 31, 0x268DBCu);
    ctx->pc = 0x268DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268DB4u;
            // 0x268db8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268DBCu; }
        if (ctx->pc != 0x268DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268DBCu; }
        if (ctx->pc != 0x268DBCu) { return; }
    }
    ctx->pc = 0x268DBCu;
label_268dbc:
    // 0x268dbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x268dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268dc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x268DC0u;
    {
        const bool branch_taken_0x268dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x268DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268DC0u;
            // 0x268dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dc0) {
            ctx->pc = 0x268DD0u;
            goto label_268dd0;
        }
    }
    ctx->pc = 0x268DC8u;
    // 0x268dc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x268DC8u;
    {
        const bool branch_taken_0x268dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268DC8u;
            // 0x268dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dc8) {
            ctx->pc = 0x268DE8u;
            goto label_268de8;
        }
    }
    ctx->pc = 0x268DD0u;
label_268dd0:
    // 0x268dd0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x268DD0u;
    SET_GPR_U32(ctx, 31, 0x268DD8u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268DD8u; }
        if (ctx->pc != 0x268DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268DD8u; }
        if (ctx->pc != 0x268DD8u) { return; }
    }
    ctx->pc = 0x268DD8u;
label_268dd8:
    // 0x268dd8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x268dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ddc: 0xc04c680  jal         func_131A00
    ctx->pc = 0x268DDCu;
    SET_GPR_U32(ctx, 31, 0x268DE4u);
    ctx->pc = 0x268DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268DDCu;
            // 0x268de0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268DE4u; }
        if (ctx->pc != 0x268DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268DE4u; }
        if (ctx->pc != 0x268DE4u) { return; }
    }
    ctx->pc = 0x268DE4u;
label_268de4:
    // 0x268de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268de8:
    // 0x268de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268dec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268df0: 0x3e00008  jr          $ra
    ctx->pc = 0x268DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268DF0u;
            // 0x268df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268DF8u;
}
