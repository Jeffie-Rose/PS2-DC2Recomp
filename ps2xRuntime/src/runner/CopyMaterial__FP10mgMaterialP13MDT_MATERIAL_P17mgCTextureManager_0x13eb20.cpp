#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyMaterial__FP10mgMaterialP13MDT_MATERIAL_P17mgCTextureManager
// Address: 0x13eb20 - 0x13eb94
void CopyMaterial__FP10mgMaterialP13MDT_MATERIAL_P17mgCTextureManager_0x13eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyMaterial__FP10mgMaterialP13MDT_MATERIAL_P17mgCTextureManager_0x13eb20");
#endif

    switch (ctx->pc) {
        case 0x13eb80u: goto label_13eb80;
        default: break;
    }

    ctx->pc = 0x13eb20u;

    // 0x13eb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13eb24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13eb28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13eb2c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x13eb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13eb30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13eb30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb34: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x13eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13eb38: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x13eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13eb3c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x13eb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb40: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x13eb40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13eb44: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x13eb44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13eb48: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x13eb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13eb4c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x13eb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x13eb50: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x13eb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13eb54: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x13eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13eb58: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x13eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13eb5c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x13eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb60: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x13eb60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13eb64: 0x24a50034  addiu       $a1, $a1, 0x34
    ctx->pc = 0x13eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x13eb68: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x13eb68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13eb6c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x13eb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13eb70: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x13eb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x13eb74: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x13eb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb78: 0xc04b414  jal         func_12D050
    ctx->pc = 0x13EB78u;
    SET_GPR_U32(ctx, 31, 0x13EB80u);
    ctx->pc = 0x13EB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB78u;
            // 0x13eb7c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB80u; }
        if (ctx->pc != 0x13EB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB80u; }
        if (ctx->pc != 0x13EB80u) { return; }
    }
    ctx->pc = 0x13EB80u;
label_13eb80:
    // 0x13eb80: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x13eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x13eb84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13eb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eb88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13eb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB8Cu;
            // 0x13eb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EB94u;
}
