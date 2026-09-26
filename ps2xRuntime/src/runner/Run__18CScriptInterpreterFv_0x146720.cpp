#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Run__18CScriptInterpreterFv
// Address: 0x146720 - 0x146760
void Run__18CScriptInterpreterFv_0x146720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Run__18CScriptInterpreterFv_0x146720");
#endif

    switch (ctx->pc) {
        case 0x146730u: goto label_146730;
        case 0x14673cu: goto label_14673c;
        default: break;
    }

    ctx->pc = 0x146720u;

    // 0x146720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14672c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14672cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_146730:
    // 0x146730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146734: 0xc051964  jal         func_146590
    ctx->pc = 0x146734u;
    SET_GPR_U32(ctx, 31, 0x14673Cu);
    ctx->pc = 0x146738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146734u;
            // 0x146738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146590u;
    if (runtime->hasFunction(0x146590u)) {
        auto targetFn = runtime->lookupFunction(0x146590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14673Cu; }
        if (ctx->pc != 0x14673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextTAG__18CScriptInterpreterFi_0x146590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14673Cu; }
        if (ctx->pc != 0x14673Cu) { return; }
    }
    ctx->pc = 0x14673Cu;
label_14673c:
    // 0x14673c: 0x0  nop
    ctx->pc = 0x14673cu;
    // NOP
    // 0x146740: 0x0  nop
    ctx->pc = 0x146740u;
    // NOP
    // 0x146744: 0x0  nop
    ctx->pc = 0x146744u;
    // NOP
    // 0x146748: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x146748u;
    {
        const bool branch_taken_0x146748 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x146748) {
            ctx->pc = 0x146730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146730;
        }
    }
    ctx->pc = 0x146750u;
    // 0x146750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146758: 0x3e00008  jr          $ra
    ctx->pc = 0x146758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14675Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146758u;
            // 0x14675c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146760u;
}
