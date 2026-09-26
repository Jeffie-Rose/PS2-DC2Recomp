#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__18CRocketLauncherManFv
// Address: 0x1b6870 - 0x1b68ec
void Draw__18CRocketLauncherManFv_0x1b6870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__18CRocketLauncherManFv_0x1b6870");
#endif

    switch (ctx->pc) {
        case 0x1b68a0u: goto label_1b68a0;
        case 0x1b68b4u: goto label_1b68b4;
        case 0x1b68bcu: goto label_1b68bc;
        default: break;
    }

    ctx->pc = 0x1b6870u;

    // 0x1b6870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b6874: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b6874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b6878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b6878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b687c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b6880: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b6880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6884: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b6888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b688c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b688cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6894: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b6894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6898: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1b6898u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1b689c: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x1b689cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_1b68a0:
    // 0x1b68a0: 0x2929821  addu        $s3, $s4, $s2
    ctx->pc = 0x1b68a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1b68a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b68a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68a8: 0x8e650180  lw          $a1, 0x180($s3)
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
    // 0x1b68ac: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1B68ACu;
    SET_GPR_U32(ctx, 31, 0x1B68B4u);
    ctx->pc = 0x1B68B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68ACu;
            // 0x1b68b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68B4u; }
        if (ctx->pc != 0x1B68B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68B4u; }
        if (ctx->pc != 0x1B68B4u) { return; }
    }
    ctx->pc = 0x1B68B4u;
label_1b68b4:
    // 0x1b68b4: 0xc06d958  jal         func_1B6560
    ctx->pc = 0x1B68B4u;
    SET_GPR_U32(ctx, 31, 0x1B68BCu);
    ctx->pc = 0x1B68B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68B4u;
            // 0x1b68b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6560u;
    if (runtime->hasFunction(0x1B6560u)) {
        auto targetFn = runtime->lookupFunction(0x1B6560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68BCu; }
        if (ctx->pc != 0x1B68BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__15CRocketLauncherFv_0x1b6560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B68BCu; }
        if (ctx->pc != 0x1B68BCu) { return; }
    }
    ctx->pc = 0x1B68BCu;
label_1b68bc:
    // 0x1b68bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b68bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b68c0: 0x2a230018  slti        $v1, $s1, 0x18
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1b68c4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B68C4u;
    {
        const bool branch_taken_0x1b68c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B68C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68C4u;
            // 0x1b68c8: 0x26520190  addiu       $s2, $s2, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68c4) {
            ctx->pc = 0x1B68A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b68a0;
        }
    }
    ctx->pc = 0x1B68CCu;
    // 0x1b68cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b68ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b68d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b68d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b68d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b68d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b68d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b68d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b68dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b68dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b68e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b68e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b68e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B68E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B68E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B68E4u;
            // 0x1b68e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B68ECu;
}
