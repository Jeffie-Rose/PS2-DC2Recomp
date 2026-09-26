#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDQFukidashi__FP11mgCDrawPrim4RECTiiP10RGBAQ_TYPEii
// Address: 0x2d8250 - 0x2d86e8
void DrawDQFukidashi__FP11mgCDrawPrim4RECTiiP10RGBAQ_TYPEii_0x2d8250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDQFukidashi__FP11mgCDrawPrim4RECTiiP10RGBAQ_TYPEii_0x2d8250");
#endif

    switch (ctx->pc) {
        case 0x2d82f4u: goto label_2d82f4;
        case 0x2d830cu: goto label_2d830c;
        case 0x2d8324u: goto label_2d8324;
        case 0x2d8340u: goto label_2d8340;
        case 0x2d8384u: goto label_2d8384;
        case 0x2d83a0u: goto label_2d83a0;
        case 0x2d83bcu: goto label_2d83bc;
        case 0x2d83d4u: goto label_2d83d4;
        case 0x2d83ecu: goto label_2d83ec;
        case 0x2d8408u: goto label_2d8408;
        case 0x2d8420u: goto label_2d8420;
        case 0x2d8438u: goto label_2d8438;
        case 0x2d8454u: goto label_2d8454;
        case 0x2d8470u: goto label_2d8470;
        case 0x2d8488u: goto label_2d8488;
        case 0x2d84a4u: goto label_2d84a4;
        case 0x2d84bcu: goto label_2d84bc;
        case 0x2d84d4u: goto label_2d84d4;
        case 0x2d84f0u: goto label_2d84f0;
        case 0x2d8508u: goto label_2d8508;
        case 0x2d8520u: goto label_2d8520;
        case 0x2d853cu: goto label_2d853c;
        case 0x2d8554u: goto label_2d8554;
        case 0x2d856cu: goto label_2d856c;
        case 0x2d8588u: goto label_2d8588;
        case 0x2d85a0u: goto label_2d85a0;
        case 0x2d85b8u: goto label_2d85b8;
        case 0x2d85d4u: goto label_2d85d4;
        case 0x2d85ecu: goto label_2d85ec;
        case 0x2d8604u: goto label_2d8604;
        case 0x2d8620u: goto label_2d8620;
        case 0x2d8638u: goto label_2d8638;
        case 0x2d8650u: goto label_2d8650;
        case 0x2d866cu: goto label_2d866c;
        case 0x2d8684u: goto label_2d8684;
        case 0x2d869cu: goto label_2d869c;
        case 0x2d86b8u: goto label_2d86b8;
        default: break;
    }

    ctx->pc = 0x2d8250u;

    // 0x2d8250: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x2d8250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x2d8254: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d8254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d8258: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2d8258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d825c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d825cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d8260: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d8260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d8264: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d8264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d8268: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d8268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d826c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2d826cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8270: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d8270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d8274: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d8274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d8278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d827c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d827cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d8284: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d8284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d828c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d828cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8294: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d8294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d8298: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d829c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d82a0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d82a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d82a4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2d82a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d82a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d82a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d82ac: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2d82acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d82b0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d82b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d82b4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d82b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d82b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2d82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d82bc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2d82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2d82c0: 0x8fb200c4  lw          $s2, 0xC4($sp)
    ctx->pc = 0x2d82c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2d82c4: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x2d82c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2d82c8: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x2d82c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d82cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d82d0: 0x2471ffe0  addiu       $s1, $v1, -0x20
    ctx->pc = 0x2d82d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2d82d4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2d82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2d82d8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2d82d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2d82dc: 0x24f7ffe0  addiu       $s7, $a3, -0x20
    ctx->pc = 0x2d82dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x2d82e0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2d82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2d82e4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2d82e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2d82e8: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x2d82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2d82ec: 0xc054514  jal         func_151450
    ctx->pc = 0x2D82ECu;
    SET_GPR_U32(ctx, 31, 0x2D82F4u);
    ctx->pc = 0x2D82F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D82ECu;
            // 0x2d82f0: 0x245efff0  addiu       $fp, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D82F4u; }
        if (ctx->pc != 0x2D82F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D82F4u; }
        if (ctx->pc != 0x2D82F4u) { return; }
    }
    ctx->pc = 0x2D82F4u;
