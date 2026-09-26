#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPrim__11CColPrimManFv
// Address: 0x1ba700 - 0x1ba74c
void GetPrim__11CColPrimManFv_0x1ba700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPrim__11CColPrimManFv_0x1ba700");
#endif

    switch (ctx->pc) {
        case 0x1ba708u: goto label_1ba708;
        default: break;
    }

    ctx->pc = 0x1ba700u;

    // 0x1ba700: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ba700u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba708:
    // 0x1ba708: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1ba708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ba70c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1ba70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1ba710: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA710u;
    {
        const bool branch_taken_0x1ba710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA710u;
            // 0x1ba714: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba710) {
            ctx->pc = 0x1BA730u;
            goto label_1ba730;
        }
    }
    ctx->pc = 0x1BA718u;
    // 0x1ba718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba71c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba720: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ba720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ba724: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1ba724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1ba728: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA728u;
    {
        const bool branch_taken_0x1ba728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA728u;
            // 0x1ba72c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba728) {
            ctx->pc = 0x1BA744u;
            goto label_1ba744;
        }
    }
    ctx->pc = 0x1BA730u;
label_1ba730:
    // 0x1ba730: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba734: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x1ba734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1ba738: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1BA738u;
    {
        const bool branch_taken_0x1ba738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA738u;
            // 0x1ba73c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba738) {
            ctx->pc = 0x1BA708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba708;
        }
    }
    ctx->pc = 0x1BA740u;
    // 0x1ba740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba744:
    // 0x1ba744: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA74Cu;
}
