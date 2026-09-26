#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlayBGM__6CSceneFiif
// Address: 0x2a6110 - 0x2a6204
void PlayBGM__6CSceneFiif_0x2a6110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlayBGM__6CSceneFiif_0x2a6110");
#endif

    switch (ctx->pc) {
        case 0x2a6164u: goto label_2a6164;
        case 0x2a6180u: goto label_2a6180;
        case 0x2a61a0u: goto label_2a61a0;
        case 0x2a61b4u: goto label_2a61b4;
        case 0x2a61bcu: goto label_2a61bc;
        case 0x2a61dcu: goto label_2a61dc;
        default: break;
    }

    ctx->pc = 0x2a6110u;

    // 0x2a6110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a6110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a6114: 0x34039074  ori         $v1, $zero, 0x9074
    ctx->pc = 0x2a6114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36980);
    // 0x2a6118: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a6118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a611c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a6120: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a6120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a6124: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a6124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a6128: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a6128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a612c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a612cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a6130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a6134: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a6134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6138: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a6138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a613c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a613cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6140: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a6140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6144: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6144u;
    {
        const bool branch_taken_0x2a6144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6144u;
            // 0x2a6148: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6144) {
            ctx->pc = 0x2A615Cu;
            goto label_2a615c;
        }
    }
    ctx->pc = 0x2A614Cu;
    // 0x2a614c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a614cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6150: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a6150u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a6154: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A6154u;
    {
        const bool branch_taken_0x2a6154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6154u;
            // 0x2a6158: 0xac209074  sw          $zero, -0x6F8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6154) {
            ctx->pc = 0x2A61E4u;
            goto label_2a61e4;
        }
    }
    ctx->pc = 0x2A615Cu;
label_2a615c:
    // 0x2a615c: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A615Cu;
    SET_GPR_U32(ctx, 31, 0x2A6164u);
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6164u; }
        if (ctx->pc != 0x2A6164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6164u; }
        if (ctx->pc != 0x2A6164u) { return; }
    }
    ctx->pc = 0x2A6164u;
label_2a6164:
    // 0x2a6164: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a6164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6168: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2a6168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a616c: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A616Cu;
    {
        const bool branch_taken_0x2a616c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2a616c) {
            ctx->pc = 0x2A6180u;
            goto label_2a6180;
        }
    }
    ctx->pc = 0x2A6174u;
    // 0x2a6174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a6174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6178: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2A6178u;
    SET_GPR_U32(ctx, 31, 0x2A6180u);
    ctx->pc = 0x2A617Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6178u;
            // 0x2a617c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6180u; }
        if (ctx->pc != 0x2A6180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6180u; }
        if (ctx->pc != 0x2A6180u) { return; }
    }
    ctx->pc = 0x2A6180u;
label_2a6180:
    // 0x2a6180: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x2a6180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
    // 0x2a6184: 0xe6740014  swc1        $f20, 0x14($s3)
    ctx->pc = 0x2a6184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x2a6188: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a6188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a618c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A618Cu;
    {
        const bool branch_taken_0x2a618c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a618c) {
            ctx->pc = 0x2A61A4u;
            goto label_2a61a4;
        }
    }
    ctx->pc = 0x2A6194u;
    // 0x2a6194: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2a6194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a6198: 0xc063624  jal         func_18D890
    ctx->pc = 0x2A6198u;
    SET_GPR_U32(ctx, 31, 0x2A61A0u);
    ctx->pc = 0x2A619Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6198u;
            // 0x2a619c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61A0u; }
        if (ctx->pc != 0x2A61A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeDefVol__FUii_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61A0u; }
        if (ctx->pc != 0x2A61A0u) { return; }
    }
    ctx->pc = 0x2A61A0u;
label_2a61a0:
    // 0x2a61a0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2a61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_2a61a4:
    // 0x2a61a4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2a61a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a61a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a61a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a61ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A61ACu;
    SET_GPR_U32(ctx, 31, 0x2A61B4u);
    ctx->pc = 0x2A61B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A61ACu;
            // 0x2a61b0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61B4u; }
        if (ctx->pc != 0x2A61B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61B4u; }
        if (ctx->pc != 0x2A61B4u) { return; }
    }
    ctx->pc = 0x2A61B4u;
label_2a61b4:
    // 0x2a61b4: 0xc063c50  jal         func_18F140
    ctx->pc = 0x2A61B4u;
    SET_GPR_U32(ctx, 31, 0x2A61BCu);
    ctx->pc = 0x2A61B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A61B4u;
            // 0x2a61b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F140u;
    if (runtime->hasFunction(0x18F140u)) {
        auto targetFn = runtime->lookupFunction(0x18F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61BCu; }
        if (ctx->pc != 0x2A61BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndVolLimit__Fi_0x18f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61BCu; }
        if (ctx->pc != 0x2A61BCu) { return; }
    }
    ctx->pc = 0x2A61BCu;
label_2a61bc:
    // 0x2a61bc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A61BCu;
    {
        const bool branch_taken_0x2a61bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a61bc) {
            ctx->pc = 0x2A61C8u;
            goto label_2a61c8;
        }
    }
    ctx->pc = 0x2A61C4u;
    // 0x2a61c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a61c8:
    // 0x2a61c8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2a61c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a61cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a61ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a61d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a61d4: 0xc063820  jal         func_18E080
    ctx->pc = 0x2A61D4u;
    SET_GPR_U32(ctx, 31, 0x2A61DCu);
    ctx->pc = 0x2A61D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A61D4u;
            // 0x2a61d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61DCu; }
        if (ctx->pc != 0x2A61DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A61DCu; }
        if (ctx->pc != 0x2A61DCu) { return; }
    }
    ctx->pc = 0x2A61DCu;
label_2a61dc:
    // 0x2a61dc: 0xae710020  sw          $s1, 0x20($s3)
    ctx->pc = 0x2a61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 17));
    // 0x2a61e0: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x2a61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_2a61e4:
    // 0x2a61e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a61e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a61e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a61e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a61ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a61ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a61f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a61f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a61f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a61f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a61f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a61f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a61fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A61FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A61FCu;
            // 0x2a6200: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6204u;
}
