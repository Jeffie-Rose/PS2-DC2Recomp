#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__16CEffVerticalLineFv
// Address: 0x22efa0 - 0x22f054
void Step__16CEffVerticalLineFv_0x22efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__16CEffVerticalLineFv_0x22efa0");
#endif

    ctx->pc = 0x22efa0u;

    // 0x22efa0: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x22efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22efa4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x22efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x22efa8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x22efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22efac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22efacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22efb0: 0x3c033e85  lui         $v1, 0x3E85
    ctx->pc = 0x22efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16005 << 16));
    // 0x22efb4: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x22efb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x22efb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22efb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22efbc: 0x0  nop
    ctx->pc = 0x22efbcu;
    // NOP
    // 0x22efc0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22efc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x22efc4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x22efc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x22efc8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x22efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22efcc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x22efccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22efd0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x22efd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x22efd4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22efd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x22efd8: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x22efd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x22efdc: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x22efdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22efe0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22efe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22efe4: 0x0  nop
    ctx->pc = 0x22efe4u;
    // NOP
    // 0x22efe8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22EFE8u;
    {
        const bool branch_taken_0x22efe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22EFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EFE8u;
            // 0x22efec: 0x3c033c13  lui         $v1, 0x3C13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15379 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efe8) {
            ctx->pc = 0x22F00Cu;
            goto label_22f00c;
        }
    }
    ctx->pc = 0x22EFF0u;
    // 0x22eff0: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x22eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x22eff4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x22eff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x22eff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22eff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22effc: 0x0  nop
    ctx->pc = 0x22effcu;
    // NOP
    // 0x22f000: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22f000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f004: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22F004u;
    {
        const bool branch_taken_0x22f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F004u;
            // 0x22f008: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f004) {
            ctx->pc = 0x22F020u;
            goto label_22f020;
        }
    }
    ctx->pc = 0x22F00Cu;
label_22f00c:
    // 0x22f00c: 0x346374bc  ori         $v1, $v1, 0x74BC
    ctx->pc = 0x22f00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29884);
    // 0x22f010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f014: 0x0  nop
    ctx->pc = 0x22f014u;
    // NOP
    // 0x22f018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22f018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f01c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x22f01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_22f020:
    // 0x22f020: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x22f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f024: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x22f024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x22f028: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x22f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f02c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22f02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22f030: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22f030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f038: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x22f038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f03c: 0x0  nop
    ctx->pc = 0x22f03cu;
    // NOP
    // 0x22f040: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22F040u;
    {
        const bool branch_taken_0x22f040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F040u;
            // 0x22f044: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f040) {
            ctx->pc = 0x22F04Cu;
            goto label_22f04c;
        }
    }
    ctx->pc = 0x22F048u;
    // 0x22f048: 0xe482002c  swc1        $f2, 0x2C($a0)
    ctx->pc = 0x22f048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_22f04c:
    // 0x22f04c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F054u;
}
