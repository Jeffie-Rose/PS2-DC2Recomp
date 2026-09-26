#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditNowPlaceAnime__Fv
// Address: 0x2fbb10 - 0x2fbb60
void EditNowPlaceAnime__Fv_0x2fbb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditNowPlaceAnime__Fv_0x2fbb10");
#endif

    switch (ctx->pc) {
        case 0x2fbb24u: goto label_2fbb24;
        default: break;
    }

    ctx->pc = 0x2fbb10u;

    // 0x2fbb10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fbb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbb14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fbb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbb18: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fbb18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2fbb1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fbb20: 0x248496d0  addiu       $a0, $a0, -0x6930
    ctx->pc = 0x2fbb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940368));
label_2fbb24:
    // 0x2fbb24: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2fbb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2fbb28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbb2c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBB2Cu;
    {
        const bool branch_taken_0x2fbb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fbb2c) {
            ctx->pc = 0x2FBB44u;
            goto label_2fbb44;
        }
    }
    ctx->pc = 0x2FBB34u;
    // 0x2fbb34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBB34u;
    {
        const bool branch_taken_0x2fbb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB34u;
            // 0x2fbb38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb34) {
            ctx->pc = 0x2FBB44u;
            goto label_2fbb44;
        }
    }
    ctx->pc = 0x2FBB3Cu;
    // 0x2fbb3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBB3Cu;
    {
        const bool branch_taken_0x2fbb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbb3c) {
            ctx->pc = 0x2FBB58u;
            goto label_2fbb58;
        }
    }
    ctx->pc = 0x2FBB44u;
label_2fbb44:
    // 0x2fbb44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbb48: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2fbb48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fbb4c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2FBB4Cu;
    {
        const bool branch_taken_0x2fbb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB4Cu;
            // 0x2fbb50: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb4c) {
            ctx->pc = 0x2FBB24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbb24;
        }
    }
    ctx->pc = 0x2FBB54u;
    // 0x2fbb54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fbb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbb58:
    // 0x2fbb58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBB60u;
}
