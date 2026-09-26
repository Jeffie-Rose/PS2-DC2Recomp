#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetRenderInfo__Ffff
// Address: 0x143600 - 0x143618
void mgSetRenderInfo__Ffff_0x143600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetRenderInfo__Ffff_0x143600");
#endif

    ctx->pc = 0x143600u;

    // 0x143600: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x143600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x143604: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143608: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x143608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x14360c: 0x8f8787a4  lw          $a3, -0x785C($gp)
    ctx->pc = 0x14360cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
    // 0x143610: 0x804e2c0  j           func_138B00
    ctx->pc = 0x143610u;
    ctx->pc = 0x143614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143610u;
            // 0x143614: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138B00u;
    if (runtime->hasFunction(0x138B00u)) {
        auto targetFn = runtime->lookupFunction(0x138B00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetRenderInfo__13mgRENDER_INFOFfiiffi_0x138b00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x143618u;
}
