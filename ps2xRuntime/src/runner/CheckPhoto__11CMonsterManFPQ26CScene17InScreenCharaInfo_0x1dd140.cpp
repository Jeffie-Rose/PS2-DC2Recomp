#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPhoto__11CMonsterManFPQ26CScene17InScreenCharaInfo
// Address: 0x1dd140 - 0x1dd40c
void CheckPhoto__11CMonsterManFPQ26CScene17InScreenCharaInfo_0x1dd140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPhoto__11CMonsterManFPQ26CScene17InScreenCharaInfo_0x1dd140");
#endif

    switch (ctx->pc) {
        case 0x1dd140u: goto label_1dd140;
        case 0x1dd144u: goto label_1dd144;
        case 0x1dd148u: goto label_1dd148;
        case 0x1dd14cu: goto label_1dd14c;
        case 0x1dd150u: goto label_1dd150;
        case 0x1dd154u: goto label_1dd154;
        case 0x1dd158u: goto label_1dd158;
        case 0x1dd15cu: goto label_1dd15c;
        case 0x1dd160u: goto label_1dd160;
        case 0x1dd164u: goto label_1dd164;
        case 0x1dd168u: goto label_1dd168;
        case 0x1dd16cu: goto label_1dd16c;
        case 0x1dd170u: goto label_1dd170;
        case 0x1dd174u: goto label_1dd174;
        case 0x1dd178u: goto label_1dd178;
        case 0x1dd17cu: goto label_1dd17c;
        case 0x1dd180u: goto label_1dd180;
        case 0x1dd184u: goto label_1dd184;
        case 0x1dd188u: goto label_1dd188;
        case 0x1dd18cu: goto label_1dd18c;
        case 0x1dd190u: goto label_1dd190;
        case 0x1dd194u: goto label_1dd194;
        case 0x1dd198u: goto label_1dd198;
        case 0x1dd19cu: goto label_1dd19c;
        case 0x1dd1a0u: goto label_1dd1a0;
        case 0x1dd1a4u: goto label_1dd1a4;
        case 0x1dd1a8u: goto label_1dd1a8;
        case 0x1dd1acu: goto label_1dd1ac;
        case 0x1dd1b0u: goto label_1dd1b0;
        case 0x1dd1b4u: goto label_1dd1b4;
        case 0x1dd1b8u: goto label_1dd1b8;
        case 0x1dd1bcu: goto label_1dd1bc;
        case 0x1dd1c0u: goto label_1dd1c0;
        case 0x1dd1c4u: goto label_1dd1c4;
        case 0x1dd1c8u: goto label_1dd1c8;
        case 0x1dd1ccu: goto label_1dd1cc;
        case 0x1dd1d0u: goto label_1dd1d0;
        case 0x1dd1d4u: goto label_1dd1d4;
        case 0x1dd1d8u: goto label_1dd1d8;
        case 0x1dd1dcu: goto label_1dd1dc;
        case 0x1dd1e0u: goto label_1dd1e0;
        case 0x1dd1e4u: goto label_1dd1e4;
        case 0x1dd1e8u: goto label_1dd1e8;
        case 0x1dd1ecu: goto label_1dd1ec;
        case 0x1dd1f0u: goto label_1dd1f0;
        case 0x1dd1f4u: goto label_1dd1f4;
        case 0x1dd1f8u: goto label_1dd1f8;
        case 0x1dd1fcu: goto label_1dd1fc;
        case 0x1dd200u: goto label_1dd200;
        case 0x1dd204u: goto label_1dd204;
        case 0x1dd208u: goto label_1dd208;
        case 0x1dd20cu: goto label_1dd20c;
        case 0x1dd210u: goto label_1dd210;
        case 0x1dd214u: goto label_1dd214;
        case 0x1dd218u: goto label_1dd218;
        case 0x1dd21cu: goto label_1dd21c;
        case 0x1dd220u: goto label_1dd220;
        case 0x1dd224u: goto label_1dd224;
        case 0x1dd228u: goto label_1dd228;
        case 0x1dd22cu: goto label_1dd22c;
        case 0x1dd230u: goto label_1dd230;
        case 0x1dd234u: goto label_1dd234;
        case 0x1dd238u: goto label_1dd238;
        case 0x1dd23cu: goto label_1dd23c;
        case 0x1dd240u: goto label_1dd240;
        case 0x1dd244u: goto label_1dd244;
        case 0x1dd248u: goto label_1dd248;
        case 0x1dd24cu: goto label_1dd24c;
        case 0x1dd250u: goto label_1dd250;
        case 0x1dd254u: goto label_1dd254;
        case 0x1dd258u: goto label_1dd258;
        case 0x1dd25cu: goto label_1dd25c;
        case 0x1dd260u: goto label_1dd260;
        case 0x1dd264u: goto label_1dd264;
        case 0x1dd268u: goto label_1dd268;
        case 0x1dd26cu: goto label_1dd26c;
        case 0x1dd270u: goto label_1dd270;
        case 0x1dd274u: goto label_1dd274;
        case 0x1dd278u: goto label_1dd278;
        case 0x1dd27cu: goto label_1dd27c;
        case 0x1dd280u: goto label_1dd280;
        case 0x1dd284u: goto label_1dd284;
        case 0x1dd288u: goto label_1dd288;
        case 0x1dd28cu: goto label_1dd28c;
        case 0x1dd290u: goto label_1dd290;
        case 0x1dd294u: goto label_1dd294;
        case 0x1dd298u: goto label_1dd298;
        case 0x1dd29cu: goto label_1dd29c;
        case 0x1dd2a0u: goto label_1dd2a0;
        case 0x1dd2a4u: goto label_1dd2a4;
        case 0x1dd2a8u: goto label_1dd2a8;
        case 0x1dd2acu: goto label_1dd2ac;
        case 0x1dd2b0u: goto label_1dd2b0;
        case 0x1dd2b4u: goto label_1dd2b4;
        case 0x1dd2b8u: goto label_1dd2b8;
        case 0x1dd2bcu: goto label_1dd2bc;
        case 0x1dd2c0u: goto label_1dd2c0;
        case 0x1dd2c4u: goto label_1dd2c4;
        case 0x1dd2c8u: goto label_1dd2c8;
        case 0x1dd2ccu: goto label_1dd2cc;
        case 0x1dd2d0u: goto label_1dd2d0;
        case 0x1dd2d4u: goto label_1dd2d4;
        case 0x1dd2d8u: goto label_1dd2d8;
        case 0x1dd2dcu: goto label_1dd2dc;
        case 0x1dd2e0u: goto label_1dd2e0;
        case 0x1dd2e4u: goto label_1dd2e4;
        case 0x1dd2e8u: goto label_1dd2e8;
        case 0x1dd2ecu: goto label_1dd2ec;
        case 0x1dd2f0u: goto label_1dd2f0;
        case 0x1dd2f4u: goto label_1dd2f4;
        case 0x1dd2f8u: goto label_1dd2f8;
        case 0x1dd2fcu: goto label_1dd2fc;
        case 0x1dd300u: goto label_1dd300;
        case 0x1dd304u: goto label_1dd304;
        case 0x1dd308u: goto label_1dd308;
        case 0x1dd30cu: goto label_1dd30c;
        case 0x1dd310u: goto label_1dd310;
        case 0x1dd314u: goto label_1dd314;
        case 0x1dd318u: goto label_1dd318;
        case 0x1dd31cu: goto label_1dd31c;
        case 0x1dd320u: goto label_1dd320;
        case 0x1dd324u: goto label_1dd324;
        case 0x1dd328u: goto label_1dd328;
        case 0x1dd32cu: goto label_1dd32c;
        case 0x1dd330u: goto label_1dd330;
        case 0x1dd334u: goto label_1dd334;
        case 0x1dd338u: goto label_1dd338;
        case 0x1dd33cu: goto label_1dd33c;
        case 0x1dd340u: goto label_1dd340;
        case 0x1dd344u: goto label_1dd344;
        case 0x1dd348u: goto label_1dd348;
        case 0x1dd34cu: goto label_1dd34c;
        case 0x1dd350u: goto label_1dd350;
        case 0x1dd354u: goto label_1dd354;
        case 0x1dd358u: goto label_1dd358;
        case 0x1dd35cu: goto label_1dd35c;
        case 0x1dd360u: goto label_1dd360;
        case 0x1dd364u: goto label_1dd364;
        case 0x1dd368u: goto label_1dd368;
        case 0x1dd36cu: goto label_1dd36c;
        case 0x1dd370u: goto label_1dd370;
        case 0x1dd374u: goto label_1dd374;
        case 0x1dd378u: goto label_1dd378;
        case 0x1dd37cu: goto label_1dd37c;
        case 0x1dd380u: goto label_1dd380;
        case 0x1dd384u: goto label_1dd384;
        case 0x1dd388u: goto label_1dd388;
        case 0x1dd38cu: goto label_1dd38c;
        case 0x1dd390u: goto label_1dd390;
        case 0x1dd394u: goto label_1dd394;
        case 0x1dd398u: goto label_1dd398;
        case 0x1dd39cu: goto label_1dd39c;
        case 0x1dd3a0u: goto label_1dd3a0;
        case 0x1dd3a4u: goto label_1dd3a4;
        case 0x1dd3a8u: goto label_1dd3a8;
        case 0x1dd3acu: goto label_1dd3ac;
        case 0x1dd3b0u: goto label_1dd3b0;
        case 0x1dd3b4u: goto label_1dd3b4;
        case 0x1dd3b8u: goto label_1dd3b8;
        case 0x1dd3bcu: goto label_1dd3bc;
        case 0x1dd3c0u: goto label_1dd3c0;
        case 0x1dd3c4u: goto label_1dd3c4;
        case 0x1dd3c8u: goto label_1dd3c8;
        case 0x1dd3ccu: goto label_1dd3cc;
        case 0x1dd3d0u: goto label_1dd3d0;
        case 0x1dd3d4u: goto label_1dd3d4;
        case 0x1dd3d8u: goto label_1dd3d8;
        case 0x1dd3dcu: goto label_1dd3dc;
        case 0x1dd3e0u: goto label_1dd3e0;
        case 0x1dd3e4u: goto label_1dd3e4;
        case 0x1dd3e8u: goto label_1dd3e8;
        case 0x1dd3ecu: goto label_1dd3ec;
        case 0x1dd3f0u: goto label_1dd3f0;
        case 0x1dd3f4u: goto label_1dd3f4;
        case 0x1dd3f8u: goto label_1dd3f8;
        case 0x1dd3fcu: goto label_1dd3fc;
        case 0x1dd400u: goto label_1dd400;
        case 0x1dd404u: goto label_1dd404;
        case 0x1dd408u: goto label_1dd408;
        default: break;
    }

    ctx->pc = 0x1dd140u;

