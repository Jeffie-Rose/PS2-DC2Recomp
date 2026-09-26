#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PIYORI_MARK__FP12RS_STACKDATAi
// Address: 0x1e7510 - 0x1e7544
void ps2__SET_PIYORI_MARK__FP12RS_STACKDATAi_0x1e7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PIYORI_MARK__FP12RS_STACKDATAi_0x1e7510");
#endif

    switch (ctx->pc) {
        case 0x1e7534u: goto label_1e7534;
        default: break;
    }

    ctx->pc = 0x1e7510u;

    // 0x1e7510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7518: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e7518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e751c: 0x8462133a  lh          $v0, 0x133A($v1)
    ctx->pc = 0x1e751cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4922)));
    // 0x1e7520: 0xa4621338  sh          $v0, 0x1338($v1)
    ctx->pc = 0x1e7520u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4920), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7524: 0x8f858e70  lw          $a1, -0x7190($gp)
    ctx->pc = 0x1e7524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e7528: 0x84a61338  lh          $a2, 0x1338($a1)
    ctx->pc = 0x1e7528u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x1e752c: 0xc072630  jal         func_1C98C0
    ctx->pc = 0x1E752Cu;
    SET_GPR_U32(ctx, 31, 0x1E7534u);
    ctx->pc = 0x1E7530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E752Cu;
            // 0x1e7530: 0x24a41270  addiu       $a0, $a1, 0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C98C0u;
    if (runtime->hasFunction(0x1C98C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C98C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7534u; }
        if (ctx->pc != 0x1E7534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__7CPiyoriFP9mgCObjects_0x1c98c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7534u; }
        if (ctx->pc != 0x1E7534u) { return; }
    }
    ctx->pc = 0x1E7534u;
label_1e7534:
    // 0x1e7534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e753c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E753Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E753Cu;
            // 0x1e7540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7544u;
}
