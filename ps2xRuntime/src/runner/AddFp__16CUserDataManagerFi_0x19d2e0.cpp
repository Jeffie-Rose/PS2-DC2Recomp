#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddFp__16CUserDataManagerFi
// Address: 0x19d2e0 - 0x19d328
void AddFp__16CUserDataManagerFi_0x19d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddFp__16CUserDataManagerFi_0x19d2e0");
#endif

    switch (ctx->pc) {
        case 0x19d2fcu: goto label_19d2fc;
        case 0x19d314u: goto label_19d314;
        default: break;
    }

    ctx->pc = 0x19d2e0u;

    // 0x19d2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d2f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d2f4: 0xc0673a8  jal         func_19CEA0
    ctx->pc = 0x19D2F4u;
    SET_GPR_U32(ctx, 31, 0x19D2FCu);
    ctx->pc = 0x19D2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2F4u;
            // 0x19d2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2FCu; }
        if (ctx->pc != 0x19D2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2FCu; }
        if (ctx->pc != 0x19D2FCu) { return; }
    }
    ctx->pc = 0x19D2FCu;
label_19d2fc:
    // 0x19d2fc: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D2FCu;
    {
        const bool branch_taken_0x19d2fc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x19D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2FCu;
            // 0x19d300: 0x262440b8  addiu       $a0, $s1, 0x40B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2fc) {
            ctx->pc = 0x19D30Cu;
            goto label_19d30c;
        }
    }
    ctx->pc = 0x19D304u;
    // 0x19d304: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19D304u;
    {
        const bool branch_taken_0x19d304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D304u;
            // 0x19d308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d304) {
            ctx->pc = 0x19D314u;
            goto label_19d314;
        }
    }
    ctx->pc = 0x19D30Cu;
label_19d30c:
    // 0x19d30c: 0xc065f78  jal         func_197DE0
    ctx->pc = 0x19D30Cu;
    SET_GPR_U32(ctx, 31, 0x19D314u);
    ctx->pc = 0x19D310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D30Cu;
            // 0x19d310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D314u; }
        if (ctx->pc != 0x19D314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D314u; }
        if (ctx->pc != 0x19D314u) { return; }
    }
    ctx->pc = 0x19D314u;
label_19d314:
    // 0x19d314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d31c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d320: 0x3e00008  jr          $ra
    ctx->pc = 0x19D320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D320u;
            // 0x19d324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D328u;
}
