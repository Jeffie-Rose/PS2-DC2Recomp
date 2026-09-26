#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii
// Address: 0x1e9be0 - 0x1e9d34
void GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0");
#endif

    switch (ctx->pc) {
        case 0x1e9c84u: goto label_1e9c84;
        case 0x1e9cb4u: goto label_1e9cb4;
        case 0x1e9cd4u: goto label_1e9cd4;
        case 0x1e9ce8u: goto label_1e9ce8;
        default: break;
    }

    ctx->pc = 0x1e9be0u;

    // 0x1e9be0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e9be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e9be4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9be8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e9be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e9bec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e9becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e9bf0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e9bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e9bf4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1e9bf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9bf8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e9bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e9bfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e9bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e9c00: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e9c00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e9c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e9c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e9c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e9c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9c14: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E9C14u;
    {
        const bool branch_taken_0x1e9c14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C14u;
            // 0x1e9c18: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c14) {
            ctx->pc = 0x1E9C60u;
            goto label_1e9c60;
        }
    }
    ctx->pc = 0x1E9C1Cu;
    // 0x1e9c1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9c20: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E9C20u;
    {
        const bool branch_taken_0x1e9c20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C20u;
            // 0x1e9c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c20) {
            ctx->pc = 0x1E9C54u;
            goto label_1e9c54;
        }
    }
    ctx->pc = 0x1E9C28u;
    // 0x1e9c28: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9C28u;
    {
        const bool branch_taken_0x1e9c28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9c28) {
            ctx->pc = 0x1E9C40u;
            goto label_1e9c40;
        }
    }
    ctx->pc = 0x1E9C30u;
    // 0x1e9c30: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9C30u;
    {
        const bool branch_taken_0x1e9c30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c30) {
            ctx->pc = 0x1E9C40u;
            goto label_1e9c40;
        }
    }
    ctx->pc = 0x1E9C38u;
    // 0x1e9c38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E9C38u;
    {
        const bool branch_taken_0x1e9c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C38u;
            // 0x1e9c3c: 0xaec00024  sw          $zero, 0x24($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c38) {
            ctx->pc = 0x1E9C6Cu;
            goto label_1e9c6c;
        }
    }
    ctx->pc = 0x1E9C40u;
label_1e9c40:
    // 0x1e9c40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e9c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c44: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9C44u;
    {
        const bool branch_taken_0x1e9c44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C44u;
            // 0x1e9c48: 0x24170007  addiu       $s7, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c44) {
            ctx->pc = 0x1E9C68u;
            goto label_1e9c68;
        }
    }
    ctx->pc = 0x1E9C4Cu;
    // 0x1e9c4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9C4Cu;
    {
        const bool branch_taken_0x1e9c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C4Cu;
            // 0x1e9c50: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c4c) {
            ctx->pc = 0x1E9C68u;
            goto label_1e9c68;
        }
    }
    ctx->pc = 0x1E9C54u;
label_1e9c54:
    // 0x1e9c54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e9c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9c58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9C58u;
    {
        const bool branch_taken_0x1e9c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C58u;
            // 0x1e9c5c: 0x24170005  addiu       $s7, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c58) {
            ctx->pc = 0x1E9C68u;
            goto label_1e9c68;
        }
    }
    ctx->pc = 0x1E9C60u;
label_1e9c60:
    // 0x1e9c60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e9c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c64: 0x24170006  addiu       $s7, $zero, 0x6
    ctx->pc = 0x1e9c64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e9c68:
    // 0x1e9c68: 0xaec00024  sw          $zero, 0x24($s6)
    ctx->pc = 0x1e9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 0));
label_1e9c6c:
    // 0x1e9c6c: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1e9c6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1e9c70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e9c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c74: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E9C74u;
    {
        const bool branch_taken_0x1e9c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C74u;
            // 0x1e9c78: 0xaec0001c  sw          $zero, 0x1C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c74) {
            ctx->pc = 0x1E9CFCu;
            goto label_1e9cfc;
        }
    }
    ctx->pc = 0x1E9C7Cu;
    // 0x1e9c7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e9c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c80: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e9c80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c84:
    // 0x1e9c84: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1e9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1e9c88: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1e9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1e9c8c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e9c90: 0x2442d8d0  addiu       $v0, $v0, -0x2730
    ctx->pc = 0x1e9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
    // 0x1e9c94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9c9c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e9ca0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1e9ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9ca4: 0x6400015  bltz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E9CA4u;
    {
        const bool branch_taken_0x1e9ca4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1E9CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CA4u;
            // 0x1e9ca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ca4) {
            ctx->pc = 0x1E9CFCu;
            goto label_1e9cfc;
        }
    }
    ctx->pc = 0x1E9CACu;
    // 0x1e9cac: 0xc04e714  jal         func_139C50
    ctx->pc = 0x1E9CACu;
    SET_GPR_U32(ctx, 31, 0x1E9CB4u);
    ctx->pc = 0x1E9CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CACu;
            // 0x1e9cb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CB4u; }
        if (ctx->pc != 0x1E9CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CB4u; }
        if (ctx->pc != 0x1E9CB4u) { return; }
    }
    ctx->pc = 0x1E9CB4u;
label_1e9cb4:
    // 0x1e9cb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9CB4u;
    {
        const bool branch_taken_0x1e9cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CB4u;
            // 0x1e9cb8: 0x3d4a821  addu        $s5, $fp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cb4) {
            ctx->pc = 0x1E9CC4u;
            goto label_1e9cc4;
        }
    }
    ctx->pc = 0x1E9CBCu;
    // 0x1e9cbc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9CBCu;
    {
        const bool branch_taken_0x1e9cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CBCu;
            // 0x1e9cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cbc) {
            ctx->pc = 0x1E9D04u;
            goto label_1e9d04;
        }
    }
    ctx->pc = 0x1E9CC4u;
label_1e9cc4:
    // 0x1e9cc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e9cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9cc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ccc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1E9CCCu;
    SET_GPR_U32(ctx, 31, 0x1E9CD4u);
    ctx->pc = 0x1E9CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CCCu;
            // 0x1e9cd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CD4u; }
        if (ctx->pc != 0x1E9CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CD4u; }
        if (ctx->pc != 0x1E9CD4u) { return; }
    }
    ctx->pc = 0x1E9CD4u;
label_1e9cd4:
    // 0x1e9cd4: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x1e9cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x1e9cd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9cdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e9cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ce0: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1E9CE0u;
    SET_GPR_U32(ctx, 31, 0x1E9CE8u);
    ctx->pc = 0x1E9CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CE0u;
            // 0x1e9ce4: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CE8u; }
        if (ctx->pc != 0x1E9CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CE8u; }
        if (ctx->pc != 0x1E9CE8u) { return; }
    }
    ctx->pc = 0x1E9CE8u;
label_1e9ce8:
    // 0x1e9ce8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e9ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e9cec: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e9cecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1e9cf0: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x1e9cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1e9cf4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1E9CF4u;
    {
        const bool branch_taken_0x1e9cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9CF4u;
            // 0x1e9cf8: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cf4) {
            ctx->pc = 0x1E9C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e9c84;
        }
    }
    ctx->pc = 0x1E9CFCu;
label_1e9cfc:
    // 0x1e9cfc: 0x0  nop
    ctx->pc = 0x1e9cfcu;
    // NOP
    // 0x1e9d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9d04:
    // 0x1e9d04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e9d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9d08: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e9d08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9d0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e9d0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9d10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e9d10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9d14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e9d14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9d18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e9d18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9d1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9d1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9d20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D2Cu;
            // 0x1e9d30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9D34u;
}
