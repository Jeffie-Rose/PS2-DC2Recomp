#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CGridDataFv
// Address: 0x297830 - 0x297860
void ps2___ct__9CGridDataFv_0x297830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CGridDataFv_0x297830");
#endif

    switch (ctx->pc) {
        case 0x29784cu: goto label_29784c;
        default: break;
    }

    ctx->pc = 0x297830u;

    // 0x297830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29783c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x29783cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x297840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297844: 0xc049c86  jal         func_127218
    ctx->pc = 0x297844u;
    SET_GPR_U32(ctx, 31, 0x29784Cu);
    ctx->pc = 0x297848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297844u;
            // 0x297848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29784Cu; }
        if (ctx->pc != 0x29784Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29784Cu; }
        if (ctx->pc != 0x29784Cu) { return; }
    }
    ctx->pc = 0x29784Cu;
label_29784c:
    // 0x29784c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29784cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297858: 0x3e00008  jr          $ra
    ctx->pc = 0x297858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297858u;
            // 0x29785c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297860u;
}
