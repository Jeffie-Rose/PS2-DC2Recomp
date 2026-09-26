#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CSndStep__Fv
// Address: 0x18d5e0 - 0x18d620
void CSndStep__Fv_0x18d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CSndStep__Fv_0x18d5e0");
#endif

    switch (ctx->pc) {
        case 0x18d5f0u: goto label_18d5f0;
        case 0x18d608u: goto label_18d608;
        default: break;
    }

    ctx->pc = 0x18d5e0u;

    // 0x18d5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d5e8: 0xc0504c4  jal         func_141310
    ctx->pc = 0x18D5E8u;
    SET_GPR_U32(ctx, 31, 0x18D5F0u);
    ctx->pc = 0x18D5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5E8u;
            // 0x18d5ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141310u;
    if (runtime->hasFunction(0x141310u)) {
        auto targetFn = runtime->lookupFunction(0x141310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5F0u; }
        if (ctx->pc != 0x18D5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVSyncCount__Fv_0x141310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5F0u; }
        if (ctx->pc != 0x18D5F0u) { return; }
    }
    ctx->pc = 0x18D5F0u;
label_18d5f0:
    // 0x18d5f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5f4: 0x8f828050  lw          $v0, -0x7FB0($gp)
    ctx->pc = 0x18d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934608)));
    // 0x18d5f8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D5F8u;
    {
        const bool branch_taken_0x18d5f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5F8u;
            // 0x18d5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5f8) {
            ctx->pc = 0x18D610u;
            goto label_18d610;
        }
    }
    ctx->pc = 0x18D600u;
    // 0x18d600: 0xc062840  jal         func_18A100
    ctx->pc = 0x18D600u;
    SET_GPR_U32(ctx, 31, 0x18D608u);
    ctx->pc = 0x18D604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D600u;
            // 0x18d604: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A100u;
    if (runtime->hasFunction(0x18A100u)) {
        auto targetFn = runtime->lookupFunction(0x18A100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D608u; }
        if (ctx->pc != 0x18D608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6CSoundFv_0x18a100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D608u; }
        if (ctx->pc != 0x18D608u) { return; }
    }
    ctx->pc = 0x18D608u;
label_18d608:
    // 0x18d608: 0xaf908050  sw          $s0, -0x7FB0($gp)
    ctx->pc = 0x18d608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934608), GPR_U32(ctx, 16));
    // 0x18d60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d610:
    // 0x18d610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d618: 0x3e00008  jr          $ra
    ctx->pc = 0x18D618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D618u;
            // 0x18d61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D620u;
}