label_1dd140:
    // 0x1dd140: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1dd140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1dd144:
    // 0x1dd144: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1dd144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1dd148:
    // 0x1dd148: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1dd148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1dd14c:
    // 0x1dd14c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1dd14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1dd150:
    // 0x1dd150: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1dd150u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd154:
    // 0x1dd154: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1dd154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1dd158:
    // 0x1dd158: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1dd158u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dd15c:
    // 0x1dd15c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dd15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1dd160:
    // 0x1dd160: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dd164:
    // 0x1dd164: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dd164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd168:
    // 0x1dd168: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1dd16c:
    // 0x1dd16c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dd16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd170:
    // 0x1dd170: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1dd170u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd174:
    // 0x1dd174: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1dd174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dd178:
    // 0x1dd178: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1dd178u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1dd17c:
    // 0x1dd17c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dd17cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1dd180:
    // 0x1dd180: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dd180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1dd184:
    // 0x1dd184: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x1dd184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_1dd188:
    // 0x1dd188: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x1dd188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1dd18c:
    // 0x1dd18c: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1dd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1dd190:
    // 0x1dd190: 0x1080007b  beqz        $a0, . + 4 + (0x7B << 2)
label_1dd194:
    if (ctx->pc == 0x1DD194u) {
        ctx->pc = 0x1DD194u;
            // 0x1dd194: 0x24530484  addiu       $s3, $v0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1156));
        ctx->pc = 0x1DD198u;
        goto label_1dd198;
    }
    ctx->pc = 0x1DD190u;
    {
        const bool branch_taken_0x1dd190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD190u;
            // 0x1dd194: 0x24530484  addiu       $s3, $v0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd190) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD198u;
label_1dd198:
    // 0x1dd198: 0x8483068a  lh          $v1, 0x68A($a0)
    ctx->pc = 0x1dd198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1674)));
