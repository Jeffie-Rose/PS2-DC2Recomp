#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcTex__15CMenuChrCngMenuFv
// Address: 0x2b34d0 - 0x2b3e88
void CalcTex__15CMenuChrCngMenuFv_0x2b34d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcTex__15CMenuChrCngMenuFv_0x2b34d0");
#endif

    switch (ctx->pc) {
        case 0x2b3518u: goto label_2b3518;
        case 0x2b3530u: goto label_2b3530;
        case 0x2b353cu: goto label_2b353c;
        case 0x2b3544u: goto label_2b3544;
        case 0x2b35a4u: goto label_2b35a4;
        case 0x2b35b8u: goto label_2b35b8;
        case 0x2b35c4u: goto label_2b35c4;
        case 0x2b35d8u: goto label_2b35d8;
        case 0x2b35e4u: goto label_2b35e4;
        case 0x2b3658u: goto label_2b3658;
        case 0x2b374cu: goto label_2b374c;
        case 0x2b3758u: goto label_2b3758;
        case 0x2b37e8u: goto label_2b37e8;
        case 0x2b3824u: goto label_2b3824;
        case 0x2b3850u: goto label_2b3850;
        case 0x2b3968u: goto label_2b3968;
        case 0x2b3974u: goto label_2b3974;
        case 0x2b3a08u: goto label_2b3a08;
        case 0x2b3a28u: goto label_2b3a28;
        case 0x2b3a30u: goto label_2b3a30;
        case 0x2b3a60u: goto label_2b3a60;
        case 0x2b3a74u: goto label_2b3a74;
        case 0x2b3a90u: goto label_2b3a90;
        case 0x2b3a98u: goto label_2b3a98;
        case 0x2b3b80u: goto label_2b3b80;
        case 0x2b3bf0u: goto label_2b3bf0;
        case 0x2b3c08u: goto label_2b3c08;
        case 0x2b3c1cu: goto label_2b3c1c;
        case 0x2b3c28u: goto label_2b3c28;
        case 0x2b3c50u: goto label_2b3c50;
        case 0x2b3c74u: goto label_2b3c74;
        case 0x2b3cd8u: goto label_2b3cd8;
        case 0x2b3d04u: goto label_2b3d04;
        case 0x2b3d1cu: goto label_2b3d1c;
        case 0x2b3d90u: goto label_2b3d90;
        case 0x2b3db8u: goto label_2b3db8;
        case 0x2b3dd0u: goto label_2b3dd0;
        case 0x2b3dd8u: goto label_2b3dd8;
        default: break;
    }

    ctx->pc = 0x2b34d0u;

    // 0x2b34d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2b34d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2b34d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b34d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b34d8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2b34d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2b34dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2b34dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2b34e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b34e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2b34e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b34e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b34e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b34e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b34ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b34ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b34f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b34f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b34f4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2b34f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2b34f8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2b34f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b34fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2b34fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b3500: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b3500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b3504: 0x8c830140  lw          $v1, 0x140($a0)
    ctx->pc = 0x2b3504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x2b3508: 0x10600251  beqz        $v1, . + 4 + (0x251 << 2)
    ctx->pc = 0x2B3508u;
    {
        const bool branch_taken_0x2b3508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B350Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3508u;
            // 0x2b350c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3508) {
            ctx->pc = 0x2B3E50u;
            goto label_2b3e50;
        }
    }
    ctx->pc = 0x2B3510u;
    // 0x2b3510: 0xc088ffc  jal         func_223FF0
    ctx->pc = 0x2B3510u;
    SET_GPR_U32(ctx, 31, 0x2B3518u);
    ctx->pc = 0x2B3514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3510u;
            // 0x2b3514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223FF0u;
    if (runtime->hasFunction(0x223FF0u)) {
        auto targetFn = runtime->lookupFunction(0x223FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3518u; }
        if (ctx->pc != 0x2B3518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameLeftTopPos__Fi_0x223ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3518u; }
        if (ctx->pc != 0x2B3518u) { return; }
    }
    ctx->pc = 0x2B3518u;
label_2b3518:
    // 0x2b3518: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b3518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b351c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b351cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3520: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x2b3520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x2b3524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3528: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B3528u;
    SET_GPR_U32(ctx, 31, 0x2B3530u);
    ctx->pc = 0x2B352Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3528u;
            // 0x2b352c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3530u; }
        if (ctx->pc != 0x2B3530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3530u; }
        if (ctx->pc != 0x2B3530u) { return; }
    }
    ctx->pc = 0x2B3530u;
label_2b3530:
    // 0x2b3530: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2b3530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b3534: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B3534u;
    SET_GPR_U32(ctx, 31, 0x2B353Cu);
    ctx->pc = 0x2B3538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3534u;
            // 0x2b3538: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B353Cu; }
        if (ctx->pc != 0x2B353Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B353Cu; }
        if (ctx->pc != 0x2B353Cu) { return; }
    }
    ctx->pc = 0x2B353Cu;
label_2b353c:
    // 0x2b353c: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x2B353Cu;
    SET_GPR_U32(ctx, 31, 0x2B3544u);
    ctx->pc = 0x2B3540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B353Cu;
            // 0x2b3540: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3544u; }
        if (ctx->pc != 0x2B3544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3544u; }
        if (ctx->pc != 0x2B3544u) { return; }
    }
    ctx->pc = 0x2B3544u;
label_2b3544:
    // 0x2b3544: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B3544u;
    {
        const bool branch_taken_0x2b3544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3544) {
            ctx->pc = 0x2B3570u;
            goto label_2b3570;
        }
    }
    ctx->pc = 0x2B354Cu;
    // 0x2b354c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2b354cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3550: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2b3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3554: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2b3554u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3558: 0x0  nop
    ctx->pc = 0x2b3558u;
    // NOP
    // 0x2b355c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b355cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b3560: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3564: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2b3564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2b3568: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3568u;
    {
        const bool branch_taken_0x2b3568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3568u;
            // 0x2b356c: 0xe4400010  swc1        $f0, 0x10($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3568) {
            ctx->pc = 0x2B3580u;
            goto label_2b3580;
        }
    }
    ctx->pc = 0x2B3570u;
label_2b3570:
    // 0x2b3570: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2b3570u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3574: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2b3574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b357c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2b357cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2b3580:
    // 0x2b3580: 0x86820202  lh          $v0, 0x202($s4)
    ctx->pc = 0x2b3580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 514)));
    // 0x2b3584: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2b3584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2b3588: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3588u;
    {
        const bool branch_taken_0x2b3588 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3588u;
            // 0x2b358c: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3588) {
            ctx->pc = 0x2B3594u;
            goto label_2b3594;
        }
    }
    ctx->pc = 0x2B3590u;
    // 0x2b3590: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x2b3590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b3594:
    // 0x2b3594: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x2b3594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2b3598: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x2B3598u;
    {
        const bool branch_taken_0x2b3598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B359Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3598u;
            // 0x2b359c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3598) {
            ctx->pc = 0x2B36F0u;
            goto label_2b36f0;
        }
    }
    ctx->pc = 0x2B35A0u;
    // 0x2b35a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b35a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b35a4:
    // 0x2b35a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b35a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b35a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2b35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b35ac: 0x24a5ecc8  addiu       $a1, $a1, -0x1338
    ctx->pc = 0x2b35acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962376));
    // 0x2b35b0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B35B0u;
    SET_GPR_U32(ctx, 31, 0x2B35B8u);
    ctx->pc = 0x2B35B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35B0u;
            // 0x2b35b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35B8u; }
        if (ctx->pc != 0x2B35B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35B8u; }
        if (ctx->pc != 0x2B35B8u) { return; }
    }
    ctx->pc = 0x2B35B8u;
