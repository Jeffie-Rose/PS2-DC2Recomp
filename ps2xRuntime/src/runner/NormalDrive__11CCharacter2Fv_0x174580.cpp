#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

extern "C" uint32_t dc2_get_motion_speed_multiplier_bits(uint8_t *rdram);

// Function: NormalDrive__11CCharacter2Fv
// Address: 0x174580 - 0x174910
void NormalDrive__11CCharacter2Fv_0x174580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NormalDrive__11CCharacter2Fv_0x174580");
#endif

    switch (ctx->pc) {
        case 0x174594u: goto label_174594;
        case 0x174634u: goto label_174634;
        case 0x1747a4u: goto label_1747a4;
        case 0x174818u: goto label_174818;
        case 0x174884u: goto label_174884;
        case 0x1748b8u: goto label_1748b8;
        default: break;
    }

    ctx->pc = 0x174580u;

    // 0x174580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17458c: 0xc050874  jal         func_1421D0
    ctx->pc = 0x17458Cu;
    SET_GPR_U32(ctx, 31, 0x174594u);
    ctx->pc = 0x174590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17458Cu;
            // 0x174590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421D0u;
    if (runtime->hasFunction(0x1421D0u)) {
        auto targetFn = runtime->lookupFunction(0x1421D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174594u; }
        if (ctx->pc != 0x174594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetNowFrameRate__Fv_0x1421d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174594u; }
        if (ctx->pc != 0x174594u) { return; }
    }
    ctx->pc = 0x174594u;
label_174594:
    // 0x174594: 0x8e060368  lw          $a2, 0x368($s0)
    ctx->pc = 0x174594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x174598: 0x8e030374  lw          $v1, 0x374($s0)
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x17459c: 0x10c30027  beq         $a2, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x17459Cu;
    {
        const bool branch_taken_0x17459c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x17459c) {
            ctx->pc = 0x17463Cu;
            goto label_17463c;
        }
    }
    ctx->pc = 0x1745A4u;
    // 0x1745a4: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1745A4u;
    {
        const bool branch_taken_0x1745a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1745a4) {
            ctx->pc = 0x17463Cu;
            goto label_17463c;
        }
    }
    ctx->pc = 0x1745ACu;
    // 0x1745ac: 0xae030394  sw          $v1, 0x394($s0)
    ctx->pc = 0x1745acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 3));
    // 0x1745b0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1745b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1745b4: 0x8e04037c  lw          $a0, 0x37C($s0)
    ctx->pc = 0x1745b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x1745b8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1745b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1745bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1745bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1745c0: 0xae040398  sw          $a0, 0x398($s0)
    ctx->pc = 0x1745c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 4));
    // 0x1745c4: 0x8e040380  lw          $a0, 0x380($s0)
    ctx->pc = 0x1745c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x1745c8: 0xae04039c  sw          $a0, 0x39C($s0)
    ctx->pc = 0x1745c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 4));
    // 0x1745cc: 0xc6000388  lwc1        $f0, 0x388($s0)
    ctx->pc = 0x1745ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1745d0: 0xe60003a0  swc1        $f0, 0x3A0($s0)
    ctx->pc = 0x1745d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
    // 0x1745d4: 0x8e040368  lw          $a0, 0x368($s0)
    ctx->pc = 0x1745d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x1745d8: 0xae040374  sw          $a0, 0x374($s0)
    ctx->pc = 0x1745d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 4));
    // 0x1745dc: 0x8e040374  lw          $a0, 0x374($s0)
    ctx->pc = 0x1745dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x1745e0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1745e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1745e4: 0xe6000390  swc1        $f0, 0x390($s0)
    ctx->pc = 0x1745e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
    // 0x1745e8: 0x8e040370  lw          $a0, 0x370($s0)
    ctx->pc = 0x1745e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x1745ec: 0xae040380  sw          $a0, 0x380($s0)
    ctx->pc = 0x1745ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 4));
    // 0x1745f0: 0x8e04036c  lw          $a0, 0x36C($s0)
    ctx->pc = 0x1745f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x1745f4: 0xae04037c  sw          $a0, 0x37C($s0)
    ctx->pc = 0x1745f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 4));
    // 0x1745f8: 0xae030508  sw          $v1, 0x508($s0)
    ctx->pc = 0x1745f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 3));
    // 0x1745fc: 0xae020384  sw          $v0, 0x384($s0)
    ctx->pc = 0x1745fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 2));
    // 0x174600: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x174600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x174604: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x174604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x174608: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x174608u;
    {
        const bool branch_taken_0x174608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174608) {
            ctx->pc = 0x174628u;
            goto label_174628;
        }
    }
    ctx->pc = 0x174610u;
    // 0x174610: 0x8e020368  lw          $v0, 0x368($s0)
    ctx->pc = 0x174610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x174614: 0xae020394  sw          $v0, 0x394($s0)
    ctx->pc = 0x174614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 2));
    // 0x174618: 0x8e020374  lw          $v0, 0x374($s0)
    ctx->pc = 0x174618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x17461c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x17461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174624: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x174624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
