#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawPlayer__11CDngFreeMapFi
// Address: 0x1edda0 - 0x1edfe4
void DrawPlayer__11CDngFreeMapFi_0x1edda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawPlayer__11CDngFreeMapFi_0x1edda0");
#endif

    switch (ctx->pc) {
        case 0x1eddecu: goto label_1eddec;
        case 0x1edea0u: goto label_1edea0;
        case 0x1edef8u: goto label_1edef8;
        case 0x1edf38u: goto label_1edf38;
        case 0x1edf44u: goto label_1edf44;
        case 0x1edf50u: goto label_1edf50;
        case 0x1edf5cu: goto label_1edf5c;
        case 0x1edf68u: goto label_1edf68;
        case 0x1edf70u: goto label_1edf70;
        case 0x1edf7cu: goto label_1edf7c;
        case 0x1edf94u: goto label_1edf94;
        case 0x1edfacu: goto label_1edfac;
        case 0x1edfc0u: goto label_1edfc0;
        case 0x1edfc8u: goto label_1edfc8;
        default: break;
    }

    ctx->pc = 0x1edda0u;

    // 0x1edda0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1edda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1edda4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1edda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1edda8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1edda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1eddac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1eddb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eddb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eddb4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1eddb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eddb8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1eddb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eddbc: 0x8c8500c4  lw          $a1, 0xC4($a0)
    ctx->pc = 0x1eddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1eddc0: 0x10a00081  beqz        $a1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1EDDC0u;
    {
        const bool branch_taken_0x1eddc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDC0u;
            // 0x1eddc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddc0) {
            ctx->pc = 0x1EDFC8u;
            goto label_1edfc8;
        }
    }
    ctx->pc = 0x1EDDC8u;
    // 0x1eddc8: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1eddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1eddcc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDDCCu;
    {
        const bool branch_taken_0x1eddcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDCCu;
            // 0x1eddd0: 0x27a60168  addiu       $a2, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddcc) {
            ctx->pc = 0x1EDDE0u;
            goto label_1edde0;
        }
    }
    ctx->pc = 0x1EDDD4u;
    // 0x1eddd4: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1EDDD4u;
    {
        const bool branch_taken_0x1eddd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDD4u;
            // 0x1eddd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddd4) {
            ctx->pc = 0x1EDFCCu;
            goto label_1edfcc;
        }
    }
    ctx->pc = 0x1EDDDCu;
    // 0x1edddc: 0x27a60168  addiu       $a2, $sp, 0x168
    ctx->pc = 0x1edddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_1edde0:
    // 0x1edde0: 0x27a7016c  addiu       $a3, $sp, 0x16C
    ctx->pc = 0x1edde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x1edde4: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EDDE4u;
    SET_GPR_U32(ctx, 31, 0x1EDDECu);
    ctx->pc = 0x1EDDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDE4u;
            // 0x1edde8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDECu; }
        if (ctx->pc != 0x1EDDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDECu; }
        if (ctx->pc != 0x1EDDECu) { return; }
    }
    ctx->pc = 0x1EDDECu;
label_1eddec:
    // 0x1eddec: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1eddecu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eddf0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1eddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1eddf4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1eddf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1eddf8: 0xc7a40168  lwc1        $f4, 0x168($sp)
    ctx->pc = 0x1eddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1eddfc: 0xc7a2016c  lwc1        $f2, 0x16C($sp)
    ctx->pc = 0x1eddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ede00: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ede00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ede04: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1ede04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1ede08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ede08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ede0c: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1ede0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1ede10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ede10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ede14: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1ede14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ede18: 0xe7a30168  swc1        $f3, 0x168($sp)
    ctx->pc = 0x1ede18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1ede1c: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1ede1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x1ede20: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x1ede20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ede24: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EDE24u;
    {
        const bool branch_taken_0x1ede24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ede24) {
            ctx->pc = 0x1EDE74u;
            goto label_1ede74;
        }
    }
    ctx->pc = 0x1EDE2Cu;
    // 0x1ede2c: 0x860200ec  lh          $v0, 0xEC($s0)
    ctx->pc = 0x1ede2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1ede30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EDE30u;
    {
        const bool branch_taken_0x1ede30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede30) {
            ctx->pc = 0x1EDE64u;
            goto label_1ede64;
        }
    }
    ctx->pc = 0x1EDE38u;
    // 0x1ede38: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x1ede38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1ede3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EDE3Cu;
    {
        const bool branch_taken_0x1ede3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede3c) {
            ctx->pc = 0x1EDE64u;
            goto label_1ede64;
        }
    }
    ctx->pc = 0x1EDE44u;
    // 0x1ede44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ede44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ede48: 0xe7808150  swc1        $f0, -0x7EB0($gp)
    ctx->pc = 0x1ede48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), bits); }
    // 0x1ede4c: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x1ede4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1ede50: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ede50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ede54: 0xe7808154  swc1        $f0, -0x7EAC($gp)
    ctx->pc = 0x1ede54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), bits); }
    // 0x1ede58: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x1ede58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1ede5c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ede5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ede60: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1ede60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1ede64:
    // 0x1ede64: 0xc7818150  lwc1        $f1, -0x7EB0($gp)
    ctx->pc = 0x1ede64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ede68: 0xc7808154  lwc1        $f0, -0x7EAC($gp)
    ctx->pc = 0x1ede68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ede6c: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x1ede6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1ede70: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1ede70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1ede74:
    // 0x1ede74: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x1ede74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ede78: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EDE78u;
    {
        const bool branch_taken_0x1ede78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ede78) {
            ctx->pc = 0x1EDEB8u;
            goto label_1edeb8;
        }
    }
    ctx->pc = 0x1EDE80u;
    // 0x1ede80: 0xc7808f00  lwc1        $f0, -0x7100($gp)
    ctx->pc = 0x1ede80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ede84: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x1ede84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x1ede88: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1ede88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x1ede8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ede8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ede90: 0x0  nop
    ctx->pc = 0x1ede90u;
    // NOP
    // 0x1ede94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ede94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ede98: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1EDE98u;
    SET_GPR_U32(ctx, 31, 0x1EDEA0u);
    ctx->pc = 0x1EDE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE98u;
            // 0x1ede9c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEA0u; }
        if (ctx->pc != 0x1EDEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEA0u; }
        if (ctx->pc != 0x1EDEA0u) { return; }
    }
    ctx->pc = 0x1EDEA0u;
