#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcPushAlpha__FiPf
// Address: 0x2a2950 - 0x2a29f0
void CalcPushAlpha__FiPf_0x2a2950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcPushAlpha__FiPf_0x2a2950");
#endif

    ctx->pc = 0x2a2950u;

    // 0x2a2950: 0x878399ac  lh          $v1, -0x6654($gp)
    ctx->pc = 0x2a2950u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941100)));
    // 0x2a2954: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A2954u;
    {
        const bool branch_taken_0x2a2954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2954u;
            // 0x2a2958: 0x2783846c  addiu       $v1, $gp, -0x7B94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2954) {
            ctx->pc = 0x2A29A8u;
            goto label_2a29a8;
        }
    }
    ctx->pc = 0x2A295Cu;
    // 0x2a295c: 0x2783846c  addiu       $v1, $gp, -0x7B94
    ctx->pc = 0x2a295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935660));
    // 0x2a2960: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2a2960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a2964: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x2a2964u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2968: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a2968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a296c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2970: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2a2970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a2974: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a2974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2978: 0x0  nop
    ctx->pc = 0x2a2978u;
    // NOP
    // 0x2a297c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a297cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2984: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2a2984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a2988: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x2a2988u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x2a298c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a298cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2990: 0x0  nop
    ctx->pc = 0x2a2990u;
    // NOP
    // 0x2a2994: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2A2994u;
    {
        const bool branch_taken_0x2a2994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2994) {
            ctx->pc = 0x2A29E8u;
            goto label_2a29e8;
        }
    }
    ctx->pc = 0x2A299Cu;
    // 0x2a299c: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2a299cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a29a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A29A0u;
    {
        const bool branch_taken_0x2a29a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A29A0u;
            // 0x2a29a4: 0xa78099ac  sh          $zero, -0x6654($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29a0) {
            ctx->pc = 0x2A29E8u;
            goto label_2a29e8;
        }
    }
    ctx->pc = 0x2A29A8u;
label_2a29a8:
    // 0x2a29a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a29ac: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2a29acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a29b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a29b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a29b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a29b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a29b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a29bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a29bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a29c0: 0x0  nop
    ctx->pc = 0x2a29c0u;
    // NOP
    // 0x2a29c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a29c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a29c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a29c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a29cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a29ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a29d0: 0x0  nop
    ctx->pc = 0x2a29d0u;
    // NOP
    // 0x2a29d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A29D4u;
    {
        const bool branch_taken_0x2a29d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A29D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A29D4u;
            // 0x2a29d8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29d4) {
            ctx->pc = 0x2A29E8u;
            goto label_2a29e8;
        }
    }
    ctx->pc = 0x2A29DCu;
    // 0x2a29dc: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2a29dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a29e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a29e4: 0xa78399ac  sh          $v1, -0x6654($gp)
    ctx->pc = 0x2a29e4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 3));
label_2a29e8:
    // 0x2a29e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A29E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A29F0u;
}
