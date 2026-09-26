#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SWE_INIT__FP12RS_STACKDATAi
// Address: 0x2779d0 - 0x277afc
void ps2__SWE_INIT__FP12RS_STACKDATAi_0x2779d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SWE_INIT__FP12RS_STACKDATAi_0x2779d0");
#endif

    switch (ctx->pc) {
        case 0x2779f4u: goto label_2779f4;
        case 0x277a04u: goto label_277a04;
        case 0x277a14u: goto label_277a14;
        case 0x277a24u: goto label_277a24;
        case 0x277a30u: goto label_277a30;
        case 0x277a3cu: goto label_277a3c;
        case 0x277a58u: goto label_277a58;
        case 0x277a74u: goto label_277a74;
        case 0x277a80u: goto label_277a80;
        case 0x277ad8u: goto label_277ad8;
        default: break;
    }

    ctx->pc = 0x2779d0u;

    // 0x2779d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2779d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2779d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2779d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2779d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2779d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2779dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2779dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2779e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2779e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2779e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2779e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2779e8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2779e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2779ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2779ECu;
    SET_GPR_U32(ctx, 31, 0x2779F4u);
    ctx->pc = 0x2779F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2779ECu;
            // 0x2779f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2779F4u; }
        if (ctx->pc != 0x2779F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2779F4u; }
        if (ctx->pc != 0x2779F4u) { return; }
    }
    ctx->pc = 0x2779F4u;
label_2779f4:
    // 0x2779f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2779f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2779f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2779FCu;
    SET_GPR_U32(ctx, 31, 0x277A04u);
    ctx->pc = 0x277A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2779FCu;
            // 0x277a00: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A04u; }
        if (ctx->pc != 0x277A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A04u; }
        if (ctx->pc != 0x277A04u) { return; }
    }
    ctx->pc = 0x277A04u;
label_277a04:
    // 0x277a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a0c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277A0Cu;
    SET_GPR_U32(ctx, 31, 0x277A14u);
    ctx->pc = 0x277A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277A0Cu;
            // 0x277a10: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A14u; }
        if (ctx->pc != 0x277A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A14u; }
        if (ctx->pc != 0x277A14u) { return; }
    }
    ctx->pc = 0x277A14u;
label_277a14:
    // 0x277a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x277a18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a1c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277A1Cu;
    SET_GPR_U32(ctx, 31, 0x277A24u);
    ctx->pc = 0x277A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277A1Cu;
            // 0x277a20: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A24u; }
        if (ctx->pc != 0x277A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A24u; }
        if (ctx->pc != 0x277A24u) { return; }
    }
    ctx->pc = 0x277A24u;
label_277a24:
    // 0x277a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277A28u;
    SET_GPR_U32(ctx, 31, 0x277A30u);
    ctx->pc = 0x277A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277A28u;
            // 0x277a2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A30u; }
        if (ctx->pc != 0x277A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A30u; }
        if (ctx->pc != 0x277A30u) { return; }
    }
    ctx->pc = 0x277A30u;
label_277a30:
    // 0x277a30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a34: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x277A34u;
    SET_GPR_U32(ctx, 31, 0x277A3Cu);
    ctx->pc = 0x277A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277A34u;
            // 0x277a38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A3Cu; }
        if (ctx->pc != 0x277A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A3Cu; }
        if (ctx->pc != 0x277A3Cu) { return; }
    }
    ctx->pc = 0x277A3Cu;
label_277a3c:
    // 0x277a3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277A3Cu;
    {
        const bool branch_taken_0x277a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277A3Cu;
            // 0x277a40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a3c) {
            ctx->pc = 0x277A4Cu;
            goto label_277a4c;
        }
    }
    ctx->pc = 0x277A44u;
    // 0x277a44: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x277A44u;
    {
        const bool branch_taken_0x277a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277A44u;
            // 0x277a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a44) {
            ctx->pc = 0x277ADCu;
            goto label_277adc;
        }
    }
    ctx->pc = 0x277A4Cu;
