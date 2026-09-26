#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__8CThunderFPfff
// Address: 0x1c03e0 - 0x1c05e0
void SetPos__8CThunderFPfff_0x1c03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__8CThunderFPfff_0x1c03e0");
#endif

    switch (ctx->pc) {
        case 0x1c03e0u: goto label_1c03e0;
        case 0x1c03e4u: goto label_1c03e4;
        case 0x1c03e8u: goto label_1c03e8;
        case 0x1c03ecu: goto label_1c03ec;
        case 0x1c03f0u: goto label_1c03f0;
        case 0x1c03f4u: goto label_1c03f4;
        case 0x1c03f8u: goto label_1c03f8;
        case 0x1c03fcu: goto label_1c03fc;
        case 0x1c0400u: goto label_1c0400;
        case 0x1c0404u: goto label_1c0404;
        case 0x1c0408u: goto label_1c0408;
        case 0x1c040cu: goto label_1c040c;
        case 0x1c0410u: goto label_1c0410;
        case 0x1c0414u: goto label_1c0414;
        case 0x1c0418u: goto label_1c0418;
        case 0x1c041cu: goto label_1c041c;
        case 0x1c0420u: goto label_1c0420;
        case 0x1c0424u: goto label_1c0424;
        case 0x1c0428u: goto label_1c0428;
        case 0x1c042cu: goto label_1c042c;
        case 0x1c0430u: goto label_1c0430;
        case 0x1c0434u: goto label_1c0434;
        case 0x1c0438u: goto label_1c0438;
        case 0x1c043cu: goto label_1c043c;
        case 0x1c0440u: goto label_1c0440;
        case 0x1c0444u: goto label_1c0444;
        case 0x1c0448u: goto label_1c0448;
        case 0x1c044cu: goto label_1c044c;
        case 0x1c0450u: goto label_1c0450;
        case 0x1c0454u: goto label_1c0454;
        case 0x1c0458u: goto label_1c0458;
        case 0x1c045cu: goto label_1c045c;
        case 0x1c0460u: goto label_1c0460;
        case 0x1c0464u: goto label_1c0464;
        case 0x1c0468u: goto label_1c0468;
        case 0x1c046cu: goto label_1c046c;
        case 0x1c0470u: goto label_1c0470;
        case 0x1c0474u: goto label_1c0474;
        case 0x1c0478u: goto label_1c0478;
        case 0x1c047cu: goto label_1c047c;
        case 0x1c0480u: goto label_1c0480;
        case 0x1c0484u: goto label_1c0484;
        case 0x1c0488u: goto label_1c0488;
        case 0x1c048cu: goto label_1c048c;
        case 0x1c0490u: goto label_1c0490;
        case 0x1c0494u: goto label_1c0494;
        case 0x1c0498u: goto label_1c0498;
        case 0x1c049cu: goto label_1c049c;
        case 0x1c04a0u: goto label_1c04a0;
        case 0x1c04a4u: goto label_1c04a4;
        case 0x1c04a8u: goto label_1c04a8;
        case 0x1c04acu: goto label_1c04ac;
        case 0x1c04b0u: goto label_1c04b0;
        case 0x1c04b4u: goto label_1c04b4;
        case 0x1c04b8u: goto label_1c04b8;
        case 0x1c04bcu: goto label_1c04bc;
        case 0x1c04c0u: goto label_1c04c0;
        case 0x1c04c4u: goto label_1c04c4;
        case 0x1c04c8u: goto label_1c04c8;
        case 0x1c04ccu: goto label_1c04cc;
        case 0x1c04d0u: goto label_1c04d0;
        case 0x1c04d4u: goto label_1c04d4;
        case 0x1c04d8u: goto label_1c04d8;
        case 0x1c04dcu: goto label_1c04dc;
        case 0x1c04e0u: goto label_1c04e0;
        case 0x1c04e4u: goto label_1c04e4;
        case 0x1c04e8u: goto label_1c04e8;
        case 0x1c04ecu: goto label_1c04ec;
        case 0x1c04f0u: goto label_1c04f0;
        case 0x1c04f4u: goto label_1c04f4;
        case 0x1c04f8u: goto label_1c04f8;
        case 0x1c04fcu: goto label_1c04fc;
        case 0x1c0500u: goto label_1c0500;
        case 0x1c0504u: goto label_1c0504;
        case 0x1c0508u: goto label_1c0508;
        case 0x1c050cu: goto label_1c050c;
        case 0x1c0510u: goto label_1c0510;
        case 0x1c0514u: goto label_1c0514;
        case 0x1c0518u: goto label_1c0518;
        case 0x1c051cu: goto label_1c051c;
        case 0x1c0520u: goto label_1c0520;
        case 0x1c0524u: goto label_1c0524;
        case 0x1c0528u: goto label_1c0528;
        case 0x1c052cu: goto label_1c052c;
        case 0x1c0530u: goto label_1c0530;
        case 0x1c0534u: goto label_1c0534;
        case 0x1c0538u: goto label_1c0538;
        case 0x1c053cu: goto label_1c053c;
        case 0x1c0540u: goto label_1c0540;
        case 0x1c0544u: goto label_1c0544;
        case 0x1c0548u: goto label_1c0548;
        case 0x1c054cu: goto label_1c054c;
        case 0x1c0550u: goto label_1c0550;
        case 0x1c0554u: goto label_1c0554;
        case 0x1c0558u: goto label_1c0558;
        case 0x1c055cu: goto label_1c055c;
        case 0x1c0560u: goto label_1c0560;
        case 0x1c0564u: goto label_1c0564;
        case 0x1c0568u: goto label_1c0568;
        case 0x1c056cu: goto label_1c056c;
        case 0x1c0570u: goto label_1c0570;
        case 0x1c0574u: goto label_1c0574;
        case 0x1c0578u: goto label_1c0578;
        case 0x1c057cu: goto label_1c057c;
        case 0x1c0580u: goto label_1c0580;
        case 0x1c0584u: goto label_1c0584;
        case 0x1c0588u: goto label_1c0588;
        case 0x1c058cu: goto label_1c058c;
        case 0x1c0590u: goto label_1c0590;
        case 0x1c0594u: goto label_1c0594;
        case 0x1c0598u: goto label_1c0598;
        case 0x1c059cu: goto label_1c059c;
        case 0x1c05a0u: goto label_1c05a0;
        case 0x1c05a4u: goto label_1c05a4;
        case 0x1c05a8u: goto label_1c05a8;
        case 0x1c05acu: goto label_1c05ac;
        case 0x1c05b0u: goto label_1c05b0;
        case 0x1c05b4u: goto label_1c05b4;
        case 0x1c05b8u: goto label_1c05b8;
        case 0x1c05bcu: goto label_1c05bc;
        case 0x1c05c0u: goto label_1c05c0;
        case 0x1c05c4u: goto label_1c05c4;
        case 0x1c05c8u: goto label_1c05c8;
        case 0x1c05ccu: goto label_1c05cc;
        case 0x1c05d0u: goto label_1c05d0;
        case 0x1c05d4u: goto label_1c05d4;
        case 0x1c05d8u: goto label_1c05d8;
        case 0x1c05dcu: goto label_1c05dc;
        default: break;
    }

    ctx->pc = 0x1c03e0u;

