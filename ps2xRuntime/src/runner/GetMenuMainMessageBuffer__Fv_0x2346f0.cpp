#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuMainMessageBuffer__Fv
// Address: 0x2346f0 - 0x23471c
void GetMenuMainMessageBuffer__Fv_0x2346f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuMainMessageBuffer__Fv_0x2346f0");
#endif

    switch (ctx->pc) {
        case 0x234710u: goto label_234710;
        default: break;
    }

    ctx->pc = 0x2346f0u;

    // 0x2346f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2346f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2346f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2346f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2346f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2346f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2346fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2346fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x234700: 0x8c24d610  lw          $a0, -0x29F0($at)
    ctx->pc = 0x234700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956560)));
    // 0x234704: 0x24a5a818  addiu       $a1, $a1, -0x57E8
    ctx->pc = 0x234704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944792));
    // 0x234708: 0xc052734  jal         func_149CD0
    ctx->pc = 0x234708u;
    SET_GPR_U32(ctx, 31, 0x234710u);
    ctx->pc = 0x23470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234708u;
            // 0x23470c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234710u; }
        if (ctx->pc != 0x234710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234710u; }
        if (ctx->pc != 0x234710u) { return; }
    }
    ctx->pc = 0x234710u;
label_234710:
    // 0x234710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234714: 0x3e00008  jr          $ra
    ctx->pc = 0x234714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234714u;
            // 0x234718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23471Cu;
}
