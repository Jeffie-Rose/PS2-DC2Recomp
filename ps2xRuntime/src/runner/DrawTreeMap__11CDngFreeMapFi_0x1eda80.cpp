#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawTreeMap__11CDngFreeMapFi
// Address: 0x1eda80 - 0x1edd9c
void DrawTreeMap__11CDngFreeMapFi_0x1eda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawTreeMap__11CDngFreeMapFi_0x1eda80");
#endif

    switch (ctx->pc) {
        case 0x1edad4u: goto label_1edad4;
        case 0x1edae8u: goto label_1edae8;
        case 0x1edb04u: goto label_1edb04;
        case 0x1edb78u: goto label_1edb78;
        case 0x1edb84u: goto label_1edb84;
        case 0x1edb90u: goto label_1edb90;
        case 0x1edb9cu: goto label_1edb9c;
        case 0x1edbb8u: goto label_1edbb8;
        case 0x1edbd0u: goto label_1edbd0;
        case 0x1edbe8u: goto label_1edbe8;
        case 0x1edc04u: goto label_1edc04;
        case 0x1edc34u: goto label_1edc34;
        case 0x1edc68u: goto label_1edc68;
        case 0x1edc70u: goto label_1edc70;
        case 0x1edc7cu: goto label_1edc7c;
        case 0x1edc90u: goto label_1edc90;
        case 0x1edca4u: goto label_1edca4;
        case 0x1edcb4u: goto label_1edcb4;
        case 0x1edd18u: goto label_1edd18;
        case 0x1edd3cu: goto label_1edd3c;
        case 0x1edd58u: goto label_1edd58;
        default: break;
    }

    ctx->pc = 0x1eda80u;

    // 0x1eda80: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1eda80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1eda84: 0x3c024250  lui         $v0, 0x4250
    ctx->pc = 0x1eda84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16976 << 16));
    // 0x1eda88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1eda88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1eda8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eda8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eda90: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1eda90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1eda94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eda94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eda98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1eda98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1eda9c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1eda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1edaa0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1edaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1edaa4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1edaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1edaa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1edaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1edaac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1edaacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1edab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1edab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1edab4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1edab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edab8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1edab8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1edabc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1edabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edac0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1edac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1edac4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1edac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1edac8: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x1edac8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1edacc: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x1EDACCu;
    SET_GPR_U32(ctx, 31, 0x1EDAD4u);
    ctx->pc = 0x1EDAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDACCu;
            // 0x1edad0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAD4u; }
        if (ctx->pc != 0x1EDAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAD4u; }
        if (ctx->pc != 0x1EDAD4u) { return; }
    }
    ctx->pc = 0x1EDAD4u;
label_1edad4:
    // 0x1edad4: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x1edad4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1edad8: 0x14600066  bnez        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1EDAD8u;
    {
        const bool branch_taken_0x1edad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAD8u;
            // 0x1edadc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edad8) {
            ctx->pc = 0x1EDC74u;
            goto label_1edc74;
        }
    }
    ctx->pc = 0x1EDAE0u;
    // 0x1edae0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1EDAE0u;
    SET_GPR_U32(ctx, 31, 0x1EDAE8u);
    ctx->pc = 0x1EDAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAE0u;
            // 0x1edae4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAE8u; }
        if (ctx->pc != 0x1EDAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAE8u; }
        if (ctx->pc != 0x1EDAE8u) { return; }
    }
    ctx->pc = 0x1EDAE8u;
label_1edae8:
    // 0x1edae8: 0x8e2500cc  lw          $a1, 0xCC($s1)
    ctx->pc = 0x1edae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x1edaec: 0x27b3019c  addiu       $s3, $sp, 0x19C
    ctx->pc = 0x1edaecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1edaf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edaf4: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x1edaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1edaf8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1edaf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edafc: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EDAFCu;
    SET_GPR_U32(ctx, 31, 0x1EDB04u);
    ctx->pc = 0x1EDB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAFCu;
            // 0x1edb00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB04u; }
        if (ctx->pc != 0x1EDB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB04u; }
        if (ctx->pc != 0x1EDB04u) { return; }
    }
    ctx->pc = 0x1EDB04u;