label_1c03e0:
    // 0x1c03e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c03e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c03e4:
    // 0x1c03e4: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1c03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
label_1c03e8:
    // 0x1c03e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c03e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1c03ec:
    // 0x1c03ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c03ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c03f0:
    // 0x1c03f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c03f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c03f4:
    // 0x1c03f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c03f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c03f8:
    // 0x1c03f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c03f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c03fc:
    // 0x1c03fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c03fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c0400:
    // 0x1c0400: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c0400u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c0404:
    // 0x1c0404: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1c0404u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1c0408:
    // 0x1c0408: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c0408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c040c:
    // 0x1c040c: 0x0  nop
    ctx->pc = 0x1c040cu;
    // NOP
label_1c0410:
    // 0x1c0410: 0x4501006b  bc1t        . + 4 + (0x6B << 2)
label_1c0414:
    if (ctx->pc == 0x1C0414u) {
        ctx->pc = 0x1C0414u;
            // 0x1c0414: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1C0418u;
        goto label_1c0418;
    }
    ctx->pc = 0x1C0410u;
    {
        const bool branch_taken_0x1c0410 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0410u;
            // 0x1c0414: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0410) {
            ctx->pc = 0x1C05C0u;
            goto label_1c05c0;
        }
    }
    ctx->pc = 0x1C0418u;
