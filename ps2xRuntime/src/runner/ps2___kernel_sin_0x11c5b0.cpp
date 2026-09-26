#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __kernel_sin
// Address: 0x11c5b0 - 0x11c784
void ps2___kernel_sin_0x11c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_sin_0x11c5b0");
#endif

    switch (ctx->pc) {
        case 0x11c608u: goto label_11c608;
        case 0x11c624u: goto label_11c624;
        case 0x11c634u: goto label_11c634;
        case 0x11c648u: goto label_11c648;
        case 0x11c658u: goto label_11c658;
        case 0x11c664u: goto label_11c664;
        case 0x11c674u: goto label_11c674;
        case 0x11c680u: goto label_11c680;
        case 0x11c690u: goto label_11c690;
        case 0x11c69cu: goto label_11c69c;
        case 0x11c6acu: goto label_11c6ac;
        case 0x11c6c0u: goto label_11c6c0;
        case 0x11c6d0u: goto label_11c6d0;
        case 0x11c6dcu: goto label_11c6dc;
        case 0x11c6e8u: goto label_11c6e8;
        case 0x11c700u: goto label_11c700;
        case 0x11c710u: goto label_11c710;
        case 0x11c71cu: goto label_11c71c;
        case 0x11c728u: goto label_11c728;
        case 0x11c734u: goto label_11c734;
        case 0x11c748u: goto label_11c748;
        case 0x11c754u: goto label_11c754;
        case 0x11c760u: goto label_11c760;
        default: break;
    }

    ctx->pc = 0x11c5b0u;

    // 0x11c5b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11c5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11c5b4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11c5b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11c5bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11c5bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c5c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11c5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11c5cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11c5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11c5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11c5d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11c5d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11c5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11c5dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11c5e0: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x11c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x11c5e4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11c5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x11c5e8: 0x3c033e3f  lui         $v1, 0x3E3F
    ctx->pc = 0x11c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15935 << 16));
    // 0x11c5ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11c5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x11c5f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11c5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11c5f4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11c5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11c5f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C5F8u;
    {
        const bool branch_taken_0x11c5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5F8u;
            // 0x11c5fc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5f8) {
            ctx->pc = 0x11C618u;
            goto label_11c618;
        }
    }
    ctx->pc = 0x11C600u;
    // 0x11c600: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11C600u;
    SET_GPR_U32(ctx, 31, 0x11C608u);
    ctx->pc = 0x11C604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C600u;
            // 0x11c604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C608u; }
        if (ctx->pc != 0x11C608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C608u; }
        if (ctx->pc != 0x11C608u) { return; }
    }
    ctx->pc = 0x11C608u;
label_11c608:
    // 0x11c608: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C608u;
    {
        const bool branch_taken_0x11c608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C608u;
            // 0x11c60c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c608) {
            ctx->pc = 0x11C61Cu;
            goto label_11c61c;
        }
    }
    ctx->pc = 0x11C610u;
    // 0x11c610: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x11C610u;
    {
        const bool branch_taken_0x11c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C610u;
            // 0x11c614: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c610) {
            ctx->pc = 0x11C760u;
            goto label_11c760;
        }
    }
    ctx->pc = 0x11C618u;
label_11c618:
    // 0x11c618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11c61c:
    // 0x11c61c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C61Cu;
    SET_GPR_U32(ctx, 31, 0x11C624u);
    ctx->pc = 0x11C620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C61Cu;
            // 0x11c620: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C624u; }
        if (ctx->pc != 0x11C624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C624u; }
        if (ctx->pc != 0x11C624u) { return; }
    }
    ctx->pc = 0x11C624u;
label_11c624:
    // 0x11c624: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11c624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c628: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11c628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c62c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C62Cu;
    SET_GPR_U32(ctx, 31, 0x11C634u);
    ctx->pc = 0x11C630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C62Cu;
            // 0x11c630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C634u; }
        if (ctx->pc != 0x11C634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C634u; }
        if (ctx->pc != 0x11C634u) { return; }
    }
    ctx->pc = 0x11C634u;
label_11c634:
    // 0x11c634: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11c634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11c638: 0xdc251798  ld          $a1, 0x1798($at)
    ctx->pc = 0x11c638u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6040)));
    // 0x11c63c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11c63cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c640: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C640u;
    SET_GPR_U32(ctx, 31, 0x11C648u);
    ctx->pc = 0x11C644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C640u;
            // 0x11c644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C648u; }
        if (ctx->pc != 0x11C648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C648u; }
        if (ctx->pc != 0x11C648u) { return; }
    }
    ctx->pc = 0x11C648u;
