#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: startDisplay__Fi
// Address: 0x29b820 - 0x29b86c
void startDisplay__Fi_0x29b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startDisplay__Fi_0x29b820");
#endif

    switch (ctx->pc) {
        case 0x29b830u: goto label_29b830;
        case 0x29b838u: goto label_29b838;
        default: break;
    }

    ctx->pc = 0x29b820u;

    // 0x29b820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b830:
    // 0x29b830: 0xc040cc0  jal         func_103300
    ctx->pc = 0x29B830u;
    SET_GPR_U32(ctx, 31, 0x29B838u);
    ctx->pc = 0x29B834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B830u;
            // 0x29b834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B838u; }
        if (ctx->pc != 0x29B838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B838u; }
        if (ctx->pc != 0x29B838u) { return; }
    }
    ctx->pc = 0x29B838u;
label_29b838:
    // 0x29b838: 0x0  nop
    ctx->pc = 0x29b838u;
    // NOP
    // 0x29b83c: 0x0  nop
    ctx->pc = 0x29b83cu;
    // NOP
    // 0x29b840: 0x0  nop
    ctx->pc = 0x29b840u;
    // NOP
    // 0x29b844: 0x0  nop
    ctx->pc = 0x29b844u;
    // NOP
    // 0x29b848: 0x1202fff9  beq         $s0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29B848u;
    {
        const bool branch_taken_0x29b848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29b848) {
            ctx->pc = 0x29B830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b830;
        }
    }
    ctx->pc = 0x29B850u;
    // 0x29b850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29b850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b854: 0xaf8098e4  sw          $zero, -0x671C($gp)
    ctx->pc = 0x29b854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940900), GPR_U32(ctx, 0));
    // 0x29b858: 0xa3839910  sb          $v1, -0x66F0($gp)
    ctx->pc = 0x29b858u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940944), (uint8_t)GPR_U32(ctx, 3));
    // 0x29b85c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b864: 0x3e00008  jr          $ra
    ctx->pc = 0x29B864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B864u;
            // 0x29b868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B86Cu;
}
