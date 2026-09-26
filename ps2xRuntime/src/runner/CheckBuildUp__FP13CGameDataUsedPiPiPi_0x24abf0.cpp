#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckBuildUp__FP13CGameDataUsedPiPiPi
// Address: 0x24abf0 - 0x24ac1c
void CheckBuildUp__FP13CGameDataUsedPiPiPi_0x24abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckBuildUp__FP13CGameDataUsedPiPiPi_0x24abf0");
#endif

    switch (ctx->pc) {
        case 0x24ac04u: goto label_24ac04;
        default: break;
    }

    ctx->pc = 0x24abf0u;

    // 0x24abf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24abf4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ABF4u;
    {
        const bool branch_taken_0x24abf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABF4u;
            // 0x24abf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abf4) {
            ctx->pc = 0x24AC0Cu;
            goto label_24ac0c;
        }
    }
    ctx->pc = 0x24ABFCu;
    // 0x24abfc: 0xc0663f0  jal         func_198FC0
    ctx->pc = 0x24ABFCu;
    SET_GPR_U32(ctx, 31, 0x24AC04u);
    ctx->pc = 0x198FC0u;
    if (runtime->hasFunction(0x198FC0u)) {
        auto targetFn = runtime->lookupFunction(0x198FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AC04u; }
        if (ctx->pc != 0x24AC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsBuildUp__13CGameDataUsedFPiPiPi_0x198fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AC04u; }
        if (ctx->pc != 0x24AC04u) { return; }
    }
    ctx->pc = 0x24AC04u;
label_24ac04:
    // 0x24ac04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24AC04u;
    {
        const bool branch_taken_0x24ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC04u;
            // 0x24ac08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac04) {
            ctx->pc = 0x24AC14u;
            goto label_24ac14;
        }
    }
    ctx->pc = 0x24AC0Cu;
label_24ac0c:
    // 0x24ac0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ac0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ac10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24ac14:
    // 0x24ac14: 0x3e00008  jr          $ra
    ctx->pc = 0x24AC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC14u;
            // 0x24ac18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24AC1Cu;
}
