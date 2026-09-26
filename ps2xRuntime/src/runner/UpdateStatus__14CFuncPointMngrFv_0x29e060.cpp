#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateStatus__14CFuncPointMngrFv
// Address: 0x29e060 - 0x29e180
void UpdateStatus__14CFuncPointMngrFv_0x29e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateStatus__14CFuncPointMngrFv_0x29e060");
#endif

    switch (ctx->pc) {
        case 0x29e080u: goto label_29e080;
        case 0x29e088u: goto label_29e088;
        case 0x29e094u: goto label_29e094;
        case 0x29e09cu: goto label_29e09c;
        case 0x29e144u: goto label_29e144;
        case 0x29e158u: goto label_29e158;
        default: break;
    }

    ctx->pc = 0x29e060u;

    // 0x29e060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29e064: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29e064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29e068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29e06c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e070: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29e070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e074: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e078: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29e078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e07c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e080:
    // 0x29e080: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29E080u;
    SET_GPR_U32(ctx, 31, 0x29E088u);
    ctx->pc = 0x29E084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E080u;
            // 0x29e084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E088u; }
        if (ctx->pc != 0x29E088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E088u; }
        if (ctx->pc != 0x29E088u) { return; }
    }
    ctx->pc = 0x29E088u;
label_29e088:
    // 0x29e088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e08c: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29E08Cu;
    SET_GPR_U32(ctx, 31, 0x29E094u);
    ctx->pc = 0x29E090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E08Cu;
            // 0x29e090: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E094u; }
        if (ctx->pc != 0x29E094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E094u; }
        if (ctx->pc != 0x29E094u) { return; }
    }
    ctx->pc = 0x29E094u;
label_29e094:
    // 0x29e094: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x29E094u;
    {
        const bool branch_taken_0x29e094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e094) {
            ctx->pc = 0x29E14Cu;
            goto label_29e14c;
        }
    }
    ctx->pc = 0x29E09Cu;
label_29e09c:
    // 0x29e09c: 0x0  nop
    ctx->pc = 0x29e09cu;
    // NOP
    // 0x29e0a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29e0a4: 0x2e010009  sltiu       $at, $s0, 0x9
    ctx->pc = 0x29e0a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x29e0a8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x29e0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x29e0ac: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x29E0ACu;
    {
        const bool branch_taken_0x29e0ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0ACu;
            // 0x29e0b0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0ac) {
            ctx->pc = 0x29E12Cu;
            goto label_29e12c;
        }
    }
    ctx->pc = 0x29E0B4u;
    // 0x29e0b4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29e0b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29e0bc: 0x2484dfd0  addiu       $a0, $a0, -0x2030
    ctx->pc = 0x29e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959056));
    // 0x29e0c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29e0c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e0c8: 0x600008  jr          $v1
    ctx->pc = 0x29E0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29E0D0u: goto label_29e0d0;
            case 0x29E0D8u: goto label_29e0d8;
            case 0x29E0ECu: goto label_29e0ec;
            case 0x29E104u: goto label_29e104;
            case 0x29E120u: goto label_29e120;
            case 0x29E128u: goto label_29e128;
            case 0x29E12Cu: goto label_29e12c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29E0D0u;
label_29e0d0:
    // 0x29e0d0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29E0D0u;
    {
        const bool branch_taken_0x29e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0D0u;
            // 0x29e0d4: 0x36310010  ori         $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0d0) {
            ctx->pc = 0x29E12Cu;
            goto label_29e12c;
        }
    }
    ctx->pc = 0x29E0D8u;
label_29e0d8:
    // 0x29e0d8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x29e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29e0dc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29E0DCu;
    {
        const bool branch_taken_0x29e0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0DCu;
            // 0x29e0e0: 0x3631000a  ori         $s1, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0dc) {
            ctx->pc = 0x29E12Cu;
            goto label_29e12c;
        }
    }
    ctx->pc = 0x29E0E4u;
    // 0x29e0e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29E0E4u;
    {
        const bool branch_taken_0x29e0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0E4u;
            // 0x29e0e8: 0x36310040  ori         $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0e4) {
            ctx->pc = 0x29E12Cu;
            goto label_29e12c;
        }
    }
    ctx->pc = 0x29E0ECu;
