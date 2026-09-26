#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRiverPoly__9CEditGridFP6CCPolyRC9mgVu0FBOXif
// Address: 0x298200 - 0x2985b4
void GetRiverPoly__9CEditGridFP6CCPolyRC9mgVu0FBOXif_0x298200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRiverPoly__9CEditGridFP6CCPolyRC9mgVu0FBOXif_0x298200");
#endif

    switch (ctx->pc) {
        case 0x298254u: goto label_298254;
        case 0x298268u: goto label_298268;
        case 0x2982c8u: goto label_2982c8;
        case 0x2982d0u: goto label_2982d0;
        case 0x2982e0u: goto label_2982e0;
        case 0x29834cu: goto label_29834c;
        case 0x298380u: goto label_298380;
        case 0x2983b0u: goto label_2983b0;
        case 0x2983e0u: goto label_2983e0;
        case 0x298424u: goto label_298424;
        case 0x29842cu: goto label_29842c;
        case 0x298448u: goto label_298448;
        case 0x298468u: goto label_298468;
        case 0x298478u: goto label_298478;
        case 0x2984b0u: goto label_2984b0;
        case 0x2984c4u: goto label_2984c4;
        case 0x2984e8u: goto label_2984e8;
        case 0x29850cu: goto label_29850c;
        case 0x298530u: goto label_298530;
        default: break;
    }

    ctx->pc = 0x298200u;

    // 0x298200: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x298200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x298204: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x298204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x298208: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x298208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x29820c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x29820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x298210: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x298210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x298214: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x298214u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298218: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x298218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x29821c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x298220: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x298220u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298224: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x298224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x298228: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x298228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29822c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29822cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x298230: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x298230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x298234: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x298234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x298238: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x298238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29823c: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x29823cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
    // 0x298240: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x298240u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x298244: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x298244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x298248: 0xc4cd0008  lwc1        $f13, 0x8($a2)
    ctx->pc = 0x298248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29824c: 0xc0a5e64  jal         func_297990
    ctx->pc = 0x29824Cu;
    SET_GPR_U32(ctx, 31, 0x298254u);
    ctx->pc = 0x298250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29824Cu;
            // 0x298250: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298254u; }
        if (ctx->pc != 0x298254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298254u; }
        if (ctx->pc != 0x298254u) { return; }
    }
    ctx->pc = 0x298254u;
label_298254:
    // 0x298254: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x298254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x298258: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x298258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29825c: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x29825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x298260: 0xc0a5e64  jal         func_297990
    ctx->pc = 0x298260u;
    SET_GPR_U32(ctx, 31, 0x298268u);
    ctx->pc = 0x298264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298260u;
            // 0x298264: 0x27a50178  addiu       $a1, $sp, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298268u; }
        if (ctx->pc != 0x298268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298268u; }
        if (ctx->pc != 0x298268u) { return; }
    }
    ctx->pc = 0x298268u;
label_298268:
    // 0x298268: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x298268u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x29826c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x29826cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x298270: 0x24e74210  addiu       $a3, $a3, 0x4210
    ctx->pc = 0x298270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16912));
    // 0x298274: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x298274u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298278: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x298278u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29827c: 0x78e40010  lq          $a0, 0x10($a3)
    ctx->pc = 0x29827cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x298280: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x298280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x298284: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x298284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x298288: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x298288u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x29828c: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x29828cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x298290: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x298290u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x298294: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x298294u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x298298: 0x78e20040  lq          $v0, 0x40($a3)
    ctx->pc = 0x298298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x29829c: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x29829cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x2982a0: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x2982a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2982a4: 0x8fb60178  lw          $s6, 0x178($sp)
    ctx->pc = 0x2982a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2982a8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2982a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2982ac: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x2982acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2982b0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2982b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2982b4: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x2982b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2982b8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2982b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2982bc: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x2982bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2982c0: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2982C0u;
    {
        const bool branch_taken_0x2982c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982C0u;
            // 0x2982c4: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982c0) {
            ctx->pc = 0x29856Cu;
            goto label_29856c;
        }
    }
    ctx->pc = 0x2982C8u;
label_2982c8:
    // 0x2982c8: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2982C8u;
    {
        const bool branch_taken_0x2982c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982C8u;
            // 0x2982cc: 0x8fb0017c  lw          $s0, 0x17C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982c8) {
            ctx->pc = 0x298554u;
            goto label_298554;
        }
    }
    ctx->pc = 0x2982D0u;
