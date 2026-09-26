#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_RANGE_MONS_ID__FP12RS_STACKDATAi
// Address: 0x1e51b0 - 0x1e53a0
void ps2__GET_RANGE_MONS_ID__FP12RS_STACKDATAi_0x1e51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_RANGE_MONS_ID__FP12RS_STACKDATAi_0x1e51b0");
#endif

    switch (ctx->pc) {
        case 0x1e51b0u: goto label_1e51b0;
        case 0x1e51b4u: goto label_1e51b4;
        case 0x1e51b8u: goto label_1e51b8;
        case 0x1e51bcu: goto label_1e51bc;
        case 0x1e51c0u: goto label_1e51c0;
        case 0x1e51c4u: goto label_1e51c4;
        case 0x1e51c8u: goto label_1e51c8;
        case 0x1e51ccu: goto label_1e51cc;
        case 0x1e51d0u: goto label_1e51d0;
        case 0x1e51d4u: goto label_1e51d4;
        case 0x1e51d8u: goto label_1e51d8;
        case 0x1e51dcu: goto label_1e51dc;
        case 0x1e51e0u: goto label_1e51e0;
        case 0x1e51e4u: goto label_1e51e4;
        case 0x1e51e8u: goto label_1e51e8;
        case 0x1e51ecu: goto label_1e51ec;
        case 0x1e51f0u: goto label_1e51f0;
        case 0x1e51f4u: goto label_1e51f4;
        case 0x1e51f8u: goto label_1e51f8;
        case 0x1e51fcu: goto label_1e51fc;
        case 0x1e5200u: goto label_1e5200;
        case 0x1e5204u: goto label_1e5204;
        case 0x1e5208u: goto label_1e5208;
        case 0x1e520cu: goto label_1e520c;
        case 0x1e5210u: goto label_1e5210;
        case 0x1e5214u: goto label_1e5214;
        case 0x1e5218u: goto label_1e5218;
        case 0x1e521cu: goto label_1e521c;
        case 0x1e5220u: goto label_1e5220;
        case 0x1e5224u: goto label_1e5224;
        case 0x1e5228u: goto label_1e5228;
        case 0x1e522cu: goto label_1e522c;
        case 0x1e5230u: goto label_1e5230;
        case 0x1e5234u: goto label_1e5234;
        case 0x1e5238u: goto label_1e5238;
        case 0x1e523cu: goto label_1e523c;
        case 0x1e5240u: goto label_1e5240;
        case 0x1e5244u: goto label_1e5244;
        case 0x1e5248u: goto label_1e5248;
        case 0x1e524cu: goto label_1e524c;
        case 0x1e5250u: goto label_1e5250;
        case 0x1e5254u: goto label_1e5254;
        case 0x1e5258u: goto label_1e5258;
        case 0x1e525cu: goto label_1e525c;
        case 0x1e5260u: goto label_1e5260;
        case 0x1e5264u: goto label_1e5264;
        case 0x1e5268u: goto label_1e5268;
        case 0x1e526cu: goto label_1e526c;
        case 0x1e5270u: goto label_1e5270;
        case 0x1e5274u: goto label_1e5274;
        case 0x1e5278u: goto label_1e5278;
        case 0x1e527cu: goto label_1e527c;
        case 0x1e5280u: goto label_1e5280;
        case 0x1e5284u: goto label_1e5284;
        case 0x1e5288u: goto label_1e5288;
        case 0x1e528cu: goto label_1e528c;
        case 0x1e5290u: goto label_1e5290;
        case 0x1e5294u: goto label_1e5294;
        case 0x1e5298u: goto label_1e5298;
        case 0x1e529cu: goto label_1e529c;
        case 0x1e52a0u: goto label_1e52a0;
        case 0x1e52a4u: goto label_1e52a4;
        case 0x1e52a8u: goto label_1e52a8;
        case 0x1e52acu: goto label_1e52ac;
        case 0x1e52b0u: goto label_1e52b0;
        case 0x1e52b4u: goto label_1e52b4;
        case 0x1e52b8u: goto label_1e52b8;
        case 0x1e52bcu: goto label_1e52bc;
        case 0x1e52c0u: goto label_1e52c0;
        case 0x1e52c4u: goto label_1e52c4;
        case 0x1e52c8u: goto label_1e52c8;
        case 0x1e52ccu: goto label_1e52cc;
        case 0x1e52d0u: goto label_1e52d0;
        case 0x1e52d4u: goto label_1e52d4;
        case 0x1e52d8u: goto label_1e52d8;
        case 0x1e52dcu: goto label_1e52dc;
        case 0x1e52e0u: goto label_1e52e0;
        case 0x1e52e4u: goto label_1e52e4;
        case 0x1e52e8u: goto label_1e52e8;
        case 0x1e52ecu: goto label_1e52ec;
        case 0x1e52f0u: goto label_1e52f0;
        case 0x1e52f4u: goto label_1e52f4;
        case 0x1e52f8u: goto label_1e52f8;
        case 0x1e52fcu: goto label_1e52fc;
        case 0x1e5300u: goto label_1e5300;
        case 0x1e5304u: goto label_1e5304;
        case 0x1e5308u: goto label_1e5308;
        case 0x1e530cu: goto label_1e530c;
        case 0x1e5310u: goto label_1e5310;
        case 0x1e5314u: goto label_1e5314;
        case 0x1e5318u: goto label_1e5318;
        case 0x1e531cu: goto label_1e531c;
        case 0x1e5320u: goto label_1e5320;
        case 0x1e5324u: goto label_1e5324;
        case 0x1e5328u: goto label_1e5328;
        case 0x1e532cu: goto label_1e532c;
        case 0x1e5330u: goto label_1e5330;
        case 0x1e5334u: goto label_1e5334;
        case 0x1e5338u: goto label_1e5338;
        case 0x1e533cu: goto label_1e533c;
        case 0x1e5340u: goto label_1e5340;
        case 0x1e5344u: goto label_1e5344;
        case 0x1e5348u: goto label_1e5348;
        case 0x1e534cu: goto label_1e534c;
        case 0x1e5350u: goto label_1e5350;
        case 0x1e5354u: goto label_1e5354;
        case 0x1e5358u: goto label_1e5358;
        case 0x1e535cu: goto label_1e535c;
        case 0x1e5360u: goto label_1e5360;
        case 0x1e5364u: goto label_1e5364;
        case 0x1e5368u: goto label_1e5368;
        case 0x1e536cu: goto label_1e536c;
        case 0x1e5370u: goto label_1e5370;
        case 0x1e5374u: goto label_1e5374;
        case 0x1e5378u: goto label_1e5378;
        case 0x1e537cu: goto label_1e537c;
        case 0x1e5380u: goto label_1e5380;
        case 0x1e5384u: goto label_1e5384;
        case 0x1e5388u: goto label_1e5388;
        case 0x1e538cu: goto label_1e538c;
        case 0x1e5390u: goto label_1e5390;
        case 0x1e5394u: goto label_1e5394;
        case 0x1e5398u: goto label_1e5398;
        case 0x1e539cu: goto label_1e539c;
        default: break;
    }

    ctx->pc = 0x1e51b0u;

