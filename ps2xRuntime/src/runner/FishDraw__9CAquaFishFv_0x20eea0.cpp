#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FishDraw__9CAquaFishFv
// Address: 0x20eea0 - 0x20ef28
void FishDraw__9CAquaFishFv_0x20eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FishDraw__9CAquaFishFv_0x20eea0");
#endif

    switch (ctx->pc) {
        case 0x20eea0u: goto label_20eea0;
        case 0x20eea4u: goto label_20eea4;
        case 0x20eea8u: goto label_20eea8;
        case 0x20eeacu: goto label_20eeac;
        case 0x20eeb0u: goto label_20eeb0;
        case 0x20eeb4u: goto label_20eeb4;
        case 0x20eeb8u: goto label_20eeb8;
        case 0x20eebcu: goto label_20eebc;
        case 0x20eec0u: goto label_20eec0;
        case 0x20eec4u: goto label_20eec4;
        case 0x20eec8u: goto label_20eec8;
        case 0x20eeccu: goto label_20eecc;
        case 0x20eed0u: goto label_20eed0;
        case 0x20eed4u: goto label_20eed4;
        case 0x20eed8u: goto label_20eed8;
        case 0x20eedcu: goto label_20eedc;
        case 0x20eee0u: goto label_20eee0;
        case 0x20eee4u: goto label_20eee4;
        case 0x20eee8u: goto label_20eee8;
        case 0x20eeecu: goto label_20eeec;
        case 0x20eef0u: goto label_20eef0;
        case 0x20eef4u: goto label_20eef4;
        case 0x20eef8u: goto label_20eef8;
        case 0x20eefcu: goto label_20eefc;
        case 0x20ef00u: goto label_20ef00;
        case 0x20ef04u: goto label_20ef04;
        case 0x20ef08u: goto label_20ef08;
        case 0x20ef0cu: goto label_20ef0c;
        case 0x20ef10u: goto label_20ef10;
        case 0x20ef14u: goto label_20ef14;
        case 0x20ef18u: goto label_20ef18;
        case 0x20ef1cu: goto label_20ef1c;
        case 0x20ef20u: goto label_20ef20;
        case 0x20ef24u: goto label_20ef24;
        default: break;
    }

    ctx->pc = 0x20eea0u;

label_20eea0:
    // 0x20eea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_20eea4:
    // 0x20eea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20eea8:
    // 0x20eea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20eeac:
    // 0x20eeac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20eeb0:
    // 0x20eeb0: 0x8c830938  lw          $v1, 0x938($a0)
    ctx->pc = 0x20eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2360)));
label_20eeb4:
    // 0x20eeb4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_20eeb8:
    if (ctx->pc == 0x20EEB8u) {
        ctx->pc = 0x20EEB8u;
            // 0x20eeb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EEBCu;
        goto label_20eebc;
    }
    ctx->pc = 0x20EEB4u;
    {
        const bool branch_taken_0x20eeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EEB4u;
            // 0x20eeb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eeb4) {
            ctx->pc = 0x20EF14u;
            goto label_20ef14;
        }
    }
    ctx->pc = 0x20EEBCu;
label_20eebc:
    // 0x20eebc: 0x8c710030  lw          $s1, 0x30($v1)
    ctx->pc = 0x20eebcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_20eec0:
    // 0x20eec0: 0xc050df4  jal         func_1437D0
label_20eec4:
    if (ctx->pc == 0x20EEC4u) {
        ctx->pc = 0x20EEC4u;
            // 0x20eec4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20EEC8u;
        goto label_20eec8;
    }
    ctx->pc = 0x20EEC0u;
    SET_GPR_U32(ctx, 31, 0x20EEC8u);
    ctx->pc = 0x20EEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EEC0u;
            // 0x20eec4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EEC8u; }
        if (ctx->pc != 0x20EEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EEC8u; }
        if (ctx->pc != 0x20EEC8u) { return; }
    }
    ctx->pc = 0x20EEC8u;
label_20eec8:
    // 0x20eec8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20eecc:
    // 0x20eecc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20eed0:
    // 0x20eed0: 0x2442f950  addiu       $v0, $v0, -0x6B0
    ctx->pc = 0x20eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965584));
