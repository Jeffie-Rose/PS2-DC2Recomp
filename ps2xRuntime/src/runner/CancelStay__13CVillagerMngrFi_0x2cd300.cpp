#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelStay__13CVillagerMngrFi
// Address: 0x2cd300 - 0x2cd340
void CancelStay__13CVillagerMngrFi_0x2cd300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelStay__13CVillagerMngrFi_0x2cd300");
#endif

    switch (ctx->pc) {
        case 0x2cd310u: goto label_2cd310;
        default: break;
    }

    ctx->pc = 0x2cd300u;

    // 0x2cd300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd308: 0xc0b34a4  jal         func_2CD290
    ctx->pc = 0x2CD308u;
    SET_GPR_U32(ctx, 31, 0x2CD310u);
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD310u; }
        if (ctx->pc != 0x2CD310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD310u; }
        if (ctx->pc != 0x2CD310u) { return; }
    }
    ctx->pc = 0x2CD310u;
label_2cd310:
    // 0x2cd310: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD310u;
    {
        const bool branch_taken_0x2cd310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd310) {
            ctx->pc = 0x2CD334u;
            goto label_2cd334;
        }
    }
    ctx->pc = 0x2CD318u;
    // 0x2cd318: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2cd318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cd31c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cd31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cd320: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x2cd320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x2cd324: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2cd324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cd328: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD328u;
    {
        const bool branch_taken_0x2cd328 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2cd328) {
            ctx->pc = 0x2CD334u;
            goto label_2cd334;
        }
    }
    ctx->pc = 0x2CD330u;
    // 0x2cd330: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2cd330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_2cd334:
    // 0x2cd334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd338: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD338u;
            // 0x2cd33c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD340u;
}
