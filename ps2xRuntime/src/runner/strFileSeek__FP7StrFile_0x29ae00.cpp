#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: strFileSeek__FP7StrFile
// Address: 0x29ae00 - 0x29ae40
void strFileSeek__FP7StrFile_0x29ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strFileSeek__FP7StrFile_0x29ae00");
#endif

    switch (ctx->pc) {
        case 0x29ae1cu: goto label_29ae1c;
        case 0x29ae34u: goto label_29ae34;
        default: break;
    }

    ctx->pc = 0x29ae00u;

    // 0x29ae00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ae04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ae08: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x29ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x29ae0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AE0Cu;
    {
        const bool branch_taken_0x29ae0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ae0c) {
            ctx->pc = 0x29AE24u;
            goto label_29ae24;
        }
    }
    ctx->pc = 0x29AE14u;
    // 0x29ae14: 0xc0482e6  jal         func_120B98
    ctx->pc = 0x29AE14u;
    SET_GPR_U32(ctx, 31, 0x29AE1Cu);
    ctx->pc = 0x29AE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE14u;
            // 0x29ae18: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120B98u;
    if (runtime->hasFunction(0x120B98u)) {
        auto targetFn = runtime->lookupFunction(0x120B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE1Cu; }
        if (ctx->pc != 0x29AE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdStSeekF_0x120b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE1Cu; }
        if (ctx->pc != 0x29AE1Cu) { return; }
    }
    ctx->pc = 0x29AE1Cu;
label_29ae1c:
    // 0x29ae1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29AE1Cu;
    {
        const bool branch_taken_0x29ae1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE1Cu;
            // 0x29ae20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae1c) {
            ctx->pc = 0x29AE38u;
            goto label_29ae38;
        }
    }
    ctx->pc = 0x29AE24u;
label_29ae24:
    // 0x29ae24: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x29ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x29ae28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ae28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae2c: 0xc0451a8  jal         func_1146A0
    ctx->pc = 0x29AE2Cu;
    SET_GPR_U32(ctx, 31, 0x29AE34u);
    ctx->pc = 0x29AE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE2Cu;
            // 0x29ae30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE34u; }
        if (ctx->pc != 0x29AE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE34u; }
        if (ctx->pc != 0x29AE34u) { return; }
    }
    ctx->pc = 0x29AE34u;
label_29ae34:
    // 0x29ae34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ae34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ae38:
    // 0x29ae38: 0x3e00008  jr          $ra
    ctx->pc = 0x29AE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE38u;
            // 0x29ae3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AE40u;
}
