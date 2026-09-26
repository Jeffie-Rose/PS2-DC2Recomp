#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_REFANGLE_POS__FP12RS_STACKDATAi
// Address: 0x1e48a0 - 0x1e49a0
void ps2__GET_REFANGLE_POS__FP12RS_STACKDATAi_0x1e48a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_REFANGLE_POS__FP12RS_STACKDATAi_0x1e48a0");
#endif

    switch (ctx->pc) {
        case 0x1e48a0u: goto label_1e48a0;
        case 0x1e48a4u: goto label_1e48a4;
        case 0x1e48a8u: goto label_1e48a8;
        case 0x1e48acu: goto label_1e48ac;
        case 0x1e48b0u: goto label_1e48b0;
        case 0x1e48b4u: goto label_1e48b4;
        case 0x1e48b8u: goto label_1e48b8;
        case 0x1e48bcu: goto label_1e48bc;
        case 0x1e48c0u: goto label_1e48c0;
        case 0x1e48c4u: goto label_1e48c4;
        case 0x1e48c8u: goto label_1e48c8;
        case 0x1e48ccu: goto label_1e48cc;
        case 0x1e48d0u: goto label_1e48d0;
        case 0x1e48d4u: goto label_1e48d4;
        case 0x1e48d8u: goto label_1e48d8;
        case 0x1e48dcu: goto label_1e48dc;
        case 0x1e48e0u: goto label_1e48e0;
        case 0x1e48e4u: goto label_1e48e4;
        case 0x1e48e8u: goto label_1e48e8;
        case 0x1e48ecu: goto label_1e48ec;
        case 0x1e48f0u: goto label_1e48f0;
        case 0x1e48f4u: goto label_1e48f4;
        case 0x1e48f8u: goto label_1e48f8;
        case 0x1e48fcu: goto label_1e48fc;
        case 0x1e4900u: goto label_1e4900;
        case 0x1e4904u: goto label_1e4904;
        case 0x1e4908u: goto label_1e4908;
        case 0x1e490cu: goto label_1e490c;
        case 0x1e4910u: goto label_1e4910;
        case 0x1e4914u: goto label_1e4914;
        case 0x1e4918u: goto label_1e4918;
        case 0x1e491cu: goto label_1e491c;
        case 0x1e4920u: goto label_1e4920;
        case 0x1e4924u: goto label_1e4924;
        case 0x1e4928u: goto label_1e4928;
        case 0x1e492cu: goto label_1e492c;
        case 0x1e4930u: goto label_1e4930;
        case 0x1e4934u: goto label_1e4934;
        case 0x1e4938u: goto label_1e4938;
        case 0x1e493cu: goto label_1e493c;
        case 0x1e4940u: goto label_1e4940;
        case 0x1e4944u: goto label_1e4944;
        case 0x1e4948u: goto label_1e4948;
        case 0x1e494cu: goto label_1e494c;
        case 0x1e4950u: goto label_1e4950;
        case 0x1e4954u: goto label_1e4954;
        case 0x1e4958u: goto label_1e4958;
        case 0x1e495cu: goto label_1e495c;
        case 0x1e4960u: goto label_1e4960;
        case 0x1e4964u: goto label_1e4964;
        case 0x1e4968u: goto label_1e4968;
        case 0x1e496cu: goto label_1e496c;
        case 0x1e4970u: goto label_1e4970;
        case 0x1e4974u: goto label_1e4974;
        case 0x1e4978u: goto label_1e4978;
        case 0x1e497cu: goto label_1e497c;
        case 0x1e4980u: goto label_1e4980;
        case 0x1e4984u: goto label_1e4984;
        case 0x1e4988u: goto label_1e4988;
        case 0x1e498cu: goto label_1e498c;
        case 0x1e4990u: goto label_1e4990;
        case 0x1e4994u: goto label_1e4994;
        case 0x1e4998u: goto label_1e4998;
        case 0x1e499cu: goto label_1e499c;
        default: break;
    }

    ctx->pc = 0x1e48a0u;

