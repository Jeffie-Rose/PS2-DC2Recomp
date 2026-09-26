#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckOmakeFile__18CMemoryCardManagerFv
// Address: 0x2f45d0 - 0x2f48d8
void CheckOmakeFile__18CMemoryCardManagerFv_0x2f45d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckOmakeFile__18CMemoryCardManagerFv_0x2f45d0");
#endif

    switch (ctx->pc) {
        case 0x2f4630u: goto label_2f4630;
        case 0x2f4640u: goto label_2f4640;
        case 0x2f4664u: goto label_2f4664;
        case 0x2f4688u: goto label_2f4688;
        case 0x2f46ccu: goto label_2f46cc;
        case 0x2f46ecu: goto label_2f46ec;
        case 0x2f46f4u: goto label_2f46f4;
        case 0x2f4730u: goto label_2f4730;
        case 0x2f4748u: goto label_2f4748;
        case 0x2f478cu: goto label_2f478c;
        case 0x2f47c0u: goto label_2f47c0;
        case 0x2f47e0u: goto label_2f47e0;
        case 0x2f47fcu: goto label_2f47fc;
        case 0x2f480cu: goto label_2f480c;
        case 0x2f482cu: goto label_2f482c;
        case 0x2f483cu: goto label_2f483c;
        case 0x2f485cu: goto label_2f485c;
        case 0x2f487cu: goto label_2f487c;
        case 0x2f488cu: goto label_2f488c;
        case 0x2f489cu: goto label_2f489c;
        default: break;
    }

    ctx->pc = 0x2f45d0u;

    // 0x2f45d0: 0x27bdab30  addiu       $sp, $sp, -0x54D0
    ctx->pc = 0x2f45d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294945584));
    // 0x2f45d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f45d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f45d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f45dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f45dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f45e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f45e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f45e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f45e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f45e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f45e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f45ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f45f0: 0x265104d0  addiu       $s1, $s2, 0x4D0
    ctx->pc = 0x2f45f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x2f45f4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x2f45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2f45f8: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2F45F8u;
    {
        const bool branch_taken_0x2f45f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F45F8u;
            // 0x2f45fc: 0x265010e0  addiu       $s0, $s2, 0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45f8) {
            ctx->pc = 0x2F484Cu;
            goto label_2f484c;
        }
    }
    ctx->pc = 0x2F4600u;
    // 0x2f4600: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f4600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4604: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2F4604u;
    {
        const bool branch_taken_0x2f4604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4604u;
            // 0x2f4608: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4604) {
            ctx->pc = 0x2F47B4u;
            goto label_2f47b4;
        }
    }
    ctx->pc = 0x2F460Cu;
    // 0x2f460c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4610: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F4610u;
    {
        const bool branch_taken_0x2f4610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F4614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4610u;
            // 0x2f4614: 0x27a554c8  addiu       $a1, $sp, 0x54C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 21704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4610) {
            ctx->pc = 0x2F4680u;
            goto label_2f4680;
        }
    }
    ctx->pc = 0x2F4618u;
    // 0x2f4618: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4618u;
    {
        const bool branch_taken_0x2f4618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4618u;
            // 0x2f461c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4618) {
            ctx->pc = 0x2F4628u;
            goto label_2f4628;
        }
    }
    ctx->pc = 0x2F4620u;
    // 0x2f4620: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2F4620u;
    {
        const bool branch_taken_0x2f4620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4620u;
            // 0x2f4624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4620) {
            ctx->pc = 0x2F48BCu;
            goto label_2f48bc;
        }
    }
    ctx->pc = 0x2F4628u;
label_2f4628:
    // 0x2f4628: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4628u;
    SET_GPR_U32(ctx, 31, 0x2F4630u);
    ctx->pc = 0x2F462Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4628u;
            // 0x2f462c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4630u; }
        if (ctx->pc != 0x2F4630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4630u; }
        if (ctx->pc != 0x2F4630u) { return; }
    }
    ctx->pc = 0x2F4630u;
