#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LineTensionStep__FP9FISH_DATAi
// Address: 0x303330 - 0x3036a4
void LineTensionStep__FP9FISH_DATAi_0x303330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LineTensionStep__FP9FISH_DATAi_0x303330");
#endif

    switch (ctx->pc) {
        case 0x303604u: goto label_303604;
        case 0x30361cu: goto label_30361c;
        case 0x303670u: goto label_303670;
        default: break;
    }

    ctx->pc = 0x303330u;

    // 0x303330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x303330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x303334: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x303334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x303338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x303338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30333c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30333cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x303340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303344: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x303344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303348: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x303348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30334c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30334cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x303350: 0x8f86a054  lw          $a2, -0x5FAC($gp)
    ctx->pc = 0x303350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942804)));
    // 0x303354: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x303354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303358: 0x3c02bb83  lui         $v0, 0xBB83
    ctx->pc = 0x303358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48003 << 16));
    // 0x30335c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x30335cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x303360: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303364: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x303364u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x303368: 0x28c10006  slti        $at, $a2, 0x6
    ctx->pc = 0x303368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x30336c: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x30336cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x303370: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x303370u;
    {
        const bool branch_taken_0x303370 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x303374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303370u;
            // 0x303374: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303370) {
            ctx->pc = 0x3033ACu;
            goto label_3033ac;
        }
    }
    ctx->pc = 0x303378u;
    // 0x303378: 0x24c3fffb  addiu       $v1, $a2, -0x5
    ctx->pc = 0x303378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967291));
    // 0x30337c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x30337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x303380: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x303380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x303384: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x303384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x303388: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x303388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30338c: 0x0  nop
    ctx->pc = 0x30338cu;
    // NOP
    // 0x303390: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x303390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x303394: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x303394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x303398: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x303398u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x30339c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30339cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3033a0: 0x0  nop
    ctx->pc = 0x3033a0u;
    // NOP
    // 0x3033a4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x3033a4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x3033a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3033a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3033ac:
    // 0x3033ac: 0x28c10015  slti        $at, $a2, 0x15
    ctx->pc = 0x3033acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x3033b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3033B0u;
    {
        const bool branch_taken_0x3033b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3033B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3033B0u;
            // 0x3033b4: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033b0) {
            ctx->pc = 0x3033C0u;
            goto label_3033c0;
        }
    }
    ctx->pc = 0x3033B8u;
    // 0x3033b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3033b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3033bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3033bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3033c0:
    // 0x3033c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3033c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3033c4: 0x0  nop
    ctx->pc = 0x3033c4u;
    // NOP
    // 0x3033c8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x3033c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3033cc: 0x0  nop
    ctx->pc = 0x3033ccu;
    // NOP
    // 0x3033d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3033D0u;
    {
        const bool branch_taken_0x3033d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3033D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3033D0u;
            // 0x3033d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033d0) {
            ctx->pc = 0x3033DCu;
            goto label_3033dc;
        }
    }
    ctx->pc = 0x3033D8u;
    // 0x3033d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3033d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3033dc:
    // 0x3033dc: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3033DCu;
    {
        const bool branch_taken_0x3033dc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3033E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3033DCu;
            // 0x3033e0: 0x24060096  addiu       $a2, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033dc) {
            ctx->pc = 0x303400u;
            goto label_303400;
        }
    }
    ctx->pc = 0x3033E4u;
    // 0x3033e4: 0xc782a028  lwc1        $f2, -0x5FD8($gp)
    ctx->pc = 0x3033e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3033e8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x3033e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x3033ec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3033ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x3033f0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3033f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3033f4: 0x0  nop
    ctx->pc = 0x3033f4u;
    // NOP
    // 0x3033f8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3033f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3033fc: 0xe782a028  swc1        $f2, -0x5FD8($gp)
    ctx->pc = 0x3033fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942760), bits); }