label_11c648:
    // 0x11c648: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11c64c: 0xdc2517a0  ld          $a1, 0x17A0($at)
    ctx->pc = 0x11c64cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6048)));
    // 0x11c650: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C650u;
    SET_GPR_U32(ctx, 31, 0x11C658u);
    ctx->pc = 0x11C654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C650u;
            // 0x11c654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C658u; }
        if (ctx->pc != 0x11C658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C658u; }
        if (ctx->pc != 0x11C658u) { return; }
    }
    ctx->pc = 0x11C658u;
label_11c658:
    // 0x11c658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c65c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C65Cu;
    SET_GPR_U32(ctx, 31, 0x11C664u);
    ctx->pc = 0x11C660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C65Cu;
            // 0x11c660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C664u; }
        if (ctx->pc != 0x11C664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C664u; }
        if (ctx->pc != 0x11C664u) { return; }
    }
    ctx->pc = 0x11C664u;
label_11c664:
    // 0x11c664: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11c664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11c668: 0xdc2517a8  ld          $a1, 0x17A8($at)
    ctx->pc = 0x11c668u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6056)));
    // 0x11c66c: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C66Cu;
    SET_GPR_U32(ctx, 31, 0x11C674u);
    ctx->pc = 0x11C670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C66Cu;
            // 0x11c670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C674u; }
        if (ctx->pc != 0x11C674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C674u; }
        if (ctx->pc != 0x11C674u) { return; }
    }
    ctx->pc = 0x11C674u;
label_11c674:
    // 0x11c674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c678: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C678u;
    SET_GPR_U32(ctx, 31, 0x11C680u);
    ctx->pc = 0x11C67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C678u;
            // 0x11c67c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C680u; }
        if (ctx->pc != 0x11C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C680u; }
        if (ctx->pc != 0x11C680u) { return; }
    }
    ctx->pc = 0x11C680u;
label_11c680:
    // 0x11c680: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11c680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11c684: 0xdc2517b0  ld          $a1, 0x17B0($at)
    ctx->pc = 0x11c684u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6064)));
    // 0x11c688: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C688u;
    SET_GPR_U32(ctx, 31, 0x11C690u);
    ctx->pc = 0x11C68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C688u;
            // 0x11c68c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C690u; }
        if (ctx->pc != 0x11C690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C690u; }
        if (ctx->pc != 0x11C690u) { return; }
    }
    ctx->pc = 0x11C690u;
label_11c690:
    // 0x11c690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c694: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C694u;
    SET_GPR_U32(ctx, 31, 0x11C69Cu);
    ctx->pc = 0x11C698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C694u;
            // 0x11c698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C69Cu; }
        if (ctx->pc != 0x11C69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C69Cu; }
        if (ctx->pc != 0x11C69Cu) { return; }
    }
    ctx->pc = 0x11C69Cu;
label_11c69c:
    // 0x11c69c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11c69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11c6a0: 0xdc2517b8  ld          $a1, 0x17B8($at)
    ctx->pc = 0x11c6a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6072)));
    // 0x11c6a4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C6A4u;
    SET_GPR_U32(ctx, 31, 0x11C6ACu);
    ctx->pc = 0x11C6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6A4u;
            // 0x11c6a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6ACu; }
        if (ctx->pc != 0x11C6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6ACu; }
        if (ctx->pc != 0x11C6ACu) { return; }
    }
    ctx->pc = 0x11C6ACu;
label_11c6ac:
    // 0x11c6ac: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11C6ACu;
    {
        const bool branch_taken_0x11c6ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6ACu;
            // 0x11c6b0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6ac) {
            ctx->pc = 0x11C6F0u;
            goto label_11c6f0;
        }
    }
    ctx->pc = 0x11C6B4u;
    // 0x11c6b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6b8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C6B8u;
    SET_GPR_U32(ctx, 31, 0x11C6C0u);
    ctx->pc = 0x11C6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6B8u;
            // 0x11c6bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6C0u; }
        if (ctx->pc != 0x11C6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6C0u; }
        if (ctx->pc != 0x11C6C0u) { return; }
    }
    ctx->pc = 0x11C6C0u;
label_11c6c0:
    // 0x11c6c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11c6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11c6c4: 0xdc2517c0  ld          $a1, 0x17C0($at)
    ctx->pc = 0x11c6c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6080)));
    // 0x11c6c8: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C6C8u;
    SET_GPR_U32(ctx, 31, 0x11C6D0u);
    ctx->pc = 0x11C6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6C8u;
            // 0x11c6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6D0u; }
        if (ctx->pc != 0x11C6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6D0u; }
        if (ctx->pc != 0x11C6D0u) { return; }
    }
    ctx->pc = 0x11C6D0u;