label_2f4630:
    // 0x2f4630: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2F4630u;
    {
        const bool branch_taken_0x2f4630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4630u;
            // 0x2f4634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4630) {
            ctx->pc = 0x2F48B8u;
            goto label_2f48b8;
        }
    }
    ctx->pc = 0x2F4638u;
    // 0x2f4638: 0xc0bc610  jal         func_2F1840
    ctx->pc = 0x2F4638u;
    SET_GPR_U32(ctx, 31, 0x2F4640u);
    ctx->pc = 0x2F1840u;
    if (runtime->hasFunction(0x2F1840u)) {
        auto targetFn = runtime->lookupFunction(0x2F1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4640u; }
        if (ctx->pc != 0x2F4640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveFileInfoTable__18CMemoryCardManagerFv_0x2f1840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4640u; }
        if (ctx->pc != 0x2F4640u) { return; }
    }
    ctx->pc = 0x2F4640u;
label_2f4640:
    // 0x2f4640: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f4640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f4644: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2f4644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2f4648: 0x8e4404c8  lw          $a0, 0x4C8($s2)
    ctx->pc = 0x2f4648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1224)));
    // 0x2f464c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4650: 0x24c61980  addiu       $a2, $a2, 0x1980
    ctx->pc = 0x2f4650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6528));
    // 0x2f4654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4658: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2f4658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f465c: 0xc048c46  jal         func_123118
    ctx->pc = 0x2F465Cu;
    SET_GPR_U32(ctx, 31, 0x2F4664u);
    ctx->pc = 0x2F4660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F465Cu;
            // 0x2f4660: 0x26490080  addiu       $t1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123118u;
    if (runtime->hasFunction(0x123118u)) {
        auto targetFn = runtime->lookupFunction(0x123118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4664u; }
        if (ctx->pc != 0x2F4664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x123118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4664u; }
        if (ctx->pc != 0x2F4664u) { return; }
    }
    ctx->pc = 0x2F4664u;
label_2f4664:
    // 0x2f4664: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4664u;
    {
        const bool branch_taken_0x2f4664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4664u;
            // 0x2f4668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4664) {
            ctx->pc = 0x2F4674u;
            goto label_2f4674;
        }
    }
    ctx->pc = 0x2F466Cu;
    // 0x2f466c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2F466Cu;
    {
        const bool branch_taken_0x2f466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F466Cu;
            // 0x2f4670: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f466c) {
            ctx->pc = 0x2F48B8u;
            goto label_2f48b8;
        }
    }
    ctx->pc = 0x2F4674u;
label_2f4674:
    // 0x2f4674: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f4674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f4678: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2F4678u;
    {
        const bool branch_taken_0x2f4678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4678u;
            // 0x2f467c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4678) {
            ctx->pc = 0x2F48BCu;
            goto label_2f48bc;
        }
    }
    ctx->pc = 0x2F4680u;
label_2f4680:
    // 0x2f4680: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4680u;
    SET_GPR_U32(ctx, 31, 0x2F4688u);
    ctx->pc = 0x2F4684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4680u;
            // 0x2f4684: 0x27a654cc  addiu       $a2, $sp, 0x54CC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 21708));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4688u; }
        if (ctx->pc != 0x2F4688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4688u; }
        if (ctx->pc != 0x2F4688u) { return; }
    }
    ctx->pc = 0x2F4688u;
label_2f4688:
    // 0x2f4688: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x2F4688u;
    {
        const bool branch_taken_0x2f4688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4688) {
            ctx->pc = 0x2F48B8u;
            goto label_2f48b8;
        }
    }
    ctx->pc = 0x2F4690u;
    // 0x2f4690: 0xae4004c0  sw          $zero, 0x4C0($s2)
    ctx->pc = 0x2f4690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1216), GPR_U32(ctx, 0));
    // 0x2f4694: 0x8fa554cc  lw          $a1, 0x54CC($sp)
    ctx->pc = 0x2f4694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21708)));
    // 0x2f4698: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x2f4698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f469c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F469Cu;
    {
        const bool branch_taken_0x2f469c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f469c) {
            ctx->pc = 0x2F4738u;
            goto label_2f4738;
        }
    }
    ctx->pc = 0x2F46A4u;
    // 0x2f46a4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f46a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f46a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f46ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f46acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2f46b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f46b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f46b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f46b8: 0x8fa254cc  lw          $v0, 0x54CC($sp)
    ctx->pc = 0x2f46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21708)));
    // 0x2f46bc: 0xae4204c0  sw          $v0, 0x4C0($s2)
    ctx->pc = 0x2f46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1216), GPR_U32(ctx, 2));
    // 0x2f46c0: 0x8e530210  lw          $s3, 0x210($s2)
    ctx->pc = 0x2f46c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x2f46c4: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2F46C4u;
    SET_GPR_U32(ctx, 31, 0x2F46CCu);
    ctx->pc = 0x2F46C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F46C4u;
            // 0x2f46c8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F46CCu; }
        if (ctx->pc != 0x2F46CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F46CCu; }
        if (ctx->pc != 0x2F46CCu) { return; }
    }
    ctx->pc = 0x2F46CCu;
