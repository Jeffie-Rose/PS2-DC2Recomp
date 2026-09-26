#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPosFormValueSetCharaRobo__FP9ROBO_DATAi
// Address: 0x24a550 - 0x24a9e8
void MenuPosFormValueSetCharaRobo__FP9ROBO_DATAi_0x24a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPosFormValueSetCharaRobo__FP9ROBO_DATAi_0x24a550");
#endif

    switch (ctx->pc) {
        case 0x24a5a4u: goto label_24a5a4;
        case 0x24a5b4u: goto label_24a5b4;
        case 0x24a5d0u: goto label_24a5d0;
        case 0x24a5e4u: goto label_24a5e4;
        case 0x24a5f4u: goto label_24a5f4;
        case 0x24a614u: goto label_24a614;
        case 0x24a65cu: goto label_24a65c;
        case 0x24a670u: goto label_24a670;
        case 0x24a678u: goto label_24a678;
        case 0x24a68cu: goto label_24a68c;
        case 0x24a698u: goto label_24a698;
        case 0x24a6acu: goto label_24a6ac;
        case 0x24a6c0u: goto label_24a6c0;
        case 0x24a6d0u: goto label_24a6d0;
        case 0x24a6dcu: goto label_24a6dc;
        case 0x24a6e4u: goto label_24a6e4;
        case 0x24a6f8u: goto label_24a6f8;
        case 0x24a70cu: goto label_24a70c;
        case 0x24a720u: goto label_24a720;
        case 0x24a730u: goto label_24a730;
        case 0x24a73cu: goto label_24a73c;
        case 0x24a748u: goto label_24a748;
        case 0x24a818u: goto label_24a818;
        case 0x24a82cu: goto label_24a82c;
        case 0x24a83cu: goto label_24a83c;
        case 0x24a854u: goto label_24a854;
        case 0x24a874u: goto label_24a874;
        case 0x24a8acu: goto label_24a8ac;
        case 0x24a8b8u: goto label_24a8b8;
        case 0x24a964u: goto label_24a964;
        case 0x24a9a4u: goto label_24a9a4;
        case 0x24a9b8u: goto label_24a9b8;
        default: break;
    }

    ctx->pc = 0x24a550u;

    // 0x24a550: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24a554: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24a554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24a558: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x24a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x24a55c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x24a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x24a560: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x24a560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x24a564: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x24a564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x24a568: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x24a56c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24a56cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a570: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24a570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24a574: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24a574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24a578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24a578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24a57c: 0x1280010e  beqz        $s4, . + 4 + (0x10E << 2)
    ctx->pc = 0x24A57Cu;
    {
        const bool branch_taken_0x24a57c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A57Cu;
            // 0x24a580: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a57c) {
            ctx->pc = 0x24A9B8u;
            goto label_24a9b8;
        }
    }
    ctx->pc = 0x24A584u;
    // 0x24a584: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a588: 0x8c72018c  lw          $s2, 0x18C($v1)
    ctx->pc = 0x24a588u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x24a58c: 0x1240010a  beqz        $s2, . + 4 + (0x10A << 2)
    ctx->pc = 0x24A58Cu;
    {
        const bool branch_taken_0x24a58c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a58c) {
            ctx->pc = 0x24A9B8u;
            goto label_24a9b8;
        }
    }
    ctx->pc = 0x24A594u;
    // 0x24a594: 0xc78c9750  lwc1        $f12, -0x68B0($gp)
    ctx->pc = 0x24a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a598: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x24a598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a59c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x24A59Cu;
    SET_GPR_U32(ctx, 31, 0x24A5A4u);
    ctx->pc = 0x24A5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A59Cu;
            // 0x24a5a0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5A4u; }
        if (ctx->pc != 0x24A5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5A4u; }
        if (ctx->pc != 0x24A5A4u) { return; }
    }
    ctx->pc = 0x24A5A4u;
