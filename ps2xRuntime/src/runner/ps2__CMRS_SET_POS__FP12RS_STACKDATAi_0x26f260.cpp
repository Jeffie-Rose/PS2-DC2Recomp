#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_SET_POS__FP12RS_STACKDATAi
// Address: 0x26f260 - 0x26f35c
void ps2__CMRS_SET_POS__FP12RS_STACKDATAi_0x26f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_SET_POS__FP12RS_STACKDATAi_0x26f260");
#endif

    switch (ctx->pc) {
        case 0x26f28cu: goto label_26f28c;
        case 0x26f2b0u: goto label_26f2b0;
        case 0x26f318u: goto label_26f318;
        case 0x26f32cu: goto label_26f32c;
        case 0x26f34cu: goto label_26f34c;
        default: break;
    }

    ctx->pc = 0x26f260u;

    // 0x26f260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f264: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f268: 0x10a2002d  beq         $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26F268u;
    {
        const bool branch_taken_0x26f268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F268u;
            // 0x26f26c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f268) {
            ctx->pc = 0x26F320u;
            goto label_26f320;
        }
    }
    ctx->pc = 0x26F270u;
    // 0x26f270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f274: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F274u;
    {
        const bool branch_taken_0x26f274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f274) {
            ctx->pc = 0x26F284u;
            goto label_26f284;
        }
    }
    ctx->pc = 0x26F27Cu;
    // 0x26f27c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x26F27Cu;
    {
        const bool branch_taken_0x26f27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F27Cu;
            // 0x26f280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f27c) {
            ctx->pc = 0x26F334u;
            goto label_26f334;
        }
    }
    ctx->pc = 0x26F284u;
label_26f284:
    // 0x26f284: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F284u;
    SET_GPR_U32(ctx, 31, 0x26F28Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F28Cu; }
        if (ctx->pc != 0x26F28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F28Cu; }
        if (ctx->pc != 0x26F28Cu) { return; }
    }
    ctx->pc = 0x26F28Cu;
label_26f28c:
    // 0x26f28c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26f28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26f290: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26f290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26f294: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F294u;
    {
        const bool branch_taken_0x26f294 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F294u;
            // 0x26f298: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f294) {
            ctx->pc = 0x26F2A4u;
            goto label_26f2a4;
        }
    }
    ctx->pc = 0x26F29Cu;
    // 0x26f29c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26F29Cu;
    {
        const bool branch_taken_0x26f29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F29Cu;
            // 0x26f2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f29c) {
            ctx->pc = 0x26F300u;
            goto label_26f300;
        }
    }
    ctx->pc = 0x26F2A4u;
label_26f2a4:
    // 0x26f2a4: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26f2a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F2A8u;
    {
        const bool branch_taken_0x26f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F2A8u;
            // 0x26f2ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2a8) {
            ctx->pc = 0x26F2D8u;
            goto label_26f2d8;
        }
    }
    ctx->pc = 0x26F2B0u;
label_26f2b0:
    // 0x26f2b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26f2b4: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26F2B4u;
    {
        const bool branch_taken_0x26f2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f2b4) {
            ctx->pc = 0x26F2E4u;
            goto label_26f2e4;
        }
    }
    ctx->pc = 0x26F2BCu;
    // 0x26f2bc: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26f2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26f2c0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F2C0u;
    {
        const bool branch_taken_0x26f2c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f2c0) {
            ctx->pc = 0x26F2D0u;
            goto label_26f2d0;
        }
    }
    ctx->pc = 0x26F2C8u;
    // 0x26f2c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F2C8u;
    {
        const bool branch_taken_0x26f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F2C8u;
            // 0x26f2cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2c8) {
            ctx->pc = 0x26F2D8u;
            goto label_26f2d8;
        }
    }
    ctx->pc = 0x26F2D0u;
label_26f2d0:
    // 0x26f2d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F2D0u;
    {
        const bool branch_taken_0x26f2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F2D0u;
            // 0x26f2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2d0) {
            ctx->pc = 0x26F300u;
            goto label_26f300;
        }
    }
    ctx->pc = 0x26F2D8u;
