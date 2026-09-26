#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUseCapacity__13CGameDataUsedFv
// Address: 0x197480 - 0x1974b8
void GetUseCapacity__13CGameDataUsedFv_0x197480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUseCapacity__13CGameDataUsedFv_0x197480");
#endif

    switch (ctx->pc) {
        case 0x197498u: goto label_197498;
        default: break;
    }

    ctx->pc = 0x197480u;

    // 0x197480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197488: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x197488u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19748c: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x19748cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x197490: 0xc06567c  jal         func_1959F0
    ctx->pc = 0x197490u;
    SET_GPR_U32(ctx, 31, 0x197498u);
    ctx->pc = 0x197494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197490u;
            // 0x197494: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959F0u;
    if (runtime->hasFunction(0x1959F0u)) {
        auto targetFn = runtime->lookupFunction(0x1959F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197498u; }
        if (ctx->pc != 0x197498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboData__9CGameDataFi_0x1959f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197498u; }
        if (ctx->pc != 0x197498u) { return; }
    }
    ctx->pc = 0x197498u;
label_197498:
    // 0x197498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197498u;
    {
        const bool branch_taken_0x197498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197498) {
            ctx->pc = 0x1974A8u;
            goto label_1974a8;
        }
    }
    ctx->pc = 0x1974A0u;
    // 0x1974a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1974A0u;
    {
        const bool branch_taken_0x1974a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974A0u;
            // 0x1974a4: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974a0) {
            ctx->pc = 0x1974ACu;
            goto label_1974ac;
        }
    }
    ctx->pc = 0x1974A8u;
label_1974a8:
    // 0x1974a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1974a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1974ac:
    // 0x1974ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1974acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1974b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1974B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1974B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974B0u;
            // 0x1974b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1974B8u;
}
