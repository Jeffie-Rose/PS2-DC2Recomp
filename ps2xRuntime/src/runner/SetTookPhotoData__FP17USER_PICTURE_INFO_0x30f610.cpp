#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTookPhotoData__FP17USER_PICTURE_INFO
// Address: 0x30f610 - 0x30f6a0
void SetTookPhotoData__FP17USER_PICTURE_INFO_0x30f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTookPhotoData__FP17USER_PICTURE_INFO_0x30f610");
#endif

    switch (ctx->pc) {
        case 0x30f628u: goto label_30f628;
        case 0x30f630u: goto label_30f630;
        case 0x30f650u: goto label_30f650;
        case 0x30f658u: goto label_30f658;
        case 0x30f674u: goto label_30f674;
        case 0x30f680u: goto label_30f680;
        default: break;
    }

    ctx->pc = 0x30f610u;

    // 0x30f610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30f614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30f614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30f618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30f61c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30f61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30f620: 0xc0c3954  jal         func_30E550
    ctx->pc = 0x30F620u;
    SET_GPR_U32(ctx, 31, 0x30F628u);
    ctx->pc = 0x30F624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F620u;
            // 0x30f624: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E550u;
    if (runtime->hasFunction(0x30E550u)) {
        auto targetFn = runtime->lookupFunction(0x30E550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F628u; }
        if (ctx->pc != 0x30F628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPhotoTitle__Fv_0x30e550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F628u; }
        if (ctx->pc != 0x30F628u) { return; }
    }
    ctx->pc = 0x30F628u;
label_30f628:
    // 0x30f628: 0xc07fe98  jal         func_1FFA60
    ctx->pc = 0x30F628u;
    SET_GPR_U32(ctx, 31, 0x30F630u);
    ctx->pc = 0x1FFA60u;
    if (runtime->hasFunction(0x1FFA60u)) {
        auto targetFn = runtime->lookupFunction(0x1FFA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F630u; }
        if (ctx->pc != 0x30F630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoNameCheck__FP17USER_PICTURE_INFO_0x1ffa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F630u; }
        if (ctx->pc != 0x30F630u) { return; }
    }
    ctx->pc = 0x30F630u;
label_30f630:
    // 0x30f630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30f630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f634: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x30F634u;
    {
        const bool branch_taken_0x30f634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f634) {
            ctx->pc = 0x30F68Cu;
            goto label_30f68c;
        }
    }
    ctx->pc = 0x30F63Cu;
    // 0x30f63c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x30f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x30f640: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f644: 0x2484dea0  addiu       $a0, $a0, -0x2160
    ctx->pc = 0x30f644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958752));
    // 0x30f648: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30F648u;
    SET_GPR_U32(ctx, 31, 0x30F650u);
    ctx->pc = 0x30F64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F648u;
            // 0x30f64c: 0xaf82a23c  sw          $v0, -0x5DC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F650u; }
        if (ctx->pc != 0x30F650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F650u; }
        if (ctx->pc != 0x30F650u) { return; }
    }
    ctx->pc = 0x30F650u;
label_30f650:
    // 0x30f650: 0xc064220  jal         func_190880
    ctx->pc = 0x30F650u;
    SET_GPR_U32(ctx, 31, 0x30F658u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F658u; }
        if (ctx->pc != 0x30F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F658u; }
        if (ctx->pc != 0x30F658u) { return; }
    }
    ctx->pc = 0x30F658u;
label_30f658:
    // 0x30f658: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30f658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x30f65c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f660: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x30f660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x30f664: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x30f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x30f668: 0x24507f30  addiu       $s0, $v0, 0x7F30
    ctx->pc = 0x30f668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
    // 0x30f66c: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x30F66Cu;
    SET_GPR_U32(ctx, 31, 0x30F674u);
    ctx->pc = 0x30F670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F66Cu;
            // 0x30f670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (runtime->hasFunction(0x1FEE00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F674u; }
        if (ctx->pc != 0x30F674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddShutterNum__15CInventUserDataFi_0x1fee00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F674u; }
        if (ctx->pc != 0x30F674u) { return; }
    }
    ctx->pc = 0x30F674u;
label_30f674:
    // 0x30f674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f678: 0xc07fbd0  jal         func_1FEF40
    ctx->pc = 0x30F678u;
    SET_GPR_U32(ctx, 31, 0x30F680u);
    ctx->pc = 0x30F67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F678u;
            // 0x30f67c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF40u;
    if (runtime->hasFunction(0x1FEF40u)) {
        auto targetFn = runtime->lookupFunction(0x1FEF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F680u; }
        if (ctx->pc != 0x30F680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelCheck__15CInventUserDataFP17USER_PICTURE_INFO_0x1fef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F680u; }
        if (ctx->pc != 0x30F680u) { return; }
    }
    ctx->pc = 0x30F680u;
label_30f680:
    // 0x30f680: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30F680u;
    {
        const bool branch_taken_0x30f680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F680u;
            // 0x30f684: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f680) {
            ctx->pc = 0x30F68Cu;
            goto label_30f68c;
        }
    }
    ctx->pc = 0x30F688u;
    // 0x30f688: 0xaf83a240  sw          $v1, -0x5DC0($gp)
    ctx->pc = 0x30f688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943296), GPR_U32(ctx, 3));
label_30f68c:
    // 0x30f68c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30f68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30f694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f698: 0x3e00008  jr          $ra
    ctx->pc = 0x30F698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F698u;
            // 0x30f69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F6A0u;
}
