#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAquariumFishTop__13CFishAquariumFi
// Address: 0x19a220 - 0x19a258
void GetAquariumFishTop__13CFishAquariumFi_0x19a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAquariumFishTop__13CFishAquariumFi_0x19a220");
#endif

    ctx->pc = 0x19a220u;

    // 0x19a220: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A220u;
    {
        const bool branch_taken_0x19a220 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A220u;
            // 0x19a224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a220) {
            ctx->pc = 0x19A230u;
            goto label_19a230;
        }
    }
    ctx->pc = 0x19A228u;
    // 0x19a228: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19A228u;
    {
        const bool branch_taken_0x19a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A228u;
            // 0x19a22c: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a228) {
            ctx->pc = 0x19A250u;
            goto label_19a250;
        }
    }
    ctx->pc = 0x19A230u;
label_19a230:
    // 0x19a230: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A230u;
    {
        const bool branch_taken_0x19a230 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19A234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A230u;
            // 0x19a234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a230) {
            ctx->pc = 0x19A240u;
            goto label_19a240;
        }
    }
    ctx->pc = 0x19A238u;
    // 0x19a238: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19A238u;
    {
        const bool branch_taken_0x19a238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A238u;
            // 0x19a23c: 0x2482028c  addiu       $v0, $a0, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a238) {
            ctx->pc = 0x19A250u;
            goto label_19a250;
        }
    }
    ctx->pc = 0x19A240u;
label_19a240:
    // 0x19a240: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A240u;
    {
        const bool branch_taken_0x19a240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19A244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A240u;
            // 0x19a244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a240) {
            ctx->pc = 0x19A250u;
            goto label_19a250;
        }
    }
    ctx->pc = 0x19A248u;
    // 0x19a248: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19A248u;
    {
        const bool branch_taken_0x19a248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A248u;
            // 0x19a24c: 0x2482043c  addiu       $v0, $a0, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a248) {
            ctx->pc = 0x19A250u;
            goto label_19a250;
        }
    }
    ctx->pc = 0x19A250u;
label_19a250:
    // 0x19a250: 0x3e00008  jr          $ra
    ctx->pc = 0x19A250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A258u;
}
