#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsSpectolTrans__13CGameDataUsedFv
// Address: 0x1989d0 - 0x198a10
void IsSpectolTrans__13CGameDataUsedFv_0x1989d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsSpectolTrans__13CGameDataUsedFv_0x1989d0");
#endif

    switch (ctx->pc) {
        case 0x1989e0u: goto label_1989e0;
        default: break;
    }

    ctx->pc = 0x1989d0u;

    // 0x1989d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1989d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1989d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1989d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1989d8: 0xc065708  jal         func_195C20
    ctx->pc = 0x1989D8u;
    SET_GPR_U32(ctx, 31, 0x1989E0u);
    ctx->pc = 0x1989DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1989D8u;
            // 0x1989dc: 0x84840002  lh          $a0, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989E0u; }
        if (ctx->pc != 0x1989E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989E0u; }
        if (ctx->pc != 0x1989E0u) { return; }
    }
    ctx->pc = 0x1989E0u;
label_1989e0:
    // 0x1989e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1989E0u;
    {
        const bool branch_taken_0x1989e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1989e0) {
            ctx->pc = 0x198A00u;
            goto label_198a00;
        }
    }
    ctx->pc = 0x1989E8u;
    // 0x1989e8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1989e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1989ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1989ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1989f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1989F0u;
    {
        const bool branch_taken_0x1989f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1989F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1989F0u;
            // 0x1989f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989f0) {
            ctx->pc = 0x198A04u;
            goto label_198a04;
        }
    }
    ctx->pc = 0x1989F8u;
    // 0x1989f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1989F8u;
    {
        const bool branch_taken_0x1989f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1989FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1989F8u;
            // 0x1989fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989f8) {
            ctx->pc = 0x198A04u;
            goto label_198a04;
        }
    }
    ctx->pc = 0x198A00u;
label_198a00:
    // 0x198a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198a04:
    // 0x198a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198a08: 0x3e00008  jr          $ra
    ctx->pc = 0x198A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198A08u;
            // 0x198a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198A10u;
}
