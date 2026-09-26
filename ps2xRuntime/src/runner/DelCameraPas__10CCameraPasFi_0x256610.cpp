#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DelCameraPas__10CCameraPasFi
// Address: 0x256610 - 0x2566e8
void DelCameraPas__10CCameraPasFi_0x256610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DelCameraPas__10CCameraPasFi_0x256610");
#endif

    switch (ctx->pc) {
        case 0x25664cu: goto label_25664c;
        case 0x25666cu: goto label_25666c;
        case 0x256678u: goto label_256678;
        case 0x25668cu: goto label_25668c;
        case 0x256694u: goto label_256694;
        default: break;
    }

    ctx->pc = 0x256610u;

    // 0x256610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x256610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x256614: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x256614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x256618: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x256618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25661c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x256620: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x256620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x256624: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x256628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25662c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256630u;
    {
        const bool branch_taken_0x256630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256630u;
            // 0x256634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256630) {
            ctx->pc = 0x256640u;
            goto label_256640;
        }
    }
    ctx->pc = 0x256638u;
    // 0x256638: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x256638u;
    {
        const bool branch_taken_0x256638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25663Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256638u;
            // 0x25663c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256638) {
            ctx->pc = 0x2566C8u;
            goto label_2566c8;
        }
    }
    ctx->pc = 0x256640u;
label_256640:
    // 0x256640: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x256640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256644: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x256644u;
    {
        const bool branch_taken_0x256644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256644u;
            // 0x256648: 0x59100  sll         $s2, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256644) {
            ctx->pc = 0x2566A0u;
            goto label_2566a0;
        }
    }
    ctx->pc = 0x25664Cu;
label_25664c:
    // 0x25664c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x25664Cu;
    {
        const bool branch_taken_0x25664c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x256650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25664Cu;
            // 0x256650: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25664c) {
            ctx->pc = 0x256680u;
            goto label_256680;
        }
    }
    ctx->pc = 0x256654u;
    // 0x256654: 0x212a021  addu        $s4, $s0, $s2
    ctx->pc = 0x256654u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x256658: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25665c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256660: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x256660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x256664: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256664u;
    SET_GPR_U32(ctx, 31, 0x25666Cu);
    ctx->pc = 0x256668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256664u;
            // 0x256668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25666Cu; }
        if (ctx->pc != 0x25666Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25666Cu; }
        if (ctx->pc != 0x25666Cu) { return; }
    }
    ctx->pc = 0x25666Cu;
label_25666c:
    // 0x25666c: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x25666cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x256670: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256670u;
    SET_GPR_U32(ctx, 31, 0x256678u);
    ctx->pc = 0x256674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256670u;
            // 0x256674: 0x26650100  addiu       $a1, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256678u; }
        if (ctx->pc != 0x256678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256678u; }
        if (ctx->pc != 0x256678u) { return; }
    }
    ctx->pc = 0x256678u;
label_256678:
    // 0x256678: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x256678u;
    {
        const bool branch_taken_0x256678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256678) {
            ctx->pc = 0x256694u;
            goto label_256694;
        }
    }
    ctx->pc = 0x256680u;
label_256680:
    // 0x256680: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x256680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x256684: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x256684u;
    SET_GPR_U32(ctx, 31, 0x25668Cu);
    ctx->pc = 0x256688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256684u;
            // 0x256688: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25668Cu; }
        if (ctx->pc != 0x25668Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25668Cu; }
        if (ctx->pc != 0x25668Cu) { return; }
    }
    ctx->pc = 0x25668Cu;
label_25668c:
    // 0x25668c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25668Cu;
    SET_GPR_U32(ctx, 31, 0x256694u);
    ctx->pc = 0x256690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25668Cu;
            // 0x256690: 0x26640100  addiu       $a0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256694u; }
        if (ctx->pc != 0x256694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256694u; }
        if (ctx->pc != 0x256694u) { return; }
    }
    ctx->pc = 0x256694u;
label_256694:
    // 0x256694: 0x0  nop
    ctx->pc = 0x256694u;
    // NOP
    // 0x256698: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x256698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x25669c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25669cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2566a0:
    // 0x2566a0: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x2566a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x2566a4: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x2566a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2566a8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2566A8u;
    {
        const bool branch_taken_0x2566a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2566ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2566A8u;
            // 0x2566ac: 0x2a210010  slti        $at, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566a8) {
            ctx->pc = 0x25664Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25664c;
        }
    }
    ctx->pc = 0x2566B0u;
    // 0x2566b0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2566b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2566b4: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x2566b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    // 0x2566b8: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x2566b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x2566bc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2566BCu;
    {
        const bool branch_taken_0x2566bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2566C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2566BCu;
            // 0x2566c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566bc) {
            ctx->pc = 0x2566C8u;
            goto label_2566c8;
        }
    }
    ctx->pc = 0x2566C4u;
    // 0x2566c4: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x2566c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_2566c8:
    // 0x2566c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2566c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2566cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2566ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2566d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2566d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2566d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2566d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2566d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2566d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2566dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2566dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2566e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2566E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2566E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2566E0u;
            // 0x2566e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2566E8u;
}
