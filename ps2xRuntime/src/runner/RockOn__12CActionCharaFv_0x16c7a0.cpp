#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RockOn__12CActionCharaFv
// Address: 0x16c7a0 - 0x16c984
void RockOn__12CActionCharaFv_0x16c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RockOn__12CActionCharaFv_0x16c7a0");
#endif

    switch (ctx->pc) {
        case 0x16c7a0u: goto label_16c7a0;
        case 0x16c7a4u: goto label_16c7a4;
        case 0x16c7a8u: goto label_16c7a8;
        case 0x16c7acu: goto label_16c7ac;
        case 0x16c7b0u: goto label_16c7b0;
        case 0x16c7b4u: goto label_16c7b4;
        case 0x16c7b8u: goto label_16c7b8;
        case 0x16c7bcu: goto label_16c7bc;
        case 0x16c7c0u: goto label_16c7c0;
        case 0x16c7c4u: goto label_16c7c4;
        case 0x16c7c8u: goto label_16c7c8;
        case 0x16c7ccu: goto label_16c7cc;
        case 0x16c7d0u: goto label_16c7d0;
        case 0x16c7d4u: goto label_16c7d4;
        case 0x16c7d8u: goto label_16c7d8;
        case 0x16c7dcu: goto label_16c7dc;
        case 0x16c7e0u: goto label_16c7e0;
        case 0x16c7e4u: goto label_16c7e4;
        case 0x16c7e8u: goto label_16c7e8;
        case 0x16c7ecu: goto label_16c7ec;
        case 0x16c7f0u: goto label_16c7f0;
        case 0x16c7f4u: goto label_16c7f4;
        case 0x16c7f8u: goto label_16c7f8;
        case 0x16c7fcu: goto label_16c7fc;
        case 0x16c800u: goto label_16c800;
        case 0x16c804u: goto label_16c804;
        case 0x16c808u: goto label_16c808;
        case 0x16c80cu: goto label_16c80c;
        case 0x16c810u: goto label_16c810;
        case 0x16c814u: goto label_16c814;
        case 0x16c818u: goto label_16c818;
        case 0x16c81cu: goto label_16c81c;
        case 0x16c820u: goto label_16c820;
        case 0x16c824u: goto label_16c824;
        case 0x16c828u: goto label_16c828;
        case 0x16c82cu: goto label_16c82c;
        case 0x16c830u: goto label_16c830;
        case 0x16c834u: goto label_16c834;
        case 0x16c838u: goto label_16c838;
        case 0x16c83cu: goto label_16c83c;
        case 0x16c840u: goto label_16c840;
        case 0x16c844u: goto label_16c844;
        case 0x16c848u: goto label_16c848;
        case 0x16c84cu: goto label_16c84c;
        case 0x16c850u: goto label_16c850;
        case 0x16c854u: goto label_16c854;
        case 0x16c858u: goto label_16c858;
        case 0x16c85cu: goto label_16c85c;
        case 0x16c860u: goto label_16c860;
        case 0x16c864u: goto label_16c864;
        case 0x16c868u: goto label_16c868;
        case 0x16c86cu: goto label_16c86c;
        case 0x16c870u: goto label_16c870;
        case 0x16c874u: goto label_16c874;
        case 0x16c878u: goto label_16c878;
        case 0x16c87cu: goto label_16c87c;
        case 0x16c880u: goto label_16c880;
        case 0x16c884u: goto label_16c884;
        case 0x16c888u: goto label_16c888;
        case 0x16c88cu: goto label_16c88c;
        case 0x16c890u: goto label_16c890;
        case 0x16c894u: goto label_16c894;
        case 0x16c898u: goto label_16c898;
        case 0x16c89cu: goto label_16c89c;
        case 0x16c8a0u: goto label_16c8a0;
        case 0x16c8a4u: goto label_16c8a4;
        case 0x16c8a8u: goto label_16c8a8;
        case 0x16c8acu: goto label_16c8ac;
        case 0x16c8b0u: goto label_16c8b0;
        case 0x16c8b4u: goto label_16c8b4;
        case 0x16c8b8u: goto label_16c8b8;
        case 0x16c8bcu: goto label_16c8bc;
        case 0x16c8c0u: goto label_16c8c0;
        case 0x16c8c4u: goto label_16c8c4;
        case 0x16c8c8u: goto label_16c8c8;
        case 0x16c8ccu: goto label_16c8cc;
        case 0x16c8d0u: goto label_16c8d0;
        case 0x16c8d4u: goto label_16c8d4;
        case 0x16c8d8u: goto label_16c8d8;
        case 0x16c8dcu: goto label_16c8dc;
        case 0x16c8e0u: goto label_16c8e0;
        case 0x16c8e4u: goto label_16c8e4;
        case 0x16c8e8u: goto label_16c8e8;
        case 0x16c8ecu: goto label_16c8ec;
        case 0x16c8f0u: goto label_16c8f0;
        case 0x16c8f4u: goto label_16c8f4;
        case 0x16c8f8u: goto label_16c8f8;
        case 0x16c8fcu: goto label_16c8fc;
        case 0x16c900u: goto label_16c900;
        case 0x16c904u: goto label_16c904;
        case 0x16c908u: goto label_16c908;
        case 0x16c90cu: goto label_16c90c;
        case 0x16c910u: goto label_16c910;
        case 0x16c914u: goto label_16c914;
        case 0x16c918u: goto label_16c918;
        case 0x16c91cu: goto label_16c91c;
        case 0x16c920u: goto label_16c920;
        case 0x16c924u: goto label_16c924;
        case 0x16c928u: goto label_16c928;
        case 0x16c92cu: goto label_16c92c;
        case 0x16c930u: goto label_16c930;
        case 0x16c934u: goto label_16c934;
        case 0x16c938u: goto label_16c938;
        case 0x16c93cu: goto label_16c93c;
        case 0x16c940u: goto label_16c940;
        case 0x16c944u: goto label_16c944;
        case 0x16c948u: goto label_16c948;
        case 0x16c94cu: goto label_16c94c;
        case 0x16c950u: goto label_16c950;
        case 0x16c954u: goto label_16c954;
        case 0x16c958u: goto label_16c958;
        case 0x16c95cu: goto label_16c95c;
        case 0x16c960u: goto label_16c960;
        case 0x16c964u: goto label_16c964;
        case 0x16c968u: goto label_16c968;
        case 0x16c96cu: goto label_16c96c;
        case 0x16c970u: goto label_16c970;
        case 0x16c974u: goto label_16c974;
        case 0x16c978u: goto label_16c978;
        case 0x16c97cu: goto label_16c97c;
        case 0x16c980u: goto label_16c980;
        default: break;
    }

    ctx->pc = 0x16c7a0u;

