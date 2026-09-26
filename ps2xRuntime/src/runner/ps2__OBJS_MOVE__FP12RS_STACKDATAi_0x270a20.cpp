#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_MOVE__FP12RS_STACKDATAi
// Address: 0x270a20 - 0x270be8
void ps2__OBJS_MOVE__FP12RS_STACKDATAi_0x270a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_MOVE__FP12RS_STACKDATAi_0x270a20");
#endif

    switch (ctx->pc) {
        case 0x270a74u: goto label_270a74;
        case 0x270a98u: goto label_270a98;
        case 0x270b04u: goto label_270b04;
        case 0x270b14u: goto label_270b14;
        case 0x270b24u: goto label_270b24;
        case 0x270b3cu: goto label_270b3c;
        case 0x270b50u: goto label_270b50;
        case 0x270b60u: goto label_270b60;
        case 0x270b70u: goto label_270b70;
        case 0x270b88u: goto label_270b88;
        case 0x270ba4u: goto label_270ba4;
        case 0x270bc4u: goto label_270bc4;
        default: break;
    }

    ctx->pc = 0x270a20u;

    // 0x270a20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x270a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x270a24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x270a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x270a28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x270a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x270a2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x270a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x270a30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x270a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x270a34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x270a34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x270a3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x270a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270a44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x270a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a48: 0x1262003e  beq         $s3, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x270A48u;
    {
        const bool branch_taken_0x270a48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x270A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A48u;
            // 0x270a4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a48) {
            ctx->pc = 0x270B44u;
            goto label_270b44;
        }
    }
    ctx->pc = 0x270A50u;
    // 0x270a50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x270a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x270a54: 0x1262003b  beq         $s3, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x270A54u;
    {
        const bool branch_taken_0x270a54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x270A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A54u;
            // 0x270a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a54) {
            ctx->pc = 0x270B44u;
            goto label_270b44;
        }
    }
    ctx->pc = 0x270A5Cu;
    // 0x270a5c: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270A5Cu;
    {
        const bool branch_taken_0x270a5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x270a5c) {
            ctx->pc = 0x270A6Cu;
            goto label_270a6c;
        }
    }
    ctx->pc = 0x270A64u;
    // 0x270a64: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x270A64u;
    {
        const bool branch_taken_0x270a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A64u;
            // 0x270a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a64) {
            ctx->pc = 0x270B90u;
            goto label_270b90;
        }
    }
    ctx->pc = 0x270A6Cu;
label_270a6c:
    // 0x270a6c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270A6Cu;
    SET_GPR_U32(ctx, 31, 0x270A74u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270A74u; }
        if (ctx->pc != 0x270A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270A74u; }
        if (ctx->pc != 0x270A74u) { return; }
    }
    ctx->pc = 0x270A74u;
label_270a74:
    // 0x270a74: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x270a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x270a78: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x270a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x270a7c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270A7Cu;
    {
        const bool branch_taken_0x270a7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A7Cu;
            // 0x270a80: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a7c) {
            ctx->pc = 0x270A8Cu;
            goto label_270a8c;
        }
    }
    ctx->pc = 0x270A84u;
    // 0x270a84: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x270A84u;
    {
        const bool branch_taken_0x270a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A84u;
            // 0x270a88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a84) {
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270A8Cu;
label_270a8c:
    // 0x270a8c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x270a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x270a90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270A90u;
    {
        const bool branch_taken_0x270a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A90u;
            // 0x270a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a90) {
            ctx->pc = 0x270AC0u;
            goto label_270ac0;
        }
    }
    ctx->pc = 0x270A98u;
label_270a98:
    // 0x270a98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x270a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x270a9c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x270A9Cu;
    {
        const bool branch_taken_0x270a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x270a9c) {
            ctx->pc = 0x270ACCu;
            goto label_270acc;
        }
    }
    ctx->pc = 0x270AA4u;
    // 0x270aa4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x270aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x270aa8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270AA8u;
    {
        const bool branch_taken_0x270aa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x270aa8) {
            ctx->pc = 0x270AB8u;
            goto label_270ab8;
        }
    }
    ctx->pc = 0x270AB0u;
    // 0x270ab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270AB0u;
    {
        const bool branch_taken_0x270ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AB0u;
            // 0x270ab4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ab0) {
            ctx->pc = 0x270AC0u;
            goto label_270ac0;
        }
    }
    ctx->pc = 0x270AB8u;
