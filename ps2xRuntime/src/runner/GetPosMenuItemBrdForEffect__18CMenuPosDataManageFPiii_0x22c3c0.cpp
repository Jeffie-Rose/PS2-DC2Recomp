#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPosMenuItemBrdForEffect__18CMenuPosDataManageFPiii
// Address: 0x22c3c0 - 0x22c3fc
void GetPosMenuItemBrdForEffect__18CMenuPosDataManageFPiii_0x22c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPosMenuItemBrdForEffect__18CMenuPosDataManageFPiii_0x22c3c0");
#endif

    switch (ctx->pc) {
        case 0x22c3d4u: goto label_22c3d4;
        default: break;
    }

    ctx->pc = 0x22c3c0u;

    // 0x22c3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22c3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22c3cc: 0xc08b0e0  jal         func_22C380
    ctx->pc = 0x22C3CCu;
    SET_GPR_U32(ctx, 31, 0x22C3D4u);
    ctx->pc = 0x22C3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C3CCu;
            // 0x22c3d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3D4u; }
        if (ctx->pc != 0x22C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3D4u; }
        if (ctx->pc != 0x22C3D4u) { return; }
    }
    ctx->pc = 0x22C3D4u;
label_22c3d4:
    // 0x22c3d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c3d8: 0x24630012  addiu       $v1, $v1, 0x12
    ctx->pc = 0x22c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
    // 0x22c3dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x22c3e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22c3e4: 0x24630015  addiu       $v1, $v1, 0x15
    ctx->pc = 0x22c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21));
    // 0x22c3e8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x22c3ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22c3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c3f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C3F4u;
            // 0x22c3f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C3FCu;
}