label_16c7a0:
    // 0x16c7a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16c7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_16c7a4:
    // 0x16c7a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16c7a8:
    // 0x16c7a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16c7ac:
    // 0x16c7ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c7b0:
    // 0x16c7b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c7b4:
    // 0x16c7b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16c7b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16c7b8:
    // 0x16c7b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16c7b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16c7bc:
    // 0x16c7bc: 0x320f809  jalr        $t9
label_16c7c0:
    if (ctx->pc == 0x16C7C0u) {
        ctx->pc = 0x16C7C0u;
            // 0x16c7c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C7C4u;
        goto label_16c7c4;
    }
    ctx->pc = 0x16C7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C7C4u);
        ctx->pc = 0x16C7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7BCu;
            // 0x16c7c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16C7C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C7C4u; }
            if (ctx->pc != 0x16C7C4u) { return; }
        }
        }
    }
    ctx->pc = 0x16C7C4u;
label_16c7c4:
    // 0x16c7c4: 0x8f829da4  lw          $v0, -0x625C($gp)
    ctx->pc = 0x16c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16c7c8:
    // 0x16c7c8: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_16c7cc:
    // 0x16c7cc: 0xae2007c4  sw          $zero, 0x7C4($s1)
    ctx->pc = 0x16c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1988), GPR_U32(ctx, 0));
label_16c7d0:
    // 0x16c7d0: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x16c7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_16c7d4:
    // 0x16c7d4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_16c7d8:
    if (ctx->pc == 0x16C7D8u) {
        ctx->pc = 0x16C7DCu;
        goto label_16c7dc;
    }
    ctx->pc = 0x16C7D4u;
    {
        const bool branch_taken_0x16c7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7d4) {
            ctx->pc = 0x16C83Cu;
            goto label_16c83c;
        }
    }
    ctx->pc = 0x16C7DCu;