label_2982d0:
    // 0x2982d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2982d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2982d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982d8: 0xc0a6010  jal         func_298040
    ctx->pc = 0x2982D8u;
    SET_GPR_U32(ctx, 31, 0x2982E0u);
    ctx->pc = 0x2982DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982D8u;
            // 0x2982dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982E0u; }
        if (ctx->pc != 0x2982E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982E0u; }
        if (ctx->pc != 0x2982E0u) { return; }
    }
    ctx->pc = 0x2982E0u;
label_2982e0:
    // 0x2982e0: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2982E0u;
    {
        const bool branch_taken_0x2982e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2982e0) {
            ctx->pc = 0x29854Cu;
            goto label_29854c;
        }
    }
    ctx->pc = 0x2982E8u;
    // 0x2982e8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2982e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2982ec: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x2982ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2982f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2982F0u;
    {
        const bool branch_taken_0x2982f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982F0u;
            // 0x2982f4: 0x27a200c0  addiu       $v0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982f0) {
            ctx->pc = 0x298300u;
            goto label_298300;
        }
    }
    ctx->pc = 0x2982F8u;
    // 0x2982f8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2982F8u;
    {
        const bool branch_taken_0x2982f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982F8u;
            // 0x2982fc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982f8) {
            ctx->pc = 0x298580u;
            goto label_298580;
        }
    }
    ctx->pc = 0x298300u;
label_298300:
    // 0x298300: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x298300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x298304: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x298304u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298308: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x298308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29830c: 0x27b30120  addiu       $s3, $sp, 0x120
    ctx->pc = 0x29830cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x298310: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x298310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x298314: 0x27b20130  addiu       $s2, $sp, 0x130
    ctx->pc = 0x298314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x298318: 0x27b10140  addiu       $s1, $sp, 0x140
    ctx->pc = 0x298318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29831c: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x29831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x298320: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x298320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298324: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x298324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298328: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x298328u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x29832c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x29832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x298330: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x298330u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x298334: 0x7e670000  sq          $a3, 0x0($s3)
    ctx->pc = 0x298334u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 7));
    // 0x298338: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x298338u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29833c: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x29833cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x298340: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x298340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298344: 0xc0a6010  jal         func_298040
    ctx->pc = 0x298344u;
    SET_GPR_U32(ctx, 31, 0x29834Cu);
    ctx->pc = 0x298348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298344u;
            // 0x298348: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29834Cu; }
        if (ctx->pc != 0x29834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29834Cu; }
        if (ctx->pc != 0x29834Cu) { return; }
    }
    ctx->pc = 0x29834Cu;
label_29834c:
    // 0x29834c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29834Cu;
    {
        const bool branch_taken_0x29834c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29834c) {
            ctx->pc = 0x29836Cu;
            goto label_29836c;
        }
    }
    ctx->pc = 0x298354u;
    // 0x298354: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x298354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298358: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x298358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x29835c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x29835cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x298360: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x298360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298364: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x298364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x298368: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x298368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_29836c:
    // 0x29836c: 0x0  nop
    ctx->pc = 0x29836cu;
    // NOP
    // 0x298370: 0x26c5ffff  addiu       $a1, $s6, -0x1
    ctx->pc = 0x298370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x298374: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x298374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298378: 0xc0a6010  jal         func_298040
    ctx->pc = 0x298378u;
    SET_GPR_U32(ctx, 31, 0x298380u);
    ctx->pc = 0x29837Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298378u;
            // 0x29837c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298380u; }
        if (ctx->pc != 0x298380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298380u; }
        if (ctx->pc != 0x298380u) { return; }
    }
    ctx->pc = 0x298380u;
label_298380:
    // 0x298380: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298380u;
    {
        const bool branch_taken_0x298380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298380) {
            ctx->pc = 0x2983A0u;
            goto label_2983a0;
        }
    }
    ctx->pc = 0x298388u;
    // 0x298388: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x298388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29838c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x29838cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x298390: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x298390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x298394: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x298394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298398: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x298398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x29839c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x29839cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2983a0:
    // 0x2983a0: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2983a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2983a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2983a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983a8: 0xc0a6010  jal         func_298040
    ctx->pc = 0x2983A8u;
    SET_GPR_U32(ctx, 31, 0x2983B0u);
    ctx->pc = 0x2983ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2983A8u;
            // 0x2983ac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983B0u; }
        if (ctx->pc != 0x2983B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983B0u; }
        if (ctx->pc != 0x2983B0u) { return; }
    }
    ctx->pc = 0x2983B0u;
