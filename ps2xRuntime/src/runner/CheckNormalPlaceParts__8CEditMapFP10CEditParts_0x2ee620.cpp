#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckNormalPlaceParts__8CEditMapFP10CEditParts
// Address: 0x2ee620 - 0x2ee660
void CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620");
#endif

    ctx->pc = 0x2ee620u;

    // 0x2ee620: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE620u;
    {
        const bool branch_taken_0x2ee620 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE620u;
            // 0x2ee624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee620) {
            ctx->pc = 0x2EE630u;
            goto label_2ee630;
        }
    }
    ctx->pc = 0x2EE628u;
    // 0x2ee628: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EE628u;
    {
        const bool branch_taken_0x2ee628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee628) {
            ctx->pc = 0x2EE658u;
            goto label_2ee658;
        }
    }
    ctx->pc = 0x2EE630u;
label_2ee630:
    // 0x2ee630: 0x80a20070  lb          $v0, 0x70($a1)
    ctx->pc = 0x2ee630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x2ee634: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2ee634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2ee638: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ee638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ee63c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE63Cu;
    {
        const bool branch_taken_0x2ee63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE63Cu;
            // 0x2ee640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee63c) {
            ctx->pc = 0x2EE658u;
            goto label_2ee658;
        }
    }
    ctx->pc = 0x2EE644u;
    // 0x2ee644: 0x8ca30310  lw          $v1, 0x310($a1)
    ctx->pc = 0x2ee644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 784)));
    // 0x2ee648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee64c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE64Cu;
    {
        const bool branch_taken_0x2ee64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee64c) {
            ctx->pc = 0x2EE658u;
            goto label_2ee658;
        }
    }
    ctx->pc = 0x2EE654u;
    // 0x2ee654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee658:
    // 0x2ee658: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE660u;
}