label_16c7dc:
    // 0x16c7dc: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16c7e0:
    // 0x16c7e0: 0xc0a0ed8  jal         func_283B60
label_16c7e4:
    if (ctx->pc == 0x16C7E4u) {
        ctx->pc = 0x16C7E4u;
            // 0x16c7e4: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->pc = 0x16C7E8u;
        goto label_16c7e8;
    }
    ctx->pc = 0x16C7E0u;
    SET_GPR_U32(ctx, 31, 0x16C7E8u);
    ctx->pc = 0x16C7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7E0u;
            // 0x16c7e4: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7E8u; }
        if (ctx->pc != 0x16C7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7E8u; }
        if (ctx->pc != 0x16C7E8u) { return; }
    }
    ctx->pc = 0x16C7E8u;
label_16c7e8:
    // 0x16c7e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_16c7ec:
    if (ctx->pc == 0x16C7ECu) {
        ctx->pc = 0x16C7F0u;
        goto label_16c7f0;
    }
    ctx->pc = 0x16C7E8u;
    {
        const bool branch_taken_0x16c7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7e8) {
            ctx->pc = 0x16C83Cu;
            goto label_16c83c;
        }
    }
    ctx->pc = 0x16C7F0u;
label_16c7f0:
    // 0x16c7f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16c7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c7f4:
    // 0x16c7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c7f8:
    // 0x16c7f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c7fc:
    // 0x16c7fc: 0xc05d420  jal         func_175080
label_16c800:
    if (ctx->pc == 0x16C800u) {
        ctx->pc = 0x16C800u;
            // 0x16c800: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16C804u;
        goto label_16c804;
    }
    ctx->pc = 0x16C7FCu;
    SET_GPR_U32(ctx, 31, 0x16C804u);
    ctx->pc = 0x16C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7FCu;
            // 0x16c800: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C804u; }
        if (ctx->pc != 0x16C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C804u; }
        if (ctx->pc != 0x16C804u) { return; }
    }
    ctx->pc = 0x16C804u;
label_16c804:
    // 0x16c804: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c808:
    // 0x16c808: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16c808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16c80c:
    // 0x16c80c: 0xc041c3e  jal         func_1070F8
label_16c810:
    if (ctx->pc == 0x16C810u) {
        ctx->pc = 0x16C810u;
            // 0x16c810: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16C814u;
        goto label_16c814;
    }
    ctx->pc = 0x16C80Cu;
    SET_GPR_U32(ctx, 31, 0x16C814u);
    ctx->pc = 0x16C810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C80Cu;
            // 0x16c810: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C814u; }
        if (ctx->pc != 0x16C814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C814u; }
        if (ctx->pc != 0x16C814u) { return; }
    }
    ctx->pc = 0x16C814u;
label_16c814:
    // 0x16c814: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16c814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c818:
    // 0x16c818: 0xc041be0  jal         func_106F80
label_16c81c:
    if (ctx->pc == 0x16C81Cu) {
        ctx->pc = 0x16C81Cu;
            // 0x16c81c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C820u;
        goto label_16c820;
    }
    ctx->pc = 0x16C818u;
    SET_GPR_U32(ctx, 31, 0x16C820u);
    ctx->pc = 0x16C81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C818u;
            // 0x16c81c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C820u; }
        if (ctx->pc != 0x16C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C820u; }
        if (ctx->pc != 0x16C820u) { return; }
    }
    ctx->pc = 0x16C820u;
label_16c820:
    // 0x16c820: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16c820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16c824:
    // 0x16c824: 0xc041be0  jal         func_106F80
label_16c828:
    if (ctx->pc == 0x16C828u) {
        ctx->pc = 0x16C828u;
            // 0x16c828: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16C82Cu;
        goto label_16c82c;
    }
    ctx->pc = 0x16C824u;
    SET_GPR_U32(ctx, 31, 0x16C82Cu);
    ctx->pc = 0x16C828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C824u;
            // 0x16c828: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C82Cu; }
        if (ctx->pc != 0x16C82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C82Cu; }
        if (ctx->pc != 0x16C82Cu) { return; }
    }
    ctx->pc = 0x16C82Cu;
