#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: State__6ClsMesFv
// Address: 0x153e10 - 0x153eb8
void State__6ClsMesFv_0x153e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("State__6ClsMesFv_0x153e10");
#endif

    ctx->pc = 0x153e10u;

    // 0x153e10: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x153e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153e14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e18: 0x0  nop
    ctx->pc = 0x153e18u;
    // NOP
    // 0x153e1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x153e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153e20: 0x0  nop
    ctx->pc = 0x153e20u;
    // NOP
    // 0x153e24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153E24u;
    {
        const bool branch_taken_0x153e24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E24u;
            // 0x153e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e24) {
            ctx->pc = 0x153E34u;
            goto label_153e34;
        }
    }
    ctx->pc = 0x153E2Cu;
    // 0x153e2c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x153E2Cu;
    {
        const bool branch_taken_0x153e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153e2c) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153E34u;
label_153e34:
    // 0x153e34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x153e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153e38: 0x0  nop
    ctx->pc = 0x153e38u;
    // NOP
    // 0x153e3c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x153E3Cu;
    {
        const bool branch_taken_0x153e3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E3Cu;
            // 0x153e40: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e3c) {
            ctx->pc = 0x153E70u;
            goto label_153e70;
        }
    }
    ctx->pc = 0x153E44u;
    // 0x153e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e48: 0x0  nop
    ctx->pc = 0x153e48u;
    // NOP
    // 0x153e4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x153e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153e50: 0x0  nop
    ctx->pc = 0x153e50u;
    // NOP
    // 0x153e54: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x153E54u;
    {
        const bool branch_taken_0x153e54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153e54) {
            ctx->pc = 0x153E70u;
            goto label_153e70;
        }
    }
    ctx->pc = 0x153E5Cu;
    // 0x153e5c: 0x8c84018c  lw          $a0, 0x18C($a0)
    ctx->pc = 0x153e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x153e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153e64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x153e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x153e68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x153E68u;
    {
        const bool branch_taken_0x153e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E68u;
            // 0x153e6c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e68) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153E70u;
label_153e70:
    // 0x153e70: 0x8c8201c0  lw          $v0, 0x1C0($a0)
    ctx->pc = 0x153e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x153e74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153E74u;
    {
        const bool branch_taken_0x153e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E74u;
            // 0x153e78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e74) {
            ctx->pc = 0x153E84u;
            goto label_153e84;
        }
    }
    ctx->pc = 0x153E7Cu;
    // 0x153e7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x153E7Cu;
    {
        const bool branch_taken_0x153e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153e7c) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153E84u;
label_153e84:
    // 0x153e84: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x153e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x153e88: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x153e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x153e8c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x153e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x153e90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153E90u;
    {
        const bool branch_taken_0x153e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E90u;
            // 0x153e94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e90) {
            ctx->pc = 0x153EA0u;
            goto label_153ea0;
        }
    }
    ctx->pc = 0x153E98u;
    // 0x153e98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x153E98u;
    {
        const bool branch_taken_0x153e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153e98) {
            ctx->pc = 0x153EB0u;
            goto label_153eb0;
        }
    }
    ctx->pc = 0x153EA0u;
label_153ea0:
    // 0x153ea0: 0x8c8401cc  lw          $a0, 0x1CC($a0)
    ctx->pc = 0x153ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x153ea4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x153ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x153ea8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153eac: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x153eacu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_153eb0:
    // 0x153eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x153EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153EB8u;
}
