#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _extrainfo
// Address: 0x10b750 - 0x10b798
void _extrainfo_0x10b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_extrainfo_0x10b750");
#endif

    switch (ctx->pc) {
        case 0x10b768u: goto label_10b768;
        case 0x10b770u: goto label_10b770;
        case 0x10b77cu: goto label_10b77c;
        default: break;
    }

    ctx->pc = 0x10b750u;

    // 0x10b750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b75c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10B75Cu;
    {
        const bool branch_taken_0x10b75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B75Cu;
            // 0x10b760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b75c) {
            ctx->pc = 0x10B770u;
            goto label_10b770;
        }
    }
    ctx->pc = 0x10B764u;
    // 0x10b764: 0x0  nop
    ctx->pc = 0x10b764u;
    // NOP
label_10b768:
    // 0x10b768: 0xc042bce  jal         func_10AF38
    ctx->pc = 0x10B768u;
    SET_GPR_U32(ctx, 31, 0x10B770u);
    ctx->pc = 0x10AF38u;
    if (runtime->hasFunction(0x10AF38u)) {
        auto targetFn = runtime->lookupFunction(0x10AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B770u; }
        if (ctx->pc != 0x10B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x10af38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B770u; }
        if (ctx->pc != 0x10B770u) { return; }
    }
    ctx->pc = 0x10B770u;
label_10b770:
    // 0x10b770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b774: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B774u;
    SET_GPR_U32(ctx, 31, 0x10B77Cu);
    ctx->pc = 0x10B778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B774u;
            // 0x10b778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B77Cu; }
        if (ctx->pc != 0x10B77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B77Cu; }
        if (ctx->pc != 0x10B77Cu) { return; }
    }
    ctx->pc = 0x10B77Cu;
label_10b77c:
    // 0x10b77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b780: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10B780u;
    {
        const bool branch_taken_0x10b780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B780u;
            // 0x10b784: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b780) {
            ctx->pc = 0x10B768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b768;
        }
    }
    ctx->pc = 0x10B788u;
    // 0x10b788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b78c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b790: 0x3e00008  jr          $ra
    ctx->pc = 0x10B790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B790u;
            // 0x10b794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B798u;
}