label_16c82c:
    // 0x16c82c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c830:
    // 0x16c830: 0xc041bd6  jal         func_106F58
label_16c834:
    if (ctx->pc == 0x16C834u) {
        ctx->pc = 0x16C834u;
            // 0x16c834: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16C838u;
        goto label_16c838;
    }
    ctx->pc = 0x16C830u;
    SET_GPR_U32(ctx, 31, 0x16C838u);
    ctx->pc = 0x16C834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C830u;
            // 0x16c834: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C838u; }
        if (ctx->pc != 0x16C838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C838u; }
        if (ctx->pc != 0x16C838u) { return; }
    }
    ctx->pc = 0x16C838u;
label_16c838:
    // 0x16c838: 0xe62007c4  swc1        $f0, 0x7C4($s1)
    ctx->pc = 0x16c838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1988), bits); }
label_16c83c:
    // 0x16c83c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16c840:
    // 0x16c840: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x16c840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_16c844:
    // 0x16c844: 0xc0bb538  jal         func_2ED4E0
label_16c848:
    if (ctx->pc == 0x16C848u) {
        ctx->pc = 0x16C848u;
            // 0x16c848: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x16C84Cu;
        goto label_16c84c;
    }
    ctx->pc = 0x16C844u;
    SET_GPR_U32(ctx, 31, 0x16C84Cu);
    ctx->pc = 0x16C848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C844u;
            // 0x16c848: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C84Cu; }
        if (ctx->pc != 0x16C84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C84Cu; }
        if (ctx->pc != 0x16C84Cu) { return; }
    }
    ctx->pc = 0x16C84Cu;
label_16c84c:
    // 0x16c84c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_16c850:
    if (ctx->pc == 0x16C850u) {
        ctx->pc = 0x16C854u;
        goto label_16c854;
    }
    ctx->pc = 0x16C84Cu;
    {
        const bool branch_taken_0x16c84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c84c) {
            ctx->pc = 0x16C970u;
            goto label_16c970;
        }
    }
    ctx->pc = 0x16C854u;
label_16c854:
    // 0x16c854: 0x86230772  lh          $v1, 0x772($s1)
    ctx->pc = 0x16c854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_16c858:
    // 0x16c858: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_16c85c:
    if (ctx->pc == 0x16C85Cu) {
        ctx->pc = 0x16C860u;
        goto label_16c860;
    }
    ctx->pc = 0x16C858u;
    {
        const bool branch_taken_0x16c858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c858) {
            ctx->pc = 0x16C948u;
            goto label_16c948;
        }
    }
    ctx->pc = 0x16C860u;
label_16c860:
    // 0x16c860: 0xc62107c4  lwc1        $f1, 0x7C4($s1)
    ctx->pc = 0x16c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c864:
    // 0x16c864: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x16c864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
label_16c868:
    // 0x16c868: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16c868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16c86c:
    // 0x16c86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c870:
    // 0x16c870: 0x0  nop
    ctx->pc = 0x16c870u;
    // NOP
label_16c874:
    // 0x16c874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c878:
    // 0x16c878: 0x0  nop
    ctx->pc = 0x16c878u;
    // NOP
label_16c87c:
    // 0x16c87c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_16c880:
    if (ctx->pc == 0x16C880u) {
        ctx->pc = 0x16C884u;
        goto label_16c884;
    }
    ctx->pc = 0x16C87Cu;
    {
        const bool branch_taken_0x16c87c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c87c) {
            ctx->pc = 0x16C89Cu;
            goto label_16c89c;
        }
    }
    ctx->pc = 0x16C884u;
label_16c884:
    // 0x16c884: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x16c884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
label_16c888:
    // 0x16c888: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x16c888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_16c88c:
    // 0x16c88c: 0xc063818  jal         func_18E060
label_16c890:
    if (ctx->pc == 0x16C890u) {
        ctx->pc = 0x16C890u;
            // 0x16c890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C894u;
        goto label_16c894;
    }
    ctx->pc = 0x16C88Cu;
    SET_GPR_U32(ctx, 31, 0x16C894u);
    ctx->pc = 0x16C890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C88Cu;
            // 0x16c890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C894u; }
        if (ctx->pc != 0x16C894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C894u; }
        if (ctx->pc != 0x16C894u) { return; }
    }
    ctx->pc = 0x16C894u;