label_24a5a4:
    // 0x24a5a4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x24a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x24a5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24a5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a5ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24A5ACu;
    SET_GPR_U32(ctx, 31, 0x24A5B4u);
    ctx->pc = 0x24A5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A5ACu;
            // 0x24a5b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5B4u; }
        if (ctx->pc != 0x24A5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5B4u; }
        if (ctx->pc != 0x24A5B4u) { return; }
    }
    ctx->pc = 0x24A5B4u;
label_24a5b4:
    // 0x24a5b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a5b8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24a5b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5c0: 0x24a5acf0  addiu       $a1, $a1, -0x5310
    ctx->pc = 0x24a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946032));
    // 0x24a5c4: 0x26960030  addiu       $s6, $s4, 0x30
    ctx->pc = 0x24a5c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x24a5c8: 0xc089664  jal         func_225990
    ctx->pc = 0x24A5C8u;
    SET_GPR_U32(ctx, 31, 0x24A5D0u);
    ctx->pc = 0x24A5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A5C8u;
            // 0x24a5cc: 0x26950020  addiu       $s5, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5D0u; }
        if (ctx->pc != 0x24A5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5D0u; }
        if (ctx->pc != 0x24A5D0u) { return; }
    }
    ctx->pc = 0x24A5D0u;
label_24a5d0:
    // 0x24a5d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24a5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5d4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A5D4u;
    {
        const bool branch_taken_0x24a5d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a5d4) {
            ctx->pc = 0x24A604u;
            goto label_24a604;
        }
    }
    ctx->pc = 0x24A5DCu;
    // 0x24a5dc: 0xc065b6c  jal         func_196DB0
    ctx->pc = 0x24A5DCu;
    SET_GPR_U32(ctx, 31, 0x24A5E4u);
    ctx->pc = 0x24A5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A5DCu;
            // 0x24a5e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DB0u;
    if (runtime->hasFunction(0x196DB0u)) {
        auto targetFn = runtime->lookupFunction(0x196DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5E4u; }
        if (ctx->pc != 0x24A5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonGageRate__FP11COMMON_GAGE_0x196db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5E4u; }
        if (ctx->pc != 0x24A5E4u) { return; }
    }
    ctx->pc = 0x24A5E4u;
label_24a5e4:
    // 0x24a5e4: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x24a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x24a5e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24a5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a5ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24A5ECu;
    SET_GPR_U32(ctx, 31, 0x24A5F4u);
    ctx->pc = 0x24A5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A5ECu;
            // 0x24a5f0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5F4u; }
        if (ctx->pc != 0x24A5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5F4u; }
        if (ctx->pc != 0x24A5F4u) { return; }
    }
    ctx->pc = 0x24A5F4u;
label_24a5f4:
    // 0x24a5f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a5f8: 0x0  nop
    ctx->pc = 0x24a5f8u;
    // NOP
    // 0x24a5fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24a5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24a600: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x24a600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_24a604:
    // 0x24a604: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a60c: 0xc089664  jal         func_225990
    ctx->pc = 0x24A60Cu;
    SET_GPR_U32(ctx, 31, 0x24A614u);
    ctx->pc = 0x24A610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A60Cu;
            // 0x24a610: 0x24a5b978  addiu       $a1, $a1, -0x4688 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A614u; }
        if (ctx->pc != 0x24A614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A614u; }
        if (ctx->pc != 0x24A614u) { return; }
    }
    ctx->pc = 0x24A614u;
label_24a614:
    // 0x24a614: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24A614u;
    {
        const bool branch_taken_0x24a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a614) {
            ctx->pc = 0x24A654u;
            goto label_24a654;
        }
    }
    ctx->pc = 0x24A61Cu;
    // 0x24a61c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A61Cu;
    {
        const bool branch_taken_0x24a61c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a61c) {
            ctx->pc = 0x24A654u;
            goto label_24a654;
        }
    }
    ctx->pc = 0x24A624u;
    // 0x24a624: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x24a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a628: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x24a628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x24a62c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x24a62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a630: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24a630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a634: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x24a634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x24a638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a63c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x24a63cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24a640: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x24a640u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x24a644: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x24a644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x24a648: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x24a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a64c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24a64cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a650: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x24a650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_24a654:
    // 0x24a654: 0xc0945c8  jal         func_251720
    ctx->pc = 0x24A654u;
    SET_GPR_U32(ctx, 31, 0x24A65Cu);
    ctx->pc = 0x24A658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A654u;
            // 0x24a658: 0xc6ac0004  lwc1        $f12, 0x4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A65Cu; }
        if (ctx->pc != 0x24A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A65Cu; }
        if (ctx->pc != 0x24A65Cu) { return; }
    }
    ctx->pc = 0x24A65Cu;