label_1dd19c:
    // 0x1dd19c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd1a0:
    // 0x1dd1a0: 0x14620077  bne         $v1, $v0, . + 4 + (0x77 << 2)
label_1dd1a4:
    if (ctx->pc == 0x1DD1A4u) {
        ctx->pc = 0x1DD1A8u;
        goto label_1dd1a8;
    }
    ctx->pc = 0x1DD1A0u;
    {
        const bool branch_taken_0x1dd1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd1a0) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD1A8u;
label_1dd1a8:
    // 0x1dd1a8: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x1dd1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd1ac:
    // 0x1dd1ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dd1b0:
    // 0x1dd1b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd1b4:
    // 0x1dd1b4: 0x0  nop
    ctx->pc = 0x1dd1b4u;
    // NOP
label_1dd1b8:
    // 0x1dd1b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dd1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd1bc:
    // 0x1dd1bc: 0x0  nop
    ctx->pc = 0x1dd1bcu;
    // NOP
label_1dd1c0:
    // 0x1dd1c0: 0x4501006f  bc1t        . + 4 + (0x6F << 2)
label_1dd1c4:
    if (ctx->pc == 0x1DD1C4u) {
        ctx->pc = 0x1DD1C8u;
        goto label_1dd1c8;
    }
    ctx->pc = 0x1DD1C0u;
    {
        const bool branch_taken_0x1dd1c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd1c0) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD1C8u;
