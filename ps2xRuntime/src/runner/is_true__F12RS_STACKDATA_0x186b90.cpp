#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: is_true__F12RS_STACKDATA
// Address: 0x186b90 - 0x186bc4
void is_true__F12RS_STACKDATA_0x186b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("is_true__F12RS_STACKDATA_0x186b90");
#endif

    ctx->pc = 0x186b90u;

    // 0x186b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186b94: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x186b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x186b98: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x186b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186b9c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x186b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x186ba0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x186ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x186ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186BA4u;
    {
        const bool branch_taken_0x186ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186BA4u;
            // 0x186ba8: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ba4) {
            ctx->pc = 0x186BB4u;
            goto label_186bb4;
        }
    }
    ctx->pc = 0x186BACu;
    // 0x186bac: 0x601026  xor         $v0, $v1, $zero
    ctx->pc = 0x186bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x186bb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x186bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_186bb4:
    // 0x186bb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x186bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x186bb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x186BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186BBCu;
            // 0x186bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186BC4u;
}
