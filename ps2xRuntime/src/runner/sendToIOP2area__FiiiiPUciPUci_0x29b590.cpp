#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sendToIOP2area__FiiiiPUciPUci
// Address: 0x29b590 - 0x29b6e0
void sendToIOP2area__FiiiiPUciPUci_0x29b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sendToIOP2area__FiiiiPUciPUci_0x29b590");
#endif

    switch (ctx->pc) {
        case 0x29b620u: goto label_29b620;
        case 0x29b630u: goto label_29b630;
        case 0x29b644u: goto label_29b644;
        case 0x29b668u: goto label_29b668;
        case 0x29b678u: goto label_29b678;
        case 0x29b68cu: goto label_29b68c;
        case 0x29b6a0u: goto label_29b6a0;
        case 0x29b6b0u: goto label_29b6b0;
        default: break;
    }

    ctx->pc = 0x29b590u;

    // 0x29b590: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29b594: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x29b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29b598: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29b59c: 0x12b1821  addu        $v1, $t1, $t3
    ctx->pc = 0x29b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x29b5a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29b5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29b5a4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x29b5a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29b5a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29b5ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29b5b0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29b5b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29b5b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29b5b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29b5c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29b5c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29b5c8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29b5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b5d0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x29b5d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b5d8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x29b5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5dc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B5DCu;
    {
        const bool branch_taken_0x29b5dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5DCu;
            // 0x29b5e0: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5dc) {
            ctx->pc = 0x29B604u;
            goto label_29b604;
        }
    }
    ctx->pc = 0x29B5E4u;
    // 0x29b5e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b5e8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x29b5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29b5ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B5ECu;
    {
        const bool branch_taken_0x29b5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5ECu;
            // 0x29b5f0: 0x701023  subu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5ec) {
            ctx->pc = 0x29B600u;
            goto label_29b600;
        }
    }
    ctx->pc = 0x29B5F4u;
    // 0x29b5f4: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x29b5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29b5f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B5F8u;
    {
        const bool branch_taken_0x29b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5F8u;
            // 0x29b5fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5f8) {
            ctx->pc = 0x29B604u;
            goto label_29b604;
        }
    }
    ctx->pc = 0x29B600u;
label_29b600:
    // 0x29b600: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x29b600u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_29b604:
    // 0x29b604: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x29b604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29b608: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29B608u;
    {
        const bool branch_taken_0x29b608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B608u;
            // 0x29b60c: 0x2b2b823  subu        $s7, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b608) {
            ctx->pc = 0x29B64Cu;
            goto label_29b64c;
        }
    }
    ctx->pc = 0x29B610u;
    // 0x29b610: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29b610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b614: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29b614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b618: 0xc0a6db8  jal         func_29B6E0
    ctx->pc = 0x29B618u;
    SET_GPR_U32(ctx, 31, 0x29B620u);
    ctx->pc = 0x29B61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B618u;
            // 0x29b61c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6E0u;
    if (runtime->hasFunction(0x29B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B620u; }
        if (ctx->pc != 0x29B620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP__FiPUci_0x29b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B620u; }
        if (ctx->pc != 0x29B620u) { return; }
    }
    ctx->pc = 0x29B620u;
label_29b620:
    // 0x29b620: 0x2752821  addu        $a1, $s3, $s5
    ctx->pc = 0x29b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x29b624: 0x2553023  subu        $a2, $s2, $s5
    ctx->pc = 0x29b624u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x29b628: 0xc0a6db8  jal         func_29B6E0
    ctx->pc = 0x29B628u;
    SET_GPR_U32(ctx, 31, 0x29B630u);
    ctx->pc = 0x29B62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B628u;
            // 0x29b62c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6E0u;
    if (runtime->hasFunction(0x29B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B630u; }
        if (ctx->pc != 0x29B630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP__FiPUci_0x29b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B630u; }
        if (ctx->pc != 0x29B630u) { return; }
    }
    ctx->pc = 0x29B630u;
label_29b630:
    // 0x29b630: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x29b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x29b634: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29b634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b638: 0x552023  subu        $a0, $v0, $s5
    ctx->pc = 0x29b638u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x29b63c: 0xc0a6db8  jal         func_29B6E0
    ctx->pc = 0x29B63Cu;
    SET_GPR_U32(ctx, 31, 0x29B644u);
    ctx->pc = 0x29B640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B63Cu;
            // 0x29b640: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6E0u;
    if (runtime->hasFunction(0x29B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B644u; }
        if (ctx->pc != 0x29B644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP__FiPUci_0x29b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B644u; }
        if (ctx->pc != 0x29B644u) { return; }
    }
    ctx->pc = 0x29B644u;