label_2f46cc:
    // 0x2f46cc: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x2f46ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f46d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F46D0u;
    {
        const bool branch_taken_0x2f46d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F46D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F46D0u;
            // 0x2f46d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46d0) {
            ctx->pc = 0x2F46E0u;
            goto label_2f46e0;
        }
    }
    ctx->pc = 0x2F46D8u;
    // 0x2f46d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2f46dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f46dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f46e0:
    // 0x2f46e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f46e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f46e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F46E4u;
    {
        const bool branch_taken_0x2f46e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F46E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F46E4u;
            // 0x2f46e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46e4) {
            ctx->pc = 0x2F46FCu;
            goto label_2f46fc;
        }
    }
    ctx->pc = 0x2F46ECu;
label_2f46ec:
    // 0x2f46ec: 0xc04a422  jal         func_129088
    ctx->pc = 0x2F46ECu;
    SET_GPR_U32(ctx, 31, 0x2F46F4u);
    ctx->pc = 0x2F46F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F46ECu;
            // 0x2f46f0: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F46F4u; }
        if (ctx->pc != 0x2F46F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F46F4u; }
        if (ctx->pc != 0x2F46F4u) { return; }
    }
    ctx->pc = 0x2F46F4u;
label_2f46f4:
    // 0x2f46f4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2f46f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2f46f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f46f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f46fc:
    // 0x2f46fc: 0x0  nop
    ctx->pc = 0x2f46fcu;
    // NOP
    // 0x2f4700: 0x8fa254cc  lw          $v0, 0x54CC($sp)
    ctx->pc = 0x2f4700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21708)));
    // 0x2f4704: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2f4704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f4708: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F4708u;
    {
        const bool branch_taken_0x2f4708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4708u;
            // 0x2f470c: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4708) {
            ctx->pc = 0x2F46ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f46ec;
        }
    }
    ctx->pc = 0x2F4710u;
    // 0x2f4710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f4710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4718: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x2f4718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x2f471c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2f471cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2f4720: 0x8e4404c8  lw          $a0, 0x4C8($s2)
    ctx->pc = 0x2f4720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1224)));
    // 0x2f4724: 0x24c61950  addiu       $a2, $a2, 0x1950
    ctx->pc = 0x2f4724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6480));
    // 0x2f4728: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F4728u;
    SET_GPR_U32(ctx, 31, 0x2F4730u);
    ctx->pc = 0x2F472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4728u;
            // 0x2f472c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4730u; }
        if (ctx->pc != 0x2F4730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4730u; }
        if (ctx->pc != 0x2F4730u) { return; }
    }
    ctx->pc = 0x2F4730u;
label_2f4730:
    // 0x2f4730: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2F4730u;
    {
        const bool branch_taken_0x2f4730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4730) {
            ctx->pc = 0x2F48B8u;
            goto label_2f48b8;
        }
    }
    ctx->pc = 0x2F4738u;
label_2f4738:
    // 0x2f4738: 0x4a10019  bgez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F4738u;
    {
        const bool branch_taken_0x2f4738 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4738u;
            // 0x2f473c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4738) {
            ctx->pc = 0x2F47A0u;
            goto label_2f47a0;
        }
    }
    ctx->pc = 0x2F4740u;
    // 0x2f4740: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4740u;
    SET_GPR_U32(ctx, 31, 0x2F4748u);
    ctx->pc = 0x2F4744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4740u;
            // 0x2f4744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4748u; }
        if (ctx->pc != 0x2F4748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4748u; }
        if (ctx->pc != 0x2F4748u) { return; }
    }
    ctx->pc = 0x2F4748u;
