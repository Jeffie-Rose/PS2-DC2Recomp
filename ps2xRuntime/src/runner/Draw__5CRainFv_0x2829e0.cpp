#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__5CRainFv
// Address: 0x2829e0 - 0x282ac0
void Draw__5CRainFv_0x2829e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__5CRainFv_0x2829e0");
#endif

    switch (ctx->pc) {
        case 0x282a08u: goto label_282a08;
        case 0x282a14u: goto label_282a14;
        case 0x282a30u: goto label_282a30;
        case 0x282a3cu: goto label_282a3c;
        case 0x282a58u: goto label_282a58;
        case 0x282a64u: goto label_282a64;
        case 0x282a80u: goto label_282a80;
        case 0x282a90u: goto label_282a90;
        case 0x282aa8u: goto label_282aa8;
        default: break;
    }

    ctx->pc = 0x2829e0u;

    // 0x2829e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2829e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2829e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2829e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2829e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2829e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2829ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2829ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2829f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2829f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2829f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2829f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2829f8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2829F8u;
    {
        const bool branch_taken_0x2829f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829F8u;
            // 0x2829fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829f8) {
            ctx->pc = 0x282AA8u;
            goto label_282aa8;
        }
    }
    ctx->pc = 0x282A00u;
    // 0x282a00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282a08:
    // 0x282a08: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x282a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x282a0c: 0xc0a07d8  jal         func_281F60
    ctx->pc = 0x282A0Cu;
    SET_GPR_U32(ctx, 31, 0x282A14u);
    ctx->pc = 0x282A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A0Cu;
            // 0x282a10: 0x244444d0  addiu       $a0, $v0, 0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281F60u;
    if (runtime->hasFunction(0x281F60u)) {
        auto targetFn = runtime->lookupFunction(0x281F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A14u; }
        if (ctx->pc != 0x282A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__9CRainDropFv_0x281f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A14u; }
        if (ctx->pc != 0x282A14u) { return; }
    }
    ctx->pc = 0x282A14u;
label_282a14:
    // 0x282a14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x282a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x282a18: 0x265200b0  addiu       $s2, $s2, 0xB0
    ctx->pc = 0x282a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x282a1c: 0x2a220032  slti        $v0, $s1, 0x32
    ctx->pc = 0x282a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x282a20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282A20u;
    {
        const bool branch_taken_0x282a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282a20) {
            ctx->pc = 0x282A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282a08;
        }
    }
    ctx->pc = 0x282A28u;
    // 0x282a28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282a30:
    // 0x282a30: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x282a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x282a34: 0xc0a07d8  jal         func_281F60
    ctx->pc = 0x282A34u;
    SET_GPR_U32(ctx, 31, 0x282A3Cu);
    ctx->pc = 0x282A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A34u;
            // 0x282a38: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281F60u;
    if (runtime->hasFunction(0x281F60u)) {
        auto targetFn = runtime->lookupFunction(0x281F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A3Cu; }
        if (ctx->pc != 0x282A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__9CRainDropFv_0x281f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A3Cu; }
        if (ctx->pc != 0x282A3Cu) { return; }
    }
    ctx->pc = 0x282A3Cu;
label_282a3c:
    // 0x282a3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x282a40: 0x263100b0  addiu       $s1, $s1, 0xB0
    ctx->pc = 0x282a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x282a44: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x282a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x282a48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282A48u;
    {
        const bool branch_taken_0x282a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282a48) {
            ctx->pc = 0x282A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282a30;
        }
    }
    ctx->pc = 0x282A50u;
    // 0x282a50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282a58:
    // 0x282a58: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x282a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x282a5c: 0xc0a06c4  jal         func_281B10
    ctx->pc = 0x282A5Cu;
    SET_GPR_U32(ctx, 31, 0x282A64u);
    ctx->pc = 0x282A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A5Cu;
            // 0x282a60: 0x24446730  addiu       $a0, $v0, 0x6730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281B10u;
    if (runtime->hasFunction(0x281B10u)) {
        auto targetFn = runtime->lookupFunction(0x281B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A64u; }
        if (ctx->pc != 0x282A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__9CParticleFv_0x281b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A64u; }
        if (ctx->pc != 0x282A64u) { return; }
    }
    ctx->pc = 0x282A64u;
label_282a64:
    // 0x282a64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x282a68: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x282a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x282a6c: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x282a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x282a70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282A70u;
    {
        const bool branch_taken_0x282a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282a70) {
            ctx->pc = 0x282A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282a58;
        }
    }
    ctx->pc = 0x282A78u;
    // 0x282a78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282a80:
    // 0x282a80: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x282a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x282a84: 0x34018670  ori         $at, $zero, 0x8670
    ctx->pc = 0x282a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34416);
    // 0x282a88: 0xc0a0578  jal         func_2815E0
    ctx->pc = 0x282A88u;
    SET_GPR_U32(ctx, 31, 0x282A90u);
    ctx->pc = 0x282A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A88u;
            // 0x282a8c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2815E0u;
    if (runtime->hasFunction(0x2815E0u)) {
        auto targetFn = runtime->lookupFunction(0x2815E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A90u; }
        if (ctx->pc != 0x282A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__7CRippleFv_0x2815e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A90u; }
        if (ctx->pc != 0x282A90u) { return; }
    }
    ctx->pc = 0x282A90u;
label_282a90:
    // 0x282a90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x282a94: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x282a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x282a98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282A98u;
    {
        const bool branch_taken_0x282a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A98u;
            // 0x282a9c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a98) {
            ctx->pc = 0x282A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282a80;
        }
    }
    ctx->pc = 0x282AA0u;
    // 0x282aa0: 0xc0a09f4  jal         func_2827D0
    ctx->pc = 0x282AA0u;
    SET_GPR_U32(ctx, 31, 0x282AA8u);
    ctx->pc = 0x2827D0u;
    if (runtime->hasFunction(0x2827D0u)) {
        auto targetFn = runtime->lookupFunction(0x2827D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282AA8u; }
        if (ctx->pc != 0x282AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawScreenRain__Fv_0x2827d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282AA8u; }
        if (ctx->pc != 0x282AA8u) { return; }
    }
    ctx->pc = 0x282AA8u;
label_282aa8:
    // 0x282aa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x282aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x282AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AB8u;
            // 0x282abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282AC0u;
}