label_11c6d0:
    // 0x11c6d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11c6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6d4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C6D4u;
    SET_GPR_U32(ctx, 31, 0x11C6DCu);
    ctx->pc = 0x11C6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6D4u;
            // 0x11c6d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6DCu; }
        if (ctx->pc != 0x11C6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6DCu; }
        if (ctx->pc != 0x11C6DCu) { return; }
    }
    ctx->pc = 0x11C6DCu;
label_11c6dc:
    // 0x11c6dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6e0: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11C6E0u;
    SET_GPR_U32(ctx, 31, 0x11C6E8u);
    ctx->pc = 0x11C6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6E0u;
            // 0x11c6e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6E8u; }
        if (ctx->pc != 0x11C6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6E8u; }
        if (ctx->pc != 0x11C6E8u) { return; }
    }
    ctx->pc = 0x11C6E8u;
label_11c6e8:
    // 0x11c6e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11C6E8u;
    {
        const bool branch_taken_0x11c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6E8u;
            // 0x11c6ec: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6e8) {
            ctx->pc = 0x11C764u;
            goto label_11c764;
        }
    }
    ctx->pc = 0x11C6F0u;
label_11c6f0:
    // 0x11c6f0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x11c6f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11c6f4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11c6f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11c6f8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C6F8u;
    SET_GPR_U32(ctx, 31, 0x11C700u);
    ctx->pc = 0x11C6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C6F8u;
            // 0x11c6fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C700u; }
        if (ctx->pc != 0x11C700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C700u; }
        if (ctx->pc != 0x11C700u) { return; }
    }
    ctx->pc = 0x11C700u;
label_11c700:
    // 0x11c700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c704: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11c704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c708: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C708u;
    SET_GPR_U32(ctx, 31, 0x11C710u);
    ctx->pc = 0x11C70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C708u;
            // 0x11c70c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C710u; }
        if (ctx->pc != 0x11C710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C710u; }
        if (ctx->pc != 0x11C710u) { return; }
    }
    ctx->pc = 0x11C710u;
label_11c710:
    // 0x11c710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c714: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C714u;
    SET_GPR_U32(ctx, 31, 0x11C71Cu);
    ctx->pc = 0x11C718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C714u;
            // 0x11c718: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C71Cu; }
        if (ctx->pc != 0x11C71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C71Cu; }
        if (ctx->pc != 0x11C71Cu) { return; }
    }
    ctx->pc = 0x11C71Cu;
label_11c71c:
    // 0x11c71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c720: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C720u;
    SET_GPR_U32(ctx, 31, 0x11C728u);
    ctx->pc = 0x11C724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C720u;
            // 0x11c724: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C728u; }
        if (ctx->pc != 0x11C728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C728u; }
        if (ctx->pc != 0x11C728u) { return; }
    }
    ctx->pc = 0x11C728u;
label_11c728:
    // 0x11c728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c72c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C72Cu;
    SET_GPR_U32(ctx, 31, 0x11C734u);
    ctx->pc = 0x11C730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C72Cu;
            // 0x11c730: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C734u; }
        if (ctx->pc != 0x11C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C734u; }
        if (ctx->pc != 0x11C734u) { return; }
    }
    ctx->pc = 0x11C734u;
label_11c734:
    // 0x11c734: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11c734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11c738: 0xdc2517c8  ld          $a1, 0x17C8($at)
    ctx->pc = 0x11c738u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 6088)));
    // 0x11c73c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c740: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11C740u;
    SET_GPR_U32(ctx, 31, 0x11C748u);
    ctx->pc = 0x11C744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C740u;
            // 0x11c744: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C748u; }
        if (ctx->pc != 0x11C748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C748u; }
        if (ctx->pc != 0x11C748u) { return; }
    }
    ctx->pc = 0x11C748u;
label_11c748:
    // 0x11c748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c74c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C74Cu;
    SET_GPR_U32(ctx, 31, 0x11C754u);
    ctx->pc = 0x11C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C74Cu;
            // 0x11c750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C754u; }
        if (ctx->pc != 0x11C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C754u; }
        if (ctx->pc != 0x11C754u) { return; }
    }
    ctx->pc = 0x11C754u;
label_11c754:
    // 0x11c754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c758: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11C758u;
    SET_GPR_U32(ctx, 31, 0x11C760u);
    ctx->pc = 0x11C75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C758u;
            // 0x11c75c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C760u; }
        if (ctx->pc != 0x11C760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C760u; }
        if (ctx->pc != 0x11C760u) { return; }
    }
    ctx->pc = 0x11C760u;
label_11c760:
    // 0x11c760: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11c760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11c764:
    // 0x11c764: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11c764u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c768: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11c768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c76c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11c76cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c770: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11c770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c774: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11c774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c77c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C77Cu;
            // 0x11c780: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C784u;
}