label_2f4748:
    // 0x2f4748: 0x8fa354cc  lw          $v1, 0x54CC($sp)
    ctx->pc = 0x2f4748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21708)));
    // 0x2f474c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2f474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f4750: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4750u;
    {
        const bool branch_taken_0x2f4750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4750u;
            // 0x2f4754: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4750) {
            ctx->pc = 0x2F4764u;
            goto label_2f4764;
        }
    }
    ctx->pc = 0x2F4758u;
    // 0x2f4758: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2f4758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f475c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F475Cu;
    {
        const bool branch_taken_0x2f475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F475Cu;
            // 0x2f4760: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f475c) {
            ctx->pc = 0x2F4780u;
            goto label_2f4780;
        }
    }
    ctx->pc = 0x2F4764u;
label_2f4764:
    // 0x2f4764: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4764u;
    {
        const bool branch_taken_0x2f4764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4764u;
            // 0x2f4768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4764) {
            ctx->pc = 0x2F4784u;
            goto label_2f4784;
        }
    }
    ctx->pc = 0x2F476Cu;
    // 0x2f476c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f476cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f4770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4774: 0x8fa354cc  lw          $v1, 0x54CC($sp)
    ctx->pc = 0x2f4774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21708)));
    // 0x2f4778: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2F4778u;
    {
        const bool branch_taken_0x2f4778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4778u;
            // 0x2f477c: 0xae4304c0  sw          $v1, 0x4C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4778) {
            ctx->pc = 0x2F48BCu;
            goto label_2f48bc;
        }
    }
    ctx->pc = 0x2F4780u;
label_2f4780:
    // 0x2f4780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4784:
    // 0x2f4784: 0xc0bc748  jal         func_2F1D20
    ctx->pc = 0x2F4784u;
    SET_GPR_U32(ctx, 31, 0x2F478Cu);
    ctx->pc = 0x2F1D20u;
    if (runtime->hasFunction(0x2F1D20u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F478Cu; }
        if (ctx->pc != 0x2F478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFuncNo__18CMemoryCardManagerFv_0x2f1d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F478Cu; }
        if (ctx->pc != 0x2F478Cu) { return; }
    }
    ctx->pc = 0x2F478Cu;
label_2f478c:
    // 0x2f478c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f478cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2f4790: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2f4790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f4794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4798: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2F4798u;
    {
        const bool branch_taken_0x2f4798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4798u;
            // 0x2f479c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4798) {
            ctx->pc = 0x2F48BCu;
            goto label_2f48bc;
        }
    }
    ctx->pc = 0x2F47A0u;
label_2f47a0:
    // 0x2f47a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f47a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f47a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2f47a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f47ac: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2F47ACu;
    {
        const bool branch_taken_0x2f47ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F47ACu;
            // 0x2f47b0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47ac) {
            ctx->pc = 0x2F48BCu;
            goto label_2f48bc;
        }
    }
    ctx->pc = 0x2F47B4u;
label_2f47b4:
    // 0x2f47b4: 0x27a554c8  addiu       $a1, $sp, 0x54C8
    ctx->pc = 0x2f47b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 21704));
    // 0x2f47b8: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F47B8u;
    SET_GPR_U32(ctx, 31, 0x2F47C0u);
    ctx->pc = 0x2F47BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F47B8u;
            // 0x2f47bc: 0x27a654cc  addiu       $a2, $sp, 0x54CC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 21708));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F47C0u; }
        if (ctx->pc != 0x2F47C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F47C0u; }
        if (ctx->pc != 0x2F47C0u) { return; }
    }
    ctx->pc = 0x2F47C0u;
label_2f47c0:
    // 0x2f47c0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2F47C0u;
    {
        const bool branch_taken_0x2f47c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f47c0) {
            ctx->pc = 0x2F48B8u;
            goto label_2f48b8;
        }
    }
    ctx->pc = 0x2F47C8u;
    // 0x2f47c8: 0x8fa554cc  lw          $a1, 0x54CC($sp)
    ctx->pc = 0x2f47c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21708)));
    // 0x2f47cc: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x2f47ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2f47d0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F47D0u;
    {
        const bool branch_taken_0x2f47d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F47D0u;
            // 0x2f47d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47d0) {
            ctx->pc = 0x2F47E8u;
            goto label_2f47e8;
        }
    }
    ctx->pc = 0x2F47D8u;
    // 0x2f47d8: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F47D8u;
    SET_GPR_U32(ctx, 31, 0x2F47E0u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F47E0u; }
        if (ctx->pc != 0x2F47E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F47E0u; }
        if (ctx->pc != 0x2F47E0u) { return; }
    }
    ctx->pc = 0x2F47E0u;
