#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _pictureCodingExtension
// Address: 0x10b560 - 0x10b750
void _pictureCodingExtension_0x10b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureCodingExtension_0x10b560");
#endif

    switch (ctx->pc) {
        case 0x10b578u: goto label_10b578;
        case 0x10b588u: goto label_10b588;
        case 0x10b598u: goto label_10b598;
        case 0x10b5a8u: goto label_10b5a8;
        case 0x10b5b8u: goto label_10b5b8;
        case 0x10b5e8u: goto label_10b5e8;
        case 0x10b608u: goto label_10b608;
        case 0x10b618u: goto label_10b618;
        case 0x10b628u: goto label_10b628;
        case 0x10b638u: goto label_10b638;
        case 0x10b668u: goto label_10b668;
        case 0x10b698u: goto label_10b698;
        case 0x10b6c8u: goto label_10b6c8;
        case 0x10b6d8u: goto label_10b6d8;
        case 0x10b6e4u: goto label_10b6e4;
        case 0x10b6f4u: goto label_10b6f4;
        case 0x10b708u: goto label_10b708;
        case 0x10b714u: goto label_10b714;
        case 0x10b720u: goto label_10b720;
        case 0x10b72cu: goto label_10b72c;
        default: break;
    }

    ctx->pc = 0x10b560u;

    // 0x10b560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b564: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10b564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b56c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b570: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B570u;
    SET_GPR_U32(ctx, 31, 0x10B578u);
    ctx->pc = 0x10B574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B570u;
            // 0x10b574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B578u; }
        if (ctx->pc != 0x10B578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B578u; }
        if (ctx->pc != 0x10B578u) { return; }
    }
    ctx->pc = 0x10B578u;
label_10b578:
    // 0x10b578: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x10b578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x10b57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b580: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B580u;
    SET_GPR_U32(ctx, 31, 0x10B588u);
    ctx->pc = 0x10B584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B580u;
            // 0x10b584: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B588u; }
        if (ctx->pc != 0x10B588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B588u; }
        if (ctx->pc != 0x10B588u) { return; }
    }
    ctx->pc = 0x10B588u;
label_10b588:
    // 0x10b588: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x10b588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x10b58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b590: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B590u;
    SET_GPR_U32(ctx, 31, 0x10B598u);
    ctx->pc = 0x10B594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B590u;
            // 0x10b594: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B598u; }
        if (ctx->pc != 0x10B598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B598u; }
        if (ctx->pc != 0x10B598u) { return; }
    }
    ctx->pc = 0x10B598u;
label_10b598:
    // 0x10b598: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x10b598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x10b59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5a0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B5A0u;
    SET_GPR_U32(ctx, 31, 0x10B5A8u);
    ctx->pc = 0x10B5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5A0u;
            // 0x10b5a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5A8u; }
        if (ctx->pc != 0x10B5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5A8u; }
        if (ctx->pc != 0x10B5A8u) { return; }
    }
    ctx->pc = 0x10B5A8u;
label_10b5a8:
    // 0x10b5a8: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x10b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
    // 0x10b5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5b0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B5B0u;
    SET_GPR_U32(ctx, 31, 0x10B5B8u);
    ctx->pc = 0x10B5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5B0u;
            // 0x10b5b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5B8u; }
        if (ctx->pc != 0x10B5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5B8u; }
        if (ctx->pc != 0x10B5B8u) { return; }
    }
    ctx->pc = 0x10B5B8u;
label_10b5b8:
    // 0x10b5b8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10b5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10b5bc: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x10b5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x10b5c0: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x10b5c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x10b5c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x10b5c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x10b5c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10b5cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x10b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x10b5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b5d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x10b5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x10b5dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10b5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10b5e0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B5E0u;
    SET_GPR_U32(ctx, 31, 0x10B5E8u);
    ctx->pc = 0x10B5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5E0u;
            // 0x10b5e4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5E8u; }
        if (ctx->pc != 0x10B5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5E8u; }
        if (ctx->pc != 0x10B5E8u) { return; }
    }
    ctx->pc = 0x10B5E8u;
label_10b5e8:
    // 0x10b5e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b5e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5ec: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x10b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x10b5f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B5F0u;
    {
        const bool branch_taken_0x10b5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5F0u;
            // 0x10b5f4: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5f0) {
            ctx->pc = 0x10B5FCu;
            goto label_10b5fc;
        }
    }
    ctx->pc = 0x10B5F8u;
    // 0x10b5f8: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x10b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_10b5fc:
    // 0x10b5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b600: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B600u;
    SET_GPR_U32(ctx, 31, 0x10B608u);
    ctx->pc = 0x10B604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B600u;
            // 0x10b604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B608u; }
        if (ctx->pc != 0x10B608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B608u; }
        if (ctx->pc != 0x10B608u) { return; }
    }
    ctx->pc = 0x10B608u;
label_10b608:
    // 0x10b608: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x10b608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x10b60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b610: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B610u;
    SET_GPR_U32(ctx, 31, 0x10B618u);
    ctx->pc = 0x10B614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B610u;
            // 0x10b614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B618u; }
        if (ctx->pc != 0x10B618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B618u; }
        if (ctx->pc != 0x10B618u) { return; }
    }
    ctx->pc = 0x10B618u;
label_10b618:
    // 0x10b618: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x10b618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x10b61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b620: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B620u;
    SET_GPR_U32(ctx, 31, 0x10B628u);
    ctx->pc = 0x10B624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B620u;
            // 0x10b624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B628u; }
        if (ctx->pc != 0x10B628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B628u; }
        if (ctx->pc != 0x10B628u) { return; }
    }
    ctx->pc = 0x10B628u;