label_24a65c:
    // 0x24a65c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a660: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24a660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a668: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A668u;
    SET_GPR_U32(ctx, 31, 0x24A670u);
    ctx->pc = 0x24A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A668u;
            // 0x24a66c: 0x24a5acf8  addiu       $a1, $a1, -0x5308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A670u; }
        if (ctx->pc != 0x24A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A670u; }
        if (ctx->pc != 0x24A670u) { return; }
    }
    ctx->pc = 0x24A670u;
label_24a670:
    // 0x24a670: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24A670u;
    SET_GPR_U32(ctx, 31, 0x24A678u);
    ctx->pc = 0x24A674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A670u;
            // 0x24a674: 0xc6ac0000  lwc1        $f12, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A678u; }
        if (ctx->pc != 0x24A678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A678u; }
        if (ctx->pc != 0x24A678u) { return; }
    }
    ctx->pc = 0x24A678u;
label_24a678:
    // 0x24a678: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a67c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24a67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a684: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A684u;
    SET_GPR_U32(ctx, 31, 0x24A68Cu);
    ctx->pc = 0x24A688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A684u;
            // 0x24a688: 0x24a5ad00  addiu       $a1, $a1, -0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A68Cu; }
        if (ctx->pc != 0x24A68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A68Cu; }
        if (ctx->pc != 0x24A68Cu) { return; }
    }
    ctx->pc = 0x24A68Cu;
label_24a68c:
    // 0x24a68c: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x24a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x24a690: 0xc08ebf8  jal         func_23AFE0
    ctx->pc = 0x24A690u;
    SET_GPR_U32(ctx, 31, 0x24A698u);
    ctx->pc = 0x24A694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A690u;
            // 0x24a694: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AFE0u;
    if (runtime->hasFunction(0x23AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x23AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A698u; }
        if (ctx->pc != 0x24A698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowRoboUseCapacity__FPi_0x23afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A698u; }
        if (ctx->pc != 0x24A698u) { return; }
    }
    ctx->pc = 0x24A698u;
label_24a698:
    // 0x24a698: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a69c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24a69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6a4: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A6A4u;
    SET_GPR_U32(ctx, 31, 0x24A6ACu);
    ctx->pc = 0x24A6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6A4u;
            // 0x24a6a8: 0x24a5b980  addiu       $a1, $a1, -0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6ACu; }
        if (ctx->pc != 0x24A6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6ACu; }
        if (ctx->pc != 0x24A6ACu) { return; }
    }
    ctx->pc = 0x24A6ACu;
label_24a6ac:
    // 0x24a6ac: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x24a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x24a6b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a6b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6b8: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A6B8u;
    SET_GPR_U32(ctx, 31, 0x24A6C0u);
    ctx->pc = 0x24A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6B8u;
            // 0x24a6bc: 0x24a5b988  addiu       $a1, $a1, -0x4678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6C0u; }
        if (ctx->pc != 0x24A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6C0u; }
        if (ctx->pc != 0x24A6C0u) { return; }
    }
    ctx->pc = 0x24A6C0u;
