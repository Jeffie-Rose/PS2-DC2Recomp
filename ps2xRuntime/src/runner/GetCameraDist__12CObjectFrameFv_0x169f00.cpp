#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraDist__12CObjectFrameFv
// Address: 0x169f00 - 0x169f28
void GetCameraDist__12CObjectFrameFv_0x169f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraDist__12CObjectFrameFv_0x169f00");
#endif

    switch (ctx->pc) {
        case 0x169f14u: goto label_169f14;
        case 0x169f1cu: goto label_169f1c;
        default: break;
    }

    ctx->pc = 0x169f00u;

    // 0x169f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169f08: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x169f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x169f0c: 0xc04de0c  jal         func_137830
    ctx->pc = 0x169F0Cu;
    SET_GPR_U32(ctx, 31, 0x169F14u);
    ctx->pc = 0x169F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F0Cu;
            // 0x169f10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F14u; }
        if (ctx->pc != 0x169F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F14u; }
        if (ctx->pc != 0x169F14u) { return; }
    }
    ctx->pc = 0x169F14u;
label_169f14:
    // 0x169f14: 0xc0516c8  jal         func_145B20
    ctx->pc = 0x169F14u;
    SET_GPR_U32(ctx, 31, 0x169F1Cu);
    ctx->pc = 0x169F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F14u;
            // 0x169f18: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B20u;
    if (runtime->hasFunction(0x145B20u)) {
        auto targetFn = runtime->lookupFunction(0x145B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F1Cu; }
        if (ctx->pc != 0x169F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDistFromCamera__FPf_0x145b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F1Cu; }
        if (ctx->pc != 0x169F1Cu) { return; }
    }
    ctx->pc = 0x169F1Cu;
label_169f1c:
    // 0x169f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f20: 0x3e00008  jr          $ra
    ctx->pc = 0x169F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F20u;
            // 0x169f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F28u;
}
