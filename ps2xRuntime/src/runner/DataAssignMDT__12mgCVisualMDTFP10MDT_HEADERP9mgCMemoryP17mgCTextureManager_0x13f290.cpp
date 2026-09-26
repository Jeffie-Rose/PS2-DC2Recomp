#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DataAssignMDT__12mgCVisualMDTFP10MDT_HEADERP9mgCMemoryP17mgCTextureManager
// Address: 0x13f290 - 0x13f358
void DataAssignMDT__12mgCVisualMDTFP10MDT_HEADERP9mgCMemoryP17mgCTextureManager_0x13f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataAssignMDT__12mgCVisualMDTFP10MDT_HEADERP9mgCMemoryP17mgCTextureManager_0x13f290");
#endif

    switch (ctx->pc) {
        case 0x13f290u: goto label_13f290;
        case 0x13f294u: goto label_13f294;
        case 0x13f298u: goto label_13f298;
        case 0x13f29cu: goto label_13f29c;
        case 0x13f2a0u: goto label_13f2a0;
        case 0x13f2a4u: goto label_13f2a4;
        case 0x13f2a8u: goto label_13f2a8;
        case 0x13f2acu: goto label_13f2ac;
        case 0x13f2b0u: goto label_13f2b0;
        case 0x13f2b4u: goto label_13f2b4;
        case 0x13f2b8u: goto label_13f2b8;
        case 0x13f2bcu: goto label_13f2bc;
        case 0x13f2c0u: goto label_13f2c0;
        case 0x13f2c4u: goto label_13f2c4;
        case 0x13f2c8u: goto label_13f2c8;
        case 0x13f2ccu: goto label_13f2cc;
        case 0x13f2d0u: goto label_13f2d0;
        case 0x13f2d4u: goto label_13f2d4;
        case 0x13f2d8u: goto label_13f2d8;
        case 0x13f2dcu: goto label_13f2dc;
        case 0x13f2e0u: goto label_13f2e0;
        case 0x13f2e4u: goto label_13f2e4;
        case 0x13f2e8u: goto label_13f2e8;
        case 0x13f2ecu: goto label_13f2ec;
        case 0x13f2f0u: goto label_13f2f0;
        case 0x13f2f4u: goto label_13f2f4;
        case 0x13f2f8u: goto label_13f2f8;
        case 0x13f2fcu: goto label_13f2fc;
        case 0x13f300u: goto label_13f300;
        case 0x13f304u: goto label_13f304;
        case 0x13f308u: goto label_13f308;
        case 0x13f30cu: goto label_13f30c;
        case 0x13f310u: goto label_13f310;
        case 0x13f314u: goto label_13f314;
        case 0x13f318u: goto label_13f318;
        case 0x13f31cu: goto label_13f31c;
        case 0x13f320u: goto label_13f320;
        case 0x13f324u: goto label_13f324;
        case 0x13f328u: goto label_13f328;
        case 0x13f32cu: goto label_13f32c;
        case 0x13f330u: goto label_13f330;
        case 0x13f334u: goto label_13f334;
        case 0x13f338u: goto label_13f338;
        case 0x13f33cu: goto label_13f33c;
        case 0x13f340u: goto label_13f340;
        case 0x13f344u: goto label_13f344;
        case 0x13f348u: goto label_13f348;
        case 0x13f34cu: goto label_13f34c;
        case 0x13f350u: goto label_13f350;
        case 0x13f354u: goto label_13f354;
        default: break;
    }

    ctx->pc = 0x13f290u;

label_13f290:
    // 0x13f290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13f294:
    // 0x13f294: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13f294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_13f298:
    // 0x13f298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13f29c:
    // 0x13f29c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13f2a0:
    // 0x13f2a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13f2a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13f2a4:
    // 0x13f2a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13f2a8:
    // 0x13f2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f2ac:
    // 0x13f2ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13f2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13f2b0:
    // 0x13f2b0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_13f2b4:
    if (ctx->pc == 0x13F2B4u) {
        ctx->pc = 0x13F2B4u;
            // 0x13f2b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F2B8u;
        goto label_13f2b8;
    }
    ctx->pc = 0x13F2B0u;
    {
        const bool branch_taken_0x13f2b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2B0u;
            // 0x13f2b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2b0) {
            ctx->pc = 0x13F2C0u;
            goto label_13f2c0;
        }
    }
    ctx->pc = 0x13F2B8u;
label_13f2b8:
    // 0x13f2b8: 0x10000020  b           . + 4 + (0x20 << 2)
label_13f2bc:
    if (ctx->pc == 0x13F2BCu) {
        ctx->pc = 0x13F2BCu;
            // 0x13f2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F2C0u;
        goto label_13f2c0;
    }
    ctx->pc = 0x13F2B8u;
    {
        const bool branch_taken_0x13f2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2B8u;
            // 0x13f2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2b8) {
            ctx->pc = 0x13F33Cu;
            goto label_13f33c;
        }
    }
    ctx->pc = 0x13F2C0u;
