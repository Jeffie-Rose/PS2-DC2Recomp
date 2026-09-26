#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__5CRainFv
// Address: 0x2826f0 - 0x2827c8
void Init__5CRainFv_0x2826f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__5CRainFv_0x2826f0");
#endif

    switch (ctx->pc) {
        case 0x282718u: goto label_282718;
        case 0x282724u: goto label_282724;
        case 0x282740u: goto label_282740;
        case 0x28274cu: goto label_28274c;
        case 0x282768u: goto label_282768;
        case 0x282774u: goto label_282774;
        case 0x282790u: goto label_282790;
        case 0x2827a0u: goto label_2827a0;
        default: break;
    }

    ctx->pc = 0x2826f0u;

    // 0x2826f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2826f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2826f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2826f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2826f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2826f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2826fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2826fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282700: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282708: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28270c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28270cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x282710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282714: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x282714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_282718:
    // 0x282718: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x282718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x28271c: 0xc0a0840  jal         func_282100
    ctx->pc = 0x28271Cu;
    SET_GPR_U32(ctx, 31, 0x282724u);
    ctx->pc = 0x282720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28271Cu;
            // 0x282720: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282100u;
    if (runtime->hasFunction(0x282100u)) {
        auto targetFn = runtime->lookupFunction(0x282100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282724u; }
        if (ctx->pc != 0x282724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9CRainDropFv_0x282100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282724u; }
        if (ctx->pc != 0x282724u) { return; }
    }
    ctx->pc = 0x282724u;
label_282724:
    // 0x282724: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x282724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x282728: 0x265200b0  addiu       $s2, $s2, 0xB0
    ctx->pc = 0x282728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x28272c: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x28272cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x282730: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282730u;
    {
        const bool branch_taken_0x282730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282730) {
            ctx->pc = 0x282718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282718;
        }
    }
    ctx->pc = 0x282738u;
    // 0x282738: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28273c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28273cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282740:
    // 0x282740: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x282740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x282744: 0xc0a0840  jal         func_282100
    ctx->pc = 0x282744u;
    SET_GPR_U32(ctx, 31, 0x28274Cu);
    ctx->pc = 0x282748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282744u;
            // 0x282748: 0x244444d0  addiu       $a0, $v0, 0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282100u;
    if (runtime->hasFunction(0x282100u)) {
        auto targetFn = runtime->lookupFunction(0x282100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28274Cu; }
        if (ctx->pc != 0x28274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9CRainDropFv_0x282100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28274Cu; }
        if (ctx->pc != 0x28274Cu) { return; }
    }
    ctx->pc = 0x28274Cu;
label_28274c:
    // 0x28274c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28274cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x282750: 0x263100b0  addiu       $s1, $s1, 0xB0
    ctx->pc = 0x282750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x282754: 0x2a420032  slti        $v0, $s2, 0x32
    ctx->pc = 0x282754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x282758: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282758u;
    {
        const bool branch_taken_0x282758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282758) {
            ctx->pc = 0x282740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282740;
        }
    }
    ctx->pc = 0x282760u;
    // 0x282760: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282764: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282768:
    // 0x282768: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x282768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x28276c: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x28276Cu;
    SET_GPR_U32(ctx, 31, 0x282774u);
    ctx->pc = 0x282770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28276Cu;
            // 0x282770: 0x24446730  addiu       $a0, $v0, 0x6730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282774u; }
        if (ctx->pc != 0x282774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9CParticleFv_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282774u; }
        if (ctx->pc != 0x282774u) { return; }
    }
    ctx->pc = 0x282774u;
label_282774:
    // 0x282774: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x282778: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x282778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x28277c: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x28277cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x282780: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282780u;
    {
        const bool branch_taken_0x282780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282780) {
            ctx->pc = 0x282768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282768;
        }
    }
    ctx->pc = 0x282788u;
    // 0x282788: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28278c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28278cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282790:
    // 0x282790: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x282790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x282794: 0x34018670  ori         $at, $zero, 0x8670
    ctx->pc = 0x282794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34416);
    // 0x282798: 0xc0a0668  jal         func_2819A0
    ctx->pc = 0x282798u;
    SET_GPR_U32(ctx, 31, 0x2827A0u);
    ctx->pc = 0x28279Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282798u;
            // 0x28279c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819A0u;
    if (runtime->hasFunction(0x2819A0u)) {
        auto targetFn = runtime->lookupFunction(0x2819A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2827A0u; }
        if (ctx->pc != 0x2827A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__7CRippleFv_0x2819a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2827A0u; }
        if (ctx->pc != 0x2827A0u) { return; }
    }
    ctx->pc = 0x2827A0u;
label_2827a0:
    // 0x2827a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2827a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2827a4: 0x2a4300c8  slti        $v1, $s2, 0xC8
    ctx->pc = 0x2827a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2827a8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2827A8u;
    {
        const bool branch_taken_0x2827a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2827ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2827A8u;
            // 0x2827ac: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827a8) {
            ctx->pc = 0x282790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282790;
        }
    }
    ctx->pc = 0x2827B0u;
    // 0x2827b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2827b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2827b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2827b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2827b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2827b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2827bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2827bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2827c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2827C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2827C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2827C0u;
            // 0x2827c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2827C8u;
}
