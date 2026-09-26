#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWeaponData__9CGameDataFi
// Address: 0x1957e0 - 0x19588c
void GetWeaponData__9CGameDataFi_0x1957e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWeaponData__9CGameDataFi_0x1957e0");
#endif

    switch (ctx->pc) {
        case 0x1957f8u: goto label_1957f8;
        case 0x195844u: goto label_195844;
        default: break;
    }

    ctx->pc = 0x1957e0u;

    // 0x1957e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1957e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1957e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1957e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1957e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1957e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1957ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1957ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957f0: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1957F0u;
    SET_GPR_U32(ctx, 31, 0x1957F8u);
    ctx->pc = 0x1957F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1957F0u;
            // 0x1957f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957F8u; }
        if (ctx->pc != 0x1957F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1957F8u; }
        if (ctx->pc != 0x1957F8u) { return; }
    }
    ctx->pc = 0x1957F8u;
label_1957f8:
    // 0x1957f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1957f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957fc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1957FCu;
    {
        const bool branch_taken_0x1957fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x195800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1957FCu;
            // 0x195800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957fc) {
            ctx->pc = 0x19580Cu;
            goto label_19580c;
        }
    }
    ctx->pc = 0x195804u;
    // 0x195804: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x195804u;
    {
        const bool branch_taken_0x195804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195804u;
            // 0x195808: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195804) {
            ctx->pc = 0x19587Cu;
            goto label_19587c;
        }
    }
    ctx->pc = 0x19580Cu;
label_19580c:
    // 0x19580c: 0x96230026  lhu         $v1, 0x26($s1)
    ctx->pc = 0x19580cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x195810: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x195810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195814: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x195814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195818: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195818u;
    {
        const bool branch_taken_0x195818 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195818u;
            // 0x19581c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195818) {
            ctx->pc = 0x195828u;
            goto label_195828;
        }
    }
    ctx->pc = 0x195820u;
    // 0x195820: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x195820u;
    {
        const bool branch_taken_0x195820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195820) {
            ctx->pc = 0x195878u;
            goto label_195878;
        }
    }
    ctx->pc = 0x195828u;
label_195828:
    // 0x195828: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x195828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19582c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19582Cu;
    {
        const bool branch_taken_0x19582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19582Cu;
            // 0x195830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19582c) {
            ctx->pc = 0x19583Cu;
            goto label_19583c;
        }
    }
    ctx->pc = 0x195834u;
    // 0x195834: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x195834u;
    {
        const bool branch_taken_0x195834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195834) {
            ctx->pc = 0x195878u;
            goto label_195878;
        }
    }
    ctx->pc = 0x19583Cu;
label_19583c:
    // 0x19583c: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x19583Cu;
    SET_GPR_U32(ctx, 31, 0x195844u);
    ctx->pc = 0x195840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19583Cu;
            // 0x195840: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195844u; }
        if (ctx->pc != 0x195844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195844u; }
        if (ctx->pc != 0x195844u) { return; }
    }
    ctx->pc = 0x195844u;
label_195844:
    // 0x195844: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195848: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195848u;
    {
        const bool branch_taken_0x195848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195848u;
            // 0x19584c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195848) {
            ctx->pc = 0x195858u;
            goto label_195858;
        }
    }
    ctx->pc = 0x195850u;
    // 0x195850: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x195850u;
    {
        const bool branch_taken_0x195850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195850) {
            ctx->pc = 0x195878u;
            goto label_195878;
        }
    }
    ctx->pc = 0x195858u;
label_195858:
    // 0x195858: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x195858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19585c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x19585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x195860: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x195864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195868: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x195868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19586c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_195878:
    // 0x195878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19587c:
    // 0x19587c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19587cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195884: 0x3e00008  jr          $ra
    ctx->pc = 0x195884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195884u;
            // 0x195888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19588Cu;
}
