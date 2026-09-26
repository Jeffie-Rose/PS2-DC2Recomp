#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_CHANGE_MASK__FP12RS_STACKDATAi
// Address: 0x279c40 - 0x279cd4
void ps2__SET_CHARA_CHANGE_MASK__FP12RS_STACKDATAi_0x279c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_CHANGE_MASK__FP12RS_STACKDATAi_0x279c40");
#endif

    switch (ctx->pc) {
        case 0x279c58u: goto label_279c58;
        case 0x279c88u: goto label_279c88;
        case 0x279c94u: goto label_279c94;
        case 0x279cacu: goto label_279cac;
        case 0x279cbcu: goto label_279cbc;
        default: break;
    }

    ctx->pc = 0x279c40u;

    // 0x279c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279c50: 0xc064220  jal         func_190880
    ctx->pc = 0x279C50u;
    SET_GPR_U32(ctx, 31, 0x279C58u);
    ctx->pc = 0x279C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279C50u;
            // 0x279c54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C58u; }
        if (ctx->pc != 0x279C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C58u; }
        if (ctx->pc != 0x279C58u) { return; }
    }
    ctx->pc = 0x279C58u;
label_279c58:
    // 0x279c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279C58u;
    {
        const bool branch_taken_0x279c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C58u;
            // 0x279c5c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c58) {
            ctx->pc = 0x279C68u;
            goto label_279c68;
        }
    }
    ctx->pc = 0x279C60u;
    // 0x279c60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x279C60u;
    {
        const bool branch_taken_0x279c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C60u;
            // 0x279c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c60) {
            ctx->pc = 0x279CC0u;
            goto label_279cc0;
        }
    }
    ctx->pc = 0x279C68u;
label_279c68:
    // 0x279c68: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x279c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x279c6c: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x279c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x279c70: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x279C70u;
    {
        const bool branch_taken_0x279c70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C70u;
            // 0x279c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c70) {
            ctx->pc = 0x279C80u;
            goto label_279c80;
        }
    }
    ctx->pc = 0x279C78u;
    // 0x279c78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x279C78u;
    {
        const bool branch_taken_0x279c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C78u;
            // 0x279c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c78) {
            ctx->pc = 0x279CC0u;
            goto label_279cc0;
        }
    }
    ctx->pc = 0x279C80u;
label_279c80:
    // 0x279c80: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279C80u;
    SET_GPR_U32(ctx, 31, 0x279C88u);
    ctx->pc = 0x279C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279C80u;
            // 0x279c84: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C88u; }
        if (ctx->pc != 0x279C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C88u; }
        if (ctx->pc != 0x279C88u) { return; }
    }
    ctx->pc = 0x279C88u;
label_279c88:
    // 0x279c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c8c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279C8Cu;
    SET_GPR_U32(ctx, 31, 0x279C94u);
    ctx->pc = 0x279C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279C8Cu;
            // 0x279c90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C94u; }
        if (ctx->pc != 0x279C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C94u; }
        if (ctx->pc != 0x279C94u) { return; }
    }
    ctx->pc = 0x279C94u;
label_279c94:
    // 0x279c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c98: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279C98u;
    {
        const bool branch_taken_0x279c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x279C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C98u;
            // 0x279c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c98) {
            ctx->pc = 0x279CB4u;
            goto label_279cb4;
        }
    }
    ctx->pc = 0x279CA0u;
    // 0x279ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ca4: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x279CA4u;
    SET_GPR_U32(ctx, 31, 0x279CACu);
    ctx->pc = 0x279CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279CA4u;
            // 0x279ca8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (runtime->hasFunction(0x19BF00u)) {
        auto targetFn = runtime->lookupFunction(0x19BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CACu; }
        if (ctx->pc != 0x279CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChangeMask__16CUserDataManagerFi_0x19bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CACu; }
        if (ctx->pc != 0x279CACu) { return; }
    }
    ctx->pc = 0x279CACu;
label_279cac:
    // 0x279cac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279CACu;
    {
        const bool branch_taken_0x279cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279CACu;
            // 0x279cb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cac) {
            ctx->pc = 0x279CC0u;
            goto label_279cc0;
        }
    }
    ctx->pc = 0x279CB4u;
label_279cb4:
    // 0x279cb4: 0xc066fcc  jal         func_19BF30
    ctx->pc = 0x279CB4u;
    SET_GPR_U32(ctx, 31, 0x279CBCu);
    ctx->pc = 0x279CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279CB4u;
            // 0x279cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF30u;
    if (runtime->hasFunction(0x19BF30u)) {
        auto targetFn = runtime->lookupFunction(0x19BF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CBCu; }
        if (ctx->pc != 0x279CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableCharaChangeMask__16CUserDataManagerFi_0x19bf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279CBCu; }
        if (ctx->pc != 0x279CBCu) { return; }
    }
    ctx->pc = 0x279CBCu;
label_279cbc:
    // 0x279cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279cc0:
    // 0x279cc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279cc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x279CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279CCCu;
            // 0x279cd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279CD4u;
}
