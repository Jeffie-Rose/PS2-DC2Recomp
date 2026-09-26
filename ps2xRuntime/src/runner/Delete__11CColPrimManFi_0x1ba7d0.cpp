#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Delete__11CColPrimManFi
// Address: 0x1ba7d0 - 0x1ba834
void Delete__11CColPrimManFi_0x1ba7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Delete__11CColPrimManFi_0x1ba7d0");
#endif

    switch (ctx->pc) {
        case 0x1ba7f8u: goto label_1ba7f8;
        case 0x1ba808u: goto label_1ba808;
        default: break;
    }

    ctx->pc = 0x1ba7d0u;

    // 0x1ba7d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ba7d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ba7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ba7d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ba7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ba7dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ba7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ba7e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ba7e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba7e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ba7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ba7e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ba7e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba7f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba7f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7f8:
    // 0x1ba7f8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1ba7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1ba7fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ba7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba800: 0xc06e9a0  jal         func_1BA680
    ctx->pc = 0x1BA800u;
    SET_GPR_U32(ctx, 31, 0x1BA808u);
    ctx->pc = 0x1BA804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA800u;
            // 0x1ba804: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA808u; }
        if (ctx->pc != 0x1BA808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA808u; }
        if (ctx->pc != 0x1BA808u) { return; }
    }
    ctx->pc = 0x1BA808u;
label_1ba808:
    // 0x1ba808: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ba808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ba80c: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x1ba80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1ba810: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BA810u;
    {
        const bool branch_taken_0x1ba810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA810u;
            // 0x1ba814: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba810) {
            ctx->pc = 0x1BA7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba7f8;
        }
    }
    ctx->pc = 0x1BA818u;
    // 0x1ba818: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ba818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba81c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ba81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba820: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA82Cu;
            // 0x1ba830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA834u;
}