label_2d82f4:
    // 0x2d82f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d82f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d82f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d82f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d82fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d82fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8300: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2d8300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2d8304: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8304u;
    SET_GPR_U32(ctx, 31, 0x2D830Cu);
    ctx->pc = 0x2D8308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8304u;
            // 0x2d8308: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D830Cu; }
        if (ctx->pc != 0x2D830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D830Cu; }
        if (ctx->pc != 0x2D830Cu) { return; }
    }
    ctx->pc = 0x2D830Cu;
label_2d830c:
    // 0x2d830c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2d830cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d8310: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d8310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d8314: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d8314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d8318: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d8318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d831c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D831Cu;
    SET_GPR_U32(ctx, 31, 0x2D8324u);
    ctx->pc = 0x2D8320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D831Cu;
            // 0x2d8320: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8324u; }
        if (ctx->pc != 0x2D8324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8324u; }
        if (ctx->pc != 0x2D8324u) { return; }
    }
    ctx->pc = 0x2D8324u;
label_2d8324:
    // 0x2d8324: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d8328: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d8328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d832c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d8330: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d8330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d8334: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x2d8334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d8338: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8338u;
    SET_GPR_U32(ctx, 31, 0x2D8340u);
    ctx->pc = 0x2D833Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8338u;
            // 0x2d833c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8340u; }
        if (ctx->pc != 0x2D8340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8340u; }
        if (ctx->pc != 0x2D8340u) { return; }
    }
    ctx->pc = 0x2D8340u;
label_2d8340:
    // 0x2d8340: 0x12c00046  beqz        $s6, . + 4 + (0x46 << 2)
    ctx->pc = 0x2D8340u;
    {
        const bool branch_taken_0x2d8340 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8340u;
            // 0x2d8344: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8340) {
            ctx->pc = 0x2D845Cu;
            goto label_2d845c;
        }
    }
    ctx->pc = 0x2D8348u;
    // 0x2d8348: 0x2682fff8  addiu       $v0, $s4, -0x8
    ctx->pc = 0x2d8348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    // 0x2d834c: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2d834cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d8350: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8350u;
    {
        const bool branch_taken_0x2d8350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8350u;
            // 0x2d8354: 0x211b021  addu        $s6, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8350) {
            ctx->pc = 0x2D835Cu;
            goto label_2d835c;
        }
    }
    ctx->pc = 0x2D8358u;
    // 0x2d8358: 0x26140008  addiu       $s4, $s0, 0x8
    ctx->pc = 0x2d8358u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2d835c:
    // 0x2d835c: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x2d835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2d8360: 0x2c2082a  slt         $at, $s6, $v0
    ctx->pc = 0x2d8360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d8364: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8364u;
    {
        const bool branch_taken_0x2d8364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8364u;
            // 0x2d8368: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8364) {
            ctx->pc = 0x2D8370u;
            goto label_2d8370;
        }
    }
    ctx->pc = 0x2D836Cu;
    // 0x2d836c: 0x26d4fff8  addiu       $s4, $s6, -0x8
    ctx->pc = 0x2d836cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967288));
label_2d8370:
    // 0x2d8370: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d8370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d8374: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2d8374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2d8378: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d8378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d837c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D837Cu;
    SET_GPR_U32(ctx, 31, 0x2D8384u);
    ctx->pc = 0x2D8380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D837Cu;
            // 0x2d8380: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8384u; }
        if (ctx->pc != 0x2D8384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8384u; }
        if (ctx->pc != 0x2D8384u) { return; }
    }
    ctx->pc = 0x2D8384u;
label_2d8384:
    // 0x2d8384: 0x2682fff8  addiu       $v0, $s4, -0x8
    ctx->pc = 0x2d8384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    // 0x2d8388: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2d8388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d838c: 0x503823  subu        $a3, $v0, $s0
    ctx->pc = 0x2d838cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d8390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8394: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d8394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8398: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8398u;
    SET_GPR_U32(ctx, 31, 0x2D83A0u);
    ctx->pc = 0x2D839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8398u;
            // 0x2d839c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83A0u; }
        if (ctx->pc != 0x2D83A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83A0u; }
        if (ctx->pc != 0x2D83A0u) { return; }
    }
    ctx->pc = 0x2D83A0u;
