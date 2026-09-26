#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsEnableUseRepair__13CGameDataUsedFi
// Address: 0x198360 - 0x19838c
void IsEnableUseRepair__13CGameDataUsedFi_0x198360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsEnableUseRepair__13CGameDataUsedFi_0x198360");
#endif

    switch (ctx->pc) {
        case 0x198374u: goto label_198374;
        default: break;
    }

    ctx->pc = 0x198360u;

    // 0x198360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x198368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19836c: 0xc0660bc  jal         func_1982F0
    ctx->pc = 0x19836Cu;
    SET_GPR_U32(ctx, 31, 0x198374u);
    ctx->pc = 0x198370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19836Cu;
            // 0x198370: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1982F0u;
    if (runtime->hasFunction(0x1982F0u)) {
        auto targetFn = runtime->lookupFunction(0x1982F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198374u; }
        if (ctx->pc != 0x198374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableRepairItemNo__13CGameDataUsedFv_0x1982f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198374u; }
        if (ctx->pc != 0x198374u) { return; }
    }
    ctx->pc = 0x198374u;
label_198374:
    // 0x198374: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x198374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x198378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x198378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19837c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19837cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198380: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x198380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x198384: 0x3e00008  jr          $ra
    ctx->pc = 0x198384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198384u;
            // 0x198388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19838Cu;
}
