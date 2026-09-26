#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetActive__6CSceneFii
// Address: 0x284700 - 0x284734
void ResetActive__6CSceneFii_0x284700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetActive__6CSceneFii_0x284700");
#endif

    switch (ctx->pc) {
        case 0x284710u: goto label_284710;
        default: break;
    }

    ctx->pc = 0x284700u;

    // 0x284700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284708: 0xc0a0da8  jal         func_2836A0
    ctx->pc = 0x284708u;
    SET_GPR_U32(ctx, 31, 0x284710u);
    ctx->pc = 0x2836A0u;
    if (runtime->hasFunction(0x2836A0u)) {
        auto targetFn = runtime->lookupFunction(0x2836A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284710u; }
        if (ctx->pc != 0x284710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__6CSceneFii_0x2836a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284710u; }
        if (ctx->pc != 0x284710u) { return; }
    }
    ctx->pc = 0x284710u;
label_284710:
    // 0x284710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284710u;
    {
        const bool branch_taken_0x284710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284710) {
            ctx->pc = 0x284728u;
            goto label_284728;
        }
    }
    ctx->pc = 0x284718u;
    // 0x284718: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x284718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28471c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x28471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x284720: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x284720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x284724: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x284724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_284728:
    // 0x284728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28472c: 0x3e00008  jr          $ra
    ctx->pc = 0x28472Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28472Cu;
            // 0x284730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284734u;
}