label_24a6c0:
    // 0x24a6c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24a6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24a6c4: 0x8c24d8c8  lw          $a0, -0x2738($at)
    ctx->pc = 0x24a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x24a6c8: 0xc066a18  jal         func_19A860
    ctx->pc = 0x24A6C8u;
    SET_GPR_U32(ctx, 31, 0x24A6D0u);
    ctx->pc = 0x24A6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6C8u;
            // 0x24a6cc: 0x849000d0  lh          $s0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A860u;
    if (runtime->hasFunction(0x19A860u)) {
        auto targetFn = runtime->lookupFunction(0x19A860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6D0u; }
        if (ctx->pc != 0x24A6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefenceVol__9ROBO_DATAFv_0x19a860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6D0u; }
        if (ctx->pc != 0x24A6D0u) { return; }
    }
    ctx->pc = 0x24A6D0u;
label_24a6d0:
    // 0x24a6d0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x24a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x24a6d4: 0xc06717c  jal         func_19C5F0
    ctx->pc = 0x24A6D4u;
    SET_GPR_U32(ctx, 31, 0x24A6DCu);
    ctx->pc = 0x24A6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6D4u;
            // 0x24a6d8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C5F0u;
    if (runtime->hasFunction(0x19C5F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6DCu; }
        if (ctx->pc != 0x24A6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRobotCore__16CUserDataManagerFv_0x19c5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6DCu; }
        if (ctx->pc != 0x24A6DCu) { return; }
    }
    ctx->pc = 0x24A6DCu;
label_24a6dc:
    // 0x24a6dc: 0xc066a00  jal         func_19A800
    ctx->pc = 0x24A6DCu;
    SET_GPR_U32(ctx, 31, 0x24A6E4u);
    ctx->pc = 0x24A6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6DCu;
            // 0x24a6e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A800u;
    if (runtime->hasFunction(0x19A800u)) {
        auto targetFn = runtime->lookupFunction(0x19A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6E4u; }
        if (ctx->pc != 0x24A6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShiledKitLimmit__Fi_0x19a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6E4u; }
        if (ctx->pc != 0x24A6E4u) { return; }
    }
    ctx->pc = 0x24A6E4u;
label_24a6e4:
    // 0x24a6e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a6e8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x24a6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24a6ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6f0: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A6F0u;
    SET_GPR_U32(ctx, 31, 0x24A6F8u);
    ctx->pc = 0x24A6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A6F0u;
            // 0x24a6f4: 0x24a5b990  addiu       $a1, $a1, -0x4670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6F8u; }
        if (ctx->pc != 0x24A6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A6F8u; }
        if (ctx->pc != 0x24A6F8u) { return; }
    }
    ctx->pc = 0x24A6F8u;
label_24a6f8:
    // 0x24a6f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a6fc: 0x2b03023  subu        $a2, $s5, $s0
    ctx->pc = 0x24a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x24a700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a704: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A704u;
    SET_GPR_U32(ctx, 31, 0x24A70Cu);
    ctx->pc = 0x24A708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A704u;
            // 0x24a708: 0x24a5b998  addiu       $a1, $a1, -0x4668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A70Cu; }
        if (ctx->pc != 0x24A70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A70Cu; }
        if (ctx->pc != 0x24A70Cu) { return; }
    }
    ctx->pc = 0x24A70Cu;
label_24a70c:
    // 0x24a70c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a710: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24a710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a718: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A718u;
    SET_GPR_U32(ctx, 31, 0x24A720u);
    ctx->pc = 0x24A71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A718u;
            // 0x24a71c: 0x24a5b970  addiu       $a1, $a1, -0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A720u; }
        if (ctx->pc != 0x24A720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A720u; }
        if (ctx->pc != 0x24A720u) { return; }
    }
    ctx->pc = 0x24A720u;
label_24a720:
    // 0x24a720: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a728: 0xc089664  jal         func_225990
    ctx->pc = 0x24A728u;
    SET_GPR_U32(ctx, 31, 0x24A730u);
    ctx->pc = 0x24A72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A728u;
            // 0x24a72c: 0x24a5b0f0  addiu       $a1, $a1, -0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A730u; }
        if (ctx->pc != 0x24A730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A730u; }
        if (ctx->pc != 0x24A730u) { return; }
    }
    ctx->pc = 0x24A730u;