label_2983b0:
    // 0x2983b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2983B0u;
    {
        const bool branch_taken_0x2983b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2983b0) {
            ctx->pc = 0x2983D0u;
            goto label_2983d0;
        }
    }
    ctx->pc = 0x2983B8u;
    // 0x2983b8: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x2983b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2983bc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x2983bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2983c0: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2983c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2983c4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2983c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2983c8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x2983c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2983cc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2983ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_2983d0:
    // 0x2983d0: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2983d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2983d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2983d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983d8: 0xc0a6010  jal         func_298040
    ctx->pc = 0x2983D8u;
    SET_GPR_U32(ctx, 31, 0x2983E0u);
    ctx->pc = 0x2983DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2983D8u;
            // 0x2983dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983E0u; }
        if (ctx->pc != 0x2983E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983E0u; }
        if (ctx->pc != 0x2983E0u) { return; }
    }
    ctx->pc = 0x2983E0u;
label_2983e0:
    // 0x2983e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2983E0u;
    {
        const bool branch_taken_0x2983e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2983e0) {
            ctx->pc = 0x298400u;
            goto label_298400;
        }
    }
    ctx->pc = 0x2983E8u;
    // 0x2983e8: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2983e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2983ec: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2983ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2983f0: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2983f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2983f4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2983f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2983f8: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x2983f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2983fc: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x2983fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_298400:
    // 0x298400: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x298400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x298404: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x298404u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298408: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x298408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29840c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x29840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x298410: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x298410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298414: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x298414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298418: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x298418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x29841c: 0xc0a5e94  jal         func_297A50
    ctx->pc = 0x29841Cu;
    SET_GPR_U32(ctx, 31, 0x298424u);
    ctx->pc = 0x298420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29841Cu;
            // 0x298420: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297A50u;
    if (runtime->hasFunction(0x297A50u)) {
        auto targetFn = runtime->lookupFunction(0x297A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298424u; }
        if (ctx->pc != 0x298424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWPos__9CEditGridFPfii_0x297a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298424u; }
        if (ctx->pc != 0x298424u) { return; }
    }
    ctx->pc = 0x298424u;
label_298424:
    // 0x298424: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x298424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298428: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x298428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29842c:
    // 0x29842c: 0x0  nop
    ctx->pc = 0x29842cu;
    // NOP
    // 0x298430: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x298430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x298434: 0x24540110  addiu       $s4, $v0, 0x110
    ctx->pc = 0x298434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x298438: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x298438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29843c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29843cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298440: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x298440u;
    SET_GPR_U32(ctx, 31, 0x298448u);
    ctx->pc = 0x298444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298440u;
            // 0x298444: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298448u; }
        if (ctx->pc != 0x298448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298448u; }
        if (ctx->pc != 0x298448u) { return; }
    }
    ctx->pc = 0x298448u;
label_298448:
    // 0x298448: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x298448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29844c: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x29844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x298450: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x298450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x298454: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x298454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x298458: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x298458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29845c: 0x24530110  addiu       $s3, $v0, 0x110
    ctx->pc = 0x29845cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x298460: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x298460u;
    SET_GPR_U32(ctx, 31, 0x298468u);
    ctx->pc = 0x298464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298460u;
            // 0x298464: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298468u; }
        if (ctx->pc != 0x298468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298468u; }
        if (ctx->pc != 0x298468u) { return; }
    }
    ctx->pc = 0x298468u;
label_298468:
    // 0x298468: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x298468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x29846c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29846cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298470: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x298470u;
    SET_GPR_U32(ctx, 31, 0x298478u);
    ctx->pc = 0x298474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298470u;
            // 0x298474: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298478u; }
        if (ctx->pc != 0x298478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298478u; }
        if (ctx->pc != 0x298478u) { return; }
    }
    ctx->pc = 0x298478u;
label_298478:
    // 0x298478: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x298478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29847c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x29847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x298480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x298480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298484: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x298484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x298488: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x298488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29848c: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x29848cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x298490: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298494: 0x26a70020  addiu       $a3, $s5, 0x20
    ctx->pc = 0x298494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x298498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x298498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29849c: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x29849cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x2984a0: 0xaea2002c  sw          $v0, 0x2C($s5)
    ctx->pc = 0x2984a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 2));
    // 0x2984a4: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x2984a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
    // 0x2984a8: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x2984A8u;
    SET_GPR_U32(ctx, 31, 0x2984B0u);
    ctx->pc = 0x2984ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2984A8u;
            // 0x2984ac: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984B0u; }
        if (ctx->pc != 0x2984B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984B0u; }
        if (ctx->pc != 0x2984B0u) { return; }
    }
    ctx->pc = 0x2984B0u;
label_2984b0:
    // 0x2984b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2984b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984b4: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x2984b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x2984b8: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2984b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2984bc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2984BCu;
    SET_GPR_U32(ctx, 31, 0x2984C4u);
    ctx->pc = 0x2984C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2984BCu;
            // 0x2984c0: 0x7ea00040  sq          $zero, 0x40($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984C4u; }
        if (ctx->pc != 0x2984C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984C4u; }
        if (ctx->pc != 0x2984C4u) { return; }
    }
    ctx->pc = 0x2984C4u;