label_2f47e0:
    // 0x2f47e0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2F47E0u;
    {
        const bool branch_taken_0x2f47e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F47E0u;
            // 0x2f47e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47e0) {
            ctx->pc = 0x2F48BCu;
            goto label_2f48bc;
        }
    }
    ctx->pc = 0x2F47E8u;
label_2f47e8:
    // 0x2f47e8: 0xae45005c  sw          $a1, 0x5C($s2)
    ctx->pc = 0x2f47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 5));
    // 0x2f47ec: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2f47ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f47f0: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x2f47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2f47f4: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x2F47F4u;
    SET_GPR_U32(ctx, 31, 0x2F47FCu);
    ctx->pc = 0x2F47F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F47F4u;
            // 0x2f47f8: 0x264504ec  addiu       $a1, $s2, 0x4EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F47FCu; }
        if (ctx->pc != 0x2F47FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F47FCu; }
        if (ctx->pc != 0x2F47FCu) { return; }
    }
    ctx->pc = 0x2F47FCu;
label_2f47fc:
    // 0x2f47fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f47fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4800: 0x27a554c8  addiu       $a1, $sp, 0x54C8
    ctx->pc = 0x2f4800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 21704));
    // 0x2f4804: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4804u;
    SET_GPR_U32(ctx, 31, 0x2F480Cu);
    ctx->pc = 0x2F4808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4804u;
            // 0x2f4808: 0x27a654cc  addiu       $a2, $sp, 0x54CC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 21708));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F480Cu; }
        if (ctx->pc != 0x2F480Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F480Cu; }
        if (ctx->pc != 0x2F480Cu) { return; }
    }
    ctx->pc = 0x2F480Cu;
label_2f480c:
    // 0x2f480c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F480Cu;
    {
        const bool branch_taken_0x2f480c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f480c) {
            ctx->pc = 0x2F48B8u;
            goto label_2f48b8;
        }
    }
    ctx->pc = 0x2F4814u;
    // 0x2f4814: 0x8fa554cc  lw          $a1, 0x54CC($sp)
    ctx->pc = 0x2f4814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21708)));
    // 0x2f4818: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x2f4818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2f481c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F481Cu;
    {
        const bool branch_taken_0x2f481c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F481Cu;
            // 0x2f4820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f481c) {
            ctx->pc = 0x2F4834u;
            goto label_2f4834;
        }
    }
    ctx->pc = 0x2F4824u;
    // 0x2f4824: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4824u;
    SET_GPR_U32(ctx, 31, 0x2F482Cu);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F482Cu; }
        if (ctx->pc != 0x2F482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F482Cu; }
        if (ctx->pc != 0x2F482Cu) { return; }
    }
    ctx->pc = 0x2F482Cu;
label_2f482c:
    // 0x2f482c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2F482Cu;
    {
        const bool branch_taken_0x2f482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F482Cu;
            // 0x2f4830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f482c) {
            ctx->pc = 0x2F48BCu;
            goto label_2f48bc;
        }
    }
    ctx->pc = 0x2F4834u;
label_2f4834:
    // 0x2f4834: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F4834u;
    SET_GPR_U32(ctx, 31, 0x2F483Cu);
    ctx->pc = 0x2F4838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4834u;
            // 0x2f4838: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F483Cu; }
        if (ctx->pc != 0x2F483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F483Cu; }
        if (ctx->pc != 0x2F483Cu) { return; }
    }
    ctx->pc = 0x2F483Cu;
label_2f483c:
    // 0x2f483c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f4840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4844: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F4844u;
    {
        const bool branch_taken_0x2f4844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4844u;
            // 0x2f4848: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4844) {
            ctx->pc = 0x2F48B8u;
            goto label_2f48b8;
        }
    }
    ctx->pc = 0x2F484Cu;
