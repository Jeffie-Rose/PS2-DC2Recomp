#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menucls1.cpp
// Address: 0x374300 - 0x37430c
void ps2___sinit_menucls1_cpp_0x374300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menucls1_cpp_0x374300");
#endif

    ctx->pc = 0x374300u;

    // 0x374300: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x374300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374304: 0x3e00008  jr          $ra
    ctx->pc = 0x374304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374304u;
            // 0x374308: 0xaf839338  sw          $v1, -0x6CC8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37430Cu;
}