label_2b35b8:
    // 0x2b35b8: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x2b35b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b35bc: 0xc089664  jal         func_225990
    ctx->pc = 0x2B35BCu;
    SET_GPR_U32(ctx, 31, 0x2B35C4u);
    ctx->pc = 0x2B35C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35BCu;
            // 0x2b35c0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35C4u; }
        if (ctx->pc != 0x2B35C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35C4u; }
        if (ctx->pc != 0x2B35C4u) { return; }
    }
    ctx->pc = 0x2B35C4u;
label_2b35c4:
    // 0x2b35c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b35c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b35c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b35c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2b35ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b35d0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B35D0u;
    SET_GPR_U32(ctx, 31, 0x2B35D8u);
    ctx->pc = 0x2B35D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35D0u;
            // 0x2b35d4: 0x24a5ecd8  addiu       $a1, $a1, -0x1328 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35D8u; }
        if (ctx->pc != 0x2B35D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35D8u; }
        if (ctx->pc != 0x2B35D8u) { return; }
    }
    ctx->pc = 0x2B35D8u;
label_2b35d8:
    // 0x2b35d8: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x2b35d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b35dc: 0xc089664  jal         func_225990
    ctx->pc = 0x2B35DCu;
    SET_GPR_U32(ctx, 31, 0x2B35E4u);
    ctx->pc = 0x2B35E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35DCu;
            // 0x2b35e0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35E4u; }
        if (ctx->pc != 0x2B35E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35E4u; }
        if (ctx->pc != 0x2B35E4u) { return; }
    }
    ctx->pc = 0x2B35E4u;
label_2b35e4:
    // 0x2b35e4: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x2b35e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b35e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b35e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35ec: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x2b35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x2b35f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b35f4: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x2b35f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x2b35f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b35f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b35fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B35FCu;
    {
        const bool branch_taken_0x2b35fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B35FCu;
            // 0x2b3600: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35fc) {
            ctx->pc = 0x2B361Cu;
            goto label_2b361c;
        }
    }
    ctx->pc = 0x2B3604u;
    // 0x2b3604: 0x16420033  bne         $s2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2B3604u;
    {
        const bool branch_taken_0x2b3604 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3604) {
            ctx->pc = 0x2B36D4u;
            goto label_2b36d4;
        }
    }
    ctx->pc = 0x2B360Cu;
    // 0x2b360c: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x2b360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x2b3610: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2b3610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3614: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x2B3614u;
    {
        const bool branch_taken_0x2b3614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3614) {
            ctx->pc = 0x2B36D4u;
            goto label_2b36d4;
        }
    }
    ctx->pc = 0x2B361Cu;
label_2b361c:
    // 0x2b361c: 0x0  nop
    ctx->pc = 0x2b361cu;
    // NOP
    // 0x2b3620: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x2b3620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2b3624: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x2b3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x2b3628: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b3628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b362c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b362cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3630: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2b3630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2b3634: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x2b3634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x2b3638: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b3638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b363c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b363cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3640: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2b3640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b3644: 0x8e820110  lw          $v0, 0x110($s4)
    ctx->pc = 0x2b3644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2b3648: 0x16420013  bne         $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B3648u;
    {
        const bool branch_taken_0x2b3648 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3648) {
            ctx->pc = 0x2B3698u;
            goto label_2b3698;
        }
    }
    ctx->pc = 0x2B3650u;
    // 0x2b3650: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2B3650u;
    SET_GPR_U32(ctx, 31, 0x2B3658u);
    ctx->pc = 0x2B3654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3650u;
            // 0x2b3654: 0xc68c0240  lwc1        $f12, 0x240($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3658u; }
        if (ctx->pc != 0x2B3658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3658u; }
        if (ctx->pc != 0x2B3658u) { return; }
    }
    ctx->pc = 0x2B3658u;
label_2b3658:
    // 0x2b3658: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b3658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b365c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b3660: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2b3660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3664: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b3664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b3668: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2b3668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2b366c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b366cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b3670: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2b3670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b3674: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2b3674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3678: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b3678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b367c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3680: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2b3680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b3684: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2b3684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2b3688: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2b3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b368c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2b368cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b3690: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2b3690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2b3694: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x2b3694u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_2b3698:
    // 0x2b3698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b369c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x2b369cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b36a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b36a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b36a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b36a8: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2b36a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b36ac: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2b36acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b36b0: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2b36b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b36b4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2b36b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b36b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b36b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b36bc: 0x0  nop
    ctx->pc = 0x2b36bcu;
    // NOP
    // 0x2b36c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2B36C0u;
    {
        const bool branch_taken_0x2b36c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b36c0) {
            ctx->pc = 0x2B36DCu;
            goto label_2b36dc;
        }
    }
    ctx->pc = 0x2B36C8u;
    // 0x2b36c8: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2b36c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b36cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B36CCu;
    {
        const bool branch_taken_0x2b36cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B36CCu;
            // 0x2b36d0: 0xa2200005  sb          $zero, 0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36cc) {
            ctx->pc = 0x2B36DCu;
            goto label_2b36dc;
        }
    }
    ctx->pc = 0x2B36D4u;
label_2b36d4:
    // 0x2b36d4: 0x0  nop
    ctx->pc = 0x2b36d4u;
    // NOP
    // 0x2b36d8: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2b36d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2b36dc:
    // 0x2b36dc: 0x0  nop
    ctx->pc = 0x2b36dcu;
    // NOP
    // 0x2b36e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b36e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b36e4: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x2b36e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2b36e8: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2B36E8u;
    {
        const bool branch_taken_0x2b36e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B36ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B36E8u;
            // 0x2b36ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36e8) {
            ctx->pc = 0x2B35A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b35a4;
        }
    }
    ctx->pc = 0x2B36F0u;
