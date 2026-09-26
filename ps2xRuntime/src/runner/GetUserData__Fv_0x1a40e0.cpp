#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUserData__Fv
// Address: 0x1a40e0 - 0x1a4114
void GetUserData__Fv_0x1a40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUserData__Fv_0x1a40e0");
#endif

    switch (ctx->pc) {
        case 0x1a40f0u: goto label_1a40f0;
        default: break;
    }

    ctx->pc = 0x1a40e0u;

    // 0x1a40e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a40e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a40e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a40e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a40e8: 0xc064220  jal         func_190880
    ctx->pc = 0x1A40E8u;
    SET_GPR_U32(ctx, 31, 0x1A40F0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40F0u; }
        if (ctx->pc != 0x1A40F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40F0u; }
        if (ctx->pc != 0x1A40F0u) { return; }
    }
    ctx->pc = 0x1A40F0u;
label_1a40f0:
    // 0x1a40f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A40F0u;
    {
        const bool branch_taken_0x1a40f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40F0u;
            // 0x1a40f4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40f0) {
            ctx->pc = 0x1A4104u;
            goto label_1a4104;
        }
    }
    ctx->pc = 0x1A40F8u;
    // 0x1a40f8: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x1a40f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x1a40fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A40FCu;
    {
        const bool branch_taken_0x1a40fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40FCu;
            // 0x1a4100: 0x411021  addu        $v0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40fc) {
            ctx->pc = 0x1A4108u;
            goto label_1a4108;
        }
    }
    ctx->pc = 0x1A4104u;
label_1a4104:
    // 0x1a4104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4108:
    // 0x1a4108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a410c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A410Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A410Cu;
            // 0x1a4110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4114u;
}
