#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _groupOfPicturesHeader
// Address: 0x10b810 - 0x10b8b0
void _groupOfPicturesHeader_0x10b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_groupOfPicturesHeader_0x10b810");
#endif

    switch (ctx->pc) {
        case 0x10b840u: goto label_10b840;
        case 0x10b84cu: goto label_10b84c;
        case 0x10b858u: goto label_10b858;
        case 0x10b864u: goto label_10b864;
        case 0x10b870u: goto label_10b870;
        case 0x10b87cu: goto label_10b87c;
        case 0x10b888u: goto label_10b888;
        case 0x10b898u: goto label_10b898;
        default: break;
    }

    ctx->pc = 0x10b810u;

    // 0x10b810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b81c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b828: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x10b828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x10b82c: 0x8e020850  lw          $v0, 0x850($s0)
    ctx->pc = 0x10b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2128)));
    // 0x10b830: 0xae030854  sw          $v1, 0x854($s0)
    ctx->pc = 0x10b830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 3));
    // 0x10b834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10b838: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B838u;
    SET_GPR_U32(ctx, 31, 0x10B840u);
    ctx->pc = 0x10B83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B838u;
            // 0x10b83c: 0xae02084c  sw          $v0, 0x84C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B840u; }
        if (ctx->pc != 0x10B840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B840u; }
        if (ctx->pc != 0x10B840u) { return; }
    }
    ctx->pc = 0x10B840u;
label_10b840:
    // 0x10b840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b844: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B844u;
    SET_GPR_U32(ctx, 31, 0x10B84Cu);
    ctx->pc = 0x10B848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B844u;
            // 0x10b848: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B84Cu; }
        if (ctx->pc != 0x10B84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B84Cu; }
        if (ctx->pc != 0x10B84Cu) { return; }
    }
    ctx->pc = 0x10B84Cu;
label_10b84c:
    // 0x10b84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b850: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B850u;
    SET_GPR_U32(ctx, 31, 0x10B858u);
    ctx->pc = 0x10B854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B850u;
            // 0x10b854: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B858u; }
        if (ctx->pc != 0x10B858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B858u; }
        if (ctx->pc != 0x10B858u) { return; }
    }
    ctx->pc = 0x10B858u;
label_10b858:
    // 0x10b858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b85c: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B85Cu;
    SET_GPR_U32(ctx, 31, 0x10B864u);
    ctx->pc = 0x10B860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B85Cu;
            // 0x10b860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B864u; }
        if (ctx->pc != 0x10B864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B864u; }
        if (ctx->pc != 0x10B864u) { return; }
    }
    ctx->pc = 0x10B864u;
label_10b864:
    // 0x10b864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b868: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B868u;
    SET_GPR_U32(ctx, 31, 0x10B870u);
    ctx->pc = 0x10B86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B868u;
            // 0x10b86c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B870u; }
        if (ctx->pc != 0x10B870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B870u; }
        if (ctx->pc != 0x10B870u) { return; }
    }
    ctx->pc = 0x10B870u;
label_10b870:
    // 0x10b870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b874: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B874u;
    SET_GPR_U32(ctx, 31, 0x10B87Cu);
    ctx->pc = 0x10B878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B874u;
            // 0x10b878: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B87Cu; }
        if (ctx->pc != 0x10B87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B87Cu; }
        if (ctx->pc != 0x10B87Cu) { return; }
    }
    ctx->pc = 0x10B87Cu;
label_10b87c:
    // 0x10b87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b880: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B880u;
    SET_GPR_U32(ctx, 31, 0x10B888u);
    ctx->pc = 0x10B884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B880u;
            // 0x10b884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B888u; }
        if (ctx->pc != 0x10B888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B888u; }
        if (ctx->pc != 0x10B888u) { return; }
    }
    ctx->pc = 0x10B888u;
label_10b888:
    // 0x10b888: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x10b888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x10b88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b890: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B890u;
    SET_GPR_U32(ctx, 31, 0x10B898u);
    ctx->pc = 0x10B894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B890u;
            // 0x10b894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B898u; }
        if (ctx->pc != 0x10B898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B898u; }
        if (ctx->pc != 0x10B898u) { return; }
    }
    ctx->pc = 0x10B898u;
label_10b898:
    // 0x10b898: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x10b898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x10b89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b8a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b8a8: 0x8042d0e  j           func_10B438
    ctx->pc = 0x10B8A8u;
    ctx->pc = 0x10B8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8A8u;
            // 0x10b8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (runtime->hasFunction(0x10B438u)) {
        auto targetFn = runtime->lookupFunction(0x10B438u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _extensionAndUserData_0x10b438(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B8B0u;
}
