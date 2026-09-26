#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_PAKU_MOTION__FP12RS_STACKDATAi
// Address: 0x265b50 - 0x265b98
void ps2__RESET_PAKU_MOTION__FP12RS_STACKDATAi_0x265b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_PAKU_MOTION__FP12RS_STACKDATAi_0x265b50");
#endif

    switch (ctx->pc) {
        case 0x265b74u: goto label_265b74;
        case 0x265b88u: goto label_265b88;
        default: break;
    }

    ctx->pc = 0x265b50u;

    // 0x265b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x265b54: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x265b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x265b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265b5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x265b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265b60: 0xaf8297fc  sw          $v0, -0x6804($gp)
    ctx->pc = 0x265b60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940668), GPR_U32(ctx, 2));
    // 0x265b64: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x265b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x265b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b6c: 0xc049c86  jal         func_127218
    ctx->pc = 0x265B6Cu;
    SET_GPR_U32(ctx, 31, 0x265B74u);
    ctx->pc = 0x265B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265B6Cu;
            // 0x265b70: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B74u; }
        if (ctx->pc != 0x265B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B74u; }
        if (ctx->pc != 0x265B74u) { return; }
    }
    ctx->pc = 0x265B74u;
label_265b74:
    // 0x265b74: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x265b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x265b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b7c: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x265b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x265b80: 0xc049c86  jal         func_127218
    ctx->pc = 0x265B80u;
    SET_GPR_U32(ctx, 31, 0x265B88u);
    ctx->pc = 0x265B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265B80u;
            // 0x265b84: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B88u; }
        if (ctx->pc != 0x265B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B88u; }
        if (ctx->pc != 0x265B88u) { return; }
    }
    ctx->pc = 0x265B88u;
label_265b88:
    // 0x265b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265b90: 0x3e00008  jr          $ra
    ctx->pc = 0x265B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265B90u;
            // 0x265b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265B98u;
}
