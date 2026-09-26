#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CCollisionMDTFv
// Address: 0x1485c0 - 0x1485fc
void Initialize__13CCollisionMDTFv_0x1485c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CCollisionMDTFv_0x1485c0");
#endif

    switch (ctx->pc) {
        case 0x1485e4u: goto label_1485e4;
        default: break;
    }

    ctx->pc = 0x1485c0u;

    // 0x1485c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1485c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1485c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1485c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1485c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1485cc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1485ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1485d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1485d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1485d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1485d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1485d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1485d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485dc: 0xc049c86  jal         func_127218
    ctx->pc = 0x1485DCu;
    SET_GPR_U32(ctx, 31, 0x1485E4u);
    ctx->pc = 0x1485E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1485DCu;
            // 0x1485e0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485E4u; }
        if (ctx->pc != 0x1485E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485E4u; }
        if (ctx->pc != 0x1485E4u) { return; }
    }
    ctx->pc = 0x1485E4u;
label_1485e4:
    // 0x1485e4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1485e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1485e8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1485e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1485ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1485ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1485f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1485f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1485f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1485F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1485F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1485F4u;
            // 0x1485f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1485FCu;
}
