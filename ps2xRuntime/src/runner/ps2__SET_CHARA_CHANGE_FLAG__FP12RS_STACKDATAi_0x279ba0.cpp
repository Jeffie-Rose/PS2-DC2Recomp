#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_CHANGE_FLAG__FP12RS_STACKDATAi
// Address: 0x279ba0 - 0x279c34
void ps2__SET_CHARA_CHANGE_FLAG__FP12RS_STACKDATAi_0x279ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_CHANGE_FLAG__FP12RS_STACKDATAi_0x279ba0");
#endif

    switch (ctx->pc) {
        case 0x279bb8u: goto label_279bb8;
        case 0x279be8u: goto label_279be8;
        case 0x279bf4u: goto label_279bf4;
        case 0x279c0cu: goto label_279c0c;
        case 0x279c1cu: goto label_279c1c;
        default: break;
    }

    ctx->pc = 0x279ba0u;

    // 0x279ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279bb0: 0xc064220  jal         func_190880
    ctx->pc = 0x279BB0u;
    SET_GPR_U32(ctx, 31, 0x279BB8u);
    ctx->pc = 0x279BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279BB0u;
            // 0x279bb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279BB8u; }
        if (ctx->pc != 0x279BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279BB8u; }
        if (ctx->pc != 0x279BB8u) { return; }
    }
    ctx->pc = 0x279BB8u;
label_279bb8:
    // 0x279bb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279BB8u;
    {
        const bool branch_taken_0x279bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BB8u;
            // 0x279bbc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bb8) {
            ctx->pc = 0x279BC8u;
            goto label_279bc8;
        }
    }
    ctx->pc = 0x279BC0u;
    // 0x279bc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x279BC0u;
    {
        const bool branch_taken_0x279bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BC0u;
            // 0x279bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bc0) {
            ctx->pc = 0x279C20u;
            goto label_279c20;
        }
    }
    ctx->pc = 0x279BC8u;
label_279bc8:
    // 0x279bc8: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x279bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x279bcc: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x279bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x279bd0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x279BD0u;
    {
        const bool branch_taken_0x279bd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x279BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BD0u;
            // 0x279bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bd0) {
            ctx->pc = 0x279BE0u;
            goto label_279be0;
        }
    }
    ctx->pc = 0x279BD8u;
    // 0x279bd8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x279BD8u;
    {
        const bool branch_taken_0x279bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BD8u;
            // 0x279bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bd8) {
            ctx->pc = 0x279C20u;
            goto label_279c20;
        }
    }
    ctx->pc = 0x279BE0u;
label_279be0:
    // 0x279be0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279BE0u;
    SET_GPR_U32(ctx, 31, 0x279BE8u);
    ctx->pc = 0x279BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279BE0u;
            // 0x279be4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279BE8u; }
        if (ctx->pc != 0x279BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279BE8u; }
        if (ctx->pc != 0x279BE8u) { return; }
    }
    ctx->pc = 0x279BE8u;
label_279be8:
    // 0x279be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279BECu;
    SET_GPR_U32(ctx, 31, 0x279BF4u);
    ctx->pc = 0x279BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279BECu;
            // 0x279bf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279BF4u; }
        if (ctx->pc != 0x279BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279BF4u; }
        if (ctx->pc != 0x279BF4u) { return; }
    }
    ctx->pc = 0x279BF4u;
label_279bf4:
    // 0x279bf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279bf8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279BF8u;
    {
        const bool branch_taken_0x279bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x279BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279BF8u;
            // 0x279bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bf8) {
            ctx->pc = 0x279C14u;
            goto label_279c14;
        }
    }
    ctx->pc = 0x279C00u;
    // 0x279c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c04: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x279C04u;
    SET_GPR_U32(ctx, 31, 0x279C0Cu);
    ctx->pc = 0x279C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279C04u;
            // 0x279c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C0Cu; }
        if (ctx->pc != 0x279C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C0Cu; }
        if (ctx->pc != 0x279C0Cu) { return; }
    }
    ctx->pc = 0x279C0Cu;
label_279c0c:
    // 0x279c0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279C0Cu;
    {
        const bool branch_taken_0x279c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C0Cu;
            // 0x279c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c0c) {
            ctx->pc = 0x279C20u;
            goto label_279c20;
        }
    }
    ctx->pc = 0x279C14u;
label_279c14:
    // 0x279c14: 0xc066ebc  jal         func_19BAF0
    ctx->pc = 0x279C14u;
    SET_GPR_U32(ctx, 31, 0x279C1Cu);
    ctx->pc = 0x279C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279C14u;
            // 0x279c18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAF0u;
    if (runtime->hasFunction(0x19BAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C1Cu; }
        if (ctx->pc != 0x279C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableCharaChange__16CUserDataManagerFi_0x19baf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C1Cu; }
        if (ctx->pc != 0x279C1Cu) { return; }
    }
    ctx->pc = 0x279C1Cu;
label_279c1c:
    // 0x279c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279c20:
    // 0x279c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x279C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C2Cu;
            // 0x279c30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279C34u;
}
