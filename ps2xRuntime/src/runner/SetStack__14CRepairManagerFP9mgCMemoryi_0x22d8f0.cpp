#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStack__14CRepairManagerFP9mgCMemoryi
// Address: 0x22d8f0 - 0x22d9f8
void SetStack__14CRepairManagerFP9mgCMemoryi_0x22d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStack__14CRepairManagerFP9mgCMemoryi_0x22d8f0");
#endif

    switch (ctx->pc) {
        case 0x22d944u: goto label_22d944;
        case 0x22d964u: goto label_22d964;
        case 0x22d998u: goto label_22d998;
        case 0x22d9a4u: goto label_22d9a4;
        case 0x22d9d4u: goto label_22d9d4;
        default: break;
    }

    ctx->pc = 0x22d8f0u;

    // 0x22d8f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22d8f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22d8f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22d8fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22d900: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22d900u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d904: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22d908: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22d908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d90c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22d910: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22d910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22d918: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22d918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d920: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x22d920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x22d924: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22d924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d928: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x22d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x22d92c: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x22d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x22d930: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x22d930u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22d934: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x22d934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x22d938: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22d938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22d93c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22d940: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x22d940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22d944:
    // 0x22d944: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x22D944u;
    {
        const bool branch_taken_0x22d944 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d944) {
            ctx->pc = 0x22D964u;
            goto label_22d964;
        }
    }
    ctx->pc = 0x22D94Cu;
    // 0x22d94c: 0x2631b000  addiu       $s1, $s1, -0x5000
    ctx->pc = 0x22d94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946816));
    // 0x22d950: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x22d950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x22d954: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x22d954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x22d958: 0x2625b000  addiu       $a1, $s1, -0x5000
    ctx->pc = 0x22d958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946816));
    // 0x22d95c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x22D95Cu;
    SET_GPR_U32(ctx, 31, 0x22D964u);
    ctx->pc = 0x22D960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D95Cu;
            // 0x22d960: 0x24060500  addiu       $a2, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D964u; }
        if (ctx->pc != 0x22D964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D964u; }
        if (ctx->pc != 0x22D964u) { return; }
    }
    ctx->pc = 0x22D964u;
label_22d964:
    // 0x22d964: 0x0  nop
    ctx->pc = 0x22d964u;
    // NOP
    // 0x22d968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d96c: 0x1663000d  bne         $s3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22D96Cu;
    {
        const bool branch_taken_0x22d96c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x22d96c) {
            ctx->pc = 0x22D9A4u;
            goto label_22d9a4;
        }
    }
    ctx->pc = 0x22D974u;
    // 0x22d974: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x22d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x22d978: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x22d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x22d97c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x22d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x22d980: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x22d980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x22d984: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x22d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x22d988: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22d988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22d98c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x22d98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d990: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x22D990u;
    SET_GPR_U32(ctx, 31, 0x22D998u);
    ctx->pc = 0x22D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D990u;
            // 0x22d994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D998u; }
        if (ctx->pc != 0x22D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D998u; }
        if (ctx->pc != 0x22D998u) { return; }
    }
    ctx->pc = 0x22D998u;
label_22d998:
    // 0x22d998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22d998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d99c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22D99Cu;
    SET_GPR_U32(ctx, 31, 0x22D9A4u);
    ctx->pc = 0x22D9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D99Cu;
            // 0x22d9a0: 0x24050501  addiu       $a1, $zero, 0x501 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D9A4u; }
        if (ctx->pc != 0x22D9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D9A4u; }
        if (ctx->pc != 0x22D9A4u) { return; }
    }
    ctx->pc = 0x22D9A4u;
label_22d9a4:
    // 0x22d9a4: 0x0  nop
    ctx->pc = 0x22d9a4u;
    // NOP
    // 0x22d9a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22d9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22d9ac: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x22d9acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22d9b0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x22D9B0u;
    {
        const bool branch_taken_0x22d9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D9B0u;
            // 0x22d9b4: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9b0) {
            ctx->pc = 0x22D944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d944;
        }
    }
    ctx->pc = 0x22D9B8u;
    // 0x22d9b8: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D9B8u;
    {
        const bool branch_taken_0x22d9b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D9B8u;
            // 0x22d9bc: 0x3c01fffe  lui         $at, 0xFFFE (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9b8) {
            ctx->pc = 0x22D9D4u;
            goto label_22d9d4;
        }
    }
    ctx->pc = 0x22D9C0u;
    // 0x22d9c0: 0x26a401b4  addiu       $a0, $s5, 0x1B4
    ctx->pc = 0x22d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 436));
    // 0x22d9c4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x22d9c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x22d9c8: 0x24061800  addiu       $a2, $zero, 0x1800
    ctx->pc = 0x22d9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x22d9cc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x22D9CCu;
    SET_GPR_U32(ctx, 31, 0x22D9D4u);
    ctx->pc = 0x22D9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D9CCu;
            // 0x22d9d0: 0x2212821  addu        $a1, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D9D4u; }
        if (ctx->pc != 0x22D9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D9D4u; }
        if (ctx->pc != 0x22D9D4u) { return; }
    }
    ctx->pc = 0x22D9D4u;
label_22d9d4:
    // 0x22d9d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22d9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d9d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22d9d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d9dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22d9dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d9e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d9e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d9e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d9e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x22D9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D9F0u;
            // 0x22d9f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D9F8u;
}
