#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FCAMERA_ANGLE__FP12RS_STACKDATAi
// Address: 0x268ce0 - 0x268d38
void ps2__SET_FCAMERA_ANGLE__FP12RS_STACKDATAi_0x268ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FCAMERA_ANGLE__FP12RS_STACKDATAi_0x268ce0");
#endif

    switch (ctx->pc) {
        case 0x268cfcu: goto label_268cfc;
        case 0x268d18u: goto label_268d18;
        case 0x268d24u: goto label_268d24;
        default: break;
    }

    ctx->pc = 0x268ce0u;

    // 0x268ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x268ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268cf0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x268cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x268cf4: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x268CF4u;
    SET_GPR_U32(ctx, 31, 0x268CFCu);
    ctx->pc = 0x268CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268CF4u;
            // 0x268cf8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268CFCu; }
        if (ctx->pc != 0x268CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268CFCu; }
        if (ctx->pc != 0x268CFCu) { return; }
    }
    ctx->pc = 0x268CFCu;
label_268cfc:
    // 0x268cfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x268cfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d00: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x268D00u;
    {
        const bool branch_taken_0x268d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x268D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268D00u;
            // 0x268d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d00) {
            ctx->pc = 0x268D10u;
            goto label_268d10;
        }
    }
    ctx->pc = 0x268D08u;
    // 0x268d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x268D08u;
    {
        const bool branch_taken_0x268d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268D08u;
            // 0x268d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d08) {
            ctx->pc = 0x268D28u;
            goto label_268d28;
        }
    }
    ctx->pc = 0x268D10u;
label_268d10:
    // 0x268d10: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x268D10u;
    SET_GPR_U32(ctx, 31, 0x268D18u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D18u; }
        if (ctx->pc != 0x268D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D18u; }
        if (ctx->pc != 0x268D18u) { return; }
    }
    ctx->pc = 0x268D18u;
label_268d18:
    // 0x268d18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x268d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d1c: 0xc04c670  jal         func_1319C0
    ctx->pc = 0x268D1Cu;
    SET_GPR_U32(ctx, 31, 0x268D24u);
    ctx->pc = 0x268D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268D1Cu;
            // 0x268d20: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319C0u;
    if (runtime->hasFunction(0x1319C0u)) {
        auto targetFn = runtime->lookupFunction(0x1319C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D24u; }
        if (ctx->pc != 0x268D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngle__15mgCCameraFollowFf_0x1319c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268D24u; }
        if (ctx->pc != 0x268D24u) { return; }
    }
    ctx->pc = 0x268D24u;
label_268d24:
    // 0x268d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268d28:
    // 0x268d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268d30: 0x3e00008  jr          $ra
    ctx->pc = 0x268D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268D30u;
            // 0x268d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268D38u;
}