label_1dd1c8:
    // 0x1dd1c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dd1c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dd1cc:
    // 0x1dd1cc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1dd1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1dd1d0:
    // 0x1dd1d0: 0x320f809  jalr        $t9
label_1dd1d4:
    if (ctx->pc == 0x1DD1D4u) {
        ctx->pc = 0x1DD1D4u;
            // 0x1dd1d4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1DD1D8u;
        goto label_1dd1d8;
    }
    ctx->pc = 0x1DD1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD1D8u);
        ctx->pc = 0x1DD1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1D0u;
            // 0x1dd1d4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD1D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1D8u; }
            if (ctx->pc != 0x1DD1D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD1D8u;
label_1dd1d8:
    // 0x1dd1d8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1dd1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dd1dc:
    // 0x1dd1dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1e0:
    // 0x1dd1e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1e4:
    // 0x1dd1e4: 0xc05d420  jal         func_175080
label_1dd1e8:
    if (ctx->pc == 0x1DD1E8u) {
        ctx->pc = 0x1DD1E8u;
            // 0x1dd1e8: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1DD1ECu;
        goto label_1dd1ec;
    }
    ctx->pc = 0x1DD1E4u;
    SET_GPR_U32(ctx, 31, 0x1DD1ECu);
    ctx->pc = 0x1DD1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1E4u;
            // 0x1dd1e8: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1ECu; }
        if (ctx->pc != 0x1DD1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1ECu; }
        if (ctx->pc != 0x1DD1ECu) { return; }
    }
    ctx->pc = 0x1DD1ECu;
label_1dd1ec:
    // 0x1dd1ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1dd1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd1f0:
    // 0x1dd1f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1dd1f4:
    // 0x1dd1f4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1dd1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dd1f8:
    // 0x1dd1f8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1dd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1dd1fc:
    // 0x1dd1fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd200:
    // 0x1dd200: 0xc0516cc  jal         func_145B30
label_1dd204:
    if (ctx->pc == 0x1DD204u) {
        ctx->pc = 0x1DD204u;
            // 0x1dd204: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1DD208u;
        goto label_1dd208;
    }
    ctx->pc = 0x1DD200u;
    SET_GPR_U32(ctx, 31, 0x1DD208u);
    ctx->pc = 0x1DD204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD200u;
            // 0x1dd204: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B30u;
    if (runtime->hasFunction(0x145B30u)) {
        auto targetFn = runtime->lookupFunction(0x145B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD208u; }
        if (ctx->pc != 0x1DD208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDirFromCamera__FPfPf_0x145b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD208u; }
        if (ctx->pc != 0x1DD208u) { return; }
    }
    ctx->pc = 0x1DD208u;
label_1dd208:
    // 0x1dd208: 0xc04bff4  jal         func_12FFD0
label_1dd20c:
    if (ctx->pc == 0x1DD20Cu) {
        ctx->pc = 0x1DD20Cu;
            // 0x1dd20c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1DD210u;
        goto label_1dd210;
    }
    ctx->pc = 0x1DD208u;
    SET_GPR_U32(ctx, 31, 0x1DD210u);
    ctx->pc = 0x1DD20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD208u;
            // 0x1dd20c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD210u; }
        if (ctx->pc != 0x1DD210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD210u; }
        if (ctx->pc != 0x1DD210u) { return; }
    }
    ctx->pc = 0x1DD210u;
label_1dd210:
    // 0x1dd210: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1dd210u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1dd214:
    // 0x1dd214: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1dd214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_1dd218:
    // 0x1dd218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd21c:
    // 0x1dd21c: 0x0  nop
    ctx->pc = 0x1dd21cu;
    // NOP
label_1dd220:
    // 0x1dd220: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1dd220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd224:
    // 0x1dd224: 0x0  nop
    ctx->pc = 0x1dd224u;
    // NOP
