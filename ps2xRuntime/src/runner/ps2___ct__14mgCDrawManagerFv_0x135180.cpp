#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14mgCDrawManagerFv
// Address: 0x135180 - 0x13519c
void ps2___ct__14mgCDrawManagerFv_0x135180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14mgCDrawManagerFv_0x135180");
#endif

    ctx->pc = 0x135180u;

    // 0x135180: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x135180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x135184: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x135184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x135188: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x135188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x13518c: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x13518cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x135190: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x135190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135194: 0x3e00008  jr          $ra
    ctx->pc = 0x135194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13519Cu;
}
