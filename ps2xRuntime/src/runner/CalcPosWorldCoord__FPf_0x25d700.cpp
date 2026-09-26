#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcPosWorldCoord__FPf
// Address: 0x25d700 - 0x25d75c
void CalcPosWorldCoord__FPf_0x25d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcPosWorldCoord__FPf_0x25d700");
#endif

    switch (ctx->pc) {
        case 0x25d728u: goto label_25d728;
        case 0x25d738u: goto label_25d738;
        case 0x25d74cu: goto label_25d74c;
        default: break;
    }

    ctx->pc = 0x25d700u;

    // 0x25d700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25d704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d70c: 0x8f8397f4  lw          $v1, -0x680C($gp)
    ctx->pc = 0x25d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940660)));
    // 0x25d710: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x25D710u;
    {
        const bool branch_taken_0x25d710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D710u;
            // 0x25d714: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d710) {
            ctx->pc = 0x25D74Cu;
            goto label_25d74c;
        }
    }
    ctx->pc = 0x25D718u;
    // 0x25d718: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x25d718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x25d71c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x25d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25d720: 0xc04c13c  jal         func_1304F0
    ctx->pc = 0x25D720u;
    SET_GPR_U32(ctx, 31, 0x25D728u);
    ctx->pc = 0x25D724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D720u;
            // 0x25d724: 0x24a5e440  addiu       $a1, $a1, -0x1BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1304F0u;
    if (runtime->hasFunction(0x1304F0u)) {
        auto targetFn = runtime->lookupFunction(0x1304F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D728u; }
        if (ctx->pc != 0x25D728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRotMatrixXYZ__FPA4_fPf_0x1304f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D728u; }
        if (ctx->pc != 0x25D728u) { return; }
    }
    ctx->pc = 0x25D728u;
label_25d728:
    // 0x25d728: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25d72c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d730: 0xc097594  jal         func_25D650
    ctx->pc = 0x25D730u;
    SET_GPR_U32(ctx, 31, 0x25D738u);
    ctx->pc = 0x25D734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D730u;
            // 0x25d734: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D650u;
    if (runtime->hasFunction(0x25D650u)) {
        auto targetFn = runtime->lookupFunction(0x25D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D738u; }
        if (ctx->pc != 0x25D738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x25d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D738u; }
        if (ctx->pc != 0x25D738u) { return; }
    }
    ctx->pc = 0x25D738u;
label_25d738:
    // 0x25d738: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x25d738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x25d73c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d740: 0x24a5e430  addiu       $a1, $a1, -0x1BD0
    ctx->pc = 0x25d740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
    // 0x25d744: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25D744u;
    SET_GPR_U32(ctx, 31, 0x25D74Cu);
    ctx->pc = 0x25D748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D744u;
            // 0x25d748: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D74Cu; }
        if (ctx->pc != 0x25D74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D74Cu; }
        if (ctx->pc != 0x25D74Cu) { return; }
    }
    ctx->pc = 0x25D74Cu;
label_25d74c:
    // 0x25d74c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d754: 0x3e00008  jr          $ra
    ctx->pc = 0x25D754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D754u;
            // 0x25d758: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D75Cu;
}