label_29e0ec:
    // 0x29e0ec: 0x0  nop
    ctx->pc = 0x29e0ecu;
    // NOP
    // 0x29e0f0: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x29e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29e0f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29E0F4u;
    {
        const bool branch_taken_0x29e0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0F4u;
            // 0x29e0f8: 0x36310086  ori         $s1, $s1, 0x86 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)134);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0f4) {
            ctx->pc = 0x29E12Cu;
            goto label_29e12c;
        }
    }
    ctx->pc = 0x29E0FCu;
    // 0x29e0fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29E0FCu;
    {
        const bool branch_taken_0x29e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E0FCu;
            // 0x29e100: 0x36310040  ori         $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0fc) {
            ctx->pc = 0x29E12Cu;
            goto label_29e12c;
        }
    }
    ctx->pc = 0x29E104u;
label_29e104:
    // 0x29e104: 0x0  nop
    ctx->pc = 0x29e104u;
    // NOP
    // 0x29e108: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x29e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29e10c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e110: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E110u;
    {
        const bool branch_taken_0x29e110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29E114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E110u;
            // 0x29e114: 0x36310020  ori         $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e110) {
            ctx->pc = 0x29E12Cu;
            goto label_29e12c;
        }
    }
    ctx->pc = 0x29E118u;
    // 0x29e118: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29E118u;
    {
        const bool branch_taken_0x29e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E118u;
            // 0x29e11c: 0x36310040  ori         $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e118) {
            ctx->pc = 0x29E12Cu;
            goto label_29e12c;
        }
    }
    ctx->pc = 0x29E120u;
label_29e120:
    // 0x29e120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29E120u;
    {
        const bool branch_taken_0x29e120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E120u;
            // 0x29e124: 0x36310080  ori         $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e120) {
            ctx->pc = 0x29E12Cu;
            goto label_29e12c;
        }
    }
    ctx->pc = 0x29E128u;
label_29e128:
    // 0x29e128: 0x36310100  ori         $s1, $s1, 0x100
    ctx->pc = 0x29e128u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
label_29e12c:
    // 0x29e12c: 0x0  nop
    ctx->pc = 0x29e12cu;
    // NOP
    // 0x29e130: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29e134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e138: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x29e138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x29e13c: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29E13Cu;
    SET_GPR_U32(ctx, 31, 0x29E144u);
    ctx->pc = 0x29E140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E13Cu;
            // 0x29e140: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E144u; }
        if (ctx->pc != 0x29E144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E144u; }
        if (ctx->pc != 0x29E144u) { return; }
    }
    ctx->pc = 0x29E144u;
label_29e144:
    // 0x29e144: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x29E144u;
    {
        const bool branch_taken_0x29e144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e144) {
            ctx->pc = 0x29E09Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e09c;
        }
    }
    ctx->pc = 0x29E14Cu;
label_29e14c:
    // 0x29e14c: 0x0  nop
    ctx->pc = 0x29e14cu;
    // NOP
    // 0x29e150: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29E150u;
    SET_GPR_U32(ctx, 31, 0x29E158u);
    ctx->pc = 0x29E154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E150u;
            // 0x29e154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E158u; }
        if (ctx->pc != 0x29E158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E158u; }
        if (ctx->pc != 0x29E158u) { return; }
    }
    ctx->pc = 0x29E158u;
label_29e158:
    // 0x29e158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29e158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29e15c: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x29e15cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29e160: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x29E160u;
    {
        const bool branch_taken_0x29e160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E160u;
            // 0x29e164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e160) {
            ctx->pc = 0x29E080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e080;
        }
    }
    ctx->pc = 0x29E168u;
    // 0x29e168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29e168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e16c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e178: 0x3e00008  jr          $ra
    ctx->pc = 0x29E178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E178u;
            // 0x29e17c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E180u;
}