label_303400:
    // 0x303400: 0x4a10014  bgez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x303400u;
    {
        const bool branch_taken_0x303400 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x303404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303400u;
            // 0x303404: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303400) {
            ctx->pc = 0x303454u;
            goto label_303454;
        }
    }
    ctx->pc = 0x303408u;
    // 0x303408: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x303408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x30340c: 0xc4249ce4  lwc1        $f4, -0x631C($at)
    ctx->pc = 0x30340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x303410: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x303410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x303414: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x303414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x303418: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x303418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30341c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30341cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x303420: 0x0  nop
    ctx->pc = 0x303420u;
    // NOP
    // 0x303424: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x303424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x303428: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x303428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x30342c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30342cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x303430: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x303430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x303434: 0x46032143  div.s       $f5, $f4, $f3
    ctx->pc = 0x303434u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x303438: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x303438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30343c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30343cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x303440: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x303440u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x303444: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x303444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303448: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x303448u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x30344c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x30344cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x303450: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x303450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_303454:
    // 0x303454: 0x8f83a04c  lw          $v1, -0x5FB4($gp)
    ctx->pc = 0x303454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942796)));
    // 0x303458: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x303458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30345c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x30345Cu;
    {
        const bool branch_taken_0x30345c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x303460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30345Cu;
            // 0x303460: 0x3c023c03  lui         $v0, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30345c) {
            ctx->pc = 0x3034DCu;
            goto label_3034dc;
        }
    }
    ctx->pc = 0x303464u;
    // 0x303464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303468: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x303468u;
    {
        const bool branch_taken_0x303468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303468u;
            // 0x30346c: 0x3c023cf5  lui         $v0, 0x3CF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303468) {
            ctx->pc = 0x3034ACu;
            goto label_3034ac;
        }
    }
    ctx->pc = 0x303470u;
    // 0x303470: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x303470u;
    {
        const bool branch_taken_0x303470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303470) {
            ctx->pc = 0x303480u;
            goto label_303480;
        }
    }
    ctx->pc = 0x303478u;
    // 0x303478: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x303478u;
    {
        const bool branch_taken_0x303478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303478u;
            // 0x30347c: 0x8f82a048  lw          $v0, -0x5FB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303478) {
            ctx->pc = 0x3034F4u;
            goto label_3034f4;
        }
    }
    ctx->pc = 0x303480u;
label_303480:
    // 0x303480: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x303480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x303484: 0xc483001c  lwc1        $f3, 0x1C($a0)
    ctx->pc = 0x303484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303488: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x303488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30348c: 0x0  nop
    ctx->pc = 0x30348cu;
    // NOP
    // 0x303490: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x303490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303494: 0x46041880  add.s       $f2, $f3, $f4
    ctx->pc = 0x303494u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x303498: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x303498u;
    {
        const bool branch_taken_0x303498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30349Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303498u;
            // 0x30349c: 0xe482001c  swc1        $f2, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303498) {
            ctx->pc = 0x3034F0u;
            goto label_3034f0;
        }
    }
    ctx->pc = 0x3034A0u;
    // 0x3034a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3034a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3034a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3034A4u;
    {
        const bool branch_taken_0x3034a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3034A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3034A4u;
            // 0x3034a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034a4) {
            ctx->pc = 0x3034F0u;
            goto label_3034f0;
        }
    }
    ctx->pc = 0x3034ACu;
label_3034ac:
    // 0x3034ac: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x3034acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x3034b0: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x3034b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3034b4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3034b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3034b8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3034b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x3034bc: 0xc483001c  lwc1        $f3, 0x1C($a0)
    ctx->pc = 0x3034bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3034c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3034c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3034c4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3034c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3034c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3034c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3034cc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3034ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3034d0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3034d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3034d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3034D4u;
    {
        const bool branch_taken_0x3034d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3034D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3034D4u;
            // 0x3034d8: 0xe482001c  swc1        $f2, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034d4) {
            ctx->pc = 0x3034F0u;
            goto label_3034f0;
        }
    }
    ctx->pc = 0x3034DCu;
label_3034dc:
    // 0x3034dc: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x3034dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3034e0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x3034e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x3034e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3034e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3034e8: 0x0  nop
    ctx->pc = 0x3034e8u;
    // NOP
    // 0x3034ec: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3034ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3034f0:
    // 0x3034f0: 0x8f82a048  lw          $v0, -0x5FB8($gp)
    ctx->pc = 0x3034f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942792)));