label_1e51b0:
    // 0x1e51b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1e51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1e51b4:
    // 0x1e51b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e51b8:
    // 0x1e51b8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e51b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e51bc:
    // 0x1e51bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e51bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1e51c0:
    // 0x1e51c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1e51c4:
    // 0x1e51c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e51c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1e51c8:
    // 0x1e51c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e51c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e51cc:
    // 0x1e51cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e51ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e51d0:
    // 0x1e51d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e51d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e51d4:
    // 0x1e51d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e51d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e51d8:
    // 0x1e51d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e51d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e51dc:
    // 0x1e51dc: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x1e51dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_1e51e0:
    // 0x1e51e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e51e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e51e4:
    // 0x1e51e4: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x1e51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1e51e8:
    // 0x1e51e8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1e51e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_1e51ec:
    // 0x1e51ec: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1e51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_1e51f0:
    // 0x1e51f0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1e51f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1e51f4:
    // 0x1e51f4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1e51f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e51f8:
    // 0x1e51f8: 0x0  nop
    ctx->pc = 0x1e51f8u;
    // NOP
label_1e51fc:
    // 0x1e51fc: 0x0  nop
    ctx->pc = 0x1e51fcu;
    // NOP
label_1e5200:
    // 0x1e5200: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1e5204:
    if (ctx->pc == 0x1E5204u) {
        ctx->pc = 0x1E5208u;
        goto label_1e5208;
    }
    ctx->pc = 0x1E5200u;
    {
        const bool branch_taken_0x1e5200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5200) {
            ctx->pc = 0x1E51E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e51e8;
        }
    }
    ctx->pc = 0x1E5208u;
