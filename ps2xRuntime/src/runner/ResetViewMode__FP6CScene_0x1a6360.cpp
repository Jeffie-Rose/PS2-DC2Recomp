#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetViewMode__FP6CScene
// Address: 0x1a6360 - 0x1a63e8
void ResetViewMode__FP6CScene_0x1a6360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetViewMode__FP6CScene_0x1a6360");
#endif

    switch (ctx->pc) {
        case 0x1a6360u: goto label_1a6360;
        case 0x1a6364u: goto label_1a6364;
        case 0x1a6368u: goto label_1a6368;
        case 0x1a636cu: goto label_1a636c;
        case 0x1a6370u: goto label_1a6370;
        case 0x1a6374u: goto label_1a6374;
        case 0x1a6378u: goto label_1a6378;
        case 0x1a637cu: goto label_1a637c;
        case 0x1a6380u: goto label_1a6380;
        case 0x1a6384u: goto label_1a6384;
        case 0x1a6388u: goto label_1a6388;
        case 0x1a638cu: goto label_1a638c;
        case 0x1a6390u: goto label_1a6390;
        case 0x1a6394u: goto label_1a6394;
        case 0x1a6398u: goto label_1a6398;
        case 0x1a639cu: goto label_1a639c;
        case 0x1a63a0u: goto label_1a63a0;
        case 0x1a63a4u: goto label_1a63a4;
        case 0x1a63a8u: goto label_1a63a8;
        case 0x1a63acu: goto label_1a63ac;
        case 0x1a63b0u: goto label_1a63b0;
        case 0x1a63b4u: goto label_1a63b4;
        case 0x1a63b8u: goto label_1a63b8;
        case 0x1a63bcu: goto label_1a63bc;
        case 0x1a63c0u: goto label_1a63c0;
        case 0x1a63c4u: goto label_1a63c4;
        case 0x1a63c8u: goto label_1a63c8;
        case 0x1a63ccu: goto label_1a63cc;
        case 0x1a63d0u: goto label_1a63d0;
        case 0x1a63d4u: goto label_1a63d4;
        case 0x1a63d8u: goto label_1a63d8;
        case 0x1a63dcu: goto label_1a63dc;
        case 0x1a63e0u: goto label_1a63e0;
        case 0x1a63e4u: goto label_1a63e4;
        default: break;
    }

    ctx->pc = 0x1a6360u;

label_1a6360:
    // 0x1a6360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a6364:
    // 0x1a6364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a6368:
    // 0x1a6368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a636c:
    // 0x1a636c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a636cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a6370:
    // 0x1a6370: 0xaf808bc0  sw          $zero, -0x7440($gp)
    ctx->pc = 0x1a6370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937536), GPR_U32(ctx, 0));
label_1a6374:
    // 0x1a6374: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x1a6374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_1a6378:
    // 0x1a6378: 0xc0a0e30  jal         func_2838C0
label_1a637c:
    if (ctx->pc == 0x1A637Cu) {
        ctx->pc = 0x1A637Cu;
            // 0x1a637c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6380u;
        goto label_1a6380;
    }
    ctx->pc = 0x1A6378u;
    SET_GPR_U32(ctx, 31, 0x1A6380u);
    ctx->pc = 0x1A637Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6378u;
            // 0x1a637c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6380u; }
        if (ctx->pc != 0x1A6380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6380u; }
        if (ctx->pc != 0x1A6380u) { return; }
    }
    ctx->pc = 0x1A6380u;
label_1a6380:
    // 0x1a6380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6384:
    // 0x1a6384: 0x8f828bd4  lw          $v0, -0x742C($gp)
    ctx->pc = 0x1a6384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937556)));
label_1a6388:
    // 0x1a6388: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a638c:
    if (ctx->pc == 0x1A638Cu) {
        ctx->pc = 0x1A638Cu;
            // 0x1a638c: 0x3c0501ea  lui         $a1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1A6390u;
        goto label_1a6390;
    }
    ctx->pc = 0x1A6388u;
    {
        const bool branch_taken_0x1a6388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6388u;
            // 0x1a638c: 0x3c0501ea  lui         $a1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6388) {
            ctx->pc = 0x1A639Cu;
            goto label_1a639c;
        }
    }
    ctx->pc = 0x1A6390u;
label_1a6390:
    // 0x1a6390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6394:
    // 0x1a6394: 0xc04c504  jal         func_131410
