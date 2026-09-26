#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveCharaNo__13CMenuItemInfoFv
// Address: 0x243100 - 0x24314c
void GetActiveCharaNo__13CMenuItemInfoFv_0x243100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveCharaNo__13CMenuItemInfoFv_0x243100");
#endif

    switch (ctx->pc) {
        case 0x243118u: goto label_243118;
        default: break;
    }

    ctx->pc = 0x243100u;

    // 0x243100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x243108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24310c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24310cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243110: 0xc08ef84  jal         func_23BE10
    ctx->pc = 0x243110u;
    SET_GPR_U32(ctx, 31, 0x243118u);
    ctx->pc = 0x243114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243110u;
            // 0x243114: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE10u;
    if (runtime->hasFunction(0x23BE10u)) {
        auto targetFn = runtime->lookupFunction(0x23BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243118u; }
        if (ctx->pc != 0x243118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__12CMenuKeyFuncFv_0x23be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243118u; }
        if (ctx->pc != 0x243118u) { return; }
    }
    ctx->pc = 0x243118u;
label_243118:
    // 0x243118: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x243118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24311c: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24311Cu;
    {
        const bool branch_taken_0x24311c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24311c) {
            ctx->pc = 0x24313Cu;
            goto label_24313c;
        }
    }
    ctx->pc = 0x243124u;
    // 0x243124: 0x86040114  lh          $a0, 0x114($s0)
    ctx->pc = 0x243124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x243128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24312c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24312Cu;
    {
        const bool branch_taken_0x24312c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24312c) {
            ctx->pc = 0x24313Cu;
            goto label_24313c;
        }
    }
    ctx->pc = 0x243134u;
    // 0x243134: 0xa6000114  sh          $zero, 0x114($s0)
    ctx->pc = 0x243134u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 0));
    // 0x243138: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x243138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24313c:
    // 0x24313c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24313cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243144: 0x3e00008  jr          $ra
    ctx->pc = 0x243144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243144u;
            // 0x243148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24314Cu;
}