label_2984c4:
    // 0x2984c4: 0xc6a10054  lwc1        $f1, 0x54($s5)
    ctx->pc = 0x2984c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2984c8: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2984c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2984cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2984ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2984d0: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x2984d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x2984d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2984d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984d8: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2984d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2984dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2984dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2984e0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2984E0u;
    SET_GPR_U32(ctx, 31, 0x2984E8u);
    ctx->pc = 0x2984E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2984E0u;
            // 0x2984e4: 0xe6a00054  swc1        $f0, 0x54($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984E8u; }
        if (ctx->pc != 0x2984E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984E8u; }
        if (ctx->pc != 0x2984E8u) { return; }
    }
    ctx->pc = 0x2984E8u;
label_2984e8:
    // 0x2984e8: 0xc6a10064  lwc1        $f1, 0x64($s5)
    ctx->pc = 0x2984e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2984ec: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2984ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2984f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2984f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2984f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2984f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984f8: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x2984f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x2984fc: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2984fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x298500: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x298500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x298504: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x298504u;
    SET_GPR_U32(ctx, 31, 0x29850Cu);
    ctx->pc = 0x298508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298504u;
            // 0x298508: 0xe6a00064  swc1        $f0, 0x64($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29850Cu; }
        if (ctx->pc != 0x29850Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29850Cu; }
        if (ctx->pc != 0x29850Cu) { return; }
    }
    ctx->pc = 0x29850Cu;
label_29850c:
    // 0x29850c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298510: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x298510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x298514: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x298514u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
    // 0x298518: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x298518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x29851c: 0xaea2006c  sw          $v0, 0x6C($s5)
    ctx->pc = 0x29851cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 2));
    // 0x298520: 0x26a60060  addiu       $a2, $s5, 0x60
    ctx->pc = 0x298520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x298524: 0xaea2005c  sw          $v0, 0x5C($s5)
    ctx->pc = 0x298524u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
    // 0x298528: 0xc04bd60  jal         func_12F580
    ctx->pc = 0x298528u;
    SET_GPR_U32(ctx, 31, 0x298530u);
    ctx->pc = 0x29852Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298528u;
            // 0x29852c: 0x26a70070  addiu       $a3, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F580u;
    if (runtime->hasFunction(0x12F580u)) {
        auto targetFn = runtime->lookupFunction(0x12F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298530u; }
        if (ctx->pc != 0x298530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlaneNormal__FPfPfPfPf_0x12f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298530u; }
        if (ctx->pc != 0x298530u) { return; }
    }
    ctx->pc = 0x298530u;
label_298530:
    // 0x298530: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x298530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x298534: 0x7ea00090  sq          $zero, 0x90($s5)
    ctx->pc = 0x298534u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 144), GPR_VEC(ctx, 0));
    // 0x298538: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x298538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29853c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29853cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x298540: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x298540u;
    {
        const bool branch_taken_0x298540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298540u;
            // 0x298544: 0x26b500a0  addiu       $s5, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298540) {
            ctx->pc = 0x29842Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29842c;
        }
    }
    ctx->pc = 0x298548u;
    // 0x298548: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x298548u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_29854c:
    // 0x29854c: 0x0  nop
    ctx->pc = 0x29854cu;
    // NOP
    // 0x298550: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x298550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_298554:
    // 0x298554: 0x0  nop
    ctx->pc = 0x298554u;
    // NOP
    // 0x298558: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x298558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x29855c: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x29855cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x298560: 0x1020ff5b  beqz        $at, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x298560u;
    {
        const bool branch_taken_0x298560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x298560) {
            ctx->pc = 0x2982D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2982d0;
        }
    }
    ctx->pc = 0x298568u;
    // 0x298568: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x298568u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_29856c:
    // 0x29856c: 0x0  nop
    ctx->pc = 0x29856cu;
    // NOP
    // 0x298570: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x298570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x298574: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x298574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x298578: 0x1020ff53  beqz        $at, . + 4 + (-0xAD << 2)
    ctx->pc = 0x298578u;
    {
        const bool branch_taken_0x298578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29857Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298578u;
            // 0x29857c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298578) {
            ctx->pc = 0x2982C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2982c8;
        }
    }
    ctx->pc = 0x298580u;
label_298580:
    // 0x298580: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x298580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x298584: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x298584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x298588: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x298588u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29858c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x29858cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298590: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x298590u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298594: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x298594u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298598: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x298598u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29859c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x29859cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2985a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2985a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2985a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2985a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2985a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2985a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2985ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2985ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2985B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2985ACu;
            // 0x2985b0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2985B4u;
}