label_2d83a0:
    // 0x2d83a0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d83a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d83a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d83a8: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d83ac: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2d83acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d83b0: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x2d83b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d83b4: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D83B4u;
    SET_GPR_U32(ctx, 31, 0x2D83BCu);
    ctx->pc = 0x2D83B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D83B4u;
            // 0x2d83b8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83BCu; }
        if (ctx->pc != 0x2D83BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83BCu; }
        if (ctx->pc != 0x2D83BCu) { return; }
    }
    ctx->pc = 0x2D83BCu;
label_2d83bc:
    // 0x2d83bc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2d83bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d83c0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2d83c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d83c4: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2d83c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2d83c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d83c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d83cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D83CCu;
    SET_GPR_U32(ctx, 31, 0x2D83D4u);
    ctx->pc = 0x2D83D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D83CCu;
            // 0x2d83d0: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83D4u; }
        if (ctx->pc != 0x2D83D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83D4u; }
        if (ctx->pc != 0x2D83D4u) { return; }
    }
    ctx->pc = 0x2D83D4u;
label_2d83d4:
    // 0x2d83d4: 0x2685fff8  addiu       $a1, $s4, -0x8
    ctx->pc = 0x2d83d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    // 0x2d83d8: 0x2646fff0  addiu       $a2, $s2, -0x10
    ctx->pc = 0x2d83d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x2d83dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2d83dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d83e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d83e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d83e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D83E4u;
    SET_GPR_U32(ctx, 31, 0x2D83ECu);
    ctx->pc = 0x2D83E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D83E4u;
            // 0x2d83e8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83ECu; }
        if (ctx->pc != 0x2D83ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83ECu; }
        if (ctx->pc != 0x2D83ECu) { return; }
    }
    ctx->pc = 0x2D83ECu;
label_2d83ec:
    // 0x2d83ec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d83ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d83f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d83f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d83f4: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d83f8: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2d83f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d83fc: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x2d83fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d8400: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8400u;
    SET_GPR_U32(ctx, 31, 0x2D8408u);
    ctx->pc = 0x2D8404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8400u;
            // 0x2d8404: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8408u; }
        if (ctx->pc != 0x2D8408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8408u; }
        if (ctx->pc != 0x2D8408u) { return; }
    }
    ctx->pc = 0x2D8408u;
label_2d8408:
    // 0x2d8408: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d8408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d840c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2d840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d8410: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2d8410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2d8414: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d8414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8418: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8418u;
    SET_GPR_U32(ctx, 31, 0x2D8420u);
    ctx->pc = 0x2D841Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8418u;
            // 0x2d841c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8420u; }
        if (ctx->pc != 0x2D8420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8420u; }
        if (ctx->pc != 0x2D8420u) { return; }
    }
    ctx->pc = 0x2D8420u;
label_2d8420:
    // 0x2d8420: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x2d8420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2d8424: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2d8424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d8428: 0x2c53823  subu        $a3, $s6, $a1
    ctx->pc = 0x2d8428u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2d842c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d842cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8430: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8430u;
    SET_GPR_U32(ctx, 31, 0x2D8438u);
    ctx->pc = 0x2D8434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8430u;
            // 0x2d8434: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8438u; }
        if (ctx->pc != 0x2D8438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8438u; }
        if (ctx->pc != 0x2D8438u) { return; }
    }
    ctx->pc = 0x2D8438u;
label_2d8438:
    // 0x2d8438: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d843c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d843cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8440: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d8440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d8444: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2d8444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d8448: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x2d8448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d844c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D844Cu;
    SET_GPR_U32(ctx, 31, 0x2D8454u);
    ctx->pc = 0x2D8450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D844Cu;
            // 0x2d8450: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8454u; }
        if (ctx->pc != 0x2D8454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8454u; }
        if (ctx->pc != 0x2D8454u) { return; }
    }
    ctx->pc = 0x2D8454u;
label_2d8454:
    // 0x2d8454: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D8454u;
    {
        const bool branch_taken_0x2d8454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8454u;
            // 0x2d8458: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8454) {
            ctx->pc = 0x2D84A8u;
            goto label_2d84a8;
        }
    }
    ctx->pc = 0x2D845Cu;
