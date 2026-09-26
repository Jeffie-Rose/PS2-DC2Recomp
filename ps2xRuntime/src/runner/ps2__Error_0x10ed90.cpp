#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _Error
// Address: 0x10ed90 - 0x10ede4
void ps2__Error_0x10ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Error_0x10ed90");
#endif

    switch (ctx->pc) {
        case 0x10edc8u: goto label_10edc8;
        case 0x10edd8u: goto label_10edd8;
        default: break;
    }

    ctx->pc = 0x10ed90u;

    // 0x10ed90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ed94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ed98: 0x8c830858  lw          $v1, 0x858($a0)
    ctx->pc = 0x10ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2136)));
    // 0x10ed9c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10ED9Cu;
    {
        const bool branch_taken_0x10ed9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ed9c) {
            ctx->pc = 0x10EDD0u;
            goto label_10edd0;
        }
    }
    ctx->pc = 0x10EDA4u;
    // 0x10eda4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10EDA4u;
    {
        const bool branch_taken_0x10eda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10eda4) {
            ctx->pc = 0x10EDD0u;
            goto label_10edd0;
        }
    }
    ctx->pc = 0x10EDACu;
    // 0x10edac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10edb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10EDB0u;
    {
        const bool branch_taken_0x10edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDB0u;
            // 0x10edb4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edb0) {
            ctx->pc = 0x10EDD0u;
            goto label_10edd0;
        }
    }
    ctx->pc = 0x10EDB8u;
    // 0x10edb8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10edb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10edbc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10edc0: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10EDC0u;
    SET_GPR_U32(ctx, 31, 0x10EDC8u);
    ctx->pc = 0x10EDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDC0u;
            // 0x10edc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EDC8u; }
        if (ctx->pc != 0x10EDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EDC8u; }
        if (ctx->pc != 0x10EDC8u) { return; }
    }
    ctx->pc = 0x10EDC8u;
label_10edc8:
    // 0x10edc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10EDC8u;
    {
        const bool branch_taken_0x10edc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDC8u;
            // 0x10edcc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edc8) {
            ctx->pc = 0x10EDDCu;
            goto label_10eddc;
        }
    }
    ctx->pc = 0x10EDD0u;
label_10edd0:
    // 0x10edd0: 0xc043b52  jal         func_10ED48
    ctx->pc = 0x10EDD0u;
    SET_GPR_U32(ctx, 31, 0x10EDD8u);
    ctx->pc = 0x10EDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDD0u;
            // 0x10edd4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED48u;
    if (runtime->hasFunction(0x10ED48u)) {
        auto targetFn = runtime->lookupFunction(0x10ED48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EDD8u; }
        if (ctx->pc != 0x10EDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__ErrMessage_0x10ed48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EDD8u; }
        if (ctx->pc != 0x10EDD8u) { return; }
    }
    ctx->pc = 0x10EDD8u;
label_10edd8:
    // 0x10edd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10edd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10eddc:
    // 0x10eddc: 0x3e00008  jr          $ra
    ctx->pc = 0x10EDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDDCu;
            // 0x10ede0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EDE4u;
}