label_1a6398:
    if (ctx->pc == 0x1A6398u) {
        ctx->pc = 0x1A6398u;
            // 0x1a6398: 0x24a5b2e0  addiu       $a1, $a1, -0x4D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947552));
        ctx->pc = 0x1A639Cu;
        goto label_1a639c;
    }
    ctx->pc = 0x1A6394u;
    SET_GPR_U32(ctx, 31, 0x1A639Cu);
    ctx->pc = 0x1A6398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6394u;
            // 0x1a6398: 0x24a5b2e0  addiu       $a1, $a1, -0x4D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A639Cu; }
        if (ctx->pc != 0x1A639Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A639Cu; }
        if (ctx->pc != 0x1A639Cu) { return; }
    }
    ctx->pc = 0x1A639Cu;
label_1a639c:
    // 0x1a639c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1a63a0:
    if (ctx->pc == 0x1A63A0u) {
        ctx->pc = 0x1A63A0u;
            // 0x1a63a0: 0xaf808bd4  sw          $zero, -0x742C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 0));
        ctx->pc = 0x1A63A4u;
        goto label_1a63a4;
    }
    ctx->pc = 0x1A639Cu;
    {
        const bool branch_taken_0x1a639c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A639Cu;
            // 0x1a63a0: 0xaf808bd4  sw          $zero, -0x742C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a639c) {
            ctx->pc = 0x1A63B8u;
            goto label_1a63b8;
        }
    }
    ctx->pc = 0x1A63A4u;
label_1a63a4:
    // 0x1a63a4: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x1a63a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1a63a8:
    // 0x1a63a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a63a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a63ac:
    // 0x1a63ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a63acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a63b0:
    // 0x1a63b0: 0x320f809  jalr        $t9
label_1a63b4:
    if (ctx->pc == 0x1A63B4u) {
        ctx->pc = 0x1A63B4u;
            // 0x1a63b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A63B8u;
        goto label_1a63b8;
    }
    ctx->pc = 0x1A63B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A63B8u);
        ctx->pc = 0x1A63B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63B0u;
            // 0x1a63b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A63B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A63B8u; }
            if (ctx->pc != 0x1A63B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A63B8u;
label_1a63b8:
    // 0x1a63b8: 0x8e262e50  lw          $a2, 0x2E50($s1)
    ctx->pc = 0x1a63b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
label_1a63bc:
    // 0x1a63bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a63bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a63c0:
    // 0x1a63c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a63c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a63c4:
    // 0x1a63c4: 0xc0a11e0  jal         func_284780
label_1a63c8:
    if (ctx->pc == 0x1A63C8u) {
        ctx->pc = 0x1A63C8u;
            // 0x1a63c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1A63CCu;
        goto label_1a63cc;
    }
    ctx->pc = 0x1A63C4u;
    SET_GPR_U32(ctx, 31, 0x1A63CCu);
    ctx->pc = 0x1A63C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63C4u;
            // 0x1a63c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284780u;
    if (runtime->hasFunction(0x284780u)) {
        auto targetFn = runtime->lookupFunction(0x284780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63CCu; }
        if (ctx->pc != 0x1A63CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetStatus__6CSceneFiii_0x284780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63CCu; }
        if (ctx->pc != 0x1A63CCu) { return; }
    }
    ctx->pc = 0x1A63CCu;
label_1a63cc:
    // 0x1a63cc: 0xc0c399c  jal         func_30E670
label_1a63d0:
    if (ctx->pc == 0x1A63D0u) {
        ctx->pc = 0x1A63D4u;
        goto label_1a63d4;
    }
    ctx->pc = 0x1A63CCu;
    SET_GPR_U32(ctx, 31, 0x1A63D4u);
    ctx->pc = 0x30E670u;
    if (runtime->hasFunction(0x30E670u)) {
        auto targetFn = runtime->lookupFunction(0x30E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63D4u; }
        if (ctx->pc != 0x1A63D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndTakePhoto__Fv_0x30e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63D4u; }
        if (ctx->pc != 0x1A63D4u) { return; }
    }
    ctx->pc = 0x1A63D4u;
label_1a63d4:
    // 0x1a63d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a63d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a63d8:
    // 0x1a63d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a63d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a63dc:
    // 0x1a63dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a63dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a63e0:
    // 0x1a63e0: 0x3e00008  jr          $ra
label_1a63e4:
    if (ctx->pc == 0x1A63E4u) {
        ctx->pc = 0x1A63E4u;
            // 0x1a63e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A63E8u;
        goto label_fallthrough_0x1a63e0;
    }
    ctx->pc = 0x1A63E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A63E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63E0u;
            // 0x1a63e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a63e0:
    ctx->pc = 0x1A63E8u;
}
