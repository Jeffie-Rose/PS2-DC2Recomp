#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckScoop__17CScoopDataManagerFv
// Address: 0x1ff5f0 - 0x1ff6f8
void CheckScoop__17CScoopDataManagerFv_0x1ff5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckScoop__17CScoopDataManagerFv_0x1ff5f0");
#endif

    switch (ctx->pc) {
        case 0x1ff610u: goto label_1ff610;
        case 0x1ff62cu: goto label_1ff62c;
        case 0x1ff634u: goto label_1ff634;
        case 0x1ff654u: goto label_1ff654;
        case 0x1ff688u: goto label_1ff688;
        case 0x1ff690u: goto label_1ff690;
        case 0x1ff6a4u: goto label_1ff6a4;
        case 0x1ff6d8u: goto label_1ff6d8;
        default: break;
    }

    ctx->pc = 0x1ff5f0u;

    // 0x1ff5f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ff5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ff5f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ff5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ff5f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ff5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ff5fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ff5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ff600: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ff600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff608: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x1FF608u;
    SET_GPR_U32(ctx, 31, 0x1FF610u);
    ctx->pc = 0x1FF60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF608u;
            // 0x1ff60c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF610u; }
        if (ctx->pc != 0x1FF610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF610u; }
        if (ctx->pc != 0x1FF610u) { return; }
    }
    ctx->pc = 0x1FF610u;
label_1ff610:
    // 0x1ff610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff614: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF614u;
    {
        const bool branch_taken_0x1ff614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF614u;
            // 0x1ff618: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff614) {
            ctx->pc = 0x1FF624u;
            goto label_1ff624;
        }
    }
    ctx->pc = 0x1FF61Cu;
    // 0x1ff61c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1FF61Cu;
    {
        const bool branch_taken_0x1ff61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF61Cu;
            // 0x1ff620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff61c) {
            ctx->pc = 0x1FF6DCu;
            goto label_1ff6dc;
        }
    }
    ctx->pc = 0x1FF624u;
label_1ff624:
    // 0x1ff624: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ff624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff62c:
    // 0x1ff62c: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x1FF62Cu;
    SET_GPR_U32(ctx, 31, 0x1FF634u);
    ctx->pc = 0x1FF630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF62Cu;
            // 0x1ff630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF634u; }
        if (ctx->pc != 0x1FF634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF634u; }
        if (ctx->pc != 0x1FF634u) { return; }
    }
    ctx->pc = 0x1FF634u;
label_1ff634:
    // 0x1ff634: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FF634u;
    {
        const bool branch_taken_0x1ff634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff634) {
            ctx->pc = 0x1FF670u;
            goto label_1ff670;
        }
    }
    ctx->pc = 0x1FF63Cu;
    // 0x1ff63c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1ff63cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff640: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF640u;
    {
        const bool branch_taken_0x1ff640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff640) {
            ctx->pc = 0x1FF670u;
            goto label_1ff670;
        }
    }
    ctx->pc = 0x1FF648u;
    // 0x1ff648: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1ff648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1ff64c: 0xc07fd28  jal         func_1FF4A0
    ctx->pc = 0x1FF64Cu;
    SET_GPR_U32(ctx, 31, 0x1FF654u);
    ctx->pc = 0x1FF650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF64Cu;
            // 0x1ff650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4A0u;
    if (runtime->hasFunction(0x1FF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF654u; }
        if (ctx->pc != 0x1FF654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF654u; }
        if (ctx->pc != 0x1FF654u) { return; }
    }
    ctx->pc = 0x1FF654u;