label_16c894:
    // 0x16c894: 0x10000036  b           . + 4 + (0x36 << 2)
label_16c898:
    if (ctx->pc == 0x16C898u) {
        ctx->pc = 0x16C898u;
            // 0x16c898: 0xa6200772  sh          $zero, 0x772($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16C89Cu;
        goto label_16c89c;
    }
    ctx->pc = 0x16C894u;
    {
        const bool branch_taken_0x16c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C894u;
            // 0x16c898: 0xa6200772  sh          $zero, 0x772($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c894) {
            ctx->pc = 0x16C970u;
            goto label_16c970;
        }
    }
    ctx->pc = 0x16C89Cu;
label_16c89c:
    // 0x16c89c: 0x8603009e  lh          $v1, 0x9E($s0)
    ctx->pc = 0x16c89cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
label_16c8a0:
    // 0x16c8a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c8a4:
    // 0x16c8a4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_16c8a8:
    if (ctx->pc == 0x16C8A8u) {
        ctx->pc = 0x16C8ACu;
        goto label_16c8ac;
    }
    ctx->pc = 0x16C8A4u;
    {
        const bool branch_taken_0x16c8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c8a4) {
            ctx->pc = 0x16C8F4u;
            goto label_16c8f4;
        }
    }
    ctx->pc = 0x16C8ACu;
label_16c8ac:
    // 0x16c8ac: 0x86220770  lh          $v0, 0x770($s1)
    ctx->pc = 0x16c8acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_16c8b0:
    // 0x16c8b0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_16c8b4:
    if (ctx->pc == 0x16C8B4u) {
        ctx->pc = 0x16C8B8u;
        goto label_16c8b8;
    }
    ctx->pc = 0x16C8B0u;
    {
        const bool branch_taken_0x16c8b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16c8b0) {
            ctx->pc = 0x16C8C4u;
            goto label_16c8c4;
        }
    }
    ctx->pc = 0x16C8B8u;
label_16c8b8:
    // 0x16c8b8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x16c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_16c8bc:
    // 0x16c8bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_16c8c0:
    if (ctx->pc == 0x16C8C0u) {
        ctx->pc = 0x16C8C0u;
            // 0x16c8c0: 0xa6220770  sh          $v0, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16C8C4u;
        goto label_16c8c4;
    }
    ctx->pc = 0x16C8BCu;
    {
        const bool branch_taken_0x16c8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8BCu;
            // 0x16c8c0: 0xa6220770  sh          $v0, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8bc) {
            ctx->pc = 0x16C8CCu;
            goto label_16c8cc;
        }
    }
    ctx->pc = 0x16C8C4u;
label_16c8c4:
    // 0x16c8c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16c8c8:
    // 0x16c8c8: 0xa6220770  sh          $v0, 0x770($s1)
    ctx->pc = 0x16c8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
label_16c8cc:
    // 0x16c8cc: 0x86220770  lh          $v0, 0x770($s1)
    ctx->pc = 0x16c8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_16c8d0:
    // 0x16c8d0: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x16c8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_16c8d4:
    // 0x16c8d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_16c8d8:
    if (ctx->pc == 0x16C8D8u) {
        ctx->pc = 0x16C8D8u;
            // 0x16c8d8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x16C8DCu;
        goto label_16c8dc;
    }
    ctx->pc = 0x16C8D4u;
    {
        const bool branch_taken_0x16c8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8D4u;
            // 0x16c8d8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8d4) {
            ctx->pc = 0x16C8E0u;
            goto label_16c8e0;
        }
    }
    ctx->pc = 0x16C8DCu;
label_16c8dc:
    // 0x16c8dc: 0xa6220770  sh          $v0, 0x770($s1)
    ctx->pc = 0x16c8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
label_16c8e0:
    // 0x16c8e0: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16c8e4:
    // 0x16c8e4: 0xc05afb8  jal         func_16BEE0