label_29b644:
    // 0x29b644: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x29B644u;
    {
        const bool branch_taken_0x29b644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B644u;
            // 0x29b648: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b644) {
            ctx->pc = 0x29B6B4u;
            goto label_29b6b4;
        }
    }
    ctx->pc = 0x29B64Cu;
label_29b64c:
    // 0x29b64c: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x29b64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x29b650: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29B650u;
    {
        const bool branch_taken_0x29b650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B650u;
            // 0x29b654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b650) {
            ctx->pc = 0x29B694u;
            goto label_29b694;
        }
    }
    ctx->pc = 0x29B658u;
    // 0x29b658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29b658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b65c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29b65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b660: 0xc0a6db8  jal         func_29B6E0
    ctx->pc = 0x29B660u;
    SET_GPR_U32(ctx, 31, 0x29B668u);
    ctx->pc = 0x29B664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B660u;
            // 0x29b664: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6E0u;
    if (runtime->hasFunction(0x29B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B668u; }
        if (ctx->pc != 0x29B668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP__FiPUci_0x29b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B668u; }
        if (ctx->pc != 0x29B668u) { return; }
    }
    ctx->pc = 0x29B668u;
label_29b668:
    // 0x29b668: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x29b668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x29b66c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29b66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b670: 0xc0a6db8  jal         func_29B6E0
    ctx->pc = 0x29B670u;
    SET_GPR_U32(ctx, 31, 0x29B678u);
    ctx->pc = 0x29B674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B670u;
            // 0x29b674: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6E0u;
    if (runtime->hasFunction(0x29B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B678u; }
        if (ctx->pc != 0x29B678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP__FiPUci_0x29b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B678u; }
        if (ctx->pc != 0x29B678u) { return; }
    }
    ctx->pc = 0x29B678u;
label_29b678:
    // 0x29b678: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x29b678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x29b67c: 0x2173023  subu        $a2, $s0, $s7
    ctx->pc = 0x29b67cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x29b680: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x29b680u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29b684: 0xc0a6db8  jal         func_29B6E0
    ctx->pc = 0x29B684u;
    SET_GPR_U32(ctx, 31, 0x29B68Cu);
    ctx->pc = 0x29B688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B684u;
            // 0x29b688: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6E0u;
    if (runtime->hasFunction(0x29B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B68Cu; }
        if (ctx->pc != 0x29B68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP__FiPUci_0x29b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B68Cu; }
        if (ctx->pc != 0x29B68Cu) { return; }
    }
    ctx->pc = 0x29B68Cu;
label_29b68c:
    // 0x29b68c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29B68Cu;
    {
        const bool branch_taken_0x29b68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b68c) {
            ctx->pc = 0x29B6B0u;
            goto label_29b6b0;
        }
    }
    ctx->pc = 0x29B694u;
label_29b694:
    // 0x29b694: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b698: 0xc0a6db8  jal         func_29B6E0
    ctx->pc = 0x29B698u;
    SET_GPR_U32(ctx, 31, 0x29B6A0u);
    ctx->pc = 0x29B69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B698u;
            // 0x29b69c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6E0u;
    if (runtime->hasFunction(0x29B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6A0u; }
        if (ctx->pc != 0x29B6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP__FiPUci_0x29b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6A0u; }
        if (ctx->pc != 0x29B6A0u) { return; }
    }
    ctx->pc = 0x29B6A0u;
label_29b6a0:
    // 0x29b6a0: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x29b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x29b6a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29b6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6a8: 0xc0a6db8  jal         func_29B6E0
    ctx->pc = 0x29B6A8u;
    SET_GPR_U32(ctx, 31, 0x29B6B0u);
    ctx->pc = 0x29B6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6A8u;
            // 0x29b6ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6E0u;
    if (runtime->hasFunction(0x29B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6B0u; }
        if (ctx->pc != 0x29B6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP__FiPUci_0x29b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6B0u; }
        if (ctx->pc != 0x29B6B0u) { return; }
    }
    ctx->pc = 0x29B6B0u;
label_29b6b0:
    // 0x29b6b0: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x29b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_29b6b4:
    // 0x29b6b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29b6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29b6b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29b6b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b6bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29b6bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b6c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29b6c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b6c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29b6c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b6c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29b6c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b6cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29b6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x29B6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6D8u;
            // 0x29b6dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B6E0u;
}
