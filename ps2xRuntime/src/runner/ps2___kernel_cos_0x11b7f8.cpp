#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __kernel_cos
// Address: 0x11b7f8 - 0x11ba44
void ps2___kernel_cos_0x11b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_cos_0x11b7f8");
#endif

    switch (ctx->pc) {
        case 0x11b850u: goto label_11b850;
        case 0x11b874u: goto label_11b874;
        case 0x11b888u: goto label_11b888;
        case 0x11b898u: goto label_11b898;
        case 0x11b8a4u: goto label_11b8a4;
        case 0x11b8b4u: goto label_11b8b4;
        case 0x11b8c0u: goto label_11b8c0;
        case 0x11b8d0u: goto label_11b8d0;
        case 0x11b8dcu: goto label_11b8dc;
        case 0x11b8ecu: goto label_11b8ec;
        case 0x11b8f8u: goto label_11b8f8;
        case 0x11b908u: goto label_11b908;
        case 0x11b914u: goto label_11b914;
        case 0x11b93cu: goto label_11b93c;
        case 0x11b94cu: goto label_11b94c;
        case 0x11b95cu: goto label_11b95c;
        case 0x11b968u: goto label_11b968;
        case 0x11b974u: goto label_11b974;
        case 0x11b9b8u: goto label_11b9b8;
        case 0x11b9c4u: goto label_11b9c4;
        case 0x11b9d8u: goto label_11b9d8;
        case 0x11b9e8u: goto label_11b9e8;
        case 0x11b9f8u: goto label_11b9f8;
        case 0x11ba04u: goto label_11ba04;
        case 0x11ba10u: goto label_11ba10;
        case 0x11ba1cu: goto label_11ba1c;
        default: break;
    }

    ctx->pc = 0x11b7f8u;

    // 0x11b7f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11b7fc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11b7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11b800: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11b800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11b804: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11b808: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11b808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b80c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11b810: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11b810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11b814: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11b818: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11b81c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11b820: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x11b820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b824: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x11b824u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11b828: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11b828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11b82c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11b82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11b830: 0x3c023e3f  lui         $v0, 0x3E3F
    ctx->pc = 0x11b830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15935 << 16));
    // 0x11b834: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x11b834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x11b838: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11b83c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11b83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b840: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B840u;
    {
        const bool branch_taken_0x11b840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B840u;
            // 0x11b844: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b840) {
            ctx->pc = 0x11B868u;
            goto label_11b868;
        }
    }
    ctx->pc = 0x11B848u;
    // 0x11b848: 0xc0a218a  jal         func_288628
    ctx->pc = 0x11B848u;
    SET_GPR_U32(ctx, 31, 0x11B850u);
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B850u; }
        if (ctx->pc != 0x11B850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B850u; }
        if (ctx->pc != 0x11B850u) { return; }
    }
    ctx->pc = 0x11B850u;
label_11b850:
    // 0x11b850: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B850u;
    {
        const bool branch_taken_0x11b850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B850u;
            // 0x11b854: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b850) {
            ctx->pc = 0x11B86Cu;
            goto label_11b86c;
        }
    }
    ctx->pc = 0x11B858u;
    // 0x11b858: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x11b858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11b85c: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x11b85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x11b860: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x11B860u;
    {
        const bool branch_taken_0x11b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B860u;
            // 0x11b864: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b860) {
            ctx->pc = 0x11BA20u;
            goto label_11ba20;
        }
    }
    ctx->pc = 0x11B868u;
label_11b868:
    // 0x11b868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11b868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11b86c:
    // 0x11b86c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B86Cu;
    SET_GPR_U32(ctx, 31, 0x11B874u);
    ctx->pc = 0x11B870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B86Cu;
            // 0x11b870: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B874u; }
        if (ctx->pc != 0x11B874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B874u; }
        if (ctx->pc != 0x11B874u) { return; }
    }
    ctx->pc = 0x11B874u;
label_11b874:
    // 0x11b874: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11b874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b878: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11b878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11b87c: 0xdc2516c0  ld          $a1, 0x16C0($at)
    ctx->pc = 0x11b87cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 5824)));
    // 0x11b880: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B880u;
    SET_GPR_U32(ctx, 31, 0x11B888u);
    ctx->pc = 0x11B884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B880u;
            // 0x11b884: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B888u; }
        if (ctx->pc != 0x11B888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B888u; }
        if (ctx->pc != 0x11B888u) { return; }
    }
    ctx->pc = 0x11B888u;
