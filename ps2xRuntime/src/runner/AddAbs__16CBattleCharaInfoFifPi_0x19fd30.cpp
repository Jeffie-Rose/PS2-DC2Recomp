#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddAbs__16CBattleCharaInfoFifPi
// Address: 0x19fd30 - 0x19fed8
void AddAbs__16CBattleCharaInfoFifPi_0x19fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddAbs__16CBattleCharaInfoFifPi_0x19fd30");
#endif

    switch (ctx->pc) {
        case 0x19fd64u: goto label_19fd64;
        case 0x19fda4u: goto label_19fda4;
        case 0x19fdb0u: goto label_19fdb0;
        case 0x19fdd0u: goto label_19fdd0;
        case 0x19fde4u: goto label_19fde4;
        case 0x19fe30u: goto label_19fe30;
        case 0x19fe50u: goto label_19fe50;
        case 0x19fe74u: goto label_19fe74;
        case 0x19fe9cu: goto label_19fe9c;
        default: break;
    }

    ctx->pc = 0x19fd30u;

    // 0x19fd30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19fd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19fd34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19fd38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19fd3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19fd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19fd40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19fd40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19fd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19fd48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19fd48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19fd50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19fd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd54: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x19fd54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19fd58: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x19fd58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x19fd5c: 0xc067e44  jal         func_19F910
    ctx->pc = 0x19FD5Cu;
    SET_GPR_U32(ctx, 31, 0x19FD64u);
    ctx->pc = 0x19FD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD5Cu;
            // 0x19fd60: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F910u;
    if (runtime->hasFunction(0x19F910u)) {
        auto targetFn = runtime->lookupFunction(0x19F910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD64u; }
        if (ctx->pc != 0x19FD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessAbs__16CBattleCharaInfoFi_0x19f910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD64u; }
        if (ctx->pc != 0x19FD64u) { return; }
    }
    ctx->pc = 0x19FD64u;
label_19fd64:
    // 0x19fd64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19fd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd68: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FD68u;
    {
        const bool branch_taken_0x19fd68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fd68) {
            ctx->pc = 0x19FD7Cu;
            goto label_19fd7c;
        }
    }
    ctx->pc = 0x19FD70u;
    // 0x19fd70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fd70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fd74: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x19FD74u;
    {
        const bool branch_taken_0x19fd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD74u;
            // 0x19fd78: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd74) {
            ctx->pc = 0x19FEB8u;
            goto label_19feb8;
        }
    }
    ctx->pc = 0x19FD7Cu;
label_19fd7c:
    // 0x19fd7c: 0x86630006  lh          $v1, 0x6($s3)
    ctx->pc = 0x19fd7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x19fd80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fd84: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19FD84u;
    {
        const bool branch_taken_0x19fd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19FD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD84u;
            // 0x19fd88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd84) {
            ctx->pc = 0x19FDB8u;
            goto label_19fdb8;
        }
    }
    ctx->pc = 0x19FD8Cu;
    // 0x19fd8c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x19fd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19fd90: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x19fd90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19fd94: 0x0  nop
    ctx->pc = 0x19fd94u;
    // NOP
    // 0x19fd98: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x19fd98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x19fd9c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19FD9Cu;
    SET_GPR_U32(ctx, 31, 0x19FDA4u);
    ctx->pc = 0x19FDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD9Cu;
            // 0x19fda0: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDA4u; }
        if (ctx->pc != 0x19FDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDA4u; }
        if (ctx->pc != 0x19FDA4u) { return; }
    }
    ctx->pc = 0x19FDA4u;
label_19fda4:
    // 0x19fda4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fda8: 0xc067140  jal         func_19C500
    ctx->pc = 0x19FDA8u;
    SET_GPR_U32(ctx, 31, 0x19FDB0u);
    ctx->pc = 0x19FDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDA8u;
            // 0x19fdac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C500u;
    if (runtime->hasFunction(0x19C500u)) {
        auto targetFn = runtime->lookupFunction(0x19C500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDB0u; }
        if (ctx->pc != 0x19FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRoboAbs__16CUserDataManagerFf_0x19c500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDB0u; }
        if (ctx->pc != 0x19FDB0u) { return; }
    }
    ctx->pc = 0x19FDB0u;