label_1e5208:
    // 0x1e5208: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e5208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e520c:
    // 0x1e520c: 0xc0781ac  jal         func_1E06B0
label_1e5210:
    if (ctx->pc == 0x1E5210u) {
        ctx->pc = 0x1E5210u;
            // 0x1e5210: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E5214u;
        goto label_1e5214;
    }
    ctx->pc = 0x1E520Cu;
    SET_GPR_U32(ctx, 31, 0x1E5214u);
    ctx->pc = 0x1E5210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E520Cu;
            // 0x1e5210: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5214u; }
        if (ctx->pc != 0x1E5214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5214u; }
        if (ctx->pc != 0x1E5214u) { return; }
    }
    ctx->pc = 0x1E5214u;
label_1e5214:
    // 0x1e5214: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e5214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e5218:
    // 0x1e5218: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e5218u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e521c:
    // 0x1e521c: 0xc07819c  jal         func_1E0670
label_1e5220:
    if (ctx->pc == 0x1E5220u) {
        ctx->pc = 0x1E5220u;
            // 0x1e5220: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E5224u;
        goto label_1e5224;
    }
    ctx->pc = 0x1E521Cu;
    SET_GPR_U32(ctx, 31, 0x1E5224u);
    ctx->pc = 0x1E5220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E521Cu;
            // 0x1e5220: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5224u; }
        if (ctx->pc != 0x1E5224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5224u; }
        if (ctx->pc != 0x1E5224u) { return; }
    }
    ctx->pc = 0x1E5224u;
label_1e5224:
    // 0x1e5224: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e5224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e5228:
    // 0x1e5228: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e5228u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e522c:
    // 0x1e522c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e522cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5230:
    // 0x1e5230: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e5230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e5234:
    // 0x1e5234: 0x320f809  jalr        $t9
label_1e5238:
    if (ctx->pc == 0x1E5238u) {
        ctx->pc = 0x1E5238u;
            // 0x1e5238: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1E523Cu;
        goto label_1e523c;
    }
    ctx->pc = 0x1E5234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E523Cu);
        ctx->pc = 0x1E5238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5234u;
            // 0x1e5238: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E523Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E523Cu; }
            if (ctx->pc != 0x1E523Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E523Cu;
label_1e523c:
    // 0x1e523c: 0xc04bc8c  jal         func_12F230
label_1e5240:
    if (ctx->pc == 0x1E5240u) {
        ctx->pc = 0x1E5240u;
            // 0x1e5240: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1E5244u;
        goto label_1e5244;
    }
    ctx->pc = 0x1E523Cu;
    SET_GPR_U32(ctx, 31, 0x1E5244u);
    ctx->pc = 0x1E5240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E523Cu;
            // 0x1e5240: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5244u; }
        if (ctx->pc != 0x1E5244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5244u; }
        if (ctx->pc != 0x1E5244u) { return; }
    }
    ctx->pc = 0x1E5244u;
