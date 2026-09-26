#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetExistThisPosData__11CItemSelectFi
// Address: 0x24f3b0 - 0x24f3e8
void GetExistThisPosData__11CItemSelectFi_0x24f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetExistThisPosData__11CItemSelectFi_0x24f3b0");
#endif

    ctx->pc = 0x24f3b0u;

    // 0x24f3b0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24F3B0u;
    {
        const bool branch_taken_0x24f3b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x24F3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F3B0u;
            // 0x24f3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3b0) {
            ctx->pc = 0x24F3CCu;
            goto label_24f3cc;
        }
    }
    ctx->pc = 0x24F3B8u;
    // 0x24f3b8: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x24f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x24f3bc: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x24f3bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24f3c0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F3C0u;
    {
        const bool branch_taken_0x24f3c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F3C0u;
            // 0x24f3c4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3c0) {
            ctx->pc = 0x24F3D4u;
            goto label_24f3d4;
        }
    }
    ctx->pc = 0x24F3C8u;
    // 0x24f3c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24f3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f3cc:
    // 0x24f3cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F3CCu;
    {
        const bool branch_taken_0x24f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f3cc) {
            ctx->pc = 0x24F3E0u;
            goto label_24f3e0;
        }
    }
    ctx->pc = 0x24F3D4u;
label_24f3d4:
    // 0x24f3d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24f3d8: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x24f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x24f3dc: 0x0  nop
    ctx->pc = 0x24f3dcu;
    // NOP
label_24f3e0:
    // 0x24f3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x24F3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24F3E8u;
}
