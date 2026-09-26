#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CFireRasterFv
// Address: 0x1847c0 - 0x18481c
void Initialize__11CFireRasterFv_0x1847c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CFireRasterFv_0x1847c0");
#endif

    switch (ctx->pc) {
        case 0x1847e0u: goto label_1847e0;
        case 0x1847f4u: goto label_1847f4;
        default: break;
    }

    ctx->pc = 0x1847c0u;

    // 0x1847c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1847c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1847c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1847c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1847c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1847c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1847cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1847ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1847d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1847d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1847d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1847d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1847d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1847d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1847dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1847dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1847e0:
    // 0x1847e0: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1847e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1847e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1847e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1847e8: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x1847e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1847ec: 0xc049c86  jal         func_127218
    ctx->pc = 0x1847ECu;
    SET_GPR_U32(ctx, 31, 0x1847F4u);
    ctx->pc = 0x1847F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1847ECu;
            // 0x1847f0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847F4u; }
        if (ctx->pc != 0x1847F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847F4u; }
        if (ctx->pc != 0x1847F4u) { return; }
    }
    ctx->pc = 0x1847F4u;
label_1847f4:
    // 0x1847f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1847f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1847f8: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x1847f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1847fc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1847FCu;
    {
        const bool branch_taken_0x1847fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x184800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1847FCu;
            // 0x184800: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847fc) {
            ctx->pc = 0x1847E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1847e0;
        }
    }
    ctx->pc = 0x184804u;
    // 0x184804: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x184804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18480c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18480cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184814: 0x3e00008  jr          $ra
    ctx->pc = 0x184814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184814u;
            // 0x184818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18481Cu;
}