label_13f2c0:
    // 0x13f2c0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_13f2c4:
    if (ctx->pc == 0x13F2C4u) {
        ctx->pc = 0x13F2C8u;
        goto label_13f2c8;
    }
    ctx->pc = 0x13F2C0u;
    {
        const bool branch_taken_0x13f2c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f2c0) {
            ctx->pc = 0x13F2D0u;
            goto label_13f2d0;
        }
    }
    ctx->pc = 0x13F2C8u;
label_13f2c8:
    // 0x13f2c8: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x13f2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_13f2cc:
    // 0x13f2cc: 0x24e71ef0  addiu       $a3, $a3, 0x1EF0
    ctx->pc = 0x13f2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7920));
label_13f2d0:
    // 0x13f2d0: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x13f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_13f2d4:
    // 0x13f2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f2d8:
    // 0x13f2d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f2dc:
    // 0x13f2dc: 0xc04fae8  jal         func_13EBA0
label_13f2e0:
    if (ctx->pc == 0x13F2E0u) {
        ctx->pc = 0x13F2E0u;
            // 0x13f2e0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F2E4u;
        goto label_13f2e4;
    }
    ctx->pc = 0x13F2DCu;
    SET_GPR_U32(ctx, 31, 0x13F2E4u);
    ctx->pc = 0x13F2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2DCu;
            // 0x13f2e0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EBA0u;
    if (runtime->hasFunction(0x13EBA0u)) {
        auto targetFn = runtime->lookupFunction(0x13EBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F2E4u; }
        if (ctx->pc != 0x13F2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyMDTData__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory_0x13eba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F2E4u; }
        if (ctx->pc != 0x13F2E4u) { return; }
    }
    ctx->pc = 0x13F2E4u;
label_13f2e4:
    // 0x13f2e4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x13f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_13f2e8:
    // 0x13f2e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13f2e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f2ec:
    // 0x13f2ec: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x13f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_13f2f0:
    // 0x13f2f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13f2f4:
    // 0x13f2f4: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x13f2f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13f2f8:
    // 0x13f2f8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x13f2f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_13f2fc:
    // 0x13f2fc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_13f300:
    if (ctx->pc == 0x13F300u) {
        ctx->pc = 0x13F300u;
            // 0x13f300: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x13F304u;
        goto label_13f304;
    }
    ctx->pc = 0x13F2FCu;
    {
        const bool branch_taken_0x13f2fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2FCu;
            // 0x13f300: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2fc) {
            ctx->pc = 0x13F334u;
            goto label_13f334;
        }
    }
    ctx->pc = 0x13F304u;
label_13f304:
    // 0x13f304: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x13f304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13f308:
    // 0x13f308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f30c:
    // 0x13f30c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13f30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13f310:
    // 0x13f310: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x13f310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13f314:
    // 0x13f314: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x13f314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_13f318:
    // 0x13f318: 0x320f809  jalr        $t9
label_13f31c:
    if (ctx->pc == 0x13F31Cu) {
        ctx->pc = 0x13F31Cu;
            // 0x13f31c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F320u;
        goto label_13f320;
    }
    ctx->pc = 0x13F318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F320u);
        ctx->pc = 0x13F31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F318u;
            // 0x13f31c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13F320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F320u; }
            if (ctx->pc != 0x13F320u) { return; }
        }
        }
    }
    ctx->pc = 0x13F320u;
label_13f320:
    // 0x13f320: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f324:
    // 0x13f324: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13f324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13f328:
    // 0x13f328: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x13f328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_13f32c:
    // 0x13f32c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_13f330:
    if (ctx->pc == 0x13F330u) {
        ctx->pc = 0x13F334u;
        goto label_13f334;
    }
    ctx->pc = 0x13F32Cu;
    {
        const bool branch_taken_0x13f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f32c) {
            ctx->pc = 0x13F304u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f304;
        }
    }
    ctx->pc = 0x13F334u;
label_13f334:
    // 0x13f334: 0x0  nop
    ctx->pc = 0x13f334u;
    // NOP
label_13f338:
    // 0x13f338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f33c:
    // 0x13f33c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13f33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13f340:
    // 0x13f340: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13f340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13f344:
    // 0x13f344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13f348:
    // 0x13f348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f34c:
    // 0x13f34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f350:
    // 0x13f350: 0x3e00008  jr          $ra
label_13f354:
    if (ctx->pc == 0x13F354u) {
        ctx->pc = 0x13F354u;
            // 0x13f354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x13F358u;
        goto label_fallthrough_0x13f350;
    }
    ctx->pc = 0x13F350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F350u;
            // 0x13f354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13f350:
    ctx->pc = 0x13F358u;
}
