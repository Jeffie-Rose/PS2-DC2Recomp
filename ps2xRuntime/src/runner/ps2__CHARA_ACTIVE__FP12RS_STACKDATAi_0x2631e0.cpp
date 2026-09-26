#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHARA_ACTIVE__FP12RS_STACKDATAi
// Address: 0x2631e0 - 0x263280
void ps2__CHARA_ACTIVE__FP12RS_STACKDATAi_0x2631e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHARA_ACTIVE__FP12RS_STACKDATAi_0x2631e0");
#endif

    switch (ctx->pc) {
        case 0x263210u: goto label_263210;
        case 0x263220u: goto label_263220;
        case 0x263230u: goto label_263230;
        case 0x26323cu: goto label_26323c;
        case 0x263254u: goto label_263254;
        case 0x26326cu: goto label_26326c;
        default: break;
    }

    ctx->pc = 0x2631e0u;

    // 0x2631e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2631e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2631e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2631e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2631e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2631e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2631ec: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2631ECu;
    {
        const bool branch_taken_0x2631ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2631F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2631ECu;
            // 0x2631f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631ec) {
            ctx->pc = 0x263228u;
            goto label_263228;
        }
    }
    ctx->pc = 0x2631F4u;
    // 0x2631f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2631f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2631f8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2631F8u;
    {
        const bool branch_taken_0x2631f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2631f8) {
            ctx->pc = 0x263208u;
            goto label_263208;
        }
    }
    ctx->pc = 0x263200u;
    // 0x263200: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x263200u;
    {
        const bool branch_taken_0x263200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263200u;
            // 0x263204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263200) {
            ctx->pc = 0x263270u;
            goto label_263270;
        }
    }
    ctx->pc = 0x263208u;
label_263208:
    // 0x263208: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263208u;
    SET_GPR_U32(ctx, 31, 0x263210u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263210u; }
        if (ctx->pc != 0x263210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263210u; }
        if (ctx->pc != 0x263210u) { return; }
    }
    ctx->pc = 0x263210u;
label_263210:
    // 0x263210: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x263210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x263214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x263214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263218: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x263218u;
    SET_GPR_U32(ctx, 31, 0x263220u);
    ctx->pc = 0x26321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263218u;
            // 0x26321c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263220u; }
        if (ctx->pc != 0x263220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263220u; }
        if (ctx->pc != 0x263220u) { return; }
    }
    ctx->pc = 0x263220u;
label_263220:
    // 0x263220: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x263220u;
    {
        const bool branch_taken_0x263220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263220u;
            // 0x263224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263220) {
            ctx->pc = 0x263270u;
            goto label_263270;
        }
    }
    ctx->pc = 0x263228u;
label_263228:
    // 0x263228: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263228u;
    SET_GPR_U32(ctx, 31, 0x263230u);
    ctx->pc = 0x26322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263228u;
            // 0x26322c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263230u; }
        if (ctx->pc != 0x263230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263230u; }
        if (ctx->pc != 0x263230u) { return; }
    }
    ctx->pc = 0x263230u;
label_263230:
    // 0x263230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263234: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263234u;
    SET_GPR_U32(ctx, 31, 0x26323Cu);
    ctx->pc = 0x263238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263234u;
            // 0x263238: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26323Cu; }
        if (ctx->pc != 0x26323Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26323Cu; }
        if (ctx->pc != 0x26323Cu) { return; }
    }
    ctx->pc = 0x26323Cu;
label_26323c:
    // 0x26323c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26323Cu;
    {
        const bool branch_taken_0x26323c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26323c) {
            ctx->pc = 0x26325Cu;
            goto label_26325c;
        }
    }
    ctx->pc = 0x263244u;
    // 0x263244: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x263244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x263248: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x263248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26324c: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x26324Cu;
    SET_GPR_U32(ctx, 31, 0x263254u);
    ctx->pc = 0x263250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26324Cu;
            // 0x263250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263254u; }
        if (ctx->pc != 0x263254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263254u; }
        if (ctx->pc != 0x263254u) { return; }
    }
    ctx->pc = 0x263254u;
label_263254:
    // 0x263254: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x263254u;
    {
        const bool branch_taken_0x263254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263254u;
            // 0x263258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263254) {
            ctx->pc = 0x263270u;
            goto label_263270;
        }
    }
    ctx->pc = 0x26325Cu;
label_26325c:
    // 0x26325c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x263260: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x263260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263264: 0xc0a11c0  jal         func_284700
    ctx->pc = 0x263264u;
    SET_GPR_U32(ctx, 31, 0x26326Cu);
    ctx->pc = 0x263268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263264u;
            // 0x263268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284700u;
    if (runtime->hasFunction(0x284700u)) {
        auto targetFn = runtime->lookupFunction(0x284700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26326Cu; }
        if (ctx->pc != 0x26326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetActive__6CSceneFii_0x284700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26326Cu; }
        if (ctx->pc != 0x26326Cu) { return; }
    }
    ctx->pc = 0x26326Cu;
label_26326c:
    // 0x26326c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263270:
    // 0x263270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263278: 0x3e00008  jr          $ra
    ctx->pc = 0x263278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263278u;
            // 0x26327c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263280u;
}
