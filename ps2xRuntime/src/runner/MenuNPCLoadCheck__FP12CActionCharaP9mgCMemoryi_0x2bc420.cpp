#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuNPCLoadCheck__FP12CActionCharaP9mgCMemoryi
// Address: 0x2bc420 - 0x2bc4f8
void MenuNPCLoadCheck__FP12CActionCharaP9mgCMemoryi_0x2bc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuNPCLoadCheck__FP12CActionCharaP9mgCMemoryi_0x2bc420");
#endif

    switch (ctx->pc) {
        case 0x2bc420u: goto label_2bc420;
        case 0x2bc424u: goto label_2bc424;
        case 0x2bc428u: goto label_2bc428;
        case 0x2bc42cu: goto label_2bc42c;
        case 0x2bc430u: goto label_2bc430;
        case 0x2bc434u: goto label_2bc434;
        case 0x2bc438u: goto label_2bc438;
        case 0x2bc43cu: goto label_2bc43c;
        case 0x2bc440u: goto label_2bc440;
        case 0x2bc444u: goto label_2bc444;
        case 0x2bc448u: goto label_2bc448;
        case 0x2bc44cu: goto label_2bc44c;
        case 0x2bc450u: goto label_2bc450;
        case 0x2bc454u: goto label_2bc454;
        case 0x2bc458u: goto label_2bc458;
        case 0x2bc45cu: goto label_2bc45c;
        case 0x2bc460u: goto label_2bc460;
        case 0x2bc464u: goto label_2bc464;
        case 0x2bc468u: goto label_2bc468;
        case 0x2bc46cu: goto label_2bc46c;
        case 0x2bc470u: goto label_2bc470;
        case 0x2bc474u: goto label_2bc474;
        case 0x2bc478u: goto label_2bc478;
        case 0x2bc47cu: goto label_2bc47c;
        case 0x2bc480u: goto label_2bc480;
        case 0x2bc484u: goto label_2bc484;
        case 0x2bc488u: goto label_2bc488;
        case 0x2bc48cu: goto label_2bc48c;
        case 0x2bc490u: goto label_2bc490;
        case 0x2bc494u: goto label_2bc494;
        case 0x2bc498u: goto label_2bc498;
        case 0x2bc49cu: goto label_2bc49c;
        case 0x2bc4a0u: goto label_2bc4a0;
        case 0x2bc4a4u: goto label_2bc4a4;
        case 0x2bc4a8u: goto label_2bc4a8;
        case 0x2bc4acu: goto label_2bc4ac;
        case 0x2bc4b0u: goto label_2bc4b0;
        case 0x2bc4b4u: goto label_2bc4b4;
        case 0x2bc4b8u: goto label_2bc4b8;
        case 0x2bc4bcu: goto label_2bc4bc;
        case 0x2bc4c0u: goto label_2bc4c0;
        case 0x2bc4c4u: goto label_2bc4c4;
        case 0x2bc4c8u: goto label_2bc4c8;
        case 0x2bc4ccu: goto label_2bc4cc;
        case 0x2bc4d0u: goto label_2bc4d0;
        case 0x2bc4d4u: goto label_2bc4d4;
        case 0x2bc4d8u: goto label_2bc4d8;
        case 0x2bc4dcu: goto label_2bc4dc;
        case 0x2bc4e0u: goto label_2bc4e0;
        case 0x2bc4e4u: goto label_2bc4e4;
        case 0x2bc4e8u: goto label_2bc4e8;
        case 0x2bc4ecu: goto label_2bc4ec;
        case 0x2bc4f0u: goto label_2bc4f0;
        case 0x2bc4f4u: goto label_2bc4f4;
        default: break;
    }

    ctx->pc = 0x2bc420u;

label_2bc420:
    // 0x2bc420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2bc424:
    // 0x2bc424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc428:
    // 0x2bc428: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bc428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bc42c:
    // 0x2bc42c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bc42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bc430:
    // 0x2bc430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bc430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bc434:
    // 0x2bc434: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bc434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bc438:
    // 0x2bc438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bc43c:
    // 0x2bc43c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bc43cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bc440:
    // 0x2bc440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bc444:
    // 0x2bc444: 0x83839c1c  lb          $v1, -0x63E4($gp)
    ctx->pc = 0x2bc444u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941724)));
label_2bc448:
    // 0x2bc448: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_2bc44c:
    if (ctx->pc == 0x2BC44Cu) {
        ctx->pc = 0x2BC44Cu;
            // 0x2bc44c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC450u;
        goto label_2bc450;
    }
    ctx->pc = 0x2BC448u;
    {
        const bool branch_taken_0x2bc448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC448u;
            // 0x2bc44c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc448) {
            ctx->pc = 0x2BC4D8u;
            goto label_2bc4d8;
        }
    }
    ctx->pc = 0x2BC450u;
label_2bc450:
    // 0x2bc450: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
label_2bc454:
    if (ctx->pc == 0x2BC454u) {
        ctx->pc = 0x2BC454u;
            // 0x2bc454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC458u;
        goto label_2bc458;
    }
    ctx->pc = 0x2BC450u;
    {
        const bool branch_taken_0x2bc450 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC450u;
            // 0x2bc454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc450) {
            ctx->pc = 0x2BC4DCu;
            goto label_2bc4dc;
        }
    }
    ctx->pc = 0x2BC458u;
