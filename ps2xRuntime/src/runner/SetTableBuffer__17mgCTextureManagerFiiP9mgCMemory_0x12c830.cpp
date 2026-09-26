#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTableBuffer__17mgCTextureManagerFiiP9mgCMemory
// Address: 0x12c830 - 0x12cacc
void SetTableBuffer__17mgCTextureManagerFiiP9mgCMemory_0x12c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTableBuffer__17mgCTextureManagerFiiP9mgCMemory_0x12c830");
#endif

    switch (ctx->pc) {
        case 0x12c890u: goto label_12c890;
        case 0x12c8a4u: goto label_12c8a4;
        case 0x12c8c4u: goto label_12c8c4;
        case 0x12c91cu: goto label_12c91c;
        case 0x12c938u: goto label_12c938;
        case 0x12c958u: goto label_12c958;
        case 0x12c990u: goto label_12c990;
        case 0x12c9a0u: goto label_12c9a0;
        case 0x12ca18u: goto label_12ca18;
        case 0x12ca2cu: goto label_12ca2c;
        case 0x12ca64u: goto label_12ca64;
        case 0x12ca74u: goto label_12ca74;
        default: break;
    }

    ctx->pc = 0x12c830u;

    // 0x12c830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12c834: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12c838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12c838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12c83c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12c840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12c840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12c844: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c848: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12c848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c84c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12c84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c850: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12c850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c854: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x12c854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x12c858: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x12c858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12c85c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x12c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x12c860: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x12c860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x12c864: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C864u;
    {
        const bool branch_taken_0x12c864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c864) {
            ctx->pc = 0x12C87Cu;
            goto label_12c87c;
        }
    }
    ctx->pc = 0x12C86Cu;
    // 0x12c86c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x12c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12c870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C874u;
    {
        const bool branch_taken_0x12c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c874) {
            ctx->pc = 0x12C880u;
            goto label_12c880;
        }
    }
    ctx->pc = 0x12C87Cu;
label_12c87c:
    // 0x12c87c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x12c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_12c880:
    // 0x12c880: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x12c880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x12c884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c888: 0xc04e748  jal         func_139D20
    ctx->pc = 0x12C888u;
    SET_GPR_U32(ctx, 31, 0x12C890u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C890u; }
        if (ctx->pc != 0x12C890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C890u; }
        if (ctx->pc != 0x12C890u) { return; }
    }
    ctx->pc = 0x12C890u;
label_12c890:
    // 0x12c890: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x12c890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x12c894: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x12c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12c898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12c898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c89c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x12C89Cu;
    SET_GPR_U32(ctx, 31, 0x12C8A4u);
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8A4u; }
        if (ctx->pc != 0x12C8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8A4u; }
        if (ctx->pc != 0x12C8A4u) { return; }
    }
    ctx->pc = 0x12C8A4u;
label_12c8a4:
    // 0x12c8a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8a8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12c8ac: 0x24a5c6d0  addiu       $a1, $a1, -0x3930
    ctx->pc = 0x12c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
    // 0x12c8b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8b4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x12c8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c8b8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x12c8b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8bc: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x12C8BCu;
    SET_GPR_U32(ctx, 31, 0x12C8C4u);
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8C4u; }
        if (ctx->pc != 0x12C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8C4u; }
        if (ctx->pc != 0x12C8C4u) { return; }
    }
    ctx->pc = 0x12C8C4u;
label_12c8c4:
    // 0x12c8c4: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x12c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x12c8c8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x12c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x12c8cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C8CCu;
    {
        const bool branch_taken_0x12c8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c8cc) {
            ctx->pc = 0x12C8D8u;
            goto label_12c8d8;
        }
    }
    ctx->pc = 0x12C8D4u;
    // 0x12c8d4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x12c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_12c8d8:
    // 0x12c8d8: 0xae7201c0  sw          $s2, 0x1C0($s3)
    ctx->pc = 0x12c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 18));
    // 0x12c8dc: 0x8e7001c0  lw          $s0, 0x1C0($s3)
    ctx->pc = 0x12c8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x12c8e0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x12c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x12c8e4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x12c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12c8e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x12c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12c8ec: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x12c8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x12c8f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C8F0u;
    {
        const bool branch_taken_0x12c8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c8f0) {
            ctx->pc = 0x12C908u;
            goto label_12c908;
        }
    }
    ctx->pc = 0x12C8F8u;
    // 0x12c8f8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x12c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12c8fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c900: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C900u;
    {
        const bool branch_taken_0x12c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c900) {
            ctx->pc = 0x12C90Cu;
            goto label_12c90c;
        }
    }
    ctx->pc = 0x12C908u;
