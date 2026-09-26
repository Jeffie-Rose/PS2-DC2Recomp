#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: push_int__10CRunScriptFi
// Address: 0x186dd0 - 0x186e18
void push_int__10CRunScriptFi_0x186dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("push_int__10CRunScriptFi_0x186dd0");
#endif

    switch (ctx->pc) {
        case 0x186decu: goto label_186dec;
        default: break;
    }

    ctx->pc = 0x186dd0u;

    // 0x186dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186de4: 0xc061b54  jal         func_186D50
    ctx->pc = 0x186DE4u;
    SET_GPR_U32(ctx, 31, 0x186DECu);
    ctx->pc = 0x186DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186DE4u;
            // 0x186de8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D50u;
    if (runtime->hasFunction(0x186D50u)) {
        auto targetFn = runtime->lookupFunction(0x186D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DECu; }
        if (ctx->pc != 0x186DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_stack__10CRunScriptFv_0x186d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DECu; }
        if (ctx->pc != 0x186DECu) { return; }
    }
    ctx->pc = 0x186DECu;
label_186dec:
    // 0x186dec: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x186decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x186df0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x186df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x186df4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x186df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x186df8: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x186df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x186dfc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x186dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x186e00: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x186e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x186e04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e10: 0x3e00008  jr          $ra
    ctx->pc = 0x186E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E10u;
            // 0x186e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186E18u;
}
