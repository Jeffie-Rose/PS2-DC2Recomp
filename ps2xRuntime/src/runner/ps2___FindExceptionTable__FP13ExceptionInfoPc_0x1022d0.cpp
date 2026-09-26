#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __FindExceptionTable__FP13ExceptionInfoPc
// Address: 0x1022d0 - 0x1022f0
void ps2___FindExceptionTable__FP13ExceptionInfoPc_0x1022d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___FindExceptionTable__FP13ExceptionInfoPc_0x1022d0");
#endif

    ctx->pc = 0x1022d0u;

    // 0x1022d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1022d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1022d4: 0x24426480  addiu       $v0, $v0, 0x6480
    ctx->pc = 0x1022d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25728));
    // 0x1022d8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1022d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1022dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1022dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1022e0: 0x24426480  addiu       $v0, $v0, 0x6480
    ctx->pc = 0x1022e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25728));
    // 0x1022e4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1022e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1022e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1022E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1022ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022E8u;
            // 0x1022ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1022F0u;
}