label_1dd228:
    // 0x1dd228: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1dd22c:
    if (ctx->pc == 0x1DD22Cu) {
        ctx->pc = 0x1DD230u;
        goto label_1dd230;
    }
    ctx->pc = 0x1DD228u;
    {
        const bool branch_taken_0x1dd228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd228) {
            ctx->pc = 0x1DD244u;
            goto label_1dd244;
        }
    }
    ctx->pc = 0x1DD230u;
label_1dd230:
    // 0x1dd230: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1dd230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dd234:
    // 0x1dd234: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x1dd234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
label_1dd238:
    // 0x1dd238: 0x8042006a  lb          $v0, 0x6A($v0)
    ctx->pc = 0x1dd238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 106)));
label_1dd23c:
    // 0x1dd23c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_1dd240:
    if (ctx->pc == 0x1DD240u) {
        ctx->pc = 0x1DD244u;
        goto label_1dd244;
    }
    ctx->pc = 0x1DD23Cu;
    {
        const bool branch_taken_0x1dd23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd23c) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD244u;
label_1dd244:
    // 0x1dd244: 0x0  nop
    ctx->pc = 0x1dd244u;
    // NOP
label_1dd248:
    // 0x1dd248: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1dd248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1dd24c:
    // 0x1dd24c: 0xc041be0  jal         func_106F80
label_1dd250:
    if (ctx->pc == 0x1DD250u) {
        ctx->pc = 0x1DD250u;
            // 0x1dd250: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD254u;
        goto label_1dd254;
    }
    ctx->pc = 0x1DD24Cu;
    SET_GPR_U32(ctx, 31, 0x1DD254u);
    ctx->pc = 0x1DD250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD24Cu;
            // 0x1dd250: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD254u; }
        if (ctx->pc != 0x1DD254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD254u; }
        if (ctx->pc != 0x1DD254u) { return; }
    }
    ctx->pc = 0x1DD254u;
label_1dd254:
    // 0x1dd254: 0xc04c050  jal         func_130140
label_1dd258:
    if (ctx->pc == 0x1DD258u) {
        ctx->pc = 0x1DD258u;
            // 0x1dd258: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1DD25Cu;
        goto label_1dd25c;
    }
    ctx->pc = 0x1DD254u;
    SET_GPR_U32(ctx, 31, 0x1DD25Cu);
    ctx->pc = 0x1DD258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD254u;
            // 0x1dd258: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD25Cu; }
        if (ctx->pc != 0x1DD25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD25Cu; }
        if (ctx->pc != 0x1DD25Cu) { return; }
    }
    ctx->pc = 0x1DD25Cu;
label_1dd25c:
    // 0x1dd25c: 0xc04c050  jal         func_130140
label_1dd260:
    if (ctx->pc == 0x1DD260u) {
        ctx->pc = 0x1DD260u;
            // 0x1dd260: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1DD264u;
        goto label_1dd264;
    }
    ctx->pc = 0x1DD25Cu;
    SET_GPR_U32(ctx, 31, 0x1DD264u);
    ctx->pc = 0x1DD260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD25Cu;
            // 0x1dd260: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD264u; }
        if (ctx->pc != 0x1DD264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD264u; }
        if (ctx->pc != 0x1DD264u) { return; }
    }
    ctx->pc = 0x1DD264u;
label_1dd264:
    // 0x1dd264: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x1dd264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dd268:
    // 0x1dd268: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dd268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1dd26c:
    // 0x1dd26c: 0xc041cf6  jal         func_1073D8
label_1dd270:
    if (ctx->pc == 0x1DD270u) {
        ctx->pc = 0x1DD270u;
            // 0x1dd270: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD274u;
        goto label_1dd274;
    }
    ctx->pc = 0x1DD26Cu;
    SET_GPR_U32(ctx, 31, 0x1DD274u);
    ctx->pc = 0x1DD270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD26Cu;
            // 0x1dd270: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD274u; }
        if (ctx->pc != 0x1DD274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD274u; }
        if (ctx->pc != 0x1DD274u) { return; }
    }
    ctx->pc = 0x1DD274u;
label_1dd274:
    // 0x1dd274: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x1dd274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dd278:
    // 0x1dd278: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1dd278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1dd27c:
    // 0x1dd27c: 0x79070000  lq          $a3, 0x0($t0)
    ctx->pc = 0x1dd27cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_1dd280:
    // 0x1dd280: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1dd280u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1dd284:
    // 0x1dd284: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1dd284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1dd288:
    // 0x1dd288: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1dd288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1dd28c:
    // 0x1dd28c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1dd28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1dd290:
    // 0x1dd290: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1dd290u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_1dd294:
    // 0x1dd294: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x1dd294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
