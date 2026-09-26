#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SortRecord__18CFishingTournamentFv
// Address: 0x19b040 - 0x19b118
void SortRecord__18CFishingTournamentFv_0x19b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SortRecord__18CFishingTournamentFv_0x19b040");
#endif

    switch (ctx->pc) {
        case 0x19b060u: goto label_19b060;
        case 0x19b084u: goto label_19b084;
        case 0x19b0acu: goto label_19b0ac;
        case 0x19b0c8u: goto label_19b0c8;
        case 0x19b0d8u: goto label_19b0d8;
        default: break;
    }

    ctx->pc = 0x19b040u;

    // 0x19b040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b04c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b054: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19b054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b05c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x19b05cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_19b060:
    // 0x19b060: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x19b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x19b064: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x19b064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19b068: 0x84630020  lh          $v1, 0x20($v1)
    ctx->pc = 0x19b068u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19b06c: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x19B06Cu;
    {
        const bool branch_taken_0x19b06c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x19B070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B06Cu;
            // 0x19b070: 0x28a1000a  slti        $at, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b06c) {
            ctx->pc = 0x19B0F0u;
            goto label_19b0f0;
        }
    }
    ctx->pc = 0x19B074u;
    // 0x19b074: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x19B074u;
    {
        const bool branch_taken_0x19b074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B074u;
            // 0x19b078: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b074) {
            ctx->pc = 0x19B0F0u;
            goto label_19b0f0;
        }
    }
    ctx->pc = 0x19B07Cu;
    // 0x19b07c: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x19b07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19b080: 0x0  nop
    ctx->pc = 0x19b080u;
    // NOP
label_19b084:
    // 0x19b084: 0x0  nop
    ctx->pc = 0x19b084u;
    // NOP
    // 0x19b088: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x19b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x19b08c: 0x84630024  lh          $v1, 0x24($v1)
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x19b090: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19b090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19b094: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B094u;
    {
        const bool branch_taken_0x19b094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b094) {
            ctx->pc = 0x19B0E0u;
            goto label_19b0e0;
        }
    }
    ctx->pc = 0x19B09Cu;
    // 0x19b09c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x19b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19b0a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0a4: 0xc049c18  jal         func_127060
    ctx->pc = 0x19B0A4u;
    SET_GPR_U32(ctx, 31, 0x19B0ACu);
    ctx->pc = 0x19B0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0A4u;
            // 0x19b0a8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0ACu; }
        if (ctx->pc != 0x19B0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0ACu; }
        if (ctx->pc != 0x19B0ACu) { return; }
    }
    ctx->pc = 0x19B0ACu;
label_19b0ac:
    // 0x19b0ac: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x19b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x19b0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b0b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x19b0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19b0bc: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x19b0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x19b0c0: 0xc049c18  jal         func_127060
    ctx->pc = 0x19B0C0u;
    SET_GPR_U32(ctx, 31, 0x19B0C8u);
    ctx->pc = 0x19B0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0C0u;
            // 0x19b0c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0C8u; }
        if (ctx->pc != 0x19B0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0C8u; }
        if (ctx->pc != 0x19B0C8u) { return; }
    }
    ctx->pc = 0x19B0C8u;
label_19b0c8:
    // 0x19b0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0cc: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x19b0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19b0d0: 0xc049c18  jal         func_127060
    ctx->pc = 0x19B0D0u;
    SET_GPR_U32(ctx, 31, 0x19B0D8u);
    ctx->pc = 0x19B0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0D0u;
            // 0x19b0d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0D8u; }
        if (ctx->pc != 0x19B0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0D8u; }
        if (ctx->pc != 0x19B0D8u) { return; }
    }
    ctx->pc = 0x19B0D8u;
label_19b0d8:
    // 0x19b0d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19B0D8u;
    {
        const bool branch_taken_0x19b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0D8u;
            // 0x19b0dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0d8) {
            ctx->pc = 0x19B0F0u;
            goto label_19b0f0;
        }
    }
    ctx->pc = 0x19B0E0u;
label_19b0e0:
    // 0x19b0e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19b0e4: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x19b0e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b0e8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x19B0E8u;
    {
        const bool branch_taken_0x19b0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0E8u;
            // 0x19b0ec: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0e8) {
            ctx->pc = 0x19B084u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b084;
        }
    }
    ctx->pc = 0x19B0F0u;
label_19b0f0:
    // 0x19b0f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b0f4: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x19b0f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b0f8: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x19B0F8u;
    {
        const bool branch_taken_0x19b0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0F8u;
            // 0x19b0fc: 0x530c0  sll         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0f8) {
            ctx->pc = 0x19B060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b060;
        }
    }
    ctx->pc = 0x19B100u;
    // 0x19b100: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19b100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b104: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b10c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b110: 0x3e00008  jr          $ra
    ctx->pc = 0x19B110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B110u;
            // 0x19b114: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B118u;
}