label_20eed4:
    // 0x20eed4: 0x2e21001e  sltiu       $at, $s1, 0x1E
    ctx->pc = 0x20eed4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_20eed8:
    // 0x20eed8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20eed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20eedc:
    // 0x20eedc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_20eee0:
    if (ctx->pc == 0x20EEE0u) {
        ctx->pc = 0x20EEE0u;
            // 0x20eee0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x20EEE4u;
        goto label_20eee4;
    }
    ctx->pc = 0x20EEDCu;
    {
        const bool branch_taken_0x20eedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EEDCu;
            // 0x20eee0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eedc) {
            ctx->pc = 0x20EEFCu;
            goto label_20eefc;
        }
    }
    ctx->pc = 0x20EEE4u;
label_20eee4:
    // 0x20eee4: 0x8e020934  lw          $v0, 0x934($s0)
    ctx->pc = 0x20eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2356)));
label_20eee8:
    // 0x20eee8: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x20eee8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_20eeec:
    // 0x20eeec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20eef0:
    if (ctx->pc == 0x20EEF0u) {
        ctx->pc = 0x20EEF0u;
            // 0x20eef0: 0x3c02432c  lui         $v0, 0x432C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17196 << 16));
        ctx->pc = 0x20EEF4u;
        goto label_20eef4;
    }
    ctx->pc = 0x20EEECu;
    {
        const bool branch_taken_0x20eeec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EEECu;
            // 0x20eef0: 0x3c02432c  lui         $v0, 0x432C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17196 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eeec) {
            ctx->pc = 0x20EEFCu;
            goto label_20eefc;
        }
    }
    ctx->pc = 0x20EEF4u;
label_20eef4:
    // 0x20eef4: 0xc050dec  jal         func_1437B0
label_20eef8:
    if (ctx->pc == 0x20EEF8u) {
        ctx->pc = 0x20EEF8u;
            // 0x20eef8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x20EEFCu;
        goto label_20eefc;
    }
    ctx->pc = 0x20EEF4u;
    SET_GPR_U32(ctx, 31, 0x20EEFCu);
    ctx->pc = 0x20EEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EEF4u;
            // 0x20eef8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EEFCu; }
        if (ctx->pc != 0x20EEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EEFCu; }
        if (ctx->pc != 0x20EEFCu) { return; }
    }
    ctx->pc = 0x20EEFCu;
label_20eefc:
    // 0x20eefc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20eefcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20ef00:
    // 0x20ef00: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x20ef00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_20ef04:
    // 0x20ef04: 0x320f809  jalr        $t9
label_20ef08:
    if (ctx->pc == 0x20EF08u) {
        ctx->pc = 0x20EF08u;
            // 0x20ef08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EF0Cu;
        goto label_20ef0c;
    }
    ctx->pc = 0x20EF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20EF0Cu);
        ctx->pc = 0x20EF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF04u;
            // 0x20ef08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20EF0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20EF0Cu; }
            if (ctx->pc != 0x20EF0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20EF0Cu;
label_20ef0c:
    // 0x20ef0c: 0xc050dec  jal         func_1437B0
label_20ef10:
    if (ctx->pc == 0x20EF10u) {
        ctx->pc = 0x20EF10u;
            // 0x20ef10: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20EF14u;
        goto label_20ef14;
    }
    ctx->pc = 0x20EF0Cu;
    SET_GPR_U32(ctx, 31, 0x20EF14u);
    ctx->pc = 0x20EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF0Cu;
            // 0x20ef10: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EF14u; }
        if (ctx->pc != 0x20EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EF14u; }
        if (ctx->pc != 0x20EF14u) { return; }
    }
    ctx->pc = 0x20EF14u;
label_20ef14:
    // 0x20ef14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20ef14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20ef18:
    // 0x20ef18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ef18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ef1c:
    // 0x20ef1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ef1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ef20:
    // 0x20ef20: 0x3e00008  jr          $ra
label_20ef24:
    if (ctx->pc == 0x20EF24u) {
        ctx->pc = 0x20EF24u;
            // 0x20ef24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20EF28u;
        goto label_fallthrough_0x20ef20;
    }
    ctx->pc = 0x20EF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF20u;
            // 0x20ef24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20ef20:
    ctx->pc = 0x20EF28u;
}
