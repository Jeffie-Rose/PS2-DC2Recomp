#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignFuncAnime__9CObjAnimeFP10CFuncPointP9CMapParts
// Address: 0x29d290 - 0x29d39c
void AssignFuncAnime__9CObjAnimeFP10CFuncPointP9CMapParts_0x29d290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignFuncAnime__9CObjAnimeFP10CFuncPointP9CMapParts_0x29d290");
#endif

    switch (ctx->pc) {
        case 0x29d318u: goto label_29d318;
        case 0x29d340u: goto label_29d340;
        case 0x29d360u: goto label_29d360;
        case 0x29d378u: goto label_29d378;
        default: break;
    }

    ctx->pc = 0x29d290u;

    // 0x29d290: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29d290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29d294: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29d298: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29d298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29d29c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29d29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29d2a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29d2a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d2b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2b4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x29d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29d2b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D2B8u;
    {
        const bool branch_taken_0x29d2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D2B8u;
            // 0x29d2bc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2b8) {
            ctx->pc = 0x29D2C8u;
            goto label_29d2c8;
        }
    }
    ctx->pc = 0x29D2C0u;
    // 0x29d2c0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x29D2C0u;
    {
        const bool branch_taken_0x29d2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D2C0u;
            // 0x29d2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2c0) {
            ctx->pc = 0x29D37Cu;
            goto label_29d37c;
        }
    }
    ctx->pc = 0x29D2C8u;
label_29d2c8:
    // 0x29d2c8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D2C8u;
    {
        const bool branch_taken_0x29d2c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D2C8u;
            // 0x29d2cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2c8) {
            ctx->pc = 0x29D2D8u;
            goto label_29d2d8;
        }
    }
    ctx->pc = 0x29D2D0u;
    // 0x29d2d0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x29D2D0u;
    {
        const bool branch_taken_0x29d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D2D0u;
            // 0x29d2d4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2d0) {
            ctx->pc = 0x29D380u;
            goto label_29d380;
        }
    }
    ctx->pc = 0x29D2D8u;
label_29d2d8:
    // 0x29d2d8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x29d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x29d2dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29d2dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x29d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x29d2e4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x29d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x29d2e8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x29d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x29d2ec: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x29d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x29d2f0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x29d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x29d2f4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x29d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x29d2f8: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x29d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x29d2fc: 0x8cb20028  lw          $s2, 0x28($a1)
    ctx->pc = 0x29d2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x29d300: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D300u;
    {
        const bool branch_taken_0x29d300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D300u;
            // 0x29d304: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d300) {
            ctx->pc = 0x29D31Cu;
            goto label_29d31c;
        }
    }
    ctx->pc = 0x29D308u;
    // 0x29d308: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D308u;
    {
        const bool branch_taken_0x29d308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D308u;
            // 0x29d30c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d308) {
            ctx->pc = 0x29D31Cu;
            goto label_29d31c;
        }
    }
    ctx->pc = 0x29D310u;
    // 0x29d310: 0xc059924  jal         func_166490
    ctx->pc = 0x29D310u;
    SET_GPR_U32(ctx, 31, 0x29D318u);
    ctx->pc = 0x29D314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D310u;
            // 0x29d314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D318u; }
        if (ctx->pc != 0x29D318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D318u; }
        if (ctx->pc != 0x29D318u) { return; }
    }
    ctx->pc = 0x29D318u;
label_29d318:
    // 0x29d318: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29d318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d31c:
    // 0x29d31c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D31Cu;
    {
        const bool branch_taken_0x29d31c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d31c) {
            ctx->pc = 0x29D344u;
            goto label_29d344;
        }
    }
    ctx->pc = 0x29D324u;
    // 0x29d324: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D324u;
    {
        const bool branch_taken_0x29d324 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d324) {
            ctx->pc = 0x29D344u;
            goto label_29d344;
        }
    }
    ctx->pc = 0x29D32Cu;
    // 0x29d32c: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x29d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x29d330: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D330u;
    {
        const bool branch_taken_0x29d330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D330u;
            // 0x29d334: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d330) {
            ctx->pc = 0x29D344u;
            goto label_29d344;
        }
    }
    ctx->pc = 0x29D338u;
    // 0x29d338: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x29D338u;
    SET_GPR_U32(ctx, 31, 0x29D340u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D340u; }
        if (ctx->pc != 0x29D340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D340u; }
        if (ctx->pc != 0x29D340u) { return; }
    }
    ctx->pc = 0x29D340u;
label_29d340:
    // 0x29d340: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29d340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d344:
    // 0x29d344: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x29d344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x29d348: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x29d348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x29d34c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D34Cu;
    {
        const bool branch_taken_0x29d34c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D34Cu;
            // 0x29d350: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d34c) {
            ctx->pc = 0x29D360u;
            goto label_29d360;
        }
    }
    ctx->pc = 0x29D354u;
    // 0x29d354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d358: 0xc04de4c  jal         func_137930
    ctx->pc = 0x29D358u;
    SET_GPR_U32(ctx, 31, 0x29D360u);
    ctx->pc = 0x29D35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D358u;
            // 0x29d35c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D360u; }
        if (ctx->pc != 0x29D360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D360u; }
        if (ctx->pc != 0x29D360u) { return; }
    }
    ctx->pc = 0x29D360u;
label_29d360:
    // 0x29d360: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29d364: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29d364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29d368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d36c: 0x78420040  lq          $v0, 0x40($v0)
    ctx->pc = 0x29d36cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x29d370: 0xc0a7380  jal         func_29CE00
    ctx->pc = 0x29D370u;
    SET_GPR_U32(ctx, 31, 0x29D378u);
    ctx->pc = 0x29D374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D370u;
            // 0x29d374: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CE00u;
    if (runtime->hasFunction(0x29CE00u)) {
        auto targetFn = runtime->lookupFunction(0x29CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D378u; }
        if (ctx->pc != 0x29D378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParam__9CObjAnimeFPf_0x29ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D378u; }
        if (ctx->pc != 0x29D378u) { return; }
    }
    ctx->pc = 0x29D378u;
label_29d378:
    // 0x29d378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d37c:
    // 0x29d37c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29d37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29d380:
    // 0x29d380: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29d380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d384: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29d384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d38c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d394: 0x3e00008  jr          $ra
    ctx->pc = 0x29D394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D394u;
            // 0x29d398: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D39Cu;
}
