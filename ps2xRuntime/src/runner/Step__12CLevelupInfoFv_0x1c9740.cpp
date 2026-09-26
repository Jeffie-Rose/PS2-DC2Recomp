#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CLevelupInfoFv
// Address: 0x1c9740 - 0x1c980c
void Step__12CLevelupInfoFv_0x1c9740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CLevelupInfoFv_0x1c9740");
#endif

    ctx->pc = 0x1c9740u;

    // 0x1c9740: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1c9740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c9744: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C9744u;
    {
        const bool branch_taken_0x1c9744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9744u;
            // 0x1c9748: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9744) {
            ctx->pc = 0x1C9804u;
            goto label_1c9804;
        }
    }
    ctx->pc = 0x1C974Cu;
    // 0x1c974c: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C974Cu;
    {
        const bool branch_taken_0x1c974c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C974Cu;
            // 0x1c9750: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c974c) {
            ctx->pc = 0x1C97C4u;
            goto label_1c97c4;
        }
    }
    ctx->pc = 0x1C9754u;
    // 0x1c9754: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9754u;
    {
        const bool branch_taken_0x1c9754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9754u;
            // 0x1c9758: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9754) {
            ctx->pc = 0x1C9774u;
            goto label_1c9774;
        }
    }
    ctx->pc = 0x1C975Cu;
    // 0x1c975c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C975Cu;
    {
        const bool branch_taken_0x1c975c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C975Cu;
            // 0x1c9760: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c975c) {
            ctx->pc = 0x1C9774u;
            goto label_1c9774;
        }
    }
    ctx->pc = 0x1C9764u;
    // 0x1c9764: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9764u;
    {
        const bool branch_taken_0x1c9764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9764) {
            ctx->pc = 0x1C9774u;
            goto label_1c9774;
        }
    }
    ctx->pc = 0x1C976Cu;
    // 0x1c976c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C976Cu;
    {
        const bool branch_taken_0x1c976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c976c) {
            ctx->pc = 0x1C9804u;
            goto label_1c9804;
        }
    }
    ctx->pc = 0x1C9774u;
label_1c9774:
    // 0x1c9774: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1c9774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9778: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1c9778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1c977c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1c977cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1c9780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c9780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9784: 0x0  nop
    ctx->pc = 0x1c9784u;
    // NOP
    // 0x1c9788: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c978c: 0x0  nop
    ctx->pc = 0x1c978cu;
    // NOP
    // 0x1c9790: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9790u;
    {
        const bool branch_taken_0x1c9790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9790u;
            // 0x1c9794: 0x3c033dcc  lui         $v1, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9790) {
            ctx->pc = 0x1C97B0u;
            goto label_1c97b0;
        }
    }
    ctx->pc = 0x1C9798u;
    // 0x1c9798: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c9798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c979c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c979cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c97a0: 0x0  nop
    ctx->pc = 0x1c97a0u;
    // NOP
    // 0x1c97a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c97a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c97a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C97A8u;
    {
        const bool branch_taken_0x1c97a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97A8u;
            // 0x1c97ac: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97a8) {
            ctx->pc = 0x1C9804u;
            goto label_1c9804;
        }
    }
    ctx->pc = 0x1C97B0u;
label_1c97b0:
    // 0x1c97b0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1c97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1c97b4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1c97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c97b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c97bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C97BCu;
    {
        const bool branch_taken_0x1c97bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97BCu;
            // 0x1c97c0: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97bc) {
            ctx->pc = 0x1C9804u;
            goto label_1c9804;
        }
    }
    ctx->pc = 0x1C97C4u;
label_1c97c4:
    // 0x1c97c4: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1c97c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c97c8: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1c97c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1c97cc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1c97ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1c97d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c97d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c97d4: 0x0  nop
    ctx->pc = 0x1c97d4u;
    // NOP
    // 0x1c97d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c97d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c97dc: 0x0  nop
    ctx->pc = 0x1c97dcu;
    // NOP
    // 0x1c97e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C97E0u;
    {
        const bool branch_taken_0x1c97e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C97E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97E0u;
            // 0x1c97e4: 0x3c033dcc  lui         $v1, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97e0) {
            ctx->pc = 0x1C9800u;
            goto label_1c9800;
        }
    }
    ctx->pc = 0x1C97E8u;
    // 0x1c97e8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c97e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c97ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c97ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c97f0: 0x0  nop
    ctx->pc = 0x1c97f0u;
    // NOP
    // 0x1c97f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c97f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c97f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C97F8u;
    {
        const bool branch_taken_0x1c97f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97F8u;
            // 0x1c97fc: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97f8) {
            ctx->pc = 0x1C9804u;
            goto label_1c9804;
        }
    }
    ctx->pc = 0x1C9800u;
label_1c9800:
    // 0x1c9800: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1c9800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_1c9804:
    // 0x1c9804: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C980Cu;
}
