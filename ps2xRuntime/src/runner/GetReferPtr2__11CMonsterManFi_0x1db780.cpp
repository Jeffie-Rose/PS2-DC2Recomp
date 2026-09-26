#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetReferPtr2__11CMonsterManFi
// Address: 0x1db780 - 0x1db7c0
void GetReferPtr2__11CMonsterManFi_0x1db780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetReferPtr2__11CMonsterManFi_0x1db780");
#endif

    switch (ctx->pc) {
        case 0x1db78cu: goto label_1db78c;
        default: break;
    }

    ctx->pc = 0x1db780u;

    // 0x1db780: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1db780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1db784: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB784u;
    {
        const bool branch_taken_0x1db784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB784u;
            // 0x1db788: 0x2442d9e0  addiu       $v0, $v0, -0x2620 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db784) {
            ctx->pc = 0x1DB7A4u;
            goto label_1db7a4;
        }
    }
    ctx->pc = 0x1DB78Cu;
label_1db78c:
    // 0x1db78c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1db78cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db790: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB790u;
    {
        const bool branch_taken_0x1db790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1db790) {
            ctx->pc = 0x1DB7A0u;
            goto label_1db7a0;
        }
    }
    ctx->pc = 0x1DB798u;
    // 0x1db798: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB798u;
    {
        const bool branch_taken_0x1db798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db798) {
            ctx->pc = 0x1DB7B8u;
            goto label_1db7b8;
        }
    }
    ctx->pc = 0x1DB7A0u;
label_1db7a0:
    // 0x1db7a0: 0x244200b8  addiu       $v0, $v0, 0xB8
    ctx->pc = 0x1db7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_1db7a4:
    // 0x1db7a4: 0x0  nop
    ctx->pc = 0x1db7a4u;
    // NOP
    // 0x1db7a8: 0x80430004  lb          $v1, 0x4($v0)
    ctx->pc = 0x1db7a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1db7ac: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DB7ACu;
    {
        const bool branch_taken_0x1db7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db7ac) {
            ctx->pc = 0x1DB78Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db78c;
        }
    }
    ctx->pc = 0x1DB7B4u;
    // 0x1db7b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db7b8:
    // 0x1db7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB7C0u;
}
