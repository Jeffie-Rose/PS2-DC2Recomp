#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_EQUIP__FP12RS_STACKDATAi
// Address: 0x279ce0 - 0x279d58
void ps2__SET_CHARA_EQUIP__FP12RS_STACKDATAi_0x279ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_EQUIP__FP12RS_STACKDATAi_0x279ce0");
#endif

    switch (ctx->pc) {
        case 0x279cf8u: goto label_279cf8;
        case 0x279d28u: goto label_279d28;
        case 0x279d34u: goto label_279d34;
        case 0x279d44u: goto label_279d44;
        default: break;
    }

    ctx->pc = 0x279ce0u;

    // 0x279ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279cf0: 0xc064220  jal         func_190880
    ctx->pc = 0x279CF0u;
    SET_GPR_U32(ctx, 31, 0x279CF8u);
    ctx->pc = 0x279CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279CF0u;
            // 0x279cf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CF8u; }
        if (ctx->pc != 0x279CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CF8u; }
        if (ctx->pc != 0x279CF8u) { return; }
    }
    ctx->pc = 0x279CF8u;
label_279cf8:
    // 0x279cf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279CF8u;
    {
        const bool branch_taken_0x279cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279CF8u;
            // 0x279cfc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cf8) {
            ctx->pc = 0x279D08u;
            goto label_279d08;
        }
    }
    ctx->pc = 0x279D00u;
    // 0x279d00: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x279D00u;
    {
        const bool branch_taken_0x279d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D00u;
            // 0x279d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d00) {
            ctx->pc = 0x279D44u;
            goto label_279d44;
        }
    }
    ctx->pc = 0x279D08u;
label_279d08:
    // 0x279d08: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x279d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x279d0c: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x279d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x279d10: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x279D10u;
    {
        const bool branch_taken_0x279d10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x279D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D10u;
            // 0x279d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d10) {
            ctx->pc = 0x279D20u;
            goto label_279d20;
        }
    }
    ctx->pc = 0x279D18u;
    // 0x279d18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x279D18u;
    {
        const bool branch_taken_0x279d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D18u;
            // 0x279d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d18) {
            ctx->pc = 0x279D44u;
            goto label_279d44;
        }
    }
    ctx->pc = 0x279D20u;
label_279d20:
    // 0x279d20: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279D20u;
    SET_GPR_U32(ctx, 31, 0x279D28u);
    ctx->pc = 0x279D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D20u;
            // 0x279d24: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D28u; }
        if (ctx->pc != 0x279D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D28u; }
        if (ctx->pc != 0x279D28u) { return; }
    }
    ctx->pc = 0x279D28u;
label_279d28:
    // 0x279d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d2c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279D2Cu;
    SET_GPR_U32(ctx, 31, 0x279D34u);
    ctx->pc = 0x279D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D2Cu;
            // 0x279d30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D34u; }
        if (ctx->pc != 0x279D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D34u; }
        if (ctx->pc != 0x279D34u) { return; }
    }
    ctx->pc = 0x279D34u;
label_279d34:
    // 0x279d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d3c: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x279D3Cu;
    SET_GPR_U32(ctx, 31, 0x279D44u);
    ctx->pc = 0x279D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D3Cu;
            // 0x279d40: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D44u; }
        if (ctx->pc != 0x279D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFii_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D44u; }
        if (ctx->pc != 0x279D44u) { return; }
    }
    ctx->pc = 0x279D44u;
label_279d44:
    // 0x279d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279d48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279d4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279d50: 0x3e00008  jr          $ra
    ctx->pc = 0x279D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D50u;
            // 0x279d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279D58u;
}
