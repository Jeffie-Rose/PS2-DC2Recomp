#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateTable__8CEditMapFP9mgCMemoryii
// Address: 0x1b0960 - 0x1b0a80
void CreateTable__8CEditMapFP9mgCMemoryii_0x1b0960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateTable__8CEditMapFP9mgCMemoryii_0x1b0960");
#endif

    switch (ctx->pc) {
        case 0x1b0994u: goto label_1b0994;
        case 0x1b09a4u: goto label_1b09a4;
        case 0x1b09e0u: goto label_1b09e0;
        case 0x1b0a00u: goto label_1b0a00;
        case 0x1b0a1cu: goto label_1b0a1c;
        case 0x1b0a50u: goto label_1b0a50;
        case 0x1b0a60u: goto label_1b0a60;
        default: break;
    }

    ctx->pc = 0x1b0960u;

    // 0x1b0960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b0960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b0964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b0964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b0968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b0968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b096c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b0970: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b0970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0978: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b0978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b097c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0980: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b0980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0984: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b0984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b098c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1B098Cu;
    SET_GPR_U32(ctx, 31, 0x1B0994u);
    ctx->pc = 0x1B0990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B098Cu;
            // 0x1b0990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0994u; }
        if (ctx->pc != 0x1B0994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0994u; }
        if (ctx->pc != 0x1B0994u) { return; }
    }
    ctx->pc = 0x1B0994u;
label_1b0994:
    // 0x1b0994: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0998: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b0998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b099c: 0xc04e64c  jal         func_139930
    ctx->pc = 0x1B099Cu;
    SET_GPR_U32(ctx, 31, 0x1B09A4u);
    ctx->pc = 0x1B09A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B099Cu;
            // 0x1b09a0: 0x26640d10  addiu       $a0, $s3, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139930u;
    if (runtime->hasFunction(0x139930u)) {
        auto targetFn = runtime->lookupFunction(0x139930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09A4u; }
        if (ctx->pc != 0x1B09A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeapMem__9mgCMemoryFP1i_0x139930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09A4u; }
        if (ctx->pc != 0x1B09A4u) { return; }
    }
    ctx->pc = 0x1B09A4u;
label_1b09a4:
    // 0x1b09a4: 0xae710d40  sw          $s1, 0xD40($s3)
    ctx->pc = 0x1b09a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3392), GPR_U32(ctx, 17));
    // 0x1b09a8: 0x8e700d40  lw          $s0, 0xD40($s3)
    ctx->pc = 0x1b09a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3392)));
    // 0x1b09ac: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1b09acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b09b0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1b09b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b09b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b09b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b09bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b09c0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1b09c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1b09c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B09C4u;
    {
        const bool branch_taken_0x1b09c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B09C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B09C4u;
            // 0x1b09c8: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09c4) {
            ctx->pc = 0x1B09D4u;
            goto label_1b09d4;
        }
    }
    ctx->pc = 0x1B09CCu;
    // 0x1b09cc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1b09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1b09d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b09d4:
    // 0x1b09d4: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1b09d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1b09d8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1B09D8u;
    SET_GPR_U32(ctx, 31, 0x1B09E0u);
    ctx->pc = 0x1B09DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B09D8u;
            // 0x1b09dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09E0u; }
        if (ctx->pc != 0x1B09E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09E0u; }
        if (ctx->pc != 0x1B09E0u) { return; }
    }
    ctx->pc = 0x1B09E0u;
label_1b09e0:
    // 0x1b09e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1b09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b09e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b09e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b09e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1b09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b09ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b09f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b09f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b09f8: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1B09F8u;
    SET_GPR_U32(ctx, 31, 0x1B0A00u);
    ctx->pc = 0x1B09FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B09F8u;
            // 0x1b09fc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A00u; }
        if (ctx->pc != 0x1B0A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A00u; }
        if (ctx->pc != 0x1B0A00u) { return; }
    }
    ctx->pc = 0x1B0A00u;
label_1b0a00:
    // 0x1b0a00: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b0a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b0a04: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1b0a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0a0c: 0x24a50a80  addiu       $a1, $a1, 0xA80
    ctx->pc = 0x1b0a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2688));
    // 0x1b0a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0a14: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1B0A14u;
    SET_GPR_U32(ctx, 31, 0x1B0A1Cu);
    ctx->pc = 0x1B0A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0A14u;
            // 0x1b0a18: 0x24070330  addiu       $a3, $zero, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A1Cu; }
        if (ctx->pc != 0x1B0A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A1Cu; }
        if (ctx->pc != 0x1B0A1Cu) { return; }
    }
    ctx->pc = 0x1B0A1Cu;
label_1b0a1c:
    // 0x1b0a1c: 0xae620d44  sw          $v0, 0xD44($s3)
    ctx->pc = 0x1b0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3396), GPR_U32(ctx, 2));
    // 0x1b0a20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b0a24: 0xae620f48  sw          $v0, 0xF48($s3)
    ctx->pc = 0x1b0a24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3912), GPR_U32(ctx, 2));
    // 0x1b0a28: 0x8e620f48  lw          $v0, 0xF48($s3)
    ctx->pc = 0x1b0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3912)));
    // 0x1b0a2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b0a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0a30: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1b0a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1b0a34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0A34u;
    {
        const bool branch_taken_0x1b0a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0A34u;
            // 0x1b0a38: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a34) {
            ctx->pc = 0x1B0A44u;
            goto label_1b0a44;
        }
    }
    ctx->pc = 0x1B0A3Cu;
    // 0x1b0a3c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1b0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1b0a40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b0a44:
    // 0x1b0a44: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1b0a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1b0a48: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1B0A48u;
    SET_GPR_U32(ctx, 31, 0x1B0A50u);
    ctx->pc = 0x1B0A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0A48u;
            // 0x1b0a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A50u; }
        if (ctx->pc != 0x1B0A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A50u; }
        if (ctx->pc != 0x1B0A50u) { return; }
    }
    ctx->pc = 0x1B0A50u;
label_1b0a50:
    // 0x1b0a50: 0x8e630f48  lw          $v1, 0xF48($s3)
    ctx->pc = 0x1b0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3912)));
    // 0x1b0a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0a58: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1B0A58u;
    SET_GPR_U32(ctx, 31, 0x1B0A60u);
    ctx->pc = 0x1B0A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0A58u;
            // 0x1b0a5c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A60u; }
        if (ctx->pc != 0x1B0A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A60u; }
        if (ctx->pc != 0x1B0A60u) { return; }
    }
    ctx->pc = 0x1B0A60u;
label_1b0a60:
    // 0x1b0a60: 0xae620f4c  sw          $v0, 0xF4C($s3)
    ctx->pc = 0x1b0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3916), GPR_U32(ctx, 2));
    // 0x1b0a64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b0a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0a68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0a68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0a6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0a78: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0A78u;
            // 0x1b0a7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0A80u;
}