label_1edb04:
    // 0x1edb04: 0xc7a40198  lwc1        $f4, 0x198($sp)
    ctx->pc = 0x1edb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1edb08: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1edb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1edb0c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1edb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1edb10: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1edb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1edb14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1edb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1edb18: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1edb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1edb1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edb20: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1edb20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1edb24: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x1edb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x1edb28: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x1edb28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1edb2c: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x1edb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1edb30: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1edb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edb34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1edb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1edb38: 0x3c02c228  lui         $v0, 0xC228
    ctx->pc = 0x1edb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49704 << 16));
    // 0x1edb3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edb40: 0x0  nop
    ctx->pc = 0x1edb40u;
    // NOP
    // 0x1edb44: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1edb44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1edb48: 0x3c024278  lui         $v0, 0x4278
    ctx->pc = 0x1edb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17016 << 16));
    // 0x1edb4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1edb4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1edb50: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1edb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1edb54: 0xc7818efc  lwc1        $f1, -0x7104($gp)
    ctx->pc = 0x1edb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edb58: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1edb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1edb5c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1edb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1edb60: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1edb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1edb64: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x1edb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1edb68: 0x46002d01  sub.s       $f20, $f5, $f0
    ctx->pc = 0x1edb68u;
    ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1edb6c: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x1edb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1edb70: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1EDB70u;
    SET_GPR_U32(ctx, 31, 0x1EDB78u);
    ctx->pc = 0x1EDB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB70u;
            // 0x1edb74: 0x46001d41  sub.s       $f21, $f3, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB78u; }
        if (ctx->pc != 0x1EDB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB78u; }
        if (ctx->pc != 0x1EDB78u) { return; }
    }
    ctx->pc = 0x1EDB78u;
label_1edb78:
    // 0x1edb78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1edb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1edb7c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1EDB7Cu;
    SET_GPR_U32(ctx, 31, 0x1EDB84u);
    ctx->pc = 0x1EDB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB7Cu;
            // 0x1edb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB84u; }
        if (ctx->pc != 0x1EDB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB84u; }
        if (ctx->pc != 0x1EDB84u) { return; }
    }
    ctx->pc = 0x1EDB84u;
label_1edb84:
    // 0x1edb84: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1edb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1edb88: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EDB88u;
    SET_GPR_U32(ctx, 31, 0x1EDB90u);
    ctx->pc = 0x1EDB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB88u;
            // 0x1edb8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB90u; }
        if (ctx->pc != 0x1EDB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB90u; }
        if (ctx->pc != 0x1EDB90u) { return; }
    }
    ctx->pc = 0x1EDB90u;
label_1edb90:
    // 0x1edb90: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x1edb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1edb94: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1EDB94u;
    SET_GPR_U32(ctx, 31, 0x1EDB9Cu);
    ctx->pc = 0x1EDB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB94u;
            // 0x1edb98: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB9Cu; }
        if (ctx->pc != 0x1EDB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB9Cu; }
        if (ctx->pc != 0x1EDB9Cu) { return; }
    }
    ctx->pc = 0x1EDB9Cu;
label_1edb9c:
    // 0x1edb9c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1edb9cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edba0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1edba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1edba4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edba8: 0x0  nop
    ctx->pc = 0x1edba8u;
    // NOP
    // 0x1edbac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1edbacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1edbb0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EDBB0u;
    SET_GPR_U32(ctx, 31, 0x1EDBB8u);
    ctx->pc = 0x1EDBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBB0u;
            // 0x1edbb4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBB8u; }
        if (ctx->pc != 0x1EDBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBB8u; }
        if (ctx->pc != 0x1EDBB8u) { return; }
    }
    ctx->pc = 0x1EDBB8u;
label_1edbb8:
    // 0x1edbb8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1edbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1edbbc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1edbbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edbc0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1edbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1edbc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1edbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edbc8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EDBC8u;
    SET_GPR_U32(ctx, 31, 0x1EDBD0u);
    ctx->pc = 0x1EDBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBC8u;
            // 0x1edbcc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBD0u; }
        if (ctx->pc != 0x1EDBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBD0u; }
        if (ctx->pc != 0x1EDBD0u) { return; }
    }
    ctx->pc = 0x1EDBD0u;
