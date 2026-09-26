#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: std
// Address: 0x1255f0 - 0x125648
void std_0x1255f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_0x1255f0");
#endif

    ctx->pc = 0x1255f0u;

    // 0x1255f0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1255f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1255f4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1255f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x1255f8: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x1255f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x1255fc: 0x3c090013  lui         $t1, 0x13
    ctx->pc = 0x1255fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)19 << 16));
    // 0x125600: 0x24428940  addiu       $v0, $v0, -0x76C0
    ctx->pc = 0x125600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936896));
    // 0x125604: 0x246389a8  addiu       $v1, $v1, -0x7658
    ctx->pc = 0x125604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937000));
    // 0x125608: 0x25088a28  addiu       $t0, $t0, -0x75D8
    ctx->pc = 0x125608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937128));
    // 0x12560c: 0x25298a90  addiu       $t1, $t1, -0x7570
    ctx->pc = 0x12560cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294937232));
    // 0x125610: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x125610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x125614: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x125614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x125618: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x125618u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x12561c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x12561cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x125620: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x125620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x125624: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x125624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x125628: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x125628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x12562c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12562cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x125630: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x125630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x125634: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x125634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x125638: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x125638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12563c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x12563cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x125640: 0x3e00008  jr          $ra
    ctx->pc = 0x125640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125640u;
            // 0x125644: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125648u;
}
