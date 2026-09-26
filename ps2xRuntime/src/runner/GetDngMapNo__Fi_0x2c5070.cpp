#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDngMapNo__Fi
// Address: 0x2c5070 - 0x2c50b8
void GetDngMapNo__Fi_0x2c5070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDngMapNo__Fi_0x2c5070");
#endif

    switch (ctx->pc) {
        case 0x2c50acu: goto label_2c50ac;
        default: break;
    }

    ctx->pc = 0x2c5070u;

    // 0x2c5070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c5074: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5074u;
    {
        const bool branch_taken_0x2c5074 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2C5078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5074u;
            // 0x2c5078: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5074) {
            ctx->pc = 0x2C5084u;
            goto label_2c5084;
        }
    }
    ctx->pc = 0x2C507Cu;
    // 0x2c507c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C507Cu;
    {
        const bool branch_taken_0x2c507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C507Cu;
            // 0x2c5080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c507c) {
            ctx->pc = 0x2C50ACu;
            goto label_2c50ac;
        }
    }
    ctx->pc = 0x2C5084u;
label_2c5084:
    // 0x2c5084: 0x28810007  slti        $at, $a0, 0x7
    ctx->pc = 0x2c5084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c5088: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5088u;
    {
        const bool branch_taken_0x2c5088 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C508Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5088u;
            // 0x2c508c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5088) {
            ctx->pc = 0x2C5098u;
            goto label_2c5098;
        }
    }
    ctx->pc = 0x2C5090u;
    // 0x2c5090: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5090u;
    {
        const bool branch_taken_0x2c5090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5090u;
            // 0x2c5094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5090) {
            ctx->pc = 0x2C50ACu;
            goto label_2c50ac;
        }
    }
    ctx->pc = 0x2C5098u;
label_2c5098:
    // 0x2c5098: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c5098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c509c: 0x244252a0  addiu       $v0, $v0, 0x52A0
    ctx->pc = 0x2c509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21152));
    // 0x2c50a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c50a4: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2C50A4u;
    SET_GPR_U32(ctx, 31, 0x2C50ACu);
    ctx->pc = 0x2C50A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C50A4u;
            // 0x2c50a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50ACu; }
        if (ctx->pc != 0x2C50ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50ACu; }
        if (ctx->pc != 0x2C50ACu) { return; }
    }
    ctx->pc = 0x2C50ACu;
label_2c50ac:
    // 0x2c50ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c50acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c50b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C50B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C50B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C50B0u;
            // 0x2c50b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C50B8u;
}
