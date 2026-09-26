#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sliceB
// Address: 0x10b1f8 - 0x10b25c
void _sliceB_0x10b1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sliceB_0x10b1f8");
#endif

    switch (ctx->pc) {
        case 0x10b210u: goto label_10b210;
        case 0x10b220u: goto label_10b220;
        case 0x10b234u: goto label_10b234;
        case 0x10b240u: goto label_10b240;
        case 0x10b248u: goto label_10b248;
        default: break;
    }

    ctx->pc = 0x10b1f8u;

    // 0x10b1f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b1fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10b200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b208: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B208u;
    SET_GPR_U32(ctx, 31, 0x10B210u);
    ctx->pc = 0x10B20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B208u;
            // 0x10b20c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B210u; }
        if (ctx->pc != 0x10B210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B210u; }
        if (ctx->pc != 0x10B210u) { return; }
    }
    ctx->pc = 0x10B210u;
label_10b210:
    // 0x10b210: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x10b210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x10b214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b218: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B218u;
    SET_GPR_U32(ctx, 31, 0x10B220u);
    ctx->pc = 0x10B21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B218u;
            // 0x10b21c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B220u; }
        if (ctx->pc != 0x10B220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B220u; }
        if (ctx->pc != 0x10B220u) { return; }
    }
    ctx->pc = 0x10B220u;
label_10b220:
    // 0x10b220: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B220u;
    {
        const bool branch_taken_0x10b220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B220u;
            // 0x10b224: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b220) {
            ctx->pc = 0x10B24Cu;
            goto label_10b24c;
        }
    }
    ctx->pc = 0x10B228u;
    // 0x10b228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b22c: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B22Cu;
    SET_GPR_U32(ctx, 31, 0x10B234u);
    ctx->pc = 0x10B230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B22Cu;
            // 0x10b230: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B234u; }
        if (ctx->pc != 0x10B234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B234u; }
        if (ctx->pc != 0x10B234u) { return; }
    }
    ctx->pc = 0x10B234u;
label_10b234:
    // 0x10b234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b238: 0xc042bce  jal         func_10AF38
    ctx->pc = 0x10B238u;
    SET_GPR_U32(ctx, 31, 0x10B240u);
    ctx->pc = 0x10B23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B238u;
            // 0x10b23c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AF38u;
    if (runtime->hasFunction(0x10AF38u)) {
        auto targetFn = runtime->lookupFunction(0x10AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B240u; }
        if (ctx->pc != 0x10B240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x10af38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B240u; }
        if (ctx->pc != 0x10B240u) { return; }
    }
    ctx->pc = 0x10B240u;
label_10b240:
    // 0x10b240: 0xc042dd4  jal         func_10B750
    ctx->pc = 0x10B240u;
    SET_GPR_U32(ctx, 31, 0x10B248u);
    ctx->pc = 0x10B244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B240u;
            // 0x10b244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B750u;
    if (runtime->hasFunction(0x10B750u)) {
        auto targetFn = runtime->lookupFunction(0x10B750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B248u; }
        if (ctx->pc != 0x10B248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x10b750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B248u; }
        if (ctx->pc != 0x10B248u) { return; }
    }
    ctx->pc = 0x10B248u;
label_10b248:
    // 0x10b248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10b24c:
    // 0x10b24c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10b24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b254: 0x3e00008  jr          $ra
    ctx->pc = 0x10B254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B254u;
            // 0x10b258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B25Cu;
}
