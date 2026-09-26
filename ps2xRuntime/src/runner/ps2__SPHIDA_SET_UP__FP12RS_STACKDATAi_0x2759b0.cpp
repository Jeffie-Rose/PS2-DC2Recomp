#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_UP__FP12RS_STACKDATAi
// Address: 0x2759b0 - 0x275aec
void ps2__SPHIDA_SET_UP__FP12RS_STACKDATAi_0x2759b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_UP__FP12RS_STACKDATAi_0x2759b0");
#endif

    switch (ctx->pc) {
        case 0x2759dcu: goto label_2759dc;
        case 0x2759ecu: goto label_2759ec;
        case 0x275a04u: goto label_275a04;
        case 0x275a14u: goto label_275a14;
        case 0x275a2cu: goto label_275a2c;
        case 0x275a38u: goto label_275a38;
        case 0x275a48u: goto label_275a48;
        case 0x275a60u: goto label_275a60;
        case 0x275a94u: goto label_275a94;
        case 0x275aa8u: goto label_275aa8;
        case 0x275ab8u: goto label_275ab8;
        case 0x275ac8u: goto label_275ac8;
        default: break;
    }

    ctx->pc = 0x2759b0u;

    // 0x2759b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2759b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2759b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2759b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2759b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2759b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2759bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2759bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2759c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2759c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2759c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2759c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2759c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2759cc: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2759ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2759d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2759d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2759d4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2759D4u;
    SET_GPR_U32(ctx, 31, 0x2759DCu);
    ctx->pc = 0x2759D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2759D4u;
            // 0x2759d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759DCu; }
        if (ctx->pc != 0x2759DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759DCu; }
        if (ctx->pc != 0x2759DCu) { return; }
    }
    ctx->pc = 0x2759DCu;
label_2759dc:
    // 0x2759dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2759dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2759e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2759E4u;
    SET_GPR_U32(ctx, 31, 0x2759ECu);
    ctx->pc = 0x2759E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2759E4u;
            // 0x2759e8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759ECu; }
        if (ctx->pc != 0x2759ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759ECu; }
        if (ctx->pc != 0x2759ECu) { return; }
    }
    ctx->pc = 0x2759ECu;
label_2759ec:
    // 0x2759ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2759ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759f0: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x2759f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2759f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2759F4u;
    {
        const bool branch_taken_0x2759f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2759F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2759F4u;
            // 0x2759f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759f4) {
            ctx->pc = 0x275A08u;
            goto label_275a08;
        }
    }
    ctx->pc = 0x2759FCu;
    // 0x2759fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2759FCu;
    SET_GPR_U32(ctx, 31, 0x275A04u);
    ctx->pc = 0x275A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2759FCu;
            // 0x275a00: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A04u; }
        if (ctx->pc != 0x275A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A04u; }
        if (ctx->pc != 0x275A04u) { return; }
    }
    ctx->pc = 0x275A04u;
label_275a04:
    // 0x275a04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x275a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275a08:
    // 0x275a08: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x275a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x275a0c: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x275A0Cu;
    SET_GPR_U32(ctx, 31, 0x275A14u);
    ctx->pc = 0x275A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275A0Cu;
            // 0x275a10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A14u; }
        if (ctx->pc != 0x275A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A14u; }
        if (ctx->pc != 0x275A14u) { return; }
    }
    ctx->pc = 0x275A14u;
label_275a14:
    // 0x275a14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275A14u;
    {
        const bool branch_taken_0x275a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A14u;
            // 0x275a18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a14) {
            ctx->pc = 0x275A24u;
            goto label_275a24;
        }
    }
    ctx->pc = 0x275A1Cu;
    // 0x275a1c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x275A1Cu;
    {
        const bool branch_taken_0x275a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A1Cu;
            // 0x275a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a1c) {
            ctx->pc = 0x275ACCu;
            goto label_275acc;
        }
    }
    ctx->pc = 0x275A24u;
label_275a24:
    // 0x275a24: 0xc04e748  jal         func_139D20
    ctx->pc = 0x275A24u;
    SET_GPR_U32(ctx, 31, 0x275A2Cu);
    ctx->pc = 0x275A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275A24u;
            // 0x275a28: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A2Cu; }
        if (ctx->pc != 0x275A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A2Cu; }
        if (ctx->pc != 0x275A2Cu) { return; }
    }
    ctx->pc = 0x275A2Cu;
label_275a2c:
    // 0x275a2c: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x275a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x275a30: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x275A30u;
    SET_GPR_U32(ctx, 31, 0x275A38u);
    ctx->pc = 0x275A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275A30u;
            // 0x275a34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A38u; }
        if (ctx->pc != 0x275A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A38u; }
        if (ctx->pc != 0x275A38u) { return; }
    }
    ctx->pc = 0x275A38u;
label_275a38:
    // 0x275a38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275A38u;
    {
        const bool branch_taken_0x275a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A38u;
            // 0x275a3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a38) {
            ctx->pc = 0x275A48u;
            goto label_275a48;
        }
    }
    ctx->pc = 0x275A40u;
    // 0x275a40: 0xc0ba560  jal         func_2E9580
    ctx->pc = 0x275A40u;
    SET_GPR_U32(ctx, 31, 0x275A48u);
    ctx->pc = 0x2E9580u;
    if (runtime->hasFunction(0x2E9580u)) {
        auto targetFn = runtime->lookupFunction(0x2E9580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A48u; }
        if (ctx->pc != 0x275A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CSphidaFv_0x2e9580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A48u; }
        if (ctx->pc != 0x275A48u) { return; }
    }
    ctx->pc = 0x275A48u;
