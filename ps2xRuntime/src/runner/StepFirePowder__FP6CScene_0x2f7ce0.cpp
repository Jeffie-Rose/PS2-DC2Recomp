#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepFirePowder__FP6CScene
// Address: 0x2f7ce0 - 0x2f7d80
void StepFirePowder__FP6CScene_0x2f7ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepFirePowder__FP6CScene_0x2f7ce0");
#endif

    switch (ctx->pc) {
        case 0x2f7d14u: goto label_2f7d14;
        default: break;
    }

    ctx->pc = 0x2f7ce0u;

    // 0x2f7ce0: 0x8f839f24  lw          $v1, -0x60DC($gp)
    ctx->pc = 0x2f7ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942500)));
    // 0x2f7ce4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F7CE4u;
    {
        const bool branch_taken_0x2f7ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7CE4u;
            // 0x2f7ce8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ce4) {
            ctx->pc = 0x2F7D78u;
            goto label_2f7d78;
        }
    }
    ctx->pc = 0x2F7CECu;
    // 0x2f7cec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f7cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7cf0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x2f7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x2f7cf4: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x2f7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x2f7cf8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2f7cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2f7cfc: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x2f7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x2f7d00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7d04: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2f7d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2f7d08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f7d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f7d0c: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x2f7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x2f7d10: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2f7d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f7d14:
    // 0x2f7d14: 0x8f839f34  lw          $v1, -0x60CC($gp)
    ctx->pc = 0x2f7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942516)));
    // 0x2f7d18: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2f7d1c: 0xc463001c  lwc1        $f3, 0x1C($v1)
    ctx->pc = 0x2f7d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f7d20: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7d24: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f7d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f7d28: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2f7d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7d2c: 0x0  nop
    ctx->pc = 0x2f7d2cu;
    // NOP
    // 0x2f7d30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7D30u;
    {
        const bool branch_taken_0x2f7d30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7D30u;
            // 0x2f7d34: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d30) {
            ctx->pc = 0x2F7D3Cu;
            goto label_2f7d3c;
        }
    }
    ctx->pc = 0x2F7D38u;
    // 0x2f7d38: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2f7d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_2f7d3c:
    // 0x2f7d3c: 0x0  nop
    ctx->pc = 0x2f7d3cu;
    // NOP
    // 0x2f7d40: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x2f7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f7d44: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2f7d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7d48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2f7d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2f7d4c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2f7d4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7d50: 0x0  nop
    ctx->pc = 0x2f7d50u;
    // NOP
    // 0x2f7d54: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7D54u;
    {
        const bool branch_taken_0x2f7d54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7D54u;
            // 0x2f7d58: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d54) {
            ctx->pc = 0x2F7D64u;
            goto label_2f7d64;
        }
    }
    ctx->pc = 0x2F7D5Cu;
    // 0x2f7d5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f7d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f7d60: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2f7d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2f7d64:
    // 0x2f7d64: 0x0  nop
    ctx->pc = 0x2f7d64u;
    // NOP
    // 0x2f7d68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f7d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f7d6c: 0x28c30100  slti        $v1, $a2, 0x100
    ctx->pc = 0x2f7d6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f7d70: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2F7D70u;
    {
        const bool branch_taken_0x2f7d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7D70u;
            // 0x2f7d74: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d70) {
            ctx->pc = 0x2F7D14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7d14;
        }
    }
    ctx->pc = 0x2F7D78u;
label_2f7d78:
    // 0x2f7d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7D80u;
}
