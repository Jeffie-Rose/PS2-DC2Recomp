#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDirect__5CFontFPcii
// Address: 0x2d5a20 - 0x2d5c74
void DrawDirect__5CFontFPcii_0x2d5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDirect__5CFontFPcii_0x2d5a20");
#endif

    switch (ctx->pc) {
        case 0x2d5a5cu: goto label_2d5a5c;
        case 0x2d5a64u: goto label_2d5a64;
        case 0x2d5a74u: goto label_2d5a74;
        case 0x2d5a80u: goto label_2d5a80;
        case 0x2d5a88u: goto label_2d5a88;
        case 0x2d5aa4u: goto label_2d5aa4;
        case 0x2d5ab0u: goto label_2d5ab0;
        case 0x2d5af0u: goto label_2d5af0;
        case 0x2d5afcu: goto label_2d5afc;
        case 0x2d5b14u: goto label_2d5b14;
        case 0x2d5b2cu: goto label_2d5b2c;
        case 0x2d5b5cu: goto label_2d5b5c;
        case 0x2d5b90u: goto label_2d5b90;
        case 0x2d5bd0u: goto label_2d5bd0;
        case 0x2d5bd8u: goto label_2d5bd8;
        case 0x2d5be4u: goto label_2d5be4;
        case 0x2d5c00u: goto label_2d5c00;
        case 0x2d5c0cu: goto label_2d5c0c;
        case 0x2d5c48u: goto label_2d5c48;
        default: break;
    }

    ctx->pc = 0x2d5a20u;

    // 0x2d5a20: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2d5a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2d5a24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d5a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d5a28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d5a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d5a2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d5a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d5a30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d5a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d5a34: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2d5a34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d5a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d5a3c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2d5a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d5a44: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2d5a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5a50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a54: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2D5A54u;
    SET_GPR_U32(ctx, 31, 0x2D5A5Cu);
    ctx->pc = 0x2D5A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5A54u;
            // 0x2d5a58: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A5Cu; }
        if (ctx->pc != 0x2D5A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A5Cu; }
        if (ctx->pc != 0x2D5A5Cu) { return; }
    }
    ctx->pc = 0x2D5A5Cu;
label_2d5a5c:
    // 0x2d5a5c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2D5A5Cu;
    SET_GPR_U32(ctx, 31, 0x2D5A64u);
    ctx->pc = 0x2D5A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5A5Cu;
            // 0x2d5a60: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A64u; }
        if (ctx->pc != 0x2D5A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A64u; }
        if (ctx->pc != 0x2D5A64u) { return; }
    }
    ctx->pc = 0x2D5A64u;
label_2d5a64:
    // 0x2d5a64: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d5a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5a68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d5a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5a6c: 0xc054514  jal         func_151450
    ctx->pc = 0x2D5A6Cu;
    SET_GPR_U32(ctx, 31, 0x2D5A74u);
    ctx->pc = 0x2D5A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5A6Cu;
            // 0x2d5a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A74u; }
        if (ctx->pc != 0x2D5A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A74u; }
        if (ctx->pc != 0x2D5A74u) { return; }
    }
    ctx->pc = 0x2D5A74u;
label_2d5a74:
    // 0x2d5a74: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5a78: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2D5A78u;
    SET_GPR_U32(ctx, 31, 0x2D5A80u);
    ctx->pc = 0x2D5A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5A78u;
            // 0x2d5a7c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A80u; }
        if (ctx->pc != 0x2D5A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A80u; }
        if (ctx->pc != 0x2D5A80u) { return; }
    }
    ctx->pc = 0x2D5A80u;
label_2d5a80:
    // 0x2d5a80: 0xc04a422  jal         func_129088
    ctx->pc = 0x2D5A80u;
    SET_GPR_U32(ctx, 31, 0x2D5A88u);
    ctx->pc = 0x2D5A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5A80u;
            // 0x2d5a84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A88u; }
        if (ctx->pc != 0x2D5A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A88u; }
        if (ctx->pc != 0x2D5A88u) { return; }
    }
    ctx->pc = 0x2D5A88u;
