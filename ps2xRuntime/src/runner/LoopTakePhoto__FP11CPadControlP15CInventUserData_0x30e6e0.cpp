#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoopTakePhoto__FP11CPadControlP15CInventUserData
// Address: 0x30e6e0 - 0x30e810
void LoopTakePhoto__FP11CPadControlP15CInventUserData_0x30e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoopTakePhoto__FP11CPadControlP15CInventUserData_0x30e6e0");
#endif

    switch (ctx->pc) {
        case 0x30e714u: goto label_30e714;
        case 0x30e778u: goto label_30e778;
        case 0x30e788u: goto label_30e788;
        default: break;
    }

    ctx->pc = 0x30e6e0u;

    // 0x30e6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e6e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30e6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30e6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e6f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30e6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e6f4: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x30E6F4u;
    {
        const bool branch_taken_0x30e6f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E6F4u;
            // 0x30e6f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6f4) {
            ctx->pc = 0x30E7FCu;
            goto label_30e7fc;
        }
    }
    ctx->pc = 0x30E6FCu;
    // 0x30e6fc: 0x8f85a220  lw          $a1, -0x5DE0($gp)
    ctx->pc = 0x30e6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x30e700: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e704: 0x14a3002a  bne         $a1, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x30E704u;
    {
        const bool branch_taken_0x30e704 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x30E708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E704u;
            // 0x30e708: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e704) {
            ctx->pc = 0x30E7B0u;
            goto label_30e7b0;
        }
    }
    ctx->pc = 0x30E70Cu;
    // 0x30e70c: 0xc0bb548  jal         func_2ED520
    ctx->pc = 0x30E70Cu;
    SET_GPR_U32(ctx, 31, 0x30E714u);
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E714u; }
        if (ctx->pc != 0x30E714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E714u; }
        if (ctx->pc != 0x30E714u) { return; }
    }
    ctx->pc = 0x30E714u;
label_30e714:
    // 0x30e714: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30e714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x30e718: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x30e718u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x30e71c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30e71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e720: 0xc780a224  lwc1        $f0, -0x5DDC($gp)
    ctx->pc = 0x30e720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e724: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30e724u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30e728: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x30e728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x30e72c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e72cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e730: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30e730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e734: 0x0  nop
    ctx->pc = 0x30e734u;
    // NOP
    // 0x30e738: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30e738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e73c: 0x0  nop
    ctx->pc = 0x30e73cu;
    // NOP
    // 0x30e740: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30E740u;
    {
        const bool branch_taken_0x30e740 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E740u;
            // 0x30e744: 0xe780a224  swc1        $f0, -0x5DDC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e740) {
            ctx->pc = 0x30E74Cu;
            goto label_30e74c;
        }
    }
    ctx->pc = 0x30E748u;
    // 0x30e748: 0xe781a224  swc1        $f1, -0x5DDC($gp)
    ctx->pc = 0x30e748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943268), bits); }
label_30e74c:
    // 0x30e74c: 0xc780a224  lwc1        $f0, -0x5DDC($gp)
    ctx->pc = 0x30e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e750: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x30e750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x30e754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30e754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e758: 0x0  nop
    ctx->pc = 0x30e758u;
    // NOP
    // 0x30e75c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30e75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e760: 0x0  nop
    ctx->pc = 0x30e760u;
    // NOP
    // 0x30e764: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30E764u;
    {
        const bool branch_taken_0x30e764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E764u;
            // 0x30e768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e764) {
            ctx->pc = 0x30E770u;
            goto label_30e770;
        }
    }
    ctx->pc = 0x30E76Cu;
    // 0x30e76c: 0xe781a224  swc1        $f1, -0x5DDC($gp)
    ctx->pc = 0x30e76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943268), bits); }
label_30e770:
    // 0x30e770: 0xc07fac0  jal         func_1FEB00
    ctx->pc = 0x30E770u;
    SET_GPR_U32(ctx, 31, 0x30E778u);
    ctx->pc = 0x30E774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E770u;
            // 0x30e774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB00u;
    if (runtime->hasFunction(0x1FEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E778u; }
        if (ctx->pc != 0x30E778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsPhotoSpace__15CInventUserDataFPi_0x1feb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E778u; }
        if (ctx->pc != 0x30E778u) { return; }
    }
    ctx->pc = 0x30E778u;