label_24a730:
    // 0x24a730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a734: 0xc092798  jal         func_249E60
    ctx->pc = 0x24A734u;
    SET_GPR_U32(ctx, 31, 0x24A73Cu);
    ctx->pc = 0x24A738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A734u;
            // 0x24a738: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249E60u;
    if (runtime->hasFunction(0x249E60u)) {
        auto targetFn = runtime->lookupFunction(0x249E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A73Cu; }
        if (ctx->pc != 0x24A73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_item_infoview_set__FP18MENUFORMPARTS_TYPEP13CGameDataUsed_0x249e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A73Cu; }
        if (ctx->pc != 0x24A73Cu) { return; }
    }
    ctx->pc = 0x24A73Cu;
label_24a73c:
    // 0x24a73c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24a73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a740: 0xc066030  jal         func_1980C0
    ctx->pc = 0x24A740u;
    SET_GPR_U32(ctx, 31, 0x24A748u);
    ctx->pc = 0x24A744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A740u;
            // 0x24a744: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1980C0u;
    if (runtime->hasFunction(0x1980C0u)) {
        auto targetFn = runtime->lookupFunction(0x1980C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A748u; }
        if (ctx->pc != 0x24A748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWHp__13CGameDataUsedFPi_0x1980c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A748u; }
        if (ctx->pc != 0x24A748u) { return; }
    }
    ctx->pc = 0x24A748u;
label_24a748:
    // 0x24a748: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x24a748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x24a74c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x24a74cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x24a750: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24a750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24a754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a758: 0x0  nop
    ctx->pc = 0x24a758u;
    // NOP
    // 0x24a75c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x24a75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a760: 0x0  nop
    ctx->pc = 0x24a760u;
    // NOP
    // 0x24a764: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x24A764u;
    {
        const bool branch_taken_0x24a764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a764) {
            ctx->pc = 0x24A78Cu;
            goto label_24a78c;
        }
    }
    ctx->pc = 0x24A76Cu;
    // 0x24a76c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a76cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a770: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x24a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a774: 0x579823  subu        $s3, $v0, $s7
    ctx->pc = 0x24a774u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x24a778: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x24a778u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a77c: 0x0  nop
    ctx->pc = 0x24a77cu;
    // NOP
    // 0x24a780: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24A780u;
    {
        const bool branch_taken_0x24a780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A780u;
            // 0x24a784: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a780) {
            ctx->pc = 0x24A78Cu;
            goto label_24a78c;
        }
    }
    ctx->pc = 0x24A788u;
    // 0x24a788: 0x26f30080  addiu       $s3, $s7, 0x80
    ctx->pc = 0x24a788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 128));
label_24a78c:
    // 0x24a78c: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a790: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a798: 0x8c4202a0  lw          $v0, 0x2A0($v0)
    ctx->pc = 0x24a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
    // 0x24a79c: 0xa0530007  sb          $s3, 0x7($v0)
    ctx->pc = 0x24a79cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a7a0: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x24a7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7a4: 0xa0510009  sb          $s1, 0x9($v0)
    ctx->pc = 0x24a7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7a8: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a7ac: 0x8c4202a4  lw          $v0, 0x2A4($v0)
    ctx->pc = 0x24a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
    // 0x24a7b0: 0xa0530007  sb          $s3, 0x7($v0)
    ctx->pc = 0x24a7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a7b4: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x24a7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7b8: 0xa0510009  sb          $s1, 0x9($v0)
    ctx->pc = 0x24a7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7bc: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a7c0: 0x8c4202a8  lw          $v0, 0x2A8($v0)
    ctx->pc = 0x24a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x24a7c4: 0xa0530007  sb          $s3, 0x7($v0)
    ctx->pc = 0x24a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a7c8: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x24a7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7cc: 0xa0510009  sb          $s1, 0x9($v0)
    ctx->pc = 0x24a7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7d0: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a7d4: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x24a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x24a7d8: 0xa0530007  sb          $s3, 0x7($v0)
    ctx->pc = 0x24a7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a7dc: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x24a7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7e0: 0xa0510009  sb          $s1, 0x9($v0)
    ctx->pc = 0x24a7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7e4: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a7e8: 0x8c4202b0  lw          $v0, 0x2B0($v0)
    ctx->pc = 0x24a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 688)));
    // 0x24a7ec: 0xa0530007  sb          $s3, 0x7($v0)
    ctx->pc = 0x24a7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a7f0: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x24a7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7f4: 0xa0510009  sb          $s1, 0x9($v0)
    ctx->pc = 0x24a7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a7f8: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a7fc: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x24a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x24a800: 0xa0530007  sb          $s3, 0x7($v0)
    ctx->pc = 0x24a800u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a804: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x24a804u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a808: 0xa0510009  sb          $s1, 0x9($v0)
    ctx->pc = 0x24a808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x24a80c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x24a80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24a810: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A810u;
    SET_GPR_U32(ctx, 31, 0x24A818u);
    ctx->pc = 0x24A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A810u;
            // 0x24a814: 0x24a5b0d8  addiu       $a1, $a1, -0x4F28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A818u; }
        if (ctx->pc != 0x24A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A818u; }
        if (ctx->pc != 0x24A818u) { return; }
    }
    ctx->pc = 0x24A818u;