label_1dd298:
    // 0x1dd298: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1dd298u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_1dd29c:
    // 0x1dd29c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd29cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1dd2a0:
    // 0x1dd2a0: 0xc041bd6  jal         func_106F58
label_1dd2a4:
    if (ctx->pc == 0x1DD2A4u) {
        ctx->pc = 0x1DD2A4u;
            // 0x1dd2a4: 0xafa6012c  sw          $a2, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 6));
        ctx->pc = 0x1DD2A8u;
        goto label_1dd2a8;
    }
    ctx->pc = 0x1DD2A0u;
    SET_GPR_U32(ctx, 31, 0x1DD2A8u);
    ctx->pc = 0x1DD2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2A0u;
            // 0x1dd2a4: 0xafa6012c  sw          $a2, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2A8u; }
        if (ctx->pc != 0x1DD2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2A8u; }
        if (ctx->pc != 0x1DD2A8u) { return; }
    }
    ctx->pc = 0x1DD2A8u;
label_1dd2a8:
    // 0x1dd2a8: 0xc04bc90  jal         func_12F240
label_1dd2ac:
    if (ctx->pc == 0x1DD2ACu) {
        ctx->pc = 0x1DD2ACu;
            // 0x1dd2ac: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1DD2B0u;
        goto label_1dd2b0;
    }
    ctx->pc = 0x1DD2A8u;
    SET_GPR_U32(ctx, 31, 0x1DD2B0u);
    ctx->pc = 0x1DD2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2A8u;
            // 0x1dd2ac: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2B0u; }
        if (ctx->pc != 0x1DD2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2B0u; }
        if (ctx->pc != 0x1DD2B0u) { return; }
    }
    ctx->pc = 0x1DD2B0u;
label_1dd2b0:
    // 0x1dd2b0: 0x27b30140  addiu       $s3, $sp, 0x140
    ctx->pc = 0x1dd2b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1dd2b4:
    // 0x1dd2b4: 0xc04bc90  jal         func_12F240
label_1dd2b8:
    if (ctx->pc == 0x1DD2B8u) {
        ctx->pc = 0x1DD2B8u;
            // 0x1dd2b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2BCu;
        goto label_1dd2bc;
    }
    ctx->pc = 0x1DD2B4u;
    SET_GPR_U32(ctx, 31, 0x1DD2BCu);
    ctx->pc = 0x1DD2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2B4u;
            // 0x1dd2b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2BCu; }
        if (ctx->pc != 0x1DD2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2BCu; }
        if (ctx->pc != 0x1DD2BCu) { return; }
    }
    ctx->pc = 0x1DD2BCu;
label_1dd2bc:
    // 0x1dd2bc: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x1dd2bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
label_1dd2c0:
    // 0x1dd2c0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1dd2c4:
    // 0x1dd2c4: 0xe7b60134  swc1        $f22, 0x134($sp)
    ctx->pc = 0x1dd2c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1dd2c8:
    // 0x1dd2c8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1dd2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1dd2cc:
    // 0x1dd2cc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1dd2d0:
    // 0x1dd2d0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1dd2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1dd2d4:
    // 0x1dd2d4: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x1dd2d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1dd2d8:
    // 0x1dd2d8: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x1dd2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1dd2dc:
    // 0x1dd2dc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1dd2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1dd2e0:
    // 0x1dd2e0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1dd2e4:
    // 0x1dd2e4: 0xc04d7c8  jal         func_135F20
label_1dd2e8:
    if (ctx->pc == 0x1DD2E8u) {
        ctx->pc = 0x1DD2E8u;
            // 0x1dd2e8: 0xe7b60138  swc1        $f22, 0x138($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->pc = 0x1DD2ECu;
        goto label_1dd2ec;
    }
    ctx->pc = 0x1DD2E4u;
    SET_GPR_U32(ctx, 31, 0x1DD2ECu);
    ctx->pc = 0x1DD2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2E4u;
            // 0x1dd2e8: 0xe7b60138  swc1        $f22, 0x138($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2ECu; }
        if (ctx->pc != 0x1DD2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FP9mgVu0FBOXPA4_fPfPf_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2ECu; }
        if (ctx->pc != 0x1DD2ECu) { return; }
    }
    ctx->pc = 0x1DD2ECu;
label_1dd2ec:
    // 0x1dd2ec: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1dd2f0:
    if (ctx->pc == 0x1DD2F0u) {
        ctx->pc = 0x1DD2F4u;
        goto label_1dd2f4;
    }
    ctx->pc = 0x1DD2ECu;
    {
        const bool branch_taken_0x1dd2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2ec) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD2F4u;