label_1e48a0:
    // 0x1e48a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e48a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e48a4:
    // 0x1e48a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e48a8:
    // 0x1e48a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e48a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e48ac:
    // 0x1e48ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e48acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e48b0:
    // 0x1e48b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e48b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e48b4:
    // 0x1e48b4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e48b8:
    if (ctx->pc == 0x1E48B8u) {
        ctx->pc = 0x1E48B8u;
            // 0x1e48b8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1E48BCu;
        goto label_1e48bc;
    }
    ctx->pc = 0x1E48B4u;
    {
        const bool branch_taken_0x1e48b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E48B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48B4u;
            // 0x1e48b8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48b4) {
            ctx->pc = 0x1E48C4u;
            goto label_1e48c4;
        }
    }
    ctx->pc = 0x1E48BCu;
label_1e48bc:
    // 0x1e48bc: 0x10000032  b           . + 4 + (0x32 << 2)
label_1e48c0:
    if (ctx->pc == 0x1E48C0u) {
        ctx->pc = 0x1E48C0u;
            // 0x1e48c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E48C4u;
        goto label_1e48c4;
    }
    ctx->pc = 0x1E48BCu;
    {
        const bool branch_taken_0x1e48bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48BCu;
            // 0x1e48c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48bc) {
            ctx->pc = 0x1E4988u;
            goto label_1e4988;
        }
    }
    ctx->pc = 0x1E48C4u;
label_1e48c4:
    // 0x1e48c4: 0xc0781ac  jal         func_1E06B0
label_1e48c8:
    if (ctx->pc == 0x1E48C8u) {
        ctx->pc = 0x1E48C8u;
            // 0x1e48c8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E48CCu;
        goto label_1e48cc;
    }
    ctx->pc = 0x1E48C4u;
    SET_GPR_U32(ctx, 31, 0x1E48CCu);
    ctx->pc = 0x1E48C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48C4u;
            // 0x1e48c8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48CCu; }
        if (ctx->pc != 0x1E48CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48CCu; }
        if (ctx->pc != 0x1E48CCu) { return; }
    }
    ctx->pc = 0x1E48CCu;
label_1e48cc:
    // 0x1e48cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e48ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e48d0:
    // 0x1e48d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e48d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e48d4:
    // 0x1e48d4: 0xc0781ac  jal         func_1E06B0
label_1e48d8:
    if (ctx->pc == 0x1E48D8u) {
        ctx->pc = 0x1E48D8u;
            // 0x1e48d8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E48DCu;
        goto label_1e48dc;
    }
    ctx->pc = 0x1E48D4u;
    SET_GPR_U32(ctx, 31, 0x1E48DCu);
    ctx->pc = 0x1E48D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48D4u;
            // 0x1e48d8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48DCu; }
        if (ctx->pc != 0x1E48DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48DCu; }
        if (ctx->pc != 0x1E48DCu) { return; }
    }
    ctx->pc = 0x1E48DCu;
label_1e48dc:
    // 0x1e48dc: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e48dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e48e0:
    // 0x1e48e0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1e48e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1e48e4:
    // 0x1e48e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e48e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e48e8:
    // 0x1e48e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e48e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e48ec:
    // 0x1e48ec: 0x320f809  jalr        $t9
label_1e48f0:
    if (ctx->pc == 0x1E48F0u) {
        ctx->pc = 0x1E48F0u;
            // 0x1e48f0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1E48F4u;
        goto label_1e48f4;
    }
    ctx->pc = 0x1E48ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E48F4u);
        ctx->pc = 0x1E48F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48ECu;
            // 0x1e48f0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E48F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E48F4u; }
            if (ctx->pc != 0x1E48F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E48F4u;
label_1e48f4:
    // 0x1e48f4: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e48f8:
    // 0x1e48f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e48fc:
    // 0x1e48fc: 0xc041c5c  jal         func_107170
label_1e4900:
    if (ctx->pc == 0x1E4900u) {
        ctx->pc = 0x1E4900u;
            // 0x1e4900: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->pc = 0x1E4904u;
        goto label_1e4904;
    }
    ctx->pc = 0x1E48FCu;
    SET_GPR_U32(ctx, 31, 0x1E4904u);
    ctx->pc = 0x1E4900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48FCu;
            // 0x1e4900: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4904u; }
        if (ctx->pc != 0x1E4904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4904u; }
        if (ctx->pc != 0x1E4904u) { return; }
    }
    ctx->pc = 0x1E4904u;
