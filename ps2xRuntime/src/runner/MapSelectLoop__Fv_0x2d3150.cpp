#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MapSelectLoop__Fv
// Address: 0x2d3150 - 0x2d31b8
void MapSelectLoop__Fv_0x2d3150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MapSelectLoop__Fv_0x2d3150");
#endif

    switch (ctx->pc) {
        case 0x2d3198u: goto label_2d3198;
        case 0x2d31a8u: goto label_2d31a8;
        default: break;
    }

    ctx->pc = 0x2d3150u;

    // 0x2d3150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d3154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d315c: 0x8f849de0  lw          $a0, -0x6220($gp)
    ctx->pc = 0x2d315cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942176)));
    // 0x2d3160: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D3160u;
    {
        const bool branch_taken_0x2d3160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d3160) {
            ctx->pc = 0x2D31ACu;
            goto label_2d31ac;
        }
    }
    ctx->pc = 0x2D3168u;
    // 0x2d3168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d316c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D316Cu;
    {
        const bool branch_taken_0x2d316c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d316c) {
            ctx->pc = 0x2D31A0u;
            goto label_2d31a0;
        }
    }
    ctx->pc = 0x2D3174u;
    // 0x2d3174: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3174u;
    {
        const bool branch_taken_0x2d3174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3174) {
            ctx->pc = 0x2D3190u;
            goto label_2d3190;
        }
    }
    ctx->pc = 0x2D317Cu;
    // 0x2d317c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3180: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3180u;
    {
        const bool branch_taken_0x2d3180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3180) {
            ctx->pc = 0x2D31ACu;
            goto label_2d31ac;
        }
    }
    ctx->pc = 0x2D3188u;
    // 0x2d3188: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3188u;
    {
        const bool branch_taken_0x2d3188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3188u;
            // 0x2d318c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3188) {
            ctx->pc = 0x2D31ACu;
            goto label_2d31ac;
        }
    }
    ctx->pc = 0x2D3190u;
label_2d3190:
    // 0x2d3190: 0xc0b4adc  jal         func_2D2B70
    ctx->pc = 0x2D3190u;
    SET_GPR_U32(ctx, 31, 0x2D3198u);
    ctx->pc = 0x2D2B70u;
    if (runtime->hasFunction(0x2D2B70u)) {
        auto targetFn = runtime->lookupFunction(0x2D2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3198u; }
        if (ctx->pc != 0x2D3198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapTypeSelect__Fv_0x2d2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3198u; }
        if (ctx->pc != 0x2D3198u) { return; }
    }
    ctx->pc = 0x2D3198u;
label_2d3198:
    // 0x2d3198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3198u;
    {
        const bool branch_taken_0x2d3198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3198) {
            ctx->pc = 0x2D31A8u;
            goto label_2d31a8;
        }
    }
    ctx->pc = 0x2D31A0u;
label_2d31a0:
    // 0x2d31a0: 0xc0b4b54  jal         func_2D2D50
    ctx->pc = 0x2D31A0u;
    SET_GPR_U32(ctx, 31, 0x2D31A8u);
    ctx->pc = 0x2D2D50u;
    if (runtime->hasFunction(0x2D2D50u)) {
        auto targetFn = runtime->lookupFunction(0x2D2D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D31A8u; }
        if (ctx->pc != 0x2D31A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapSelect__Fv_0x2d2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D31A8u; }
        if (ctx->pc != 0x2D31A8u) { return; }
    }
    ctx->pc = 0x2D31A8u;
label_2d31a8:
    // 0x2d31a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d31a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d31ac:
    // 0x2d31ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d31acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d31b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D31B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D31B0u;
            // 0x2d31b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D31B8u;
}
