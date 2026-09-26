#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetActiveChrNo__16CUserDataManagerFi
// Address: 0x19c3d0 - 0x19c414
void SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActiveChrNo__16CUserDataManagerFi_0x19c3d0");
#endif

    switch (ctx->pc) {
        case 0x19c3f0u: goto label_19c3f0;
        case 0x19c404u: goto label_19c404;
        default: break;
    }

    ctx->pc = 0x19c3d0u;

    // 0x19c3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c3d4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19c3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19c3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c3dc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19c3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19c3e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c3e4: 0xa4254d96  sh          $a1, 0x4D96($at)
    ctx->pc = 0x19c3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19862), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c3e8: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x19C3E8u;
    SET_GPR_U32(ctx, 31, 0x19C3F0u);
    ctx->pc = 0x19C3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3E8u;
            // 0x19c3ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C3F0u; }
        if (ctx->pc != 0x19C3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C3F0u; }
        if (ctx->pc != 0x19C3F0u) { return; }
    }
    ctx->pc = 0x19C3F0u;
label_19c3f0:
    // 0x19c3f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C3F4u;
    {
        const bool branch_taken_0x19c3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3F4u;
            // 0x19c3f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3f4) {
            ctx->pc = 0x19C404u;
            goto label_19c404;
        }
    }
    ctx->pc = 0x19C3FCu;
    // 0x19c3fc: 0xc067c04  jal         func_19F010
    ctx->pc = 0x19C3FCu;
    SET_GPR_U32(ctx, 31, 0x19C404u);
    ctx->pc = 0x19F010u;
    if (runtime->hasFunction(0x19F010u)) {
        auto targetFn = runtime->lookupFunction(0x19F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C404u; }
        if (ctx->pc != 0x19C404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrNo__16CBattleCharaInfoFi_0x19f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C404u; }
        if (ctx->pc != 0x19C404u) { return; }
    }
    ctx->pc = 0x19C404u;
label_19c404:
    // 0x19c404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c40c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C40Cu;
            // 0x19c410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C414u;
}