label_1e5244:
    // 0x1e5244: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5248:
    // 0x1e5248: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e524c:
    // 0x1e524c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e524cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5250:
    // 0x1e5250: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e5250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
label_1e5254:
    // 0x1e5254: 0xc0a0ed8  jal         func_283B60
label_1e5258:
    if (ctx->pc == 0x1E5258u) {
        ctx->pc = 0x1E5258u;
            // 0x1e5258: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1E525Cu;
        goto label_1e525c;
    }
    ctx->pc = 0x1E5254u;
    SET_GPR_U32(ctx, 31, 0x1E525Cu);
    ctx->pc = 0x1E5258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5254u;
            // 0x1e5258: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E525Cu; }
        if (ctx->pc != 0x1E525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E525Cu; }
        if (ctx->pc != 0x1E525Cu) { return; }
    }
    ctx->pc = 0x1E525Cu;
label_1e525c:
    // 0x1e525c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e5260:
    if (ctx->pc == 0x1E5260u) {
        ctx->pc = 0x1E5260u;
            // 0x1e5260: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5264u;
        goto label_1e5264;
    }
    ctx->pc = 0x1E525Cu;
    {
        const bool branch_taken_0x1e525c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E525Cu;
            // 0x1e5260: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e525c) {
            ctx->pc = 0x1E52D0u;
            goto label_1e52d0;
        }
    }
    ctx->pc = 0x1E5264u;
label_1e5264:
    // 0x1e5264: 0x8643068a  lh          $v1, 0x68A($s2)
    ctx->pc = 0x1e5264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1674)));
label_1e5268:
    // 0x1e5268: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e526c:
    // 0x1e526c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1e5270:
    if (ctx->pc == 0x1E5270u) {
        ctx->pc = 0x1E5274u;
        goto label_1e5274;
    }
    ctx->pc = 0x1E526Cu;
    {
        const bool branch_taken_0x1e526c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e526c) {
            ctx->pc = 0x1E52D0u;
            goto label_1e52d0;
        }
    }
    ctx->pc = 0x1E5274u;
label_1e5274:
    // 0x1e5274: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e5274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e5278:
    // 0x1e5278: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1e5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1e527c:
    // 0x1e527c: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1e527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1e5280:
    // 0x1e5280: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1e5284:
    if (ctx->pc == 0x1E5284u) {
        ctx->pc = 0x1E5288u;
        goto label_1e5288;
    }
    ctx->pc = 0x1E5280u;
    {
        const bool branch_taken_0x1e5280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5280) {
            ctx->pc = 0x1E52D0u;
            goto label_1e52d0;
        }
    }
    ctx->pc = 0x1E5288u;
label_1e5288:
    // 0x1e5288: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e5288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e528c:
    // 0x1e528c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5290:
    // 0x1e5290: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e5290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e5294:
    // 0x1e5294: 0x320f809  jalr        $t9
label_1e5298:
    if (ctx->pc == 0x1E5298u) {
        ctx->pc = 0x1E5298u;
            // 0x1e5298: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1E529Cu;
        goto label_1e529c;
    }
    ctx->pc = 0x1E5294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E529Cu);
        ctx->pc = 0x1E5298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5294u;
            // 0x1e5298: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E529Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E529Cu; }
            if (ctx->pc != 0x1E529Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E529Cu;
label_1e529c:
    // 0x1e529c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1e52a0:
    // 0x1e52a0: 0xc04c018  jal         func_130060
label_1e52a4:
    if (ctx->pc == 0x1E52A4u) {
        ctx->pc = 0x1E52A4u;
            // 0x1e52a4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1E52A8u;
        goto label_1e52a8;
    }
    ctx->pc = 0x1E52A0u;
    SET_GPR_U32(ctx, 31, 0x1E52A8u);
    ctx->pc = 0x1E52A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52A0u;
            // 0x1e52a4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52A8u; }
        if (ctx->pc != 0x1E52A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52A8u; }
        if (ctx->pc != 0x1E52A8u) { return; }
    }
    ctx->pc = 0x1E52A8u;