label_3034f4:
    // 0x3034f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3034F4u;
    {
        const bool branch_taken_0x3034f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3034F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3034F4u;
            // 0x3034f8: 0x3c023cf5  lui         $v0, 0x3CF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034f4) {
            ctx->pc = 0x303510u;
            goto label_303510;
        }
    }
    ctx->pc = 0x3034FCu;
    // 0x3034fc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3034fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x303500: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x303500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x303504: 0x0  nop
    ctx->pc = 0x303504u;
    // NOP
    // 0x303508: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x303508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30350c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30350cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_303510:
    // 0x303510: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x303510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303514: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x303514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x303518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30351c: 0x0  nop
    ctx->pc = 0x30351cu;
    // NOP
    // 0x303520: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x303520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303524: 0x0  nop
    ctx->pc = 0x303524u;
    // NOP
    // 0x303528: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x303528u;
    {
        const bool branch_taken_0x303528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303528) {
            ctx->pc = 0x303534u;
            goto label_303534;
        }
    }
    ctx->pc = 0x303530u;
    // 0x303530: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x303530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_303534:
    // 0x303534: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x303534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303538: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x303538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x30353c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30353cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x303540: 0x0  nop
    ctx->pc = 0x303540u;
    // NOP
    // 0x303544: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x303544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303548: 0x0  nop
    ctx->pc = 0x303548u;
    // NOP
    // 0x30354c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30354Cu;
    {
        const bool branch_taken_0x30354c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30354c) {
            ctx->pc = 0x303558u;
            goto label_303558;
        }
    }
    ctx->pc = 0x303554u;
    // 0x303554: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x303554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_303558:
    // 0x303558: 0xc783a030  lwc1        $f3, -0x5FD0($gp)
    ctx->pc = 0x303558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30355c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x30355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x303560: 0x3443b717  ori         $v1, $v0, 0xB717
    ctx->pc = 0x303560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x303564: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x303564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x303568: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x303568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30356c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30356cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303570: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x303570u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x303574: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x303574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303578: 0x0  nop
    ctx->pc = 0x303578u;
    // NOP
    // 0x30357c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30357Cu;
    {
        const bool branch_taken_0x30357c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x303580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30357Cu;
            // 0x303580: 0xe782a030  swc1        $f2, -0x5FD0($gp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942768), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30357c) {
            ctx->pc = 0x303588u;
            goto label_303588;
        }
    }
    ctx->pc = 0x303584u;
    // 0x303584: 0xe780a030  swc1        $f0, -0x5FD0($gp)
    ctx->pc = 0x303584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942768), bits); }
label_303588:
    // 0x303588: 0xc780a028  lwc1        $f0, -0x5FD8($gp)
    ctx->pc = 0x303588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30358c: 0xc782a030  lwc1        $f2, -0x5FD0($gp)
    ctx->pc = 0x30358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x303590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x303594: 0xe780a028  swc1        $f0, -0x5FD8($gp)
    ctx->pc = 0x303594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942760), bits); }
    // 0x303598: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x303598u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x30359c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30359cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3035a0: 0x0  nop
    ctx->pc = 0x3035a0u;
    // NOP
    // 0x3035a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3035A4u;
    {
        const bool branch_taken_0x3035a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3035A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3035A4u;
            // 0x3035a8: 0xe781a02c  swc1        $f1, -0x5FD4($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035a4) {
            ctx->pc = 0x3035B0u;
            goto label_3035b0;
        }
    }
    ctx->pc = 0x3035ACu;
    // 0x3035ac: 0xe782a028  swc1        $f2, -0x5FD8($gp)
    ctx->pc = 0x3035acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942760), bits); }
label_3035b0:
    // 0x3035b0: 0xc782a028  lwc1        $f2, -0x5FD8($gp)
    ctx->pc = 0x3035b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3035b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3035b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3035b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3035b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3035bc: 0x0  nop
    ctx->pc = 0x3035bcu;
    // NOP
    // 0x3035c0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3035c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3035c4: 0x0  nop
    ctx->pc = 0x3035c4u;
    // NOP
    // 0x3035c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3035C8u;
    {
        const bool branch_taken_0x3035c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3035CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3035C8u;
            // 0x3035cc: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035c8) {
            ctx->pc = 0x3035D4u;
            goto label_3035d4;
        }
    }
    ctx->pc = 0x3035D0u;
    // 0x3035d0: 0xe780a028  swc1        $f0, -0x5FD8($gp)
    ctx->pc = 0x3035d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942760), bits); }
label_3035d4:
    // 0x3035d4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x3035d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x3035d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3035d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3035dc: 0x0  nop
    ctx->pc = 0x3035dcu;
    // NOP
    // 0x3035e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3035e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3035e4: 0x0  nop
    ctx->pc = 0x3035e4u;
    // NOP
    // 0x3035e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3035E8u;
    {
        const bool branch_taken_0x3035e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3035ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3035E8u;
            // 0x3035ec: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035e8) {
            ctx->pc = 0x3035F4u;
            goto label_3035f4;
        }
    }
    ctx->pc = 0x3035F0u;
    // 0x3035f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3035f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3035f4:
    // 0x3035f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3035f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3035f8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x3035f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x3035fc: 0xc052d4c  jal         func_14B530
    ctx->pc = 0x3035FCu;
    SET_GPR_U32(ctx, 31, 0x303604u);
    ctx->pc = 0x303600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3035FCu;
            // 0x303600: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303604u; }
        if (ctx->pc != 0x303604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303604u; }
        if (ctx->pc != 0x303604u) { return; }
    }
    ctx->pc = 0x303604u;
