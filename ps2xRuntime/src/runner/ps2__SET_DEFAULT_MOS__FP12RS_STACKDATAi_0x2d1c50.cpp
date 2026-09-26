#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_DEFAULT_MOS__FP12RS_STACKDATAi
// Address: 0x2d1c50 - 0x2d1c8c
void ps2__SET_DEFAULT_MOS__FP12RS_STACKDATAi_0x2d1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_DEFAULT_MOS__FP12RS_STACKDATAi_0x2d1c50");
#endif

    switch (ctx->pc) {
        case 0x2d1c70u: goto label_2d1c70;
        default: break;
    }

    ctx->pc = 0x2d1c50u;

    // 0x2d1c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1c58: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1C58u;
    {
        const bool branch_taken_0x2d1c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C58u;
            // 0x2d1c5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c58) {
            ctx->pc = 0x2D1C68u;
            goto label_2d1c68;
        }
    }
    ctx->pc = 0x2D1C60u;
    // 0x2d1c60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1C60u;
    {
        const bool branch_taken_0x2d1c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C60u;
            // 0x2d1c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c60) {
            ctx->pc = 0x2D1C80u;
            goto label_2d1c80;
        }
    }
    ctx->pc = 0x2D1C68u;
label_2d1c68:
    // 0x2d1c68: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2D1C68u;
    SET_GPR_U32(ctx, 31, 0x2D1C70u);
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1C70u; }
        if (ctx->pc != 0x2D1C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1C70u; }
        if (ctx->pc != 0x2D1C70u) { return; }
    }
    ctx->pc = 0x2D1C70u;
label_2d1c70:
    // 0x2d1c70: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1c74: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1c78: 0xac620718  sw          $v0, 0x718($v1)
    ctx->pc = 0x2d1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1816), GPR_U32(ctx, 2));
    // 0x2d1c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1c80:
    // 0x2d1c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1c84: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C84u;
            // 0x2d1c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1C8Cu;
}
