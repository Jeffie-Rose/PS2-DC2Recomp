#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCALE_VECTOR__FP12RS_STACKDATAi
// Address: 0x2769d0 - 0x276a30
void ps2__SCALE_VECTOR__FP12RS_STACKDATAi_0x2769d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCALE_VECTOR__FP12RS_STACKDATAi_0x2769d0");
#endif

    switch (ctx->pc) {
        case 0x2769e4u: goto label_2769e4;
        case 0x2769f8u: goto label_2769f8;
        case 0x276a0cu: goto label_276a0c;
        case 0x276a20u: goto label_276a20;
        default: break;
    }

    ctx->pc = 0x2769d0u;

    // 0x2769d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2769d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2769d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2769d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2769d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2769dc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2769DCu;
    SET_GPR_U32(ctx, 31, 0x2769E4u);
    ctx->pc = 0x2769E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2769DCu;
            // 0x2769e0: 0x24c40018  addiu       $a0, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2769E4u; }
        if (ctx->pc != 0x2769E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2769E4u; }
        if (ctx->pc != 0x2769E4u) { return; }
    }
    ctx->pc = 0x2769E4u;
label_2769e4:
    // 0x2769e4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2769e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2769e8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2769e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2769ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2769f0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2769F0u;
    SET_GPR_U32(ctx, 31, 0x2769F8u);
    ctx->pc = 0x2769F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2769F0u;
            // 0x2769f4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2769F8u; }
        if (ctx->pc != 0x2769F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2769F8u; }
        if (ctx->pc != 0x2769F8u) { return; }
    }
    ctx->pc = 0x2769F8u;
label_2769f8:
    // 0x2769f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2769f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2769fc: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x2769fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x276a00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a04: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276A04u;
    SET_GPR_U32(ctx, 31, 0x276A0Cu);
    ctx->pc = 0x276A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276A04u;
            // 0x276a08: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A0Cu; }
        if (ctx->pc != 0x276A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A0Cu; }
        if (ctx->pc != 0x276A0Cu) { return; }
    }
    ctx->pc = 0x276A0Cu;
label_276a0c:
    // 0x276a0c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x276a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x276a10: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x276a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x276a14: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a18: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276A18u;
    SET_GPR_U32(ctx, 31, 0x276A20u);
    ctx->pc = 0x276A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276A18u;
            // 0x276a1c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A20u; }
        if (ctx->pc != 0x276A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A20u; }
        if (ctx->pc != 0x276A20u) { return; }
    }
    ctx->pc = 0x276A20u;
label_276a20:
    // 0x276a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276a28: 0x3e00008  jr          $ra
    ctx->pc = 0x276A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A28u;
            // 0x276a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276A30u;
}
