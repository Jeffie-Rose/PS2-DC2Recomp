#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPutPosXY__16CMenuPosDataFormFPcRiRi
// Address: 0x225d30 - 0x225db0
void GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30");
#endif

    switch (ctx->pc) {
        case 0x225d80u: goto label_225d80;
        case 0x225d88u: goto label_225d88;
        case 0x225d94u: goto label_225d94;
        default: break;
    }

    ctx->pc = 0x225d30u;

    // 0x225d30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225d34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x225d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x225d38: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x225d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x225d3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x225d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x225d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225d44: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x225d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225d4c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x225d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d50: 0xdf8293f0  ld          $v0, -0x6C10($gp)
    ctx->pc = 0x225d50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939632)));
    // 0x225d54: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x225d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x225d58: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x225d58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x225d5c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x225d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225d60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225d60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225d64: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x225d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d68: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x225d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x225d6c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x225d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225d70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225d74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x225d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d78: 0xc08976c  jal         func_225DB0
    ctx->pc = 0x225D78u;
    SET_GPR_U32(ctx, 31, 0x225D80u);
    ctx->pc = 0x225D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225D78u;
            // 0x225d7c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (runtime->hasFunction(0x225DB0u)) {
        auto targetFn = runtime->lookupFunction(0x225DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D80u; }
        if (ctx->pc != 0x225D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRfRf_0x225db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D80u; }
        if (ctx->pc != 0x225D80u) { return; }
    }
    ctx->pc = 0x225D80u;
label_225d80:
    // 0x225d80: 0xc0a248c  jal         func_289230
    ctx->pc = 0x225D80u;
    SET_GPR_U32(ctx, 31, 0x225D88u);
    ctx->pc = 0x225D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225D80u;
            // 0x225d84: 0xc7ac0048  lwc1        $f12, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D88u; }
        if (ctx->pc != 0x225D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D88u; }
        if (ctx->pc != 0x225D88u) { return; }
    }
    ctx->pc = 0x225D88u;
label_225d88:
    // 0x225d88: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x225d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x225d8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x225D8Cu;
    SET_GPR_U32(ctx, 31, 0x225D94u);
    ctx->pc = 0x225D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225D8Cu;
            // 0x225d90: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D94u; }
        if (ctx->pc != 0x225D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D94u; }
        if (ctx->pc != 0x225D94u) { return; }
    }
    ctx->pc = 0x225D94u;
label_225d94:
    // 0x225d94: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x225d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x225d98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x225d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225d9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225da8: 0x3e00008  jr          $ra
    ctx->pc = 0x225DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225DA8u;
            // 0x225dac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225DB0u;
}
