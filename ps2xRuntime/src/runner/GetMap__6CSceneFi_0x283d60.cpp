#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMap__6CSceneFi
// Address: 0x283d60 - 0x283db0
void GetMap__6CSceneFi_0x283d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMap__6CSceneFi_0x283d60");
#endif

    switch (ctx->pc) {
        case 0x283d70u: goto label_283d70;
        default: break;
    }

    ctx->pc = 0x283d60u;

    // 0x283d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283d68: 0xc0a0ce0  jal         func_283380
    ctx->pc = 0x283D68u;
    SET_GPR_U32(ctx, 31, 0x283D70u);
    ctx->pc = 0x283380u;
    if (runtime->hasFunction(0x283380u)) {
        auto targetFn = runtime->lookupFunction(0x283380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283D70u; }
        if (ctx->pc != 0x283D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMap__6CSceneFi_0x283380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283D70u; }
        if (ctx->pc != 0x283D70u) { return; }
    }
    ctx->pc = 0x283D70u;
label_283d70:
    // 0x283d70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283D70u;
    {
        const bool branch_taken_0x283d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283d70) {
            ctx->pc = 0x283D80u;
            goto label_283d80;
        }
    }
    ctx->pc = 0x283D78u;
    // 0x283d78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x283D78u;
    {
        const bool branch_taken_0x283d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D78u;
            // 0x283d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d78) {
            ctx->pc = 0x283DA4u;
            goto label_283da4;
        }
    }
    ctx->pc = 0x283D80u;
label_283d80:
    // 0x283d80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x283d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283d84: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x283d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x283d88: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x283d88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283d8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283D8Cu;
    {
        const bool branch_taken_0x283d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d8c) {
            ctx->pc = 0x283D9Cu;
            goto label_283d9c;
        }
    }
    ctx->pc = 0x283D94u;
    // 0x283d94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283D94u;
    {
        const bool branch_taken_0x283d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D94u;
            // 0x283d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d94) {
            ctx->pc = 0x283DA4u;
            goto label_283da4;
        }
    }
    ctx->pc = 0x283D9Cu;
label_283d9c:
    // 0x283d9c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x283d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x283da0: 0x0  nop
    ctx->pc = 0x283da0u;
    // NOP
label_283da4:
    // 0x283da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283da8: 0x3e00008  jr          $ra
    ctx->pc = 0x283DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283DA8u;
            // 0x283dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283DB0u;
}
