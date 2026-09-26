#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgEffectDrawBuggy__FP11SubGameInfo
// Address: 0x3144a0 - 0x314530
void sgEffectDrawBuggy__FP11SubGameInfo_0x3144a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgEffectDrawBuggy__FP11SubGameInfo_0x3144a0");
#endif

    switch (ctx->pc) {
        case 0x3144a0u: goto label_3144a0;
        case 0x3144a4u: goto label_3144a4;
        case 0x3144a8u: goto label_3144a8;
        case 0x3144acu: goto label_3144ac;
        case 0x3144b0u: goto label_3144b0;
        case 0x3144b4u: goto label_3144b4;
        case 0x3144b8u: goto label_3144b8;
        case 0x3144bcu: goto label_3144bc;
        case 0x3144c0u: goto label_3144c0;
        case 0x3144c4u: goto label_3144c4;
        case 0x3144c8u: goto label_3144c8;
        case 0x3144ccu: goto label_3144cc;
        case 0x3144d0u: goto label_3144d0;
        case 0x3144d4u: goto label_3144d4;
        case 0x3144d8u: goto label_3144d8;
        case 0x3144dcu: goto label_3144dc;
        case 0x3144e0u: goto label_3144e0;
        case 0x3144e4u: goto label_3144e4;
        case 0x3144e8u: goto label_3144e8;
        case 0x3144ecu: goto label_3144ec;
        case 0x3144f0u: goto label_3144f0;
        case 0x3144f4u: goto label_3144f4;
        case 0x3144f8u: goto label_3144f8;
        case 0x3144fcu: goto label_3144fc;
        case 0x314500u: goto label_314500;
        case 0x314504u: goto label_314504;
        case 0x314508u: goto label_314508;
        case 0x31450cu: goto label_31450c;
        case 0x314510u: goto label_314510;
        case 0x314514u: goto label_314514;
        case 0x314518u: goto label_314518;
        case 0x31451cu: goto label_31451c;
        case 0x314520u: goto label_314520;
        case 0x314524u: goto label_314524;
        case 0x314528u: goto label_314528;
        case 0x31452cu: goto label_31452c;
        default: break;
    }

    ctx->pc = 0x3144a0u;

label_3144a0:
    // 0x3144a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3144a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3144a4:
    // 0x3144a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3144a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3144a8:
    // 0x3144a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3144a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3144ac:
    // 0x3144ac: 0x8f82a300  lw          $v0, -0x5D00($gp)
    ctx->pc = 0x3144acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943488)));
label_3144b0:
    // 0x3144b0: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_3144b4:
    if (ctx->pc == 0x3144B4u) {
        ctx->pc = 0x3144B4u;
            // 0x3144b4: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3144B8u;
        goto label_3144b8;
    }
    ctx->pc = 0x3144B0u;
    {
        const bool branch_taken_0x3144b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3144B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3144B0u;
            // 0x3144b4: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144b0) {
            ctx->pc = 0x3144E4u;
            goto label_3144e4;
        }
    }
    ctx->pc = 0x3144B8u;
label_3144b8:
    // 0x3144b8: 0x8f84a298  lw          $a0, -0x5D68($gp)
    ctx->pc = 0x3144b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943384)));
label_3144bc:
    // 0x3144bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3144bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3144c0:
    // 0x3144c0: 0xaf82a300  sw          $v0, -0x5D00($gp)
    ctx->pc = 0x3144c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943488), GPR_U32(ctx, 2));
label_3144c4:
    // 0x3144c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3144c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3144c8:
    // 0x3144c8: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x3144c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_3144cc:
    // 0x3144cc: 0x320f809  jalr        $t9
label_3144d0:
    if (ctx->pc == 0x3144D0u) {
        ctx->pc = 0x3144D4u;
        goto label_3144d4;
    }
    ctx->pc = 0x3144CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3144D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3144D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3144D4u; }
            if (ctx->pc != 0x3144D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3144D4u;
label_3144d4:
    // 0x3144d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3144d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3144d8:
    // 0x3144d8: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x3144d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_3144dc:
    // 0x3144dc: 0xc0b23e0  jal         func_2C8F80
label_3144e0:
    if (ctx->pc == 0x3144E0u) {
        ctx->pc = 0x3144E0u;
            // 0x3144e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3144E4u;
        goto label_3144e4;
    }
    ctx->pc = 0x3144DCu;
    SET_GPR_U32(ctx, 31, 0x3144E4u);
    ctx->pc = 0x3144E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3144DCu;
            // 0x3144e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3144E4u; }
        if (ctx->pc != 0x3144E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3144E4u; }
        if (ctx->pc != 0x3144E4u) { return; }
    }
    ctx->pc = 0x3144E4u;
label_3144e4:
    // 0x3144e4: 0x8f82a304  lw          $v0, -0x5CFC($gp)
    ctx->pc = 0x3144e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943492)));
label_3144e8:
    // 0x3144e8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_3144ec:
    if (ctx->pc == 0x3144ECu) {
        ctx->pc = 0x3144F0u;
        goto label_3144f0;
    }
    ctx->pc = 0x3144E8u;
    {
        const bool branch_taken_0x3144e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3144e8) {
            ctx->pc = 0x31451Cu;
            goto label_31451c;
        }
    }
    ctx->pc = 0x3144F0u;
label_3144f0:
    // 0x3144f0: 0x8f84a29c  lw          $a0, -0x5D64($gp)
    ctx->pc = 0x3144f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943388)));
label_3144f4:
    // 0x3144f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3144f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3144f8:
    // 0x3144f8: 0xaf82a304  sw          $v0, -0x5CFC($gp)
    ctx->pc = 0x3144f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943492), GPR_U32(ctx, 2));
label_3144fc:
    // 0x3144fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3144fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314500:
    // 0x314500: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x314500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_314504:
    // 0x314504: 0x320f809  jalr        $t9
label_314508:
    if (ctx->pc == 0x314508u) {
        ctx->pc = 0x31450Cu;
        goto label_31450c;
    }
    ctx->pc = 0x314504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31450Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31450Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31450Cu; }
            if (ctx->pc != 0x31450Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31450Cu;
label_31450c:
    // 0x31450c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314510:
    // 0x314510: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x314510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_314514:
    // 0x314514: 0xc0b23e0  jal         func_2C8F80
label_314518:
    if (ctx->pc == 0x314518u) {
        ctx->pc = 0x314518u;
            // 0x314518: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31451Cu;
        goto label_31451c;
    }
    ctx->pc = 0x314514u;
    SET_GPR_U32(ctx, 31, 0x31451Cu);
    ctx->pc = 0x314518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314514u;
            // 0x314518: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31451Cu; }
        if (ctx->pc != 0x31451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31451Cu; }
        if (ctx->pc != 0x31451Cu) { return; }
    }
    ctx->pc = 0x31451Cu;
label_31451c:
    // 0x31451c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31451cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_314520:
    // 0x314520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314524:
    // 0x314524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_314528:
    // 0x314528: 0x3e00008  jr          $ra
label_31452c:
    if (ctx->pc == 0x31452Cu) {
        ctx->pc = 0x31452Cu;
            // 0x31452c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x314530u;
        goto label_fallthrough_0x314528;
    }
    ctx->pc = 0x314528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31452Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314528u;
            // 0x31452c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x314528:
    ctx->pc = 0x314530u;
}
