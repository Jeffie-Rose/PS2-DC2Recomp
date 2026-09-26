#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCalcBufAlignment__FP1
// Address: 0x2510c0 - 0x251100
void MenuCalcBufAlignment__FP1_0x2510c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCalcBufAlignment__FP1_0x2510c0");
#endif

    ctx->pc = 0x2510c0u;

    // 0x2510c0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2510C0u;
    {
        const bool branch_taken_0x2510c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2510C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2510C0u;
            // 0x2510c4: 0x3082003f  andi        $v0, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510c0) {
            ctx->pc = 0x2510D4u;
            goto label_2510d4;
        }
    }
    ctx->pc = 0x2510C8u;
    // 0x2510c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2510C8u;
    {
        const bool branch_taken_0x2510c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510c8) {
            ctx->pc = 0x2510D4u;
            goto label_2510d4;
        }
    }
    ctx->pc = 0x2510D0u;
    // 0x2510d0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x2510d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_2510d4:
    // 0x2510d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2510D4u;
    {
        const bool branch_taken_0x2510d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2510D4u;
            // 0x2510d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510d4) {
            ctx->pc = 0x2510F8u;
            goto label_2510f8;
        }
    }
    ctx->pc = 0x2510DCu;
    // 0x2510dc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2510DCu;
    {
        const bool branch_taken_0x2510dc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2510E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2510DCu;
            // 0x2510e0: 0x41183  sra         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510dc) {
            ctx->pc = 0x2510ECu;
            goto label_2510ec;
        }
    }
    ctx->pc = 0x2510E4u;
    // 0x2510e4: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2510e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2510e8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2510e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_2510ec:
    // 0x2510ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2510ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2510f0: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x2510f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2510f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2510f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2510f8:
    // 0x2510f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2510F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251100u;
}