label_2d5a88:
    // 0x2d5a88: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d5a88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d5a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a90: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x2d5a90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2d5a94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d5a94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a98: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x2D5A98u;
    {
        const bool branch_taken_0x2d5a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5A98u;
            // 0x2d5a9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a98) {
            ctx->pc = 0x2D5C3Cu;
            goto label_2d5c3c;
        }
    }
    ctx->pc = 0x2D5AA0u;
    // 0x2d5aa0: 0x2d48021  addu        $s0, $s6, $s4
    ctx->pc = 0x2d5aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_2d5aa4:
    // 0x2d5aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5aa8: 0xc0b519c  jal         func_2D4670
    ctx->pc = 0x2D5AA8u;
    SET_GPR_U32(ctx, 31, 0x2D5AB0u);
    ctx->pc = 0x2D5AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5AA8u;
            // 0x2d5aac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4670u;
    if (runtime->hasFunction(0x2D4670u)) {
        auto targetFn = runtime->lookupFunction(0x2D4670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5AB0u; }
        if (ctx->pc != 0x2D5AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiFontNo__5CFontFPc_0x2d4670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5AB0u; }
        if (ctx->pc != 0x2D5AB0u) { return; }
    }
    ctx->pc = 0x2D5AB0u;
label_2d5ab0:
    // 0x2d5ab0: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x2d5ab0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5ab4: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x2d5ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x2d5ab8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2d5ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5abc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D5ABCu;
    {
        const bool branch_taken_0x2d5abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5ABCu;
            // 0x2d5ac0: 0x3401fd32  ori         $at, $zero, 0xFD32 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64818);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5abc) {
            ctx->pc = 0x2D5B1Cu;
            goto label_2d5b1c;
        }
    }
    ctx->pc = 0x2D5AC4u;
    // 0x2d5ac4: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x2d5ac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2d5ac8: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D5AC8u;
    {
        const bool branch_taken_0x2d5ac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ac8) {
            ctx->pc = 0x2D5B1Cu;
            goto label_2d5b1c;
        }
    }
    ctx->pc = 0x2D5AD0u;
    // 0x2d5ad0: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x2d5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x2d5ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ad8: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x2d5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2d5adc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5ae0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d5ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ae4: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x2d5ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d5ae8: 0xc0b5568  jal         func_2D55A0
    ctx->pc = 0x2D5AE8u;
    SET_GPR_U32(ctx, 31, 0x2D5AF0u);
    ctx->pc = 0x2D5AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5AE8u;
            // 0x2d5aec: 0x534021  addu        $t0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D55A0u;
    if (runtime->hasFunction(0x2D55A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D55A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5AF0u; }
        if (ctx->pc != 0x2D5AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawGaiji__5CFontFP11mgCDrawPrimiii_0x2d55a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5AF0u; }
        if (ctx->pc != 0x2D5AF0u) { return; }
    }
    ctx->pc = 0x2D5AF0u;
label_2d5af0:
    // 0x2d5af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5af4: 0xc0b55c4  jal         func_2D5710
    ctx->pc = 0x2D5AF4u;
    SET_GPR_U32(ctx, 31, 0x2D5AFCu);
    ctx->pc = 0x2D5AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5AF4u;
            // 0x2d5af8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5710u;
    if (runtime->hasFunction(0x2D5710u)) {
        auto targetFn = runtime->lookupFunction(0x2D5710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5AFCu; }
        if (ctx->pc != 0x2D5AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiW__5CFontFi_0x2d5710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5AFCu; }
        if (ctx->pc != 0x2D5AFCu) { return; }
    }
    ctx->pc = 0x2D5AFCu;
label_2d5afc:
    // 0x2d5afc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d5afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5b00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d5b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d5b04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d5b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b0c: 0xc0b51b0  jal         func_2D46C0
    ctx->pc = 0x2D5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2D5B14u);
    ctx->pc = 0x2D5B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B0Cu;
            // 0x2d5b10: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D46C0u;
    if (runtime->hasFunction(0x2D46C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D46C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5B14u; }
        if (ctx->pc != 0x2D5B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiLen__5CFontFi_0x2d46c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5B14u; }
        if (ctx->pc != 0x2D5B14u) { return; }
    }
    ctx->pc = 0x2D5B14u;
label_2d5b14:
    // 0x2d5b14: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2D5B14u;
    {
        const bool branch_taken_0x2d5b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B14u;
            // 0x2d5b18: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b14) {
            ctx->pc = 0x2D5C2Cu;
            goto label_2d5c2c;
        }
    }
    ctx->pc = 0x2D5B1Cu;
label_2d5b1c:
    // 0x2d5b1c: 0x0  nop
    ctx->pc = 0x2d5b1cu;
    // NOP
    // 0x2d5b20: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x2d5b20u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d5b24: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D5B24u;
    SET_GPR_U32(ctx, 31, 0x2D5B2Cu);
    ctx->pc = 0x2D5B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B24u;
            // 0x2d5b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5B2Cu; }
        if (ctx->pc != 0x2D5B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5B2Cu; }
        if (ctx->pc != 0x2D5B2Cu) { return; }
    }
    ctx->pc = 0x2D5B2Cu;
