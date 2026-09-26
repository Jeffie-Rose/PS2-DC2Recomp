#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchCharaTexb__6CSceneFi
// Address: 0x2c94f0 - 0x2c958c
void SearchCharaTexb__6CSceneFi_0x2c94f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchCharaTexb__6CSceneFi_0x2c94f0");
#endif

    switch (ctx->pc) {
        case 0x2c9518u: goto label_2c9518;
        case 0x2c9530u: goto label_2c9530;
        case 0x2c9540u: goto label_2c9540;
        default: break;
    }

    ctx->pc = 0x2c94f0u;

    // 0x2c94f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c94f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c94f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c94f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c94f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c94f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c94fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c94fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9500: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c9500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9508: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c9508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c950c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9510: 0xc0a1240  jal         func_284900
    ctx->pc = 0x2C9510u;
    SET_GPR_U32(ctx, 31, 0x2C9518u);
    ctx->pc = 0x2C9514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9510u;
            // 0x2c9514: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9518u; }
        if (ctx->pc != 0x2C9518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9518u; }
        if (ctx->pc != 0x2C9518u) { return; }
    }
    ctx->pc = 0x2C9518u;
label_2c9518:
    // 0x2c9518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c951c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C951Cu;
    {
        const bool branch_taken_0x2c951c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C9520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C951Cu;
            // 0x2c9520: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c951c) {
            ctx->pc = 0x2C952Cu;
            goto label_2c952c;
        }
    }
    ctx->pc = 0x2C9524u;
    // 0x2c9524: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C9524u;
    {
        const bool branch_taken_0x2c9524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9524u;
            // 0x2c9528: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9524) {
            ctx->pc = 0x2C956Cu;
            goto label_2c956c;
        }
    }
    ctx->pc = 0x2C952Cu;
label_2c952c:
    // 0x2c952c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2c952cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2c9530:
    // 0x2c9530: 0x12530009  beq         $s2, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9530u;
    {
        const bool branch_taken_0x2c9530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C9534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9530u;
            // 0x2c9534: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9530) {
            ctx->pc = 0x2C9558u;
            goto label_2c9558;
        }
    }
    ctx->pc = 0x2C9538u;
    // 0x2c9538: 0xc0a1240  jal         func_284900
    ctx->pc = 0x2C9538u;
    SET_GPR_U32(ctx, 31, 0x2C9540u);
    ctx->pc = 0x2C953Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9538u;
            // 0x2c953c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9540u; }
        if (ctx->pc != 0x2C9540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9540u; }
        if (ctx->pc != 0x2C9540u) { return; }
    }
    ctx->pc = 0x2C9540u;
label_2c9540:
    // 0x2c9540: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9540u;
    {
        const bool branch_taken_0x2c9540 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2c9540) {
            ctx->pc = 0x2C9558u;
            goto label_2c9558;
        }
    }
    ctx->pc = 0x2C9548u;
    // 0x2c9548: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9548u;
    {
        const bool branch_taken_0x2c9548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2C954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9548u;
            // 0x2c954c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9548) {
            ctx->pc = 0x2C9558u;
            goto label_2c9558;
        }
    }
    ctx->pc = 0x2C9550u;
    // 0x2c9550: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9550u;
    {
        const bool branch_taken_0x2c9550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9550u;
            // 0x2c9554: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9550) {
            ctx->pc = 0x2C9570u;
            goto label_2c9570;
        }
    }
    ctx->pc = 0x2C9558u;
label_2c9558:
    // 0x2c9558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c9558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c955c: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x2c955cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2c9560: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C9560u;
    {
        const bool branch_taken_0x2c9560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9560u;
            // 0x2c9564: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9560) {
            ctx->pc = 0x2C9530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9530;
        }
    }
    ctx->pc = 0x2C9568u;
    // 0x2c9568: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c9568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c956c:
    // 0x2c956c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c956cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c9570:
    // 0x2c9570: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c9570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9574: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9578: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c957c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c957cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9584: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9584u;
            // 0x2c9588: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C958Cu;
}
