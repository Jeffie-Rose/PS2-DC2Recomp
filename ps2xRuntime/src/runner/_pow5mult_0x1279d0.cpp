#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _pow5mult
// Address: 0x1279d0 - 0x127ad0
void _pow5mult_0x1279d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pow5mult_0x1279d0");
#endif

    switch (ctx->pc) {
        case 0x127a1cu: goto label_127a1c;
        case 0x127a44u: goto label_127a44;
        case 0x127a58u: goto label_127a58;
        case 0x127a70u: goto label_127a70;
        case 0x127a94u: goto label_127a94;
        case 0x127aa4u: goto label_127aa4;
        default: break;
    }

    ctx->pc = 0x1279d0u;

    // 0x1279d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1279d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1279d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1279d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1279d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1279d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1279dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1279dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1279e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1279e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1279e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1279e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1279ec: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x1279ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x1279f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1279f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1279f4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1279F4u;
    {
        const bool branch_taken_0x1279f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1279F4u;
            // 0x1279f8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279f4) {
            ctx->pc = 0x127A20u;
            goto label_127a20;
        }
    }
    ctx->pc = 0x1279FCu;
    // 0x1279fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1279fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x127a00: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x127a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x127a04: 0x244220b8  addiu       $v0, $v0, 0x20B8
    ctx->pc = 0x127a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8376));
    // 0x127a08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x127a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x127a0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x127a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x127a10: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x127a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127a14: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x127A14u;
    SET_GPR_U32(ctx, 31, 0x127A1Cu);
    ctx->pc = 0x127A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127A14u;
            // 0x127a18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A1Cu; }
        if (ctx->pc != 0x127A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A1Cu; }
        if (ctx->pc != 0x127A1Cu) { return; }
    }
    ctx->pc = 0x127A1Cu;
label_127a1c:
    // 0x127a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x127a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127a20:
    // 0x127a20: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x127a20u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x127a24: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x127A24u;
    {
        const bool branch_taken_0x127a24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A24u;
            // 0x127a28: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a24) {
            ctx->pc = 0x127AB4u;
            goto label_127ab4;
        }
    }
    ctx->pc = 0x127A2Cu;
    // 0x127a2c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x127a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x127a30: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x127A30u;
    {
        const bool branch_taken_0x127a30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x127A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A30u;
            // 0x127a34: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a30) {
            ctx->pc = 0x127A80u;
            goto label_127a80;
        }
    }
    ctx->pc = 0x127A38u;
    // 0x127a38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x127a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a3c: 0xc049dda  jal         func_127768
    ctx->pc = 0x127A3Cu;
    SET_GPR_U32(ctx, 31, 0x127A44u);
    ctx->pc = 0x127A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127A3Cu;
            // 0x127a40: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127768u;
    if (runtime->hasFunction(0x127768u)) {
        auto targetFn = runtime->lookupFunction(0x127768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A44u; }
        if (ctx->pc != 0x127A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x127768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A44u; }
        if (ctx->pc != 0x127A44u) { return; }
    }
    ctx->pc = 0x127A44u;
label_127a44:
    // 0x127a44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a48: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x127a48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x127a4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x127A4Cu;
    {
        const bool branch_taken_0x127a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A4Cu;
            // 0x127a50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a4c) {
            ctx->pc = 0x127A7Cu;
            goto label_127a7c;
        }
    }
    ctx->pc = 0x127A54u;
    // 0x127a54: 0x0  nop
    ctx->pc = 0x127a54u;
    // NOP
label_127a58:
    // 0x127a58: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127A58u;
    {
        const bool branch_taken_0x127a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127a58) {
            ctx->pc = 0x127A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127A58u;
            // 0x127a5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127A7Cu;
            goto label_127a7c;
        }
    }
    ctx->pc = 0x127A60u;
    // 0x127a60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x127a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x127a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a68: 0xc049de8  jal         func_1277A0
    ctx->pc = 0x127A68u;
    SET_GPR_U32(ctx, 31, 0x127A70u);
    ctx->pc = 0x127A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127A68u;
            // 0x127a6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1277A0u;
    if (runtime->hasFunction(0x1277A0u)) {
        auto targetFn = runtime->lookupFunction(0x1277A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A70u; }
        if (ctx->pc != 0x127A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x1277a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A70u; }
        if (ctx->pc != 0x127A70u) { return; }
    }
    ctx->pc = 0x127A70u;
label_127a70:
    // 0x127a70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x127a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x127a74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x127a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x127a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127a7c:
    // 0x127a7c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x127a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_127a80:
    // 0x127a80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127A80u;
    {
        const bool branch_taken_0x127a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A80u;
            // 0x127a84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a80) {
            ctx->pc = 0x127AA4u;
            goto label_127aa4;
        }
    }
    ctx->pc = 0x127A88u;
    // 0x127a88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x127a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a8c: 0xc049de8  jal         func_1277A0
    ctx->pc = 0x127A8Cu;
    SET_GPR_U32(ctx, 31, 0x127A94u);
    ctx->pc = 0x127A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127A8Cu;
            // 0x127a90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1277A0u;
    if (runtime->hasFunction(0x1277A0u)) {
        auto targetFn = runtime->lookupFunction(0x1277A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A94u; }
        if (ctx->pc != 0x127A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x1277a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127A94u; }
        if (ctx->pc != 0x127A94u) { return; }
    }
    ctx->pc = 0x127A94u;
label_127a94:
    // 0x127a94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x127a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x127a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a9c: 0xc049ce4  jal         func_127390
    ctx->pc = 0x127A9Cu;
    SET_GPR_U32(ctx, 31, 0x127AA4u);
    ctx->pc = 0x127AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127A9Cu;
            // 0x127aa0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127AA4u; }
        if (ctx->pc != 0x127AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127AA4u; }
        if (ctx->pc != 0x127AA4u) { return; }
    }
    ctx->pc = 0x127AA4u;
label_127aa4:
    // 0x127aa4: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x127aa4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x127aa8: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x127AA8u;
    {
        const bool branch_taken_0x127aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x127aa8) {
            ctx->pc = 0x127AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127AA8u;
            // 0x127aac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127a58;
        }
    }
    ctx->pc = 0x127AB0u;
    // 0x127ab0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x127ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_127ab4:
    // 0x127ab4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x127ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127ab8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x127ab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127abc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x127abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127ac0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x127AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127AC8u;
            // 0x127acc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127AD0u;
}
