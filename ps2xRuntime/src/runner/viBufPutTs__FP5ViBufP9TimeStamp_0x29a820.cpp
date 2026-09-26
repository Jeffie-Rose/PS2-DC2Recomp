#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufPutTs__FP5ViBufP9TimeStamp
// Address: 0x29a820 - 0x29a94c
void viBufPutTs__FP5ViBufP9TimeStamp_0x29a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufPutTs__FP5ViBufP9TimeStamp_0x29a820");
#endif

    switch (ctx->pc) {
        case 0x29a848u: goto label_29a848;
        case 0x29a864u: goto label_29a864;
        case 0x29a930u: goto label_29a930;
        default: break;
    }

    ctx->pc = 0x29a820u;

    // 0x29a820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29a828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29a82c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a830: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29a830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a83c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x29a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x29a840: 0xc044048  jal         func_110120
    ctx->pc = 0x29A840u;
    SET_GPR_U32(ctx, 31, 0x29A848u);
    ctx->pc = 0x29A844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A840u;
            // 0x29a844: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A848u; }
        if (ctx->pc != 0x29A848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A848u; }
        if (ctx->pc != 0x29A848u) { return; }
    }
    ctx->pc = 0x29A848u;
label_29a848:
    // 0x29a848: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x29a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x29a84c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x29a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x29a850: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x29a850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a854: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x29A854u;
    {
        const bool branch_taken_0x29a854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A854u;
            // 0x29a858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a854) {
            ctx->pc = 0x29A928u;
            goto label_29a928;
        }
    }
    ctx->pc = 0x29A85Cu;
    // 0x29a85c: 0xc0a69b4  jal         func_29A6D0
    ctx->pc = 0x29A85Cu;
    SET_GPR_U32(ctx, 31, 0x29A864u);
    ctx->pc = 0x29A860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A85Cu;
            // 0x29a860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A6D0u;
    if (runtime->hasFunction(0x29A6D0u)) {
        auto targetFn = runtime->lookupFunction(0x29A6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A864u; }
        if (ctx->pc != 0x29A864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufModifyPts__FP5ViBufP9TimeStamp_0x29a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A864u; }
        if (ctx->pc != 0x29A864u) { return; }
    }
    ctx->pc = 0x29A864u;
label_29a864:
    // 0x29a864: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x29a864u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a868: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A868u;
    {
        const bool branch_taken_0x29a868 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x29a868) {
            ctx->pc = 0x29A87Cu;
            goto label_29a87c;
        }
    }
    ctx->pc = 0x29A870u;
    // 0x29a870: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29a870u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29a874: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x29A874u;
    {
        const bool branch_taken_0x29a874 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29A878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A874u;
            // 0x29a878: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a874) {
            ctx->pc = 0x29A928u;
            goto label_29a928;
        }
    }
    ctx->pc = 0x29A87Cu;
label_29a87c:
    // 0x29a87c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x29a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29a880: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x29a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x29a884: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x29a884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x29a888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29a88c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x29a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29a890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a894: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x29a894u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x29a898: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x29a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29a89c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x29a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x29a8a0: 0xde050008  ld          $a1, 0x8($s0)
    ctx->pc = 0x29a8a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29a8a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29a8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a8ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29a8b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29a8b4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x29a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x29a8b8: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x29a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29a8bc: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x29a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x29a8c0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x29a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a8c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29a8c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a8cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29a8d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29a8d4: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x29a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x29a8d8: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x29a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29a8dc: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x29a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x29a8e0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x29a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29a8e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29a8e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a8ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29a8f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29a8f4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x29a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x29a8f8: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x29a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x29a8fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29a900: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x29a900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x29a904: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x29a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29a908: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x29a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x29a90c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29a910: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A910u;
    {
        const bool branch_taken_0x29a910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A910u;
            // 0x29a914: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a910) {
            ctx->pc = 0x29A91Cu;
            goto label_29a91c;
        }
    }
    ctx->pc = 0x29A918u;
    // 0x29a918: 0x1cd  break       0, 7
    ctx->pc = 0x29a918u;
    runtime->handleBreak(rdram, ctx);
label_29a91c:
    // 0x29a91c: 0x1010  mfhi        $v0
    ctx->pc = 0x29a91cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x29a920: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x29a920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x29a924: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29a924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a928:
    // 0x29a928: 0xc044040  jal         func_110100
    ctx->pc = 0x29A928u;
    SET_GPR_U32(ctx, 31, 0x29A930u);
    ctx->pc = 0x29A92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A928u;
            // 0x29a92c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A930u; }
        if (ctx->pc != 0x29A930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A930u; }
        if (ctx->pc != 0x29A930u) { return; }
    }
    ctx->pc = 0x29A930u;
label_29a930:
    // 0x29a930: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29a930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a938: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a93c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a944: 0x3e00008  jr          $ra
    ctx->pc = 0x29A944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A944u;
            // 0x29a948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A94Cu;
}
