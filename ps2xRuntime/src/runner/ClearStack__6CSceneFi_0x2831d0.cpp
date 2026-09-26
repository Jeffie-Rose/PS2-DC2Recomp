#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearStack__6CSceneFi
// Address: 0x2831d0 - 0x283264
void ClearStack__6CSceneFi_0x2831d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearStack__6CSceneFi_0x2831d0");
#endif

    switch (ctx->pc) {
        case 0x2831fcu: goto label_2831fc;
        case 0x28322cu: goto label_28322c;
        default: break;
    }

    ctx->pc = 0x2831d0u;

    // 0x2831d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2831d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2831d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2831d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2831d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2831d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2831dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2831dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2831e0: 0x59880  sll         $s3, $a1, 2
    ctx->pc = 0x2831e0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2831e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2831e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2831e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2831e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2831ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2831ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2831f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2831f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2831F4u;
    {
        const bool branch_taken_0x2831f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2831F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2831F4u;
            // 0x2831f8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831f4) {
            ctx->pc = 0x283238u;
            goto label_283238;
        }
    }
    ctx->pc = 0x2831FCu;
label_2831fc:
    // 0x2831fc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2831fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x283200: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x283200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x283204: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x283204u;
    {
        const bool branch_taken_0x283204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283204) {
            ctx->pc = 0x28322Cu;
            goto label_28322c;
        }
    }
    ctx->pc = 0x28320Cu;
    // 0x28320c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x28320cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x283210: 0x212082a  slt         $at, $s0, $s2
    ctx->pc = 0x283210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x283214: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x283214u;
    {
        const bool branch_taken_0x283214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x283218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283214u;
            // 0x283218: 0xac60001c  sw          $zero, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283214) {
            ctx->pc = 0x28322Cu;
            goto label_28322c;
        }
    }
    ctx->pc = 0x28321Cu;
    // 0x28321c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x28321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283224: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x283224u;
    SET_GPR_U32(ctx, 31, 0x28322Cu);
    ctx->pc = 0x283228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283224u;
            // 0x283228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28322Cu; }
        if (ctx->pc != 0x28322Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28322Cu; }
        if (ctx->pc != 0x28322Cu) { return; }
    }
    ctx->pc = 0x28322Cu;
label_28322c:
    // 0x28322c: 0x0  nop
    ctx->pc = 0x28322cu;
    // NOP
    // 0x283230: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x283230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x283234: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x283234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_283238:
    // 0x283238: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x283238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28323c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x28323cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x283240: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x283240u;
    {
        const bool branch_taken_0x283240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283240u;
            // 0x283244: 0x2331821  addu        $v1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283240) {
            ctx->pc = 0x2831FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2831fc;
        }
    }
    ctx->pc = 0x283248u;
    // 0x283248: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x283248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28324c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28324cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28325c: 0x3e00008  jr          $ra
    ctx->pc = 0x28325Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28325Cu;
            // 0x283260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283264u;
}
