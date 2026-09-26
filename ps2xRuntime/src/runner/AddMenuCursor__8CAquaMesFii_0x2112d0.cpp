#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddMenuCursor__8CAquaMesFii
// Address: 0x2112d0 - 0x211318
void AddMenuCursor__8CAquaMesFii_0x2112d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddMenuCursor__8CAquaMesFii_0x2112d0");
#endif

    ctx->pc = 0x2112d0u;

    // 0x2112d0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2112d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2112d4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2112d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2112d8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2112d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2112dc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2112dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2112e0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2112E0u;
    {
        const bool branch_taken_0x2112e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2112E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2112E0u;
            // 0x2112e4: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112e0) {
            ctx->pc = 0x2112ECu;
            goto label_2112ec;
        }
    }
    ctx->pc = 0x2112E8u;
    // 0x2112e8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2112e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_2112ec:
    // 0x2112ec: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2112ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2112f0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2112f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2112f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2112F4u;
    {
        const bool branch_taken_0x2112f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2112f4) {
            ctx->pc = 0x211300u;
            goto label_211300;
        }
    }
    ctx->pc = 0x2112FCu;
    // 0x2112fc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2112fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_211300:
    // 0x211300: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x211304: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x211304u;
    {
        const bool branch_taken_0x211304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x211308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211304u;
            // 0x211308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211304) {
            ctx->pc = 0x211310u;
            goto label_211310;
        }
    }
    ctx->pc = 0x21130Cu;
    // 0x21130c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211310:
    // 0x211310: 0x3e00008  jr          $ra
    ctx->pc = 0x211310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211318u;
}