label_277a4c:
    // 0x277a4c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x277a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x277a50: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x277A50u;
    SET_GPR_U32(ctx, 31, 0x277A58u);
    ctx->pc = 0x277A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277A50u;
            // 0x277a54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A58u; }
        if (ctx->pc != 0x277A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A58u; }
        if (ctx->pc != 0x277A58u) { return; }
    }
    ctx->pc = 0x277A58u;
label_277a58:
    // 0x277a58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277A58u;
    {
        const bool branch_taken_0x277a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277A58u;
            // 0x277a5c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a58) {
            ctx->pc = 0x277A68u;
            goto label_277a68;
        }
    }
    ctx->pc = 0x277A60u;
    // 0x277a60: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x277A60u;
    {
        const bool branch_taken_0x277a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277A60u;
            // 0x277a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a60) {
            ctx->pc = 0x277ADCu;
            goto label_277adc;
        }
    }
    ctx->pc = 0x277A68u;
label_277a68:
    // 0x277a68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a6c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x277A6Cu;
    SET_GPR_U32(ctx, 31, 0x277A74u);
    ctx->pc = 0x277A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277A6Cu;
            // 0x277a70: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A74u; }
        if (ctx->pc != 0x277A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A74u; }
        if (ctx->pc != 0x277A74u) { return; }
    }
    ctx->pc = 0x277A74u;
label_277a74:
    // 0x277a74: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x277a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x277a78: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x277A78u;
    SET_GPR_U32(ctx, 31, 0x277A80u);
    ctx->pc = 0x277A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277A78u;
            // 0x277a7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A80u; }
        if (ctx->pc != 0x277A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A80u; }
        if (ctx->pc != 0x277A80u) { return; }
    }
    ctx->pc = 0x277A80u;
label_277a80:
    // 0x277a80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x277A80u;
    {
        const bool branch_taken_0x277a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277A80u;
            // 0x277a84: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a80) {
            ctx->pc = 0x277AB0u;
            goto label_277ab0;
        }
    }
    ctx->pc = 0x277A88u;
    // 0x277a88: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x277a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x277a8c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x277a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x277a90: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x277a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x277a94: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x277a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x277a98: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x277a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x277a9c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x277a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x277aa0: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x277aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x277aa4: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x277aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x277aa8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x277aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x277aac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x277aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_277ab0:
    // 0x277ab0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x277ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x277ab4: 0xac620570  sw          $v0, 0x570($v1)
    ctx->pc = 0x277ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 2));
    // 0x277ab8: 0x8c640570  lw          $a0, 0x570($v1)
    ctx->pc = 0x277ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1392)));
    // 0x277abc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277ABCu;
    {
        const bool branch_taken_0x277abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x277AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277ABCu;
            // 0x277ac0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277abc) {
            ctx->pc = 0x277ACCu;
            goto label_277acc;
        }
    }
    ctx->pc = 0x277AC4u;
    // 0x277ac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x277AC4u;
    {
        const bool branch_taken_0x277ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277AC4u;
            // 0x277ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ac4) {
            ctx->pc = 0x277ADCu;
            goto label_277adc;
        }
    }
    ctx->pc = 0x277ACCu;
label_277acc:
    // 0x277acc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x277accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ad0: 0xc0bd7ac  jal         func_2F5EB0
    ctx->pc = 0x277AD0u;
    SET_GPR_U32(ctx, 31, 0x277AD8u);
    ctx->pc = 0x277AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277AD0u;
            // 0x277ad4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5EB0u;
    if (runtime->hasFunction(0x2F5EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277AD8u; }
        if (ctx->pc != 0x277AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17CSWordAfterEffectFP9mgCMemoryii_0x2f5eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277AD8u; }
        if (ctx->pc != 0x277AD8u) { return; }
    }
    ctx->pc = 0x277AD8u;
label_277ad8:
    // 0x277ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277adc:
    // 0x277adc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x277adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277ae0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x277ae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277ae4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277ae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277ae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277af4: 0x3e00008  jr          $ra
    ctx->pc = 0x277AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277AF4u;
            // 0x277af8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277AFCu;
}
