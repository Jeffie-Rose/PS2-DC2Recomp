#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckTrushWeapon__FP13CGameDataUsed
// Address: 0x238bc0 - 0x238c68
void CheckTrushWeapon__FP13CGameDataUsed_0x238bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckTrushWeapon__FP13CGameDataUsed_0x238bc0");
#endif

    switch (ctx->pc) {
        case 0x238be0u: goto label_238be0;
        case 0x238becu: goto label_238bec;
        case 0x238bf8u: goto label_238bf8;
        case 0x238c08u: goto label_238c08;
        case 0x238c28u: goto label_238c28;
        default: break;
    }

    ctx->pc = 0x238bc0u;

    // 0x238bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x238bc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x238bc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x238bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x238bcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x238bd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x238bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238bd8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x238BD8u;
    SET_GPR_U32(ctx, 31, 0x238BE0u);
    ctx->pc = 0x238BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238BD8u;
            // 0x238bdc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BE0u; }
        if (ctx->pc != 0x238BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BE0u; }
        if (ctx->pc != 0x238BE0u) { return; }
    }
    ctx->pc = 0x238BE0u;
label_238be0:
    // 0x238be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x238be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238be4: 0xc066d14  jal         func_19B450
    ctx->pc = 0x238BE4u;
    SET_GPR_U32(ctx, 31, 0x238BECu);
    ctx->pc = 0x238BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238BE4u;
            // 0x238be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BECu; }
        if (ctx->pc != 0x238BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BECu; }
        if (ctx->pc != 0x238BECu) { return; }
    }
    ctx->pc = 0x238BECu;
label_238bec:
    // 0x238bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bf0: 0xc068644  jal         func_1A1910
    ctx->pc = 0x238BF0u;
    SET_GPR_U32(ctx, 31, 0x238BF8u);
    ctx->pc = 0x238BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238BF0u;
            // 0x238bf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BF8u; }
        if (ctx->pc != 0x238BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BF8u; }
        if (ctx->pc != 0x238BF8u) { return; }
    }
    ctx->pc = 0x238BF8u;
label_238bf8:
    // 0x238bf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bfc: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x238bfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x238c00: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x238C00u;
    {
        const bool branch_taken_0x238c00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C00u;
            // 0x238c04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c00) {
            ctx->pc = 0x238C48u;
            goto label_238c48;
        }
    }
    ctx->pc = 0x238C08u;
label_238c08:
    // 0x238c08: 0x1213000b  beq         $s0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x238C08u;
    {
        const bool branch_taken_0x238c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x238c08) {
            ctx->pc = 0x238C38u;
            goto label_238c38;
        }
    }
    ctx->pc = 0x238C10u;
    // 0x238c10: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x238c10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x238c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238c18: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238C18u;
    {
        const bool branch_taken_0x238c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x238C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C18u;
            // 0x238c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c18) {
            ctx->pc = 0x238C38u;
            goto label_238c38;
        }
    }
    ctx->pc = 0x238C20u;
    // 0x238c20: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x238C20u;
    SET_GPR_U32(ctx, 31, 0x238C28u);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C28u; }
        if (ctx->pc != 0x238C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C28u; }
        if (ctx->pc != 0x238C28u) { return; }
    }
    ctx->pc = 0x238C28u;
label_238c28:
    // 0x238c28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238C28u;
    {
        const bool branch_taken_0x238c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C28u;
            // 0x238c2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c28) {
            ctx->pc = 0x238C38u;
            goto label_238c38;
        }
    }
    ctx->pc = 0x238C30u;
    // 0x238c30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x238C30u;
    {
        const bool branch_taken_0x238c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C30u;
            // 0x238c34: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c30) {
            ctx->pc = 0x238C50u;
            goto label_238c50;
        }
    }
    ctx->pc = 0x238C38u;
label_238c38:
    // 0x238c38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x238c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x238c3c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x238c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x238c40: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x238C40u;
    {
        const bool branch_taken_0x238c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C40u;
            // 0x238c44: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c40) {
            ctx->pc = 0x238C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238c08;
        }
    }
    ctx->pc = 0x238C48u;
label_238c48:
    // 0x238c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x238c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_238c50:
    // 0x238c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x238c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x238c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238c60: 0x3e00008  jr          $ra
    ctx->pc = 0x238C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C60u;
            // 0x238c64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238C68u;
}
