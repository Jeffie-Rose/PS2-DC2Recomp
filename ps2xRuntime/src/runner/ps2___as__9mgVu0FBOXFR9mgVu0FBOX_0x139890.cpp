#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__9mgVu0FBOXFR9mgVu0FBOX
// Address: 0x139890 - 0x1398a8
void ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890");
#endif

    ctx->pc = 0x139890u;

    // 0x139890: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x139890u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139894: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x139894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139898: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x139898u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x13989c: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x13989cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1398a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1398A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1398A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1398A0u;
            // 0x1398a4: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1398A8u;
}