label_2b36f0:
    // 0x2b36f0: 0x3c033d6e  lui         $v1, 0x3D6E
    ctx->pc = 0x2b36f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15726 << 16));
    // 0x2b36f4: 0xc6810240  lwc1        $f1, 0x240($s4)
    ctx->pc = 0x2b36f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b36f8: 0x34634bae  ori         $v1, $v1, 0x4BAE
    ctx->pc = 0x2b36f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19374);
    // 0x2b36fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b36fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3700: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b3700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b3704: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b3704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b3708: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b3708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b370c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b370cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b3710: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2b3710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3714: 0x0  nop
    ctx->pc = 0x2b3714u;
    // NOP
    // 0x2b3718: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3718u;
    {
        const bool branch_taken_0x2b3718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3718u;
            // 0x2b371c: 0xe6810240  swc1        $f1, 0x240($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3718) {
            ctx->pc = 0x2B3738u;
            goto label_2b3738;
        }
    }
    ctx->pc = 0x2B3720u;
    // 0x2b3720: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2b3720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2b3724: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b3724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b3728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b372c: 0x0  nop
    ctx->pc = 0x2b372cu;
    // NOP
    // 0x2b3730: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b3730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b3734: 0xe6800240  swc1        $f0, 0x240($s4)
    ctx->pc = 0x2b3734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 576), bits); }
label_2b3738:
    // 0x2b3738: 0x8e860114  lw          $a2, 0x114($s4)
    ctx->pc = 0x2b3738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2b373c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b373cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b3740: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2b3740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b3744: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B3744u;
    SET_GPR_U32(ctx, 31, 0x2B374Cu);
    ctx->pc = 0x2B3748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3744u;
            // 0x2b3748: 0x24a5eb30  addiu       $a1, $a1, -0x14D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B374Cu; }
        if (ctx->pc != 0x2B374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B374Cu; }
        if (ctx->pc != 0x2B374Cu) { return; }
    }
    ctx->pc = 0x2B374Cu;
label_2b374c:
    // 0x2b374c: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x2b374cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3750: 0xc089664  jal         func_225990
    ctx->pc = 0x2B3750u;
    SET_GPR_U32(ctx, 31, 0x2B3758u);
    ctx->pc = 0x2B3754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3750u;
            // 0x2b3754: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3758u; }
        if (ctx->pc != 0x2B3758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3758u; }
        if (ctx->pc != 0x2B3758u) { return; }
    }
    ctx->pc = 0x2B3758u;
label_2b3758:
    // 0x2b3758: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B3758u;
    {
        const bool branch_taken_0x2b3758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3758) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B3760u;
    // 0x2b3760: 0x86830254  lh          $v1, 0x254($s4)
    ctx->pc = 0x2b3760u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 596)));
    // 0x2b3764: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3764u;
    {
        const bool branch_taken_0x2b3764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3764) {
            ctx->pc = 0x2B3788u;
            goto label_2b3788;
        }
    }
    ctx->pc = 0x2B376Cu;
    // 0x2b376c: 0x86830256  lh          $v1, 0x256($s4)
    ctx->pc = 0x2b376cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 598)));
    // 0x2b3770: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3770u;
    {
        const bool branch_taken_0x2b3770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3770) {
            ctx->pc = 0x2B3788u;
            goto label_2b3788;
        }
    }
    ctx->pc = 0x2B3778u;
    // 0x2b3778: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x2b3778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b377c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3780: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B3780u;
    {
        const bool branch_taken_0x2b3780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3780) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B3788u;
label_2b3788:
    // 0x2b3788: 0x8e830140  lw          $v1, 0x140($s4)
    ctx->pc = 0x2b3788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b378c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2b378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3790: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2b3790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3794: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b3794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b3798: 0xe6800258  swc1        $f0, 0x258($s4)
    ctx->pc = 0x2b3798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 600), bits); }
    // 0x2b379c: 0x8e830140  lw          $v1, 0x140($s4)
    ctx->pc = 0x2b379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b37a0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2b37a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b37a4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2b37a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b37a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b37a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b37ac: 0xe680025c  swc1        $f0, 0x25C($s4)
    ctx->pc = 0x2b37acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 604), bits); }
    // 0x2b37b0: 0x86830256  lh          $v1, 0x256($s4)
    ctx->pc = 0x2b37b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 598)));
    // 0x2b37b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B37B4u;
    {
        const bool branch_taken_0x2b37b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b37b4) {
            ctx->pc = 0x2B37C4u;
            goto label_2b37c4;
        }
    }
    ctx->pc = 0x2B37BCu;
    // 0x2b37bc: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2b37bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b37c0: 0xe6800264  swc1        $f0, 0x264($s4)
    ctx->pc = 0x2b37c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 612), bits); }
label_2b37c4:
    // 0x2b37c4: 0x86830256  lh          $v1, 0x256($s4)
    ctx->pc = 0x2b37c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 598)));
    // 0x2b37c8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B37C8u;
    {
        const bool branch_taken_0x2b37c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B37CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B37C8u;
            // 0x2b37cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37c8) {
            ctx->pc = 0x2B37F0u;
            goto label_2b37f0;
        }
    }
    ctx->pc = 0x2B37D0u;
    // 0x2b37d0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b37d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b37d4: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2b37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2b37d8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2b37d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b37dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b37dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b37e0: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2B37E0u;
    SET_GPR_U32(ctx, 31, 0x2B37E8u);
    ctx->pc = 0x2B37E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B37E0u;
            // 0x2b37e4: 0x2684026c  addiu       $a0, $s4, 0x26C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 620));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B37E8u; }
        if (ctx->pc != 0x2B37E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B37E8u; }
        if (ctx->pc != 0x2B37E8u) { return; }
    }
    ctx->pc = 0x2B37E8u;
label_2b37e8:
    // 0x2b37e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B37E8u;
    {
        const bool branch_taken_0x2b37e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B37E8u;
            // 0x2b37ec: 0x8e830270  lw          $v1, 0x270($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37e8) {
            ctx->pc = 0x2B3834u;
            goto label_2b3834;
        }
    }
    ctx->pc = 0x2B37F0u;
label_2b37f0:
    // 0x2b37f0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B37F0u;
    {
        const bool branch_taken_0x2b37f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b37f0) {
            ctx->pc = 0x2B3830u;
            goto label_2b3830;
        }
    }
    ctx->pc = 0x2B37F8u;
    // 0x2b37f8: 0xc6810268  lwc1        $f1, 0x268($s4)
    ctx->pc = 0x2b37f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b37fc: 0x3c023d8b  lui         $v0, 0x3D8B
    ctx->pc = 0x2b37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15755 << 16));
    // 0x2b3800: 0x3443de82  ori         $v1, $v0, 0xDE82
    ctx->pc = 0x2b3800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56962);
    // 0x2b3804: 0x2684026c  addiu       $a0, $s4, 0x26C
    ctx->pc = 0x2b3804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 620));
    // 0x2b3808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b380c: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x2b380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
    // 0x2b3810: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b3810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b3814: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2b3814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b3818: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b3818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b381c: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2B381Cu;
    SET_GPR_U32(ctx, 31, 0x2B3824u);
    ctx->pc = 0x2B3820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B381Cu;
            // 0x2b3820: 0xe6800268  swc1        $f0, 0x268($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 616), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3824u; }
        if (ctx->pc != 0x2B3824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3824u; }
        if (ctx->pc != 0x2B3824u) { return; }
    }
    ctx->pc = 0x2B3824u;
