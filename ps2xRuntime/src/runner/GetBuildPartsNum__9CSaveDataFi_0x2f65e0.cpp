#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBuildPartsNum__9CSaveDataFi
// Address: 0x2f65e0 - 0x2f6614
void GetBuildPartsNum__9CSaveDataFi_0x2f65e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBuildPartsNum__9CSaveDataFi_0x2f65e0");
#endif

    ctx->pc = 0x2f65e0u;

    // 0x2f65e0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F65E0u;
    {
        const bool branch_taken_0x2f65e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F65E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F65E0u;
            // 0x2f65e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65e0) {
            ctx->pc = 0x2F65F8u;
            goto label_2f65f8;
        }
    }
    ctx->pc = 0x2F65E8u;
    // 0x2f65e8: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x2f65e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f65ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F65ECu;
    {
        const bool branch_taken_0x2f65ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F65F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F65ECu;
            // 0x2f65f0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65ec) {
            ctx->pc = 0x2F6600u;
            goto label_2f6600;
        }
    }
    ctx->pc = 0x2F65F4u;
    // 0x2f65f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f65f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f65f8:
    // 0x2f65f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F65F8u;
    {
        const bool branch_taken_0x2f65f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f65f8) {
            ctx->pc = 0x2F660Cu;
            goto label_2f660c;
        }
    }
    ctx->pc = 0x2F6600u;
label_2f6600:
    // 0x2f6600: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f6600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f6604: 0x84421a24  lh          $v0, 0x1A24($v0)
    ctx->pc = 0x2f6604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6692)));
    // 0x2f6608: 0x0  nop
    ctx->pc = 0x2f6608u;
    // NOP
label_2f660c:
    // 0x2f660c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F660Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6614u;
}
