#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _JOIN_PARTY_MEMBER__FP12RS_STACKDATAi
// Address: 0x279aa0 - 0x279b94
void ps2__JOIN_PARTY_MEMBER__FP12RS_STACKDATAi_0x279aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__JOIN_PARTY_MEMBER__FP12RS_STACKDATAi_0x279aa0");
#endif

    switch (ctx->pc) {
        case 0x279abcu: goto label_279abc;
        case 0x279aecu: goto label_279aec;
        case 0x279b18u: goto label_279b18;
        case 0x279b30u: goto label_279b30;
        case 0x279b40u: goto label_279b40;
        case 0x279b50u: goto label_279b50;
        case 0x279b68u: goto label_279b68;
        default: break;
    }

    ctx->pc = 0x279aa0u;

    // 0x279aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279aa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x279aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x279aa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x279aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x279aac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279ab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x279ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ab4: 0xc064220  jal         func_190880
    ctx->pc = 0x279AB4u;
    SET_GPR_U32(ctx, 31, 0x279ABCu);
    ctx->pc = 0x279AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279AB4u;
            // 0x279ab8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279ABCu; }
        if (ctx->pc != 0x279ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279ABCu; }
        if (ctx->pc != 0x279ABCu) { return; }
    }
    ctx->pc = 0x279ABCu;
label_279abc:
    // 0x279abc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279ABCu;
    {
        const bool branch_taken_0x279abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279ABCu;
            // 0x279ac0: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279abc) {
            ctx->pc = 0x279ACCu;
            goto label_279acc;
        }
    }
    ctx->pc = 0x279AC4u;
    // 0x279ac4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x279AC4u;
    {
        const bool branch_taken_0x279ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279AC4u;
            // 0x279ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ac4) {
            ctx->pc = 0x279B7Cu;
            goto label_279b7c;
        }
    }
    ctx->pc = 0x279ACCu;
label_279acc:
    // 0x279acc: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x279accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x279ad0: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x279ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x279ad4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x279AD4u;
    {
        const bool branch_taken_0x279ad4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x279AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279AD4u;
            // 0x279ad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ad4) {
            ctx->pc = 0x279AE4u;
            goto label_279ae4;
        }
    }
    ctx->pc = 0x279ADCu;
    // 0x279adc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x279ADCu;
    {
        const bool branch_taken_0x279adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279ADCu;
            // 0x279ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279adc) {
            ctx->pc = 0x279B7Cu;
            goto label_279b7c;
        }
    }
    ctx->pc = 0x279AE4u;
label_279ae4:
    // 0x279ae4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279AE4u;
    SET_GPR_U32(ctx, 31, 0x279AECu);
    ctx->pc = 0x279AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279AE4u;
            // 0x279ae8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279AECu; }
        if (ctx->pc != 0x279AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279AECu; }
        if (ctx->pc != 0x279AECu) { return; }
    }
    ctx->pc = 0x279AECu;
label_279aec:
    // 0x279aec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x279aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x279af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x279af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279af4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x279af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279af8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x279AF8u;
    {
        const bool branch_taken_0x279af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x279AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279AF8u;
            // 0x279afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279af8) {
            ctx->pc = 0x279B48u;
            goto label_279b48;
        }
    }
    ctx->pc = 0x279B00u;
    // 0x279b00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x279B00u;
    {
        const bool branch_taken_0x279b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B00u;
            // 0x279b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b00) {
            ctx->pc = 0x279B10u;
            goto label_279b10;
        }
    }
    ctx->pc = 0x279B08u;
    // 0x279b08: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x279B08u;
    {
        const bool branch_taken_0x279b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B08u;
            // 0x279b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b08) {
            ctx->pc = 0x279B70u;
            goto label_279b70;
        }
    }
    ctx->pc = 0x279B10u;
label_279b10:
    // 0x279b10: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279B10u;
    SET_GPR_U32(ctx, 31, 0x279B18u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B18u; }
        if (ctx->pc != 0x279B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B18u; }
        if (ctx->pc != 0x279B18u) { return; }
    }
    ctx->pc = 0x279B18u;
label_279b18:
    // 0x279b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279b1c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279B1Cu;
    {
        const bool branch_taken_0x279b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x279B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B1Cu;
            // 0x279b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b1c) {
            ctx->pc = 0x279B38u;
            goto label_279b38;
        }
    }
    ctx->pc = 0x279B24u;
    // 0x279b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b28: 0xc066e68  jal         func_19B9A0
    ctx->pc = 0x279B28u;
    SET_GPR_U32(ctx, 31, 0x279B30u);
    ctx->pc = 0x279B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279B28u;
            // 0x279b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B30u; }
        if (ctx->pc != 0x279B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B30u; }
        if (ctx->pc != 0x279B30u) { return; }
    }
    ctx->pc = 0x279B30u;
label_279b30:
    // 0x279b30: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x279B30u;
    {
        const bool branch_taken_0x279b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B30u;
            // 0x279b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b30) {
            ctx->pc = 0x279B7Cu;
            goto label_279b7c;
        }
    }
    ctx->pc = 0x279B38u;
label_279b38:
    // 0x279b38: 0xc066e80  jal         func_19BA00
    ctx->pc = 0x279B38u;
    SET_GPR_U32(ctx, 31, 0x279B40u);
    ctx->pc = 0x279B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279B38u;
            // 0x279b3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA00u;
    if (runtime->hasFunction(0x19BA00u)) {
        auto targetFn = runtime->lookupFunction(0x19BA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B40u; }
        if (ctx->pc != 0x279B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LeavePartyMember__16CUserDataManagerFi_0x19ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B40u; }
        if (ctx->pc != 0x279B40u) { return; }
    }
    ctx->pc = 0x279B40u;
label_279b40:
    // 0x279b40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x279B40u;
    {
        const bool branch_taken_0x279b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279b40) {
            ctx->pc = 0x279B78u;
            goto label_279b78;
        }
    }
    ctx->pc = 0x279B48u;
label_279b48:
    // 0x279b48: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x279B48u;
    SET_GPR_U32(ctx, 31, 0x279B50u);
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B50u; }
        if (ctx->pc != 0x279B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B50u; }
        if (ctx->pc != 0x279B50u) { return; }
    }
    ctx->pc = 0x279B50u;
label_279b50:
    // 0x279b50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b58: 0x2051804  sllv        $v1, $a1, $s0
    ctx->pc = 0x279b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x279b5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x279b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x279b60: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x279B60u;
    SET_GPR_U32(ctx, 31, 0x279B68u);
    ctx->pc = 0x279B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279B60u;
            // 0x279b64: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B68u; }
        if (ctx->pc != 0x279B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279B68u; }
        if (ctx->pc != 0x279B68u) { return; }
    }
    ctx->pc = 0x279B68u;
label_279b68:
    // 0x279b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279B68u;
    {
        const bool branch_taken_0x279b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279b68) {
            ctx->pc = 0x279B78u;
            goto label_279b78;
        }
    }
    ctx->pc = 0x279B70u;
label_279b70:
    // 0x279b70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279B70u;
    {
        const bool branch_taken_0x279b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B70u;
            // 0x279b74: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b70) {
            ctx->pc = 0x279B80u;
            goto label_279b80;
        }
    }
    ctx->pc = 0x279B78u;
label_279b78:
    // 0x279b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279b7c:
    // 0x279b7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x279b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_279b80:
    // 0x279b80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x279B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B8Cu;
            // 0x279b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279B94u;
}
