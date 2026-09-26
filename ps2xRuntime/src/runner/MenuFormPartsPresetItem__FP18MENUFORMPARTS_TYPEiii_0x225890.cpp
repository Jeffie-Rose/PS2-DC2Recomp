#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuFormPartsPresetItem__FP18MENUFORMPARTS_TYPEiii
// Address: 0x225890 - 0x2258c0
void MenuFormPartsPresetItem__FP18MENUFORMPARTS_TYPEiii_0x225890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuFormPartsPresetItem__FP18MENUFORMPARTS_TYPEiii_0x225890");
#endif

    switch (ctx->pc) {
        case 0x2258b4u: goto label_2258b4;
        default: break;
    }

    ctx->pc = 0x225890u;

    // 0x225890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225894: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225894u;
    {
        const bool branch_taken_0x225894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x225898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225894u;
            // 0x225898: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225894) {
            ctx->pc = 0x2258B4u;
            goto label_2258b4;
        }
    }
    ctx->pc = 0x22589Cu;
    // 0x22589c: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x22589cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2258a0: 0xa0820005  sb          $v0, 0x5($a0)
    ctx->pc = 0x2258a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2258a4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2258a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2258a8: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x2258a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x2258ac: 0xc08b100  jal         func_22C400
    ctx->pc = 0x2258ACu;
    SET_GPR_U32(ctx, 31, 0x2258B4u);
    ctx->pc = 0x2258B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2258ACu;
            // 0x2258b0: 0xac870038  sw          $a3, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C400u;
    if (runtime->hasFunction(0x22C400u)) {
        auto targetFn = runtime->lookupFunction(0x22C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2258B4u; }
        if (ctx->pc != 0x2258B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemIconSetEffectOne__FP18MENUFORMPARTS_TYPE_0x22c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2258B4u; }
        if (ctx->pc != 0x2258B4u) { return; }
    }
    ctx->pc = 0x2258B4u;
label_2258b4:
    // 0x2258b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2258b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2258b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2258B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2258BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2258B8u;
            // 0x2258bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2258C0u;
}
