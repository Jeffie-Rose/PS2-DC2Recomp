#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _UDATA_GET_ABS__FP12RS_STACKDATAi
// Address: 0x27d820 - 0x27d910
void ps2__UDATA_GET_ABS__FP12RS_STACKDATAi_0x27d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__UDATA_GET_ABS__FP12RS_STACKDATAi_0x27d820");
#endif

    switch (ctx->pc) {
        case 0x27d844u: goto label_27d844;
        case 0x27d874u: goto label_27d874;
        case 0x27d884u: goto label_27d884;
        case 0x27d898u: goto label_27d898;
        case 0x27d8c4u: goto label_27d8c4;
        case 0x27d8d4u: goto label_27d8d4;
        case 0x27d8e0u: goto label_27d8e0;
        default: break;
    }

    ctx->pc = 0x27d820u;

    // 0x27d820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27d824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27d828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27d82c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27d830: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27d830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d838: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27d838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d83c: 0xc064220  jal         func_190880
    ctx->pc = 0x27D83Cu;
    SET_GPR_U32(ctx, 31, 0x27D844u);
    ctx->pc = 0x27D840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D83Cu;
            // 0x27d840: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D844u; }
        if (ctx->pc != 0x27D844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D844u; }
        if (ctx->pc != 0x27D844u) { return; }
    }
    ctx->pc = 0x27D844u;
label_27d844:
    // 0x27d844: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D844u;
    {
        const bool branch_taken_0x27d844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D844u;
            // 0x27d848: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d844) {
            ctx->pc = 0x27D854u;
            goto label_27d854;
        }
    }
    ctx->pc = 0x27D84Cu;
    // 0x27d84c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x27D84Cu;
    {
        const bool branch_taken_0x27d84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D84Cu;
            // 0x27d850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d84c) {
            ctx->pc = 0x27D8F4u;
            goto label_27d8f4;
        }
    }
    ctx->pc = 0x27D854u;
label_27d854:
    // 0x27d854: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27d854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27d858: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x27d858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27d85c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D85Cu;
    {
        const bool branch_taken_0x27d85c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D85Cu;
            // 0x27d860: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d85c) {
            ctx->pc = 0x27D86Cu;
            goto label_27d86c;
        }
    }
    ctx->pc = 0x27D864u;
    // 0x27d864: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x27D864u;
    {
        const bool branch_taken_0x27d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D864u;
            // 0x27d868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d864) {
            ctx->pc = 0x27D8F4u;
            goto label_27d8f4;
        }
    }
    ctx->pc = 0x27D86Cu;
label_27d86c:
    // 0x27d86c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D86Cu;
    SET_GPR_U32(ctx, 31, 0x27D874u);
    ctx->pc = 0x27D870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D86Cu;
            // 0x27d870: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D874u; }
        if (ctx->pc != 0x27D874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D874u; }
        if (ctx->pc != 0x27D874u) { return; }
    }
    ctx->pc = 0x27D874u;
label_27d874:
    // 0x27d874: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27d874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d87c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D87Cu;
    SET_GPR_U32(ctx, 31, 0x27D884u);
    ctx->pc = 0x27D880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D87Cu;
            // 0x27d880: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D884u; }
        if (ctx->pc != 0x27D884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D884u; }
        if (ctx->pc != 0x27D884u) { return; }
    }
    ctx->pc = 0x27D884u;
label_27d884:
    // 0x27d884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d88c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27d88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d890: 0xc066e44  jal         func_19B910
    ctx->pc = 0x27D890u;
    SET_GPR_U32(ctx, 31, 0x27D898u);
    ctx->pc = 0x27D894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D890u;
            // 0x27d894: 0x27a7005c  addiu       $a3, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (runtime->hasFunction(0x19B910u)) {
        auto targetFn = runtime->lookupFunction(0x19B910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D898u; }
        if (ctx->pc != 0x27D898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAbs__16CUserDataManagerFiiPi_0x19b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D898u; }
        if (ctx->pc != 0x27D898u) { return; }
    }
    ctx->pc = 0x27D898u;
label_27d898:
    // 0x27d898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d89c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d8a0: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27D8A0u;
    {
        const bool branch_taken_0x27d8a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8A0u;
            // 0x27d8a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8a0) {
            ctx->pc = 0x27D8CCu;
            goto label_27d8cc;
        }
    }
    ctx->pc = 0x27D8A8u;
    // 0x27d8a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27d8ac: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D8ACu;
    {
        const bool branch_taken_0x27d8ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8ACu;
            // 0x27d8b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8ac) {
            ctx->pc = 0x27D8BCu;
            goto label_27d8bc;
        }
    }
    ctx->pc = 0x27D8B4u;
    // 0x27d8b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27D8B4u;
    {
        const bool branch_taken_0x27d8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8B4u;
            // 0x27d8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8b4) {
            ctx->pc = 0x27D8E8u;
            goto label_27d8e8;
        }
    }
    ctx->pc = 0x27D8BCu;
label_27d8bc:
    // 0x27d8bc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D8BCu;
    SET_GPR_U32(ctx, 31, 0x27D8C4u);
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8C4u; }
        if (ctx->pc != 0x27D8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8C4u; }
        if (ctx->pc != 0x27D8C4u) { return; }
    }
    ctx->pc = 0x27D8C4u;
label_27d8c4:
    // 0x27d8c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27D8C4u;
    {
        const bool branch_taken_0x27d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8C4u;
            // 0x27d8c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8c4) {
            ctx->pc = 0x27D8F4u;
            goto label_27d8f4;
        }
    }
    ctx->pc = 0x27D8CCu;
label_27d8cc:
    // 0x27d8cc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D8CCu;
    SET_GPR_U32(ctx, 31, 0x27D8D4u);
    ctx->pc = 0x27D8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8CCu;
            // 0x27d8d0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8D4u; }
        if (ctx->pc != 0x27D8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8D4u; }
        if (ctx->pc != 0x27D8D4u) { return; }
    }
    ctx->pc = 0x27D8D4u;
label_27d8d4:
    // 0x27d8d4: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x27d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x27d8d8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27D8D8u;
    SET_GPR_U32(ctx, 31, 0x27D8E0u);
    ctx->pc = 0x27D8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8D8u;
            // 0x27d8dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8E0u; }
        if (ctx->pc != 0x27D8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8E0u; }
        if (ctx->pc != 0x27D8E0u) { return; }
    }
    ctx->pc = 0x27D8E0u;
label_27d8e0:
    // 0x27d8e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D8E0u;
    {
        const bool branch_taken_0x27d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d8e0) {
            ctx->pc = 0x27D8F0u;
            goto label_27d8f0;
        }
    }
    ctx->pc = 0x27D8E8u;
label_27d8e8:
    // 0x27d8e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D8E8u;
    {
        const bool branch_taken_0x27d8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8E8u;
            // 0x27d8ec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8e8) {
            ctx->pc = 0x27D8F8u;
            goto label_27d8f8;
        }
    }
    ctx->pc = 0x27D8F0u;
label_27d8f0:
    // 0x27d8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d8f4:
    // 0x27d8f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27d8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27d8f8:
    // 0x27d8f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d8f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d8fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d8fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d908: 0x3e00008  jr          $ra
    ctx->pc = 0x27D908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D908u;
            // 0x27d90c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D910u;
}