label_174628:
    // 0x174628: 0x8e050374  lw          $a1, 0x374($s0)
    ctx->pc = 0x174628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x17462c: 0xc05de8c  jal         func_177A30
    ctx->pc = 0x17462Cu;
    SET_GPR_U32(ctx, 31, 0x174634u);
    ctx->pc = 0x174630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17462Cu;
            // 0x174630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177A30u;
    if (runtime->hasFunction(0x177A30u)) {
        auto targetFn = runtime->lookupFunction(0x177A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174634u; }
        if (ctx->pc != 0x174634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExecEntryEffect__11CCharacter2FP15CHRINFO_KEY_SET_0x177a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174634u; }
        if (ctx->pc != 0x174634u) { return; }
    }
    ctx->pc = 0x174634u;
label_174634:
    // 0x174634: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x174634u;
    {
        const bool branch_taken_0x174634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174634u;
            // 0x174638: 0x8e060374  lw          $a2, 0x374($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174634) {
            ctx->pc = 0x174688u;
            goto label_174688;
        }
    }
    ctx->pc = 0x17463Cu;
label_17463c:
    // 0x17463c: 0x8e03037c  lw          $v1, 0x37C($s0)
    ctx->pc = 0x17463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x174640: 0x8e07036c  lw          $a3, 0x36C($s0)
    ctx->pc = 0x174640u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x174644: 0x1067000f  beq         $v1, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x174644u;
    {
        const bool branch_taken_0x174644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x174644) {
            ctx->pc = 0x174684u;
            goto label_174684;
        }
    }
    ctx->pc = 0x17464Cu;
    // 0x17464c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x17464Cu;
    {
        const bool branch_taken_0x17464c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x17464c) {
            ctx->pc = 0x174684u;
            goto label_174684;
        }
    }
    ctx->pc = 0x174654u;
    // 0x174654: 0xae07037c  sw          $a3, 0x37C($s0)
    ctx->pc = 0x174654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 7));
    // 0x174658: 0x8e03036c  lw          $v1, 0x36C($s0)
    ctx->pc = 0x174658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x17465c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x17465cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x174660: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x174660u;
    {
        const bool branch_taken_0x174660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174660u;
            // 0x174664: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174660) {
            ctx->pc = 0x174684u;
            goto label_174684;
        }
    }
    ctx->pc = 0x174668u;
    // 0x174668: 0xae030384  sw          $v1, 0x384($s0)
    ctx->pc = 0x174668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 3));
    // 0x17466c: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x17466cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x174670: 0xae030394  sw          $v1, 0x394($s0)
    ctx->pc = 0x174670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 3));
    // 0x174674: 0x8e030374  lw          $v1, 0x374($s0)
    ctx->pc = 0x174674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x174678: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x174678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17467c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17467cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174680: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x174680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
label_174684:
    // 0x174684: 0x8e060374  lw          $a2, 0x374($s0)
    ctx->pc = 0x174684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