label_270ab8:
    // 0x270ab8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x270AB8u;
    {
        const bool branch_taken_0x270ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AB8u;
            // 0x270abc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ab8) {
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270AC0u;
label_270ac0:
    // 0x270ac0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x270ac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x270ac4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x270AC4u;
    {
        const bool branch_taken_0x270ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ac4) {
            ctx->pc = 0x270A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270a98;
        }
    }
    ctx->pc = 0x270ACCu;
label_270acc:
    // 0x270acc: 0x0  nop
    ctx->pc = 0x270accu;
    // NOP
    // 0x270ad0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270AD0u;
    {
        const bool branch_taken_0x270ad0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AD0u;
            // 0x270ad4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ad0) {
            ctx->pc = 0x270AE0u;
            goto label_270ae0;
        }
    }
    ctx->pc = 0x270AD8u;
    // 0x270ad8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270AD8u;
    {
        const bool branch_taken_0x270ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ad8) {
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270AE0u;
label_270ae0:
    // 0x270ae0: 0x8cd30008  lw          $s3, 0x8($a2)
    ctx->pc = 0x270ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x270ae4: 0x8cd40004  lw          $s4, 0x4($a2)
    ctx->pc = 0x270ae4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x270ae8: 0x0  nop
    ctx->pc = 0x270ae8u;
    // NOP
label_270aec:
    // 0x270aec: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x270AECu;
    {
        const bool branch_taken_0x270aec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x270AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AECu;
            // 0x270af0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270aec) {
            ctx->pc = 0x270AFCu;
            goto label_270afc;
        }
    }
    ctx->pc = 0x270AF4u;
    // 0x270af4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x270AF4u;
    {
        const bool branch_taken_0x270af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AF4u;
            // 0x270af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270af4) {
            ctx->pc = 0x270BC8u;
            goto label_270bc8;
        }
    }
    ctx->pc = 0x270AFCu;
label_270afc:
    // 0x270afc: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270AFCu;
    SET_GPR_U32(ctx, 31, 0x270B04u);
    ctx->pc = 0x270B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270AFCu;
            // 0x270b00: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B04u; }
        if (ctx->pc != 0x270B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B04u; }
        if (ctx->pc != 0x270B04u) { return; }
    }
    ctx->pc = 0x270B04u;
label_270b04:
    // 0x270b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x270b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x270b0c: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x270B0Cu;
    SET_GPR_U32(ctx, 31, 0x270B14u);
    ctx->pc = 0x270B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270B0Cu;
            // 0x270b10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B14u; }
        if (ctx->pc != 0x270B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B14u; }
        if (ctx->pc != 0x270B14u) { return; }
    }
    ctx->pc = 0x270B14u;
label_270b14:
    // 0x270b14: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x270b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x270b18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b1c: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270B1Cu;
    SET_GPR_U32(ctx, 31, 0x270B24u);
    ctx->pc = 0x270B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270B1Cu;
            // 0x270b20: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B24u; }
        if (ctx->pc != 0x270B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B24u; }
        if (ctx->pc != 0x270B24u) { return; }
    }
    ctx->pc = 0x270B24u;
label_270b24:
    // 0x270b24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b28: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x270b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x270b2c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x270B2Cu;
    {
        const bool branch_taken_0x270b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B2Cu;
            // 0x270b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b2c) {
            ctx->pc = 0x270B9Cu;
            goto label_270b9c;
        }
    }
    ctx->pc = 0x270B34u;
    // 0x270b34: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270B34u;
    SET_GPR_U32(ctx, 31, 0x270B3Cu);
    ctx->pc = 0x270B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270B34u;
            // 0x270b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B3Cu; }
        if (ctx->pc != 0x270B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B3Cu; }
        if (ctx->pc != 0x270B3Cu) { return; }
    }
    ctx->pc = 0x270B3Cu;
label_270b3c:
    // 0x270b3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x270B3Cu;
    {
        const bool branch_taken_0x270b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B3Cu;
            // 0x270b40: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b3c) {
            ctx->pc = 0x270B98u;
            goto label_270b98;
        }
    }
    ctx->pc = 0x270B44u;