label_1c0418:
    // 0x1c0418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c041c:
    // 0x1c041c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1c041cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1c0420:
    // 0x1c0420: 0xa2420db0  sb          $v0, 0xDB0($s2)
    ctx->pc = 0x1c0420u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3504), (uint8_t)GPR_U32(ctx, 2));
label_1c0424:
    // 0x1c0424: 0xa2430db1  sb          $v1, 0xDB1($s2)
    ctx->pc = 0x1c0424u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3505), (uint8_t)GPR_U32(ctx, 3));
label_1c0428:
    // 0x1c0428: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c0428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1c042c:
    // 0x1c042c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c042cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0430:
    // 0x1c0430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c0434:
    // 0x1c0434: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1c0438:
    // 0x1c0438: 0x320f809  jalr        $t9
label_1c043c:
    if (ctx->pc == 0x1C043Cu) {
        ctx->pc = 0x1C043Cu;
            // 0x1c043c: 0x460c0502  mul.s       $f20, $f0, $f12 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->pc = 0x1C0440u;
        goto label_1c0440;
    }
    ctx->pc = 0x1C0438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0440u);
        ctx->pc = 0x1C043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0438u;
            // 0x1c043c: 0x460c0502  mul.s       $f20, $f0, $f12 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0440u; }
            if (ctx->pc != 0x1C0440u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0440u;
label_1c0440:
    // 0x1c0440: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1c0440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_1c0444:
    // 0x1c0444: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1c0444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1c0448:
    // 0x1c0448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c0448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c044c:
    // 0x1c044c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c044cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c0450:
    // 0x1c0450: 0x0  nop
    ctx->pc = 0x1c0450u;
    // NOP
label_1c0454:
    // 0x1c0454: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x1c0454u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_1c0458:
    // 0x1c0458: 0xe6400db4  swc1        $f0, 0xDB4($s2)
    ctx->pc = 0x1c0458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3508), bits); }
label_1c045c:
    // 0x1c045c: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1c045cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1c0460:
    // 0x1c0460: 0xc0a248c  jal         func_289230
label_1c0464:
    if (ctx->pc == 0x1C0464u) {
        ctx->pc = 0x1C0464u;
            // 0x1c0464: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1C0468u;
        goto label_1c0468;
    }
    ctx->pc = 0x1C0460u;
    SET_GPR_U32(ctx, 31, 0x1C0468u);
    ctx->pc = 0x1C0464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0460u;
            // 0x1c0464: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0468u; }
        if (ctx->pc != 0x1C0468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0468u; }
        if (ctx->pc != 0x1C0468u) { return; }
    }
    ctx->pc = 0x1C0468u;
label_1c0468:
    // 0x1c0468: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1c0468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1c046c:
    // 0x1c046c: 0x265001b0  addiu       $s0, $s2, 0x1B0
    ctx->pc = 0x1c046cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_1c0470:
    // 0x1c0470: 0xa2430db1  sb          $v1, 0xDB1($s2)
    ctx->pc = 0x1c0470u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3505), (uint8_t)GPR_U32(ctx, 3));
label_1c0474:
    // 0x1c0474: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c0474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0478:
    // 0x1c0478: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c0478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c047c:
    // 0x1c047c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1c0480:
    // 0x1c0480: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c0480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c0484:
    // 0x1c0484: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x1c0484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