label_30e778:
    // 0x30e778: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E778u;
    {
        const bool branch_taken_0x30e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E778u;
            // 0x30e77c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e778) {
            ctx->pc = 0x30E794u;
            goto label_30e794;
        }
    }
    ctx->pc = 0x30E780u;
    // 0x30e780: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x30E780u;
    SET_GPR_U32(ctx, 31, 0x30E788u);
    ctx->pc = 0x30E784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E780u;
            // 0x30e784: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E788u; }
        if (ctx->pc != 0x30E788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E788u; }
        if (ctx->pc != 0x30E788u) { return; }
    }
    ctx->pc = 0x30E788u;
label_30e788:
    // 0x30e788: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30E788u;
    {
        const bool branch_taken_0x30e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E788u;
            // 0x30e78c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e788) {
            ctx->pc = 0x30E794u;
            goto label_30e794;
        }
    }
    ctx->pc = 0x30E790u;
    // 0x30e790: 0xaf83a220  sw          $v1, -0x5DE0($gp)
    ctx->pc = 0x30e790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 3));
label_30e794:
    // 0x30e794: 0x8f83a234  lw          $v1, -0x5DCC($gp)
    ctx->pc = 0x30e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943284)));
    // 0x30e798: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30e798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30e79c: 0xaf83a234  sw          $v1, -0x5DCC($gp)
    ctx->pc = 0x30e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943284), GPR_U32(ctx, 3));
    // 0x30e7a0: 0x8f83a234  lw          $v1, -0x5DCC($gp)
    ctx->pc = 0x30e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943284)));
    // 0x30e7a4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30E7A4u;
    {
        const bool branch_taken_0x30e7a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x30e7a4) {
            ctx->pc = 0x30E7B0u;
            goto label_30e7b0;
        }
    }
    ctx->pc = 0x30E7ACu;
    // 0x30e7ac: 0xaf80a234  sw          $zero, -0x5DCC($gp)
    ctx->pc = 0x30e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943284), GPR_U32(ctx, 0));
label_30e7b0:
    // 0x30e7b0: 0x8f84a220  lw          $a0, -0x5DE0($gp)
    ctx->pc = 0x30e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x30e7b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30e7b8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30E7B8u;
    {
        const bool branch_taken_0x30e7b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30e7b8) {
            ctx->pc = 0x30E7E0u;
            goto label_30e7e0;
        }
    }
    ctx->pc = 0x30E7C0u;
    // 0x30e7c0: 0x8f83a230  lw          $v1, -0x5DD0($gp)
    ctx->pc = 0x30e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x30e7c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30e7c8: 0xaf83a230  sw          $v1, -0x5DD0($gp)
    ctx->pc = 0x30e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943280), GPR_U32(ctx, 3));
    // 0x30e7cc: 0x8f83a230  lw          $v1, -0x5DD0($gp)
    ctx->pc = 0x30e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x30e7d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E7D0u;
    {
        const bool branch_taken_0x30e7d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30E7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E7D0u;
            // 0x30e7d4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7d0) {
            ctx->pc = 0x30E7E0u;
            goto label_30e7e0;
        }
    }
    ctx->pc = 0x30E7D8u;
    // 0x30e7d8: 0xaf80a230  sw          $zero, -0x5DD0($gp)
    ctx->pc = 0x30e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943280), GPR_U32(ctx, 0));
    // 0x30e7dc: 0xaf83a220  sw          $v1, -0x5DE0($gp)
    ctx->pc = 0x30e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 3));
label_30e7e0:
    // 0x30e7e0: 0x8f84a220  lw          $a0, -0x5DE0($gp)
    ctx->pc = 0x30e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x30e7e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30e7e8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E7E8u;
    {
        const bool branch_taken_0x30e7e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x30E7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E7E8u;
            // 0x30e7ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7e8) {
            ctx->pc = 0x30E7FCu;
            goto label_30e7fc;
        }
    }
    ctx->pc = 0x30E7F0u;
    // 0x30e7f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e7f4: 0xaf84a238  sw          $a0, -0x5DC8($gp)
    ctx->pc = 0x30e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943288), GPR_U32(ctx, 4));
    // 0x30e7f8: 0xaf83a220  sw          $v1, -0x5DE0($gp)
    ctx->pc = 0x30e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 3));
label_30e7fc:
    // 0x30e7fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30e7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30e800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e808: 0x3e00008  jr          $ra
    ctx->pc = 0x30E808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E808u;
            // 0x30e80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E810u;
}