label_2b3824:
    // 0x2b3824: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3824u;
    {
        const bool branch_taken_0x2b3824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3824) {
            ctx->pc = 0x2B3830u;
            goto label_2b3830;
        }
    }
    ctx->pc = 0x2B382Cu;
    // 0x2b382c: 0xa6800256  sh          $zero, 0x256($s4)
    ctx->pc = 0x2b382cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 598), (uint16_t)GPR_U32(ctx, 0));
label_2b3830:
    // 0x2b3830: 0x8e830270  lw          $v1, 0x270($s4)
    ctx->pc = 0x2b3830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
label_2b3834:
    // 0x2b3834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3838: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3838u;
    {
        const bool branch_taken_0x2b3838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B383Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3838u;
            // 0x2b383c: 0x3c02c1e0  lui         $v0, 0xC1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3838) {
            ctx->pc = 0x2B3850u;
            goto label_2b3850;
        }
    }
    ctx->pc = 0x2B3840u;
    // 0x2b3840: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b3840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b3844: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2b3844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b3848: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2B3848u;
    SET_GPR_U32(ctx, 31, 0x2B3850u);
    ctx->pc = 0x2B384Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3848u;
            // 0x2b384c: 0x2684026c  addiu       $a0, $s4, 0x26C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 620));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3850u; }
        if (ctx->pc != 0x2B3850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3850u; }
        if (ctx->pc != 0x2B3850u) { return; }
    }
    ctx->pc = 0x2B3850u;
label_2b3850:
    // 0x2b3850: 0xc6810274  lwc1        $f1, 0x274($s4)
    ctx->pc = 0x2b3850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3854: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x2b3854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
    // 0x2b3858: 0x3443d97c  ori         $v1, $v0, 0xD97C
    ctx->pc = 0x2b3858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2b385c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b385cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3860: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2b3860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2b3864: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b3864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b3868: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b3868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b386c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b386cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b3870: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2b3870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3874: 0x0  nop
    ctx->pc = 0x2b3874u;
    // NOP
    // 0x2b3878: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3878u;
    {
        const bool branch_taken_0x2b3878 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B387Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3878u;
            // 0x2b387c: 0xe6800274  swc1        $f0, 0x274($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 628), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3878) {
            ctx->pc = 0x2B3888u;
            goto label_2b3888;
        }
    }
    ctx->pc = 0x2B3880u;
    // 0x2b3880: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b3880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b3884: 0xe6800274  swc1        $f0, 0x274($s4)
    ctx->pc = 0x2b3884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 628), bits); }
label_2b3888:
    // 0x2b3888: 0xc6820278  lwc1        $f2, 0x278($s4)
    ctx->pc = 0x2b3888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b388c: 0x3c023cd6  lui         $v0, 0x3CD6
    ctx->pc = 0x2b388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15574 << 16));
    // 0x2b3890: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x2b3890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2b3894: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3898: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2b3898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2b389c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b38a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b38a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b38a4: 0x0  nop
    ctx->pc = 0x2b38a4u;
    // NOP
    // 0x2b38a8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2b38a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b38ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b38acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b38b0: 0x0  nop
    ctx->pc = 0x2b38b0u;
    // NOP
    // 0x2b38b4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B38B4u;
    {
        const bool branch_taken_0x2b38b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B38B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B38B4u;
            // 0x2b38b8: 0xe6810278  swc1        $f1, 0x278($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38b4) {
            ctx->pc = 0x2B38C4u;
            goto label_2b38c4;
        }
    }
    ctx->pc = 0x2B38BCu;
    // 0x2b38bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b38bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b38c0: 0xe6800278  swc1        $f0, 0x278($s4)
    ctx->pc = 0x2b38c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 632), bits); }
label_2b38c4:
    // 0x2b38c4: 0xc6820268  lwc1        $f2, 0x268($s4)
    ctx->pc = 0x2b38c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b38c8: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x2b38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x2b38cc: 0x3443adfd  ori         $v1, $v0, 0xADFD
    ctx->pc = 0x2b38ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x2b38d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b38d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b38d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b38d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b38d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b38dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b38dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b38e0: 0x0  nop
    ctx->pc = 0x2b38e0u;
    // NOP
    // 0x2b38e4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2b38e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b38e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b38e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b38ec: 0x0  nop
    ctx->pc = 0x2b38ecu;
    // NOP
    // 0x2b38f0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B38F0u;
    {
        const bool branch_taken_0x2b38f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B38F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B38F0u;
            // 0x2b38f4: 0xe6810268  swc1        $f1, 0x268($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38f0) {
            ctx->pc = 0x2B3910u;
            goto label_2b3910;
        }
    }
    ctx->pc = 0x2B38F8u;
    // 0x2b38f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2b38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2b38fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b38fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b3900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3904: 0x0  nop
    ctx->pc = 0x2b3904u;
    // NOP
    // 0x2b3908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b3908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b390c: 0xe6800268  swc1        $f0, 0x268($s4)
    ctx->pc = 0x2b390cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 616), bits); }
label_2b3910:
    // 0x2b3910: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2b3910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b3914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3918: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3918u;
    {
        const bool branch_taken_0x2b3918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B391Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3918u;
            // 0x2b391c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3918) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B3920u;
    // 0x2b3920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3924: 0xa6820256  sh          $v0, 0x256($s4)
    ctx->pc = 0x2b3924u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 598), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3928: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2b3928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2b392c:
    // 0x2b392c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b392cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3930: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b3930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b3934: 0xc6840264  lwc1        $f4, 0x264($s4)
    ctx->pc = 0x2b3934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b3938: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b3938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b393c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b393cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b3940: 0xc6810268  lwc1        $f1, 0x268($s4)
    ctx->pc = 0x2b3940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3944: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x2b3944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
    // 0x2b3948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b394c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b394cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b3950: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x2b3950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
    // 0x2b3954: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2b3954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2b3958: 0x46040542  mul.s       $f21, $f0, $f4
    ctx->pc = 0x2b3958u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b395c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b395cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3960: 0x46021d01  sub.s       $f20, $f3, $f2
    ctx->pc = 0x2b3960u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2b3964: 0x46000d81  sub.s       $f22, $f1, $f0
    ctx->pc = 0x2b3964u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b3968:
    // 0x2b3968: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b3968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b396c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b396cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3970: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b3970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3974:
    // 0x2b3974: 0x0  nop
    ctx->pc = 0x2b3974u;
    // NOP
    // 0x2b3978: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x2b3978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2b397c: 0xc4420284  lwc1        $f2, 0x284($v0)
    ctx->pc = 0x2b397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3980: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3984: 0x0  nop
    ctx->pc = 0x2b3984u;
    // NOP
    // 0x2b3988: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2b3988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b398c: 0x0  nop
    ctx->pc = 0x2b398cu;
    // NOP
    // 0x2b3990: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2B3990u;
    {
        const bool branch_taken_0x2b3990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3990u;
            // 0x2b3994: 0x24510280  addiu       $s1, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3990) {
            ctx->pc = 0x2B39C8u;
            goto label_2b39c8;
        }
    }
    ctx->pc = 0x2B3998u;
    // 0x2b3998: 0x3c033fd9  lui         $v1, 0x3FD9
    ctx->pc = 0x2b3998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16345 << 16));
    // 0x2b399c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b39a0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b39a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b39a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b39a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b39a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b39a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b39ac: 0x0  nop
    ctx->pc = 0x2b39acu;
    // NOP
    // 0x2b39b0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2b39b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b39b4: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2b39b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2b39b8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b39b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b39bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b39bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b39c0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2B39C0u;
    {
        const bool branch_taken_0x2b39c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B39C0u;
            // 0x2b39c4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39c0) {
            ctx->pc = 0x2B3ACCu;
            goto label_2b3acc;
        }
    }
    ctx->pc = 0x2B39C8u;