label_174688:
    // 0x174688: 0x10c0009d  beqz        $a2, . + 4 + (0x9D << 2)
    ctx->pc = 0x174688u;
    {
        const bool branch_taken_0x174688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x174688) {
            ctx->pc = 0x174900u;
            goto label_174900;
        }
    }
    ctx->pc = 0x174690u;
    // 0x174690: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x174690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
    // 0x174694: 0x14660043  bne         $v1, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x174694u;
    {
        const bool branch_taken_0x174694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x174698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174694u;
            // 0x174698: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)dc2_get_motion_speed_multiplier_bits(rdram));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174694) {
            ctx->pc = 0x1747A4u;
            goto label_1747a4;
        }
    }
    ctx->pc = 0x17469Cu;
    // 0x17469c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17469cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1746a0: 0xc6000390  lwc1        $f0, 0x390($s0)
    ctx->pc = 0x1746a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1746a4: 0x8e03037c  lw          $v1, 0x37C($s0)
    ctx->pc = 0x1746a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x1746a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1746a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1746ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1746ACu;
    {
        const bool branch_taken_0x1746ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746ACu;
            // 0x1746b0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746ac) {
            ctx->pc = 0x1746B8u;
            goto label_1746b8;
        }
    }
    ctx->pc = 0x1746B4u;
    // 0x1746b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1746b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1746b8:
    // 0x1746b8: 0xc6000388  lwc1        $f0, 0x388($s0)
    ctx->pc = 0x1746b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1746bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1746bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1746c0: 0x0  nop
    ctx->pc = 0x1746c0u;
    // NOP
    // 0x1746c4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1746c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1746c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1746c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1746cc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1746CCu;
    {
        const bool branch_taken_0x1746cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1746D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746CCu;
            // 0x1746d0: 0xe6000388  swc1        $f0, 0x388($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746cc) {
            ctx->pc = 0x1746DCu;
            goto label_1746dc;
        }
    }
    ctx->pc = 0x1746D4u;
    // 0x1746d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1746d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1746d8: 0xae030384  sw          $v1, 0x384($s0)
    ctx->pc = 0x1746d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 3));
label_1746dc:
    // 0x1746dc: 0x8e060374  lw          $a2, 0x374($s0)
    ctx->pc = 0x1746dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x1746e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1746e0u;
    SET_GPR_S32(ctx, 3, (int32_t)dc2_get_motion_speed_multiplier_bits(rdram));
    // 0x1746e4: 0xc6000390  lwc1        $f0, 0x390($s0)
    ctx->pc = 0x1746e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1746e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1746e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1746ec: 0xc6030388  lwc1        $f3, 0x388($s0)
    ctx->pc = 0x1746ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1746f0: 0xc4c20024  lwc1        $f2, 0x24($a2)
    ctx->pc = 0x1746f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1746f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1746f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1746f8: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x1746f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1746fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1746fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174700: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x174700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174704: 0x0  nop
    ctx->pc = 0x174704u;
    // NOP
    // 0x174708: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x174708u;
    {
        const bool branch_taken_0x174708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x174708) {
            ctx->pc = 0x17472Cu;
            goto label_17472c;
        }
    }
    ctx->pc = 0x174710u;
    // 0x174710: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x174710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174714: 0x0  nop
    ctx->pc = 0x174714u;
    // NOP
    // 0x174718: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x174718u;
    {
        const bool branch_taken_0x174718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x174718) {
            ctx->pc = 0x17472Cu;
            goto label_17472c;
        }
    }
    ctx->pc = 0x174720u;
    // 0x174720: 0xe6010388  swc1        $f1, 0x388($s0)
    ctx->pc = 0x174720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x174724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174728: 0xae030384  sw          $v1, 0x384($s0)
    ctx->pc = 0x174728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 3));
label_17472c:
    // 0x17472c: 0xc6000390  lwc1        $f0, 0x390($s0)
    ctx->pc = 0x17472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174730: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x174730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x174734: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x174734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174738: 0x8e060374  lw          $a2, 0x374($s0)
    ctx->pc = 0x174738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x17473c: 0xc6020388  lwc1        $f2, 0x388($s0)
    ctx->pc = 0x17473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174740: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x174740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x174744: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x174744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174748: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x174748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x17474c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17474cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174750: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x174750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174754: 0x0  nop
    ctx->pc = 0x174754u;
    // NOP
    // 0x174758: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x174758u;
    {
        const bool branch_taken_0x174758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x174758) {
            ctx->pc = 0x1747A4u;
            goto label_1747a4;
        }
    }
    ctx->pc = 0x174760u;
    // 0x174760: 0x8e03037c  lw          $v1, 0x37C($s0)
    ctx->pc = 0x174760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x174764: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x174764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x174768: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x174768u;
    {
        const bool branch_taken_0x174768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174768) {
            ctx->pc = 0x174784u;
            goto label_174784;
        }
    }
    ctx->pc = 0x174770u;
    // 0x174770: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x174770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x174774: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x174774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x174778: 0xae030384  sw          $v1, 0x384($s0)
    ctx->pc = 0x174778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 3));
    // 0x17477c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17477Cu;
    {
        const bool branch_taken_0x17477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17477Cu;
            // 0x174780: 0xae000390  sw          $zero, 0x390($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17477c) {
            ctx->pc = 0x1747A4u;
            goto label_1747a4;
        }
    }
    ctx->pc = 0x174784u;