label_12c908:
    // 0x12c908: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x12c908u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_12c90c:
    // 0x12c90c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x12c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x12c910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c914: 0xc04e748  jal         func_139D20
    ctx->pc = 0x12C914u;
    SET_GPR_U32(ctx, 31, 0x12C91Cu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C91Cu; }
        if (ctx->pc != 0x12C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C91Cu; }
        if (ctx->pc != 0x12C91Cu) { return; }
    }
    ctx->pc = 0x12C91Cu;
label_12c91c:
    // 0x12c91c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x12c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x12c920: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x12c920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12c924: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12c924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12c928: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x12c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12c92c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12c92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c930: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x12C930u;
    SET_GPR_U32(ctx, 31, 0x12C938u);
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C938u; }
        if (ctx->pc != 0x12C938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C938u; }
        if (ctx->pc != 0x12C938u) { return; }
    }
    ctx->pc = 0x12C938u;
label_12c938:
    // 0x12c938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c93c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12c93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12c940: 0x24a5c480  addiu       $a1, $a1, -0x3B80
    ctx->pc = 0x12c940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
    // 0x12c944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c948: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x12c94c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x12c94cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c950: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x12C950u;
    SET_GPR_U32(ctx, 31, 0x12C958u);
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C958u; }
        if (ctx->pc != 0x12C958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C958u; }
        if (ctx->pc != 0x12C958u) { return; }
    }
    ctx->pc = 0x12C958u;
label_12c958:
    // 0x12c958: 0xae6201b8  sw          $v0, 0x1B8($s3)
    ctx->pc = 0x12c958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 2));
    // 0x12c95c: 0x8e6201c0  lw          $v0, 0x1C0($s3)
    ctx->pc = 0x12c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x12c960: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12c960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12c964: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x12c964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x12c968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C968u;
    {
        const bool branch_taken_0x12c968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c968) {
            ctx->pc = 0x12C980u;
            goto label_12c980;
        }
    }
    ctx->pc = 0x12C970u;
    // 0x12c970: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x12c970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12c974: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x12c974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c978: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C978u;
    {
        const bool branch_taken_0x12c978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c978) {
            ctx->pc = 0x12C984u;
            goto label_12c984;
        }
    }
    ctx->pc = 0x12C980u;
label_12c980:
    // 0x12c980: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x12c980u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_12c984:
    // 0x12c984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c988: 0xc04e748  jal         func_139D20
    ctx->pc = 0x12C988u;
    SET_GPR_U32(ctx, 31, 0x12C990u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C990u; }
        if (ctx->pc != 0x12C990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C990u; }
        if (ctx->pc != 0x12C990u) { return; }
    }
    ctx->pc = 0x12C990u;
label_12c990:
    // 0x12c990: 0xae6201bc  sw          $v0, 0x1BC($s3)
    ctx->pc = 0x12c990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 2));
    // 0x12c994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c998: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12C998u;
    {
        const bool branch_taken_0x12c998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c998) {
            ctx->pc = 0x12C9C8u;
            goto label_12c9c8;
        }
    }
    ctx->pc = 0x12C9A0u;
label_12c9a0:
    // 0x12c9a0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x12c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12c9a4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x12c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12c9a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12c9ac: 0x8e6201b8  lw          $v0, 0x1B8($s3)
    ctx->pc = 0x12c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x12c9b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x12c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12c9b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12c9b8: 0x8e6201bc  lw          $v0, 0x1BC($s3)
    ctx->pc = 0x12c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x12c9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12c9c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x12c9c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12c9c8:
    // 0x12c9c8: 0x8e6201c0  lw          $v0, 0x1C0($s3)
    ctx->pc = 0x12c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x12c9cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x12c9ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12c9d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x12C9D0u;
    {
        const bool branch_taken_0x12c9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c9d0) {
            ctx->pc = 0x12C9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c9a0;
        }
    }
    ctx->pc = 0x12C9D8u;
    // 0x12c9d8: 0xae6001c4  sw          $zero, 0x1C4($s3)
    ctx->pc = 0x12c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 0));
    // 0x12c9dc: 0xae7201d0  sw          $s2, 0x1D0($s3)
    ctx->pc = 0x12c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 464), GPR_U32(ctx, 18));
    // 0x12c9e0: 0x8e6201d0  lw          $v0, 0x1D0($s3)
    ctx->pc = 0x12c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x12c9e4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x12c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12c9e8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x12c9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x12c9ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C9ECu;
    {
        const bool branch_taken_0x12c9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c9ec) {
            ctx->pc = 0x12CA04u;
            goto label_12ca04;
        }
    }
    ctx->pc = 0x12C9F4u;
    // 0x12c9f4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x12c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12c9f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c9fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C9FCu;
    {
        const bool branch_taken_0x12c9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c9fc) {
            ctx->pc = 0x12CA08u;
            goto label_12ca08;
        }
    }
    ctx->pc = 0x12CA04u;
