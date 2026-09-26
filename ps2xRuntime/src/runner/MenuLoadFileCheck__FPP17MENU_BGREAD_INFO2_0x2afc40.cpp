#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuLoadFileCheck__FPP17MENU_BGREAD_INFO2
// Address: 0x2afc40 - 0x2afc88
void MenuLoadFileCheck__FPP17MENU_BGREAD_INFO2_0x2afc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuLoadFileCheck__FPP17MENU_BGREAD_INFO2_0x2afc40");
#endif

    switch (ctx->pc) {
        case 0x2afc4cu: goto label_2afc4c;
        default: break;
    }

    ctx->pc = 0x2afc40u;

    // 0x2afc40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2afc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2afc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2afc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afc4c:
    // 0x2afc4c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2afc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2afc50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2afc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afc54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFC54u;
    {
        const bool branch_taken_0x2afc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afc54) {
            ctx->pc = 0x2AFC6Cu;
            goto label_2afc6c;
        }
    }
    ctx->pc = 0x2AFC5Cu;
    // 0x2afc5c: 0x80630070  lb          $v1, 0x70($v1)
    ctx->pc = 0x2afc5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2afc60: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFC60u;
    {
        const bool branch_taken_0x2afc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afc60) {
            ctx->pc = 0x2AFC6Cu;
            goto label_2afc6c;
        }
    }
    ctx->pc = 0x2AFC68u;
    // 0x2afc68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2afc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afc6c:
    // 0x2afc6c: 0x0  nop
    ctx->pc = 0x2afc6cu;
    // NOP
    // 0x2afc70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2afc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2afc74: 0x28a30007  slti        $v1, $a1, 0x7
    ctx->pc = 0x2afc74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2afc78: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2AFC78u;
    {
        const bool branch_taken_0x2afc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFC78u;
            // 0x2afc7c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc78) {
            ctx->pc = 0x2AFC4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2afc4c;
        }
    }
    ctx->pc = 0x2AFC80u;
    // 0x2afc80: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFC88u;
}