label_19fdb0:
    // 0x19fdb0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x19FDB0u;
    {
        const bool branch_taken_0x19fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDB0u;
            // 0x19fdb4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdb0) {
            ctx->pc = 0x19FEB4u;
            goto label_19feb4;
        }
    }
    ctx->pc = 0x19FDB8u;
label_19fdb8:
    // 0x19fdb8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19FDB8u;
    {
        const bool branch_taken_0x19fdb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19fdb8) {
            ctx->pc = 0x19FDFCu;
            goto label_19fdfc;
        }
    }
    ctx->pc = 0x19FDC0u;
    // 0x19fdc0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x19fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x19fdc4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x19fdc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x19fdc8: 0xc065b44  jal         func_196D10
    ctx->pc = 0x19FDC8u;
    SET_GPR_U32(ctx, 31, 0x19FDD0u);
    ctx->pc = 0x19FDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDC8u;
            // 0x19fdcc: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDD0u; }
        if (ctx->pc != 0x19FDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDD0u; }
        if (ctx->pc != 0x19FDD0u) { return; }
    }
    ctx->pc = 0x19FDD0u;
label_19fdd0:
    // 0x19fdd0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x19fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x19fdd4: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x19FDD4u;
    {
        const bool branch_taken_0x19fdd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdd4) {
            ctx->pc = 0x19FEB0u;
            goto label_19feb0;
        }
    }
    ctx->pc = 0x19FDDCu;
    // 0x19fddc: 0xc066aa8  jal         func_19AAA0
    ctx->pc = 0x19FDDCu;
    SET_GPR_U32(ctx, 31, 0x19FDE4u);
    ctx->pc = 0x19AAA0u;
    if (runtime->hasFunction(0x19AAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19AAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDE4u; }
        if (ctx->pc != 0x19FDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelUp__16MOS_CHANGE_PARAMFv_0x19aaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDE4u; }
        if (ctx->pc != 0x19FDE4u) { return; }
    }
    ctx->pc = 0x19FDE4u;
label_19fde4:
    // 0x19fde4: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x19FDE4u;
    {
        const bool branch_taken_0x19fde4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fde4) {
            ctx->pc = 0x19FEB0u;
            goto label_19feb0;
        }
    }
    ctx->pc = 0x19FDECu;
    // 0x19fdec: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x19FDECu;
    {
        const bool branch_taken_0x19fdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDECu;
            // 0x19fdf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdec) {
            ctx->pc = 0x19FEB0u;
            goto label_19feb0;
        }
    }
    ctx->pc = 0x19FDF4u;
    // 0x19fdf4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x19FDF4u;
    {
        const bool branch_taken_0x19fdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDF4u;
            // 0x19fdf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdf4) {
            ctx->pc = 0x19FEB0u;
            goto label_19feb0;
        }
    }
    ctx->pc = 0x19FDFCu;
label_19fdfc:
    // 0x19fdfc: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x19fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x19fe00: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FE00u;
    {
        const bool branch_taken_0x19fe00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fe00) {
            ctx->pc = 0x19FE14u;
            goto label_19fe14;
        }
    }
    ctx->pc = 0x19FE08u;
    // 0x19fe08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fe08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fe0c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x19FE0Cu;
    {
        const bool branch_taken_0x19fe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe0c) {
            ctx->pc = 0x19FEB4u;
            goto label_19feb4;
        }
    }
    ctx->pc = 0x19FE14u;
label_19fe14:
    // 0x19fe14: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x19fe14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19fe18: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19FE18u;
    {
        const bool branch_taken_0x19fe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE18u;
            // 0x19fe1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe18) {
            ctx->pc = 0x19FE48u;
            goto label_19fe48;
        }
    }
    ctx->pc = 0x19FE20u;
    // 0x19fe20: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FE20u;
    {
        const bool branch_taken_0x19fe20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fe20) {
            ctx->pc = 0x19FE44u;
            goto label_19fe44;
        }
    }
    ctx->pc = 0x19FE28u;
    // 0x19fe28: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x19FE28u;
    SET_GPR_U32(ctx, 31, 0x19FE30u);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE30u; }
        if (ctx->pc != 0x19FE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE30u; }
        if (ctx->pc != 0x19FE30u) { return; }
    }
    ctx->pc = 0x19FE30u;
