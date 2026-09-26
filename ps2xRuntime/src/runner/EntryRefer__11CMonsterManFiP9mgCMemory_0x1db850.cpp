#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryRefer__11CMonsterManFiP9mgCMemory
// Address: 0x1db850 - 0x1db8f0
void EntryRefer__11CMonsterManFiP9mgCMemory_0x1db850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryRefer__11CMonsterManFiP9mgCMemory_0x1db850");
#endif

    switch (ctx->pc) {
        case 0x1db880u: goto label_1db880;
        case 0x1db888u: goto label_1db888;
        case 0x1db8acu: goto label_1db8ac;
        default: break;
    }

    ctx->pc = 0x1db850u;

    // 0x1db850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1db850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db854: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1db858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1db85c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1db85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db864: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1db864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db86c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1db86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db874: 0x12420015  beq         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DB874u;
    {
        const bool branch_taken_0x1db874 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DB878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB874u;
            // 0x1db878: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db874) {
            ctx->pc = 0x1DB8CCu;
            goto label_1db8cc;
        }
    }
    ctx->pc = 0x1DB87Cu;
    // 0x1db87c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db880:
    // 0x1db880: 0xc076de0  jal         func_1DB780
    ctx->pc = 0x1DB880u;
    SET_GPR_U32(ctx, 31, 0x1DB888u);
    ctx->pc = 0x1DB884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB880u;
            // 0x1db884: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB780u;
    if (runtime->hasFunction(0x1DB780u)) {
        auto targetFn = runtime->lookupFunction(0x1DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB888u; }
        if (ctx->pc != 0x1DB888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReferPtr2__11CMonsterManFi_0x1db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB888u; }
        if (ctx->pc != 0x1DB888u) { return; }
    }
    ctx->pc = 0x1DB888u;
label_1db888:
    // 0x1db888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1db888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db88c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB88Cu;
    {
        const bool branch_taken_0x1db88c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB88Cu;
            // 0x1db890: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db88c) {
            ctx->pc = 0x1DB89Cu;
            goto label_1db89c;
        }
    }
    ctx->pc = 0x1DB894u;
    // 0x1db894: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DB894u;
    {
        const bool branch_taken_0x1db894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB894u;
            // 0x1db898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db894) {
            ctx->pc = 0x1DB8D4u;
            goto label_1db8d4;
        }
    }
    ctx->pc = 0x1DB89Cu;
label_1db89c:
    // 0x1db89c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db8a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1db8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db8a4: 0xc076e3c  jal         func_1DB8F0
    ctx->pc = 0x1DB8A4u;
    SET_GPR_U32(ctx, 31, 0x1DB8ACu);
    ctx->pc = 0x1DB8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8A4u;
            // 0x1db8a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8F0u;
    if (runtime->hasFunction(0x1DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8ACu; }
        if (ctx->pc != 0x1DB8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadReferMonsterFile__11CMonsterManFiP16BASE_MONSTER_TBLP9mgCMemory_0x1db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8ACu; }
        if (ctx->pc != 0x1DB8ACu) { return; }
    }
    ctx->pc = 0x1DB8ACu;
label_1db8ac:
    // 0x1db8ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB8ACu;
    {
        const bool branch_taken_0x1db8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8ACu;
            // 0x1db8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8ac) {
            ctx->pc = 0x1DB8BCu;
            goto label_1db8bc;
        }
    }
    ctx->pc = 0x1DB8B4u;
    // 0x1db8b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB8B4u;
    {
        const bool branch_taken_0x1db8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8B4u;
            // 0x1db8b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8b4) {
            ctx->pc = 0x1DB8D8u;
            goto label_1db8d8;
        }
    }
    ctx->pc = 0x1DB8BCu;
label_1db8bc:
    // 0x1db8bc: 0x8e12009c  lw          $s2, 0x9C($s0)
    ctx->pc = 0x1db8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1db8c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db8c4: 0x1642ffee  bne         $s2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DB8C4u;
    {
        const bool branch_taken_0x1db8c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8C4u;
            // 0x1db8c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8c4) {
            ctx->pc = 0x1DB880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db880;
        }
    }
    ctx->pc = 0x1DB8CCu;
label_1db8cc:
    // 0x1db8cc: 0x0  nop
    ctx->pc = 0x1db8ccu;
    // NOP
    // 0x1db8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db8d4:
    // 0x1db8d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1db8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1db8d8:
    // 0x1db8d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1db8d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db8dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db8e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db8e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8E8u;
            // 0x1db8ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB8F0u;
}