label_1c0488:
    // 0x1c0488: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c0488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c048c:
    // 0x1c048c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c048cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c0490:
    // 0x1c0490: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c0490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c0494:
    // 0x1c0494: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c0494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c0498:
    // 0x1c0498: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c0498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c049c:
    // 0x1c049c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1c04a0:
    if (ctx->pc == 0x1C04A0u) {
        ctx->pc = 0x1C04A0u;
            // 0x1c04a0: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x1C04A4u;
        goto label_1c04a4;
    }
    ctx->pc = 0x1C049Cu;
    {
        const bool branch_taken_0x1c049c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C04A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C049Cu;
            // 0x1c04a0: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c049c) {
            ctx->pc = 0x1C0478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0478;
        }
    }
    ctx->pc = 0x1C04A4u;
label_1c04a4:
    // 0x1c04a4: 0x10000041  b           . + 4 + (0x41 << 2)
label_1c04a8:
    if (ctx->pc == 0x1C04A8u) {
        ctx->pc = 0x1C04A8u;
            // 0x1c04a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C04ACu;
        goto label_1c04ac;
    }
    ctx->pc = 0x1C04A4u;
    {
        const bool branch_taken_0x1c04a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C04A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04A4u;
            // 0x1c04a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04a4) {
            ctx->pc = 0x1C05ACu;
            goto label_1c05ac;
        }
    }
    ctx->pc = 0x1C04ACu;
label_1c04ac:
    // 0x1c04ac: 0xc0724bc  jal         func_1C92F0
label_1c04b0:
    if (ctx->pc == 0x1C04B0u) {
        ctx->pc = 0x1C04B0u;
            // 0x1c04b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1C04B4u;
        goto label_1c04b4;
    }
    ctx->pc = 0x1C04ACu;
    SET_GPR_U32(ctx, 31, 0x1C04B4u);
    ctx->pc = 0x1C04B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04ACu;
            // 0x1c04b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04B4u; }
        if (ctx->pc != 0x1C04B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04B4u; }
        if (ctx->pc != 0x1C04B4u) { return; }
    }
    ctx->pc = 0x1C04B4u;
label_1c04b4:
    // 0x1c04b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1c04b8:
    // 0x1c04b8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1c04bc:
    // 0x1c04bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c04bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c04c0:
    // 0x1c04c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c04c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c04c4:
    // 0x1c04c4: 0x4602a543  div.s       $f21, $f20, $f2
    ctx->pc = 0x1c04c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
label_1c04c8:
    // 0x1c04c8: 0x4601a303  div.s       $f12, $f20, $f1
    ctx->pc = 0x1c04c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_1c04cc:
    // 0x1c04cc: 0x0  nop
    ctx->pc = 0x1c04ccu;
    // NOP
label_1c04d0:
    // 0x1c04d0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1c04d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_1c04d4:
    // 0x1c04d4: 0xc0724bc  jal         func_1C92F0
label_1c04d8:
    if (ctx->pc == 0x1C04D8u) {
        ctx->pc = 0x1C04D8u;
            // 0x1c04d8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x1C04DCu;
        goto label_1c04dc;
    }
    ctx->pc = 0x1C04D4u;
    SET_GPR_U32(ctx, 31, 0x1C04DCu);
    ctx->pc = 0x1C04D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04D4u;
            // 0x1c04d8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04DCu; }
        if (ctx->pc != 0x1C04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04DCu; }
        if (ctx->pc != 0x1C04DCu) { return; }
    }
    ctx->pc = 0x1C04DCu;
label_1c04dc:
    // 0x1c04dc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1c04dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1c04e0:
    // 0x1c04e0: 0xc0724bc  jal         func_1C92F0
label_1c04e4:
    if (ctx->pc == 0x1C04E4u) {
        ctx->pc = 0x1C04E4u;
            // 0x1c04e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1C04E8u;
        goto label_1c04e8;
    }
    ctx->pc = 0x1C04E0u;
    SET_GPR_U32(ctx, 31, 0x1C04E8u);
    ctx->pc = 0x1C04E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04E0u;
            // 0x1c04e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04E8u; }
        if (ctx->pc != 0x1C04E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C04E8u; }
        if (ctx->pc != 0x1C04E8u) { return; }
    }
    ctx->pc = 0x1C04E8u;
