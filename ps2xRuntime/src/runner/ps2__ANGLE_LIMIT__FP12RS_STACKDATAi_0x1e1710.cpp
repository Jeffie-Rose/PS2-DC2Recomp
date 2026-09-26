#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ANGLE_LIMIT__FP12RS_STACKDATAi
// Address: 0x1e1710 - 0x1e174c
void ps2__ANGLE_LIMIT__FP12RS_STACKDATAi_0x1e1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ANGLE_LIMIT__FP12RS_STACKDATAi_0x1e1710");
#endif

    switch (ctx->pc) {
        case 0x1e172cu: goto label_1e172c;
        case 0x1e1738u: goto label_1e1738;
        default: break;
    }

    ctx->pc = 0x1e1710u;

    // 0x1e1710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e171c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e1720: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1e1720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e1724: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1E1724u;
    SET_GPR_U32(ctx, 31, 0x1E172Cu);
    ctx->pc = 0x1E1728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1724u;
            // 0x1e1728: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E172Cu; }
        if (ctx->pc != 0x1E172Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E172Cu; }
        if (ctx->pc != 0x1E172Cu) { return; }
    }
    ctx->pc = 0x1E172Cu;
label_1e172c:
    // 0x1e172c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e172cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1730: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1730u;
    SET_GPR_U32(ctx, 31, 0x1E1738u);
    ctx->pc = 0x1E1734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1730u;
            // 0x1e1734: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1738u; }
        if (ctx->pc != 0x1E1738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1738u; }
        if (ctx->pc != 0x1E1738u) { return; }
    }
    ctx->pc = 0x1E1738u;
label_1e1738:
    // 0x1e1738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e173c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1744: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1744u;
            // 0x1e1748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E174Cu;
}
