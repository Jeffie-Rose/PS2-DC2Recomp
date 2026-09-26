#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaxY__13CCollisionMDTFPf
// Address: 0x147700 - 0x14786c
void GetMaxY__13CCollisionMDTFPf_0x147700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaxY__13CCollisionMDTFPf_0x147700");
#endif

    switch (ctx->pc) {
        case 0x1477e8u: goto label_1477e8;
        case 0x147804u: goto label_147804;
        default: break;
    }

    ctx->pc = 0x147700u;

    // 0x147700: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x147700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x147704: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x147704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x147708: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x147708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14770c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x147710: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x147710u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147714: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x147714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x147718: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14771c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14771cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x147720: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x147720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x147724: 0x8c920040  lw          $s2, 0x40($a0)
    ctx->pc = 0x147724u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147728: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x147728u;
    {
        const bool branch_taken_0x147728 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147728u;
            // 0x14772c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147728) {
            ctx->pc = 0x147738u;
            goto label_147738;
        }
    }
    ctx->pc = 0x147730u;
    // 0x147730: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x147730u;
    {
        const bool branch_taken_0x147730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147730u;
            // 0x147734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147730) {
            ctx->pc = 0x147848u;
            goto label_147848;
        }
    }
    ctx->pc = 0x147738u;
label_147738:
    // 0x147738: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x147738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14773c: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x14773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147740: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147744: 0x0  nop
    ctx->pc = 0x147744u;
    // NOP
    // 0x147748: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x147748u;
    {
        const bool branch_taken_0x147748 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14774Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147748u;
            // 0x14774c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147748) {
            ctx->pc = 0x147758u;
            goto label_147758;
        }
    }
    ctx->pc = 0x147750u;
    // 0x147750: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x147750u;
    {
        const bool branch_taken_0x147750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147750u;
            // 0x147754: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147750) {
            ctx->pc = 0x14784Cu;
            goto label_14784c;
        }
    }
    ctx->pc = 0x147758u;
label_147758:
    // 0x147758: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x147758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14775c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x14775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147760: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x147760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147764: 0x0  nop
    ctx->pc = 0x147764u;
    // NOP
    // 0x147768: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x147768u;
    {
        const bool branch_taken_0x147768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147768u;
            // 0x14776c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147768) {
            ctx->pc = 0x147778u;
            goto label_147778;
        }
    }
    ctx->pc = 0x147770u;
    // 0x147770: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x147770u;
    {
        const bool branch_taken_0x147770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147770) {
            ctx->pc = 0x147848u;
            goto label_147848;
        }
    }
    ctx->pc = 0x147778u;
label_147778:
    // 0x147778: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x147778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14777c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14777cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147780: 0x0  nop
    ctx->pc = 0x147780u;
    // NOP
    // 0x147784: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x147784u;
    {
        const bool branch_taken_0x147784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147784u;
            // 0x147788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147784) {
            ctx->pc = 0x147794u;
            goto label_147794;
        }
    }
    ctx->pc = 0x14778Cu;
    // 0x14778c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x14778Cu;
    {
        const bool branch_taken_0x14778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14778c) {
            ctx->pc = 0x147848u;
            goto label_147848;
        }
    }
    ctx->pc = 0x147794u;
label_147794:
    // 0x147794: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x147794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147798: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x147798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14779c: 0x0  nop
    ctx->pc = 0x14779cu;
    // NOP
    // 0x1477a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1477A0u;
    {
        const bool branch_taken_0x1477a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1477A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1477A0u;
            // 0x1477a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477a0) {
            ctx->pc = 0x1477B0u;
            goto label_1477b0;
        }
    }
    ctx->pc = 0x1477A8u;
    // 0x1477a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1477A8u;
    {
        const bool branch_taken_0x1477a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1477a8) {
            ctx->pc = 0x147848u;
            goto label_147848;
        }
    }
    ctx->pc = 0x1477B0u;
label_1477b0:
    // 0x1477b0: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1477b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1477b4: 0x3c02ccbe  lui         $v0, 0xCCBE
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52414 << 16));
    // 0x1477b8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1477b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1477bc: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1477bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1477c0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1477c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1477c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1477c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477c8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1477c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1477cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1477ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1477d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1477d4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1477d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1477d8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1477d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1477dc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1477dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1477e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1477E0u;
    {
        const bool branch_taken_0x1477e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1477E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1477E0u;
            // 0x1477e4: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477e0) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x1477E8u;
label_1477e8:
    // 0x1477e8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1477e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1477ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1477ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477f0: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x1477f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1477f4: 0x26480020  addiu       $t0, $s2, 0x20
    ctx->pc = 0x1477f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1477f8: 0x26490030  addiu       $t1, $s2, 0x30
    ctx->pc = 0x1477f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1477fc: 0xc04be94  jal         func_12FA50
    ctx->pc = 0x1477FCu;
    SET_GPR_U32(ctx, 31, 0x147804u);
    ctx->pc = 0x147800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1477FCu;
            // 0x147800: 0x27aa0090  addiu       $t2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FA50u;
    if (runtime->hasFunction(0x12FA50u)) {
        auto targetFn = runtime->lookupFunction(0x12FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147804u; }
        if (ctx->pc != 0x147804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionPoint_line_poly3__FPfPfPfPfPfPfPf_0x12fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147804u; }
        if (ctx->pc != 0x147804u) { return; }
    }
    ctx->pc = 0x147804u;
label_147804:
    // 0x147804: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x147804u;
    {
        const bool branch_taken_0x147804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147804) {
            ctx->pc = 0x147824u;
            goto label_147824;
        }
    }
    ctx->pc = 0x14780Cu;
    // 0x14780c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x14780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147810: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x147810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147814: 0x0  nop
    ctx->pc = 0x147814u;
    // NOP
    // 0x147818: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x147818u;
    {
        const bool branch_taken_0x147818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147818u;
            // 0x14781c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147818) {
            ctx->pc = 0x147824u;
            goto label_147824;
        }
    }
    ctx->pc = 0x147820u;
    // 0x147820: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x147820u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_147824:
    // 0x147824: 0x0  nop
    ctx->pc = 0x147824u;
    // NOP
    // 0x147828: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14782c: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x14782cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_147830:
    // 0x147830: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x147830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x147834: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x147834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x147838: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x147838u;
    {
        const bool branch_taken_0x147838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147838u;
            // 0x14783c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147838) {
            ctx->pc = 0x1477E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1477e8;
        }
    }
    ctx->pc = 0x147840u;
    // 0x147840: 0xe6740004  swc1        $f20, 0x4($s3)
    ctx->pc = 0x147840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x147844: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x147844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_147848:
    // 0x147848: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x147848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_14784c:
    // 0x14784c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x147850: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x147850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147854: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x147854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147858: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x147858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14785c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14785cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147860: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x147860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147864: 0x3e00008  jr          $ra
    ctx->pc = 0x147864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147864u;
            // 0x147868: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14786Cu;
}
