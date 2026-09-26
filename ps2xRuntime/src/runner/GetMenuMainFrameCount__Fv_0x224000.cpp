#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuMainFrameCount__Fv
// Address: 0x224000 - 0x22402c
void GetMenuMainFrameCount__Fv_0x224000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuMainFrameCount__Fv_0x224000");
#endif

    ctx->pc = 0x224000u;

    // 0x224000: 0x878393b4  lh          $v1, -0x6C4C($gp)
    ctx->pc = 0x224000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x224004: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x224004u;
    {
        const bool branch_taken_0x224004 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x224008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224004u;
            // 0x224008: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224004) {
            ctx->pc = 0x224014u;
            goto label_224014;
        }
    }
    ctx->pc = 0x22400Cu;
    // 0x22400c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x22400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224010: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x224010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_224014:
    // 0x224014: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x224014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224018: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x224018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22401c: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x22401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x224020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224024: 0x3e00008  jr          $ra
    ctx->pc = 0x224024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224024u;
            // 0x224028: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22402Cu;
}