label_1dd2f4:
    // 0x1dd2f4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd2f8:
    // 0x1dd2f8: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1dd2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_1dd2fc:
    // 0x1dd2fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd300:
    // 0x1dd300: 0x0  nop
    ctx->pc = 0x1dd300u;
    // NOP
label_1dd304:
    // 0x1dd304: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dd304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd308:
    // 0x1dd308: 0x0  nop
    ctx->pc = 0x1dd308u;
    // NOP
label_1dd30c:
    // 0x1dd30c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_1dd310:
    if (ctx->pc == 0x1DD310u) {
        ctx->pc = 0x1DD314u;
        goto label_1dd314;
    }
    ctx->pc = 0x1DD30Cu;
    {
        const bool branch_taken_0x1dd30c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd30c) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD314u;
label_1dd314:
    // 0x1dd314: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1dd314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd318:
    // 0x1dd318: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1dd318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1dd31c:
    // 0x1dd31c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1dd31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dd320:
    // 0x1dd320: 0x0  nop
    ctx->pc = 0x1dd320u;
    // NOP
label_1dd324:
    // 0x1dd324: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1dd324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd328:
    // 0x1dd328: 0x0  nop
    ctx->pc = 0x1dd328u;
    // NOP
label_1dd32c:
    // 0x1dd32c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1dd330:
    if (ctx->pc == 0x1DD330u) {
        ctx->pc = 0x1DD334u;
        goto label_1dd334;
    }
    ctx->pc = 0x1DD32Cu;
    {
        const bool branch_taken_0x1dd32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd32c) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD334u;
label_1dd334:
    // 0x1dd334: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x1dd334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd338:
    // 0x1dd338: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dd338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd33c:
    // 0x1dd33c: 0x0  nop
    ctx->pc = 0x1dd33cu;
    // NOP
label_1dd340:
    // 0x1dd340: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_1dd344:
    if (ctx->pc == 0x1DD344u) {
        ctx->pc = 0x1DD348u;
        goto label_1dd348;
    }
    ctx->pc = 0x1DD340u;
    {
        const bool branch_taken_0x1dd340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd340) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD348u;
label_1dd348:
    // 0x1dd348: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x1dd348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd34c:
    // 0x1dd34c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1dd34cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd350:
    // 0x1dd350: 0x0  nop
    ctx->pc = 0x1dd350u;
    // NOP
label_1dd354:
    // 0x1dd354: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1dd358:
    if (ctx->pc == 0x1DD358u) {
        ctx->pc = 0x1DD35Cu;
        goto label_1dd35c;
    }
    ctx->pc = 0x1DD354u;
    {
        const bool branch_taken_0x1dd354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd354) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD35Cu;
label_1dd35c:
    // 0x1dd35c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
label_1dd360:
    if (ctx->pc == 0x1DD360u) {
        ctx->pc = 0x1DD364u;
        goto label_1dd364;
    }
    ctx->pc = 0x1DD35Cu;
    {
        const bool branch_taken_0x1dd35c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1dd35c) {
            ctx->pc = 0x1DD374u;
            goto label_1dd374;
        }
    }
    ctx->pc = 0x1DD364u;
label_1dd364:
    // 0x1dd364: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x1dd364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd368:
    // 0x1dd368: 0x0  nop
    ctx->pc = 0x1dd368u;
    // NOP
label_1dd36c:
    // 0x1dd36c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1dd370:
    if (ctx->pc == 0x1DD370u) {
        ctx->pc = 0x1DD374u;
        goto label_1dd374;
    }
    ctx->pc = 0x1DD36Cu;
    {
        const bool branch_taken_0x1dd36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd36c) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD374u;
label_1dd374:
    // 0x1dd374: 0x0  nop
    ctx->pc = 0x1dd374u;
    // NOP
label_1dd378:
    // 0x1dd378: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1dd378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd37c:
    // 0x1dd37c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x1dd37cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_1dd380:
    // 0x1dd380: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1dd384:
    // 0x1dd384: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x1dd384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
label_1dd388:
    // 0x1dd388: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
label_1dd38c:
    if (ctx->pc == 0x1DD38Cu) {
        ctx->pc = 0x1DD38Cu;
            // 0x1dd38c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DD390u;
        goto label_1dd390;
    }
    ctx->pc = 0x1DD388u;
    {
        const bool branch_taken_0x1dd388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD388u;
            // 0x1dd38c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd388) {
            ctx->pc = 0x1DD188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd188;
        }
    }
    ctx->pc = 0x1DD390u;
