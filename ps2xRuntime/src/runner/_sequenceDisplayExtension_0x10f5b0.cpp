#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sequenceDisplayExtension
// Address: 0x10f5b0 - 0x10f63c
void _sequenceDisplayExtension_0x10f5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceDisplayExtension_0x10f5b0");
#endif

    switch (ctx->pc) {
        case 0x10f5c8u: goto label_10f5c8;
        case 0x10f5d4u: goto label_10f5d4;
        case 0x10f5e4u: goto label_10f5e4;
        case 0x10f5f0u: goto label_10f5f0;
        case 0x10f5fcu: goto label_10f5fc;
        case 0x10f60cu: goto label_10f60c;
        case 0x10f61cu: goto label_10f61c;
        case 0x10f628u: goto label_10f628;
        default: break;
    }

    ctx->pc = 0x10f5b0u;

    // 0x10f5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f5b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f5b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f5bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f5c0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F5C0u;
    SET_GPR_U32(ctx, 31, 0x10F5C8u);
    ctx->pc = 0x10F5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F5C0u;
            // 0x10f5c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5C8u; }
        if (ctx->pc != 0x10F5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5C8u; }
        if (ctx->pc != 0x10F5C8u) { return; }
    }
    ctx->pc = 0x10F5C8u;
label_10f5c8:
    // 0x10f5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5cc: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F5CCu;
    SET_GPR_U32(ctx, 31, 0x10F5D4u);
    ctx->pc = 0x10F5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F5CCu;
            // 0x10f5d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5D4u; }
        if (ctx->pc != 0x10F5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5D4u; }
        if (ctx->pc != 0x10F5D4u) { return; }
    }
    ctx->pc = 0x10F5D4u;
label_10f5d4:
    // 0x10f5d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10F5D4u;
    {
        const bool branch_taken_0x10f5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F5D4u;
            // 0x10f5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5d4) {
            ctx->pc = 0x10F600u;
            goto label_10f600;
        }
    }
    ctx->pc = 0x10F5DCu;
    // 0x10f5dc: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F5DCu;
    SET_GPR_U32(ctx, 31, 0x10F5E4u);
    ctx->pc = 0x10F5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F5DCu;
            // 0x10f5e0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5E4u; }
        if (ctx->pc != 0x10F5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5E4u; }
        if (ctx->pc != 0x10F5E4u) { return; }
    }
    ctx->pc = 0x10F5E4u;
label_10f5e4:
    // 0x10f5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5e8: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F5E8u;
    SET_GPR_U32(ctx, 31, 0x10F5F0u);
    ctx->pc = 0x10F5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F5E8u;
            // 0x10f5ec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5F0u; }
        if (ctx->pc != 0x10F5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5F0u; }
        if (ctx->pc != 0x10F5F0u) { return; }
    }
    ctx->pc = 0x10F5F0u;
label_10f5f0:
    // 0x10f5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5f4: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F5F4u;
    SET_GPR_U32(ctx, 31, 0x10F5FCu);
    ctx->pc = 0x10F5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F5F4u;
            // 0x10f5f8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5FCu; }
        if (ctx->pc != 0x10F5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F5FCu; }
        if (ctx->pc != 0x10F5FCu) { return; }
    }
    ctx->pc = 0x10F5FCu;
label_10f5fc:
    // 0x10f5fc: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x10f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
label_10f600:
    // 0x10f600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f604: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F604u;
    SET_GPR_U32(ctx, 31, 0x10F60Cu);
    ctx->pc = 0x10F608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F604u;
            // 0x10f608: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F60Cu; }
        if (ctx->pc != 0x10F60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F60Cu; }
        if (ctx->pc != 0x10F60Cu) { return; }
    }
    ctx->pc = 0x10F60Cu;
label_10f60c:
    // 0x10f60c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x10f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x10f610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f614: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F614u;
    SET_GPR_U32(ctx, 31, 0x10F61Cu);
    ctx->pc = 0x10F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F614u;
            // 0x10f618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F61Cu; }
        if (ctx->pc != 0x10F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F61Cu; }
        if (ctx->pc != 0x10F61Cu) { return; }
    }
    ctx->pc = 0x10F61Cu;
label_10f61c:
    // 0x10f61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f620: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10F620u;
    SET_GPR_U32(ctx, 31, 0x10F628u);
    ctx->pc = 0x10F624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F620u;
            // 0x10f624: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F628u; }
        if (ctx->pc != 0x10F628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F628u; }
        if (ctx->pc != 0x10F628u) { return; }
    }
    ctx->pc = 0x10F628u;
label_10f628:
    // 0x10f628: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x10f628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x10f62c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f634: 0x3e00008  jr          $ra
    ctx->pc = 0x10F634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F634u;
            // 0x10f638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F63Cu;
}
