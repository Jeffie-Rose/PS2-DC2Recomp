#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _THROW_HAND_OBJECT__FP12RS_STACKDATAi
// Address: 0x2cfa30 - 0x2cfa54
void ps2__THROW_HAND_OBJECT__FP12RS_STACKDATAi_0x2cfa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__THROW_HAND_OBJECT__FP12RS_STACKDATAi_0x2cfa30");
#endif

    switch (ctx->pc) {
        case 0x2cfa44u: goto label_2cfa44;
        default: break;
    }

    ctx->pc = 0x2cfa30u;

    // 0x2cfa30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cfa34: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cfa38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfa3c: 0xc05abd0  jal         func_16AF40
    ctx->pc = 0x2CFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2CFA44u);
    ctx->pc = 0x2CFA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA3Cu;
            // 0x2cfa40: 0x8c24d430  lw          $a0, -0x2BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AF40u;
    if (runtime->hasFunction(0x16AF40u)) {
        auto targetFn = runtime->lookupFunction(0x16AF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA44u; }
        if (ctx->pc != 0x2CFA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ThrowItemObject__12CActionCharaFv_0x16af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA44u; }
        if (ctx->pc != 0x2CFA44u) { return; }
    }
    ctx->pc = 0x2CFA44u;
label_2cfa44:
    // 0x2cfa44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfa44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfa48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFA4Cu;
            // 0x2cfa50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFA54u;
}