label_2b39c8:
    // 0x2b39c8: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2b39c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2b39cc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B39CCu;
    {
        const bool branch_taken_0x2b39cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b39cc) {
            ctx->pc = 0x2B39E4u;
            goto label_2b39e4;
        }
    }
    ctx->pc = 0x2B39D4u;
    // 0x2b39d4: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2b39d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b39d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b39dc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B39DCu;
    {
        const bool branch_taken_0x2b39dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b39dc) {
            ctx->pc = 0x2B39F4u;
            goto label_2b39f4;
        }
    }
    ctx->pc = 0x2B39E4u;
label_2b39e4:
    // 0x2b39e4: 0x0  nop
    ctx->pc = 0x2b39e4u;
    // NOP
    // 0x2b39e8: 0x86820254  lh          $v0, 0x254($s4)
    ctx->pc = 0x2b39e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 596)));
    // 0x2b39ec: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2B39ECu;
    {
        const bool branch_taken_0x2b39ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b39ec) {
            ctx->pc = 0x2B3ACCu;
            goto label_2b3acc;
        }
    }
    ctx->pc = 0x2B39F4u;
label_2b39f4:
    // 0x2b39f4: 0x0  nop
    ctx->pc = 0x2b39f4u;
    // NOP
    // 0x2b39f8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b39fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b39fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b3a00: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2B3A00u;
    SET_GPR_U32(ctx, 31, 0x2B3A08u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A08u; }
        if (ctx->pc != 0x2B3A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A08u; }
        if (ctx->pc != 0x2B3A08u) { return; }
    }
    ctx->pc = 0x2B3A08u;
label_2b3a08:
    // 0x2b3a08: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b3a0c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2b3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2b3a10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3a14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b3a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b3a18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b3a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b3a1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b3a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b3a20: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2B3A20u;
    SET_GPR_U32(ctx, 31, 0x2B3A28u);
    ctx->pc = 0x2B3A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A20u;
            // 0x2b3a24: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A28u; }
        if (ctx->pc != 0x2B3A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A28u; }
        if (ctx->pc != 0x2B3A28u) { return; }
    }
    ctx->pc = 0x2B3A28u;
label_2b3a28:
    // 0x2b3a28: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2B3A28u;
    SET_GPR_U32(ctx, 31, 0x2B3A30u);
    ctx->pc = 0x2B3A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A28u;
            // 0x2b3a2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A30u; }
        if (ctx->pc != 0x2B3A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A30u; }
        if (ctx->pc != 0x2B3A30u) { return; }
    }
    ctx->pc = 0x2B3A30u;
label_2b3a30:
    // 0x2b3a30: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b3a34: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2b3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2b3a38: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b3a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b3a3c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2b3a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2b3a40: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b3a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b3a44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b3a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3a48: 0x0  nop
    ctx->pc = 0x2b3a48u;
    // NOP
    // 0x2b3a4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b3a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b3a50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b3a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b3a54: 0x4600adc2  mul.s       $f23, $f21, $f0
    ctx->pc = 0x2b3a54u;
    ctx->f[23] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b3a58: 0xc047964  jal         func_11E590
    ctx->pc = 0x2B3A58u;
    SET_GPR_U32(ctx, 31, 0x2B3A60u);
    ctx->pc = 0x2B3A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A58u;
            // 0x2b3a5c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A60u; }
        if (ctx->pc != 0x2B3A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A60u; }
        if (ctx->pc != 0x2B3A60u) { return; }
    }
    ctx->pc = 0x2B3A60u;
label_2b3a60:
    // 0x2b3a60: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2b3a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2b3a64: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b3a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b3a68: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b3a68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2b3a6c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2B3A6Cu;
    SET_GPR_U32(ctx, 31, 0x2B3A74u);
    ctx->pc = 0x2B3A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A6Cu;
            // 0x2b3a70: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A74u; }
        if (ctx->pc != 0x2B3A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A74u; }
        if (ctx->pc != 0x2B3A74u) { return; }
    }
    ctx->pc = 0x2B3A74u;
label_2b3a74:
    // 0x2b3a74: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2b3a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2b3a78: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b3a7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b3a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b3a80: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b3a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b3a84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b3a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b3a88: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2B3A88u;
    SET_GPR_U32(ctx, 31, 0x2B3A90u);
    ctx->pc = 0x2B3A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A88u;
            // 0x2b3a8c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A90u; }
        if (ctx->pc != 0x2B3A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A90u; }
        if (ctx->pc != 0x2B3A90u) { return; }
    }
    ctx->pc = 0x2B3A90u;
label_2b3a90:
    // 0x2b3a90: 0xc047964  jal         func_11E590
    ctx->pc = 0x2B3A90u;
    SET_GPR_U32(ctx, 31, 0x2B3A98u);
    ctx->pc = 0x2B3A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A90u;
            // 0x2b3a94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A98u; }
        if (ctx->pc != 0x2B3A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3A98u; }
        if (ctx->pc != 0x2B3A98u) { return; }
    }
    ctx->pc = 0x2B3A98u;
label_2b3a98:
    // 0x2b3a98: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b3a9c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2b3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2b3aa0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b3aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b3aa4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b3aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b3aa8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b3aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b3aac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b3aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2b3ab0: 0xc681026c  lwc1        $f1, 0x26C($s4)
    ctx->pc = 0x2b3ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3ab4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b3ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b3ab8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b3ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b3abc: 0x0  nop
    ctx->pc = 0x2b3abcu;
    // NOP
    // 0x2b3ac0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2b3ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b3ac4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b3ac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3ac8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2b3ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2b3acc:
    // 0x2b3acc: 0x0  nop
    ctx->pc = 0x2b3accu;
    // NOP
    // 0x2b3ad0: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2b3ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b3ad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3ad8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3AD8u;
    {
        const bool branch_taken_0x2b3ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3ad8) {
            ctx->pc = 0x2B3AECu;
            goto label_2b3aec;
        }
    }
    ctx->pc = 0x2B3AE0u;
    // 0x2b3ae0: 0x8e820250  lw          $v0, 0x250($s4)
    ctx->pc = 0x2b3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x2b3ae4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3AE4u;
    {
        const bool branch_taken_0x2b3ae4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b3ae4) {
            ctx->pc = 0x2B3B08u;
            goto label_2b3b08;
        }
    }
    ctx->pc = 0x2B3AECu;
