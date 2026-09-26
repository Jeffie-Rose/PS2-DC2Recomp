#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditPEffectStep__Fv
// Address: 0x2faf30 - 0x2fafac
void EditPEffectStep__Fv_0x2faf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditPEffectStep__Fv_0x2faf30");
#endif

    switch (ctx->pc) {
        case 0x2faf50u: goto label_2faf50;
        case 0x2faf60u: goto label_2faf60;
        case 0x2faf78u: goto label_2faf78;
        case 0x2faf84u: goto label_2faf84;
        default: break;
    }

    ctx->pc = 0x2faf30u;

    // 0x2faf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2faf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2faf34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2faf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2faf38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2faf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2faf3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2faf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2faf40: 0x8f839f64  lw          $v1, -0x609C($gp)
    ctx->pc = 0x2faf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942564)));
    // 0x2faf44: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FAF44u;
    {
        const bool branch_taken_0x2faf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAF44u;
            // 0x2faf48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf44) {
            ctx->pc = 0x2FAF98u;
            goto label_2faf98;
        }
    }
    ctx->pc = 0x2FAF4Cu;
    // 0x2faf4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2faf4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2faf50:
    // 0x2faf50: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2faf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2faf54: 0x24429370  addiu       $v0, $v0, -0x6C90
    ctx->pc = 0x2faf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939504));
    // 0x2faf58: 0xc0bec9c  jal         func_2FB270
    ctx->pc = 0x2FAF58u;
    SET_GPR_U32(ctx, 31, 0x2FAF60u);
    ctx->pc = 0x2FAF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAF58u;
            // 0x2faf5c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FB270u;
    if (runtime->hasFunction(0x2FB270u)) {
        auto targetFn = runtime->lookupFunction(0x2FB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAF60u; }
        if (ctx->pc != 0x2FAF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CStarEffectFv_0x2fb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAF60u; }
        if (ctx->pc != 0x2FAF60u) { return; }
    }
    ctx->pc = 0x2FAF60u;
label_2faf60:
    // 0x2faf60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2faf60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2faf64: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2faf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2faf68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FAF68u;
    {
        const bool branch_taken_0x2faf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAF68u;
            // 0x2faf6c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf68) {
            ctx->pc = 0x2FAF50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2faf50;
        }
    }
    ctx->pc = 0x2FAF70u;
    // 0x2faf70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2faf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2faf74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2faf78:
    // 0x2faf78: 0x8f829f6c  lw          $v0, -0x6094($gp)
    ctx->pc = 0x2faf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942572)));
    // 0x2faf7c: 0xc0beddc  jal         func_2FB770
    ctx->pc = 0x2FAF7Cu;
    SET_GPR_U32(ctx, 31, 0x2FAF84u);
    ctx->pc = 0x2FAF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAF7Cu;
            // 0x2faf80: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FB770u;
    if (runtime->hasFunction(0x2FB770u)) {
        auto targetFn = runtime->lookupFunction(0x2FB770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAF84u; }
        if (ctx->pc != 0x2FAF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CPaintEffectFv_0x2fb770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAF84u; }
        if (ctx->pc != 0x2FAF84u) { return; }
    }
    ctx->pc = 0x2FAF84u;
label_2faf84:
    // 0x2faf84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2faf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2faf88: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x2faf88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x2faf8c: 0x0  nop
    ctx->pc = 0x2faf8cu;
    // NOP
    // 0x2faf90: 0x1a00fff9  blez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FAF90u;
    {
        const bool branch_taken_0x2faf90 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2faf90) {
            ctx->pc = 0x2FAF78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2faf78;
        }
    }
    ctx->pc = 0x2FAF98u;
label_2faf98:
    // 0x2faf98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2faf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2faf9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2faf9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fafa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fafa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fafa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAFA4u;
            // 0x2fafa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FAFACu;
}
