#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCountSphedaClear__Fv
// Address: 0x2fa820 - 0x2fa8c0
void GetCountSphedaClear__Fv_0x2fa820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCountSphedaClear__Fv_0x2fa820");
#endif

    switch (ctx->pc) {
        case 0x2fa83cu: goto label_2fa83c;
        case 0x2fa858u: goto label_2fa858;
        case 0x2fa868u: goto label_2fa868;
        default: break;
    }

    ctx->pc = 0x2fa820u;

    // 0x2fa820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fa820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fa824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fa824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2fa828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fa828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fa82c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fa82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fa830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa834: 0xc08ca98  jal         func_232A60
    ctx->pc = 0x2FA834u;
    SET_GPR_U32(ctx, 31, 0x2FA83Cu);
    ctx->pc = 0x2FA838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA834u;
            // 0x2fa838: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A60u;
    if (runtime->hasFunction(0x232A60u)) {
        auto targetFn = runtime->lookupFunction(0x232A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA83Cu; }
        if (ctx->pc != 0x2FA83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetSaveDataDungeon__Fv_0x232a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA83Cu; }
        if (ctx->pc != 0x2FA83Cu) { return; }
    }
    ctx->pc = 0x2FA83Cu;
label_2fa83c:
    // 0x2fa83c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fa83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa840: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA840u;
    {
        const bool branch_taken_0x2fa840 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA840u;
            // 0x2fa844: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa840) {
            ctx->pc = 0x2FA850u;
            goto label_2fa850;
        }
    }
    ctx->pc = 0x2FA848u;
    // 0x2fa848: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2FA848u;
    {
        const bool branch_taken_0x2fa848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA848u;
            // 0x2fa84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa848) {
            ctx->pc = 0x2FA8A4u;
            goto label_2fa8a4;
        }
    }
    ctx->pc = 0x2FA850u;
label_2fa850:
    // 0x2fa850: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fa850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa854: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fa854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa858:
    // 0x2fa858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fa858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa85c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa860: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2FA860u;
    SET_GPR_U32(ctx, 31, 0x2FA868u);
    ctx->pc = 0x2FA864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA860u;
            // 0x2fa864: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA868u; }
        if (ctx->pc != 0x2FA868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA868u; }
        if (ctx->pc != 0x2FA868u) { return; }
    }
    ctx->pc = 0x2FA868u;
label_2fa868:
    // 0x2fa868: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA868u;
    {
        const bool branch_taken_0x2fa868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa868) {
            ctx->pc = 0x2FA890u;
            goto label_2fa890;
        }
    }
    ctx->pc = 0x2FA870u;
    // 0x2fa870: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x2fa870u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2fa874: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA874u;
    {
        const bool branch_taken_0x2fa874 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fa874) {
            ctx->pc = 0x2FA880u;
            goto label_2fa880;
        }
    }
    ctx->pc = 0x2FA87Cu;
    // 0x2fa87c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fa87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2fa880:
    // 0x2fa880: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fa880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2fa884: 0x2a620028  slti        $v0, $s3, 0x28
    ctx->pc = 0x2fa884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2fa888: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2FA888u;
    {
        const bool branch_taken_0x2fa888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa888) {
            ctx->pc = 0x2FA858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa858;
        }
    }
    ctx->pc = 0x2FA890u;
label_2fa890:
    // 0x2fa890: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fa890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fa894: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x2fa894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2fa898: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2FA898u;
    {
        const bool branch_taken_0x2fa898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA898u;
            // 0x2fa89c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa898) {
            ctx->pc = 0x2FA858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa858;
        }
    }
    ctx->pc = 0x2FA8A0u;
    // 0x2fa8a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fa8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa8a4:
    // 0x2fa8a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fa8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fa8a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fa8a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa8ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fa8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa8b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fa8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8B8u;
            // 0x2fa8bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA8C0u;
}