label_24a818:
    // 0x24a818: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x24a818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x24a81c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a824: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A824u;
    SET_GPR_U32(ctx, 31, 0x24A82Cu);
    ctx->pc = 0x24A828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A824u;
            // 0x24a828: 0x24a5b0e8  addiu       $a1, $a1, -0x4F18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A82Cu; }
        if (ctx->pc != 0x24A82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A82Cu; }
        if (ctx->pc != 0x24A82Cu) { return; }
    }
    ctx->pc = 0x24A82Cu;
label_24a82c:
    // 0x24a82c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a834: 0xc089664  jal         func_225990
    ctx->pc = 0x24A834u;
    SET_GPR_U32(ctx, 31, 0x24A83Cu);
    ctx->pc = 0x24A838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A834u;
            // 0x24a838: 0x24a5b9a0  addiu       $a1, $a1, -0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A83Cu; }
        if (ctx->pc != 0x24A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A83Cu; }
        if (ctx->pc != 0x24A83Cu) { return; }
    }
    ctx->pc = 0x24A83Cu;
label_24a83c:
    // 0x24a83c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24a83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a840: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A840u;
    {
        const bool branch_taken_0x24a840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A840u;
            // 0x24a844: 0x3c0242d8  lui         $v0, 0x42D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a840) {
            ctx->pc = 0x24A864u;
            goto label_24a864;
        }
    }
    ctx->pc = 0x24A848u;
    // 0x24a848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a84c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24A84Cu;
    SET_GPR_U32(ctx, 31, 0x24A854u);
    ctx->pc = 0x24A850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A84Cu;
            // 0x24a850: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A854u; }
        if (ctx->pc != 0x24A854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A854u; }
        if (ctx->pc != 0x24A854u) { return; }
    }
    ctx->pc = 0x24A854u;
label_24a854:
    // 0x24a854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a858: 0x0  nop
    ctx->pc = 0x24a858u;
    // NOP
    // 0x24a85c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24a85cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24a860: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x24a860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_24a864:
    // 0x24a864: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a86c: 0xc089664  jal         func_225990
    ctx->pc = 0x24A86Cu;
    SET_GPR_U32(ctx, 31, 0x24A874u);
    ctx->pc = 0x24A870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A86Cu;
            // 0x24a870: 0x24a5b0f8  addiu       $a1, $a1, -0x4F08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A874u; }
        if (ctx->pc != 0x24A874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A874u; }
        if (ctx->pc != 0x24A874u) { return; }
    }
    ctx->pc = 0x24A874u;