label_1dd390:
    // 0x1dd390: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_1dd394:
    if (ctx->pc == 0x1DD394u) {
        ctx->pc = 0x1DD394u;
            // 0x1dd394: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x1DD398u;
        goto label_1dd398;
    }
    ctx->pc = 0x1DD390u;
    {
        const bool branch_taken_0x1dd390 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1DD394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD390u;
            // 0x1dd394: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd390) {
            ctx->pc = 0x1DD3A0u;
            goto label_1dd3a0;
        }
    }
    ctx->pc = 0x1DD398u;
label_1dd398:
    // 0x1dd398: 0x10000010  b           . + 4 + (0x10 << 2)
label_1dd39c:
    if (ctx->pc == 0x1DD39Cu) {
        ctx->pc = 0x1DD39Cu;
            // 0x1dd39c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DD3A0u;
        goto label_1dd3a0;
    }
    ctx->pc = 0x1DD398u;
    {
        const bool branch_taken_0x1dd398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD398u;
            // 0x1dd39c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd398) {
            ctx->pc = 0x1DD3DCu;
            goto label_1dd3dc;
        }
    }
    ctx->pc = 0x1DD3A0u;
label_1dd3a0:
    // 0x1dd3a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1dd3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1dd3a4:
    // 0x1dd3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd3a8:
    // 0x1dd3a8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1dd3ac:
    // 0x1dd3ac: 0x8c620484  lw          $v0, 0x484($v1)
    ctx->pc = 0x1dd3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1dd3b0:
    // 0x1dd3b0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1dd3b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1dd3b4:
    // 0x1dd3b4: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x1dd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
label_1dd3b8:
    // 0x1dd3b8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1dd3b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd3bc:
    // 0x1dd3bc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1dd3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1dd3c0:
    // 0x1dd3c0: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1dd3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_1dd3c4:
    // 0x1dd3c4: 0x8c630484  lw          $v1, 0x484($v1)
    ctx->pc = 0x1dd3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1dd3c8:
    // 0x1dd3c8: 0x8c6212bc  lw          $v0, 0x12BC($v1)
    ctx->pc = 0x1dd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4796)));
label_1dd3cc:
    // 0x1dd3cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dd3d0:
    if (ctx->pc == 0x1DD3D0u) {
        ctx->pc = 0x1DD3D0u;
            // 0x1dd3d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DD3D4u;
        goto label_1dd3d4;
    }
    ctx->pc = 0x1DD3CCu;
    {
        const bool branch_taken_0x1dd3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3CCu;
            // 0x1dd3d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3cc) {
            ctx->pc = 0x1DD3DCu;
            goto label_1dd3dc;
        }
    }
    ctx->pc = 0x1DD3D4u;
label_1dd3d4:
    // 0x1dd3d4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1dd3d8:
    if (ctx->pc == 0x1DD3D8u) {
        ctx->pc = 0x1DD3D8u;
            // 0x1dd3d8: 0x8c6212b8  lw          $v0, 0x12B8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4792)));
        ctx->pc = 0x1DD3DCu;
        goto label_1dd3dc;
    }
    ctx->pc = 0x1DD3D4u;
    {
        const bool branch_taken_0x1dd3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3D4u;
            // 0x1dd3d8: 0x8c6212b8  lw          $v0, 0x12B8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3d4) {
            ctx->pc = 0x1DD3DCu;
            goto label_1dd3dc;
        }
    }
    ctx->pc = 0x1DD3DCu;
label_1dd3dc:
    // 0x1dd3dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1dd3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1dd3e0:
    // 0x1dd3e0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1dd3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1dd3e4:
    // 0x1dd3e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1dd3e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1dd3e8:
    // 0x1dd3e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1dd3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1dd3ec:
    // 0x1dd3ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1dd3ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dd3f0:
    // 0x1dd3f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dd3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dd3f4:
    // 0x1dd3f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1dd3f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dd3f8:
    // 0x1dd3f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dd3f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd3fc:
    // 0x1dd3fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd400:
    // 0x1dd400: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd404:
    // 0x1dd404: 0x3e00008  jr          $ra
label_1dd408:
    if (ctx->pc == 0x1DD408u) {
        ctx->pc = 0x1DD408u;
            // 0x1dd408: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x1DD40Cu;
        goto label_fallthrough_0x1dd404;
    }
    ctx->pc = 0x1DD404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD404u;
            // 0x1dd408: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dd404:
    ctx->pc = 0x1DD40Cu;
}
