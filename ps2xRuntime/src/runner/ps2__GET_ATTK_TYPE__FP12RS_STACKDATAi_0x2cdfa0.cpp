#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ATTK_TYPE__FP12RS_STACKDATAi
// Address: 0x2cdfa0 - 0x2cdfd8
void ps2__GET_ATTK_TYPE__FP12RS_STACKDATAi_0x2cdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ATTK_TYPE__FP12RS_STACKDATAi_0x2cdfa0");
#endif

    switch (ctx->pc) {
        case 0x2cdfc8u: goto label_2cdfc8;
        default: break;
    }

    ctx->pc = 0x2cdfa0u;

    // 0x2cdfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cdfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cdfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdfa8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDFA8u;
    {
        const bool branch_taken_0x2cdfa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDFA8u;
            // 0x2cdfac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfa8) {
            ctx->pc = 0x2CDFB8u;
            goto label_2cdfb8;
        }
    }
    ctx->pc = 0x2CDFB0u;
    // 0x2cdfb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDFB0u;
    {
        const bool branch_taken_0x2cdfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDFB0u;
            // 0x2cdfb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfb0) {
            ctx->pc = 0x2CDFCCu;
            goto label_2cdfcc;
        }
    }
    ctx->pc = 0x2CDFB8u;
label_2cdfb8:
    // 0x2cdfb8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cdfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cdfbc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cdfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cdfc0: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CDFC0u;
    SET_GPR_U32(ctx, 31, 0x2CDFC8u);
    ctx->pc = 0x2CDFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDFC0u;
            // 0x2cdfc4: 0x8c4506a4  lw          $a1, 0x6A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1700)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFC8u; }
        if (ctx->pc != 0x2CDFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDFC8u; }
        if (ctx->pc != 0x2CDFC8u) { return; }
    }
    ctx->pc = 0x2CDFC8u;
label_2cdfc8:
    // 0x2cdfc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cdfcc:
    // 0x2cdfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDFD0u;
            // 0x2cdfd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDFD8u;
}