label_1edea0:
    // 0x1edea0: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1edea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1edea4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1edea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1edea8: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x1edea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edeac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1edeacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1edeb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1edeb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1edeb4: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1edeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1edeb8:
    // 0x1edeb8: 0x8f828f00  lw          $v0, -0x7100($gp)
    ctx->pc = 0x1edeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938368)));
    // 0x1edebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1edebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1edec0: 0xaf828f00  sw          $v0, -0x7100($gp)
    ctx->pc = 0x1edec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938368), GPR_U32(ctx, 2));
    // 0x1edec4: 0x8f828f00  lw          $v0, -0x7100($gp)
    ctx->pc = 0x1edec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938368)));
    // 0x1edec8: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x1edec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1edecc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EDECCu;
    {
        const bool branch_taken_0x1edecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edecc) {
            ctx->pc = 0x1EDED8u;
            goto label_1eded8;
        }
    }
    ctx->pc = 0x1EDED4u;
    // 0x1eded4: 0xaf808f00  sw          $zero, -0x7100($gp)
    ctx->pc = 0x1eded4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938368), GPR_U32(ctx, 0));
label_1eded8:
    // 0x1eded8: 0xc7808f00  lwc1        $f0, -0x7100($gp)
    ctx->pc = 0x1eded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ededc: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x1ededcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x1edee0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1edee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x1edee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edee8: 0x0  nop
    ctx->pc = 0x1edee8u;
    // NOP
    // 0x1edeec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1edeecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1edef0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1EDEF0u;
    SET_GPR_U32(ctx, 31, 0x1EDEF8u);
    ctx->pc = 0x1EDEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEF0u;
            // 0x1edef4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEF8u; }
        if (ctx->pc != 0x1EDEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDEF8u; }
        if (ctx->pc != 0x1EDEF8u) { return; }
    }
    ctx->pc = 0x1EDEF8u;
label_1edef8:
    // 0x1edef8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1edef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1edefc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1edefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1edf00: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x1edf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edf04: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x1edf04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1edf08: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1edf08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1edf0c: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x1edf0cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1edf10: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1edf10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1edf14: 0x0  nop
    ctx->pc = 0x1edf14u;
    // NOP
    // 0x1edf18: 0x4604a834  c.lt.s      $f21, $f4
    ctx->pc = 0x1edf18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1edf1c: 0x0  nop
    ctx->pc = 0x1edf1cu;
    // NOP
    // 0x1edf20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDF20u;
    {
        const bool branch_taken_0x1edf20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EDF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF20u;
            // 0x1edf24: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf20) {
            ctx->pc = 0x1EDF30u;
            goto label_1edf30;
        }
    }
    ctx->pc = 0x1EDF28u;
    // 0x1edf28: 0x46002546  mov.s       $f21, $f4
    ctx->pc = 0x1edf28u;
    ctx->f[21] = FPU_MOV_S(ctx->f[4]);
    // 0x1edf2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1edf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1edf30:
    // 0x1edf30: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1EDF30u;
    SET_GPR_U32(ctx, 31, 0x1EDF38u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF38u; }
        if (ctx->pc != 0x1EDF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF38u; }
        if (ctx->pc != 0x1EDF38u) { return; }
    }
    ctx->pc = 0x1EDF38u;