label_1e4904:
    // 0x1e4904: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e4904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e4908:
    // 0x1e4908: 0xc041be0  jal         func_106F80
label_1e490c:
    if (ctx->pc == 0x1E490Cu) {
        ctx->pc = 0x1E490Cu;
            // 0x1e490c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4910u;
        goto label_1e4910;
    }
    ctx->pc = 0x1E4908u;
    SET_GPR_U32(ctx, 31, 0x1E4910u);
    ctx->pc = 0x1E490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4908u;
            // 0x1e490c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4910u; }
        if (ctx->pc != 0x1E4910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4910u; }
        if (ctx->pc != 0x1E4910u) { return; }
    }
    ctx->pc = 0x1E4910u;
label_1e4910:
    // 0x1e4910: 0xc041c7a  jal         func_1071E8
label_1e4914:
    if (ctx->pc == 0x1E4914u) {
        ctx->pc = 0x1E4914u;
            // 0x1e4914: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4918u;
        goto label_1e4918;
    }
    ctx->pc = 0x1E4910u;
    SET_GPR_U32(ctx, 31, 0x1E4918u);
    ctx->pc = 0x1E4914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4910u;
            // 0x1e4914: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4918u; }
        if (ctx->pc != 0x1E4918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4918u; }
        if (ctx->pc != 0x1E4918u) { return; }
    }
    ctx->pc = 0x1E4918u;
label_1e4918:
    // 0x1e4918: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e4918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e491c:
    // 0x1e491c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e491cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e4920:
    // 0x1e4920: 0xc041cf6  jal         func_1073D8
label_1e4924:
    if (ctx->pc == 0x1E4924u) {
        ctx->pc = 0x1E4924u;
            // 0x1e4924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4928u;
        goto label_1e4928;
    }
    ctx->pc = 0x1E4920u;
    SET_GPR_U32(ctx, 31, 0x1E4928u);
    ctx->pc = 0x1E4924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4920u;
            // 0x1e4924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4928u; }
        if (ctx->pc != 0x1E4928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4928u; }
        if (ctx->pc != 0x1E4928u) { return; }
    }
    ctx->pc = 0x1E4928u;
label_1e4928:
    // 0x1e4928: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e4928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e492c:
    // 0x1e492c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e4930:
    // 0x1e4930: 0xc041bb0  jal         func_106EC0
label_1e4934:
    if (ctx->pc == 0x1E4934u) {
        ctx->pc = 0x1E4934u;
            // 0x1e4934: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4938u;
        goto label_1e4938;
    }
    ctx->pc = 0x1E4930u;
    SET_GPR_U32(ctx, 31, 0x1E4938u);
    ctx->pc = 0x1E4934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4930u;
            // 0x1e4934: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4938u; }
        if (ctx->pc != 0x1E4938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4938u; }
        if (ctx->pc != 0x1E4938u) { return; }
    }
    ctx->pc = 0x1E4938u;
label_1e4938:
    // 0x1e4938: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e4938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e493c:
    // 0x1e493c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e493cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e4940:
    // 0x1e4940: 0xc041c4a  jal         func_107128
label_1e4944:
    if (ctx->pc == 0x1E4944u) {
        ctx->pc = 0x1E4944u;
            // 0x1e4944: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4948u;
        goto label_1e4948;
    }
    ctx->pc = 0x1E4940u;
    SET_GPR_U32(ctx, 31, 0x1E4948u);
    ctx->pc = 0x1E4944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4940u;
            // 0x1e4944: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4948u; }
        if (ctx->pc != 0x1E4948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4948u; }
        if (ctx->pc != 0x1E4948u) { return; }
    }
    ctx->pc = 0x1E4948u;