label_24a874:
    // 0x24a874: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A874u;
    {
        const bool branch_taken_0x24a874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a874) {
            ctx->pc = 0x24A89Cu;
            goto label_24a89c;
        }
    }
    ctx->pc = 0x24A87Cu;
    // 0x24a87c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a880: 0x0  nop
    ctx->pc = 0x24a880u;
    // NOP
    // 0x24a884: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x24a884u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a888: 0x0  nop
    ctx->pc = 0x24a888u;
    // NOP
    // 0x24a88c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24A88Cu;
    {
        const bool branch_taken_0x24a88c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A88Cu;
            // 0x24a890: 0xa0400005  sb          $zero, 0x5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a88c) {
            ctx->pc = 0x24A89Cu;
            goto label_24a89c;
        }
    }
    ctx->pc = 0x24A894u;
    // 0x24a894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a898: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x24a898u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
label_24a89c:
    // 0x24a89c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a8a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8a4: 0xc089664  jal         func_225990
    ctx->pc = 0x24A8A4u;
    SET_GPR_U32(ctx, 31, 0x24A8ACu);
    ctx->pc = 0x24A8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8A4u;
            // 0x24a8a8: 0x24a5b9a8  addiu       $a1, $a1, -0x4658 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8ACu; }
        if (ctx->pc != 0x24A8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8ACu; }
        if (ctx->pc != 0x24A8ACu) { return; }
    }
    ctx->pc = 0x24A8ACu;
label_24a8ac:
    // 0x24a8ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8b0: 0xc092798  jal         func_249E60
    ctx->pc = 0x24A8B0u;
    SET_GPR_U32(ctx, 31, 0x24A8B8u);
    ctx->pc = 0x24A8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8B0u;
            // 0x24a8b4: 0x26c500d8  addiu       $a1, $s6, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249E60u;
    if (runtime->hasFunction(0x249E60u)) {
        auto targetFn = runtime->lookupFunction(0x249E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8B8u; }
        if (ctx->pc != 0x24A8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_item_infoview_set__FP18MENUFORMPARTS_TYPEP13CGameDataUsed_0x249e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A8B8u; }
        if (ctx->pc != 0x24A8B8u) { return; }
    }
    ctx->pc = 0x24A8B8u;
label_24a8b8:
    // 0x24a8b8: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a8bc: 0x244302f0  addiu       $v1, $v0, 0x2F0
    ctx->pc = 0x24a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x24a8c0: 0x8c4202f0  lw          $v0, 0x2F0($v0)
    ctx->pc = 0x24a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x24a8c4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x24A8C4u;
    {
        const bool branch_taken_0x24a8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a8c4) {
            ctx->pc = 0x24A99Cu;
            goto label_24a99c;
        }
    }
    ctx->pc = 0x24A8CCu;
    // 0x24a8cc: 0x83829758  lb          $v0, -0x68A8($gp)
    ctx->pc = 0x24a8ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940504)));
    // 0x24a8d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A8D0u;
    {
        const bool branch_taken_0x24a8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A8D0u;
            // 0x24a8d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8d0) {
            ctx->pc = 0x24A8E0u;
            goto label_24a8e0;
        }
    }
    ctx->pc = 0x24A8D8u;
    // 0x24a8d8: 0xaf809754  sw          $zero, -0x68AC($gp)
    ctx->pc = 0x24a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940500), GPR_U32(ctx, 0));
    // 0x24a8dc: 0xa3829758  sb          $v0, -0x68A8($gp)
    ctx->pc = 0x24a8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940504), (uint8_t)GPR_U32(ctx, 2));
label_24a8e0:
    // 0x24a8e0: 0xc7829754  lwc1        $f2, -0x68AC($gp)
    ctx->pc = 0x24a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a8e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24a8e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24a8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a8ec: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x24a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
    // 0x24a8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a8f4: 0x0  nop
    ctx->pc = 0x24a8f4u;
    // NOP
    // 0x24a8f8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x24a8f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24a8fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24a8fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a900: 0x0  nop
    ctx->pc = 0x24a900u;
    // NOP
    // 0x24a904: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24A904u;
    {
        const bool branch_taken_0x24a904 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A904u;
            // 0x24a908: 0xe7819754  swc1        $f1, -0x68AC($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940500), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a904) {
            ctx->pc = 0x24A910u;
            goto label_24a910;
        }
    }
    ctx->pc = 0x24A90Cu;
    // 0x24a90c: 0xaf809754  sw          $zero, -0x68AC($gp)
    ctx->pc = 0x24a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940500), GPR_U32(ctx, 0));
