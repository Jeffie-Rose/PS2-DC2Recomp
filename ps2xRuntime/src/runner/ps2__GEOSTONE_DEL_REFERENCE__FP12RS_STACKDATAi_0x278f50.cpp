#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GEOSTONE_DEL_REFERENCE__FP12RS_STACKDATAi
// Address: 0x278f50 - 0x278f88
void ps2__GEOSTONE_DEL_REFERENCE__FP12RS_STACKDATAi_0x278f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GEOSTONE_DEL_REFERENCE__FP12RS_STACKDATAi_0x278f50");
#endif

    switch (ctx->pc) {
        case 0x278f78u: goto label_278f78;
        default: break;
    }

    ctx->pc = 0x278f50u;

    // 0x278f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278f54: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x278f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x278f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278f5c: 0x8c245230  lw          $a0, 0x5230($at)
    ctx->pc = 0x278f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21040)));
    // 0x278f60: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278F60u;
    {
        const bool branch_taken_0x278f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F60u;
            // 0x278f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f60) {
            ctx->pc = 0x278F70u;
            goto label_278f70;
        }
    }
    ctx->pc = 0x278F68u;
    // 0x278f68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x278F68u;
    {
        const bool branch_taken_0x278f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F68u;
            // 0x278f6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f68) {
            ctx->pc = 0x278F80u;
            goto label_278f80;
        }
    }
    ctx->pc = 0x278F70u;
label_278f70:
    // 0x278f70: 0xc04db18  jal         func_136C60
    ctx->pc = 0x278F70u;
    SET_GPR_U32(ctx, 31, 0x278F78u);
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F78u; }
        if (ctx->pc != 0x278F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F78u; }
        if (ctx->pc != 0x278F78u) { return; }
    }
    ctx->pc = 0x278F78u;
label_278f78:
    // 0x278f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278f7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_278f80:
    // 0x278f80: 0x3e00008  jr          $ra
    ctx->pc = 0x278F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F80u;
            // 0x278f84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278F88u;
}