label_16c8e8:
    if (ctx->pc == 0x16C8E8u) {
        ctx->pc = 0x16C8E8u;
            // 0x16c8e8: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->pc = 0x16C8ECu;
        goto label_16c8ec;
    }
    ctx->pc = 0x16C8E4u;
    SET_GPR_U32(ctx, 31, 0x16C8ECu);
    ctx->pc = 0x16C8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8E4u;
            // 0x16c8e8: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BEE0u;
    if (runtime->hasFunction(0x16BEE0u)) {
        auto targetFn = runtime->lookupFunction(0x16BEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8ECu; }
        if (ctx->pc != 0x16C8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn_TargetSel__FP6CScenei_0x16bee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8ECu; }
        if (ctx->pc != 0x16C8ECu) { return; }
    }
    ctx->pc = 0x16C8ECu;
label_16c8ec:
    // 0x16c8ec: 0x10000020  b           . + 4 + (0x20 << 2)
label_16c8f0:
    if (ctx->pc == 0x16C8F0u) {
        ctx->pc = 0x16C8F0u;
            // 0x16c8f0: 0xa6220770  sh          $v0, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16C8F4u;
        goto label_16c8f4;
    }
    ctx->pc = 0x16C8ECu;
    {
        const bool branch_taken_0x16c8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8ECu;
            // 0x16c8f0: 0xa6220770  sh          $v0, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8ec) {
            ctx->pc = 0x16C970u;
            goto label_16c970;
        }
    }
    ctx->pc = 0x16C8F4u;
label_16c8f4:
    // 0x16c8f4: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16c8f8:
    // 0x16c8f8: 0xc0a0ed8  jal         func_283B60
label_16c8fc:
    if (ctx->pc == 0x16C8FCu) {
        ctx->pc = 0x16C8FCu;
            // 0x16c8fc: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->pc = 0x16C900u;
        goto label_16c900;
    }
    ctx->pc = 0x16C8F8u;
    SET_GPR_U32(ctx, 31, 0x16C900u);
    ctx->pc = 0x16C8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8F8u;
            // 0x16c8fc: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C900u; }
        if (ctx->pc != 0x16C900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C900u; }
        if (ctx->pc != 0x16C900u) { return; }
    }
    ctx->pc = 0x16C900u;
label_16c900:
    // 0x16c900: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_16c904:
    if (ctx->pc == 0x16C904u) {
        ctx->pc = 0x16C908u;
        goto label_16c908;
    }
    ctx->pc = 0x16C900u;
    {
        const bool branch_taken_0x16c900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c900) {
            ctx->pc = 0x16C970u;
            goto label_16c970;
        }
    }
    ctx->pc = 0x16C908u;
label_16c908:
    // 0x16c908: 0x844212f0  lh          $v0, 0x12F0($v0)
    ctx->pc = 0x16c908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4848)));
label_16c90c:
    // 0x16c90c: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x16c90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_16c910:
    // 0x16c910: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x16c910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_16c914:
    // 0x16c914: 0xc077434  jal         func_1DD0D0
label_16c918:
    if (ctx->pc == 0x16C918u) {
        ctx->pc = 0x16C918u;
            // 0x16c918: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x16C91Cu;
        goto label_16c91c;
    }
    ctx->pc = 0x16C914u;
    SET_GPR_U32(ctx, 31, 0x16C91Cu);
    ctx->pc = 0x16C918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C914u;
            // 0x16c918: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0D0u;
    if (runtime->hasFunction(0x1DD0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C91Cu; }
        if (ctx->pc != 0x16C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPriorityLevelIndex__11CMonsterManFiPi_0x1dd0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C91Cu; }
        if (ctx->pc != 0x16C91Cu) { return; }
    }
    ctx->pc = 0x16C91Cu;
label_16c91c:
    // 0x16c91c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16c920:
    if (ctx->pc == 0x16C920u) {
        ctx->pc = 0x16C920u;
            // 0x16c920: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x16C924u;
        goto label_16c924;
    }
    ctx->pc = 0x16C91Cu;
    {
        const bool branch_taken_0x16c91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C91Cu;
            // 0x16c920: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c91c) {
            ctx->pc = 0x16C940u;
            goto label_16c940;
        }
    }
    ctx->pc = 0x16C924u;
