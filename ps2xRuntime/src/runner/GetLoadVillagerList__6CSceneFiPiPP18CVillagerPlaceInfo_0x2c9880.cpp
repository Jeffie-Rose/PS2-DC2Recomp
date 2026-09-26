#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLoadVillagerList__6CSceneFiPiPP18CVillagerPlaceInfo
// Address: 0x2c9880 - 0x2c9980
void GetLoadVillagerList__6CSceneFiPiPP18CVillagerPlaceInfo_0x2c9880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLoadVillagerList__6CSceneFiPiPP18CVillagerPlaceInfo_0x2c9880");
#endif

    switch (ctx->pc) {
        case 0x2c98d8u: goto label_2c98d8;
        case 0x2c98f4u: goto label_2c98f4;
        case 0x2c9924u: goto label_2c9924;
        case 0x2c9934u: goto label_2c9934;
        default: break;
    }

    ctx->pc = 0x2c9880u;

    // 0x2c9880: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c9880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c9884: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c9884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c9888: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c9888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c988c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c9890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9894: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c9894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c989c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c989cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c98a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c98a4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c98a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c98a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c98ac: 0x8c823040  lw          $v0, 0x3040($a0)
    ctx->pc = 0x2c98acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12352)));
    // 0x2c98b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C98B0u;
    {
        const bool branch_taken_0x2c98b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C98B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98B0u;
            // 0x2c98b4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98b0) {
            ctx->pc = 0x2C98C0u;
            goto label_2c98c0;
        }
    }
    ctx->pc = 0x2C98B8u;
    // 0x2c98b8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C98B8u;
    {
        const bool branch_taken_0x2c98b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C98BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98B8u;
            // 0x2c98bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98b8) {
            ctx->pc = 0x2C995Cu;
            goto label_2c995c;
        }
    }
    ctx->pc = 0x2C98C0u;
label_2c98c0:
    // 0x2c98c0: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C98C0u;
    {
        const bool branch_taken_0x2c98c0 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x2c98c0) {
            ctx->pc = 0x2C98D0u;
            goto label_2c98d0;
        }
    }
    ctx->pc = 0x2C98C8u;
    // 0x2c98c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C98C8u;
    {
        const bool branch_taken_0x2c98c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C98CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98C8u;
            // 0x2c98cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98c8) {
            ctx->pc = 0x2C995Cu;
            goto label_2c995c;
        }
    }
    ctx->pc = 0x2C98D0u;
label_2c98d0:
    // 0x2c98d0: 0xc0b260c  jal         func_2C9830
    ctx->pc = 0x2C98D0u;
    SET_GPR_U32(ctx, 31, 0x2C98D8u);
    ctx->pc = 0x2C98D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98D0u;
            // 0x2c98d4: 0x8c511a08  lw          $s1, 0x1A08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9830u;
    if (runtime->hasFunction(0x2C9830u)) {
        auto targetFn = runtime->lookupFunction(0x2C9830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98D8u; }
        if (ctx->pc != 0x2C98D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowVillagerTime__6CSceneFv_0x2c9830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98D8u; }
        if (ctx->pc != 0x2C98D8u) { return; }
    }
    ctx->pc = 0x2C98D8u;
label_2c98d8:
    // 0x2c98d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c98d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c98dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98e0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2c98e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98e4: 0x26843050  addiu       $a0, $s4, 0x3050
    ctx->pc = 0x2c98e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12368));
    // 0x2c98e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c98e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98ec: 0xc0b3698  jal         func_2CDA60
    ctx->pc = 0x2C98ECu;
    SET_GPR_U32(ctx, 31, 0x2C98F4u);
    ctx->pc = 0x2C98F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98ECu;
            // 0x2c98f0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA60u;
    if (runtime->hasFunction(0x2CDA60u)) {
        auto targetFn = runtime->lookupFunction(0x2CDA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98F4u; }
        if (ctx->pc != 0x2C98F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAppearVlgr__13CVillagerMngrFiiiPiPP18CVillagerPlaceInfo_0x2cda60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98F4u; }
        if (ctx->pc != 0x2C98F4u) { return; }
    }
    ctx->pc = 0x2C98F4u;
label_2c98f4:
    // 0x2c98f4: 0x8e833040  lw          $v1, 0x3040($s4)
    ctx->pc = 0x2c98f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12352)));
    // 0x2c98f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2c98f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2c98fc: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2c98fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2c9900: 0x619821  addu        $s3, $v1, $at
    ctx->pc = 0x2c9900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2c9904: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9904u;
    {
        const bool branch_taken_0x2c9904 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9904u;
            // 0x2c9908: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9904) {
            ctx->pc = 0x2C9914u;
            goto label_2c9914;
        }
    }
    ctx->pc = 0x2C990Cu;
    // 0x2c990c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C990Cu;
    {
        const bool branch_taken_0x2c990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C990Cu;
            // 0x2c9910: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c990c) {
            ctx->pc = 0x2C9960u;
            goto label_2c9960;
        }
    }
    ctx->pc = 0x2C9914u;
label_2c9914:
    // 0x2c9914: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2c9914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c9918: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2C9918u;
    {
        const bool branch_taken_0x2c9918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C991Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9918u;
            // 0x2c991c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9918) {
            ctx->pc = 0x2C9958u;
            goto label_2c9958;
        }
    }
    ctx->pc = 0x2C9920u;
    // 0x2c9920: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c9920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9924:
    // 0x2c9924: 0x214a821  addu        $s5, $s0, $s4
    ctx->pc = 0x2c9924u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2c9928: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2c9928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c992c: 0xc06723c  jal         func_19C8F0
    ctx->pc = 0x2C992Cu;
    SET_GPR_U32(ctx, 31, 0x2C9934u);
    ctx->pc = 0x2C9930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C992Cu;
            // 0x2c9930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F0u;
    if (runtime->hasFunction(0x19C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9934u; }
        if (ctx->pc != 0x2C9934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaStatus__16CUserDataManagerFi_0x19c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9934u; }
        if (ctx->pc != 0x2C9934u) { return; }
    }
    ctx->pc = 0x2C9934u;
label_2c9934:
    // 0x2c9934: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9934u;
    {
        const bool branch_taken_0x2c9934 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9934) {
            ctx->pc = 0x2C9948u;
            goto label_2c9948;
        }
    }
    ctx->pc = 0x2C993Cu;
    // 0x2c993c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c9940: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2c9940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2c9944: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2c9944u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2c9948:
    // 0x2c9948: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c9948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c994c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x2c994cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c9950: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C9950u;
    {
        const bool branch_taken_0x2c9950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9950u;
            // 0x2c9954: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9950) {
            ctx->pc = 0x2C9924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9924;
        }
    }
    ctx->pc = 0x2C9958u;
label_2c9958:
    // 0x2c9958: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c9958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c995c:
    // 0x2c995c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c995cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c9960:
    // 0x2c9960: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c9960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9964: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c9964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9968: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c996c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c996cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9978: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9978u;
            // 0x2c997c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9980u;
}
