#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _copyrightExtension
// Address: 0x10ba70 - 0x10bb00
void _copyrightExtension_0x10ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyrightExtension_0x10ba70");
#endif

    switch (ctx->pc) {
        case 0x10ba88u: goto label_10ba88;
        case 0x10ba94u: goto label_10ba94;
        case 0x10baa0u: goto label_10baa0;
        case 0x10baacu: goto label_10baac;
        case 0x10bab8u: goto label_10bab8;
        case 0x10bac4u: goto label_10bac4;
        case 0x10bad0u: goto label_10bad0;
        case 0x10badcu: goto label_10badc;
        case 0x10bae8u: goto label_10bae8;
        default: break;
    }

    ctx->pc = 0x10ba70u;

    // 0x10ba70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ba74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ba78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ba7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ba80: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BA80u;
    SET_GPR_U32(ctx, 31, 0x10BA88u);
    ctx->pc = 0x10BA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA80u;
            // 0x10ba84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA88u; }
        if (ctx->pc != 0x10BA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA88u; }
        if (ctx->pc != 0x10BA88u) { return; }
    }
    ctx->pc = 0x10BA88u;
label_10ba88:
    // 0x10ba88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba8c: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BA8Cu;
    SET_GPR_U32(ctx, 31, 0x10BA94u);
    ctx->pc = 0x10BA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA8Cu;
            // 0x10ba90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA94u; }
        if (ctx->pc != 0x10BA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA94u; }
        if (ctx->pc != 0x10BA94u) { return; }
    }
    ctx->pc = 0x10BA94u;
label_10ba94:
    // 0x10ba94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba98: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BA98u;
    SET_GPR_U32(ctx, 31, 0x10BAA0u);
    ctx->pc = 0x10BA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA98u;
            // 0x10ba9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAA0u; }
        if (ctx->pc != 0x10BAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAA0u; }
        if (ctx->pc != 0x10BAA0u) { return; }
    }
    ctx->pc = 0x10BAA0u;
label_10baa0:
    // 0x10baa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10baa4: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BAA4u;
    SET_GPR_U32(ctx, 31, 0x10BAACu);
    ctx->pc = 0x10BAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAA4u;
            // 0x10baa8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAACu; }
        if (ctx->pc != 0x10BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAACu; }
        if (ctx->pc != 0x10BAACu) { return; }
    }
    ctx->pc = 0x10BAACu;
label_10baac:
    // 0x10baac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bab0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BAB0u;
    SET_GPR_U32(ctx, 31, 0x10BAB8u);
    ctx->pc = 0x10BAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAB0u;
            // 0x10bab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAB8u; }
        if (ctx->pc != 0x10BAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAB8u; }
        if (ctx->pc != 0x10BAB8u) { return; }
    }
    ctx->pc = 0x10BAB8u;
label_10bab8:
    // 0x10bab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10babc: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BABCu;
    SET_GPR_U32(ctx, 31, 0x10BAC4u);
    ctx->pc = 0x10BAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BABCu;
            // 0x10bac0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAC4u; }
        if (ctx->pc != 0x10BAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAC4u; }
        if (ctx->pc != 0x10BAC4u) { return; }
    }
    ctx->pc = 0x10BAC4u;
label_10bac4:
    // 0x10bac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bac8: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BAC8u;
    SET_GPR_U32(ctx, 31, 0x10BAD0u);
    ctx->pc = 0x10BACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAC8u;
            // 0x10bacc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAD0u; }
        if (ctx->pc != 0x10BAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAD0u; }
        if (ctx->pc != 0x10BAD0u) { return; }
    }
    ctx->pc = 0x10BAD0u;
label_10bad0:
    // 0x10bad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bad4: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BAD4u;
    SET_GPR_U32(ctx, 31, 0x10BADCu);
    ctx->pc = 0x10BAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAD4u;
            // 0x10bad8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BADCu; }
        if (ctx->pc != 0x10BADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BADCu; }
        if (ctx->pc != 0x10BADCu) { return; }
    }
    ctx->pc = 0x10BADCu;
label_10badc:
    // 0x10badc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10badcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bae0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10BAE0u;
    SET_GPR_U32(ctx, 31, 0x10BAE8u);
    ctx->pc = 0x10BAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAE0u;
            // 0x10bae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAE8u; }
        if (ctx->pc != 0x10BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAE8u; }
        if (ctx->pc != 0x10BAE8u) { return; }
    }
    ctx->pc = 0x10BAE8u;
label_10bae8:
    // 0x10bae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10baec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10baecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10baf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10baf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10baf4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x10baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10baf8: 0x8042c0a  j           func_10B028
    ctx->pc = 0x10BAF8u;
    ctx->pc = 0x10BAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAF8u;
            // 0x10bafc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _nextBit_0x10b028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10BB00u;
}
