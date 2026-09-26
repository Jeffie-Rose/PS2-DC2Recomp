#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CSparcEffectFv
// Address: 0x1c0cf0 - 0x1c0d94
void Step__12CSparcEffectFv_0x1c0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CSparcEffectFv_0x1c0cf0");
#endif

    ctx->pc = 0x1c0cf0u;

    // 0x1c0cf0: 0x808300a9  lb          $v1, 0xA9($a0)
    ctx->pc = 0x1c0cf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 169)));
    // 0x1c0cf4: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C0CF4u;
    {
        const bool branch_taken_0x1c0cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CF4u;
            // 0x1c0cf8: 0x3363c  dsll32      $a2, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0cf4) {
            ctx->pc = 0x1C0D8Cu;
            goto label_1c0d8c;
        }
    }
    ctx->pc = 0x1C0CFCu;
    // 0x1c0cfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c0cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0d00: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1c0d00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1c0d04: 0x10c50013  beq         $a2, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C0D04u;
    {
        const bool branch_taken_0x1c0d04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C0D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D04u;
            // 0x1c0d08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d04) {
            ctx->pc = 0x1C0D54u;
            goto label_1c0d54;
        }
    }
    ctx->pc = 0x1C0D0Cu;
    // 0x1c0d0c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0D0Cu;
    {
        const bool branch_taken_0x1c0d0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0d0c) {
            ctx->pc = 0x1C0D1Cu;
            goto label_1c0d1c;
        }
    }
    ctx->pc = 0x1C0D14u;
    // 0x1c0d14: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C0D14u;
    {
        const bool branch_taken_0x1c0d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d14) {
            ctx->pc = 0x1C0D8Cu;
            goto label_1c0d8c;
        }
    }
    ctx->pc = 0x1C0D1Cu;
label_1c0d1c:
    // 0x1c0d1c: 0xc48100a0  lwc1        $f1, 0xA0($a0)
    ctx->pc = 0x1c0d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0d20: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1c0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1c0d24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c0d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0d28: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x1c0d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0d2c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c0d2cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1c0d30: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1c0d30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c0d34: 0xe48100a4  swc1        $f1, 0xA4($a0)
    ctx->pc = 0x1c0d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x1c0d38: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x1c0d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c0d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0d40: 0x0  nop
    ctx->pc = 0x1c0d40u;
    // NOP
    // 0x1c0d44: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0D44u;
    {
        const bool branch_taken_0x1c0d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0d44) {
            ctx->pc = 0x1C0D8Cu;
            goto label_1c0d8c;
        }
    }
    ctx->pc = 0x1C0D4Cu;
    // 0x1c0d4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C0D4Cu;
    {
        const bool branch_taken_0x1c0d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D4Cu;
            // 0x1c0d50: 0xa08500a9  sb          $a1, 0xA9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 169), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d4c) {
            ctx->pc = 0x1C0D8Cu;
            goto label_1c0d8c;
        }
    }
    ctx->pc = 0x1C0D54u;
label_1c0d54:
    // 0x1c0d54: 0xc48100a0  lwc1        $f1, 0xA0($a0)
    ctx->pc = 0x1c0d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0d58: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1c0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1c0d5c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c0d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0d60: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x1c0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0d64: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c0d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c0d68: 0x0  nop
    ctx->pc = 0x1c0d68u;
    // NOP
    // 0x1c0d6c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c0d6cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1c0d70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c0d74: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1c0d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0d78: 0x0  nop
    ctx->pc = 0x1c0d78u;
    // NOP
    // 0x1c0d7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0D7Cu;
    {
        const bool branch_taken_0x1c0d7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D7Cu;
            // 0x1c0d80: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d7c) {
            ctx->pc = 0x1C0D8Cu;
            goto label_1c0d8c;
        }
    }
    ctx->pc = 0x1C0D84u;
    // 0x1c0d84: 0xe48300a4  swc1        $f3, 0xA4($a0)
    ctx->pc = 0x1c0d84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x1c0d88: 0xa08000a9  sb          $zero, 0xA9($a0)
    ctx->pc = 0x1c0d88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 169), (uint8_t)GPR_U32(ctx, 0));
label_1c0d8c:
    // 0x1c0d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0D94u;
}