label_174784:
    // 0x174784: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x174784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174788: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x174788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17478c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17478cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174790: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x174790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x174794: 0xae020384  sw          $v0, 0x384($s0)
    ctx->pc = 0x174794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 2));
    // 0x174798: 0x8e050374  lw          $a1, 0x374($s0)
    ctx->pc = 0x174798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x17479c: 0xc05de8c  jal         func_177A30
    ctx->pc = 0x17479Cu;
    SET_GPR_U32(ctx, 31, 0x1747A4u);
    ctx->pc = 0x1747A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17479Cu;
            // 0x1747a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177A30u;
    if (runtime->hasFunction(0x177A30u)) {
        auto targetFn = runtime->lookupFunction(0x177A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747A4u; }
        if (ctx->pc != 0x1747A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExecEntryEffect__11CCharacter2FP15CHRINFO_KEY_SET_0x177a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747A4u; }
        if (ctx->pc != 0x1747A4u) { return; }
    }
    ctx->pc = 0x1747A4u;
label_1747a4:
    // 0x1747a4: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1747a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
    // 0x1747a8: 0x8e070374  lw          $a3, 0x374($s0)
    ctx->pc = 0x1747a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x1747ac: 0x1467001c  bne         $v1, $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1747ACu;
    {
        const bool branch_taken_0x1747ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1747ac) {
            ctx->pc = 0x174820u;
            goto label_174820;
        }
    }
    ctx->pc = 0x1747B4u;
    // 0x1747b4: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x1747b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1747b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1747b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747bc: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x1747bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1747c0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1747c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1747c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1747c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1747c8: 0x0  nop
    ctx->pc = 0x1747c8u;
    // NOP
    // 0x1747cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1747ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1747d0: 0xe600038c  swc1        $f0, 0x38C($s0)
    ctx->pc = 0x1747d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x1747d4: 0x8e020374  lw          $v0, 0x374($s0)
    ctx->pc = 0x1747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x1747d8: 0xc6010388  lwc1        $f1, 0x388($s0)
    ctx->pc = 0x1747d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1747dc: 0xc600038c  lwc1        $f0, 0x38C($s0)
    ctx->pc = 0x1747dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1747e0: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1747e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1747e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1747e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1747e8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1747e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1747ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1747ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1747f0: 0xe600038c  swc1        $f0, 0x38C($s0)
    ctx->pc = 0x1747f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x1747f4: 0x8e030380  lw          $v1, 0x380($s0)
    ctx->pc = 0x1747f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x1747f8: 0xc60c0388  lwc1        $f12, 0x388($s0)
    ctx->pc = 0x1747f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1747fc: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1747fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x174800: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x174800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17480c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x174810: 0xc0534ac  jal         func_14D2B0
    ctx->pc = 0x174810u;
    SET_GPR_U32(ctx, 31, 0x174818u);
    ctx->pc = 0x174814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174810u;
            // 0x174814: 0x244503c0  addiu       $a1, $v0, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D2B0u;
    if (runtime->hasFunction(0x14D2B0u)) {
        auto targetFn = runtime->lookupFunction(0x14D2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174818u; }
        if (ctx->pc != 0x174818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotionTime__FP8mgCFrameP14tagMOTION_TYPEfP9mgCCamera_0x14d2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174818u; }
        if (ctx->pc != 0x174818u) { return; }
    }
    ctx->pc = 0x174818u;
label_174818:
    // 0x174818: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x174818u;
    {
        const bool branch_taken_0x174818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174818u;
            // 0x17481c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174818) {
            ctx->pc = 0x174904u;
            goto label_174904;
        }
    }
    ctx->pc = 0x174820u;