label_2b3aec:
    // 0x2b3aec: 0x0  nop
    ctx->pc = 0x2b3aecu;
    // NOP
    // 0x2b3af0: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2b3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2b3af4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2b3af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3afc: 0x0  nop
    ctx->pc = 0x2b3afcu;
    // NOP
    // 0x2b3b00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b3b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b3b04: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2b3b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2b3b08:
    // 0x2b3b08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b3b08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b3b0c: 0x2a620080  slti        $v0, $s3, 0x80
    ctx->pc = 0x2b3b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2b3b10: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x2B3B10u;
    {
        const bool branch_taken_0x2b3b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3B10u;
            // 0x2b3b14: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b10) {
            ctx->pc = 0x2B3974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b3974;
        }
    }
    ctx->pc = 0x2B3B18u;
    // 0x2b3b18: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b3b1c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b3b1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b3b20: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2b3b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b3b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b28: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x2b3b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b3b2c: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x2B3B2Cu;
    {
        const bool branch_taken_0x2b3b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3B2Cu;
            // 0x2b3b30: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b2c) {
            ctx->pc = 0x2B3968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b3968;
        }
    }
    ctx->pc = 0x2B3B34u;
    // 0x2b3b34: 0x8e820250  lw          $v0, 0x250($s4)
    ctx->pc = 0x2b3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x2b3b38: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3B38u;
    {
        const bool branch_taken_0x2b3b38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b3b38) {
            ctx->pc = 0x2B3B48u;
            goto label_2b3b48;
        }
    }
    ctx->pc = 0x2B3B40u;
    // 0x2b3b40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b3b44: 0xae820250  sw          $v0, 0x250($s4)
    ctx->pc = 0x2b3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 2));
label_2b3b48:
    // 0x2b3b48: 0x8e820170  lw          $v0, 0x170($s4)
    ctx->pc = 0x2b3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 368)));
    // 0x2b3b4c: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2B3B4Cu;
    {
        const bool branch_taken_0x2b3b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3b4c) {
            ctx->pc = 0x2B3D88u;
            goto label_2b3d88;
        }
    }
    ctx->pc = 0x2B3B54u;
    // 0x2b3b54: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x2b3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x2b3b58: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2b3b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3b5c: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x2B3B5Cu;
    {
        const bool branch_taken_0x2b3b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3b5c) {
            ctx->pc = 0x2B3D88u;
            goto label_2b3d88;
        }
    }
    ctx->pc = 0x2B3B64u;
    // 0x2b3b64: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x2b3b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3b68: 0x27b00104  addiu       $s0, $sp, 0x104
    ctx->pc = 0x2b3b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2b3b6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b3b70: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2b3b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2b3b74: 0x24a5ea58  addiu       $a1, $a1, -0x15A8
    ctx->pc = 0x2b3b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961752));
    // 0x2b3b78: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B3B78u;
    SET_GPR_U32(ctx, 31, 0x2B3B80u);
    ctx->pc = 0x2B3B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3B78u;
            // 0x2b3b7c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3B80u; }
        if (ctx->pc != 0x2B3B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3B80u; }
        if (ctx->pc != 0x2B3B80u) { return; }
    }
    ctx->pc = 0x2B3B80u;
label_2b3b80:
    // 0x2b3b80: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2b3b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3b84: 0x27b600b4  addiu       $s6, $sp, 0xB4
    ctx->pc = 0x2b3b84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2b3b88: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2b3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3b8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b3b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b3b90: 0x8e820170  lw          $v0, 0x170($s4)
    ctx->pc = 0x2b3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 368)));
    // 0x2b3b94: 0x24a5ece0  addiu       $a1, $a1, -0x1320
    ctx->pc = 0x2b3b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962400));
    // 0x2b3b98: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2b3b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b3b9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b3b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b3ba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3ba4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2b3ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2b3ba8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2b3ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b3bac: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2b3bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3bb0: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x2b3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x2b3bb4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2b3bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3bb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b3bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b3bbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3bc0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2b3bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2b3bc4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2b3bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b3bc8: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2b3bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3bcc: 0x8e82017c  lw          $v0, 0x17C($s4)
    ctx->pc = 0x2b3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x2b3bd0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2b3bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3bd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b3bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b3bd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3bdc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2b3bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2b3be0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2b3be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b3be4: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x2b3be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3be8: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B3BE8u;
    SET_GPR_U32(ctx, 31, 0x2B3BF0u);
    ctx->pc = 0x2B3BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3BE8u;
            // 0x2b3bec: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3BF0u; }
        if (ctx->pc != 0x2B3BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3BF0u; }
        if (ctx->pc != 0x2B3BF0u) { return; }
    }
    ctx->pc = 0x2B3BF0u;
label_2b3bf0:
    // 0x2b3bf0: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x2b3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3bf4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b3bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b3bf8: 0x24a5ece8  addiu       $a1, $a1, -0x1318
    ctx->pc = 0x2b3bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962408));
    // 0x2b3bfc: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x2b3bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2b3c00: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B3C00u;
    SET_GPR_U32(ctx, 31, 0x2B3C08u);
    ctx->pc = 0x2B3C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3C00u;
            // 0x2b3c04: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C08u; }
        if (ctx->pc != 0x2B3C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C08u; }
        if (ctx->pc != 0x2B3C08u) { return; }
    }
    ctx->pc = 0x2B3C08u;
label_2b3c08:
    // 0x2b3c08: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b3c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b3c0c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2b3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b3c10: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x2b3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2b3c14: 0xc0877c4  jal         func_21DF10
    ctx->pc = 0x2B3C14u;
    SET_GPR_U32(ctx, 31, 0x2B3C1Cu);
    ctx->pc = 0x2B3C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3C14u;
            // 0x2b3c18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF10u;
    if (runtime->hasFunction(0x21DF10u)) {
        auto targetFn = runtime->lookupFunction(0x21DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C1Cu; }
        if (ctx->pc != 0x2B3C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemPos__7CDC2MesFPii_0x21df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C1Cu; }
        if (ctx->pc != 0x2B3C1Cu) { return; }
    }
    ctx->pc = 0x2B3C1Cu;
label_2b3c1c:
    // 0x2b3c1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b3c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b3c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b3c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3c28:
    // 0x2b3c28: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x2b3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2b3c2c: 0x24550180  addiu       $s5, $v0, 0x180
    ctx->pc = 0x2b3c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2b3c30: 0x8c420180  lw          $v0, 0x180($v0)
    ctx->pc = 0x2b3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2b3c34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B3C34u;
    {
        const bool branch_taken_0x2b3c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3c34) {
            ctx->pc = 0x2B3C78u;
            goto label_2b3c78;
        }
    }
    ctx->pc = 0x2B3C3Cu;
    // 0x2b3c3c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2b3c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3c40: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2b3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3c44: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2b3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3c48: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B3C48u;
    SET_GPR_U32(ctx, 31, 0x2B3C50u);
    ctx->pc = 0x2B3C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3C48u;
            // 0x2b3c4c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C50u; }
        if (ctx->pc != 0x2B3C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C50u; }
        if (ctx->pc != 0x2B3C50u) { return; }
    }
    ctx->pc = 0x2B3C50u;
