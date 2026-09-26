#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MUTEKI__FP12RS_STACKDATAi
// Address: 0x2cf980 - 0x2cf9bc
void ps2__SET_MUTEKI__FP12RS_STACKDATAi_0x2cf980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MUTEKI__FP12RS_STACKDATAi_0x2cf980");
#endif

    switch (ctx->pc) {
        case 0x2cf9a0u: goto label_2cf9a0;
        default: break;
    }

    ctx->pc = 0x2cf980u;

    // 0x2cf980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf988: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF988u;
    {
        const bool branch_taken_0x2cf988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF988u;
            // 0x2cf98c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf988) {
            ctx->pc = 0x2CF998u;
            goto label_2cf998;
        }
    }
    ctx->pc = 0x2CF990u;
    // 0x2cf990: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF990u;
    {
        const bool branch_taken_0x2cf990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF990u;
            // 0x2cf994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf990) {
            ctx->pc = 0x2CF9B0u;
            goto label_2cf9b0;
        }
    }
    ctx->pc = 0x2CF998u;
label_2cf998:
    // 0x2cf998: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF998u;
    SET_GPR_U32(ctx, 31, 0x2CF9A0u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF9A0u; }
        if (ctx->pc != 0x2CF9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF9A0u; }
        if (ctx->pc != 0x2CF9A0u) { return; }
    }
    ctx->pc = 0x2CF9A0u;
label_2cf9a0:
    // 0x2cf9a0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf9a4: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf9a8: 0xac620768  sw          $v0, 0x768($v1)
    ctx->pc = 0x2cf9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1896), GPR_U32(ctx, 2));
    // 0x2cf9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf9b0:
    // 0x2cf9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF9B4u;
            // 0x2cf9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF9BCu;
}