label_275a48:
    // 0x275a48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275A48u;
    {
        const bool branch_taken_0x275a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A48u;
            // 0x275a4c: 0xaf829ed4  sw          $v0, -0x612C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a48) {
            ctx->pc = 0x275A58u;
            goto label_275a58;
        }
    }
    ctx->pc = 0x275A50u;
    // 0x275a50: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x275A50u;
    {
        const bool branch_taken_0x275a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A50u;
            // 0x275a54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a50) {
            ctx->pc = 0x275ACCu;
            goto label_275acc;
        }
    }
    ctx->pc = 0x275A58u;
label_275a58:
    // 0x275a58: 0xc0ba588  jal         func_2E9620
    ctx->pc = 0x275A58u;
    SET_GPR_U32(ctx, 31, 0x275A60u);
    ctx->pc = 0x275A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275A58u;
            // 0x275a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9620u;
    if (runtime->hasFunction(0x2E9620u)) {
        auto targetFn = runtime->lookupFunction(0x2E9620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A60u; }
        if (ctx->pc != 0x275A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CSphidaFv_0x2e9620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A60u; }
        if (ctx->pc != 0x275A60u) { return; }
    }
    ctx->pc = 0x275A60u;
label_275a60:
    // 0x275a60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x275a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275a64: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x275A64u;
    {
        const bool branch_taken_0x275a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x275A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A64u;
            // 0x275a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a64) {
            ctx->pc = 0x275AB0u;
            goto label_275ab0;
        }
    }
    ctx->pc = 0x275A6Cu;
    // 0x275a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275a70: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x275A70u;
    {
        const bool branch_taken_0x275a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x275a70) {
            ctx->pc = 0x275A9Cu;
            goto label_275a9c;
        }
    }
    ctx->pc = 0x275A78u;
    // 0x275a78: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275A78u;
    {
        const bool branch_taken_0x275a78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x275a78) {
            ctx->pc = 0x275A88u;
            goto label_275a88;
        }
    }
    ctx->pc = 0x275A80u;
    // 0x275a80: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x275A80u;
    {
        const bool branch_taken_0x275a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A80u;
            // 0x275a84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a80) {
            ctx->pc = 0x275ACCu;
            goto label_275acc;
        }
    }
    ctx->pc = 0x275A88u;
label_275a88:
    // 0x275a88: 0x8f849ed4  lw          $a0, -0x612C($gp)
    ctx->pc = 0x275a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275a8c: 0xc0ba5c8  jal         func_2E9720
    ctx->pc = 0x275A8Cu;
    SET_GPR_U32(ctx, 31, 0x275A94u);
    ctx->pc = 0x275A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275A8Cu;
            // 0x275a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9720u;
    if (runtime->hasFunction(0x2E9720u)) {
        auto targetFn = runtime->lookupFunction(0x2E9720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A94u; }
        if (ctx->pc != 0x275A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUp__7CSphidaFi_0x2e9720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A94u; }
        if (ctx->pc != 0x275A94u) { return; }
    }
    ctx->pc = 0x275A94u;
label_275a94:
    // 0x275a94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275A94u;
    {
        const bool branch_taken_0x275a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275a94) {
            ctx->pc = 0x275AC8u;
            goto label_275ac8;
        }
    }
    ctx->pc = 0x275A9Cu;
label_275a9c:
    // 0x275a9c: 0x8f849ed4  lw          $a0, -0x612C($gp)
    ctx->pc = 0x275a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275aa0: 0xc0ba6e8  jal         func_2E9BA0
    ctx->pc = 0x275AA0u;
    SET_GPR_U32(ctx, 31, 0x275AA8u);
    ctx->pc = 0x275AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275AA0u;
            // 0x275aa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9BA0u;
    if (runtime->hasFunction(0x2E9BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2E9BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AA8u; }
        if (ctx->pc != 0x275AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        s17_SetUp__7CSphidaFi_0x2e9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AA8u; }
        if (ctx->pc != 0x275AA8u) { return; }
    }
    ctx->pc = 0x275AA8u;
label_275aa8:
    // 0x275aa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x275AA8u;
    {
        const bool branch_taken_0x275aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275aa8) {
            ctx->pc = 0x275AC8u;
            goto label_275ac8;
        }
    }
    ctx->pc = 0x275AB0u;
label_275ab0:
    // 0x275ab0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275AB0u;
    SET_GPR_U32(ctx, 31, 0x275AB8u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AB8u; }
        if (ctx->pc != 0x275AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AB8u; }
        if (ctx->pc != 0x275AB8u) { return; }
    }
    ctx->pc = 0x275AB8u;
label_275ab8:
    // 0x275ab8: 0x8f849ed4  lw          $a0, -0x612C($gp)
    ctx->pc = 0x275ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275abc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ac0: 0xc0ba728  jal         func_2E9CA0
    ctx->pc = 0x275AC0u;
    SET_GPR_U32(ctx, 31, 0x275AC8u);
    ctx->pc = 0x275AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275AC0u;
            // 0x275ac4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9CA0u;
    if (runtime->hasFunction(0x2E9CA0u)) {
        auto targetFn = runtime->lookupFunction(0x2E9CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AC8u; }
        if (ctx->pc != 0x275AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Omake_SetUp__7CSphidaFii_0x2e9ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AC8u; }
        if (ctx->pc != 0x275AC8u) { return; }
    }
    ctx->pc = 0x275AC8u;
label_275ac8:
    // 0x275ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275acc:
    // 0x275acc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x275accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275ad0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x275ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275ad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x275ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275ad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x275ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x275AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275AE4u;
            // 0x275ae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275AECu;
}
