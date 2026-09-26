#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFloorID__16CSaveDataDungeonFi
// Address: 0x2f73f0 - 0x2f7434
void SetFloorID__16CSaveDataDungeonFi_0x2f73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFloorID__16CSaveDataDungeonFi_0x2f73f0");
#endif

    ctx->pc = 0x2f73f0u;

    // 0x2f73f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f73f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f73f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f73f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f73fc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2f73fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f7400: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f7400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f7404: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x2f7404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2f7408: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f7408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f740c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f740cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f7410: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f7410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f7414: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x2f7414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x2f7418: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2f7418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f741c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2f741cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f7420: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f7420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f7424: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x2f7424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2f7428: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2f7428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2f742c: 0x804a0d2  j           func_128348
    ctx->pc = 0x2F742Cu;
    ctx->pc = 0x2F7430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F742Cu;
            // 0x2f7430: 0x248419e0  addiu       $a0, $a0, 0x19E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x128348(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F7434u;
}