label_2b3c50:
    // 0x2b3c50: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x2b3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2b3c54: 0x247200b0  addiu       $s2, $v1, 0xB0
    ctx->pc = 0x2b3c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2b3c58: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2b3c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b3c5c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2b3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b3c60: 0x8e830140  lw          $v1, 0x140($s4)
    ctx->pc = 0x2b3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3c64: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2b3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3c68: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2b3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3c6c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B3C6Cu;
    SET_GPR_U32(ctx, 31, 0x2B3C74u);
    ctx->pc = 0x2B3C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3C6Cu;
            // 0x2b3c70: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C74u; }
        if (ctx->pc != 0x2B3C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C74u; }
        if (ctx->pc != 0x2B3C74u) { return; }
    }
    ctx->pc = 0x2B3C74u;
label_2b3c74:
    // 0x2b3c74: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2b3c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2b3c78:
    // 0x2b3c78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b3c78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b3c7c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x2b3c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b3c80: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b3c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b3c84: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2B3C84u;
    {
        const bool branch_taken_0x2b3c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3C84u;
            // 0x2b3c88: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c84) {
            ctx->pc = 0x2B3C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b3c28;
        }
    }
    ctx->pc = 0x2B3C8Cu;
    // 0x2b3c8c: 0x86820014  lh          $v0, 0x14($s4)
    ctx->pc = 0x2b3c8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2b3c90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3C90u;
    {
        const bool branch_taken_0x2b3c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3c90) {
            ctx->pc = 0x2B3CA8u;
            goto label_2b3ca8;
        }
    }
    ctx->pc = 0x2B3C98u;
    // 0x2b3c98: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x2b3c98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2b3c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3ca0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3CA0u;
    {
        const bool branch_taken_0x2b3ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3ca0) {
            ctx->pc = 0x2B3CC8u;
            goto label_2b3cc8;
        }
    }
    ctx->pc = 0x2B3CA8u;
label_2b3ca8:
    // 0x2b3ca8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2b3ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3cac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b3cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b3cb0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2b3cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3cb4: 0x8c22cb40  lw          $v0, -0x34C0($at)
    ctx->pc = 0x2b3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953792)));
    // 0x2b3cb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b3cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b3cbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3cc0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2b3cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2b3cc4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2b3cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2b3cc8:
    // 0x2b3cc8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b3cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b3ccc: 0x8c25ca4c  lw          $a1, -0x35B4($at)
    ctx->pc = 0x2b3cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x2b3cd0: 0xc0ac07c  jal         func_2B01F0
    ctx->pc = 0x2B3CD0u;
    SET_GPR_U32(ctx, 31, 0x2B3CD8u);
    ctx->pc = 0x2B3CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3CD0u;
            // 0x2b3cd4: 0x8e840170  lw          $a0, 0x170($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B01F0u;
    if (runtime->hasFunction(0x2B01F0u)) {
        auto targetFn = runtime->lookupFunction(0x2B01F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3CD8u; }
        if (ctx->pc != 0x2B3CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessagePositionNPCForm__FP16CMenuPosDataFormP7CDC2Mes_0x2b01f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3CD8u; }
        if (ctx->pc != 0x2B3CD8u) { return; }
    }
    ctx->pc = 0x2B3CD8u;
label_2b3cd8:
    // 0x2b3cd8: 0x8e8301f4  lw          $v1, 0x1F4($s4)
    ctx->pc = 0x2b3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
    // 0x2b3cdc: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B3CDCu;
    {
        const bool branch_taken_0x2b3cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3cdc) {
            ctx->pc = 0x2B3D88u;
            goto label_2b3d88;
        }
    }
    ctx->pc = 0x2B3CE4u;
    // 0x2b3ce4: 0x8e8201f8  lw          $v0, 0x1F8($s4)
    ctx->pc = 0x2b3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
    // 0x2b3ce8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B3CE8u;
    {
        const bool branch_taken_0x2b3ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ce8) {
            ctx->pc = 0x2B3D88u;
            goto label_2b3d88;
        }
    }
    ctx->pc = 0x2B3CF0u;
    // 0x2b3cf0: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x2b3cf0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b3cf4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b3cf8: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x2b3cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3cfc: 0xc089728  jal         func_225CA0
    ctx->pc = 0x2B3CFCu;
    SET_GPR_U32(ctx, 31, 0x2B3D04u);
    ctx->pc = 0x2B3D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3CFCu;
            // 0x2b3d00: 0x24a5ecf0  addiu       $a1, $a1, -0x1310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3D04u; }
        if (ctx->pc != 0x2B3D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3D04u; }
        if (ctx->pc != 0x2B3D04u) { return; }
    }
    ctx->pc = 0x2B3D04u;
label_2b3d04:
    // 0x2b3d04: 0x8e8201f8  lw          $v0, 0x1F8($s4)
    ctx->pc = 0x2b3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
    // 0x2b3d08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b3d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b3d0c: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x2b3d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3d10: 0x8046002f  lb          $a2, 0x2F($v0)
    ctx->pc = 0x2b3d10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 47)));
    // 0x2b3d14: 0xc089728  jal         func_225CA0
    ctx->pc = 0x2B3D14u;
    SET_GPR_U32(ctx, 31, 0x2B3D1Cu);
    ctx->pc = 0x2B3D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3D14u;
            // 0x2b3d18: 0x24a5ecf8  addiu       $a1, $a1, -0x1308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3D1Cu; }
        if (ctx->pc != 0x2B3D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3D1Cu; }
        if (ctx->pc != 0x2B3D1Cu) { return; }
    }
    ctx->pc = 0x2B3D1Cu;
