#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_RNDC_MOT_NOWT__FP12RS_STACKDATAi
// Address: 0x279700 - 0x279724
void ps2__GET_RNDC_MOT_NOWT__FP12RS_STACKDATAi_0x279700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_RNDC_MOT_NOWT__FP12RS_STACKDATAi_0x279700");
#endif

    switch (ctx->pc) {
        case 0x279714u: goto label_279714;
        default: break;
    }

    ctx->pc = 0x279700u;

    // 0x279700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279704: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x279704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x279708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27970c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27970Cu;
    SET_GPR_U32(ctx, 31, 0x279714u);
    ctx->pc = 0x279710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27970Cu;
            // 0x279710: 0xc42c4ee8  lwc1        $f12, 0x4EE8($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279714u; }
        if (ctx->pc != 0x279714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279714u; }
        if (ctx->pc != 0x279714u) { return; }
    }
    ctx->pc = 0x279714u;
label_279714:
    // 0x279714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27971c: 0x3e00008  jr          $ra
    ctx->pc = 0x27971Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27971Cu;
            // 0x279720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279724u;
}
