#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPlacedHouseMessMake__FP14CEditPartsInfoP10CEditHousei
// Address: 0x1f7400 - 0x1f762c
void MenuPlacedHouseMessMake__FP14CEditPartsInfoP10CEditHousei_0x1f7400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPlacedHouseMessMake__FP14CEditPartsInfoP10CEditHousei_0x1f7400");
#endif

    switch (ctx->pc) {
        case 0x1f7464u: goto label_1f7464;
        case 0x1f74b4u: goto label_1f74b4;
        case 0x1f74ecu: goto label_1f74ec;
        case 0x1f7570u: goto label_1f7570;
        case 0x1f757cu: goto label_1f757c;
        case 0x1f7598u: goto label_1f7598;
        case 0x1f75f8u: goto label_1f75f8;
        case 0x1f7608u: goto label_1f7608;
        default: break;
    }

    ctx->pc = 0x1f7400u;

    // 0x1f7400: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f7400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f7404: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f7404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f7408: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f7408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f740c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f7410: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f7410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7414: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f7418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f741c: 0x10c0007c  beqz        $a2, . + 4 + (0x7C << 2)
    ctx->pc = 0x1F741Cu;
    {
        const bool branch_taken_0x1f741c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F741Cu;
            // 0x1f7420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f741c) {
            ctx->pc = 0x1F7610u;
            goto label_1f7610;
        }
    }
    ctx->pc = 0x1F7424u;
    // 0x1f7424: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7424u;
    {
        const bool branch_taken_0x1f7424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7424) {
            ctx->pc = 0x1F7434u;
            goto label_1f7434;
        }
    }
    ctx->pc = 0x1F742Cu;
    // 0x1f742c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1F742Cu;
    {
        const bool branch_taken_0x1f742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F742Cu;
            // 0x1f7430: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f742c) {
            ctx->pc = 0x1F7614u;
            goto label_1f7614;
        }
    }
    ctx->pc = 0x1F7434u;
label_1f7434:
    // 0x1f7434: 0x8382907c  lb          $v0, -0x6F84($gp)
    ctx->pc = 0x1f7434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938748)));
    // 0x1f7438: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7438u;
    {
        const bool branch_taken_0x1f7438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7438u;
            // 0x1f743c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7438) {
            ctx->pc = 0x1F7458u;
            goto label_1f7458;
        }
    }
    ctx->pc = 0x1F7440u;
    // 0x1f7440: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1f7440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1f7444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7448: 0x24638a58  addiu       $v1, $v1, -0x75A8
    ctx->pc = 0x1f7448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937176));
    // 0x1f744c: 0xa382907c  sb          $v0, -0x6F84($gp)
    ctx->pc = 0x1f744cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938748), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f7450: 0xaf839078  sw          $v1, -0x6F88($gp)
    ctx->pc = 0x1f7450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938744), GPR_U32(ctx, 3));
    // 0x1f7454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7458:
    // 0x1f7458: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f745c: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f745cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f7460: 0x24638e40  addiu       $v1, $v1, -0x71C0
    ctx->pc = 0x1f7460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938176));
label_1f7464:
    // 0x1f7464: 0x8f859078  lw          $a1, -0x6F88($gp)
    ctx->pc = 0x1f7464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    // 0x1f7468: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1f7468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f746c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1f746cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1f7470: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f7470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f7474: 0x28c2000e  slti        $v0, $a2, 0xE
    ctx->pc = 0x1f7474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1f7478: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1f7478u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1f747c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1f747cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x1f7480: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x1f7480u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x1f7484: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x1f7484u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x1f7488: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x1f7488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x1f748c: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x1f748cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
    // 0x1f7490: 0xace50018  sw          $a1, 0x18($a3)
    ctx->pc = 0x1f7490u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
    // 0x1f7494: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F7494u;
    {
        const bool branch_taken_0x1f7494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7494u;
            // 0x1f7498: 0xace5001c  sw          $a1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7494) {
            ctx->pc = 0x1F7464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f7464;
        }
    }
    ctx->pc = 0x1F749Cu;
    // 0x1f749c: 0x28c10016  slti        $at, $a2, 0x16
    ctx->pc = 0x1f749cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1f74a0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1F74A0u;
    {
        const bool branch_taken_0x1f74a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f74a0) {
            ctx->pc = 0x1F74D4u;
            goto label_1f74d4;
        }
    }
    ctx->pc = 0x1F74A8u;
    // 0x1f74a8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1f74a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f74ac: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f74acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f74b0: 0x24848e40  addiu       $a0, $a0, -0x71C0
    ctx->pc = 0x1f74b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938176));
