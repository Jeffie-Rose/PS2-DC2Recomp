#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: VSyncCallBack__Fi
// Address: 0x15c060 - 0x15c08c
void VSyncCallBack__Fi_0x15c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSyncCallBack__Fi_0x15c060");
#endif

    ctx->pc = 0x15c060u;

    // 0x15c060: 0x8f828908  lw          $v0, -0x76F8($gp)
    ctx->pc = 0x15c060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x15c064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15c068: 0xaf828908  sw          $v0, -0x76F8($gp)
    ctx->pc = 0x15c068u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 2));
    // 0x15c06c: 0x8f828908  lw          $v0, -0x76F8($gp)
    ctx->pc = 0x15c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x15c070: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C070u;
    {
        const bool branch_taken_0x15c070 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15c070) {
            ctx->pc = 0x15C07Cu;
            goto label_15c07c;
        }
    }
    ctx->pc = 0x15C078u;
    // 0x15c078: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x15c078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_15c07c:
    // 0x15c07c: 0xf  sync
    ctx->pc = 0x15c07cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x15c080: 0x42000038  ei
    ctx->pc = 0x15c080u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x15c084: 0x3e00008  jr          $ra
    ctx->pc = 0x15C084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C084u;
            // 0x15c088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C08Cu;
}
