#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EffectStep__4CMapFv
// Address: 0x15fda0 - 0x15fde4
void EffectStep__4CMapFv_0x15fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectStep__4CMapFv_0x15fda0");
#endif

    switch (ctx->pc) {
        case 0x15fdc8u: goto label_15fdc8;
        case 0x15fdd4u: goto label_15fdd4;
        default: break;
    }

    ctx->pc = 0x15fda0u;

    // 0x15fda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15fda4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15fdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fdb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15fdb4: 0xc4810ce4  lwc1        $f1, 0xCE4($a0)
    ctx->pc = 0x15fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fdb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15fdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdbc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x15fdbcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15fdc0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15FDC0u;
    SET_GPR_U32(ctx, 31, 0x15FDC8u);
    ctx->pc = 0x15FDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDC0u;
            // 0x15fdc4: 0xe48c0ce4  swc1        $f12, 0xCE4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDC8u; }
        if (ctx->pc != 0x15FDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDC8u; }
        if (ctx->pc != 0x15FDC8u) { return; }
    }
    ctx->pc = 0x15FDC8u;
label_15fdc8:
    // 0x15fdc8: 0xae020ce8  sw          $v0, 0xCE8($s0)
    ctx->pc = 0x15fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3304), GPR_U32(ctx, 2));
    // 0x15fdcc: 0xc05f4c8  jal         func_17D320
    ctx->pc = 0x15FDCCu;
    SET_GPR_U32(ctx, 31, 0x15FDD4u);
    ctx->pc = 0x15FDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDCCu;
            // 0x15fdd0: 0x26040310  addiu       $a0, $s0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D320u;
    if (runtime->hasFunction(0x17D320u)) {
        auto targetFn = runtime->lookupFunction(0x17D320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDD4u; }
        if (ctx->pc != 0x15FDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CEffectListFv_0x17d320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDD4u; }
        if (ctx->pc != 0x15FDD4u) { return; }
    }
    ctx->pc = 0x15FDD4u;
label_15fdd4:
    // 0x15fdd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15fdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fdd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fddc: 0x3e00008  jr          $ra
    ctx->pc = 0x15FDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDDCu;
            // 0x15fde0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FDE4u;
}
