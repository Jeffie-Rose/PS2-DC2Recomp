#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CMenuMoveItemFv
// Address: 0x21e3f0 - 0x21e468
void Initialize__13CMenuMoveItemFv_0x21e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CMenuMoveItemFv_0x21e3f0");
#endif

    switch (ctx->pc) {
        case 0x21e41cu: goto label_21e41c;
        case 0x21e438u: goto label_21e438;
        default: break;
    }

    ctx->pc = 0x21e3f0u;

    // 0x21e3f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21e3f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21e3f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21e3fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e400: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21e400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e408: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21e408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21e410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e414: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x21e414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21e418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21e418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e41c:
    // 0x21e41c: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x21e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x21e420: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x21e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x21e424: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x21e424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x21e428: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x21e428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x21e42c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e430: 0xc049c86  jal         func_127218
    ctx->pc = 0x21E430u;
    SET_GPR_U32(ctx, 31, 0x21E438u);
    ctx->pc = 0x21E434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E430u;
            // 0x21e434: 0x2406007c  addiu       $a2, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E438u; }
        if (ctx->pc != 0x21E438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E438u; }
        if (ctx->pc != 0x21E438u) { return; }
    }
    ctx->pc = 0x21E438u;
label_21e438:
    // 0x21e438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21e43c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x21e43cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21e440: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x21e440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21e444: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21E444u;
    {
        const bool branch_taken_0x21e444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E444u;
            // 0x21e448: 0x2652007c  addiu       $s2, $s2, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e444) {
            ctx->pc = 0x21E41Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e41c;
        }
    }
    ctx->pc = 0x21E44Cu;
    // 0x21e44c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21e44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e450: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e454: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e460: 0x3e00008  jr          $ra
    ctx->pc = 0x21E460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E460u;
            // 0x21e464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E468u;
}
