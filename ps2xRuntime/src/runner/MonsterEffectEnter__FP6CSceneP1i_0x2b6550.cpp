#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MonsterEffectEnter__FP6CSceneP1i
// Address: 0x2b6550 - 0x2b666c
void MonsterEffectEnter__FP6CSceneP1i_0x2b6550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MonsterEffectEnter__FP6CSceneP1i_0x2b6550");
#endif

    switch (ctx->pc) {
        case 0x2b65a8u: goto label_2b65a8;
        case 0x2b65c0u: goto label_2b65c0;
        case 0x2b6620u: goto label_2b6620;
        default: break;
    }

    ctx->pc = 0x2b6550u;

    // 0x2b6550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b6550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b6554: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b6558: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b6558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b655c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b6560: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b6560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6564: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b6564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b6568: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b6568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b656c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b6570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6574: 0x8f829be0  lw          $v0, -0x6420($gp)
    ctx->pc = 0x2b6574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941664)));
    // 0x2b6578: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2B6578u;
    {
        const bool branch_taken_0x2b6578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B657Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6578u;
            // 0x2b657c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6578) {
            ctx->pc = 0x2B6648u;
            goto label_2b6648;
        }
    }
    ctx->pc = 0x2B6580u;
    // 0x2b6580: 0x8f829be4  lw          $v0, -0x641C($gp)
    ctx->pc = 0x2b6580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941668)));
    // 0x2b6584: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2b6584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b6588: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x2B6588u;
    {
        const bool branch_taken_0x2b6588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B658Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6588u;
            // 0x2b658c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6588) {
            ctx->pc = 0x2B664Cu;
            goto label_2b664c;
        }
    }
    ctx->pc = 0x2B6590u;
    // 0x2b6590: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x2b6590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b6594: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B6594u;
    {
        const bool branch_taken_0x2b6594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6594u;
            // 0x2b6598: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6594) {
            ctx->pc = 0x2B6648u;
            goto label_2b6648;
        }
    }
    ctx->pc = 0x2B659Cu;
    // 0x2b659c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b659cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65a0: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2B65A0u;
    SET_GPR_U32(ctx, 31, 0x2B65A8u);
    ctx->pc = 0x2B65A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B65A0u;
            // 0x2b65a4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65A8u; }
        if (ctx->pc != 0x2B65A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65A8u; }
        if (ctx->pc != 0x2B65A8u) { return; }
    }
    ctx->pc = 0x2B65A8u;
label_2b65a8:
    // 0x2b65a8: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x2b65a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2b65ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b65acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65b0: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x2b65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b65b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b65b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2B65B8u;
    {
        const bool branch_taken_0x2b65b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B65BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B65B8u;
            // 0x2b65bc: 0xac540008  sw          $s4, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65b8) {
            ctx->pc = 0x2B6628u;
            goto label_2b6628;
        }
    }
    ctx->pc = 0x2B65C0u;
label_2b65c0:
    // 0x2b65c0: 0x8f829be0  lw          $v0, -0x6420($gp)
    ctx->pc = 0x2b65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941664)));
    // 0x2b65c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b65c8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2b65c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b65cc: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B65CCu;
    {
        const bool branch_taken_0x2b65cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B65D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B65CCu;
            // 0x2b65d0: 0x3c0301f1  lui         $v1, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65cc) {
            ctx->pc = 0x2B6620u;
            goto label_2b6620;
        }
    }
    ctx->pc = 0x2B65D4u;
    // 0x2b65d4: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b65d8: 0x2463cf50  addiu       $v1, $v1, -0x30B0
    ctx->pc = 0x2b65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954832));
    // 0x2b65dc: 0x2442cf70  addiu       $v0, $v0, -0x3090
    ctx->pc = 0x2b65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954864));
    // 0x2b65e0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x2b65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b65e4: 0x8f8a9b6c  lw          $t2, -0x6494($gp)
    ctx->pc = 0x2b65e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
    // 0x2b65e8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x2b65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b65ec: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2b65ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b65f0: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b65f4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2b65f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b65f8: 0x2442cf60  addiu       $v0, $v0, -0x30A0
    ctx->pc = 0x2b65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954848));
    // 0x2b65fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b6600: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2b6600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6604: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x2b6604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b6608: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b6608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b660c: 0x2442cf80  addiu       $v0, $v0, -0x3080
    ctx->pc = 0x2b660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954880));
    // 0x2b6610: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b6610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b6614: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2b6614u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6618: 0xc0b8294  jal         func_2E0A50
    ctx->pc = 0x2B6618u;
    SET_GPR_U32(ctx, 31, 0x2B6620u);
    ctx->pc = 0x2B661Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6618u;
            // 0x2b661c: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0A50u;
    if (runtime->hasFunction(0x2E0A50u)) {
        auto targetFn = runtime->lookupFunction(0x2E0A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6620u; }
        if (ctx->pc != 0x2B6620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildBase__16CEffectScriptManFPcP1iP1iP9mgCMemoryi_0x2e0a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6620u; }
        if (ctx->pc != 0x2B6620u) { return; }
    }
    ctx->pc = 0x2B6620u;
label_2b6620:
    // 0x2b6620: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2b6620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2b6624: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b6624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b6628:
    // 0x2b6628: 0x8f829be4  lw          $v0, -0x641C($gp)
    ctx->pc = 0x2b6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941668)));
    // 0x2b662c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2b662cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b6630: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2B6630u;
    {
        const bool branch_taken_0x2b6630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6630) {
            ctx->pc = 0x2B65C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b65c0;
        }
    }
    ctx->pc = 0x2B6638u;
    // 0x2b6638: 0x8f838ddc  lw          $v1, -0x7224($gp)
    ctx->pc = 0x2b6638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b663c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6640u;
    {
        const bool branch_taken_0x2b6640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6640u;
            // 0x2b6644: 0xac710008  sw          $s1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6640) {
            ctx->pc = 0x2B664Cu;
            goto label_2b664c;
        }
    }
    ctx->pc = 0x2B6648u;
label_2b6648:
    // 0x2b6648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b664c:
    // 0x2b664c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b664cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b6650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b6654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b6658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b665c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b665cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6664: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6664u;
            // 0x2b6668: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B666Cu;
}
