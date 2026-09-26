#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HoldStep__4CPotFv
// Address: 0x2cc820 - 0x2cc874
void HoldStep__4CPotFv_0x2cc820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HoldStep__4CPotFv_0x2cc820");
#endif

    switch (ctx->pc) {
        case 0x2cc820u: goto label_2cc820;
        case 0x2cc824u: goto label_2cc824;
        case 0x2cc828u: goto label_2cc828;
        case 0x2cc82cu: goto label_2cc82c;
        case 0x2cc830u: goto label_2cc830;
        case 0x2cc834u: goto label_2cc834;
        case 0x2cc838u: goto label_2cc838;
        case 0x2cc83cu: goto label_2cc83c;
        case 0x2cc840u: goto label_2cc840;
        case 0x2cc844u: goto label_2cc844;
        case 0x2cc848u: goto label_2cc848;
        case 0x2cc84cu: goto label_2cc84c;
        case 0x2cc850u: goto label_2cc850;
        case 0x2cc854u: goto label_2cc854;
        case 0x2cc858u: goto label_2cc858;
        case 0x2cc85cu: goto label_2cc85c;
        case 0x2cc860u: goto label_2cc860;
        case 0x2cc864u: goto label_2cc864;
        case 0x2cc868u: goto label_2cc868;
        case 0x2cc86cu: goto label_2cc86c;
        case 0x2cc870u: goto label_2cc870;
        default: break;
    }

    ctx->pc = 0x2cc820u;

label_2cc820:
    // 0x2cc820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cc824:
    // 0x2cc824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cc828:
    // 0x2cc828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cc82c:
    // 0x2cc82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cc82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc830:
    // 0x2cc830: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2cc830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2cc834:
    // 0x2cc834: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2cc838:
    if (ctx->pc == 0x2CC838u) {
        ctx->pc = 0x2CC83Cu;
        goto label_2cc83c;
    }
    ctx->pc = 0x2CC834u;
    {
        const bool branch_taken_0x2cc834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc834) {
            ctx->pc = 0x2CC864u;
            goto label_2cc864;
        }
    }
    ctx->pc = 0x2CC83Cu;
label_2cc83c:
    // 0x2cc83c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc83cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc840:
    // 0x2cc840: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2cc840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2cc844:
    // 0x2cc844: 0x320f809  jalr        $t9
label_2cc848:
    if (ctx->pc == 0x2CC848u) {
        ctx->pc = 0x2CC848u;
            // 0x2cc848: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2CC84Cu;
        goto label_2cc84c;
    }
    ctx->pc = 0x2CC844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC84Cu);
        ctx->pc = 0x2CC848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC844u;
            // 0x2cc848: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC84Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC84Cu; }
            if (ctx->pc != 0x2CC84Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CC84Cu;
label_2cc84c:
    // 0x2cc84c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2cc84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2cc850:
    // 0x2cc850: 0xc041c5c  jal         func_107170
label_2cc854:
    if (ctx->pc == 0x2CC854u) {
        ctx->pc = 0x2CC854u;
            // 0x2cc854: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x2CC858u;
        goto label_2cc858;
    }
    ctx->pc = 0x2CC850u;
    SET_GPR_U32(ctx, 31, 0x2CC858u);
    ctx->pc = 0x2CC854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC850u;
            // 0x2cc854: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC858u; }
        if (ctx->pc != 0x2CC858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC858u; }
        if (ctx->pc != 0x2CC858u) { return; }
    }
    ctx->pc = 0x2CC858u;
label_2cc858:
    // 0x2cc858: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2cc858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2cc85c:
    // 0x2cc85c: 0xc041c5c  jal         func_107170
label_2cc860:
    if (ctx->pc == 0x2CC860u) {
        ctx->pc = 0x2CC860u;
            // 0x2cc860: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2CC864u;
        goto label_2cc864;
    }
    ctx->pc = 0x2CC85Cu;
    SET_GPR_U32(ctx, 31, 0x2CC864u);
    ctx->pc = 0x2CC860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC85Cu;
            // 0x2cc860: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC864u; }
        if (ctx->pc != 0x2CC864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC864u; }
        if (ctx->pc != 0x2CC864u) { return; }
    }
    ctx->pc = 0x2CC864u;
label_2cc864:
    // 0x2cc864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc868:
    // 0x2cc868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc86c:
    // 0x2cc86c: 0x3e00008  jr          $ra
label_2cc870:
    if (ctx->pc == 0x2CC870u) {
        ctx->pc = 0x2CC870u;
            // 0x2cc870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CC874u;
        goto label_fallthrough_0x2cc86c;
    }
    ctx->pc = 0x2CC86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC86Cu;
            // 0x2cc870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cc86c:
    ctx->pc = 0x2CC874u;
}
