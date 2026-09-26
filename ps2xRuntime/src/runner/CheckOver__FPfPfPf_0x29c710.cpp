#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckOver__FPfPfPf
// Address: 0x29c710 - 0x29c7a8
void CheckOver__FPfPfPf_0x29c710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckOver__FPfPfPf_0x29c710");
#endif

    switch (ctx->pc) {
        case 0x29c71cu: goto label_29c71c;
        default: break;
    }

    ctx->pc = 0x29c710u;

    // 0x29c710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c714: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c718: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x29c718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_29c71c:
    // 0x29c71c: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x29c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x29c720: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x29c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29c724: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x29c724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c728: 0x0  nop
    ctx->pc = 0x29c728u;
    // NOP
    // 0x29c72c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29C72Cu;
    {
        const bool branch_taken_0x29c72c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C72Cu;
            // 0x29c730: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c72c) {
            ctx->pc = 0x29C758u;
            goto label_29c758;
        }
    }
    ctx->pc = 0x29C734u;
    // 0x29c734: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x29c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x29c738: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29c738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c73c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c740: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29c740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c744: 0x0  nop
    ctx->pc = 0x29c744u;
    // NOP
    // 0x29c748: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29C748u;
    {
        const bool branch_taken_0x29c748 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C748u;
            // 0x29c74c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c748) {
            ctx->pc = 0x29C758u;
            goto label_29c758;
        }
    }
    ctx->pc = 0x29C750u;
    // 0x29c750: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x29C750u;
    {
        const bool branch_taken_0x29c750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c750) {
            ctx->pc = 0x29C7A0u;
            goto label_29c7a0;
        }
    }
    ctx->pc = 0x29C758u;
label_29c758:
    // 0x29c758: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x29c758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c75c: 0x0  nop
    ctx->pc = 0x29c75cu;
    // NOP
    // 0x29c760: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x29C760u;
    {
        const bool branch_taken_0x29c760 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C760u;
            // 0x29c764: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c760) {
            ctx->pc = 0x29C78Cu;
            goto label_29c78c;
        }
    }
    ctx->pc = 0x29C768u;
    // 0x29c768: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x29c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x29c76c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c770: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c774: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c778: 0x0  nop
    ctx->pc = 0x29c778u;
    // NOP
    // 0x29c77c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29C77Cu;
    {
        const bool branch_taken_0x29c77c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C77Cu;
            // 0x29c780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c77c) {
            ctx->pc = 0x29C78Cu;
            goto label_29c78c;
        }
    }
    ctx->pc = 0x29C784u;
    // 0x29c784: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29C784u;
    {
        const bool branch_taken_0x29c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c784) {
            ctx->pc = 0x29C7A0u;
            goto label_29c7a0;
        }
    }
    ctx->pc = 0x29C78Cu;
label_29c78c:
    // 0x29c78c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29c78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29c790: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x29c790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x29c794: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x29C794u;
    {
        const bool branch_taken_0x29c794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C794u;
            // 0x29c798: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c794) {
            ctx->pc = 0x29C71Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c71c;
        }
    }
    ctx->pc = 0x29C79Cu;
    // 0x29c79c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c7a0:
    // 0x29c7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C7A8u;
}