label_1f74b4:
    // 0x1f74b4: 0x8f859078  lw          $a1, -0x6F88($gp)
    ctx->pc = 0x1f74b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    // 0x1f74b8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1f74b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1f74bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f74bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f74c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1f74c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1f74c4: 0x28c20016  slti        $v0, $a2, 0x16
    ctx->pc = 0x1f74c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1f74c8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1f74cc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F74CCu;
    {
        const bool branch_taken_0x1f74cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f74cc) {
            ctx->pc = 0x1F74B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f74b4;
        }
    }
    ctx->pc = 0x1F74D4u;
label_1f74d4:
    // 0x1f74d4: 0x0  nop
    ctx->pc = 0x1f74d4u;
    // NOP
    // 0x1f74d8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1f74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f74dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f74dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f74e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f74e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74e4: 0xc06d58c  jal         func_1B5630
    ctx->pc = 0x1F74E4u;
    SET_GPR_U32(ctx, 31, 0x1F74ECu);
    ctx->pc = 0x1F74E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F74E4u;
            // 0x1f74e8: 0xac228e40  sw          $v0, -0x71C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5630u;
    if (runtime->hasFunction(0x1B5630u)) {
        auto targetFn = runtime->lookupFunction(0x1B5630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F74ECu; }
        if (ctx->pc != 0x1F74ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsType__14CEditPartsInfoFv_0x1b5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F74ECu; }
        if (ctx->pc != 0x1F74ECu) { return; }
    }
    ctx->pc = 0x1F74ECu;
label_1f74ec:
    // 0x1f74ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f74f0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F74F0u;
    {
        const bool branch_taken_0x1f74f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f74f0) {
            ctx->pc = 0x1F7504u;
            goto label_1f7504;
        }
    }
    ctx->pc = 0x1F74F8u;
    // 0x1f74f8: 0x8f829078  lw          $v0, -0x6F88($gp)
    ctx->pc = 0x1f74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    // 0x1f74fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f74fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f7500: 0xac228e40  sw          $v0, -0x71C0($at)
    ctx->pc = 0x1f7500u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938176), GPR_U32(ctx, 2));
label_1f7504:
    // 0x1f7504: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f7504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f7508: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1f7508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f750c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f7510: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7510u;
    {
        const bool branch_taken_0x1f7510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7510) {
            ctx->pc = 0x1F7524u;
            goto label_1f7524;
        }
    }
    ctx->pc = 0x1F7518u;
    // 0x1f7518: 0x8f829078  lw          $v0, -0x6F88($gp)
    ctx->pc = 0x1f7518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    // 0x1f751c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f751cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f7520: 0xac228e40  sw          $v0, -0x71C0($at)
    ctx->pc = 0x1f7520u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938176), GPR_U32(ctx, 2));
label_1f7524:
    // 0x1f7524: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x1f7524u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x1f7528: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1f7528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f752c: 0x2508e890  addiu       $t0, $t0, -0x1770
    ctx->pc = 0x1f752cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961296));
    // 0x1f7530: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x1f7530u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f7534: 0x79040010  lq          $a0, 0x10($t0)
    ctx->pc = 0x1f7534u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1f7538: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1f7538u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1f753c: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1f753cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1f7540: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1f7540u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1f7544: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x1f7544u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x1f7548: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x1f7548u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x1f754c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x1f754cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x1f7550: 0x79020040  lq          $v0, 0x40($t0)
    ctx->pc = 0x1f7550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x1f7554: 0xc5000050  lwc1        $f0, 0x50($t0)
    ctx->pc = 0x1f7554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7558: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x1f7558u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x1f755c: 0xe4c00050  swc1        $f0, 0x50($a2)
    ctx->pc = 0x1f755cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x1f7560: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f7560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f7564: 0x8f858f68  lw          $a1, -0x7098($gp)
    ctx->pc = 0x1f7564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938472)));
    // 0x1f7568: 0xc0bba8c  jal         func_2EEA30
    ctx->pc = 0x1F7568u;
    SET_GPR_U32(ctx, 31, 0x1F7570u);
    ctx->pc = 0x1F756Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7568u;
            // 0x1f756c: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA30u;
    if (runtime->hasFunction(0x2EEA30u)) {
        auto targetFn = runtime->lookupFunction(0x2EEA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7570u; }
        if (ctx->pc != 0x1F7570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChildParts__8CEditMapFiPii_0x2eea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7570u; }
        if (ctx->pc != 0x1F7570u) { return; }
    }
    ctx->pc = 0x1F7570u;