label_1edf38:
    // 0x1edf38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1edf3c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1EDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF44u);
    ctx->pc = 0x1EDF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF3Cu;
            // 0x1edf40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF44u; }
        if (ctx->pc != 0x1EDF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF44u; }
        if (ctx->pc != 0x1EDF44u) { return; }
    }
    ctx->pc = 0x1EDF44u;
label_1edf44:
    // 0x1edf44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1edf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1edf48: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1EDF48u;
    SET_GPR_U32(ctx, 31, 0x1EDF50u);
    ctx->pc = 0x1EDF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF48u;
            // 0x1edf4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF50u; }
        if (ctx->pc != 0x1EDF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF50u; }
        if (ctx->pc != 0x1EDF50u) { return; }
    }
    ctx->pc = 0x1EDF50u;
label_1edf50:
    // 0x1edf50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1edf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1edf54: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EDF54u;
    SET_GPR_U32(ctx, 31, 0x1EDF5Cu);
    ctx->pc = 0x1EDF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF54u;
            // 0x1edf58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF5Cu; }
        if (ctx->pc != 0x1EDF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF5Cu; }
        if (ctx->pc != 0x1EDF5Cu) { return; }
    }
    ctx->pc = 0x1EDF5Cu;
label_1edf5c:
    // 0x1edf5c: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x1edf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1edf60: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1EDF60u;
    SET_GPR_U32(ctx, 31, 0x1EDF68u);
    ctx->pc = 0x1EDF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF60u;
            // 0x1edf64: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF68u; }
        if (ctx->pc != 0x1EDF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF68u; }
        if (ctx->pc != 0x1EDF68u) { return; }
    }
    ctx->pc = 0x1EDF68u;
label_1edf68:
    // 0x1edf68: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EDF68u;
    SET_GPR_U32(ctx, 31, 0x1EDF70u);
    ctx->pc = 0x1EDF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF68u;
            // 0x1edf6c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF70u; }
        if (ctx->pc != 0x1EDF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF70u; }
        if (ctx->pc != 0x1EDF70u) { return; }
    }
    ctx->pc = 0x1EDF70u;
label_1edf70:
    // 0x1edf70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1edf70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1edf74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EDF74u;
    SET_GPR_U32(ctx, 31, 0x1EDF7Cu);
    ctx->pc = 0x1EDF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF74u;
            // 0x1edf78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF7Cu; }
        if (ctx->pc != 0x1EDF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF7Cu; }
        if (ctx->pc != 0x1EDF7Cu) { return; }
    }
    ctx->pc = 0x1EDF7Cu;
label_1edf7c:
    // 0x1edf7c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1edf7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1edf84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1edf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1edf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf8c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EDF8Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF94u);
    ctx->pc = 0x1EDF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF8Cu;
            // 0x1edf90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF94u; }
        if (ctx->pc != 0x1EDF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF94u; }
        if (ctx->pc != 0x1EDF94u) { return; }
    }
    ctx->pc = 0x1EDF94u;
label_1edf94:
    // 0x1edf94: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1edf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1edf98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1edf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1edf9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfa0: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1edfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1edfa4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1EDFA4u;
    SET_GPR_U32(ctx, 31, 0x1EDFACu);
    ctx->pc = 0x1EDFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFA4u;
            // 0x1edfa8: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFACu; }
        if (ctx->pc != 0x1EDFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFACu; }
        if (ctx->pc != 0x1EDFACu) { return; }
    }
    ctx->pc = 0x1EDFACu;
label_1edfac:
    // 0x1edfac: 0xc7ac0168  lwc1        $f12, 0x168($sp)
    ctx->pc = 0x1edfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1edfb0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1edfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1edfb4: 0xc7ad016c  lwc1        $f13, 0x16C($sp)
    ctx->pc = 0x1edfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1edfb8: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1EDFB8u;
    SET_GPR_U32(ctx, 31, 0x1EDFC0u);
    ctx->pc = 0x1EDFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFB8u;
            // 0x1edfbc: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFC0u; }
        if (ctx->pc != 0x1EDFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFC0u; }
        if (ctx->pc != 0x1EDFC0u) { return; }
    }
    ctx->pc = 0x1EDFC0u;
label_1edfc0:
    // 0x1edfc0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EDFC0u;
    SET_GPR_U32(ctx, 31, 0x1EDFC8u);
    ctx->pc = 0x1EDFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFC0u;
            // 0x1edfc4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFC8u; }
        if (ctx->pc != 0x1EDFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFC8u; }
        if (ctx->pc != 0x1EDFC8u) { return; }
    }
    ctx->pc = 0x1EDFC8u;
label_1edfc8:
    // 0x1edfc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1edfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1edfcc:
    // 0x1edfcc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1edfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1edfd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1edfd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edfd4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1edfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1edfd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1edfd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFDCu;
            // 0x1edfe0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDFE4u;
}
