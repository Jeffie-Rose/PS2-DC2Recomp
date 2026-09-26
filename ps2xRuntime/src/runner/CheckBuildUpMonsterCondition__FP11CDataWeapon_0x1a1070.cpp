#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckBuildUpMonsterCondition__FP11CDataWeapon
// Address: 0x1a1070 - 0x1a1110
void CheckBuildUpMonsterCondition__FP11CDataWeapon_0x1a1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckBuildUpMonsterCondition__FP11CDataWeapon_0x1a1070");
#endif

    switch (ctx->pc) {
        case 0x1a10a0u: goto label_1a10a0;
        case 0x1a10b8u: goto label_1a10b8;
        case 0x1a10d4u: goto label_1a10d4;
        default: break;
    }

    ctx->pc = 0x1a1070u;

    // 0x1a1070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1074: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a1074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a1078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a1078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a107c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1080: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a1080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1088: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1088u;
    {
        const bool branch_taken_0x1a1088 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1088u;
            // 0x1a108c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1088) {
            ctx->pc = 0x1A1098u;
            goto label_1a1098;
        }
    }
    ctx->pc = 0x1A1090u;
    // 0x1a1090: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A1090u;
    {
        const bool branch_taken_0x1a1090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1090u;
            // 0x1a1094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1090) {
            ctx->pc = 0x1A10F4u;
            goto label_1a10f4;
        }
    }
    ctx->pc = 0x1A1098u;
label_1a1098:
    // 0x1a1098: 0xc064220  jal         func_190880
    ctx->pc = 0x1A1098u;
    SET_GPR_U32(ctx, 31, 0x1A10A0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10A0u; }
        if (ctx->pc != 0x1A10A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10A0u; }
        if (ctx->pc != 0x1A10A0u) { return; }
    }
    ctx->pc = 0x1A10A0u;
label_1a10a0:
    // 0x1a10a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A10A0u;
    {
        const bool branch_taken_0x1a10a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A10A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10A0u;
            // 0x1a10a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10a0) {
            ctx->pc = 0x1A10B0u;
            goto label_1a10b0;
        }
    }
    ctx->pc = 0x1A10A8u;
    // 0x1a10a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A10A8u;
    {
        const bool branch_taken_0x1a10a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10A8u;
            // 0x1a10ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10a8) {
            ctx->pc = 0x1A10F4u;
            goto label_1a10f4;
        }
    }
    ctx->pc = 0x1A10B0u;
label_1a10b0:
    // 0x1a10b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a10b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a10b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a10b8:
    // 0x1a10b8: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x1a10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1a10bc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a10bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1a10c0: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x1a10c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1a10c4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A10C4u;
    {
        const bool branch_taken_0x1a10c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A10C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10C4u;
            // 0x1a10c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10c4) {
            ctx->pc = 0x1A10E0u;
            goto label_1a10e0;
        }
    }
    ctx->pc = 0x1A10CCu;
    // 0x1a10cc: 0xc068444  jal         func_1A1110
    ctx->pc = 0x1A10CCu;
    SET_GPR_U32(ctx, 31, 0x1A10D4u);
    ctx->pc = 0x1A1110u;
    if (runtime->hasFunction(0x1A1110u)) {
        auto targetFn = runtime->lookupFunction(0x1A1110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10D4u; }
        if (ctx->pc != 0x1A10D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KillMonsterCount__Fii_0x1a1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10D4u; }
        if (ctx->pc != 0x1A10D4u) { return; }
    }
    ctx->pc = 0x1A10D4u;
label_1a10d4:
    // 0x1a10d4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A10D4u;
    {
        const bool branch_taken_0x1a10d4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a10d4) {
            ctx->pc = 0x1A10E0u;
            goto label_1a10e0;
        }
    }
    ctx->pc = 0x1A10DCu;
    // 0x1a10dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a10dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a10e0:
    // 0x1a10e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a10e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a10e4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a10e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a10e8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A10E8u;
    {
        const bool branch_taken_0x1a10e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A10ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10E8u;
            // 0x1a10ec: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10e8) {
            ctx->pc = 0x1A10B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a10b8;
        }
    }
    ctx->pc = 0x1A10F0u;
    // 0x1a10f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a10f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a10f4:
    // 0x1a10f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a10f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a10f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a10fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a10fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1108: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A110Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1108u;
            // 0x1a110c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1110u;
}
