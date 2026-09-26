#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CMiniEffPrimFv
// Address: 0x1c0f70 - 0x1c0fe4
void Step__12CMiniEffPrimFv_0x1c0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CMiniEffPrimFv_0x1c0f70");
#endif

    ctx->pc = 0x1c0f70u;

    // 0x1c0f70: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x1c0f70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c0f74: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0F74u;
    {
        const bool branch_taken_0x1c0f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F74u;
            // 0x1c0f78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f74) {
            ctx->pc = 0x1C0F84u;
            goto label_1c0f84;
        }
    }
    ctx->pc = 0x1C0F7Cu;
    // 0x1c0f7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0F7Cu;
    {
        const bool branch_taken_0x1c0f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F7Cu;
            // 0x1c0f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f7c) {
            ctx->pc = 0x1C0FDCu;
            goto label_1c0fdc;
        }
    }
    ctx->pc = 0x1C0F84u;
label_1c0f84:
    // 0x1c0f84: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C0F84u;
    {
        const bool branch_taken_0x1c0f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C0F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F84u;
            // 0x1c0f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f84) {
            ctx->pc = 0x1C0FDCu;
            goto label_1c0fdc;
        }
    }
    ctx->pc = 0x1C0F8Cu;
    // 0x1c0f8c: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x1c0f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c0f90: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1c0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1c0f94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c0f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c0f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0f9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c0fa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c0fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0fa4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1c0fa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1c0fa8: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x1c0fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1c0fac: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1c0facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0fb0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c0fb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c0fb4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c0fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c0fb8: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1c0fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0fbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c0fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0fc0: 0x0  nop
    ctx->pc = 0x1c0fc0u;
    // NOP
    // 0x1c0fc4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0FC4u;
    {
        const bool branch_taken_0x1c0fc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0fc4) {
            ctx->pc = 0x1C0FD8u;
            goto label_1c0fd8;
        }
    }
    ctx->pc = 0x1C0FCCu;
    // 0x1c0fcc: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x1c0fccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0fd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0FD0u;
    {
        const bool branch_taken_0x1c0fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FD0u;
            // 0x1c0fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fd0) {
            ctx->pc = 0x1C0FDCu;
            goto label_1c0fdc;
        }
    }
    ctx->pc = 0x1C0FD8u;
label_1c0fd8:
    // 0x1c0fd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0fdc:
    // 0x1c0fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0FE4u;
}
