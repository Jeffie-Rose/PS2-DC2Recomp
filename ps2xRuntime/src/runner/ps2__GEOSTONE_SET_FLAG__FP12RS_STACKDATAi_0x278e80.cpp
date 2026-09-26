#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GEOSTONE_SET_FLAG__FP12RS_STACKDATAi
// Address: 0x278e80 - 0x278eb0
void ps2__GEOSTONE_SET_FLAG__FP12RS_STACKDATAi_0x278e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GEOSTONE_SET_FLAG__FP12RS_STACKDATAi_0x278e80");
#endif

    switch (ctx->pc) {
        case 0x278e90u: goto label_278e90;
        case 0x278ea0u: goto label_278ea0;
        default: break;
    }

    ctx->pc = 0x278e80u;

    // 0x278e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278e88: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278E88u;
    SET_GPR_U32(ctx, 31, 0x278E90u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E90u; }
        if (ctx->pc != 0x278E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E90u; }
        if (ctx->pc != 0x278E90u) { return; }
    }
    ctx->pc = 0x278E90u;
label_278e90:
    // 0x278e90: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x278e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x278e94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x278e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e98: 0xc0a2ef0  jal         func_28BBC0
    ctx->pc = 0x278E98u;
    SET_GPR_U32(ctx, 31, 0x278EA0u);
    ctx->pc = 0x278E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278E98u;
            // 0x278e9c: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BBC0u;
    if (runtime->hasFunction(0x28BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x28BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EA0u; }
        if (ctx->pc != 0x278EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFlag__9CGeoStoneFi_0x28bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EA0u; }
        if (ctx->pc != 0x278EA0u) { return; }
    }
    ctx->pc = 0x278EA0u;
label_278ea0:
    // 0x278ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x278EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EA8u;
            // 0x278eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278EB0u;
}
