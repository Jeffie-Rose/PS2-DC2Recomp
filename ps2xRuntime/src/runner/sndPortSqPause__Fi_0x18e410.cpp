#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndPortSqPause__Fi
// Address: 0x18e410 - 0x18e460
void sndPortSqPause__Fi_0x18e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndPortSqPause__Fi_0x18e410");
#endif

    switch (ctx->pc) {
        case 0x18e420u: goto label_18e420;
        case 0x18e448u: goto label_18e448;
        default: break;
    }

    ctx->pc = 0x18e410u;

    // 0x18e410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e418: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18E418u;
    SET_GPR_U32(ctx, 31, 0x18E420u);
    ctx->pc = 0x18E41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E418u;
            // 0x18e41c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E420u; }
        if (ctx->pc != 0x18E420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E420u; }
        if (ctx->pc != 0x18E420u) { return; }
    }
    ctx->pc = 0x18E420u;
label_18e420:
    // 0x18e420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e424: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E424u;
    {
        const bool branch_taken_0x18e424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e424) {
            ctx->pc = 0x18E450u;
            goto label_18e450;
        }
    }
    ctx->pc = 0x18E42Cu;
    // 0x18e42c: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x18e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18e430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e434: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E434u;
    {
        const bool branch_taken_0x18e434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e434) {
            ctx->pc = 0x18E450u;
            goto label_18e450;
        }
    }
    ctx->pc = 0x18E43Cu;
    // 0x18e43c: 0x8e05020c  lw          $a1, 0x20C($s0)
    ctx->pc = 0x18e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18e440: 0xc063db0  jal         func_18F6C0
    ctx->pc = 0x18E440u;
    SET_GPR_U32(ctx, 31, 0x18E448u);
    ctx->pc = 0x18E444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E440u;
            // 0x18e444: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F6C0u;
    if (runtime->hasFunction(0x18F6C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E448u; }
        if (ctx->pc != 0x18E448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSqStop__Fii_0x18f6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E448u; }
        if (ctx->pc != 0x18E448u) { return; }
    }
    ctx->pc = 0x18E448u;
label_18e448:
    // 0x18e448: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e44c: 0xae030210  sw          $v1, 0x210($s0)
    ctx->pc = 0x18e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 3));
label_18e450:
    // 0x18e450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e458: 0x3e00008  jr          $ra
    ctx->pc = 0x18E458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E458u;
            // 0x18e45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E460u;
}
