#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPosInOutForArea__FPfPfPf
// Address: 0x15bee0 - 0x15bf7c
void CheckPosInOutForArea__FPfPfPf_0x15bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPosInOutForArea__FPfPfPf_0x15bee0");
#endif

    switch (ctx->pc) {
        case 0x15bee8u: goto label_15bee8;
        default: break;
    }

    ctx->pc = 0x15bee0u;

    // 0x15bee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15bee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15bee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bee8:
    // 0x15bee8: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x15bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15beec: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x15beecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x15bef0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bef4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x15bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15bef8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x15bef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15befc: 0x0  nop
    ctx->pc = 0x15befcu;
    // NOP
    // 0x15bf00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15BF00u;
    {
        const bool branch_taken_0x15bf00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF00u;
            // 0x15bf04: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf00) {
            ctx->pc = 0x15BF0Cu;
            goto label_15bf0c;
        }
    }
    ctx->pc = 0x15BF08u;
    // 0x15bf08: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x15bf08u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_15bf0c:
    // 0x15bf0c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x15bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x15bf10: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x15bf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15bf14: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15bf14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bf18: 0x0  nop
    ctx->pc = 0x15bf18u;
    // NOP
    // 0x15bf1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15BF1Cu;
    {
        const bool branch_taken_0x15bf1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF1Cu;
            // 0x15bf20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf1c) {
            ctx->pc = 0x15BF2Cu;
            goto label_15bf2c;
        }
    }
    ctx->pc = 0x15BF24u;
    // 0x15bf24: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15BF24u;
    {
        const bool branch_taken_0x15bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf24) {
            ctx->pc = 0x15BF74u;
            goto label_15bf74;
        }
    }
    ctx->pc = 0x15BF2Cu;
label_15bf2c:
    // 0x15bf2c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x15bf2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bf30: 0x0  nop
    ctx->pc = 0x15bf30u;
    // NOP
    // 0x15bf34: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15BF34u;
    {
        const bool branch_taken_0x15bf34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bf34) {
            ctx->pc = 0x15BF44u;
            goto label_15bf44;
        }
    }
    ctx->pc = 0x15BF3Cu;
    // 0x15bf3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15BF3Cu;
    {
        const bool branch_taken_0x15bf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf3c) {
            ctx->pc = 0x15BF48u;
            goto label_15bf48;
        }
    }
    ctx->pc = 0x15BF44u;
label_15bf44:
    // 0x15bf44: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x15bf44u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_15bf48:
    // 0x15bf48: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x15bf48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bf4c: 0x0  nop
    ctx->pc = 0x15bf4cu;
    // NOP
    // 0x15bf50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15BF50u;
    {
        const bool branch_taken_0x15bf50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15BF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF50u;
            // 0x15bf54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf50) {
            ctx->pc = 0x15BF60u;
            goto label_15bf60;
        }
    }
    ctx->pc = 0x15BF58u;
    // 0x15bf58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15BF58u;
    {
        const bool branch_taken_0x15bf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf58) {
            ctx->pc = 0x15BF74u;
            goto label_15bf74;
        }
    }
    ctx->pc = 0x15BF60u;
label_15bf60:
    // 0x15bf60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15bf60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15bf64: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x15bf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15bf68: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x15BF68u;
    {
        const bool branch_taken_0x15bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF68u;
            // 0x15bf6c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf68) {
            ctx->pc = 0x15BEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15bee8;
        }
    }
    ctx->pc = 0x15BF70u;
    // 0x15bf70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bf74:
    // 0x15bf74: 0x3e00008  jr          $ra
    ctx->pc = 0x15BF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BF7Cu;
}
