#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SwitchThread__6CMovieFv
// Address: 0x298d80 - 0x298dd8
void SwitchThread__6CMovieFv_0x298d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SwitchThread__6CMovieFv_0x298d80");
#endif

    switch (ctx->pc) {
        case 0x298da0u: goto label_298da0;
        case 0x298da8u: goto label_298da8;
        default: break;
    }

    ctx->pc = 0x298d80u;

    // 0x298d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298d84: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298d8c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x298d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x298d90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298d94: 0x90233900  lbu         $v1, 0x3900($at)
    ctx->pc = 0x298d94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14592)));
    // 0x298d98: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x298D98u;
    {
        const bool branch_taken_0x298d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298D98u;
            // 0x298d9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d98) {
            ctx->pc = 0x298DC4u;
            goto label_298dc4;
        }
    }
    ctx->pc = 0x298DA0u;
label_298da0:
    // 0x298da0: 0xc0a6e1c  jal         func_29B870
    ctx->pc = 0x298DA0u;
    SET_GPR_U32(ctx, 31, 0x298DA8u);
    ctx->pc = 0x29B870u;
    if (runtime->hasFunction(0x29B870u)) {
        auto targetFn = runtime->lookupFunction(0x29B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298DA8u; }
        if (ctx->pc != 0x298DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread__Fv_0x29b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298DA8u; }
        if (ctx->pc != 0x298DA8u) { return; }
    }
    ctx->pc = 0x298DA8u;
label_298da8:
    // 0x298da8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x298da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x298dac: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x298dacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x298db0: 0x0  nop
    ctx->pc = 0x298db0u;
    // NOP
    // 0x298db4: 0x0  nop
    ctx->pc = 0x298db4u;
    // NOP
    // 0x298db8: 0x0  nop
    ctx->pc = 0x298db8u;
    // NOP
    // 0x298dbc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x298DBCu;
    {
        const bool branch_taken_0x298dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298dbc) {
            ctx->pc = 0x298DA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298da0;
        }
    }
    ctx->pc = 0x298DC4u;
label_298dc4:
    // 0x298dc4: 0x0  nop
    ctx->pc = 0x298dc4u;
    // NOP
    // 0x298dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298dcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x298DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298DD0u;
            // 0x298dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298DD8u;
}