label_1e52a8:
    // 0x1e52a8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1e52a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e52ac:
    // 0x1e52ac: 0x0  nop
    ctx->pc = 0x1e52acu;
    // NOP
label_1e52b0:
    // 0x1e52b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e52b4:
    if (ctx->pc == 0x1E52B4u) {
        ctx->pc = 0x1E52B4u;
            // 0x1e52b4: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->pc = 0x1E52B8u;
        goto label_1e52b8;
    }
    ctx->pc = 0x1E52B0u;
    {
        const bool branch_taken_0x1e52b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E52B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52B0u;
            // 0x1e52b4: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52b0) {
            ctx->pc = 0x1E52D0u;
            goto label_1e52d0;
        }
    }
    ctx->pc = 0x1E52B8u;
label_1e52b8:
    // 0x1e52b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e52b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e52bc:
    // 0x1e52bc: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x1e52bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1e52c0:
    // 0x1e52c0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1e52c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1e52c4:
    // 0x1e52c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e52c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e52c8:
    // 0x1e52c8: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1e52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1e52cc:
    // 0x1e52cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e52d0:
    // 0x1e52d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e52d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e52d4:
    // 0x1e52d4: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1e52d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1e52d8:
    // 0x1e52d8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1e52dc:
    if (ctx->pc == 0x1E52DCu) {
        ctx->pc = 0x1E52DCu;
            // 0x1e52dc: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1E52E0u;
        goto label_1e52e0;
    }
    ctx->pc = 0x1E52D8u;
    {
        const bool branch_taken_0x1e52d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E52DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52D8u;
            // 0x1e52dc: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52d8) {
            ctx->pc = 0x1E5250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e5250;
        }
    }
    ctx->pc = 0x1E52E0u;
label_1e52e0:
    // 0x1e52e0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1e52e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e52e4:
    // 0x1e52e4: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1e52e8:
    if (ctx->pc == 0x1E52E8u) {
        ctx->pc = 0x1E52E8u;
            // 0x1e52e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E52ECu;
        goto label_1e52ec;
    }
    ctx->pc = 0x1E52E4u;
    {
        const bool branch_taken_0x1e52e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52E4u;
            // 0x1e52e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52e4) {
            ctx->pc = 0x1E5360u;
            goto label_1e5360;
        }
    }
    ctx->pc = 0x1E52ECu;
label_1e52ec:
    // 0x1e52ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e52ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e52f0:
    // 0x1e52f0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1e52f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e52f4:
    // 0x1e52f4: 0xb1082a  slt         $at, $a1, $s1
    ctx->pc = 0x1e52f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e52f8:
    // 0x1e52f8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1e52fc:
    if (ctx->pc == 0x1E52FCu) {
        ctx->pc = 0x1E52FCu;
            // 0x1e52fc: 0x538c0  sll         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->pc = 0x1E5300u;
        goto label_1e5300;
    }
    ctx->pc = 0x1E52F8u;
    {
        const bool branch_taken_0x1e52f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E52FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52F8u;
            // 0x1e52fc: 0x538c0  sll         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52f8) {
            ctx->pc = 0x1E5350u;
            goto label_1e5350;
        }
    }
    ctx->pc = 0x1E5300u;
label_1e5300:
    // 0x1e5300: 0x11d1021  addu        $v0, $t0, $sp
    ctx->pc = 0x1e5300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
label_1e5304:
    // 0x1e5304: 0x24490080  addiu       $t1, $v0, 0x80
    ctx->pc = 0x1e5304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1e5308:
    // 0x1e5308: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x1e5308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_1e530c:
    // 0x1e530c: 0x244a0080  addiu       $t2, $v0, 0x80
    ctx->pc = 0x1e530cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1e5310:
    // 0x1e5310: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1e5310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5314:
    // 0x1e5314: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x1e5314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5318:
    // 0x1e5318: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e5318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e531c:
    // 0x1e531c: 0x0  nop
    ctx->pc = 0x1e531cu;
    // NOP
