#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Birth__9CParticleFPfPf
// Address: 0x2819e0 - 0x281a58
void Birth__9CParticleFPfPf_0x2819e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Birth__9CParticleFPfPf_0x2819e0");
#endif

    ctx->pc = 0x2819e0u;

    // 0x2819e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2819e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2819e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2819E4u;
    {
        const bool branch_taken_0x2819e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2819E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2819E4u;
            // 0x2819e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819e4) {
            ctx->pc = 0x2819F4u;
            goto label_2819f4;
        }
    }
    ctx->pc = 0x2819ECu;
    // 0x2819ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2819ECu;
    {
        const bool branch_taken_0x2819ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2819F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2819ECu;
            // 0x2819f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819ec) {
            ctx->pc = 0x281A50u;
            goto label_281a50;
        }
    }
    ctx->pc = 0x2819F4u;
label_2819f4:
    // 0x2819f4: 0x3c07bf00  lui         $a3, 0xBF00
    ctx->pc = 0x2819f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48896 << 16));
    // 0x2819f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2819f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2819fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2819fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x281a00: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x281a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x281a04: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x281a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x281a08: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x281a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x281a0c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x281a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x281a10: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x281a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281a14: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x281a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x281a18: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x281a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281a1c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x281a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x281a20: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x281a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281a24: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x281a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x281a28: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x281a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x281a2c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x281a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281a30: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x281a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x281a34: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x281a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281a38: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x281a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x281a3c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x281a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281a40: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x281a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x281a44: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x281a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x281a48: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x281a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281a4c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x281a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_281a50:
    // 0x281a50: 0x3e00008  jr          $ra
    ctx->pc = 0x281A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281A58u;
}