label_1ff654:
    // 0x1ff654: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF654u;
    {
        const bool branch_taken_0x1ff654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff654) {
            ctx->pc = 0x1FF670u;
            goto label_1ff670;
        }
    }
    ctx->pc = 0x1FF65Cu;
    // 0x1ff65c: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x1ff65cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ff660: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF660u;
    {
        const bool branch_taken_0x1ff660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF660u;
            // 0x1ff664: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff660) {
            ctx->pc = 0x1FF670u;
            goto label_1ff670;
        }
    }
    ctx->pc = 0x1FF668u;
    // 0x1ff668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ff668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ff66c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ff66cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ff670:
    // 0x1ff670: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ff670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ff674: 0x2a42001e  slti        $v0, $s2, 0x1E
    ctx->pc = 0x1ff674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1ff678: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FF678u;
    {
        const bool branch_taken_0x1ff678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF678u;
            // 0x1ff67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff678) {
            ctx->pc = 0x1FF62Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff62c;
        }
    }
    ctx->pc = 0x1FF680u;
    // 0x1ff680: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ff680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff688:
    // 0x1ff688: 0xc07fb00  jal         func_1FEC00
    ctx->pc = 0x1FF688u;
    SET_GPR_U32(ctx, 31, 0x1FF690u);
    ctx->pc = 0x1FF68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF688u;
            // 0x1ff68c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC00u;
    if (runtime->hasFunction(0x1FEC00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF690u; }
        if (ctx->pc != 0x1FF690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaID__15CInventUserDataFi_0x1fec00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF690u; }
        if (ctx->pc != 0x1FF690u) { return; }
    }
    ctx->pc = 0x1FF690u;
label_1ff690:
    // 0x1ff690: 0x284303e8  slti        $v1, $v0, 0x3E8
    ctx->pc = 0x1ff690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1ff694: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FF694u;
    {
        const bool branch_taken_0x1ff694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF694u;
            // 0x1ff698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff694) {
            ctx->pc = 0x1FF6C0u;
            goto label_1ff6c0;
        }
    }
    ctx->pc = 0x1FF69Cu;
    // 0x1ff69c: 0xc07fd28  jal         func_1FF4A0
    ctx->pc = 0x1FF69Cu;
    SET_GPR_U32(ctx, 31, 0x1FF6A4u);
    ctx->pc = 0x1FF6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF69Cu;
            // 0x1ff6a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4A0u;
    if (runtime->hasFunction(0x1FF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF6A4u; }
        if (ctx->pc != 0x1FF6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF6A4u; }
        if (ctx->pc != 0x1FF6A4u) { return; }
    }
    ctx->pc = 0x1FF6A4u;
label_1ff6a4:
    // 0x1ff6a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF6A4u;
    {
        const bool branch_taken_0x1ff6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff6a4) {
            ctx->pc = 0x1FF6C0u;
            goto label_1ff6c0;
        }
    }
    ctx->pc = 0x1FF6ACu;
    // 0x1ff6ac: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x1ff6acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ff6b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF6B0u;
    {
        const bool branch_taken_0x1ff6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF6B0u;
            // 0x1ff6b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6b0) {
            ctx->pc = 0x1FF6C0u;
            goto label_1ff6c0;
        }
    }
    ctx->pc = 0x1FF6B8u;
    // 0x1ff6b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ff6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ff6bc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ff6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ff6c0:
    // 0x1ff6c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ff6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ff6c4: 0x2a420200  slti        $v0, $s2, 0x200
    ctx->pc = 0x1ff6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1ff6c8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FF6C8u;
    {
        const bool branch_taken_0x1ff6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF6C8u;
            // 0x1ff6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6c8) {
            ctx->pc = 0x1FF688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff688;
        }
    }
    ctx->pc = 0x1FF6D0u;
    // 0x1ff6d0: 0xc07fec0  jal         func_1FFB00
    ctx->pc = 0x1FF6D0u;
    SET_GPR_U32(ctx, 31, 0x1FF6D8u);
    ctx->pc = 0x1FFB00u;
    if (runtime->hasFunction(0x1FFB00u)) {
        auto targetFn = runtime->lookupFunction(0x1FFB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF6D8u; }
        if (ctx->pc != 0x1FF6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPhotoFlag__Fv_0x1ffb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF6D8u; }
        if (ctx->pc != 0x1FF6D8u) { return; }
    }
    ctx->pc = 0x1FF6D8u;
label_1ff6d8:
    // 0x1ff6d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ff6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ff6dc:
    // 0x1ff6dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ff6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff6e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ff6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff6e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ff6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff6e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff6ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF6F0u;
            // 0x1ff6f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF6F8u;
}