label_1e5320:
    // 0x1e5320: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e5324:
    if (ctx->pc == 0x1E5324u) {
        ctx->pc = 0x1E5328u;
        goto label_1e5328;
    }
    ctx->pc = 0x1E5320u;
    {
        const bool branch_taken_0x1e5320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5320) {
            ctx->pc = 0x1E5340u;
            goto label_1e5340;
        }
    }
    ctx->pc = 0x1E5328u;
label_1e5328:
    // 0x1e5328: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x1e5328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1e532c:
    // 0x1e532c: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x1e532cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_1e5330:
    // 0x1e5330: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x1e5330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1e5334:
    // 0x1e5334: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x1e5334u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
label_1e5338:
    // 0x1e5338: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x1e5338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_1e533c:
    // 0x1e533c: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x1e533cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
label_1e5340:
    // 0x1e5340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e5340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1e5344:
    // 0x1e5344: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1e5344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e5348:
    // 0x1e5348: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1e534c:
    if (ctx->pc == 0x1E534Cu) {
        ctx->pc = 0x1E534Cu;
            // 0x1e534c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->pc = 0x1E5350u;
        goto label_1e5350;
    }
    ctx->pc = 0x1E5348u;
    {
        const bool branch_taken_0x1e5348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E534Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5348u;
            // 0x1e534c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5348) {
            ctx->pc = 0x1E5308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e5308;
        }
    }
    ctx->pc = 0x1E5350u;
label_1e5350:
    // 0x1e5350: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e5350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e5354:
    // 0x1e5354: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1e5354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e5358:
    // 0x1e5358: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1e535c:
    if (ctx->pc == 0x1E535Cu) {
        ctx->pc = 0x1E535Cu;
            // 0x1e535c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x1E5360u;
        goto label_1e5360;
    }
    ctx->pc = 0x1E5358u;
    {
        const bool branch_taken_0x1e5358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E535Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5358u;
            // 0x1e535c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5358) {
            ctx->pc = 0x1E52F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e52f0;
        }
    }
    ctx->pc = 0x1E5360u;
label_1e5360:
    // 0x1e5360: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1e5360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1e5364:
    // 0x1e5364: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1e5364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1e5368:
    // 0x1e5368: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x1e5368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1e536c:
    // 0x1e536c: 0xc0781bc  jal         func_1E06F0
label_1e5370:
    if (ctx->pc == 0x1E5370u) {
        ctx->pc = 0x1E5370u;
            // 0x1e5370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5374u;
        goto label_1e5374;
    }
    ctx->pc = 0x1E536Cu;
    SET_GPR_U32(ctx, 31, 0x1E5374u);
    ctx->pc = 0x1E5370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E536Cu;
            // 0x1e5370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5374u; }
        if (ctx->pc != 0x1E5374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5374u; }
        if (ctx->pc != 0x1E5374u) { return; }
    }
    ctx->pc = 0x1E5374u;
label_1e5374:
    // 0x1e5374: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e5374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e5378:
    // 0x1e5378: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e5378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e537c:
    // 0x1e537c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e537cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e5380:
    // 0x1e5380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5384:
    // 0x1e5384: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e5384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e5388:
    // 0x1e5388: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e5388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e538c:
    // 0x1e538c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e538cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5390:
    // 0x1e5390: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e5390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5394:
    // 0x1e5394: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e5394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5398:
    // 0x1e5398: 0x3e00008  jr          $ra
label_1e539c:
    if (ctx->pc == 0x1E539Cu) {
        ctx->pc = 0x1E539Cu;
            // 0x1e539c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x1E53A0u;
        goto label_fallthrough_0x1e5398;
    }
    ctx->pc = 0x1E5398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5398u;
            // 0x1e539c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e5398:
    ctx->pc = 0x1E53A0u;
}