label_1edbd0:
    // 0x1edbd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1edbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1edbd4: 0x8c258640  lw          $a1, -0x79C0($at)
    ctx->pc = 0x1edbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936128)));
    // 0x1edbd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1edbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1edbdc: 0x8c268644  lw          $a2, -0x79BC($at)
    ctx->pc = 0x1edbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936132)));
    // 0x1edbe0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1EDBE0u;
    SET_GPR_U32(ctx, 31, 0x1EDBE8u);
    ctx->pc = 0x1EDBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBE0u;
            // 0x1edbe4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBE8u; }
        if (ctx->pc != 0x1EDBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBE8u; }
        if (ctx->pc != 0x1EDBE8u) { return; }
    }
    ctx->pc = 0x1EDBE8u;
label_1edbe8:
    // 0x1edbe8: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x1edbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edbec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1edbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1edbf0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1edbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1edbf4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1edbf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1edbf8: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x1edbf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1edbfc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EDBFCu;
    SET_GPR_U32(ctx, 31, 0x1EDC04u);
    ctx->pc = 0x1EDC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBFCu;
            // 0x1edc00: 0x46150340  add.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC04u; }
        if (ctx->pc != 0x1EDC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC04u; }
        if (ctx->pc != 0x1EDC04u) { return; }
    }
    ctx->pc = 0x1EDC04u;
label_1edc04:
    // 0x1edc04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1edc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1edc08: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1edc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1edc0c: 0x8c268640  lw          $a2, -0x79C0($at)
    ctx->pc = 0x1edc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936128)));
    // 0x1edc10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1edc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1edc14: 0x8c258648  lw          $a1, -0x79B8($at)
    ctx->pc = 0x1edc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936136)));
    // 0x1edc18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1edc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1edc1c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1edc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1edc20: 0x8c238644  lw          $v1, -0x79BC($at)
    ctx->pc = 0x1edc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936132)));
    // 0x1edc24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1edc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1edc28: 0x8c22864c  lw          $v0, -0x79B4($at)
    ctx->pc = 0x1edc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936140)));
    // 0x1edc2c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1EDC2Cu;
    SET_GPR_U32(ctx, 31, 0x1EDC34u);
    ctx->pc = 0x1EDC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC2Cu;
            // 0x1edc30: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC34u; }
        if (ctx->pc != 0x1EDC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC34u; }
        if (ctx->pc != 0x1EDC34u) { return; }
    }
    ctx->pc = 0x1EDC34u;
label_1edc34:
    // 0x1edc34: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x1edc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x1edc38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1edc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1edc3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1edc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1edc40: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1edc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1edc44: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1edc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1edc48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edc48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edc4c: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x1edc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1edc50: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1edc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1edc54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1edc54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1edc58: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x1edc58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1edc5c: 0x46140b01  sub.s       $f12, $f1, $f20
    ctx->pc = 0x1edc5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1edc60: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1EDC60u;
    SET_GPR_U32(ctx, 31, 0x1EDC68u);
    ctx->pc = 0x1EDC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC60u;
            // 0x1edc64: 0x46150341  sub.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC68u; }
        if (ctx->pc != 0x1EDC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC68u; }
        if (ctx->pc != 0x1EDC68u) { return; }
    }
    ctx->pc = 0x1EDC68u;
label_1edc68:
    // 0x1edc68: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EDC68u;
    SET_GPR_U32(ctx, 31, 0x1EDC70u);
    ctx->pc = 0x1EDC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC68u;
            // 0x1edc6c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC70u; }
        if (ctx->pc != 0x1EDC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC70u; }
        if (ctx->pc != 0x1EDC70u) { return; }
    }
    ctx->pc = 0x1EDC70u;
label_1edc70:
    // 0x1edc70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1edc70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edc74:
    // 0x1edc74: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1EDC74u;
    {
        const bool branch_taken_0x1edc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edc74) {
            ctx->pc = 0x1EDD60u;
            goto label_1edd60;
        }
    }
    ctx->pc = 0x1EDC7Cu;