label_2d845c:
    // 0x2d845c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2d845cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d8460: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2d8460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2d8464: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d8464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8468: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8468u;
    SET_GPR_U32(ctx, 31, 0x2D8470u);
    ctx->pc = 0x2D846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8468u;
            // 0x2d846c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8470u; }
        if (ctx->pc != 0x2D8470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8470u; }
        if (ctx->pc != 0x2D8470u) { return; }
    }
    ctx->pc = 0x2D8470u;
label_2d8470:
    // 0x2d8470: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2d8470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d8474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8478: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d8478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d847c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d847cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8480: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8480u;
    SET_GPR_U32(ctx, 31, 0x2D8488u);
    ctx->pc = 0x2D8484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8480u;
            // 0x2d8484: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8488u; }
        if (ctx->pc != 0x2D8488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8488u; }
        if (ctx->pc != 0x2D8488u) { return; }
    }
    ctx->pc = 0x2D8488u;
label_2d8488:
    // 0x2d8488: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d848c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d848cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8490: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d8490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d8494: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2d8494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d8498: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x2d8498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d849c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D849Cu;
    SET_GPR_U32(ctx, 31, 0x2D84A4u);
    ctx->pc = 0x2D84A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D849Cu;
            // 0x2d84a0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84A4u; }
        if (ctx->pc != 0x2D84A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84A4u; }
        if (ctx->pc != 0x2D84A4u) { return; }
    }
    ctx->pc = 0x2D84A4u;
label_2d84a4:
    // 0x2d84a4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d84a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d84a8:
    // 0x2d84a8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2d84a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d84ac: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d84acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d84b0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2d84b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2d84b4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D84B4u;
    SET_GPR_U32(ctx, 31, 0x2D84BCu);
    ctx->pc = 0x2D84B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D84B4u;
            // 0x2d84b8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84BCu; }
        if (ctx->pc != 0x2D84BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84BCu; }
        if (ctx->pc != 0x2D84BCu) { return; }
    }
    ctx->pc = 0x2D84BCu;
label_2d84bc:
    // 0x2d84bc: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2d84bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d84c0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d84c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d84c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d84c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84c8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2d84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d84cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D84CCu;
    SET_GPR_U32(ctx, 31, 0x2D84D4u);
    ctx->pc = 0x2D84D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D84CCu;
            // 0x2d84d0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84D4u; }
        if (ctx->pc != 0x2D84D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84D4u; }
        if (ctx->pc != 0x2D84D4u) { return; }
    }
    ctx->pc = 0x2D84D4u;
label_2d84d4:
    // 0x2d84d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d84d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d84d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84dc: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d84dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d84e0: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2d84e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d84e4: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x2d84e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d84e8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D84E8u;
    SET_GPR_U32(ctx, 31, 0x2D84F0u);
    ctx->pc = 0x2D84ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D84E8u;
            // 0x2d84ec: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84F0u; }
        if (ctx->pc != 0x2D84F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84F0u; }
        if (ctx->pc != 0x2D84F0u) { return; }
    }
    ctx->pc = 0x2D84F0u;
label_2d84f0:
    // 0x2d84f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d84f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d84f4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2d84f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d84f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d84f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84fc: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x2d84fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2d8500: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8500u;
    SET_GPR_U32(ctx, 31, 0x2D8508u);
    ctx->pc = 0x2D8504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8500u;
            // 0x2d8504: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8508u; }
        if (ctx->pc != 0x2D8508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8508u; }
        if (ctx->pc != 0x2D8508u) { return; }
    }
    ctx->pc = 0x2D8508u;
label_2d8508:
    // 0x2d8508: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2d8508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d850c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2d850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d8510: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2d8510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8514: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d8514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d8518: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8518u;
    SET_GPR_U32(ctx, 31, 0x2D8520u);
    ctx->pc = 0x2D851Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8518u;
            // 0x2d851c: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8520u; }
        if (ctx->pc != 0x2D8520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8520u; }
        if (ctx->pc != 0x2D8520u) { return; }
    }
    ctx->pc = 0x2D8520u;
