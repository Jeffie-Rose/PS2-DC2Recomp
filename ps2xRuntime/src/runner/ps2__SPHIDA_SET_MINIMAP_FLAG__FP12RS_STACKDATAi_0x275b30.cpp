#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_MINIMAP_FLAG__FP12RS_STACKDATAi
// Address: 0x275b30 - 0x275b68
void ps2__SPHIDA_SET_MINIMAP_FLAG__FP12RS_STACKDATAi_0x275b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_MINIMAP_FLAG__FP12RS_STACKDATAi_0x275b30");
#endif

    switch (ctx->pc) {
        case 0x275b40u: goto label_275b40;
        default: break;
    }

    ctx->pc = 0x275b30u;

    // 0x275b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275b38: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275B38u;
    SET_GPR_U32(ctx, 31, 0x275B40u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B40u; }
        if (ctx->pc != 0x275B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B40u; }
        if (ctx->pc != 0x275B40u) { return; }
    }
    ctx->pc = 0x275B40u;
label_275b40:
    // 0x275b40: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x275b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275b44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275B44u;
    {
        const bool branch_taken_0x275b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275b44) {
            ctx->pc = 0x275B54u;
            goto label_275b54;
        }
    }
    ctx->pc = 0x275B4Cu;
    // 0x275b4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275B4Cu;
    {
        const bool branch_taken_0x275b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275B4Cu;
            // 0x275b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b4c) {
            ctx->pc = 0x275B5Cu;
            goto label_275b5c;
        }
    }
    ctx->pc = 0x275B54u;
label_275b54:
    // 0x275b54: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x275b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x275b58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275b5c:
    // 0x275b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275b60: 0x3e00008  jr          $ra
    ctx->pc = 0x275B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275B60u;
            // 0x275b64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275B68u;
}