label_19fe30:
    // 0x19fe30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FE30u;
    {
        const bool branch_taken_0x19fe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe30) {
            ctx->pc = 0x19FE44u;
            goto label_19fe44;
        }
    }
    ctx->pc = 0x19FE38u;
    // 0x19fe38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19fe38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fe3c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19FE3Cu;
    {
        const bool branch_taken_0x19fe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe3c) {
            ctx->pc = 0x19FEB4u;
            goto label_19feb4;
        }
    }
    ctx->pc = 0x19FE44u;
label_19fe44:
    // 0x19fe44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x19fe44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_19fe48:
    // 0x19fe48: 0xc065b44  jal         func_196D10
    ctx->pc = 0x19FE48u;
    SET_GPR_U32(ctx, 31, 0x19FE50u);
    ctx->pc = 0x19FE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE48u;
            // 0x19fe4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE50u; }
        if (ctx->pc != 0x19FE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE50u; }
        if (ctx->pc != 0x19FE50u) { return; }
    }
    ctx->pc = 0x19FE50u;
label_19fe50:
    // 0x19fe50: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x19fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19fe54: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x19fe54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19fe58: 0x0  nop
    ctx->pc = 0x19fe58u;
    // NOP
    // 0x19fe5c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x19fe5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fe60: 0x0  nop
    ctx->pc = 0x19fe60u;
    // NOP
    // 0x19fe64: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x19FE64u;
    {
        const bool branch_taken_0x19fe64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE64u;
            // 0x19fe68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe64) {
            ctx->pc = 0x19FEB0u;
            goto label_19feb0;
        }
    }
    ctx->pc = 0x19FE6Cu;
    // 0x19fe6c: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x19FE6Cu;
    SET_GPR_U32(ctx, 31, 0x19FE74u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE74u; }
        if (ctx->pc != 0x19FE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE74u; }
        if (ctx->pc != 0x19FE74u) { return; }
    }
    ctx->pc = 0x19FE74u;
label_19fe74:
    // 0x19fe74: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x19fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x19fe78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19fe78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe7c: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x19fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19fe80: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x19fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x19fe84: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19fe88: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19fe8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fe90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19fe90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x19fe94: 0xc06800c  jal         func_1A0030
    ctx->pc = 0x19FE94u;
    SET_GPR_U32(ctx, 31, 0x19FE9Cu);
    ctx->pc = 0x19FE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE94u;
            // 0x19fe98: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0030u;
    if (runtime->hasFunction(0x1A0030u)) {
        auto targetFn = runtime->lookupFunction(0x1A0030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE9Cu; }
        if (ctx->pc != 0x19FE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelUpWeapon__16CBattleCharaInfoFP13CGameDataUsed_0x1a0030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE9Cu; }
        if (ctx->pc != 0x19FE9Cu) { return; }
    }
    ctx->pc = 0x19FE9Cu;
label_19fe9c:
    // 0x19fe9c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FE9Cu;
    {
        const bool branch_taken_0x19fe9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe9c) {
            ctx->pc = 0x19FEB0u;
            goto label_19feb0;
        }
    }
    ctx->pc = 0x19FEA4u;
    // 0x19fea4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19FEA4u;
    {
        const bool branch_taken_0x19fea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FEA4u;
            // 0x19fea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fea4) {
            ctx->pc = 0x19FEB0u;
            goto label_19feb0;
        }
    }
    ctx->pc = 0x19FEACu;
    // 0x19feac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19feacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_19feb0:
    // 0x19feb0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x19feb0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_19feb4:
    // 0x19feb4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19feb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19feb8:
    // 0x19feb8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x19feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19febc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19febcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fec0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19fec4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19fec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fec8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19fec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fecc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19feccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fed0: 0x3e00008  jr          $ra
    ctx->pc = 0x19FED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FED0u;
            // 0x19fed4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FED8u;
}