label_2d8520:
    // 0x2d8520: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d8524: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d8524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8528: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d8528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d852c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2d852cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d8530: 0x27a701a0  addiu       $a3, $sp, 0x1A0
    ctx->pc = 0x2d8530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d8534: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8534u;
    SET_GPR_U32(ctx, 31, 0x2D853Cu);
    ctx->pc = 0x2D8538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8534u;
            // 0x2d8538: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D853Cu; }
        if (ctx->pc != 0x2D853Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D853Cu; }
        if (ctx->pc != 0x2D853Cu) { return; }
    }
    ctx->pc = 0x2D853Cu;
label_2d853c:
    // 0x2d853c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d8540: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2d8540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2d8544: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x2d8544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2d8548: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d8548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d854c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D854Cu;
    SET_GPR_U32(ctx, 31, 0x2D8554u);
    ctx->pc = 0x2D8550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D854Cu;
            // 0x2d8550: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8554u; }
        if (ctx->pc != 0x2D8554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8554u; }
        if (ctx->pc != 0x2D8554u) { return; }
    }
    ctx->pc = 0x2D8554u;
label_2d8554:
    // 0x2d8554: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2d8554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8558: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2d8558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d855c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d855cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8560: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d8560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8564: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8564u;
    SET_GPR_U32(ctx, 31, 0x2D856Cu);
    ctx->pc = 0x2D8568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8564u;
            // 0x2d8568: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D856Cu; }
        if (ctx->pc != 0x2D856Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D856Cu; }
        if (ctx->pc != 0x2D856Cu) { return; }
    }
    ctx->pc = 0x2D856Cu;
label_2d856c:
    // 0x2d856c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d856cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d8570: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d8570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8574: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d8574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d8578: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2d8578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d857c: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x2d857cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2d8580: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8580u;
    SET_GPR_U32(ctx, 31, 0x2D8588u);
    ctx->pc = 0x2D8584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8580u;
            // 0x2d8584: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8588u; }
        if (ctx->pc != 0x2D8588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8588u; }
        if (ctx->pc != 0x2D8588u) { return; }
    }
    ctx->pc = 0x2D8588u;
label_2d8588:
    // 0x2d8588: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d8588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d858c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2d858cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2d8590: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d8590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d8594: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x2d8594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2d8598: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8598u;
    SET_GPR_U32(ctx, 31, 0x2D85A0u);
    ctx->pc = 0x2D859Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8598u;
            // 0x2d859c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85A0u; }
        if (ctx->pc != 0x2D85A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85A0u; }
        if (ctx->pc != 0x2D85A0u) { return; }
    }
    ctx->pc = 0x2D85A0u;
label_2d85a0:
    // 0x2d85a0: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2d85a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d85a4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2d85a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d85a8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2d85a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d85ac: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2d85acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2d85b0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D85B0u;
    SET_GPR_U32(ctx, 31, 0x2D85B8u);
    ctx->pc = 0x2D85B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D85B0u;
            // 0x2d85b4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85B8u; }
        if (ctx->pc != 0x2D85B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85B8u; }
        if (ctx->pc != 0x2D85B8u) { return; }
    }
    ctx->pc = 0x2D85B8u;
label_2d85b8:
    // 0x2d85b8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d85bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d85bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d85c0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d85c4: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2d85c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2d85c8: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x2d85c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2d85cc: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D85CCu;
    SET_GPR_U32(ctx, 31, 0x2D85D4u);
    ctx->pc = 0x2D85D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D85CCu;
            // 0x2d85d0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85D4u; }
        if (ctx->pc != 0x2D85D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85D4u; }
        if (ctx->pc != 0x2D85D4u) { return; }
    }
    ctx->pc = 0x2D85D4u;
label_2d85d4:
    // 0x2d85d4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d85d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d85d8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2d85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2d85dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d85dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d85e0: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x2d85e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2d85e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D85E4u;
    SET_GPR_U32(ctx, 31, 0x2D85ECu);
    ctx->pc = 0x2D85E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D85E4u;
            // 0x2d85e8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85ECu; }
        if (ctx->pc != 0x2D85ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85ECu; }
        if (ctx->pc != 0x2D85ECu) { return; }
    }
    ctx->pc = 0x2D85ECu;
label_2d85ec:
    // 0x2d85ec: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2d85ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d85f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d85f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d85f4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2d85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2d85f8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d85f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d85fc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D85FCu;
    SET_GPR_U32(ctx, 31, 0x2D8604u);
    ctx->pc = 0x2D8600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D85FCu;
            // 0x2d8600: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8604u; }
        if (ctx->pc != 0x2D8604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8604u; }
        if (ctx->pc != 0x2D8604u) { return; }
    }
    ctx->pc = 0x2D8604u;