label_1f7570:
    // 0x1f7570: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7574: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f7574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7578: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f7578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f757c:
    // 0x1f757c: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1f757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1f7580: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x1f7580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1f7584: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1f7584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f7588: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7588u;
    {
        const bool branch_taken_0x1f7588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7588) {
            ctx->pc = 0x1F75D4u;
            goto label_1f75d4;
        }
    }
    ctx->pc = 0x1F7590u;
    // 0x1f7590: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x1F7590u;
    SET_GPR_U32(ctx, 31, 0x1F7598u);
    ctx->pc = 0x1F7594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7590u;
            // 0x1f7594: 0x8f848ff8  lw          $a0, -0x7008($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7598u; }
        if (ctx->pc != 0x1F7598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7598u; }
        if (ctx->pc != 0x1F7598u) { return; }
    }
    ctx->pc = 0x1F7598u;
label_1f7598:
    // 0x1f7598: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F7598u;
    {
        const bool branch_taken_0x1f7598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7598) {
            ctx->pc = 0x1F75D4u;
            goto label_1f75d4;
        }
    }
    ctx->pc = 0x1F75A0u;
    // 0x1f75a0: 0x8c440324  lw          $a0, 0x324($v0)
    ctx->pc = 0x1f75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1f75a4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F75A4u;
    {
        const bool branch_taken_0x1f75a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f75a4) {
            ctx->pc = 0x1F75D4u;
            goto label_1f75d4;
        }
    }
    ctx->pc = 0x1F75ACu;
    // 0x1f75ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f75acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f75b0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1f75b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1f75b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F75B4u;
    {
        const bool branch_taken_0x1f75b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f75b4) {
            ctx->pc = 0x1F75D4u;
            goto label_1f75d4;
        }
    }
    ctx->pc = 0x1F75BCu;
    // 0x1f75bc: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1f75bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1f75c0: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f75c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f75c4: 0x24638e40  addiu       $v1, $v1, -0x71C0
    ctx->pc = 0x1f75c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938176));
    // 0x1f75c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f75cc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f75ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f75d0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1f75d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1f75d4:
    // 0x1f75d4: 0x0  nop
    ctx->pc = 0x1f75d4u;
    // NOP
    // 0x1f75d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f75d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f75dc: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x1f75dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f75e0: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F75E0u;
    {
        const bool branch_taken_0x1f75e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F75E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F75E0u;
            // 0x1f75e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75e0) {
            ctx->pc = 0x1F757Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f757c;
        }
    }
    ctx->pc = 0x1F75E8u;
    // 0x1f75e8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F75E8u;
    {
        const bool branch_taken_0x1f75e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f75e8) {
            ctx->pc = 0x1F7610u;
            goto label_1f7610;
        }
    }
    ctx->pc = 0x1F75F0u;
    // 0x1f75f0: 0xc0aacf4  jal         func_2AB3D0
    ctx->pc = 0x1F75F0u;
    SET_GPR_U32(ctx, 31, 0x1F75F8u);
    ctx->pc = 0x1F75F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F75F0u;
            // 0x1f75f4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F75F8u; }
        if (ctx->pc != 0x1F75F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F75F8u; }
        if (ctx->pc != 0x1F75F8u) { return; }
    }
    ctx->pc = 0x1F75F8u;
label_1f75f8:
    // 0x1f75f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F75F8u;
    {
        const bool branch_taken_0x1f75f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f75f8) {
            ctx->pc = 0x1F7610u;
            goto label_1f7610;
        }
    }
    ctx->pc = 0x1F7600u;
    // 0x1f7600: 0xc0aacf4  jal         func_2AB3D0
    ctx->pc = 0x1F7600u;
    SET_GPR_U32(ctx, 31, 0x1F7608u);
    ctx->pc = 0x1F7604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7600u;
            // 0x1f7604: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7608u; }
        if (ctx->pc != 0x1F7608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7608u; }
        if (ctx->pc != 0x1F7608u) { return; }
    }
    ctx->pc = 0x1F7608u;
label_1f7608:
    // 0x1f7608: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f7608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f760c: 0xac228e44  sw          $v0, -0x71BC($at)
    ctx->pc = 0x1f760cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938180), GPR_U32(ctx, 2));
label_1f7610:
    // 0x1f7610: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f7610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f7614:
    // 0x1f7614: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f7614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7618: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f7618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f761c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f761cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7624: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7624u;
            // 0x1f7628: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F762Cu;
}
