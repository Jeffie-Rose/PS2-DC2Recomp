#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CountScoop__15CInventUserDataFv
// Address: 0x1fed90 - 0x1fedf8
void CountScoop__15CInventUserDataFv_0x1fed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CountScoop__15CInventUserDataFv_0x1fed90");
#endif

    switch (ctx->pc) {
        case 0x1feda0u: goto label_1feda0;
        case 0x1fedacu: goto label_1fedac;
        default: break;
    }

    ctx->pc = 0x1fed90u;

    // 0x1fed90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fed94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fed98: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1FED98u;
    SET_GPR_U32(ctx, 31, 0x1FEDA0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEDA0u; }
        if (ctx->pc != 0x1FEDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEDA0u; }
        if (ctx->pc != 0x1FEDA0u) { return; }
    }
    ctx->pc = 0x1FEDA0u;
label_1feda0:
    // 0x1feda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1feda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feda4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1feda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feda8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1feda8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fedac:
    // 0x1fedac: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1fedacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fedb0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1fedb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1fedb4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1fedb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1fedb8: 0x84244dd0  lh          $a0, 0x4DD0($at)
    ctx->pc = 0x1fedb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19920)));
    // 0x1fedbc: 0x288303e8  slti        $v1, $a0, 0x3E8
    ctx->pc = 0x1fedbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1fedc0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEDC0u;
    {
        const bool branch_taken_0x1fedc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEDC0u;
            // 0x1fedc4: 0x28812710  slti        $at, $a0, 0x2710 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedc0) {
            ctx->pc = 0x1FEDD4u;
            goto label_1fedd4;
        }
    }
    ctx->pc = 0x1FEDC8u;
    // 0x1fedc8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEDC8u;
    {
        const bool branch_taken_0x1fedc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fedc8) {
            ctx->pc = 0x1FEDD4u;
            goto label_1fedd4;
        }
    }
    ctx->pc = 0x1FEDD0u;
    // 0x1fedd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fedd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fedd4:
    // 0x1fedd4: 0x0  nop
    ctx->pc = 0x1fedd4u;
    // NOP
    // 0x1fedd8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fedd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1feddc: 0x28c30200  slti        $v1, $a2, 0x200
    ctx->pc = 0x1feddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1fede0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FEDE0u;
    {
        const bool branch_taken_0x1fede0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEDE0u;
            // 0x1fede4: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fede0) {
            ctx->pc = 0x1FEDACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fedac;
        }
    }
    ctx->pc = 0x1FEDE8u;
    // 0x1fede8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fede8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fedec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fedecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fedf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEDF0u;
            // 0x1fedf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEDF8u;
}
