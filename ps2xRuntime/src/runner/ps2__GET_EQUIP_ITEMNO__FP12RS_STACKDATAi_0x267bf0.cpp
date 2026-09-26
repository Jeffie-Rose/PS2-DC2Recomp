#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_EQUIP_ITEMNO__FP12RS_STACKDATAi
// Address: 0x267bf0 - 0x267cd8
void ps2__GET_EQUIP_ITEMNO__FP12RS_STACKDATAi_0x267bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_EQUIP_ITEMNO__FP12RS_STACKDATAi_0x267bf0");
#endif

    switch (ctx->pc) {
        case 0x267c10u: goto label_267c10;
        case 0x267c20u: goto label_267c20;
        case 0x267c60u: goto label_267c60;
        case 0x267c88u: goto label_267c88;
        case 0x267cb8u: goto label_267cb8;
        default: break;
    }

    ctx->pc = 0x267bf0u;

    // 0x267bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x267bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x267bf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x267bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x267bf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x267bfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267c00: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x267c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x267c04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267c08: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267C08u;
    SET_GPR_U32(ctx, 31, 0x267C10u);
    ctx->pc = 0x267C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267C08u;
            // 0x267c0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C10u; }
        if (ctx->pc != 0x267C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C10u; }
        if (ctx->pc != 0x267C10u) { return; }
    }
    ctx->pc = 0x267C10u;
label_267c10:
    // 0x267c10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c18: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267C18u;
    SET_GPR_U32(ctx, 31, 0x267C20u);
    ctx->pc = 0x267C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267C18u;
            // 0x267c1c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C20u; }
        if (ctx->pc != 0x267C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C20u; }
        if (ctx->pc != 0x267C20u) { return; }
    }
    ctx->pc = 0x267C20u;
label_267c20:
    // 0x267c20: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267C20u;
    {
        const bool branch_taken_0x267c20 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x267C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C20u;
            // 0x267c24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c20) {
            ctx->pc = 0x267C34u;
            goto label_267c34;
        }
    }
    ctx->pc = 0x267C28u;
    // 0x267c28: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x267c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x267c2c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x267C2Cu;
    {
        const bool branch_taken_0x267c2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x267c2c) {
            ctx->pc = 0x267C3Cu;
            goto label_267c3c;
        }
    }
    ctx->pc = 0x267C34u;
label_267c34:
    // 0x267c34: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x267C34u;
    {
        const bool branch_taken_0x267c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C34u;
            // 0x267c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c34) {
            ctx->pc = 0x267CBCu;
            goto label_267cbc;
        }
    }
    ctx->pc = 0x267C3Cu;
label_267c3c:
    // 0x267c3c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x267C3Cu;
    {
        const bool branch_taken_0x267c3c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x267C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C3Cu;
            // 0x267c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c3c) {
            ctx->pc = 0x267C50u;
            goto label_267c50;
        }
    }
    ctx->pc = 0x267C44u;
    // 0x267c44: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x267c44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x267c48: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x267C48u;
    {
        const bool branch_taken_0x267c48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x267C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C48u;
            // 0x267c4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c48) {
            ctx->pc = 0x267C58u;
            goto label_267c58;
        }
    }
    ctx->pc = 0x267C50u;
label_267c50:
    // 0x267c50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x267C50u;
    {
        const bool branch_taken_0x267c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C50u;
            // 0x267c54: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c50) {
            ctx->pc = 0x267CC0u;
            goto label_267cc0;
        }
    }
    ctx->pc = 0x267C58u;
label_267c58:
    // 0x267c58: 0xc064220  jal         func_190880
    ctx->pc = 0x267C58u;
    SET_GPR_U32(ctx, 31, 0x267C60u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C60u; }
        if (ctx->pc != 0x267C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C60u; }
        if (ctx->pc != 0x267C60u) { return; }
    }
    ctx->pc = 0x267C60u;
label_267c60:
    // 0x267c60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267C60u;
    {
        const bool branch_taken_0x267c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C60u;
            // 0x267c64: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c60) {
            ctx->pc = 0x267C70u;
            goto label_267c70;
        }
    }
    ctx->pc = 0x267C68u;
    // 0x267c68: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x267c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x267c6c: 0x419021  addu        $s2, $v0, $at
    ctx->pc = 0x267c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_267c70:
    // 0x267c70: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x267C70u;
    {
        const bool branch_taken_0x267c70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x267C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C70u;
            // 0x267c74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c70) {
            ctx->pc = 0x267C80u;
            goto label_267c80;
        }
    }
    ctx->pc = 0x267C78u;
    // 0x267c78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x267C78u;
    {
        const bool branch_taken_0x267c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C78u;
            // 0x267c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c78) {
            ctx->pc = 0x267CBCu;
            goto label_267cbc;
        }
    }
    ctx->pc = 0x267C80u;
label_267c80:
    // 0x267c80: 0xc066d24  jal         func_19B490
    ctx->pc = 0x267C80u;
    SET_GPR_U32(ctx, 31, 0x267C88u);
    ctx->pc = 0x267C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267C80u;
            // 0x267c84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C88u; }
        if (ctx->pc != 0x267C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C88u; }
        if (ctx->pc != 0x267C88u) { return; }
    }
    ctx->pc = 0x267C88u;
label_267c88:
    // 0x267c88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267C88u;
    {
        const bool branch_taken_0x267c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C88u;
            // 0x267c8c: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c88) {
            ctx->pc = 0x267C98u;
            goto label_267c98;
        }
    }
    ctx->pc = 0x267C90u;
    // 0x267c90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x267C90u;
    {
        const bool branch_taken_0x267c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C90u;
            // 0x267c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c90) {
            ctx->pc = 0x267CBCu;
            goto label_267cbc;
        }
    }
    ctx->pc = 0x267C98u;
label_267c98:
    // 0x267c98: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x267c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x267c9c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x267c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x267ca0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x267ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x267ca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x267ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x267ca8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267cac: 0x84450172  lh          $a1, 0x172($v0)
    ctx->pc = 0x267cacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 370)));
    // 0x267cb0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x267CB0u;
    SET_GPR_U32(ctx, 31, 0x267CB8u);
    ctx->pc = 0x267CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267CB0u;
            // 0x267cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267CB8u; }
        if (ctx->pc != 0x267CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267CB8u; }
        if (ctx->pc != 0x267CB8u) { return; }
    }
    ctx->pc = 0x267CB8u;
label_267cb8:
    // 0x267cb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267cbc:
    // 0x267cbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x267cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_267cc0:
    // 0x267cc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267cc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267cc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267cc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x267CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267CD0u;
            // 0x267cd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267CD8u;
}
