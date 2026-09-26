#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckKeyInput__12CMenuKeyFuncFv
// Address: 0x23e470 - 0x23e49c
void CheckKeyInput__12CMenuKeyFuncFv_0x23e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckKeyInput__12CMenuKeyFuncFv_0x23e470");
#endif

    ctx->pc = 0x23e470u;

    // 0x23e470: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x23e470u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x23e474: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E474u;
    {
        const bool branch_taken_0x23e474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e474) {
            ctx->pc = 0x23E484u;
            goto label_23e484;
        }
    }
    ctx->pc = 0x23E47Cu;
    // 0x23e47c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x23e480: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x23e480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_23e484:
    // 0x23e484: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23e488: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E488u;
    {
        const bool branch_taken_0x23e488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E488u;
            // 0x23e48c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e488) {
            ctx->pc = 0x23E494u;
            goto label_23e494;
        }
    }
    ctx->pc = 0x23E490u;
    // 0x23e490: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x23e490u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_23e494:
    // 0x23e494: 0x3e00008  jr          $ra
    ctx->pc = 0x23E494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E494u;
            // 0x23e498: 0x90820002  lbu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E49Cu;
}
