#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__Q26CScene8BGM_INFOFv
// Address: 0x2a5b00 - 0x2a5b24
void Init__Q26CScene8BGM_INFOFv_0x2a5b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__Q26CScene8BGM_INFOFv_0x2a5b00");
#endif

    ctx->pc = 0x2a5b00u;

    // 0x2a5b00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a5b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5b04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5b08: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2a5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2a5b0c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2a5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2a5b10: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2a5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2a5b14: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2a5b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2a5b18: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2a5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2a5b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5B1Cu;
            // 0x2a5b20: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5B24u;
}