label_174820:
    // 0x174820: 0xc6000508  lwc1        $f0, 0x508($s0)
    ctx->pc = 0x174820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174824: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x174824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x174828: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x174828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17482c: 0x0  nop
    ctx->pc = 0x17482cu;
    // NOP
    // 0x174830: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x174830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174834: 0x0  nop
    ctx->pc = 0x174834u;
    // NOP
    // 0x174838: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x174838u;
    {
        const bool branch_taken_0x174838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x174838) {
            ctx->pc = 0x174860u;
            goto label_174860;
        }
    }
    ctx->pc = 0x174840u;
    // 0x174840: 0xae070394  sw          $a3, 0x394($s0)
    ctx->pc = 0x174840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 7));
    // 0x174844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174848: 0x8e040374  lw          $a0, 0x374($s0)
    ctx->pc = 0x174848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x17484c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x17484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174850: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174854: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x174854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x174858: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x174858u;
    {
        const bool branch_taken_0x174858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17485Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174858u;
            // 0x17485c: 0xae030384  sw          $v1, 0x384($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174858) {
            ctx->pc = 0x174900u;
            goto label_174900;
        }
    }
    ctx->pc = 0x174860u;
label_174860:
    // 0x174860: 0xae00038c  sw          $zero, 0x38C($s0)
    ctx->pc = 0x174860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 908), GPR_U32(ctx, 0));
    // 0x174864: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174868: 0xae020384  sw          $v0, 0x384($s0)
    ctx->pc = 0x174868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 2));
    // 0x17486c: 0xc6010388  lwc1        $f1, 0x388($s0)
    ctx->pc = 0x17486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174870: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x174870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x174874: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x174874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x174878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17487c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x17487Cu;
    SET_GPR_U32(ctx, 31, 0x174884u);
    ctx->pc = 0x174880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17487Cu;
            // 0x174880: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174884u; }
        if (ctx->pc != 0x174884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174884u; }
        if (ctx->pc != 0x174884u) { return; }
    }
    ctx->pc = 0x174884u;
label_174884:
    // 0x174884: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x174884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174888: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x174888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x17488c: 0x8e020374  lw          $v0, 0x374($s0)
    ctx->pc = 0x17488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x174890: 0xc60c0508  lwc1        $f12, 0x508($s0)
    ctx->pc = 0x174890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x174894: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x174894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x174898: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17489c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17489cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1748a0: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x1748a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1748a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1748a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1748a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1748a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1748ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1748acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1748b0: 0xc0534c4  jal         func_14D310
    ctx->pc = 0x1748B0u;
    SET_GPR_U32(ctx, 31, 0x1748B8u);
    ctx->pc = 0x1748B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748B0u;
            // 0x1748b4: 0x244503c0  addiu       $a1, $v0, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D310u;
    if (runtime->hasFunction(0x14D310u)) {
        auto targetFn = runtime->lookupFunction(0x14D310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748B8u; }
        if (ctx->pc != 0x1748B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeMotion__FP8mgCFrameP14tagMOTION_TYPEUiUifP9mgCCamera_0x14d310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748B8u; }
        if (ctx->pc != 0x1748B8u) { return; }
    }
    ctx->pc = 0x1748B8u;
label_1748b8:
    // 0x1748b8: 0xc602050c  lwc1        $f2, 0x50C($s0)
    ctx->pc = 0x1748b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1748bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1748bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1748c0: 0xc6010508  lwc1        $f1, 0x508($s0)
    ctx->pc = 0x1748c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1748c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1748c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1748c8: 0x0  nop
    ctx->pc = 0x1748c8u;
    // NOP
    // 0x1748cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1748ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1748d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1748d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1748d4: 0x0  nop
    ctx->pc = 0x1748d4u;
    // NOP
    // 0x1748d8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1748D8u;
    {
        const bool branch_taken_0x1748d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1748DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1748D8u;
            // 0x1748dc: 0xe6010508  swc1        $f1, 0x508($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748d8) {
            ctx->pc = 0x174900u;
            goto label_174900;
        }
    }
    ctx->pc = 0x1748E0u;
    // 0x1748e0: 0x8e040374  lw          $a0, 0x374($s0)
    ctx->pc = 0x1748e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x1748e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1748e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1748e8: 0xae040394  sw          $a0, 0x394($s0)
    ctx->pc = 0x1748e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 4));
    // 0x1748ec: 0x8e040374  lw          $a0, 0x374($s0)
    ctx->pc = 0x1748ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x1748f0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1748f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1748f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1748f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1748f8: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x1748f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x1748fc: 0xae030384  sw          $v1, 0x384($s0)
    ctx->pc = 0x1748fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 3));
label_174900:
    // 0x174900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174904:
    // 0x174904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174908: 0x3e00008  jr          $ra
    ctx->pc = 0x174908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17490Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174908u;
            // 0x17490c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174910u;
}