label_11b888:
    // 0x11b888: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11b888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11b88c: 0xdc2516c8  ld          $a1, 0x16C8($at)
    ctx->pc = 0x11b88cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 5832)));
    // 0x11b890: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11B890u;
    SET_GPR_U32(ctx, 31, 0x11B898u);
    ctx->pc = 0x11B894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B890u;
            // 0x11b894: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B898u; }
        if (ctx->pc != 0x11B898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B898u; }
        if (ctx->pc != 0x11B898u) { return; }
    }
    ctx->pc = 0x11B898u;
label_11b898:
    // 0x11b898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b89c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B89Cu;
    SET_GPR_U32(ctx, 31, 0x11B8A4u);
    ctx->pc = 0x11B8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B89Cu;
            // 0x11b8a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8A4u; }
        if (ctx->pc != 0x11B8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8A4u; }
        if (ctx->pc != 0x11B8A4u) { return; }
    }
    ctx->pc = 0x11B8A4u;
label_11b8a4:
    // 0x11b8a4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11b8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11b8a8: 0xdc2516d0  ld          $a1, 0x16D0($at)
    ctx->pc = 0x11b8a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 5840)));
    // 0x11b8ac: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11B8ACu;
    SET_GPR_U32(ctx, 31, 0x11B8B4u);
    ctx->pc = 0x11B8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8ACu;
            // 0x11b8b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8B4u; }
        if (ctx->pc != 0x11B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8B4u; }
        if (ctx->pc != 0x11B8B4u) { return; }
    }
    ctx->pc = 0x11B8B4u;
label_11b8b4:
    // 0x11b8b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8b8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B8B8u;
    SET_GPR_U32(ctx, 31, 0x11B8C0u);
    ctx->pc = 0x11B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8B8u;
            // 0x11b8bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8C0u; }
        if (ctx->pc != 0x11B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8C0u; }
        if (ctx->pc != 0x11B8C0u) { return; }
    }
    ctx->pc = 0x11B8C0u;
label_11b8c0:
    // 0x11b8c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11b8c4: 0xdc2516d8  ld          $a1, 0x16D8($at)
    ctx->pc = 0x11b8c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 5848)));
    // 0x11b8c8: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11B8C8u;
    SET_GPR_U32(ctx, 31, 0x11B8D0u);
    ctx->pc = 0x11B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8C8u;
            // 0x11b8cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8D0u; }
        if (ctx->pc != 0x11B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8D0u; }
        if (ctx->pc != 0x11B8D0u) { return; }
    }
    ctx->pc = 0x11B8D0u;
label_11b8d0:
    // 0x11b8d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8d4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B8D4u;
    SET_GPR_U32(ctx, 31, 0x11B8DCu);
    ctx->pc = 0x11B8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8D4u;
            // 0x11b8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8DCu; }
        if (ctx->pc != 0x11B8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8DCu; }
        if (ctx->pc != 0x11B8DCu) { return; }
    }
    ctx->pc = 0x11B8DCu;
label_11b8dc:
    // 0x11b8dc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11b8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11b8e0: 0xdc2516e0  ld          $a1, 0x16E0($at)
    ctx->pc = 0x11b8e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 5856)));
    // 0x11b8e4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11B8E4u;
    SET_GPR_U32(ctx, 31, 0x11B8ECu);
    ctx->pc = 0x11B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8E4u;
            // 0x11b8e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8ECu; }
        if (ctx->pc != 0x11B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8ECu; }
        if (ctx->pc != 0x11B8ECu) { return; }
    }
    ctx->pc = 0x11B8ECu;
label_11b8ec:
    // 0x11b8ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8f0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B8F0u;
    SET_GPR_U32(ctx, 31, 0x11B8F8u);
    ctx->pc = 0x11B8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8F0u;
            // 0x11b8f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8F8u; }
        if (ctx->pc != 0x11B8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8F8u; }
        if (ctx->pc != 0x11B8F8u) { return; }
    }
    ctx->pc = 0x11B8F8u;