label_2bc458:
    // 0x2bc458: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2bc458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_2bc45c:
    // 0x2bc45c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x2bc45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_2bc460:
    // 0x2bc460: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2bc460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_2bc464:
    // 0x2bc464: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bc464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc468:
    // 0x2bc468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc46c:
    // 0x2bc46c: 0xc04b950  jal         func_12E540
label_2bc470:
    if (ctx->pc == 0x2BC470u) {
        ctx->pc = 0x2BC470u;
            // 0x2bc470: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2BC474u;
        goto label_2bc474;
    }
    ctx->pc = 0x2BC46Cu;
    SET_GPR_U32(ctx, 31, 0x2BC474u);
    ctx->pc = 0x2BC470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC46Cu;
            // 0x2bc470: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC474u; }
        if (ctx->pc != 0x2BC474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC474u; }
        if (ctx->pc != 0x2BC474u) { return; }
    }
    ctx->pc = 0x2BC474u;
label_2bc474:
    // 0x2bc474: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bc474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2bc478:
    // 0x2bc478: 0x260401d8  addiu       $a0, $s0, 0x1D8
    ctx->pc = 0x2bc478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 472));
label_2bc47c:
    // 0x2bc47c: 0xc04a3dc  jal         func_128F70
label_2bc480:
    if (ctx->pc == 0x2BC480u) {
        ctx->pc = 0x2BC480u;
            // 0x2bc480: 0x24a5f5a0  addiu       $a1, $a1, -0xA60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964640));
        ctx->pc = 0x2BC484u;
        goto label_2bc484;
    }
    ctx->pc = 0x2BC47Cu;
    SET_GPR_U32(ctx, 31, 0x2BC484u);
    ctx->pc = 0x2BC480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC47Cu;
            // 0x2bc480: 0x24a5f5a0  addiu       $a1, $a1, -0xA60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC484u; }
        if (ctx->pc != 0x2BC484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC484u; }
        if (ctx->pc != 0x2BC484u) { return; }
    }
    ctx->pc = 0x2BC484u;
label_2bc484:
    // 0x2bc484: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2bc484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bc488:
    // 0x2bc488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bc48c:
    // 0x2bc48c: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2bc48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2bc490:
    // 0x2bc490: 0x320f809  jalr        $t9
label_2bc494:
    if (ctx->pc == 0x2BC494u) {
        ctx->pc = 0x2BC494u;
            // 0x2bc494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC498u;
        goto label_2bc498;
    }
    ctx->pc = 0x2BC490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC498u);
        ctx->pc = 0x2BC494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC490u;
            // 0x2bc494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC498u; }
            if (ctx->pc != 0x2BC498u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC498u;
label_2bc498:
    // 0x2bc498: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2bc498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bc49c:
    // 0x2bc49c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bc49cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bc4a0:
    // 0x2bc4a0: 0x8f859c20  lw          $a1, -0x63E0($gp)
    ctx->pc = 0x2bc4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941728)));
label_2bc4a4:
    // 0x2bc4a4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2bc4a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc4a8:
    // 0x2bc4a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bc4ac:
    // 0x2bc4ac: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2bc4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2bc4b0:
    // 0x2bc4b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2bc4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc4b4:
    // 0x2bc4b4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2bc4b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc4b8:
    // 0x2bc4b8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2bc4b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc4bc:
    // 0x2bc4bc: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2bc4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2bc4c0:
    // 0x2bc4c0: 0x320f809  jalr        $t9
label_2bc4c4:
    if (ctx->pc == 0x2BC4C4u) {
        ctx->pc = 0x2BC4C4u;
            // 0x2bc4c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4C8u;
        goto label_2bc4c8;
    }
    ctx->pc = 0x2BC4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC4C8u);
        ctx->pc = 0x2BC4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC4C0u;
            // 0x2bc4c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC4C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC4C8u; }
            if (ctx->pc != 0x2BC4C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC4C8u;
label_2bc4c8:
    // 0x2bc4c8: 0xa20001d8  sb          $zero, 0x1D8($s0)
    ctx->pc = 0x2bc4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 0));
label_2bc4cc:
    // 0x2bc4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc4d0:
    // 0x2bc4d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bc4d4:
    if (ctx->pc == 0x2BC4D4u) {
        ctx->pc = 0x2BC4D4u;
            // 0x2bc4d4: 0xa3809c1c  sb          $zero, -0x63E4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941724), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2BC4D8u;
        goto label_2bc4d8;
    }
    ctx->pc = 0x2BC4D0u;
    {
        const bool branch_taken_0x2bc4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC4D0u;
            // 0x2bc4d4: 0xa3809c1c  sb          $zero, -0x63E4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941724), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4d0) {
            ctx->pc = 0x2BC4DCu;
            goto label_2bc4dc;
        }
    }
    ctx->pc = 0x2BC4D8u;
label_2bc4d8:
    // 0x2bc4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc4dc:
    // 0x2bc4dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bc4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bc4e0:
    // 0x2bc4e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bc4e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bc4e4:
    // 0x2bc4e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bc4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc4e8:
    // 0x2bc4e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc4ec:
    // 0x2bc4ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc4f0:
    // 0x2bc4f0: 0x3e00008  jr          $ra
label_2bc4f4:
    if (ctx->pc == 0x2BC4F4u) {
        ctx->pc = 0x2BC4F4u;
            // 0x2bc4f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2BC4F8u;
        goto label_fallthrough_0x2bc4f0;
    }
    ctx->pc = 0x2BC4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC4F0u;
            // 0x2bc4f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bc4f0:
    ctx->pc = 0x2BC4F8u;
}