label_12ca04:
    // 0x12ca04: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x12ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_12ca08:
    // 0x12ca08: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x12ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x12ca0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca10: 0xc04e748  jal         func_139D20
    ctx->pc = 0x12CA10u;
    SET_GPR_U32(ctx, 31, 0x12CA18u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA18u; }
        if (ctx->pc != 0x12CA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA18u; }
        if (ctx->pc != 0x12CA18u) { return; }
    }
    ctx->pc = 0x12CA18u;
label_12ca18:
    // 0x12ca18: 0x8e6301d0  lw          $v1, 0x1D0($s3)
    ctx->pc = 0x12ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x12ca1c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x12ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x12ca20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ca20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca24: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x12CA24u;
    SET_GPR_U32(ctx, 31, 0x12CA2Cu);
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA2Cu; }
        if (ctx->pc != 0x12CA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA2Cu; }
        if (ctx->pc != 0x12CA2Cu) { return; }
    }
    ctx->pc = 0x12CA2Cu;
label_12ca2c:
    // 0x12ca2c: 0xae6201c8  sw          $v0, 0x1C8($s3)
    ctx->pc = 0x12ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 456), GPR_U32(ctx, 2));
    // 0x12ca30: 0x8e6201d0  lw          $v0, 0x1D0($s3)
    ctx->pc = 0x12ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x12ca34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12ca38: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x12ca38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x12ca3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CA3Cu;
    {
        const bool branch_taken_0x12ca3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca3c) {
            ctx->pc = 0x12CA54u;
            goto label_12ca54;
        }
    }
    ctx->pc = 0x12CA44u;
    // 0x12ca44: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x12ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12ca48: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x12ca48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ca4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CA4Cu;
    {
        const bool branch_taken_0x12ca4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca4c) {
            ctx->pc = 0x12CA58u;
            goto label_12ca58;
        }
    }
    ctx->pc = 0x12CA54u;
label_12ca54:
    // 0x12ca54: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x12ca54u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_12ca58:
    // 0x12ca58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ca58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca5c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x12CA5Cu;
    SET_GPR_U32(ctx, 31, 0x12CA64u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA64u; }
        if (ctx->pc != 0x12CA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA64u; }
        if (ctx->pc != 0x12CA64u) { return; }
    }
    ctx->pc = 0x12CA64u;
label_12ca64:
    // 0x12ca64: 0xae6201cc  sw          $v0, 0x1CC($s3)
    ctx->pc = 0x12ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 460), GPR_U32(ctx, 2));
    // 0x12ca68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ca68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12CA6Cu;
    {
        const bool branch_taken_0x12ca6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca6c) {
            ctx->pc = 0x12CA94u;
            goto label_12ca94;
        }
    }
    ctx->pc = 0x12CA74u;
label_12ca74:
    // 0x12ca74: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x12ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x12ca78: 0x8e6301c8  lw          $v1, 0x1C8($s3)
    ctx->pc = 0x12ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x12ca7c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x12ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12ca80: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x12ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12ca84: 0x8e6301cc  lw          $v1, 0x1CC($s3)
    ctx->pc = 0x12ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x12ca88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12ca8c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12ca90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12ca90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_12ca94:
    // 0x12ca94: 0x0  nop
    ctx->pc = 0x12ca94u;
    // NOP
    // 0x12ca98: 0x8e6301d0  lw          $v1, 0x1D0($s3)
    ctx->pc = 0x12ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x12ca9c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x12ca9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12caa0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x12CAA0u;
    {
        const bool branch_taken_0x12caa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12caa0) {
            ctx->pc = 0x12CA74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ca74;
        }
    }
    ctx->pc = 0x12CAA8u;
    // 0x12caa8: 0xae6001d4  sw          $zero, 0x1D4($s3)
    ctx->pc = 0x12caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 0));
    // 0x12caac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12caacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12cab0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12cab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12cab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cab8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12cab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cabc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12cabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cac0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12cac4: 0x3e00008  jr          $ra
    ctx->pc = 0x12CAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CACCu;
}
