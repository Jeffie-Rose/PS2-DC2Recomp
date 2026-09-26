#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PosDelay__12CSceneObjSeqFi
// Address: 0x25c910 - 0x25c944
void PosDelay__12CSceneObjSeqFi_0x25c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PosDelay__12CSceneObjSeqFi_0x25c910");
#endif

    switch (ctx->pc) {
        case 0x25c924u: goto label_25c924;
        default: break;
    }

    ctx->pc = 0x25c910u;

    // 0x25c910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c91c: 0xc097100  jal         func_25C400
    ctx->pc = 0x25C91Cu;
    SET_GPR_U32(ctx, 31, 0x25C924u);
    ctx->pc = 0x25C920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C91Cu;
            // 0x25c920: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C924u; }
        if (ctx->pc != 0x25C924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C924u; }
        if (ctx->pc != 0x25C924u) { return; }
    }
    ctx->pc = 0x25C924u;
label_25c924:
    // 0x25c924: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C924u;
    {
        const bool branch_taken_0x25c924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C924u;
            // 0x25c928: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c924) {
            ctx->pc = 0x25C934u;
            goto label_25c934;
        }
    }
    ctx->pc = 0x25C92Cu;
    // 0x25c92c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25c930: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x25c930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_25c934:
    // 0x25c934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c93c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C93Cu;
            // 0x25c940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C944u;
}
