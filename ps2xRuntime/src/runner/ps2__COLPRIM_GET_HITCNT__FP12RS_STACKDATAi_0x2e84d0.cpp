#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COLPRIM_GET_HITCNT__FP12RS_STACKDATAi
// Address: 0x2e84d0 - 0x2e8518
void ps2__COLPRIM_GET_HITCNT__FP12RS_STACKDATAi_0x2e84d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COLPRIM_GET_HITCNT__FP12RS_STACKDATAi_0x2e84d0");
#endif

    switch (ctx->pc) {
        case 0x2e8508u: goto label_2e8508;
        default: break;
    }

    ctx->pc = 0x2e84d0u;

    // 0x2e84d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e84d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e84d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e84d8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E84D8u;
    {
        const bool branch_taken_0x2e84d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E84DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E84D8u;
            // 0x2e84dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84d8) {
            ctx->pc = 0x2E84E8u;
            goto label_2e84e8;
        }
    }
    ctx->pc = 0x2E84E0u;
    // 0x2e84e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E84E0u;
    {
        const bool branch_taken_0x2e84e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E84E0u;
            // 0x2e84e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84e0) {
            ctx->pc = 0x2E850Cu;
            goto label_2e850c;
        }
    }
    ctx->pc = 0x2E84E8u;
label_2e84e8:
    // 0x2e84e8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e84ec: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e84f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E84F0u;
    {
        const bool branch_taken_0x2e84f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e84f0) {
            ctx->pc = 0x2E8500u;
            goto label_2e8500;
        }
    }
    ctx->pc = 0x2E84F8u;
    // 0x2e84f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E84F8u;
    {
        const bool branch_taken_0x2e84f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E84F8u;
            // 0x2e84fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84f8) {
            ctx->pc = 0x2E850Cu;
            goto label_2e850c;
        }
    }
    ctx->pc = 0x2E8500u;
label_2e8500:
    // 0x2e8500: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E8500u;
    SET_GPR_U32(ctx, 31, 0x2E8508u);
    ctx->pc = 0x2E8504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8500u;
            // 0x2e8504: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8508u; }
        if (ctx->pc != 0x2E8508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8508u; }
        if (ctx->pc != 0x2E8508u) { return; }
    }
    ctx->pc = 0x2E8508u;
label_2e8508:
    // 0x2e8508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e850c:
    // 0x2e850c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e850cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8510: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8510u;
            // 0x2e8514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8518u;
}