label_1c04e8:
    // 0x1c04e8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1c04e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_1c04ec:
    // 0x1c04ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c04f0:
    // 0x1c04f0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1c04f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1c04f4:
    // 0x1c04f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c04f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c04f8:
    // 0x1c04f8: 0xc0724bc  jal         func_1C92F0
label_1c04fc:
    if (ctx->pc == 0x1C04FCu) {
        ctx->pc = 0x1C04FCu;
            // 0x1c04fc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0500u;
        goto label_1c0500;
    }
    ctx->pc = 0x1C04F8u;
    SET_GPR_U32(ctx, 31, 0x1C0500u);
    ctx->pc = 0x1C04FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C04F8u;
            // 0x1c04fc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0500u; }
        if (ctx->pc != 0x1C0500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0500u; }
        if (ctx->pc != 0x1C0500u) { return; }
    }
    ctx->pc = 0x1C0500u;
label_1c0500:
    // 0x1c0500: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c0500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1c0504:
    // 0x1c0504: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c0504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c0508:
    // 0x1c0508: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c0508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c050c:
    // 0x1c050c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c050cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c0510:
    // 0x1c0510: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0510u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c0514:
    // 0x1c0514: 0xc0724bc  jal         func_1C92F0
label_1c0518:
    if (ctx->pc == 0x1C0518u) {
        ctx->pc = 0x1C0518u;
            // 0x1c0518: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x1C051Cu;
        goto label_1c051c;
    }
    ctx->pc = 0x1C0514u;
    SET_GPR_U32(ctx, 31, 0x1C051Cu);
    ctx->pc = 0x1C0518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0514u;
            // 0x1c0518: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C051Cu; }
        if (ctx->pc != 0x1C051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C051Cu; }
        if (ctx->pc != 0x1C051Cu) { return; }
    }
    ctx->pc = 0x1C051Cu;
label_1c051c:
    // 0x1c051c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c051cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1c0520:
    // 0x1c0520: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c0520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c0524:
    // 0x1c0524: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c0524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c0528:
    // 0x1c0528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c0528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c052c:
    // 0x1c052c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c052cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c0530:
    // 0x1c0530: 0xc0724bc  jal         func_1C92F0
label_1c0534:
    if (ctx->pc == 0x1C0534u) {
        ctx->pc = 0x1C0534u;
            // 0x1c0534: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->pc = 0x1C0538u;
        goto label_1c0538;
    }
    ctx->pc = 0x1C0530u;
    SET_GPR_U32(ctx, 31, 0x1C0538u);
    ctx->pc = 0x1C0534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0530u;
            // 0x1c0534: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0538u; }
        if (ctx->pc != 0x1C0538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0538u; }
        if (ctx->pc != 0x1C0538u) { return; }
    }
    ctx->pc = 0x1C0538u;
label_1c0538:
    // 0x1c0538: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c0538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1c053c:
    // 0x1c053c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c0540:
    // 0x1c0540: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c0540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c0544:
    // 0x1c0544: 0x0  nop
    ctx->pc = 0x1c0544u;
    // NOP
label_1c0548:
    // 0x1c0548: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c054c:
    // 0x1c054c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1c054cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_1c0550:
    // 0x1c0550: 0xc0724a4  jal         func_1C9290
label_1c0554:
    if (ctx->pc == 0x1C0554u) {
        ctx->pc = 0x1C0554u;
            // 0x1c0554: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x1C0558u;
        goto label_1c0558;
    }
    ctx->pc = 0x1C0550u;
    SET_GPR_U32(ctx, 31, 0x1C0558u);
    ctx->pc = 0x1C0554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0550u;
            // 0x1c0554: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0558u; }
        if (ctx->pc != 0x1C0558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0558u; }
        if (ctx->pc != 0x1C0558u) { return; }
    }
    ctx->pc = 0x1C0558u;
label_1c0558:
    // 0x1c0558: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x1c0558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_1c055c:
    // 0x1c055c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c055cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c0560:
    // 0x1c0560: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1c0560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_1c0564:
    // 0x1c0564: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c0564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c0568:
    // 0x1c0568: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c056c:
    // 0x1c056c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c056cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c0570:
    // 0x1c0570: 0xc0724bc  jal         func_1C92F0