label_270b44:
    // 0x270b44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b48: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270B48u;
    SET_GPR_U32(ctx, 31, 0x270B50u);
    ctx->pc = 0x270B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270B48u;
            // 0x270b4c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B50u; }
        if (ctx->pc != 0x270B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B50u; }
        if (ctx->pc != 0x270B50u) { return; }
    }
    ctx->pc = 0x270B50u;
label_270b50:
    // 0x270b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x270b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x270b58: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x270B58u;
    SET_GPR_U32(ctx, 31, 0x270B60u);
    ctx->pc = 0x270B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270B58u;
            // 0x270b5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B60u; }
        if (ctx->pc != 0x270B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B60u; }
        if (ctx->pc != 0x270B60u) { return; }
    }
    ctx->pc = 0x270B60u;
label_270b60:
    // 0x270b60: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x270b60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x270b64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b68: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270B68u;
    SET_GPR_U32(ctx, 31, 0x270B70u);
    ctx->pc = 0x270B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270B68u;
            // 0x270b6c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B70u; }
        if (ctx->pc != 0x270B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B70u; }
        if (ctx->pc != 0x270B70u) { return; }
    }
    ctx->pc = 0x270B70u;
label_270b70:
    // 0x270b70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b74: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x270b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x270b78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270B78u;
    {
        const bool branch_taken_0x270b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B78u;
            // 0x270b7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b78) {
            ctx->pc = 0x270B98u;
            goto label_270b98;
        }
    }
    ctx->pc = 0x270B80u;
    // 0x270b80: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270B80u;
    SET_GPR_U32(ctx, 31, 0x270B88u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B88u; }
        if (ctx->pc != 0x270B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B88u; }
        if (ctx->pc != 0x270B88u) { return; }
    }
    ctx->pc = 0x270B88u;
label_270b88:
    // 0x270b88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270B88u;
    {
        const bool branch_taken_0x270b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B88u;
            // 0x270b8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b88) {
            ctx->pc = 0x270B98u;
            goto label_270b98;
        }
    }
    ctx->pc = 0x270B90u;
label_270b90:
    // 0x270b90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x270B90u;
    {
        const bool branch_taken_0x270b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B90u;
            // 0x270b94: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b90) {
            ctx->pc = 0x270BCCu;
            goto label_270bcc;
        }
    }
    ctx->pc = 0x270B98u;
label_270b98:
    // 0x270b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270b9c:
    // 0x270b9c: 0xc098a44  jal         func_262910
    ctx->pc = 0x270B9Cu;
    SET_GPR_U32(ctx, 31, 0x270BA4u);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BA4u; }
        if (ctx->pc != 0x270BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BA4u; }
        if (ctx->pc != 0x270BA4u) { return; }
    }
    ctx->pc = 0x270BA4u;
label_270ba4:
    // 0x270ba4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270BA4u;
    {
        const bool branch_taken_0x270ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270BA4u;
            // 0x270ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ba4) {
            ctx->pc = 0x270BB4u;
            goto label_270bb4;
        }
    }
    ctx->pc = 0x270BACu;
    // 0x270bac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x270BACu;
    {
        const bool branch_taken_0x270bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270BACu;
            // 0x270bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bac) {
            ctx->pc = 0x270BC8u;
            goto label_270bc8;
        }
    }
    ctx->pc = 0x270BB4u;
label_270bb4:
    // 0x270bb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x270bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270bb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x270bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270bbc: 0xc097264  jal         func_25C990
    ctx->pc = 0x270BBCu;
    SET_GPR_U32(ctx, 31, 0x270BC4u);
    ctx->pc = 0x270BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270BBCu;
            // 0x270bc0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C990u;
    if (runtime->hasFunction(0x25C990u)) {
        auto targetFn = runtime->lookupFunction(0x25C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BC4u; }
        if (ctx->pc != 0x270BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Move__12CSceneObjSeqFPfii_0x25c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BC4u; }
        if (ctx->pc != 0x270BC4u) { return; }
    }
    ctx->pc = 0x270BC4u;
label_270bc4:
    // 0x270bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270bc8:
    // 0x270bc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x270bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_270bcc:
    // 0x270bcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x270bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x270bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270be0: 0x3e00008  jr          $ra
    ctx->pc = 0x270BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270BE0u;
            // 0x270be4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270BE8u;
}