label_1e4948:
    // 0x1e4948: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e4948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e494c:
    // 0x1e494c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e494cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e4950:
    // 0x1e4950: 0xc041c38  jal         func_1070E0
label_1e4954:
    if (ctx->pc == 0x1E4954u) {
        ctx->pc = 0x1E4954u;
            // 0x1e4954: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4958u;
        goto label_1e4958;
    }
    ctx->pc = 0x1E4950u;
    SET_GPR_U32(ctx, 31, 0x1E4958u);
    ctx->pc = 0x1E4954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4950u;
            // 0x1e4954: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4958u; }
        if (ctx->pc != 0x1E4958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4958u; }
        if (ctx->pc != 0x1E4958u) { return; }
    }
    ctx->pc = 0x1E4958u;
label_1e4958:
    // 0x1e4958: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1e4958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e495c:
    // 0x1e495c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e495cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4960:
    // 0x1e4960: 0xc0781c4  jal         func_1E0710
label_1e4964:
    if (ctx->pc == 0x1E4964u) {
        ctx->pc = 0x1E4964u;
            // 0x1e4964: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4968u;
        goto label_1e4968;
    }
    ctx->pc = 0x1E4960u;
    SET_GPR_U32(ctx, 31, 0x1E4968u);
    ctx->pc = 0x1E4964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4960u;
            // 0x1e4964: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4968u; }
        if (ctx->pc != 0x1E4968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4968u; }
        if (ctx->pc != 0x1E4968u) { return; }
    }
    ctx->pc = 0x1E4968u;
label_1e4968:
    // 0x1e4968: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x1e4968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e496c:
    // 0x1e496c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4970:
    // 0x1e4970: 0xc0781c4  jal         func_1E0710
label_1e4974:
    if (ctx->pc == 0x1E4974u) {
        ctx->pc = 0x1E4974u;
            // 0x1e4974: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4978u;
        goto label_1e4978;
    }
    ctx->pc = 0x1E4970u;
    SET_GPR_U32(ctx, 31, 0x1E4978u);
    ctx->pc = 0x1E4974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4970u;
            // 0x1e4974: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4978u; }
        if (ctx->pc != 0x1E4978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4978u; }
        if (ctx->pc != 0x1E4978u) { return; }
    }
    ctx->pc = 0x1E4978u;
label_1e4978:
    // 0x1e4978: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x1e4978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e497c:
    // 0x1e497c: 0xc0781c4  jal         func_1E0710
label_1e4980:
    if (ctx->pc == 0x1E4980u) {
        ctx->pc = 0x1E4980u;
            // 0x1e4980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4984u;
        goto label_1e4984;
    }
    ctx->pc = 0x1E497Cu;
    SET_GPR_U32(ctx, 31, 0x1E4984u);
    ctx->pc = 0x1E4980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E497Cu;
            // 0x1e4980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4984u; }
        if (ctx->pc != 0x1E4984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4984u; }
        if (ctx->pc != 0x1E4984u) { return; }
    }
    ctx->pc = 0x1E4984u;
label_1e4984:
    // 0x1e4984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4988:
    // 0x1e4988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e498c:
    // 0x1e498c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e4990:
    // 0x1e4990: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e4990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4994:
    // 0x1e4994: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e4998:
    // 0x1e4998: 0x3e00008  jr          $ra
label_1e499c:
    if (ctx->pc == 0x1E499Cu) {
        ctx->pc = 0x1E499Cu;
            // 0x1e499c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1E49A0u;
        goto label_fallthrough_0x1e4998;
    }
    ctx->pc = 0x1E4998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E499Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4998u;
            // 0x1e499c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4998:
    ctx->pc = 0x1E49A0u;
}
