#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BOMB__FP12RS_STACKDATAi
// Address: 0x2d15c0 - 0x2d15f8
void ps2__SET_BOMB__FP12RS_STACKDATAi_0x2d15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BOMB__FP12RS_STACKDATAi_0x2d15c0");
#endif

    switch (ctx->pc) {
        case 0x2d15d0u: goto label_2d15d0;
        case 0x2d15e8u: goto label_2d15e8;
        default: break;
    }

    ctx->pc = 0x2d15c0u;

    // 0x2d15c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d15c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d15c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d15c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d15c8: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2D15C8u;
    SET_GPR_U32(ctx, 31, 0x2D15D0u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D15D0u; }
        if (ctx->pc != 0x2D15D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D15D0u; }
        if (ctx->pc != 0x2D15D0u) { return; }
    }
    ctx->pc = 0x2D15D0u;
label_2d15d0:
    // 0x2d15d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d15d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15d4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2d15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2d15d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2d15d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2d15dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d15dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d15e0: 0xc0680dc  jal         func_1A0370
    ctx->pc = 0x2D15E0u;
    SET_GPR_U32(ctx, 31, 0x2D15E8u);
    ctx->pc = 0x1A0370u;
    if (runtime->hasFunction(0x1A0370u)) {
        auto targetFn = runtime->lookupFunction(0x1A0370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D15E8u; }
        if (ctx->pc != 0x2D15E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHpRate__16CBattleCharaInfoFf_0x1a0370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D15E8u; }
        if (ctx->pc != 0x2D15E8u) { return; }
    }
    ctx->pc = 0x2D15E8u;
label_2d15e8:
    // 0x2d15e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d15e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d15ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d15f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D15F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D15F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D15F0u;
            // 0x2d15f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D15F8u;
}