label_303604:
    // 0x303604: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x303604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x303608: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x303608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30360c: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x30360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x303610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303614: 0xc052d4c  jal         func_14B530
    ctx->pc = 0x303614u;
    SET_GPR_U32(ctx, 31, 0x30361Cu);
    ctx->pc = 0x303618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303614u;
            // 0x303618: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30361Cu; }
        if (ctx->pc != 0x30361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30361Cu; }
        if (ctx->pc != 0x30361Cu) { return; }
    }
    ctx->pc = 0x30361Cu;
label_30361c:
    // 0x30361c: 0x8383a0ec  lb          $v1, -0x5F14($gp)
    ctx->pc = 0x30361cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942956)));
    // 0x303620: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x303620u;
    {
        const bool branch_taken_0x303620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303620u;
            // 0x303624: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303620) {
            ctx->pc = 0x303630u;
            goto label_303630;
        }
    }
    ctx->pc = 0x303628u;
    // 0x303628: 0xaf80a0e8  sw          $zero, -0x5F18($gp)
    ctx->pc = 0x303628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942952), GPR_U32(ctx, 0));
    // 0x30362c: 0xa383a0ec  sb          $v1, -0x5F14($gp)
    ctx->pc = 0x30362cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942956), (uint8_t)GPR_U32(ctx, 3));
label_303630:
    // 0x303630: 0xc781a028  lwc1        $f1, -0x5FD8($gp)
    ctx->pc = 0x303630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303634: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x303634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x303638: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x303638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x30363c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30363cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303640: 0x0  nop
    ctx->pc = 0x303640u;
    // NOP
    // 0x303644: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x303644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303648: 0x0  nop
    ctx->pc = 0x303648u;
    // NOP
    // 0x30364c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x30364Cu;
    {
        const bool branch_taken_0x30364c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30364c) {
            ctx->pc = 0x303678u;
            goto label_303678;
        }
    }
    ctx->pc = 0x303654u;
    // 0x303654: 0x8f83a0e8  lw          $v1, -0x5F18($gp)
    ctx->pc = 0x303654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942952)));
    // 0x303658: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x303658u;
    {
        const bool branch_taken_0x303658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303658) {
            ctx->pc = 0x303678u;
            goto label_303678;
        }
    }
    ctx->pc = 0x303660u;
    // 0x303660: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x303660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x303664: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x303664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x303668: 0xc063818  jal         func_18E060
    ctx->pc = 0x303668u;
    SET_GPR_U32(ctx, 31, 0x303670u);
    ctx->pc = 0x30366Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303668u;
            // 0x30366c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303670u; }
        if (ctx->pc != 0x303670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303670u; }
        if (ctx->pc != 0x303670u) { return; }
    }
    ctx->pc = 0x303670u;
label_303670:
    // 0x303670: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x303670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x303674: 0xaf83a0e8  sw          $v1, -0x5F18($gp)
    ctx->pc = 0x303674u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942952), GPR_U32(ctx, 3));
label_303678:
    // 0x303678: 0x8f83a0e8  lw          $v1, -0x5F18($gp)
    ctx->pc = 0x303678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942952)));
    // 0x30367c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x303680: 0xaf83a0e8  sw          $v1, -0x5F18($gp)
    ctx->pc = 0x303680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942952), GPR_U32(ctx, 3));
    // 0x303684: 0x8f83a0e8  lw          $v1, -0x5F18($gp)
    ctx->pc = 0x303684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942952)));
    // 0x303688: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x303688u;
    {
        const bool branch_taken_0x303688 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x303688) {
            ctx->pc = 0x303694u;
            goto label_303694;
        }
    }
    ctx->pc = 0x303690u;
    // 0x303690: 0xaf80a0e8  sw          $zero, -0x5F18($gp)
    ctx->pc = 0x303690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942952), GPR_U32(ctx, 0));
label_303694:
    // 0x303694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x303694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30369c: 0x3e00008  jr          $ra
    ctx->pc = 0x30369Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3036A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30369Cu;
            // 0x3036a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3036A4u;
}
