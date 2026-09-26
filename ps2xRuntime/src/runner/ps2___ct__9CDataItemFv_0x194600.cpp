#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CDataItemFv
// Address: 0x194600 - 0x19461c
void ps2___ct__9CDataItemFv_0x194600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CDataItemFv_0x194600");
#endif

    ctx->pc = 0x194600u;

    // 0x194600: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x194600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x194604: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x194604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194608: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x194608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x19460c: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x19460cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x194610: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x194610u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x194614: 0x3e00008  jr          $ra
    ctx->pc = 0x194614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194614u;
            // 0x194618: 0xa480000e  sh          $zero, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19461Cu;
}
