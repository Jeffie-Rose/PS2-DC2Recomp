#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPosFormValueSetFishingRod__FP13CGameDataUsed
// Address: 0x23fb20 - 0x23fbfc
void MenuPosFormValueSetFishingRod__FP13CGameDataUsed_0x23fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPosFormValueSetFishingRod__FP13CGameDataUsed_0x23fb20");
#endif

    switch (ctx->pc) {
        case 0x23fb4cu: goto label_23fb4c;
        case 0x23fb90u: goto label_23fb90;
        case 0x23fba4u: goto label_23fba4;
        case 0x23fbb8u: goto label_23fbb8;
        case 0x23fbdcu: goto label_23fbdc;
        default: break;
    }

    ctx->pc = 0x23fb20u;

    // 0x23fb20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23fb24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23fb28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23fb2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23fb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23fb30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23fb30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23fb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23fb38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fb3c: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
    ctx->pc = 0x23FB3Cu;
    {
        const bool branch_taken_0x23fb3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FB3Cu;
            // 0x23fb40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb3c) {
            ctx->pc = 0x23FBDCu;
            goto label_23fbdc;
        }
    }
    ctx->pc = 0x23FB44u;
    // 0x23fb44: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x23FB44u;
    SET_GPR_U32(ctx, 31, 0x23FB4Cu);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB4Cu; }
        if (ctx->pc != 0x23FB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB4Cu; }
        if (ctx->pc != 0x23FB4Cu) { return; }
    }
    ctx->pc = 0x23FB4Cu;
label_23fb4c:
    // 0x23fb4c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23FB4Cu;
    {
        const bool branch_taken_0x23fb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fb4c) {
            ctx->pc = 0x23FBDCu;
            goto label_23fbdc;
        }
    }
    ctx->pc = 0x23FB54u;
    // 0x23fb54: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x23fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x23fb58: 0x26920010  addiu       $s2, $s4, 0x10
    ctx->pc = 0x23fb58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x23fb5c: 0x86820026  lh          $v0, 0x26($s4)
    ctx->pc = 0x23fb5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 38)));
    // 0x23fb60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23fb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23fb64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb68: 0x8c700194  lw          $s0, 0x194($v1)
    ctx->pc = 0x23fb68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x23fb6c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x23fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x23fb70: 0x86820028  lh          $v0, 0x28($s4)
    ctx->pc = 0x23fb70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x23fb74: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x23fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x23fb78: 0x8682002a  lh          $v0, 0x2A($s4)
    ctx->pc = 0x23fb78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 42)));
    // 0x23fb7c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x23fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x23fb80: 0x8682002c  lh          $v0, 0x2C($s4)
    ctx->pc = 0x23fb80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x23fb84: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x23fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x23fb88: 0x8682002e  lh          $v0, 0x2E($s4)
    ctx->pc = 0x23fb88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 46)));
    // 0x23fb8c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x23fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_23fb90:
    // 0x23fb90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23fb94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23fb98: 0x24a5ad48  addiu       $a1, $a1, -0x52B8
    ctx->pc = 0x23fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946120));
    // 0x23fb9c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x23FB9Cu;
    SET_GPR_U32(ctx, 31, 0x23FBA4u);
    ctx->pc = 0x23FBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FB9Cu;
            // 0x23fba0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBA4u; }
        if (ctx->pc != 0x23FBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBA4u; }
        if (ctx->pc != 0x23FBA4u) { return; }
    }
    ctx->pc = 0x23FBA4u;
label_23fba4:
    // 0x23fba4: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x23fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x23fba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbac: 0x8c460060  lw          $a2, 0x60($v0)
    ctx->pc = 0x23fbacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x23fbb0: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23FBB0u;
    SET_GPR_U32(ctx, 31, 0x23FBB8u);
    ctx->pc = 0x23FBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FBB0u;
            // 0x23fbb4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBB8u; }
        if (ctx->pc != 0x23FBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBB8u; }
        if (ctx->pc != 0x23FBB8u) { return; }
    }
    ctx->pc = 0x23FBB8u;
label_23fbb8:
    // 0x23fbb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23fbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23fbbc: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x23fbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23fbc0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x23FBC0u;
    {
        const bool branch_taken_0x23fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FBC0u;
            // 0x23fbc4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbc0) {
            ctx->pc = 0x23FB90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fb90;
        }
    }
    ctx->pc = 0x23FBC8u;
    // 0x23fbc8: 0x8646002c  lh          $a2, 0x2C($s2)
    ctx->pc = 0x23fbc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x23fbcc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23fbd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbd4: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23FBD4u;
    SET_GPR_U32(ctx, 31, 0x23FBDCu);
    ctx->pc = 0x23FBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FBD4u;
            // 0x23fbd8: 0x24a5ad28  addiu       $a1, $a1, -0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBDCu; }
        if (ctx->pc != 0x23FBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBDCu; }
        if (ctx->pc != 0x23FBDCu) { return; }
    }
    ctx->pc = 0x23FBDCu;
label_23fbdc:
    // 0x23fbdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23fbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fbe0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23fbe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fbe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23fbe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fbe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23fbe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fbec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23fbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fbf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x23FBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FBF4u;
            // 0x23fbf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23FBFCu;
}
