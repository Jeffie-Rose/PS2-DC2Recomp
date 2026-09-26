#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetData__6CSceneFii
// Address: 0x2836a0 - 0x28373c
void GetData__6CSceneFii_0x2836a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetData__6CSceneFii_0x2836a0");
#endif

    switch (ctx->pc) {
        case 0x2836d4u: goto label_2836d4;
        case 0x2836e4u: goto label_2836e4;
        case 0x2836f4u: goto label_2836f4;
        case 0x283704u: goto label_283704;
        case 0x283714u: goto label_283714;
        case 0x283724u: goto label_283724;
        default: break;
    }

    ctx->pc = 0x2836a0u;

    // 0x2836a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2836a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2836a4: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x2836a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2836a8: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2836A8u;
    {
        const bool branch_taken_0x2836a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2836A8u;
            // 0x2836ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836a8) {
            ctx->pc = 0x28372Cu;
            goto label_28372c;
        }
    }
    ctx->pc = 0x2836B0u;
    // 0x2836b0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2836b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2836b4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2836b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2836b8: 0x2463d170  addiu       $v1, $v1, -0x2E90
    ctx->pc = 0x2836b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955376));
    // 0x2836bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2836bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2836c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2836c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2836c4: 0x400008  jr          $v0
    ctx->pc = 0x2836C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2836CCu: goto label_2836cc;
            case 0x2836DCu: goto label_2836dc;
            case 0x2836ECu: goto label_2836ec;
            case 0x2836FCu: goto label_2836fc;
            case 0x28370Cu: goto label_28370c;
            case 0x28371Cu: goto label_28371c;
            case 0x28372Cu: goto label_28372c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2836CCu;
label_2836cc:
    // 0x2836cc: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x2836CCu;
    SET_GPR_U32(ctx, 31, 0x2836D4u);
    ctx->pc = 0x2836D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2836CCu;
            // 0x2836d0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2836D4u; }
        if (ctx->pc != 0x2836D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2836D4u; }
        if (ctx->pc != 0x2836D4u) { return; }
    }
    ctx->pc = 0x2836D4u;
label_2836d4:
    // 0x2836d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2836D4u;
    {
        const bool branch_taken_0x2836d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2836D4u;
            // 0x2836d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836d4) {
            ctx->pc = 0x283734u;
            goto label_283734;
        }
    }
    ctx->pc = 0x2836DCu;
label_2836dc:
    // 0x2836dc: 0xc0a0ce0  jal         func_283380
    ctx->pc = 0x2836DCu;
    SET_GPR_U32(ctx, 31, 0x2836E4u);
    ctx->pc = 0x2836E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2836DCu;
            // 0x2836e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283380u;
    if (runtime->hasFunction(0x283380u)) {
        auto targetFn = runtime->lookupFunction(0x283380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2836E4u; }
        if (ctx->pc != 0x2836E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMap__6CSceneFi_0x283380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2836E4u; }
        if (ctx->pc != 0x2836E4u) { return; }
    }
    ctx->pc = 0x2836E4u;
label_2836e4:
    // 0x2836e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2836E4u;
    {
        const bool branch_taken_0x2836e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2836e4) {
            ctx->pc = 0x283730u;
            goto label_283730;
        }
    }
    ctx->pc = 0x2836ECu;
label_2836ec:
    // 0x2836ec: 0xc0a0cf0  jal         func_2833C0
    ctx->pc = 0x2836ECu;
    SET_GPR_U32(ctx, 31, 0x2836F4u);
    ctx->pc = 0x2836F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2836ECu;
            // 0x2836f0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2833C0u;
    if (runtime->hasFunction(0x2833C0u)) {
        auto targetFn = runtime->lookupFunction(0x2833C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2836F4u; }
        if (ctx->pc != 0x2836F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMessage__6CSceneFi_0x2833c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2836F4u; }
        if (ctx->pc != 0x2836F4u) { return; }
    }
    ctx->pc = 0x2836F4u;
label_2836f4:
    // 0x2836f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2836F4u;
    {
        const bool branch_taken_0x2836f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2836f4) {
            ctx->pc = 0x283730u;
            goto label_283730;
        }
    }
    ctx->pc = 0x2836FCu;
label_2836fc:
    // 0x2836fc: 0xc0a0d00  jal         func_283400
    ctx->pc = 0x2836FCu;
    SET_GPR_U32(ctx, 31, 0x283704u);
    ctx->pc = 0x283700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2836FCu;
            // 0x283700: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283400u;
    if (runtime->hasFunction(0x283400u)) {
        auto targetFn = runtime->lookupFunction(0x283400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283704u; }
        if (ctx->pc != 0x283704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCamera__6CSceneFi_0x283400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283704u; }
        if (ctx->pc != 0x283704u) { return; }
    }
    ctx->pc = 0x283704u;
label_283704:
    // 0x283704: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x283704u;
    {
        const bool branch_taken_0x283704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283704) {
            ctx->pc = 0x283730u;
            goto label_283730;
        }
    }
    ctx->pc = 0x28370Cu;
label_28370c:
    // 0x28370c: 0xc0a0d20  jal         func_283480
    ctx->pc = 0x28370Cu;
    SET_GPR_U32(ctx, 31, 0x283714u);
    ctx->pc = 0x283710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28370Cu;
            // 0x283710: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283480u;
    if (runtime->hasFunction(0x283480u)) {
        auto targetFn = runtime->lookupFunction(0x283480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283714u; }
        if (ctx->pc != 0x283714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneGameObj__6CSceneFi_0x283480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283714u; }
        if (ctx->pc != 0x283714u) { return; }
    }
    ctx->pc = 0x283714u;
label_283714:
    // 0x283714: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x283714u;
    {
        const bool branch_taken_0x283714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283714) {
            ctx->pc = 0x283730u;
            goto label_283730;
        }
    }
    ctx->pc = 0x28371Cu;
label_28371c:
    // 0x28371c: 0xc0a0d20  jal         func_283480
    ctx->pc = 0x28371Cu;
    SET_GPR_U32(ctx, 31, 0x283724u);
    ctx->pc = 0x283720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28371Cu;
            // 0x283720: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283480u;
    if (runtime->hasFunction(0x283480u)) {
        auto targetFn = runtime->lookupFunction(0x283480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283724u; }
        if (ctx->pc != 0x283724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneGameObj__6CSceneFi_0x283480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283724u; }
        if (ctx->pc != 0x283724u) { return; }
    }
    ctx->pc = 0x283724u;
label_283724:
    // 0x283724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283724u;
    {
        const bool branch_taken_0x283724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283724) {
            ctx->pc = 0x283730u;
            goto label_283730;
        }
    }
    ctx->pc = 0x28372Cu;
label_28372c:
    // 0x28372c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28372cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283730:
    // 0x283730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_283734:
    // 0x283734: 0x3e00008  jr          $ra
    ctx->pc = 0x283734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283734u;
            // 0x283738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28373Cu;
}
