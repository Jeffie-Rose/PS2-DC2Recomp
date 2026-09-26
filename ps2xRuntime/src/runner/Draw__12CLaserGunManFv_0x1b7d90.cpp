#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CLaserGunManFv
// Address: 0x1b7d90 - 0x1b7e0c
void Draw__12CLaserGunManFv_0x1b7d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CLaserGunManFv_0x1b7d90");
#endif

    switch (ctx->pc) {
        case 0x1b7dc0u: goto label_1b7dc0;
        case 0x1b7dd4u: goto label_1b7dd4;
        case 0x1b7ddcu: goto label_1b7ddc;
        default: break;
    }

    ctx->pc = 0x1b7d90u;

    // 0x1b7d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b7d94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b7d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b7d98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b7d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b7d9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b7d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b7da0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b7da0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7da4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7dac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b7dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7db0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7db4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7db8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1b7db8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1b7dbc: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x1b7dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_1b7dc0:
    // 0x1b7dc0: 0x2929821  addu        $s3, $s4, $s2
    ctx->pc = 0x1b7dc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1b7dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7dc8: 0x8e65012c  lw          $a1, 0x12C($s3)
    ctx->pc = 0x1b7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x1b7dcc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1B7DCCu;
    SET_GPR_U32(ctx, 31, 0x1B7DD4u);
    ctx->pc = 0x1B7DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DCCu;
            // 0x1b7dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7DD4u; }
        if (ctx->pc != 0x1B7DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7DD4u; }
        if (ctx->pc != 0x1B7DD4u) { return; }
    }
    ctx->pc = 0x1B7DD4u;
label_1b7dd4:
    // 0x1b7dd4: 0xc06dde8  jal         func_1B77A0
    ctx->pc = 0x1B7DD4u;
    SET_GPR_U32(ctx, 31, 0x1B7DDCu);
    ctx->pc = 0x1B7DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DD4u;
            // 0x1b7dd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B77A0u;
    if (runtime->hasFunction(0x1B77A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B77A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7DDCu; }
        if (ctx->pc != 0x1B7DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__9CLaserGunFv_0x1b77a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7DDCu; }
        if (ctx->pc != 0x1B7DDCu) { return; }
    }
    ctx->pc = 0x1B7DDCu;
label_1b7ddc:
    // 0x1b7ddc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b7ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b7de0: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x1b7de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b7de4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B7DE4u;
    {
        const bool branch_taken_0x1b7de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DE4u;
            // 0x1b7de8: 0x26520130  addiu       $s2, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7de4) {
            ctx->pc = 0x1B7DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b7dc0;
        }
    }
    ctx->pc = 0x1B7DECu;
    // 0x1b7dec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b7decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7df0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b7df0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7df4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7df8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E04u;
            // 0x1b7e08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7E0Cu;
}
