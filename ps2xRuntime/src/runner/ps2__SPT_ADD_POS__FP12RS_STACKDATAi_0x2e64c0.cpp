#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_ADD_POS__FP12RS_STACKDATAi
// Address: 0x2e64c0 - 0x2e6574
void ps2__SPT_ADD_POS__FP12RS_STACKDATAi_0x2e64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_ADD_POS__FP12RS_STACKDATAi_0x2e64c0");
#endif

    switch (ctx->pc) {
        case 0x2e64e8u: goto label_2e64e8;
        case 0x2e64f8u: goto label_2e64f8;
        case 0x2e650cu: goto label_2e650c;
        case 0x2e6518u: goto label_2e6518;
        case 0x2e6524u: goto label_2e6524;
        case 0x2e6540u: goto label_2e6540;
        default: break;
    }

    ctx->pc = 0x2e64c0u;

    // 0x2e64c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e64c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e64c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e64c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e64c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e64c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e64cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e64ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e64d0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e64d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e64d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e64d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e64d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e64d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e64dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e64e0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E64E0u;
    SET_GPR_U32(ctx, 31, 0x2E64E8u);
    ctx->pc = 0x2E64E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64E0u;
            // 0x2e64e4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64E8u; }
        if (ctx->pc != 0x2E64E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64E8u; }
        if (ctx->pc != 0x2E64E8u) { return; }
    }
    ctx->pc = 0x2E64E8u;
label_2e64e8:
    // 0x2e64e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e64e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e64ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e64f0: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E64F0u;
    SET_GPR_U32(ctx, 31, 0x2E64F8u);
    ctx->pc = 0x2E64F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64F0u;
            // 0x2e64f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64F8u; }
        if (ctx->pc != 0x2E64F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64F8u; }
        if (ctx->pc != 0x2E64F8u) { return; }
    }
    ctx->pc = 0x2E64F8u;
label_2e64f8:
    // 0x2e64f8: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2e64f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e64fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E64FCu;
    {
        const bool branch_taken_0x2e64fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64FCu;
            // 0x2e6500: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64fc) {
            ctx->pc = 0x2E6510u;
            goto label_2e6510;
        }
    }
    ctx->pc = 0x2E6504u;
    // 0x2e6504: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6504u;
    SET_GPR_U32(ctx, 31, 0x2E650Cu);
    ctx->pc = 0x2E6508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6504u;
            // 0x2e6508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E650Cu; }
        if (ctx->pc != 0x2E650Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E650Cu; }
        if (ctx->pc != 0x2E650Cu) { return; }
    }
    ctx->pc = 0x2E650Cu;
label_2e650c:
    // 0x2e650c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e650cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6510:
    // 0x2e6510: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E6510u;
    {
        const bool branch_taken_0x2e6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6510u;
            // 0x2e6514: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6510) {
            ctx->pc = 0x2E6544u;
            goto label_2e6544;
        }
    }
    ctx->pc = 0x2E6518u;
label_2e6518:
    // 0x2e6518: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e6518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e651c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E651Cu;
    SET_GPR_U32(ctx, 31, 0x2E6524u);
    ctx->pc = 0x2E6520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E651Cu;
            // 0x2e6520: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6524u; }
        if (ctx->pc != 0x2E6524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6524u; }
        if (ctx->pc != 0x2E6524u) { return; }
    }
    ctx->pc = 0x2E6524u;
label_2e6524:
    // 0x2e6524: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6524u;
    {
        const bool branch_taken_0x2e6524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6524u;
            // 0x2e6528: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6524) {
            ctx->pc = 0x2E6534u;
            goto label_2e6534;
        }
    }
    ctx->pc = 0x2E652Cu;
    // 0x2e652c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E652Cu;
    {
        const bool branch_taken_0x2e652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E652Cu;
            // 0x2e6530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e652c) {
            ctx->pc = 0x2E6558u;
            goto label_2e6558;
        }
    }
    ctx->pc = 0x2E6534u;
label_2e6534:
    // 0x2e6534: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e6534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6538: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2E6538u;
    SET_GPR_U32(ctx, 31, 0x2E6540u);
    ctx->pc = 0x2E653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6538u;
            // 0x2e653c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6540u; }
        if (ctx->pc != 0x2E6540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6540u; }
        if (ctx->pc != 0x2E6540u) { return; }
    }
    ctx->pc = 0x2E6540u;
label_2e6540:
    // 0x2e6540: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e6540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e6544:
    // 0x2e6544: 0x0  nop
    ctx->pc = 0x2e6544u;
    // NOP
    // 0x2e6548: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e6548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e654c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e654cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6550: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E6550u;
    {
        const bool branch_taken_0x2e6550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6550u;
            // 0x2e6554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6550) {
            ctx->pc = 0x2E6518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6518;
        }
    }
    ctx->pc = 0x2E6558u;
label_2e6558:
    // 0x2e6558: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e6558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e655c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e655cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e6560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e656c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E656Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E656Cu;
            // 0x2e6570: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6574u;
}