label_2d5b2c:
    // 0x2d5b2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d5b2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b30: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2d5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d5b34: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5B34u;
    {
        const bool branch_taken_0x2d5b34 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d5b34) {
            ctx->pc = 0x2D5B50u;
            goto label_2d5b50;
        }
    }
    ctx->pc = 0x2D5B3Cu;
    // 0x2d5b3c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x2d5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x2d5b40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d5b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b44: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d5b44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d5b48: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2D5B48u;
    {
        const bool branch_taken_0x2d5b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B48u;
            // 0x2d5b4c: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b48) {
            ctx->pc = 0x2D5C2Cu;
            goto label_2d5c2c;
        }
    }
    ctx->pc = 0x2D5B50u;
label_2d5b50:
    // 0x2d5b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b54: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x2D5B54u;
    SET_GPR_U32(ctx, 31, 0x2D5B5Cu);
    ctx->pc = 0x2D5B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B54u;
            // 0x2d5b58: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5B5Cu; }
        if (ctx->pc != 0x2D5B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5B5Cu; }
        if (ctx->pc != 0x2D5B5Cu) { return; }
    }
    ctx->pc = 0x2D5B5Cu;
label_2d5b5c:
    // 0x2d5b5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D5B5Cu;
    {
        const bool branch_taken_0x2d5b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b5c) {
            ctx->pc = 0x2D5BB0u;
            goto label_2d5bb0;
        }
    }
    ctx->pc = 0x2D5B64u;
    // 0x2d5b64: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x2d5b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x2d5b68: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d5b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b6c: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x2d5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2d5b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b74: 0x922b0090  lbu         $t3, 0x90($s1)
    ctx->pc = 0x2d5b74u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2d5b78: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5b7c: 0xde2a0088  ld          $t2, 0x88($s1)
    ctx->pc = 0x2d5b7cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2d5b80: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d5b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5b84: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x2d5b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d5b88: 0xc0b547c  jal         func_2D51F0
    ctx->pc = 0x2D5B88u;
    SET_GPR_U32(ctx, 31, 0x2D5B90u);
    ctx->pc = 0x2D5B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B88u;
            // 0x2d5b8c: 0x534021  addu        $t0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D51F0u;
    if (runtime->hasFunction(0x2D51F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D51F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5B90u; }
        if (ctx->pc != 0x2D5B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChar__5CFontFP11mgCDrawPrimiiii10RGBAQ_TYPEUc_0x2d51f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5B90u; }
        if (ctx->pc != 0x2D5B90u) { return; }
    }
    ctx->pc = 0x2D5B90u;
label_2d5b90:
    // 0x2d5b90: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x2d5b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2d5b94: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5B94u;
    {
        const bool branch_taken_0x2d5b94 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D5B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B94u;
            // 0x2d5b98: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b94) {
            ctx->pc = 0x2D5BA4u;
            goto label_2d5ba4;
        }
    }
    ctx->pc = 0x2D5B9Cu;
    // 0x2d5b9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2d5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5ba0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d5ba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2d5ba4:
    // 0x2d5ba4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2d5ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d5ba8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D5BA8u;
    {
        const bool branch_taken_0x2d5ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5BA8u;
            // 0x2d5bac: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ba8) {
            ctx->pc = 0x2D5C2Cu;
            goto label_2d5c2c;
        }
    }
    ctx->pc = 0x2D5BB0u;
label_2d5bb0:
    // 0x2d5bb0: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x2d5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x2d5bb4: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x2d5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2d5bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bbc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d5bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d5bc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d5bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bc4: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x2d5bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d5bc8: 0xc0b5500  jal         func_2D5400
    ctx->pc = 0x2D5BC8u;
    SET_GPR_U32(ctx, 31, 0x2D5BD0u);
    ctx->pc = 0x2D5BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5BC8u;
            // 0x2d5bcc: 0x534021  addu        $t0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5400u;
    if (runtime->hasFunction(0x2D5400u)) {
        auto targetFn = runtime->lookupFunction(0x2D5400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5BD0u; }
        if (ctx->pc != 0x2D5BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChar__5CFontFP11mgCDrawPrimPcii_0x2d5400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5BD0u; }
        if (ctx->pc != 0x2D5BD0u) { return; }
    }
    ctx->pc = 0x2D5BD0u;
