#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndMasterVolFadeInOut__Fiiff
// Address: 0x18d2b0 - 0x18d418
void sndMasterVolFadeInOut__Fiiff_0x18d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndMasterVolFadeInOut__Fiiff_0x18d2b0");
#endif

    ctx->pc = 0x18d2b0u;

    // 0x18d2b0: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x18d2b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18d2b4: 0x14200056  bnez        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x18D2B4u;
    {
        const bool branch_taken_0x18d2b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d2b4) {
            ctx->pc = 0x18D410u;
            goto label_18d410;
        }
    }
    ctx->pc = 0x18D2BCu;
    // 0x18d2bc: 0x4800054  bltz        $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x18D2BCu;
    {
        const bool branch_taken_0x18d2bc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18d2bc) {
            ctx->pc = 0x18D410u;
            goto label_18d410;
        }
    }
    ctx->pc = 0x18D2C4u;
    // 0x18d2c4: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x18d2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18d2c8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D2C8u;
    {
        const bool branch_taken_0x18d2c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d2c8) {
            ctx->pc = 0x18D2D8u;
            goto label_18d2d8;
        }
    }
    ctx->pc = 0x18D2D0u;
    // 0x18d2d0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x18D2D0u;
    {
        const bool branch_taken_0x18d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2d0) {
            ctx->pc = 0x18D410u;
            goto label_18d410;
        }
    }
    ctx->pc = 0x18D2D8u;
label_18d2d8:
    // 0x18d2d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d2d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d2dc: 0x0  nop
    ctx->pc = 0x18d2dcu;
    // NOP
    // 0x18d2e0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18d2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d2e4: 0x0  nop
    ctx->pc = 0x18d2e4u;
    // NOP
    // 0x18d2e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18D2E8u;
    {
        const bool branch_taken_0x18d2e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2E8u;
            // 0x18d2ec: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2e8) {
            ctx->pc = 0x18D2F8u;
            goto label_18d2f8;
        }
    }
    ctx->pc = 0x18D2F0u;
    // 0x18d2f0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x18d2f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x18d2f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18d2f8:
    // 0x18d2f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d2f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d2fc: 0x0  nop
    ctx->pc = 0x18d2fcu;
    // NOP
    // 0x18d300: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18d300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d304: 0x0  nop
    ctx->pc = 0x18d304u;
    // NOP
    // 0x18d308: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x18D308u;
    {
        const bool branch_taken_0x18d308 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D308u;
            // 0x18d30c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d308) {
            ctx->pc = 0x18D318u;
            goto label_18d318;
        }
    }
    ctx->pc = 0x18D310u;
    // 0x18d310: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x18d310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x18d314: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18d314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18d318:
    // 0x18d318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d31c: 0x0  nop
    ctx->pc = 0x18d31cu;
    // NOP
    // 0x18d320: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x18d320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d324: 0x0  nop
    ctx->pc = 0x18d324u;
    // NOP
    // 0x18d328: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D328u;
    {
        const bool branch_taken_0x18d328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d328) {
            ctx->pc = 0x18D334u;
            goto label_18d334;
        }
    }
    ctx->pc = 0x18D330u;
    // 0x18d330: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x18d330u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_18d334:
    // 0x18d334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d338: 0x0  nop
    ctx->pc = 0x18d338u;
    // NOP
    // 0x18d33c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x18d33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d340: 0x0  nop
    ctx->pc = 0x18d340u;
    // NOP
    // 0x18d344: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18D344u;
    {
        const bool branch_taken_0x18d344 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D344u;
            // 0x18d348: 0x43880  sll         $a3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d344) {
            ctx->pc = 0x18D364u;
            goto label_18d364;
        }
    }
    ctx->pc = 0x18D34Cu;
    // 0x18d34c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x18d34cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18d350: 0x27838ab0  addiu       $v1, $gp, -0x7550
    ctx->pc = 0x18d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937264));
    // 0x18d354: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d358: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18D358u;
    {
        const bool branch_taken_0x18d358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D358u;
            // 0x18d35c: 0xe46d0000  swc1        $f13, 0x0($v1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d358) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D360u;
    // 0x18d360: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x18d360u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18d364:
    // 0x18d364: 0x27838040  addiu       $v1, $gp, -0x7FC0
    ctx->pc = 0x18d364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934592));
    // 0x18d368: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x18d368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18d36c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x18d36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d370: 0x27838ab0  addiu       $v1, $gp, -0x7550
    ctx->pc = 0x18d370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937264));
    // 0x18d374: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18d374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18d378: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18d378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_18d37c:
    // 0x18d37c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x18d37cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18d380: 0x27838aa8  addiu       $v1, $gp, -0x7558
    ctx->pc = 0x18d380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937256));
    // 0x18d384: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x18d384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d388: 0x27838ab0  addiu       $v1, $gp, -0x7550
    ctx->pc = 0x18d388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937264));
    // 0x18d38c: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x18d38cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18d390: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18d390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d394: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x18d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d39c: 0x0  nop
    ctx->pc = 0x18d39cu;
    // NOP
    // 0x18d3a0: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x18d3a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x18d3a4: 0x27838ab8  addiu       $v1, $gp, -0x7548
    ctx->pc = 0x18d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937272));
    // 0x18d3a8: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x18d3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d3ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d3b0: 0x0  nop
    ctx->pc = 0x18d3b0u;
    // NOP
    // 0x18d3b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D3B4u;
    {
        const bool branch_taken_0x18d3b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3B4u;
            // 0x18d3b8: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3b4) {
            ctx->pc = 0x18D3C0u;
            goto label_18d3c0;
        }
    }
    ctx->pc = 0x18D3BCu;
    // 0x18d3bc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18d3bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_18d3c0:
    // 0x18d3c0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x18d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x18d3c4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x18d3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x18d3c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d3cc: 0x0  nop
    ctx->pc = 0x18d3ccu;
    // NOP
    // 0x18d3d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d3d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d3d4: 0x0  nop
    ctx->pc = 0x18d3d4u;
    // NOP
    // 0x18d3d8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x18D3D8u;
    {
        const bool branch_taken_0x18d3d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d3d8) {
            ctx->pc = 0x18D410u;
            goto label_18d410;
        }
    }
    ctx->pc = 0x18D3E0u;
    // 0x18d3e0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x18d3e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d3e4: 0x27838048  addiu       $v1, $gp, -0x7FB8
    ctx->pc = 0x18d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934600));
    // 0x18d3e8: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x18d3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d3ec: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x18d3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d3f0: 0x27838040  addiu       $v1, $gp, -0x7FC0
    ctx->pc = 0x18d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934592));
    // 0x18d3f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18d3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18d3f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d3fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d400: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18d400u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18d404: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x18d404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x18d408: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x18d408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x18d40c: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x18d40cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_18d410:
    // 0x18d410: 0x3e00008  jr          $ra
    ctx->pc = 0x18D410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D418u;
}