label_2b3d1c:
    // 0x2b3d1c: 0x8e830190  lw          $v1, 0x190($s4)
    ctx->pc = 0x2b3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 400)));
    // 0x2b3d20: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B3D20u;
    {
        const bool branch_taken_0x2b3d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3d20) {
            ctx->pc = 0x2B3D88u;
            goto label_2b3d88;
        }
    }
    ctx->pc = 0x2B3D28u;
    // 0x2b3d28: 0x8e8201f8  lw          $v0, 0x1F8($s4)
    ctx->pc = 0x2b3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 504)));
    // 0x2b3d2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b3d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3d30: 0x8042002f  lb          $v0, 0x2F($v0)
    ctx->pc = 0x2b3d30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 47)));
    // 0x2b3d34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3D34u;
    {
        const bool branch_taken_0x2b3d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3d34) {
            ctx->pc = 0x2B3D5Cu;
            goto label_2b3d5c;
        }
    }
    ctx->pc = 0x2B3D3Cu;
    // 0x2b3d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3d40: 0x8e8201f4  lw          $v0, 0x1F4($s4)
    ctx->pc = 0x2b3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
    // 0x2b3d44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3d48: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x2b3d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b3d4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b3d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3d50: 0x0  nop
    ctx->pc = 0x2b3d50u;
    // NOP
    // 0x2b3d54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b3d54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b3d58: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2b3d58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2b3d5c:
    // 0x2b3d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3d60: 0x0  nop
    ctx->pc = 0x2b3d60u;
    // NOP
    // 0x2b3d64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b3d64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3d68: 0x0  nop
    ctx->pc = 0x2b3d68u;
    // NOP
    // 0x2b3d6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3D6Cu;
    {
        const bool branch_taken_0x2b3d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3D6Cu;
            // 0x2b3d70: 0x3c0242e0  lui         $v0, 0x42E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d6c) {
            ctx->pc = 0x2B3D78u;
            goto label_2b3d78;
        }
    }
    ctx->pc = 0x2B3D74u;
    // 0x2b3d74: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b3d74u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2b3d78:
    // 0x2b3d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3d7c: 0x0  nop
    ctx->pc = 0x2b3d7cu;
    // NOP
    // 0x2b3d80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b3d84: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2b3d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2b3d88:
    // 0x2b3d88: 0xc08b050  jal         func_22C140
    ctx->pc = 0x2B3D88u;
    SET_GPR_U32(ctx, 31, 0x2B3D90u);
    ctx->pc = 0x2B3D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3D88u;
            // 0x2b3d8c: 0x8e84013c  lw          $a0, 0x13C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 316)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C140u;
    if (runtime->hasFunction(0x22C140u)) {
        auto targetFn = runtime->lookupFunction(0x22C140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3D90u; }
        if (ctx->pc != 0x2B3D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemBrdPosStep__Fi_0x22c140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3D90u; }
        if (ctx->pc != 0x2B3D90u) { return; }
    }
    ctx->pc = 0x2B3D90u;
label_2b3d90:
    // 0x2b3d90: 0x8f839518  lw          $v1, -0x6AE8($gp)
    ctx->pc = 0x2b3d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939928)));
    // 0x2b3d94: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B3D94u;
    {
        const bool branch_taken_0x2b3d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3d94) {
            ctx->pc = 0x2B3E50u;
            goto label_2b3e50;
        }
    }
    ctx->pc = 0x2B3D9Cu;
    // 0x2b3d9c: 0x8e840140  lw          $a0, 0x140($s4)
    ctx->pc = 0x2b3d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2b3da0: 0x27b0010c  addiu       $s0, $sp, 0x10C
    ctx->pc = 0x2b3da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x2b3da4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b3da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b3da8: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x2b3da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2b3dac: 0x24a5ed00  addiu       $a1, $a1, -0x1300
    ctx->pc = 0x2b3dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962432));
    // 0x2b3db0: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B3DB0u;
    SET_GPR_U32(ctx, 31, 0x2B3DB8u);
    ctx->pc = 0x2B3DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3DB0u;
            // 0x2b3db4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3DB8u; }
        if (ctx->pc != 0x2B3DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3DB8u; }
        if (ctx->pc != 0x2B3DB8u) { return; }
    }
    ctx->pc = 0x2B3DB8u;
label_2b3db8:
    // 0x2b3db8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x2b3db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3dbc: 0x8f829518  lw          $v0, -0x6AE8($gp)
    ctx->pc = 0x2b3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939928)));
    // 0x2b3dc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b3dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b3dc4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2b3dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3dc8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B3DC8u;
    SET_GPR_U32(ctx, 31, 0x2B3DD0u);
    ctx->pc = 0x2B3DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3DC8u;
            // 0x2b3dcc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3DD0u; }
        if (ctx->pc != 0x2B3DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3DD0u; }
        if (ctx->pc != 0x2B3DD0u) { return; }
    }
    ctx->pc = 0x2B3DD0u;
label_2b3dd0:
    // 0x2b3dd0: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x2B3DD0u;
    SET_GPR_U32(ctx, 31, 0x2B3DD8u);
    ctx->pc = 0x2B3DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3DD0u;
            // 0x2b3dd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3DD8u; }
        if (ctx->pc != 0x2B3DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3DD8u; }
        if (ctx->pc != 0x2B3DD8u) { return; }
    }
    ctx->pc = 0x2B3DD8u;
label_2b3dd8:
    // 0x2b3dd8: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x2b3dd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b3ddc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3DDCu;
    {
        const bool branch_taken_0x2b3ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3DDCu;
            // 0x2b3de0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ddc) {
            ctx->pc = 0x2B3DE8u;
            goto label_2b3de8;
        }
    }
    ctx->pc = 0x2B3DE4u;
    // 0x2b3de4: 0xae8301fc  sw          $v1, 0x1FC($s4)
    ctx->pc = 0x2b3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 508), GPR_U32(ctx, 3));
label_2b3de8:
    // 0x2b3de8: 0x8e8301fc  lw          $v1, 0x1FC($s4)
    ctx->pc = 0x2b3de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 508)));
    // 0x2b3dec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3DECu;
    {
        const bool branch_taken_0x2b3dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3dec) {
            ctx->pc = 0x2B3E04u;
            goto label_2b3e04;
        }
    }
    ctx->pc = 0x2B3DF4u;
    // 0x2b3df4: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x2b3df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b3df8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3dfc: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B3DFCu;
    {
        const bool branch_taken_0x2b3dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3dfc) {
            ctx->pc = 0x2B3E28u;
            goto label_2b3e28;
        }
    }
    ctx->pc = 0x2B3E04u;
label_2b3e04:
    // 0x2b3e04: 0x86840014  lh          $a0, 0x14($s4)
    ctx->pc = 0x2b3e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2b3e08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3e0c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3E0Cu;
    {
        const bool branch_taken_0x2b3e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b3e0c) {
            ctx->pc = 0x2B3E28u;
            goto label_2b3e28;
        }
    }
    ctx->pc = 0x2B3E14u;
    // 0x2b3e14: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2b3e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2b3e18: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2b3e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b3e1c: 0x84840050  lh          $a0, 0x50($a0)
    ctx->pc = 0x2b3e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2b3e20: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B3E20u;
    {
        const bool branch_taken_0x2b3e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3e20) {
            ctx->pc = 0x2B3E50u;
            goto label_2b3e50;
        }
    }
    ctx->pc = 0x2B3E28u;
label_2b3e28:
    // 0x2b3e28: 0x8f839518  lw          $v1, -0x6AE8($gp)
    ctx->pc = 0x2b3e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939928)));
    // 0x2b3e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b3e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3e30: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2b3e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3e34: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x2b3e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3e38: 0x8f839518  lw          $v1, -0x6AE8($gp)
    ctx->pc = 0x2b3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939928)));
    // 0x2b3e3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3e40: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2b3e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2b3e44: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2b3e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3e48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3e4c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2b3e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2b3e50:
    // 0x2b3e50: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b3e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b3e54: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2b3e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b3e58: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2b3e58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b3e5c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2b3e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b3e60: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2b3e60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b3e64: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2b3e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b3e68: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b3e68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3e6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b3e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b3e70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b3e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3e74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b3e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3e78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b3e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3e7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b3e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3e80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3E80u;
            // 0x2b3e84: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3E88u;
}