label_24a910:
    // 0x24a910: 0x8285001c  lb          $a1, 0x1C($s4)
    ctx->pc = 0x24a910u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x24a914: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x24a914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x24a918: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a91c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x24a91cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x24a920: 0xa0450005  sb          $a1, 0x5($v0)
    ctx->pc = 0x24a920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x24a924: 0x3c03c34a  lui         $v1, 0xC34A
    ctx->pc = 0x24a924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49994 << 16));
    // 0x24a928: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a92c: 0x8c4202f0  lw          $v0, 0x2F0($v0)
    ctx->pc = 0x24a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x24a930: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x24a930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x24a934: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a938: 0x8c4202f0  lw          $v0, 0x2F0($v0)
    ctx->pc = 0x24a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x24a93c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x24a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x24a940: 0x8282001d  lb          $v0, 0x1D($s4)
    ctx->pc = 0x24a940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 29)));
    // 0x24a944: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24A944u;
    {
        const bool branch_taken_0x24a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a944) {
            ctx->pc = 0x24A99Cu;
            goto label_24a99c;
        }
    }
    ctx->pc = 0x24A94Cu;
    // 0x24a94c: 0xc7809754  lwc1        $f0, -0x68AC($gp)
    ctx->pc = 0x24a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a950: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x24a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
    // 0x24a954: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x24a954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x24a958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24a958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a95c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x24A95Cu;
    SET_GPR_U32(ctx, 31, 0x24A964u);
    ctx->pc = 0x24A960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A95Cu;
            // 0x24a960: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A964u; }
        if (ctx->pc != 0x24A964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A964u; }
        if (ctx->pc != 0x24A964u) { return; }
    }
    ctx->pc = 0x24A964u;
label_24a964:
    // 0x24a964: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a968: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x24a968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x24a96c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24a96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a970: 0x0  nop
    ctx->pc = 0x24a970u;
    // NOP
    // 0x24a974: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24a974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24a978: 0x8c4202f0  lw          $v0, 0x2F0($v0)
    ctx->pc = 0x24a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x24a97c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x24a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24a980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24a984: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x24a984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x24a988: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a98c: 0x8c4202f0  lw          $v0, 0x2F0($v0)
    ctx->pc = 0x24a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x24a990: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x24a990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a994: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24a994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24a998: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x24a998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_24a99c:
    // 0x24a99c: 0xc0945c8  jal         func_251720
    ctx->pc = 0x24A99Cu;
    SET_GPR_U32(ctx, 31, 0x24A9A4u);
    ctx->pc = 0x24A9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A99Cu;
            // 0x24a9a0: 0xc68c002c  lwc1        $f12, 0x2C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A9A4u; }
        if (ctx->pc != 0x24A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A9A4u; }
        if (ctx->pc != 0x24A9A4u) { return; }
    }
    ctx->pc = 0x24A9A4u;
label_24a9a4:
    // 0x24a9a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a9a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9ac: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x24a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
    // 0x24a9b0: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A9B0u;
    SET_GPR_U32(ctx, 31, 0x24A9B8u);
    ctx->pc = 0x24A9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A9B0u;
            // 0x24a9b4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A9B8u; }
        if (ctx->pc != 0x24A9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A9B8u; }
        if (ctx->pc != 0x24A9B8u) { return; }
    }
    ctx->pc = 0x24A9B8u;
label_24a9b8:
    // 0x24a9b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24a9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24a9bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24a9c0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x24a9c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24a9c4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x24a9c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24a9c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x24a9c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a9cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x24a9ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a9d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24a9d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a9d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24a9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a9d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24a9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a9dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24a9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x24A9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A9E0u;
            // 0x24a9e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A9E8u;
}