label_26f2d8:
    // 0x26f2d8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26f2d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f2dc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26F2DCu;
    {
        const bool branch_taken_0x26f2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f2dc) {
            ctx->pc = 0x26F2B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f2b0;
        }
    }
    ctx->pc = 0x26F2E4u;
label_26f2e4:
    // 0x26f2e4: 0x0  nop
    ctx->pc = 0x26f2e4u;
    // NOP
    // 0x26f2e8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F2E8u;
    {
        const bool branch_taken_0x26f2e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F2E8u;
            // 0x26f2ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2e8) {
            ctx->pc = 0x26F2F8u;
            goto label_26f2f8;
        }
    }
    ctx->pc = 0x26F2F0u;
    // 0x26f2f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F2F0u;
    {
        const bool branch_taken_0x26f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f2f0) {
            ctx->pc = 0x26F300u;
            goto label_26f300;
        }
    }
    ctx->pc = 0x26F2F8u;
label_26f2f8:
    // 0x26f2f8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x26f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26f2fc: 0x0  nop
    ctx->pc = 0x26f2fcu;
    // NOP
label_26f300:
    // 0x26f300: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F300u;
    {
        const bool branch_taken_0x26f300 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F300u;
            // 0x26f304: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f300) {
            ctx->pc = 0x26F310u;
            goto label_26f310;
        }
    }
    ctx->pc = 0x26F308u;
    // 0x26f308: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26F308u;
    {
        const bool branch_taken_0x26f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F308u;
            // 0x26f30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f308) {
            ctx->pc = 0x26F350u;
            goto label_26f350;
        }
    }
    ctx->pc = 0x26F310u;
label_26f310:
    // 0x26f310: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26F310u;
    SET_GPR_U32(ctx, 31, 0x26F318u);
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F318u; }
        if (ctx->pc != 0x26F318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F318u; }
        if (ctx->pc != 0x26F318u) { return; }
    }
    ctx->pc = 0x26F318u;
label_26f318:
    // 0x26f318: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26F318u;
    {
        const bool branch_taken_0x26f318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f318) {
            ctx->pc = 0x26F33Cu;
            goto label_26f33c;
        }
    }
    ctx->pc = 0x26F320u;
label_26f320:
    // 0x26f320: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26f320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f324: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26F324u;
    SET_GPR_U32(ctx, 31, 0x26F32Cu);
    ctx->pc = 0x26F328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F324u;
            // 0x26f328: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F32Cu; }
        if (ctx->pc != 0x26F32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F32Cu; }
        if (ctx->pc != 0x26F32Cu) { return; }
    }
    ctx->pc = 0x26F32Cu;
label_26f32c:
    // 0x26f32c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F32Cu;
    {
        const bool branch_taken_0x26f32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f32c) {
            ctx->pc = 0x26F33Cu;
            goto label_26f33c;
        }
    }
    ctx->pc = 0x26F334u;
label_26f334:
    // 0x26f334: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26F334u;
    {
        const bool branch_taken_0x26f334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F334u;
            // 0x26f338: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f334) {
            ctx->pc = 0x26F354u;
            goto label_26f354;
        }
    }
    ctx->pc = 0x26F33Cu;
label_26f33c:
    // 0x26f33c: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f340: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x26f340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26f344: 0xc096730  jal         func_259CC0
    ctx->pc = 0x26F344u;
    SET_GPR_U32(ctx, 31, 0x26F34Cu);
    ctx->pc = 0x26F348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F344u;
            // 0x26f348: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259CC0u;
    if (runtime->hasFunction(0x259CC0u)) {
        auto targetFn = runtime->lookupFunction(0x259CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F34Cu; }
        if (ctx->pc != 0x26F34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__12CSceneCmrSeqFPf_0x259cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F34Cu; }
        if (ctx->pc != 0x26F34Cu) { return; }
    }
    ctx->pc = 0x26F34Cu;
label_26f34c:
    // 0x26f34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f350:
    // 0x26f350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26f354:
    // 0x26f354: 0x3e00008  jr          $ra
    ctx->pc = 0x26F354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F354u;
            // 0x26f358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F35Cu;
}