label_1edc7c:
    // 0x1edc7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1edc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc80: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1edc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1edc84: 0x27a70074  addiu       $a3, $sp, 0x74
    ctx->pc = 0x1edc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1edc88: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EDC88u;
    SET_GPR_U32(ctx, 31, 0x1EDC90u);
    ctx->pc = 0x1EDC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC88u;
            // 0x1edc8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC90u; }
        if (ctx->pc != 0x1EDC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC90u; }
        if (ctx->pc != 0x1EDC90u) { return; }
    }
    ctx->pc = 0x1EDC90u;
label_1edc90:
    // 0x1edc90: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x1edc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x1edc94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDC94u;
    {
        const bool branch_taken_0x1edc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC94u;
            // 0x1edc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc94) {
            ctx->pc = 0x1EDCA4u;
            goto label_1edca4;
        }
    }
    ctx->pc = 0x1EDC9Cu;
    // 0x1edc9c: 0xc07b218  jal         func_1EC860
    ctx->pc = 0x1EDC9Cu;
    SET_GPR_U32(ctx, 31, 0x1EDCA4u);
    ctx->pc = 0x1EDCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC9Cu;
            // 0x1edca0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC860u;
    if (runtime->hasFunction(0x1EC860u)) {
        auto targetFn = runtime->lookupFunction(0x1EC860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDCA4u; }
        if (ctx->pc != 0x1EDCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawGlid__11CDngFreeMapF9mgRect_f__0x1ec860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDCA4u; }
        if (ctx->pc != 0x1EDCA4u) { return; }
    }
    ctx->pc = 0x1EDCA4u;
label_1edca4:
    // 0x1edca4: 0x0  nop
    ctx->pc = 0x1edca4u;
    // NOP
    // 0x1edca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edcac: 0xc07af90  jal         func_1EBE40
    ctx->pc = 0x1EDCACu;
    SET_GPR_U32(ctx, 31, 0x1EDCB4u);
    ctx->pc = 0x1EDCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDCACu;
            // 0x1edcb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE40u;
    if (runtime->hasFunction(0x1EBE40u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDCB4u; }
        if (ctx->pc != 0x1EDCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawGlidCheck__11CDngFreeMapFP9GLID_INFO_0x1ebe40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDCB4u; }
        if (ctx->pc != 0x1EDCB4u) { return; }
    }
    ctx->pc = 0x1EDCB4u;
label_1edcb4:
    // 0x1edcb4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x1edcb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1edcb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1edcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edcbc: 0x14670018  bne         $v1, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EDCBCu;
    {
        const bool branch_taken_0x1edcbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1EDCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDCBCu;
            // 0x1edcc0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edcbc) {
            ctx->pc = 0x1EDD20u;
            goto label_1edd20;
        }
    }
    ctx->pc = 0x1EDCC4u;
    // 0x1edcc4: 0x8242001c  lb          $v0, 0x1C($s2)
    ctx->pc = 0x1edcc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1edcc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1edcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1edccc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1edcccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1edcd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EDCD0u;
    {
        const bool branch_taken_0x1edcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edcd0) {
            ctx->pc = 0x1EDD00u;
            goto label_1edd00;
        }
    }
    ctx->pc = 0x1EDCD8u;
    // 0x1edcd8: 0x862300c8  lh          $v1, 0xC8($s1)
    ctx->pc = 0x1edcd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1edcdc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1edcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1edce0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1edce0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1edce4: 0x0  nop
    ctx->pc = 0x1edce4u;
    // NOP
    // 0x1edce8: 0x0  nop
    ctx->pc = 0x1edce8u;
    // NOP
    // 0x1edcec: 0x1010  mfhi        $v0
    ctx->pc = 0x1edcecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1edcf0: 0x2841000e  slti        $at, $v0, 0xE
    ctx->pc = 0x1edcf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1edcf4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EDCF4u;
    {
        const bool branch_taken_0x1edcf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDCF4u;
            // 0x1edcf8: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edcf4) {
            ctx->pc = 0x1EDD00u;
            goto label_1edd00;
        }
    }
    ctx->pc = 0x1EDCFCu;
    // 0x1edcfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1edcfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1edd00:
    // 0x1edd00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd04: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1edd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1edd08: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x1edd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1edd0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1edd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd10: 0xc07afdc  jal         func_1EBF70
    ctx->pc = 0x1EDD10u;
    SET_GPR_U32(ctx, 31, 0x1EDD18u);
    ctx->pc = 0x1EDD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD10u;
            // 0x1edd14: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF70u;
    if (runtime->hasFunction(0x1EBF70u)) {
        auto targetFn = runtime->lookupFunction(0x1EBF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD18u; }
        if (ctx->pc != 0x1EDD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawRoomOne__11CDngFreeMapF9mgRect_f_P16DNGMAP_ROOM_INFOUiif_0x1ebf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD18u; }
        if (ctx->pc != 0x1EDD18u) { return; }
    }
    ctx->pc = 0x1EDD18u;
