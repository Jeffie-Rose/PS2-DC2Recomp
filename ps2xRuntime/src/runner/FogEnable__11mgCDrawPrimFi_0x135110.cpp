#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FogEnable__11mgCDrawPrimFi
// Address: 0x135110 - 0x135130
void FogEnable__11mgCDrawPrimFi_0x135110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FogEnable__11mgCDrawPrimFi_0x135110");
#endif

    ctx->pc = 0x135110u;

    // 0x135110: 0x90860050  lbu         $a2, 0x50($a0)
    ctx->pc = 0x135110u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x135114: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x135114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x135118: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x135118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13511c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x13511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x135120: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x135120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x135124: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x135124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x135128: 0x3e00008  jr          $ra
    ctx->pc = 0x135128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13512Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135128u;
            // 0x13512c: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135130u;
}