label_2d8604:
    // 0x2d8604: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d8608: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d8608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d860c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d8610: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x2d8610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2d8614: 0x27a70200  addiu       $a3, $sp, 0x200
    ctx->pc = 0x2d8614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2d8618: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8618u;
    SET_GPR_U32(ctx, 31, 0x2D8620u);
    ctx->pc = 0x2D861Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8618u;
            // 0x2d861c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8620u; }
        if (ctx->pc != 0x2D8620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8620u; }
        if (ctx->pc != 0x2D8620u) { return; }
    }
    ctx->pc = 0x2D8620u;
label_2d8620:
    // 0x2d8620: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d8620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d8624: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2d8624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2d8628: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x2d8628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2d862c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d862cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8630: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8630u;
    SET_GPR_U32(ctx, 31, 0x2D8638u);
    ctx->pc = 0x2D8634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8630u;
            // 0x2d8634: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8638u; }
        if (ctx->pc != 0x2D8638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8638u; }
        if (ctx->pc != 0x2D8638u) { return; }
    }
    ctx->pc = 0x2D8638u;
label_2d8638:
    // 0x2d8638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d863c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d863cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8640: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2d8640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2d8644: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d8644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8648: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8648u;
    SET_GPR_U32(ctx, 31, 0x2D8650u);
    ctx->pc = 0x2D864Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8648u;
            // 0x2d864c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8650u; }
        if (ctx->pc != 0x2D8650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8650u; }
        if (ctx->pc != 0x2D8650u) { return; }
    }
    ctx->pc = 0x2D8650u;
label_2d8650:
    // 0x2d8650: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d8654: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d8654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8658: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d8658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d865c: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x2d865cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2d8660: 0x27a70220  addiu       $a3, $sp, 0x220
    ctx->pc = 0x2d8660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2d8664: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8664u;
    SET_GPR_U32(ctx, 31, 0x2D866Cu);
    ctx->pc = 0x2D8668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8664u;
            // 0x2d8668: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D866Cu; }
        if (ctx->pc != 0x2D866Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D866Cu; }
        if (ctx->pc != 0x2D866Cu) { return; }
    }
    ctx->pc = 0x2D866Cu;
label_2d866c:
    // 0x2d866c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d866cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d8670: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2d8670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2d8674: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d8674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d8678: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x2d8678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2d867c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D867Cu;
    SET_GPR_U32(ctx, 31, 0x2D8684u);
    ctx->pc = 0x2D8680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D867Cu;
            // 0x2d8680: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8684u; }
        if (ctx->pc != 0x2D8684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8684u; }
        if (ctx->pc != 0x2D8684u) { return; }
    }
    ctx->pc = 0x2D8684u;
label_2d8684:
    // 0x2d8684: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2d8684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d8688: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d8688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d868c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d868cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8690: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2d8690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2d8694: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8694u;
    SET_GPR_U32(ctx, 31, 0x2D869Cu);
    ctx->pc = 0x2D8698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8694u;
            // 0x2d8698: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D869Cu; }
        if (ctx->pc != 0x2D869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D869Cu; }
        if (ctx->pc != 0x2D869Cu) { return; }
    }
    ctx->pc = 0x2D869Cu;
label_2d869c:
    // 0x2d869c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d869cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d86a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d86a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86a4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2d86a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86a8: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d86ac: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x2d86acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2d86b0: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D86B0u;
    SET_GPR_U32(ctx, 31, 0x2D86B8u);
    ctx->pc = 0x2D86B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D86B0u;
            // 0x2d86b4: 0x27a70240  addiu       $a3, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D86B8u; }
        if (ctx->pc != 0x2D86B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D86B8u; }
        if (ctx->pc != 0x2D86B8u) { return; }
    }
    ctx->pc = 0x2D86B8u;
label_2d86b8:
    // 0x2d86b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d86b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d86bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d86bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d86c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d86c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d86c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d86c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d86c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d86c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d86cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d86ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d86d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d86d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d86d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d86d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d86d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d86d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d86dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d86dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d86e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D86E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D86E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D86E0u;
            // 0x2d86e4: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D86E8u;
}