label_16c924:
    // 0x16c924: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x16c924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
label_16c928:
    // 0x16c928: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x16c928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_16c92c:
    // 0x16c92c: 0xc063818  jal         func_18E060
label_16c930:
    if (ctx->pc == 0x16C930u) {
        ctx->pc = 0x16C930u;
            // 0x16c930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C934u;
        goto label_16c934;
    }
    ctx->pc = 0x16C92Cu;
    SET_GPR_U32(ctx, 31, 0x16C934u);
    ctx->pc = 0x16C930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C92Cu;
            // 0x16c930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C934u; }
        if (ctx->pc != 0x16C934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C934u; }
        if (ctx->pc != 0x16C934u) { return; }
    }
    ctx->pc = 0x16C934u;
label_16c934:
    // 0x16c934: 0x87a3007c  lh          $v1, 0x7C($sp)
    ctx->pc = 0x16c934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
label_16c938:
    // 0x16c938: 0x1000000d  b           . + 4 + (0xD << 2)
label_16c93c:
    if (ctx->pc == 0x16C93Cu) {
        ctx->pc = 0x16C93Cu;
            // 0x16c93c: 0xa6230770  sh          $v1, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x16C940u;
        goto label_16c940;
    }
    ctx->pc = 0x16C938u;
    {
        const bool branch_taken_0x16c938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C938u;
            // 0x16c93c: 0xa6230770  sh          $v1, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c938) {
            ctx->pc = 0x16C970u;
            goto label_16c970;
        }
    }
    ctx->pc = 0x16C940u;
label_16c940:
    // 0x16c940: 0x1000000b  b           . + 4 + (0xB << 2)
label_16c944:
    if (ctx->pc == 0x16C944u) {
        ctx->pc = 0x16C944u;
            // 0x16c944: 0xa6230770  sh          $v1, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x16C948u;
        goto label_16c948;
    }
    ctx->pc = 0x16C940u;
    {
        const bool branch_taken_0x16c940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C940u;
            // 0x16c944: 0xa6230770  sh          $v1, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c940) {
            ctx->pc = 0x16C970u;
            goto label_16c970;
        }
    }
    ctx->pc = 0x16C948u;
label_16c948:
    // 0x16c948: 0x86240770  lh          $a0, 0x770($s1)
    ctx->pc = 0x16c948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_16c94c:
    // 0x16c94c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c950:
    // 0x16c950: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_16c954:
    if (ctx->pc == 0x16C954u) {
        ctx->pc = 0x16C958u;
        goto label_16c958;
    }
    ctx->pc = 0x16C950u;
    {
        const bool branch_taken_0x16c950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c950) {
            ctx->pc = 0x16C970u;
            goto label_16c970;
        }
    }
    ctx->pc = 0x16C958u;
label_16c958:
    // 0x16c958: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x16c958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
label_16c95c:
    // 0x16c95c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x16c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_16c960:
    // 0x16c960: 0xc063818  jal         func_18E060
label_16c964:
    if (ctx->pc == 0x16C964u) {
        ctx->pc = 0x16C964u;
            // 0x16c964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C968u;
        goto label_16c968;
    }
    ctx->pc = 0x16C960u;
    SET_GPR_U32(ctx, 31, 0x16C968u);
    ctx->pc = 0x16C964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C960u;
            // 0x16c964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C968u; }
        if (ctx->pc != 0x16C968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C968u; }
        if (ctx->pc != 0x16C968u) { return; }
    }
    ctx->pc = 0x16C968u;
label_16c968:
    // 0x16c968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c96c:
    // 0x16c96c: 0xa6230772  sh          $v1, 0x772($s1)
    ctx->pc = 0x16c96cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 3));
label_16c970:
    // 0x16c970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16c974:
    // 0x16c974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c978:
    // 0x16c978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c97c:
    // 0x16c97c: 0x3e00008  jr          $ra
label_16c980:
    if (ctx->pc == 0x16C980u) {
        ctx->pc = 0x16C980u;
            // 0x16c980: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x16C984u;
        goto label_fallthrough_0x16c97c;
    }
    ctx->pc = 0x16C97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C97Cu;
            // 0x16c980: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16c97c:
    ctx->pc = 0x16C984u;
}