label_11b8f8:
    // 0x11b8f8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11b8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11b8fc: 0xdc2516e8  ld          $a1, 0x16E8($at)
    ctx->pc = 0x11b8fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 5864)));
    // 0x11b900: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11B900u;
    SET_GPR_U32(ctx, 31, 0x11B908u);
    ctx->pc = 0x11B904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B900u;
            // 0x11b904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B908u; }
        if (ctx->pc != 0x11B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B908u; }
        if (ctx->pc != 0x11B908u) { return; }
    }
    ctx->pc = 0x11B908u;
label_11b908:
    // 0x11b908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b90c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B90Cu;
    SET_GPR_U32(ctx, 31, 0x11B914u);
    ctx->pc = 0x11B910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B90Cu;
            // 0x11b910: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B914u; }
        if (ctx->pc != 0x11B914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B914u; }
        if (ctx->pc != 0x11B914u) { return; }
    }
    ctx->pc = 0x11B914u;
label_11b914:
    // 0x11b914: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11b914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b918: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x11b918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x11b91c: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x11b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x11b920: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11b920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b924: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11B924u;
    {
        const bool branch_taken_0x11b924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B924u;
            // 0x11b928: 0x3c023fe9  lui         $v0, 0x3FE9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b924) {
            ctx->pc = 0x11B984u;
            goto label_11b984;
        }
    }
    ctx->pc = 0x11B92Cu;
    // 0x11b92c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x11b92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11b930: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11b930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11b934: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B934u;
    SET_GPR_U32(ctx, 31, 0x11B93Cu);
    ctx->pc = 0x11B938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B934u;
            // 0x11b938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B93Cu; }
        if (ctx->pc != 0x11B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B93Cu; }
        if (ctx->pc != 0x11B93Cu) { return; }
    }
    ctx->pc = 0x11B93Cu;
label_11b93c:
    // 0x11b93c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11b93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b944: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B944u;
    SET_GPR_U32(ctx, 31, 0x11B94Cu);
    ctx->pc = 0x11B948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B944u;
            // 0x11b948: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B94Cu; }
        if (ctx->pc != 0x11B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B94Cu; }
        if (ctx->pc != 0x11B94Cu) { return; }
    }
    ctx->pc = 0x11B94Cu;
label_11b94c:
    // 0x11b94c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b950: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11b950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b954: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B954u;
    SET_GPR_U32(ctx, 31, 0x11B95Cu);
    ctx->pc = 0x11B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B954u;
            // 0x11b958: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B95Cu; }
        if (ctx->pc != 0x11B95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B95Cu; }
        if (ctx->pc != 0x11B95Cu) { return; }
    }
    ctx->pc = 0x11B95Cu;
label_11b95c:
    // 0x11b95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b960: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11B960u;
    SET_GPR_U32(ctx, 31, 0x11B968u);
    ctx->pc = 0x11B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B960u;
            // 0x11b964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B968u; }
        if (ctx->pc != 0x11B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B968u; }
        if (ctx->pc != 0x11B968u) { return; }
    }
    ctx->pc = 0x11B968u;
label_11b968:
    // 0x11b968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b96c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11B96Cu;
    SET_GPR_U32(ctx, 31, 0x11B974u);
    ctx->pc = 0x11B970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B96Cu;
            // 0x11b970: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B974u; }
        if (ctx->pc != 0x11B974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B974u; }
        if (ctx->pc != 0x11B974u) { return; }
    }
    ctx->pc = 0x11B974u;
label_11b974:
    // 0x11b974: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x11b974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11b978: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x11b978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x11b97c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x11B97Cu;
    {
        const bool branch_taken_0x11b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b97c) {
            ctx->pc = 0x11BA14u;
            goto label_11ba14;
        }
    }
    ctx->pc = 0x11B984u;
label_11b984:
    // 0x11b984: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11b984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b988: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B988u;
    {
        const bool branch_taken_0x11b988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B988u;
            // 0x11b98c: 0x3c02ffe0  lui         $v0, 0xFFE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b988) {
            ctx->pc = 0x11B9A0u;
            goto label_11b9a0;
        }
    }
    ctx->pc = 0x11B990u;
    // 0x11b990: 0x3411ff48  ori         $s1, $zero, 0xFF48
    ctx->pc = 0x11b990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65352);
    // 0x11b994: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x11b994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x11b998: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B998u;
    {
        const bool branch_taken_0x11b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b998) {
            ctx->pc = 0x11B9A8u;
            goto label_11b9a8;
        }
    }
    ctx->pc = 0x11B9A0u;