label_2d5bd0:
    // 0x2d5bd0: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D5BD0u;
    SET_GPR_U32(ctx, 31, 0x2D5BD8u);
    ctx->pc = 0x2D5BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5BD0u;
            // 0x2d5bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5BD8u; }
        if (ctx->pc != 0x2D5BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5BD8u; }
        if (ctx->pc != 0x2D5BD8u) { return; }
    }
    ctx->pc = 0x2D5BD8u;
label_2d5bd8:
    // 0x2d5bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bdc: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x2D5BDCu;
    SET_GPR_U32(ctx, 31, 0x2D5BE4u);
    ctx->pc = 0x2D5BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5BDCu;
            // 0x2d5be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5BE4u; }
        if (ctx->pc != 0x2D5BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5BE4u; }
        if (ctx->pc != 0x2D5BE4u) { return; }
    }
    ctx->pc = 0x2D5BE4u;
label_2d5be4:
    // 0x2d5be4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5BE4u;
    {
        const bool branch_taken_0x2d5be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5be4) {
            ctx->pc = 0x2D5BF8u;
            goto label_2d5bf8;
        }
    }
    ctx->pc = 0x2D5BECu;
    // 0x2d5bec: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x2d5becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2d5bf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D5BF0u;
    {
        const bool branch_taken_0x2d5bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5BF0u;
            // 0x2d5bf4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bf0) {
            ctx->pc = 0x2D5C28u;
            goto label_2d5c28;
        }
    }
    ctx->pc = 0x2D5BF8u;
label_2d5bf8:
    // 0x2d5bf8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D5BF8u;
    SET_GPR_U32(ctx, 31, 0x2D5C00u);
    ctx->pc = 0x2D5BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5BF8u;
            // 0x2d5bfc: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C00u; }
        if (ctx->pc != 0x2D5C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C00u; }
        if (ctx->pc != 0x2D5C00u) { return; }
    }
    ctx->pc = 0x2D5C00u;
label_2d5c00:
    // 0x2d5c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c04: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x2D5C04u;
    SET_GPR_U32(ctx, 31, 0x2D5C0Cu);
    ctx->pc = 0x2D5C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C04u;
            // 0x2d5c08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C0Cu; }
        if (ctx->pc != 0x2D5C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C0Cu; }
        if (ctx->pc != 0x2D5C0Cu) { return; }
    }
    ctx->pc = 0x2D5C0Cu;
label_2d5c0c:
    // 0x2d5c0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5C0Cu;
    {
        const bool branch_taken_0x2d5c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5c0c) {
            ctx->pc = 0x2D5C20u;
            goto label_2d5c20;
        }
    }
    ctx->pc = 0x2D5C14u;
    // 0x2d5c14: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x2d5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2d5c18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5C18u;
    {
        const bool branch_taken_0x2d5c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C18u;
            // 0x2d5c1c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c18) {
            ctx->pc = 0x2D5C28u;
            goto label_2d5c28;
        }
    }
    ctx->pc = 0x2D5C20u;
label_2d5c20:
    // 0x2d5c20: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x2d5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2d5c24: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2d5c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2d5c28:
    // 0x2d5c28: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x2d5c28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_2d5c2c:
    // 0x2d5c2c: 0x0  nop
    ctx->pc = 0x2d5c2cu;
    // NOP
    // 0x2d5c30: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x2d5c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2d5c34: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x2D5C34u;
    {
        const bool branch_taken_0x2d5c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C34u;
            // 0x2d5c38: 0x2d48021  addu        $s0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c34) {
            ctx->pc = 0x2D5AA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5aa4;
        }
    }
    ctx->pc = 0x2D5C3Cu;
label_2d5c3c:
    // 0x2d5c3c: 0x0  nop
    ctx->pc = 0x2d5c3cu;
    // NOP
    // 0x2d5c40: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2D5C40u;
    SET_GPR_U32(ctx, 31, 0x2D5C48u);
    ctx->pc = 0x2D5C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C40u;
            // 0x2d5c44: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C48u; }
        if (ctx->pc != 0x2D5C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C48u; }
        if (ctx->pc != 0x2D5C48u) { return; }
    }
    ctx->pc = 0x2D5C48u;
label_2d5c48:
    // 0x2d5c48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d5c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d5c4c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d5c4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d5c50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d5c50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d5c54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d5c54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d5c58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d5c58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C6Cu;
            // 0x2d5c70: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5C74u;
}
