#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emGetPenkiItemNo__Fi
// Address: 0x2d8960 - 0x2d8994
void emGetPenkiItemNo__Fi_0x2d8960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emGetPenkiItemNo__Fi_0x2d8960");
#endif

    switch (ctx->pc) {
        case 0x2d8988u: goto label_2d8988;
        default: break;
    }

    ctx->pc = 0x2d8960u;

    // 0x2d8960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8964: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8964u;
    {
        const bool branch_taken_0x2d8964 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D8968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8964u;
            // 0x2d8968: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8964) {
            ctx->pc = 0x2D8978u;
            goto label_2d8978;
        }
    }
    ctx->pc = 0x2D896Cu;
    // 0x2d896c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x2d896cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d8970: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8970u;
    {
        const bool branch_taken_0x2d8970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8970) {
            ctx->pc = 0x2D8980u;
            goto label_2d8980;
        }
    }
    ctx->pc = 0x2D8978u;
label_2d8978:
    // 0x2d8978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8978u;
    {
        const bool branch_taken_0x2d8978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8978u;
            // 0x2d897c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8978) {
            ctx->pc = 0x2D8988u;
            goto label_2d8988;
        }
    }
    ctx->pc = 0x2D8980u;
label_2d8980:
    // 0x2d8980: 0xc07e250  jal         func_1F8940
    ctx->pc = 0x2D8980u;
    SET_GPR_U32(ctx, 31, 0x2D8988u);
    ctx->pc = 0x1F8940u;
    if (runtime->hasFunction(0x1F8940u)) {
        auto targetFn = runtime->lookupFunction(0x1F8940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8988u; }
        if (ctx->pc != 0x2D8988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPenkiItemNo__Fi_0x1f8940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8988u; }
        if (ctx->pc != 0x2D8988u) { return; }
    }
    ctx->pc = 0x2D8988u;
label_2d8988:
    // 0x2d8988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d898c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D898Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D898Cu;
            // 0x2d8990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8994u;
}
