#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStatus__6CSceneFiii
// Address: 0x284740 - 0x284778
void SetStatus__6CSceneFiii_0x284740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStatus__6CSceneFiii_0x284740");
#endif

    switch (ctx->pc) {
        case 0x284754u: goto label_284754;
        default: break;
    }

    ctx->pc = 0x284740u;

    // 0x284740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x284744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x284748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28474c: 0xc0a0da8  jal         func_2836A0
    ctx->pc = 0x28474Cu;
    SET_GPR_U32(ctx, 31, 0x284754u);
    ctx->pc = 0x284750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28474Cu;
            // 0x284750: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2836A0u;
    if (runtime->hasFunction(0x2836A0u)) {
        auto targetFn = runtime->lookupFunction(0x2836A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284754u; }
        if (ctx->pc != 0x284754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__6CSceneFii_0x2836a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284754u; }
        if (ctx->pc != 0x284754u) { return; }
    }
    ctx->pc = 0x284754u;
label_284754:
    // 0x284754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284754u;
    {
        const bool branch_taken_0x284754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284754) {
            ctx->pc = 0x284768u;
            goto label_284768;
        }
    }
    ctx->pc = 0x28475Cu;
    // 0x28475c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28475cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284760: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x284760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x284764: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x284764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_284768:
    // 0x284768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x284768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28476c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28476cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284770: 0x3e00008  jr          $ra
    ctx->pc = 0x284770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284770u;
            // 0x284774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284778u;
}
