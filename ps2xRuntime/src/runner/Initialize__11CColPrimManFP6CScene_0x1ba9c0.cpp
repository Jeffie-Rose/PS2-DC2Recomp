#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CColPrimManFP6CScene
// Address: 0x1ba9c0 - 0x1baa24
void Initialize__11CColPrimManFP6CScene_0x1ba9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CColPrimManFP6CScene_0x1ba9c0");
#endif

    switch (ctx->pc) {
        case 0x1ba9e8u: goto label_1ba9e8;
        case 0x1ba9f4u: goto label_1ba9f4;
        default: break;
    }

    ctx->pc = 0x1ba9c0u;

    // 0x1ba9c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ba9c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ba9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ba9c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ba9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ba9cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ba9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ba9d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ba9d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ba9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ba9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba9dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1ba9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1ba9e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba9e8:
    // 0x1ba9e8: 0x2719021  addu        $s2, $s3, $s1
    ctx->pc = 0x1ba9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1ba9ec: 0xc06e9b0  jal         func_1BA6C0
    ctx->pc = 0x1BA9ECu;
    SET_GPR_U32(ctx, 31, 0x1BA9F4u);
    ctx->pc = 0x1BA9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9ECu;
            // 0x1ba9f0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA6C0u;
    if (runtime->hasFunction(0x1BA6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9F4u; }
        if (ctx->pc != 0x1BA9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8CColPrimFv_0x1ba6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9F4u; }
        if (ctx->pc != 0x1BA9F4u) { return; }
    }
    ctx->pc = 0x1BA9F4u;
label_1ba9f4:
    // 0x1ba9f4: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x1ba9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
    // 0x1ba9f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ba9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ba9fc: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x1ba9fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1baa00: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BAA00u;
    {
        const bool branch_taken_0x1baa00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA00u;
            // 0x1baa04: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa00) {
            ctx->pc = 0x1BA9E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba9e8;
        }
    }
    ctx->pc = 0x1BAA08u;
    // 0x1baa08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1baa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1baa0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1baa0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1baa10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1baa10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1baa14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1baa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baa18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1baa18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA1Cu;
            // 0x1baa20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAA24u;
}