label_11b9a0:
    // 0x11b9a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11b9a4: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x11b9a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_11b9a8:
    // 0x11b9a8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x11b9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11b9ac: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11b9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11b9b0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B9B0u;
    SET_GPR_U32(ctx, 31, 0x11B9B8u);
    ctx->pc = 0x11B9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9B0u;
            // 0x11b9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9B8u; }
        if (ctx->pc != 0x11B9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9B8u; }
        if (ctx->pc != 0x11B9B8u) { return; }
    }
    ctx->pc = 0x11B9B8u;
label_11b9b8:
    // 0x11b9b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9bc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11B9BCu;
    SET_GPR_U32(ctx, 31, 0x11B9C4u);
    ctx->pc = 0x11B9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9BCu;
            // 0x11b9c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9C4u; }
        if (ctx->pc != 0x11B9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9C4u; }
        if (ctx->pc != 0x11B9C4u) { return; }
    }
    ctx->pc = 0x11B9C4u;
label_11b9c4:
    // 0x11b9c4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x11b9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11b9c8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x11b9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x11b9cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9d0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11B9D0u;
    SET_GPR_U32(ctx, 31, 0x11B9D8u);
    ctx->pc = 0x11B9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9D0u;
            // 0x11b9d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9D8u; }
        if (ctx->pc != 0x11B9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9D8u; }
        if (ctx->pc != 0x11B9D8u) { return; }
    }
    ctx->pc = 0x11B9D8u;
label_11b9d8:
    // 0x11b9d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11b9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9e0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B9E0u;
    SET_GPR_U32(ctx, 31, 0x11B9E8u);
    ctx->pc = 0x11B9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9E0u;
            // 0x11b9e4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9E8u; }
        if (ctx->pc != 0x11B9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9E8u; }
        if (ctx->pc != 0x11B9E8u) { return; }
    }
    ctx->pc = 0x11B9E8u;
label_11b9e8:
    // 0x11b9e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11b9e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11b9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9f0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11B9F0u;
    SET_GPR_U32(ctx, 31, 0x11B9F8u);
    ctx->pc = 0x11B9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9F0u;
            // 0x11b9f4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9F8u; }
        if (ctx->pc != 0x11B9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9F8u; }
        if (ctx->pc != 0x11B9F8u) { return; }
    }
    ctx->pc = 0x11B9F8u;
label_11b9f8:
    // 0x11b9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9fc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11B9FCu;
    SET_GPR_U32(ctx, 31, 0x11BA04u);
    ctx->pc = 0x11BA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9FCu;
            // 0x11ba00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA04u; }
        if (ctx->pc != 0x11BA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA04u; }
        if (ctx->pc != 0x11BA04u) { return; }
    }
    ctx->pc = 0x11BA04u;
label_11ba04:
    // 0x11ba04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba08: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11BA08u;
    SET_GPR_U32(ctx, 31, 0x11BA10u);
    ctx->pc = 0x11BA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA08u;
            // 0x11ba0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA10u; }
        if (ctx->pc != 0x11BA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA10u; }
        if (ctx->pc != 0x11BA10u) { return; }
    }
    ctx->pc = 0x11BA10u;
label_11ba10:
    // 0x11ba10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11ba14:
    // 0x11ba14: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11BA14u;
    SET_GPR_U32(ctx, 31, 0x11BA1Cu);
    ctx->pc = 0x11BA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA14u;
            // 0x11ba18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA1Cu; }
        if (ctx->pc != 0x11BA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA1Cu; }
        if (ctx->pc != 0x11BA1Cu) { return; }
    }
    ctx->pc = 0x11BA1Cu;
label_11ba1c:
    // 0x11ba1c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11ba1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11ba20:
    // 0x11ba20: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11ba20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ba24: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11ba24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ba28: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11ba28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ba2c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11ba2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ba30: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11ba30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ba34: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11ba34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ba38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11ba38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ba3c: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA3Cu;
            // 0x11ba40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BA44u;
}
