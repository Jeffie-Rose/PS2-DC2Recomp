#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__14CRepairManagerFv
// Address: 0x22e1a0 - 0x22e230
void Draw__14CRepairManagerFv_0x22e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__14CRepairManagerFv_0x22e1a0");
#endif

    switch (ctx->pc) {
        case 0x22e1a0u: goto label_22e1a0;
        case 0x22e1a4u: goto label_22e1a4;
        case 0x22e1a8u: goto label_22e1a8;
        case 0x22e1acu: goto label_22e1ac;
        case 0x22e1b0u: goto label_22e1b0;
        case 0x22e1b4u: goto label_22e1b4;
        case 0x22e1b8u: goto label_22e1b8;
        case 0x22e1bcu: goto label_22e1bc;
        case 0x22e1c0u: goto label_22e1c0;
        case 0x22e1c4u: goto label_22e1c4;
        case 0x22e1c8u: goto label_22e1c8;
        case 0x22e1ccu: goto label_22e1cc;
        case 0x22e1d0u: goto label_22e1d0;
        case 0x22e1d4u: goto label_22e1d4;
        case 0x22e1d8u: goto label_22e1d8;
        case 0x22e1dcu: goto label_22e1dc;
        case 0x22e1e0u: goto label_22e1e0;
        case 0x22e1e4u: goto label_22e1e4;
        case 0x22e1e8u: goto label_22e1e8;
        case 0x22e1ecu: goto label_22e1ec;
        case 0x22e1f0u: goto label_22e1f0;
        case 0x22e1f4u: goto label_22e1f4;
        case 0x22e1f8u: goto label_22e1f8;
        case 0x22e1fcu: goto label_22e1fc;
        case 0x22e200u: goto label_22e200;
        case 0x22e204u: goto label_22e204;
        case 0x22e208u: goto label_22e208;
        case 0x22e20cu: goto label_22e20c;
        case 0x22e210u: goto label_22e210;
        case 0x22e214u: goto label_22e214;
        case 0x22e218u: goto label_22e218;
        case 0x22e21cu: goto label_22e21c;
        case 0x22e220u: goto label_22e220;
        case 0x22e224u: goto label_22e224;
        case 0x22e228u: goto label_22e228;
        case 0x22e22cu: goto label_22e22c;
        default: break;
    }

    ctx->pc = 0x22e1a0u;

label_22e1a0:
    // 0x22e1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22e1a4:
    // 0x22e1a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e1a8:
    // 0x22e1a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22e1ac:
    // 0x22e1ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22e1b0:
    // 0x22e1b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e1b4:
    // 0x22e1b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22e1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e1b8:
    // 0x22e1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22e1bc:
    // 0x22e1bc: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x22e1bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_22e1c0:
    // 0x22e1c0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_22e1c4:
    // 0x22e1c4: 0xc04ba14  jal         func_12E850
label_22e1c8:
    if (ctx->pc == 0x22E1C8u) {
        ctx->pc = 0x22E1C8u;
            // 0x22e1c8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x22E1CCu;
        goto label_22e1cc;
    }
    ctx->pc = 0x22E1C4u;
    SET_GPR_U32(ctx, 31, 0x22E1CCu);
    ctx->pc = 0x22E1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E1C4u;
            // 0x22e1c8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E1CCu; }
        if (ctx->pc != 0x22E1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E1CCu; }
        if (ctx->pc != 0x22E1CCu) { return; }
    }
    ctx->pc = 0x22E1CCu;
label_22e1cc:
    // 0x22e1cc: 0x8e4401b0  lw          $a0, 0x1B0($s2)
    ctx->pc = 0x22e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_22e1d0:
    // 0x22e1d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_22e1d4:
    if (ctx->pc == 0x22E1D4u) {
        ctx->pc = 0x22E1D4u;
            // 0x22e1d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E1D8u;
        goto label_22e1d8;
    }
    ctx->pc = 0x22E1D0u;
    {
        const bool branch_taken_0x22e1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E1D0u;
            // 0x22e1d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1d0) {
            ctx->pc = 0x22E1ECu;
            goto label_22e1ec;
        }
    }
    ctx->pc = 0x22E1D8u;
label_22e1d8:
    // 0x22e1d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e1d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e1dc:
    // 0x22e1dc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x22e1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_22e1e0:
    // 0x22e1e0: 0x320f809  jalr        $t9
label_22e1e4:
    if (ctx->pc == 0x22E1E4u) {
        ctx->pc = 0x22E1E8u;
        goto label_22e1e8;
    }
    ctx->pc = 0x22E1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E1E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E1E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E1E8u; }
            if (ctx->pc != 0x22E1E8u) { return; }
        }
        }
    }
    ctx->pc = 0x22E1E8u;
label_22e1e8:
    // 0x22e1e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e1ec:
    // 0x22e1ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e1f0:
    // 0x22e1f0: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x22e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_22e1f4:
    // 0x22e1f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x22e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22e1f8:
    // 0x22e1f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_22e1fc:
    if (ctx->pc == 0x22E1FCu) {
        ctx->pc = 0x22E200u;
        goto label_22e200;
    }
    ctx->pc = 0x22E1F8u;
    {
        const bool branch_taken_0x22e1f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e1f8) {
            ctx->pc = 0x22E208u;
            goto label_22e208;
        }
    }
    ctx->pc = 0x22E200u;
label_22e200:
    // 0x22e200: 0xc08b598  jal         func_22D660
label_22e204:
    if (ctx->pc == 0x22E204u) {
        ctx->pc = 0x22E208u;
        goto label_22e208;
    }
    ctx->pc = 0x22E200u;
    SET_GPR_U32(ctx, 31, 0x22E208u);
    ctx->pc = 0x22D660u;
    if (runtime->hasFunction(0x22D660u)) {
        auto targetFn = runtime->lookupFunction(0x22D660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E208u; }
        if (ctx->pc != 0x22E208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CRepairEffectFv_0x22d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E208u; }
        if (ctx->pc != 0x22E208u) { return; }
    }
    ctx->pc = 0x22E208u;
label_22e208:
    // 0x22e208: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22e20c:
    // 0x22e20c: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x22e20cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_22e210:
    // 0x22e210: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_22e214:
    if (ctx->pc == 0x22E214u) {
        ctx->pc = 0x22E214u;
            // 0x22e214: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x22E218u;
        goto label_22e218;
    }
    ctx->pc = 0x22E210u;
    {
        const bool branch_taken_0x22e210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E210u;
            // 0x22e214: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e210) {
            ctx->pc = 0x22E1F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e1f0;
        }
    }
    ctx->pc = 0x22E218u;
label_22e218:
    // 0x22e218: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e21c:
    // 0x22e21c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e21cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e220:
    // 0x22e220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e224:
    // 0x22e224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e228:
    // 0x22e228: 0x3e00008  jr          $ra
label_22e22c:
    if (ctx->pc == 0x22E22Cu) {
        ctx->pc = 0x22E22Cu;
            // 0x22e22c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22E230u;
        goto label_fallthrough_0x22e228;
    }
    ctx->pc = 0x22E228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E228u;
            // 0x22e22c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22e228:
    ctx->pc = 0x22E230u;
}