label_1c0574:
    if (ctx->pc == 0x1C0574u) {
        ctx->pc = 0x1C0574u;
            // 0x1c0574: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->pc = 0x1C0578u;
        goto label_1c0578;
    }
    ctx->pc = 0x1C0570u;
    SET_GPR_U32(ctx, 31, 0x1C0578u);
    ctx->pc = 0x1C0574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0570u;
            // 0x1c0574: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0578u; }
        if (ctx->pc != 0x1C0578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0578u; }
        if (ctx->pc != 0x1C0578u) { return; }
    }
    ctx->pc = 0x1C0578u;
label_1c0578:
    // 0x1c0578: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c0578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1c057c:
    // 0x1c057c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c0580:
    // 0x1c0580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c0580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c0584:
    // 0x1c0584: 0xc0724bc  jal         func_1C92F0
label_1c0588:
    if (ctx->pc == 0x1C0588u) {
        ctx->pc = 0x1C0588u;
            // 0x1c0588: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->pc = 0x1C058Cu;
        goto label_1c058c;
    }
    ctx->pc = 0x1C0584u;
    SET_GPR_U32(ctx, 31, 0x1C058Cu);
    ctx->pc = 0x1C0588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0584u;
            // 0x1c0588: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C058Cu; }
        if (ctx->pc != 0x1C058Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C058Cu; }
        if (ctx->pc != 0x1C058Cu) { return; }
    }
    ctx->pc = 0x1C058Cu;
label_1c058c:
    // 0x1c058c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c058cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1c0590:
    // 0x1c0590: 0xc0724a4  jal         func_1C9290
label_1c0594:
    if (ctx->pc == 0x1C0594u) {
        ctx->pc = 0x1C0594u;
            // 0x1c0594: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1C0598u;
        goto label_1c0598;
    }
    ctx->pc = 0x1C0590u;
    SET_GPR_U32(ctx, 31, 0x1C0598u);
    ctx->pc = 0x1C0594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0590u;
            // 0x1c0594: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0598u; }
        if (ctx->pc != 0x1C0598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0598u; }
        if (ctx->pc != 0x1C0598u) { return; }
    }
    ctx->pc = 0x1C0598u;
label_1c0598:
    // 0x1c0598: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x1c0598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
label_1c059c:
    // 0x1c059c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c059cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1c05a0:
    // 0x1c05a0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1c05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1c05a4:
    // 0x1c05a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c05a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c05a8:
    // 0x1c05a8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1c05a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1c05ac:
    // 0x1c05ac: 0x0  nop
    ctx->pc = 0x1c05acu;
    // NOP
label_1c05b0:
    // 0x1c05b0: 0x82430db1  lb          $v1, 0xDB1($s2)
    ctx->pc = 0x1c05b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3505)));
label_1c05b4:
    // 0x1c05b4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c05b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c05b8:
    // 0x1c05b8: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_1c05bc:
    if (ctx->pc == 0x1C05BCu) {
        ctx->pc = 0x1C05C0u;
        goto label_1c05c0;
    }
    ctx->pc = 0x1C05B8u;
    {
        const bool branch_taken_0x1c05b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c05b8) {
            ctx->pc = 0x1C04ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c04ac;
        }
    }
    ctx->pc = 0x1C05C0u;
label_1c05c0:
    // 0x1c05c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c05c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c05c4:
    // 0x1c05c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c05c8:
    // 0x1c05c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c05c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c05cc:
    // 0x1c05cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c05ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c05d0:
    // 0x1c05d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c05d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c05d4:
    // 0x1c05d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c05d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c05d8:
    // 0x1c05d8: 0x3e00008  jr          $ra
label_1c05dc:
    if (ctx->pc == 0x1C05DCu) {
        ctx->pc = 0x1C05DCu;
            // 0x1c05dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1C05E0u;
        goto label_fallthrough_0x1c05d8;
    }
    ctx->pc = 0x1C05D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C05DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05D8u;
            // 0x1c05dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c05d8:
    ctx->pc = 0x1C05E0u;
}