label_1edd18:
    // 0x1edd18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EDD18u;
    {
        const bool branch_taken_0x1edd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd18) {
            ctx->pc = 0x1EDD58u;
            goto label_1edd58;
        }
    }
    ctx->pc = 0x1EDD20u;
label_1edd20:
    // 0x1edd20: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EDD20u;
    {
        const bool branch_taken_0x1edd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD20u;
            // 0x1edd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd20) {
            ctx->pc = 0x1EDD58u;
            goto label_1edd58;
        }
    }
    ctx->pc = 0x1EDD28u;
    // 0x1edd28: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1edd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1edd2c: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x1edd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1edd30: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1edd30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd34: 0xc07ac48  jal         func_1EB120
    ctx->pc = 0x1EDD34u;
    SET_GPR_U32(ctx, 31, 0x1EDD3Cu);
    ctx->pc = 0x1EDD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD34u;
            // 0x1edd38: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB120u;
    if (runtime->hasFunction(0x1EB120u)) {
        auto targetFn = runtime->lookupFunction(0x1EB120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD3Cu; }
        if (ctx->pc != 0x1EDD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawRoot__11CDngFreeMapF9mgRect_f_P16DNGMAP_ROOT_INFOiUii_0x1eb120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD3Cu; }
        if (ctx->pc != 0x1EDD3Cu) { return; }
    }
    ctx->pc = 0x1EDD3Cu;
label_1edd3c:
    // 0x1edd3c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1edd3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd44: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1edd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1edd48: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x1edd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1edd4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1edd4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd50: 0xc07ac48  jal         func_1EB120
    ctx->pc = 0x1EDD50u;
    SET_GPR_U32(ctx, 31, 0x1EDD58u);
    ctx->pc = 0x1EDD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD50u;
            // 0x1edd54: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB120u;
    if (runtime->hasFunction(0x1EB120u)) {
        auto targetFn = runtime->lookupFunction(0x1EB120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD58u; }
        if (ctx->pc != 0x1EDD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawRoot__11CDngFreeMapF9mgRect_f_P16DNGMAP_ROOT_INFOiUii_0x1eb120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD58u; }
        if (ctx->pc != 0x1EDD58u) { return; }
    }
    ctx->pc = 0x1EDD58u;
label_1edd58:
    // 0x1edd58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1edd58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1edd5c: 0x26520070  addiu       $s2, $s2, 0x70
    ctx->pc = 0x1edd5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1edd60:
    // 0x1edd60: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1edd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1edd64: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1edd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1edd68: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x1edd68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1edd6c: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1EDD6Cu;
    {
        const bool branch_taken_0x1edd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD6Cu;
            // 0x1edd70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd6c) {
            ctx->pc = 0x1EDC7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1edc7c;
        }
    }
    ctx->pc = 0x1EDD74u;
    // 0x1edd74: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1edd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1edd78: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1edd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1edd7c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1edd7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1edd80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1edd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1edd84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1edd84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1edd88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1edd88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edd8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1edd8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edd90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1edd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edd94: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD94u;
            // 0x1edd98: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDD9Cu;
}
