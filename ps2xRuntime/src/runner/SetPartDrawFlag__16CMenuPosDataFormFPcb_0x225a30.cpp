#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPartDrawFlag__16CMenuPosDataFormFPcb
// Address: 0x225a30 - 0x225a60
void SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30");
#endif

    switch (ctx->pc) {
        case 0x225a44u: goto label_225a44;
        default: break;
    }

    ctx->pc = 0x225a30u;

    // 0x225a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225a3c: 0xc089664  jal         func_225990
    ctx->pc = 0x225A3Cu;
    SET_GPR_U32(ctx, 31, 0x225A44u);
    ctx->pc = 0x225A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225A3Cu;
            // 0x225a40: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A44u; }
        if (ctx->pc != 0x225A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A44u; }
        if (ctx->pc != 0x225A44u) { return; }
    }
    ctx->pc = 0x225A44u;
label_225a44:
    // 0x225a44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225A44u;
    {
        const bool branch_taken_0x225a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225a44) {
            ctx->pc = 0x225A50u;
            goto label_225a50;
        }
    }
    ctx->pc = 0x225A4Cu;
    // 0x225a4c: 0xa0500005  sb          $s0, 0x5($v0)
    ctx->pc = 0x225a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 16));
label_225a50:
    // 0x225a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225a58: 0x3e00008  jr          $ra
    ctx->pc = 0x225A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A58u;
            // 0x225a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225A60u;
}