label_10b628:
    // 0x10b628: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x10b628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x10b62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b630: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B630u;
    SET_GPR_U32(ctx, 31, 0x10B638u);
    ctx->pc = 0x10B634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B630u;
            // 0x10b634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B638u; }
        if (ctx->pc != 0x10B638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B638u; }
        if (ctx->pc != 0x10B638u) { return; }
    }
    ctx->pc = 0x10B638u;
label_10b638:
    // 0x10b638: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b63c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10b63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
    // 0x10b640: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x10b640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x10b644: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b648: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x10b648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x10b64c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10b64cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10b650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b654: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10b654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10b658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b65c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10b65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10b660: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B660u;
    SET_GPR_U32(ctx, 31, 0x10B668u);
    ctx->pc = 0x10B664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B660u;
            // 0x10b664: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B668u; }
        if (ctx->pc != 0x10B668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B668u; }
        if (ctx->pc != 0x10B668u) { return; }
    }
    ctx->pc = 0x10B668u;
label_10b668:
    // 0x10b668: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b66c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
    // 0x10b670: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x10b670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x10b674: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b678: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x10b678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x10b67c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10b67cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10b680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b684: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10b684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10b688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b68c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10b68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10b690: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B690u;
    SET_GPR_U32(ctx, 31, 0x10B698u);
    ctx->pc = 0x10B694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B690u;
            // 0x10b694: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B698u; }
        if (ctx->pc != 0x10B698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B698u; }
        if (ctx->pc != 0x10B698u) { return; }
    }
    ctx->pc = 0x10B698u;
label_10b698:
    // 0x10b698: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b69c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10b69cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
    // 0x10b6a0: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x10b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x10b6a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b6a8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x10b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x10b6ac: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10b6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10b6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6b4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10b6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10b6b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b6bc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10b6c0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B6C0u;
    SET_GPR_U32(ctx, 31, 0x10B6C8u);
    ctx->pc = 0x10B6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6C0u;
            // 0x10b6c4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6C8u; }
        if (ctx->pc != 0x10B6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6C8u; }
        if (ctx->pc != 0x10B6C8u) { return; }
    }
    ctx->pc = 0x10B6C8u;
label_10b6c8:
    // 0x10b6c8: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x10b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x10b6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6d0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B6D0u;
    SET_GPR_U32(ctx, 31, 0x10B6D8u);
    ctx->pc = 0x10B6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6D0u;
            // 0x10b6d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6D8u; }
        if (ctx->pc != 0x10B6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6D8u; }
        if (ctx->pc != 0x10B6D8u) { return; }
    }
    ctx->pc = 0x10B6D8u;
label_10b6d8:
    // 0x10b6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6dc: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B6DCu;
    SET_GPR_U32(ctx, 31, 0x10B6E4u);
    ctx->pc = 0x10B6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6DCu;
            // 0x10b6e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6E4u; }
        if (ctx->pc != 0x10B6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6E4u; }
        if (ctx->pc != 0x10B6E4u) { return; }
    }
    ctx->pc = 0x10B6E4u;
label_10b6e4:
    // 0x10b6e4: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x10b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x10b6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6ec: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B6ECu;
    SET_GPR_U32(ctx, 31, 0x10B6F4u);
    ctx->pc = 0x10B6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6ECu;
            // 0x10b6f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6F4u; }
        if (ctx->pc != 0x10B6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6F4u; }
        if (ctx->pc != 0x10B6F4u) { return; }
    }
    ctx->pc = 0x10B6F4u;
label_10b6f4:
    // 0x10b6f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10B6F4u;
    {
        const bool branch_taken_0x10b6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6F4u;
            // 0x10b6f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6f4) {
            ctx->pc = 0x10B744u;
            goto label_10b744;
        }
    }
    ctx->pc = 0x10B6FCu;
    // 0x10b6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b700: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B700u;
    SET_GPR_U32(ctx, 31, 0x10B708u);
    ctx->pc = 0x10B704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B700u;
            // 0x10b704: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B708u; }
        if (ctx->pc != 0x10B708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B708u; }
        if (ctx->pc != 0x10B708u) { return; }
    }
    ctx->pc = 0x10B708u;
label_10b708:
    // 0x10b708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b70c: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B70Cu;
    SET_GPR_U32(ctx, 31, 0x10B714u);
    ctx->pc = 0x10B710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B70Cu;
            // 0x10b710: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B714u; }
        if (ctx->pc != 0x10B714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B714u; }
        if (ctx->pc != 0x10B714u) { return; }
    }
    ctx->pc = 0x10B714u;
label_10b714:
    // 0x10b714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b718: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B718u;
    SET_GPR_U32(ctx, 31, 0x10B720u);
    ctx->pc = 0x10B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B718u;
            // 0x10b71c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B720u; }
        if (ctx->pc != 0x10B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B720u; }
        if (ctx->pc != 0x10B720u) { return; }
    }
    ctx->pc = 0x10B720u;
label_10b720:
    // 0x10b720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b724: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B724u;
    SET_GPR_U32(ctx, 31, 0x10B72Cu);
    ctx->pc = 0x10B728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B724u;
            // 0x10b728: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B72Cu; }
        if (ctx->pc != 0x10B72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B72Cu; }
        if (ctx->pc != 0x10B72Cu) { return; }
    }
    ctx->pc = 0x10B72Cu;
label_10b72c:
    // 0x10b72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b738: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10b738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10b73c: 0x8042c0a  j           func_10B028
    ctx->pc = 0x10B73Cu;
    ctx->pc = 0x10B740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B73Cu;
            // 0x10b740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _nextBit_0x10b028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B744u;
label_10b744:
    // 0x10b744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b748: 0x3e00008  jr          $ra
    ctx->pc = 0x10B748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B748u;
            // 0x10b74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B750u;
}