label_2f484c:
    // 0x2f484c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4850: 0x27a554c8  addiu       $a1, $sp, 0x54C8
    ctx->pc = 0x2f4850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 21704));
    // 0x2f4854: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4854u;
    SET_GPR_U32(ctx, 31, 0x2F485Cu);
    ctx->pc = 0x2F4858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4854u;
            // 0x2f4858: 0x27a654cc  addiu       $a2, $sp, 0x54CC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 21708));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F485Cu; }
        if (ctx->pc != 0x2F485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F485Cu; }
        if (ctx->pc != 0x2F485Cu) { return; }
    }
    ctx->pc = 0x2F485Cu;
label_2f485c:
    // 0x2f485c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F485Cu;
    {
        const bool branch_taken_0x2f485c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f485c) {
            ctx->pc = 0x2F48B8u;
            goto label_2f48b8;
        }
    }
    ctx->pc = 0x2F4864u;
    // 0x2f4864: 0x8fa554cc  lw          $a1, 0x54CC($sp)
    ctx->pc = 0x2f4864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21708)));
    // 0x2f4868: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x2f4868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2f486c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F486Cu;
    {
        const bool branch_taken_0x2f486c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F486Cu;
            // 0x2f4870: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f486c) {
            ctx->pc = 0x2F4884u;
            goto label_2f4884;
        }
    }
    ctx->pc = 0x2F4874u;
    // 0x2f4874: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4874u;
    SET_GPR_U32(ctx, 31, 0x2F487Cu);
    ctx->pc = 0x2F4878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4874u;
            // 0x2f4878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F487Cu; }
        if (ctx->pc != 0x2F487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F487Cu; }
        if (ctx->pc != 0x2F487Cu) { return; }
    }
    ctx->pc = 0x2F487Cu;
label_2f487c:
    // 0x2f487c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F487Cu;
    {
        const bool branch_taken_0x2f487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F487Cu;
            // 0x2f4880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f487c) {
            ctx->pc = 0x2F48BCu;
            goto label_2f48bc;
        }
    }
    ctx->pc = 0x2F4884u;
label_2f4884:
    // 0x2f4884: 0xc0bdc40  jal         func_2F7100
    ctx->pc = 0x2F4884u;
    SET_GPR_U32(ctx, 31, 0x2F488Cu);
    ctx->pc = 0x2F7100u;
    if (runtime->hasFunction(0x2F7100u)) {
        auto targetFn = runtime->lookupFunction(0x2F7100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F488Cu; }
        if (ctx->pc != 0x2F488Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12CSubGameDataFv_0x2f7100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F488Cu; }
        if (ctx->pc != 0x2F488Cu) { return; }
    }
    ctx->pc = 0x2F488Cu;
label_2f488c:
    // 0x2f488c: 0x264504ec  addiu       $a1, $s2, 0x4EC
    ctx->pc = 0x2f488cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1260));
    // 0x2f4890: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f4890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f4894: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F4894u;
    SET_GPR_U32(ctx, 31, 0x2F489Cu);
    ctx->pc = 0x2F4898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4894u;
            // 0x2f4898: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F489Cu; }
        if (ctx->pc != 0x2F489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F489Cu; }
        if (ctx->pc != 0x2F489Cu) { return; }
    }
    ctx->pc = 0x2F489Cu;
label_2f489c:
    // 0x2f489c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F489Cu;
    {
        const bool branch_taken_0x2f489c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F48A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F489Cu;
            // 0x2f48a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f489c) {
            ctx->pc = 0x2F48B0u;
            goto label_2f48b0;
        }
    }
    ctx->pc = 0x2F48A4u;
    // 0x2f48a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f48a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2f48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2f48ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f48acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f48b0:
    // 0x2f48b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F48B0u;
    {
        const bool branch_taken_0x2f48b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F48B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F48B0u;
            // 0x2f48b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48b0) {
            ctx->pc = 0x2F48C0u;
            goto label_2f48c0;
        }
    }
    ctx->pc = 0x2F48B8u;
label_2f48b8:
    // 0x2f48b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f48b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f48bc:
    // 0x2f48bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f48bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f48c0:
    // 0x2f48c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f48c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f48c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f48c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f48c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f48c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f48cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f48ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f48d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F48D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F48D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F48D0u;
            // 0x2f48d4: 0x27bd54d0  addiu       $sp, $sp, 0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 21712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F48D8u;
}
