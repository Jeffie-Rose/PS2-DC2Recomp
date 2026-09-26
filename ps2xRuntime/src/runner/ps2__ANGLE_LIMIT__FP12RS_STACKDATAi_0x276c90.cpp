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
// Address: 0x276c90 - 0x276ccc
void ps2__ANGLE_LIMIT__FP12RS_STACKDATAi_0x276c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ANGLE_LIMIT__FP12RS_STACKDATAi_0x276c90");
#endif

    switch (ctx->pc) {
        case 0x276cacu: goto label_276cac;
        case 0x276cb8u: goto label_276cb8;
        default: break;
    }

    ctx->pc = 0x276c90u;

    // 0x276c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276c9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x276c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x276ca0: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x276ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276ca4: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x276CA4u;
    SET_GPR_U32(ctx, 31, 0x276CACu);
    ctx->pc = 0x276CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276CA4u;
            // 0x276ca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276CACu; }
        if (ctx->pc != 0x276CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276CACu; }
        if (ctx->pc != 0x276CACu) { return; }
    }
    ctx->pc = 0x276CACu;
label_276cac:
    // 0x276cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276cb0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276CB0u;
    SET_GPR_U32(ctx, 31, 0x276CB8u);
    ctx->pc = 0x276CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276CB0u;
            // 0x276cb4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276CB8u; }
        if (ctx->pc != 0x276CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276CB8u; }
        if (ctx->pc != 0x276CB8u) { return; }
    }
    ctx->pc = 0x276CB8u;
label_276cb8:
    // 0x276cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x276CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276CC4u;
            // 0x276cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276CCCu;
}
