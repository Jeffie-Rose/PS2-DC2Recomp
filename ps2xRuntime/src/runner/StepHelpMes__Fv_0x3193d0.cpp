#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepHelpMes__Fv
// Address: 0x3193d0 - 0x3194dc
void StepHelpMes__Fv_0x3193d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepHelpMes__Fv_0x3193d0");
#endif

    switch (ctx->pc) {
        case 0x3193ecu: goto label_3193ec;
        case 0x319430u: goto label_319430;
        case 0x31943cu: goto label_31943c;
        case 0x319448u: goto label_319448;
        case 0x319488u: goto label_319488;
        default: break;
    }

    ctx->pc = 0x3193d0u;

    // 0x3193d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3193d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3193d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3193d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3193d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3193d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3193dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3193dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3193e0: 0x3c1001f6  lui         $s0, 0x1F6
    ctx->pc = 0x3193e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)502 << 16));
    // 0x3193e4: 0xc0c63e0  jal         func_318F80
    ctx->pc = 0x3193E4u;
    SET_GPR_U32(ctx, 31, 0x3193ECu);
    ctx->pc = 0x3193E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3193E4u;
            // 0x3193e8: 0x261009d0  addiu       $s0, $s0, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318F80u;
    if (runtime->hasFunction(0x318F80u)) {
        auto targetFn = runtime->lookupFunction(0x318F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3193ECu; }
        if (ctx->pc != 0x3193ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHepMesInfo__Fv_0x318f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3193ECu; }
        if (ctx->pc != 0x3193ECu) { return; }
    }
    ctx->pc = 0x3193ECu;
label_3193ec:
    // 0x3193ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3193ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3193f0: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3193F0u;
    {
        const bool branch_taken_0x3193f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3193f0) {
            ctx->pc = 0x3194C8u;
            goto label_3194c8;
        }
    }
    ctx->pc = 0x3193F8u;
    // 0x3193f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3193f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3193fc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3193fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x319400: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x319400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x319404: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x319404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x319408: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319408u;
    {
        const bool branch_taken_0x319408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x319408) {
            ctx->pc = 0x319418u;
            goto label_319418;
        }
    }
    ctx->pc = 0x319410u;
    // 0x319410: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x319410u;
    {
        const bool branch_taken_0x319410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319410u;
            // 0x319414: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319410) {
            ctx->pc = 0x3194CCu;
            goto label_3194cc;
        }
    }
    ctx->pc = 0x319418u;
label_319418:
    // 0x319418: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x319418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31941c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31941Cu;
    {
        const bool branch_taken_0x31941c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31941Cu;
            // 0x319420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31941c) {
            ctx->pc = 0x319480u;
            goto label_319480;
        }
    }
    ctx->pc = 0x319424u;
    // 0x319424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319428: 0xc054bb4  jal         func_152ED0
    ctx->pc = 0x319428u;
    SET_GPR_U32(ctx, 31, 0x319430u);
    ctx->pc = 0x31942Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319428u;
            // 0x31942c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319430u; }
        if (ctx->pc != 0x319430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319430u; }
        if (ctx->pc != 0x319430u) { return; }
    }
    ctx->pc = 0x319430u;
label_319430:
    // 0x319430: 0x8f85a328  lw          $a1, -0x5CD8($gp)
    ctx->pc = 0x319430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943528)));
    // 0x319434: 0xc054cdc  jal         func_153370
    ctx->pc = 0x319434u;
    SET_GPR_U32(ctx, 31, 0x31943Cu);
    ctx->pc = 0x319438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319434u;
            // 0x319438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31943Cu; }
        if (ctx->pc != 0x31943Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31943Cu; }
        if (ctx->pc != 0x31943Cu) { return; }
    }
    ctx->pc = 0x31943Cu;
label_31943c:
    // 0x31943c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x31943cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x319440: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x319440u;
    SET_GPR_U32(ctx, 31, 0x319448u);
    ctx->pc = 0x319444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319440u;
            // 0x319444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319448u; }
        if (ctx->pc != 0x319448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319448u; }
        if (ctx->pc != 0x319448u) { return; }
    }
    ctx->pc = 0x319448u;
label_319448:
    // 0x319448: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x319448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31944c: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x31944cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x319450: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x319450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x319454: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319454u;
    {
        const bool branch_taken_0x319454 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x319454) {
            ctx->pc = 0x319470u;
            goto label_319470;
        }
    }
    ctx->pc = 0x31945Cu;
    // 0x31945c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x31945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x319460: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x319460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x319464: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x319464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x319468: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319468u;
    {
        const bool branch_taken_0x319468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31946Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319468u;
            // 0x31946c: 0xae020194  sw          $v0, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319468) {
            ctx->pc = 0x319474u;
            goto label_319474;
        }
    }
    ctx->pc = 0x319470u;
label_319470:
    // 0x319470: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x319470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
label_319474:
    // 0x319474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319478: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x319478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x31947c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319480:
    // 0x319480: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x319480u;
    SET_GPR_U32(ctx, 31, 0x319488u);
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319488u; }
        if (ctx->pc != 0x319488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319488u; }
        if (ctx->pc != 0x319488u) { return; }
    }
    ctx->pc = 0x319488u;
label_319488:
    // 0x319488: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x319488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31948c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31948Cu;
    {
        const bool branch_taken_0x31948c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x31948c) {
            ctx->pc = 0x3194C8u;
            goto label_3194c8;
        }
    }
    ctx->pc = 0x319494u;
    // 0x319494: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x319494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x319498: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x319498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x31949c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3194a0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3194A0u;
    {
        const bool branch_taken_0x3194a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3194a0) {
            ctx->pc = 0x3194C8u;
            goto label_3194c8;
        }
    }
    ctx->pc = 0x3194A8u;
    // 0x3194a8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3194a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3194ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3194acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3194b0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3194b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x3194b4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3194b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3194b8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3194b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x3194bc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3194bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3194c0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3194c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3194c4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x3194c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_3194c8:
    // 0x3194c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3194c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3194cc:
    // 0x3194cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3194ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3194d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3194d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3194d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3194D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3194D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3194D4u;
            // 0x3194d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3194DCu;
}
