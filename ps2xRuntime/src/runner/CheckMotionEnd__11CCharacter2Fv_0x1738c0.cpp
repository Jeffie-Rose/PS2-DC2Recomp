#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMotionEnd__11CCharacter2Fv
// Address: 0x1738c0 - 0x17392c
void CheckMotionEnd__11CCharacter2Fv_0x1738c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMotionEnd__11CCharacter2Fv_0x1738c0");
#endif

    ctx->pc = 0x1738c0u;

    // 0x1738c0: 0x8c820374  lw          $v0, 0x374($a0)
    ctx->pc = 0x1738c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x1738c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1738C4u;
    {
        const bool branch_taken_0x1738c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1738c4) {
            ctx->pc = 0x1738D4u;
            goto label_1738d4;
        }
    }
    ctx->pc = 0x1738CCu;
    // 0x1738cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1738CCu;
    {
        const bool branch_taken_0x1738cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1738D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1738CCu;
            // 0x1738d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738cc) {
            ctx->pc = 0x173924u;
            goto label_173924;
        }
    }
    ctx->pc = 0x1738D4u;
label_1738d4:
    // 0x1738d4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1738d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1738d8: 0xc4830388  lwc1        $f3, 0x388($a0)
    ctx->pc = 0x1738d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1738dc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1738dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1738e0: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x1738e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1738e4: 0x0  nop
    ctx->pc = 0x1738e4u;
    // NOP
    // 0x1738e8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1738E8u;
    {
        const bool branch_taken_0x1738e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1738ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1738E8u;
            // 0x1738ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738e8) {
            ctx->pc = 0x173924u;
            goto label_173924;
        }
    }
    ctx->pc = 0x1738F0u;
    // 0x1738f0: 0xc4800390  lwc1        $f0, 0x390($a0)
    ctx->pc = 0x1738f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1738f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1738f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1738f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1738f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1738fc: 0x0  nop
    ctx->pc = 0x1738fcu;
    // NOP
    // 0x173900: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x173904: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x173904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x173908: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x173908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17390c: 0x0  nop
    ctx->pc = 0x17390cu;
    // NOP
    // 0x173910: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x173910u;
    {
        const bool branch_taken_0x173910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173910u;
            // 0x173914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173910) {
            ctx->pc = 0x173920u;
            goto label_173920;
        }
    }
    ctx->pc = 0x173918u;
    // 0x173918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173918u;
    {
        const bool branch_taken_0x173918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173918) {
            ctx->pc = 0x173924u;
            goto label_173924;
        }
    }
    ctx->pc = 0x173920u;
label_173920:
    // 0x173920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173924:
    // 0x173924: 0x3e00008  jr          $ra
    ctx->pc = 0x173924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17392Cu;
}
