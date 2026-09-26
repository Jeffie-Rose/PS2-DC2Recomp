#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: WorldMoveDraw__Fv
// Address: 0x2addc0 - 0x2ade00
void WorldMoveDraw__Fv_0x2addc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WorldMoveDraw__Fv_0x2addc0");
#endif

    switch (ctx->pc) {
        case 0x2adddcu: goto label_2adddc;
        case 0x2addf4u: goto label_2addf4;
        default: break;
    }

    ctx->pc = 0x2addc0u;

    // 0x2addc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2addc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2addc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2addc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2addc8: 0x83839ae4  lb          $v1, -0x651C($gp)
    ctx->pc = 0x2addc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941412)));
    // 0x2addcc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADDCCu;
    {
        const bool branch_taken_0x2addcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2addcc) {
            ctx->pc = 0x2ADDDCu;
            goto label_2adddc;
        }
    }
    ctx->pc = 0x2ADDD4u;
    // 0x2addd4: 0xc0ab2bc  jal         func_2ACAF0
    ctx->pc = 0x2ADDD4u;
    SET_GPR_U32(ctx, 31, 0x2ADDDCu);
    ctx->pc = 0x2ADDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDD4u;
            // 0x2addd8: 0x8f849b00  lw          $a0, -0x6500($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACAF0u;
    if (runtime->hasFunction(0x2ACAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2ACAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDDCu; }
        if (ctx->pc != 0x2ADDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CWorldMapMenuFv_0x2acaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDDCu; }
        if (ctx->pc != 0x2ADDDCu) { return; }
    }
    ctx->pc = 0x2ADDDCu;
label_2adddc:
    // 0x2adddc: 0x83849ae4  lb          $a0, -0x651C($gp)
    ctx->pc = 0x2adddcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941412)));
    // 0x2adde0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2adde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adde4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADDE4u;
    {
        const bool branch_taken_0x2adde4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2adde4) {
            ctx->pc = 0x2ADDF4u;
            goto label_2addf4;
        }
    }
    ctx->pc = 0x2ADDECu;
    // 0x2addec: 0xc07c918  jal         func_1F2460
    ctx->pc = 0x2ADDECu;
    SET_GPR_U32(ctx, 31, 0x2ADDF4u);
    ctx->pc = 0x1F2460u;
    if (runtime->hasFunction(0x1F2460u)) {
        auto targetFn = runtime->lookupFunction(0x1F2460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDF4u; }
        if (ctx->pc != 0x2ADDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DngTreeMapDraw__Fv_0x1f2460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADDF4u; }
        if (ctx->pc != 0x2ADDF4u) { return; }
    }
    ctx->pc = 0x2ADDF4u;
label_2addf4:
    // 0x2addf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2addf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2addf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADDF8u;
            // 0x2addfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ADE00u;
}
