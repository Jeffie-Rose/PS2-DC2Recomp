#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii
// Address: 0x22c380 - 0x22c3bc
void GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380");
#endif

    switch (ctx->pc) {
        case 0x22c394u: goto label_22c394;
        default: break;
    }

    ctx->pc = 0x22c380u;

    // 0x22c380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22c384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22c388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22c38c: 0xc08b09c  jal         func_22C270
    ctx->pc = 0x22C38Cu;
    SET_GPR_U32(ctx, 31, 0x22C394u);
    ctx->pc = 0x22C390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C38Cu;
            // 0x22c390: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C270u;
    if (runtime->hasFunction(0x22C270u)) {
        auto targetFn = runtime->lookupFunction(0x22C270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C394u; }
        if (ctx->pc != 0x22C394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemBrdKoma__18CMenuPosDataManageFPiii_0x22c270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C394u; }
        if (ctx->pc != 0x22C394u) { return; }
    }
    ctx->pc = 0x22C394u;
label_22c394:
    // 0x22c394: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c398: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x22c398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x22c39c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x22c3a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22c3a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x22c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x22c3a8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x22c3ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22c3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C3B4u;
            // 0x22c3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C3BCu;
}
