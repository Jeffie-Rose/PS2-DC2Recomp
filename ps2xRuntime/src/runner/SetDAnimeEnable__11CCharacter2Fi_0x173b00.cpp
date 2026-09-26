#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDAnimeEnable__11CCharacter2Fi
// Address: 0x173b00 - 0x173b30
void SetDAnimeEnable__11CCharacter2Fi_0x173b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDAnimeEnable__11CCharacter2Fi_0x173b00");
#endif

    ctx->pc = 0x173b00u;

    // 0x173b00: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x173B00u;
    {
        const bool branch_taken_0x173b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x173b00) {
            ctx->pc = 0x173B1Cu;
            goto label_173b1c;
        }
    }
    ctx->pc = 0x173B08u;
    // 0x173b08: 0x84850120  lh          $a1, 0x120($a0)
    ctx->pc = 0x173b08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x173b0c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x173b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x173b10: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x173b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x173b14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173B14u;
    {
        const bool branch_taken_0x173b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B14u;
            // 0x173b18: 0xa4830120  sh          $v1, 0x120($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b14) {
            ctx->pc = 0x173B28u;
            goto label_173b28;
        }
    }
    ctx->pc = 0x173B1Cu;
label_173b1c:
    // 0x173b1c: 0x84830120  lh          $v1, 0x120($a0)
    ctx->pc = 0x173b1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x173b20: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x173b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x173b24: 0xa4830120  sh          $v1, 0x120($a0)
    ctx->pc = 0x173b24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 3));
label_173b28:
    // 0x173b28: 0x3e00008  jr          $ra
    ctx->pc = 0x173B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173B30u;
}
