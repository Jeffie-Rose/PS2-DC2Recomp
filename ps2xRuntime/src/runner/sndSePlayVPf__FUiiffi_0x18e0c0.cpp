#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSePlayVPf__FUiiffi
// Address: 0x18e0c0 - 0x18e188
void sndSePlayVPf__FUiiffi_0x18e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSePlayVPf__FUiiffi_0x18e0c0");
#endif

    switch (ctx->pc) {
        case 0x18e0f8u: goto label_18e0f8;
        case 0x18e10cu: goto label_18e10c;
        case 0x18e12cu: goto label_18e12c;
        case 0x18e164u: goto label_18e164;
        default: break;
    }

    ctx->pc = 0x18e0c0u;

    // 0x18e0c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e0c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18e0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18e0c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18e0cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18e0d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18e0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18e0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18e0d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18e0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e0e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18e0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18e0e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18e0e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18e0e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18e0ec: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x18e0ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x18e0f0: 0xc063624  jal         func_18D890
    ctx->pc = 0x18E0F0u;
    SET_GPR_U32(ctx, 31, 0x18E0F8u);
    ctx->pc = 0x18E0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0F0u;
            // 0x18e0f4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0F8u; }
        if (ctx->pc != 0x18E0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeDefVol__FUii_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0F8u; }
        if (ctx->pc != 0x18E0F8u) { return; }
    }
    ctx->pc = 0x18E0F8u;
label_18e0f8:
    // 0x18e0f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e0fc: 0x0  nop
    ctx->pc = 0x18e0fcu;
    // NOP
    // 0x18e100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18e104: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18E104u;
    SET_GPR_U32(ctx, 31, 0x18E10Cu);
    ctx->pc = 0x18E108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E104u;
            // 0x18e108: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E10Cu; }
        if (ctx->pc != 0x18E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E10Cu; }
        if (ctx->pc != 0x18E10Cu) { return; }
    }
    ctx->pc = 0x18E10Cu;
label_18e10c:
    // 0x18e10c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e110: 0x2a010080  slti        $at, $s0, 0x80
    ctx->pc = 0x18e110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18e114: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E114u;
    {
        const bool branch_taken_0x18e114 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E114u;
            // 0x18e118: 0x3c024280  lui         $v0, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e114) {
            ctx->pc = 0x18E120u;
            goto label_18e120;
        }
    }
    ctx->pc = 0x18E11Cu;
    // 0x18e11c: 0x2410007f  addiu       $s0, $zero, 0x7F
    ctx->pc = 0x18e11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_18e120:
    // 0x18e120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e124: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18E124u;
    SET_GPR_U32(ctx, 31, 0x18E12Cu);
    ctx->pc = 0x18E128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E124u;
            // 0x18e128: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E12Cu; }
        if (ctx->pc != 0x18E12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E12Cu; }
        if (ctx->pc != 0x18E12Cu) { return; }
    }
    ctx->pc = 0x18E12Cu;
label_18e12c:
    // 0x18e12c: 0x24480040  addiu       $t0, $v0, 0x40
    ctx->pc = 0x18e12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18e130: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E130u;
    {
        const bool branch_taken_0x18e130 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x18E134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E130u;
            // 0x18e134: 0x29010080  slti        $at, $t0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e130) {
            ctx->pc = 0x18E140u;
            goto label_18e140;
        }
    }
    ctx->pc = 0x18E138u;
    // 0x18e138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e13c: 0x29010080  slti        $at, $t0, 0x80
    ctx->pc = 0x18e13cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)128) ? 1 : 0);
label_18e140:
    // 0x18e140: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E140u;
    {
        const bool branch_taken_0x18e140 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E140u;
            // 0x18e144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e140) {
            ctx->pc = 0x18E14Cu;
            goto label_18e14c;
        }
    }
    ctx->pc = 0x18E148u;
    // 0x18e148: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x18e148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_18e14c:
    // 0x18e14c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e150: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18e150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e154: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x18e154u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e158: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18e158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e15c: 0xc063968  jal         func_18E5A0
    ctx->pc = 0x18E15Cu;
    SET_GPR_U32(ctx, 31, 0x18E164u);
    ctx->pc = 0x18E160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E15Cu;
            // 0x18e160: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E5A0u;
    if (runtime->hasFunction(0x18E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x18E5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E164u; }
        if (ctx->pc != 0x18E164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlaySeID__FUiiiiiii_0x18e5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E164u; }
        if (ctx->pc != 0x18E164u) { return; }
    }
    ctx->pc = 0x18E164u;
label_18e164:
    // 0x18e164: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18e164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e168: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18e16c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18e16cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e170: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e174: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18e174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e178: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18e178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e17c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18e17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e180: 0x3e00008  jr          $ra
    ctx->pc = 0x18E180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E180u;
            // 0x18e184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E188u;
}
