#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawVersatileWin_yesno__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi
// Address: 0x2d61c0 - 0x2d67f0
void DrawVersatileWin_yesno__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d61c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawVersatileWin_yesno__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d61c0");
#endif

    switch (ctx->pc) {
        case 0x2d6228u: goto label_2d6228;
        case 0x2d6290u: goto label_2d6290;
        case 0x2d62a8u: goto label_2d62a8;
        case 0x2d62c4u: goto label_2d62c4;
        case 0x2d62ecu: goto label_2d62ec;
        case 0x2d6304u: goto label_2d6304;
        case 0x2d6320u: goto label_2d6320;
        case 0x2d6348u: goto label_2d6348;
        case 0x2d6360u: goto label_2d6360;
        case 0x2d637cu: goto label_2d637c;
        case 0x2d63a4u: goto label_2d63a4;
        case 0x2d63bcu: goto label_2d63bc;
        case 0x2d63d8u: goto label_2d63d8;
        case 0x2d6428u: goto label_2d6428;
        case 0x2d6450u: goto label_2d6450;
        case 0x2d6468u: goto label_2d6468;
        case 0x2d6484u: goto label_2d6484;
        case 0x2d64acu: goto label_2d64ac;
        case 0x2d64c4u: goto label_2d64c4;
        case 0x2d64e0u: goto label_2d64e0;
        case 0x2d6508u: goto label_2d6508;
        case 0x2d6520u: goto label_2d6520;
        case 0x2d653cu: goto label_2d653c;
        case 0x2d6564u: goto label_2d6564;
        case 0x2d657cu: goto label_2d657c;
        case 0x2d6598u: goto label_2d6598;
        case 0x2d65c0u: goto label_2d65c0;
        case 0x2d65d8u: goto label_2d65d8;
        case 0x2d65f4u: goto label_2d65f4;
        case 0x2d661cu: goto label_2d661c;
        case 0x2d6634u: goto label_2d6634;
        case 0x2d6650u: goto label_2d6650;
        case 0x2d6678u: goto label_2d6678;
        case 0x2d6690u: goto label_2d6690;
        case 0x2d66acu: goto label_2d66ac;
        case 0x2d66d4u: goto label_2d66d4;
        case 0x2d66ecu: goto label_2d66ec;
        case 0x2d6708u: goto label_2d6708;
        case 0x2d6730u: goto label_2d6730;
        case 0x2d6748u: goto label_2d6748;
        case 0x2d6764u: goto label_2d6764;
        case 0x2d678cu: goto label_2d678c;
        case 0x2d67a4u: goto label_2d67a4;
        case 0x2d67c0u: goto label_2d67c0;
        default: break;
    }

    ctx->pc = 0x2d61c0u;

    // 0x2d61c0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x2d61c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x2d61c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d61c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d61c8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2d61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d61cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d61ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d61d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d61d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d61d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d61d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d61d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d61d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d61dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d61dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d61e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d61e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d61e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d61e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d61e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d61e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d61ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d61ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d61f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d61f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d61f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d61f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d61f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d61f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d61fc: 0xafa700cc  sw          $a3, 0xCC($sp)
    ctx->pc = 0x2d61fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
    // 0x2d6200: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d6200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d6204: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d6204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6208: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d620c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6210: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2d6210u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d6214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6218: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2d6218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d621c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d621cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d6220: 0xc054514  jal         func_151450
    ctx->pc = 0x2D6220u;
    SET_GPR_U32(ctx, 31, 0x2D6228u);
    ctx->pc = 0x2D6224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6220u;
            // 0x2d6224: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6228u; }
        if (ctx->pc != 0x2D6228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6228u; }
        if (ctx->pc != 0x2D6228u) { return; }
    }
    ctx->pc = 0x2D6228u;
label_2d6228:
    // 0x2d6228: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d622c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2d622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2d6230: 0x8c256fd0  lw          $a1, 0x6FD0($at)
    ctx->pc = 0x2d6230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28624)));
    // 0x2d6234: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2d6234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d6238: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2d6238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d623c: 0x8fb300d4  lw          $s3, 0xD4($sp)
    ctx->pc = 0x2d623cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2d6240: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x2d6240u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2d6244: 0x2450ffd2  addiu       $s0, $v0, -0x2E
    ctx->pc = 0x2d6244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967250));
    // 0x2d6248: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d624c: 0x8c266fd4  lw          $a2, 0x6FD4($at)
    ctx->pc = 0x2d624cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28628)));
    // 0x2d6250: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d6250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d6254: 0x2452ffe9  addiu       $s2, $v0, -0x17
    ctx->pc = 0x2d6254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967273));
    // 0x2d6258: 0x24710017  addiu       $s1, $v1, 0x17
    ctx->pc = 0x2d6258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
    // 0x2d625c: 0x26620019  addiu       $v0, $s3, 0x19
    ctx->pc = 0x2d625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25));
    // 0x2d6260: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2d6260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2d6264: 0x2502ffb0  addiu       $v0, $t0, -0x50
    ctx->pc = 0x2d6264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967216));
    // 0x2d6268: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2d6268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2d626c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d626cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6270: 0x2681021  addu        $v0, $s3, $t0
    ctx->pc = 0x2d6270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2d6274: 0x8c276fd8  lw          $a3, 0x6FD8($at)
    ctx->pc = 0x2d6274u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28632)));
    // 0x2d6278: 0x245effc9  addiu       $fp, $v0, -0x37
    ctx->pc = 0x2d6278u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
    // 0x2d627c: 0x2457ffd7  addiu       $s7, $v0, -0x29
    ctx->pc = 0x2d627cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967255));
    // 0x2d6280: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6284: 0x8c286fdc  lw          $t0, 0x6FDC($at)
    ctx->pc = 0x2d6284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28636)));
    // 0x2d6288: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6288u;
    SET_GPR_U32(ctx, 31, 0x2D6290u);
    ctx->pc = 0x2D628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6288u;
            // 0x2d628c: 0x2456ffe7  addiu       $s6, $v0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6290u; }
        if (ctx->pc != 0x2D6290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6290u; }
        if (ctx->pc != 0x2D6290u) { return; }
    }
    ctx->pc = 0x2D6290u;
label_2d6290:
    // 0x2d6290: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d6290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d6294: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d6294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d6298: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d6298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d629c: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d629cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d62a0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D62A0u;
    SET_GPR_U32(ctx, 31, 0x2D62A8u);
    ctx->pc = 0x2D62A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D62A0u;
            // 0x2d62a4: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D62A8u; }
        if (ctx->pc != 0x2D62A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D62A8u; }
        if (ctx->pc != 0x2D62A8u) { return; }
    }
    ctx->pc = 0x2D62A8u;
label_2d62a8:
    // 0x2d62a8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d62a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d62ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d62acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62b0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d62b4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2d62b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d62b8: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2d62b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d62bc: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D62BCu;
    SET_GPR_U32(ctx, 31, 0x2D62C4u);
    ctx->pc = 0x2D62C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D62BCu;
            // 0x2d62c0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D62C4u; }
        if (ctx->pc != 0x2D62C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D62C4u; }
        if (ctx->pc != 0x2D62C4u) { return; }
    }
    ctx->pc = 0x2D62C4u;
label_2d62c4:
    // 0x2d62c4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d62c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d62c8: 0x8c256fe0  lw          $a1, 0x6FE0($at)
    ctx->pc = 0x2d62c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28640)));
    // 0x2d62cc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d62ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d62d0: 0x8c266fe4  lw          $a2, 0x6FE4($at)
    ctx->pc = 0x2d62d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28644)));
    // 0x2d62d4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d62d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d62d8: 0x8c276fe8  lw          $a3, 0x6FE8($at)
    ctx->pc = 0x2d62d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28648)));
    // 0x2d62dc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d62dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d62e0: 0x8c286fec  lw          $t0, 0x6FEC($at)
    ctx->pc = 0x2d62e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28652)));
    // 0x2d62e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D62E4u;
    SET_GPR_U32(ctx, 31, 0x2D62ECu);
    ctx->pc = 0x2D62E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D62E4u;
            // 0x2d62e8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D62ECu; }
        if (ctx->pc != 0x2D62ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D62ECu; }
        if (ctx->pc != 0x2D62ECu) { return; }
    }
    ctx->pc = 0x2D62ECu;
label_2d62ec:
    // 0x2d62ec: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d62ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d62f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d62f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d62f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d62f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62fc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D62FCu;
    SET_GPR_U32(ctx, 31, 0x2D6304u);
    ctx->pc = 0x2D6300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D62FCu;
            // 0x2d6300: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6304u; }
        if (ctx->pc != 0x2D6304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6304u; }
        if (ctx->pc != 0x2D6304u) { return; }
    }
    ctx->pc = 0x2D6304u;
label_2d6304:
    // 0x2d6304: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6308: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d630c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6310: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2d6310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d6314: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2d6314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d6318: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6318u;
    SET_GPR_U32(ctx, 31, 0x2D6320u);
    ctx->pc = 0x2D631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6318u;
            // 0x2d631c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6320u; }
        if (ctx->pc != 0x2D6320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6320u; }
        if (ctx->pc != 0x2D6320u) { return; }
    }
    ctx->pc = 0x2D6320u;
label_2d6320:
    // 0x2d6320: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6324: 0x8c256ff0  lw          $a1, 0x6FF0($at)
    ctx->pc = 0x2d6324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28656)));
    // 0x2d6328: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d632c: 0x8c266ff4  lw          $a2, 0x6FF4($at)
    ctx->pc = 0x2d632cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28660)));
    // 0x2d6330: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6334: 0x8c276ff8  lw          $a3, 0x6FF8($at)
    ctx->pc = 0x2d6334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28664)));
    // 0x2d6338: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d633c: 0x8c286ffc  lw          $t0, 0x6FFC($at)
    ctx->pc = 0x2d633cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28668)));
    // 0x2d6340: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6340u;
    SET_GPR_U32(ctx, 31, 0x2D6348u);
    ctx->pc = 0x2D6344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6340u;
            // 0x2d6344: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6348u; }
        if (ctx->pc != 0x2D6348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6348u; }
        if (ctx->pc != 0x2D6348u) { return; }
    }
    ctx->pc = 0x2D6348u;
label_2d6348:
    // 0x2d6348: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d6348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d634c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2d634cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d6350: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d6350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6354: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d6354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d6358: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6358u;
    SET_GPR_U32(ctx, 31, 0x2D6360u);
    ctx->pc = 0x2D635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6358u;
            // 0x2d635c: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6360u; }
        if (ctx->pc != 0x2D6360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6360u; }
        if (ctx->pc != 0x2D6360u) { return; }
    }
    ctx->pc = 0x2D6360u;
label_2d6360:
    // 0x2d6360: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6364: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6368: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d636c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2d636cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d6370: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x2d6370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d6374: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6374u;
    SET_GPR_U32(ctx, 31, 0x2D637Cu);
    ctx->pc = 0x2D6378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6374u;
            // 0x2d6378: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D637Cu; }
        if (ctx->pc != 0x2D637Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D637Cu; }
        if (ctx->pc != 0x2D637Cu) { return; }
    }
    ctx->pc = 0x2D637Cu;
label_2d637c:
    // 0x2d637c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6380: 0x8c257000  lw          $a1, 0x7000($at)
    ctx->pc = 0x2d6380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28672)));
    // 0x2d6384: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6388: 0x8c267004  lw          $a2, 0x7004($at)
    ctx->pc = 0x2d6388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28676)));
    // 0x2d638c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d638cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6390: 0x8c277008  lw          $a3, 0x7008($at)
    ctx->pc = 0x2d6390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28680)));
    // 0x2d6394: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6398: 0x8c28700c  lw          $t0, 0x700C($at)
    ctx->pc = 0x2d6398u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28684)));
    // 0x2d639c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D639Cu;
    SET_GPR_U32(ctx, 31, 0x2D63A4u);
    ctx->pc = 0x2D63A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D639Cu;
            // 0x2d63a0: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D63A4u; }
        if (ctx->pc != 0x2D63A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D63A4u; }
        if (ctx->pc != 0x2D63A4u) { return; }
    }
    ctx->pc = 0x2D63A4u;
label_2d63a4:
    // 0x2d63a4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d63a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d63a8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2d63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d63ac: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2d63acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d63b0: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x2d63b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d63b4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D63B4u;
    SET_GPR_U32(ctx, 31, 0x2D63BCu);
    ctx->pc = 0x2D63B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D63B4u;
            // 0x2d63b8: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D63BCu; }
        if (ctx->pc != 0x2D63BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D63BCu; }
        if (ctx->pc != 0x2D63BCu) { return; }
    }
    ctx->pc = 0x2D63BCu;
label_2d63bc:
    // 0x2d63bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d63c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d63c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63c4: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d63c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d63c8: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2d63c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d63cc: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x2d63ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d63d0: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D63D0u;
    SET_GPR_U32(ctx, 31, 0x2D63D8u);
    ctx->pc = 0x2D63D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D63D0u;
            // 0x2d63d4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D63D8u; }
        if (ctx->pc != 0x2D63D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D63D8u; }
        if (ctx->pc != 0x2D63D8u) { return; }
    }
    ctx->pc = 0x2D63D8u;
label_2d63d8:
    // 0x2d63d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d63dc: 0x2624fff6  addiu       $a0, $s1, -0xA
    ctx->pc = 0x2d63dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
    // 0x2d63e0: 0x26060016  addiu       $a2, $s0, 0x16
    ctx->pc = 0x2d63e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x2d63e4: 0x2445fff7  addiu       $a1, $v0, -0x9
    ctx->pc = 0x2d63e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x2d63e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d63ec: 0x2447000d  addiu       $a3, $v0, 0xD
    ctx->pc = 0x2d63ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x2d63f0: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2d63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2d63f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d63f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d63fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d6400: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d6400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6404: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d6404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d6408: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6408u;
    {
        const bool branch_taken_0x2d6408 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D640Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6408u;
            // 0x2d640c: 0x259c3  sra         $t3, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6408) {
            ctx->pc = 0x2D6418u;
            goto label_2d6418;
        }
    }
    ctx->pc = 0x2D6410u;
    // 0x2d6410: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x2d6410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x2d6414: 0x259c3  sra         $t3, $v0, 7
    ctx->pc = 0x2d6414u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 7));
label_2d6418:
    // 0x2d6418: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d6418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d641c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d641cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6420: 0xc0545fc  jal         func_1517F0
    ctx->pc = 0x2D6420u;
    SET_GPR_U32(ctx, 31, 0x2D6428u);
    ctx->pc = 0x2D6424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6420u;
            // 0x2d6424: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1517F0u;
    if (runtime->hasFunction(0x1517F0u)) {
        auto targetFn = runtime->lookupFunction(0x1517F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6428u; }
        if (ctx->pc != 0x2D6428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FillRect__Fiiiiiiii_0x1517f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6428u; }
        if (ctx->pc != 0x2D6428u) { return; }
    }
    ctx->pc = 0x2D6428u;
label_2d6428:
    // 0x2d6428: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d642c: 0x8c257020  lw          $a1, 0x7020($at)
    ctx->pc = 0x2d642cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28704)));
    // 0x2d6430: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6434: 0x8c267024  lw          $a2, 0x7024($at)
    ctx->pc = 0x2d6434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28708)));
    // 0x2d6438: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d643c: 0x8c277028  lw          $a3, 0x7028($at)
    ctx->pc = 0x2d643cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28712)));
    // 0x2d6440: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6444: 0x8c28702c  lw          $t0, 0x702C($at)
    ctx->pc = 0x2d6444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28716)));
    // 0x2d6448: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6448u;
    SET_GPR_U32(ctx, 31, 0x2D6450u);
    ctx->pc = 0x2D644Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6448u;
            // 0x2d644c: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6450u; }
        if (ctx->pc != 0x2D6450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6450u; }
        if (ctx->pc != 0x2D6450u) { return; }
    }
    ctx->pc = 0x2D6450u;
label_2d6450:
    // 0x2d6450: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2d6450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d6454: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2d6454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d6458: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x2d6458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d645c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6460: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6460u;
    SET_GPR_U32(ctx, 31, 0x2D6468u);
    ctx->pc = 0x2D6464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6460u;
            // 0x2d6464: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6468u; }
        if (ctx->pc != 0x2D6468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6468u; }
        if (ctx->pc != 0x2D6468u) { return; }
    }
    ctx->pc = 0x2D6468u;
label_2d6468:
    // 0x2d6468: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d646c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d646cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6470: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6474: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2d6474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d6478: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x2d6478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d647c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D647Cu;
    SET_GPR_U32(ctx, 31, 0x2D6484u);
    ctx->pc = 0x2D6480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D647Cu;
            // 0x2d6480: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6484u; }
        if (ctx->pc != 0x2D6484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6484u; }
        if (ctx->pc != 0x2D6484u) { return; }
    }
    ctx->pc = 0x2D6484u;
label_2d6484:
    // 0x2d6484: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6488: 0x8c257030  lw          $a1, 0x7030($at)
    ctx->pc = 0x2d6488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28720)));
    // 0x2d648c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d648cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6490: 0x8c267034  lw          $a2, 0x7034($at)
    ctx->pc = 0x2d6490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28724)));
    // 0x2d6494: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6498: 0x8c277038  lw          $a3, 0x7038($at)
    ctx->pc = 0x2d6498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28728)));
    // 0x2d649c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d649cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d64a0: 0x8c28703c  lw          $t0, 0x703C($at)
    ctx->pc = 0x2d64a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28732)));
    // 0x2d64a4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D64A4u;
    SET_GPR_U32(ctx, 31, 0x2D64ACu);
    ctx->pc = 0x2D64A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D64A4u;
            // 0x2d64a8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D64ACu; }
        if (ctx->pc != 0x2D64ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D64ACu; }
        if (ctx->pc != 0x2D64ACu) { return; }
    }
    ctx->pc = 0x2D64ACu;
label_2d64ac:
    // 0x2d64ac: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d64acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d64b0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2d64b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d64b4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d64b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64b8: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d64b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d64bc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D64BCu;
    SET_GPR_U32(ctx, 31, 0x2D64C4u);
    ctx->pc = 0x2D64C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D64BCu;
            // 0x2d64c0: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D64C4u; }
        if (ctx->pc != 0x2D64C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D64C4u; }
        if (ctx->pc != 0x2D64C4u) { return; }
    }
    ctx->pc = 0x2D64C4u;
label_2d64c4:
    // 0x2d64c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d64c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d64c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d64c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64cc: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d64d0: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2d64d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d64d4: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2d64d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d64d8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D64D8u;
    SET_GPR_U32(ctx, 31, 0x2D64E0u);
    ctx->pc = 0x2D64DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D64D8u;
            // 0x2d64dc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D64E0u; }
        if (ctx->pc != 0x2D64E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D64E0u; }
        if (ctx->pc != 0x2D64E0u) { return; }
    }
    ctx->pc = 0x2D64E0u;
label_2d64e0:
    // 0x2d64e0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d64e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d64e4: 0x8c257040  lw          $a1, 0x7040($at)
    ctx->pc = 0x2d64e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28736)));
    // 0x2d64e8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d64e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d64ec: 0x8c267044  lw          $a2, 0x7044($at)
    ctx->pc = 0x2d64ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28740)));
    // 0x2d64f0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d64f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d64f4: 0x8c277048  lw          $a3, 0x7048($at)
    ctx->pc = 0x2d64f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28744)));
    // 0x2d64f8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d64f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d64fc: 0x8c28704c  lw          $t0, 0x704C($at)
    ctx->pc = 0x2d64fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28748)));
    // 0x2d6500: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6500u;
    SET_GPR_U32(ctx, 31, 0x2D6508u);
    ctx->pc = 0x2D6504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6500u;
            // 0x2d6504: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6508u; }
        if (ctx->pc != 0x2D6508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6508u; }
        if (ctx->pc != 0x2D6508u) { return; }
    }
    ctx->pc = 0x2D6508u;
label_2d6508:
    // 0x2d6508: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2d6508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d650c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d650cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6510: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d6510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6514: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d6514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6518: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6518u;
    SET_GPR_U32(ctx, 31, 0x2D6520u);
    ctx->pc = 0x2D651Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6518u;
            // 0x2d651c: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6520u; }
        if (ctx->pc != 0x2D6520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6520u; }
        if (ctx->pc != 0x2D6520u) { return; }
    }
    ctx->pc = 0x2D6520u;
label_2d6520:
    // 0x2d6520: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6524: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6528: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d652c: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2d652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d6530: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x2d6530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d6534: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6534u;
    SET_GPR_U32(ctx, 31, 0x2D653Cu);
    ctx->pc = 0x2D6538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6534u;
            // 0x2d6538: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D653Cu; }
        if (ctx->pc != 0x2D653Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D653Cu; }
        if (ctx->pc != 0x2D653Cu) { return; }
    }
    ctx->pc = 0x2D653Cu;
label_2d653c:
    // 0x2d653c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d653cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6540: 0x8c257050  lw          $a1, 0x7050($at)
    ctx->pc = 0x2d6540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28752)));
    // 0x2d6544: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6548: 0x8c267054  lw          $a2, 0x7054($at)
    ctx->pc = 0x2d6548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28756)));
    // 0x2d654c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d654cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6550: 0x8c277058  lw          $a3, 0x7058($at)
    ctx->pc = 0x2d6550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28760)));
    // 0x2d6554: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6558: 0x8c28705c  lw          $t0, 0x705C($at)
    ctx->pc = 0x2d6558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28764)));
    // 0x2d655c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D655Cu;
    SET_GPR_U32(ctx, 31, 0x2D6564u);
    ctx->pc = 0x2D6560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D655Cu;
            // 0x2d6560: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6564u; }
        if (ctx->pc != 0x2D6564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6564u; }
        if (ctx->pc != 0x2D6564u) { return; }
    }
    ctx->pc = 0x2D6564u;
label_2d6564:
    // 0x2d6564: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d6564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6568: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2d6568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2d656c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d656cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6570: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d6570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d6574: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6574u;
    SET_GPR_U32(ctx, 31, 0x2D657Cu);
    ctx->pc = 0x2D6578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6574u;
            // 0x2d6578: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D657Cu; }
        if (ctx->pc != 0x2D657Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D657Cu; }
        if (ctx->pc != 0x2D657Cu) { return; }
    }
    ctx->pc = 0x2D657Cu;
label_2d657c:
    // 0x2d657c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d657cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6580: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6584: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6588: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2d6588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2d658c: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x2d658cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2d6590: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6590u;
    SET_GPR_U32(ctx, 31, 0x2D6598u);
    ctx->pc = 0x2D6594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6590u;
            // 0x2d6594: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6598u; }
        if (ctx->pc != 0x2D6598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6598u; }
        if (ctx->pc != 0x2D6598u) { return; }
    }
    ctx->pc = 0x2D6598u;
label_2d6598:
    // 0x2d6598: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d659c: 0x8c257060  lw          $a1, 0x7060($at)
    ctx->pc = 0x2d659cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28768)));
    // 0x2d65a0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d65a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d65a4: 0x8c267064  lw          $a2, 0x7064($at)
    ctx->pc = 0x2d65a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28772)));
    // 0x2d65a8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d65a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d65ac: 0x8c277068  lw          $a3, 0x7068($at)
    ctx->pc = 0x2d65acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28776)));
    // 0x2d65b0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d65b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d65b4: 0x8c28706c  lw          $t0, 0x706C($at)
    ctx->pc = 0x2d65b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28780)));
    // 0x2d65b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D65B8u;
    SET_GPR_U32(ctx, 31, 0x2D65C0u);
    ctx->pc = 0x2D65BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D65B8u;
            // 0x2d65bc: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D65C0u; }
        if (ctx->pc != 0x2D65C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D65C0u; }
        if (ctx->pc != 0x2D65C0u) { return; }
    }
    ctx->pc = 0x2D65C0u;
label_2d65c0:
    // 0x2d65c0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d65c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d65c4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2d65c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2d65c8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d65c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65cc: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d65ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d65d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D65D0u;
    SET_GPR_U32(ctx, 31, 0x2D65D8u);
    ctx->pc = 0x2D65D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D65D0u;
            // 0x2d65d4: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D65D8u; }
        if (ctx->pc != 0x2D65D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D65D8u; }
        if (ctx->pc != 0x2D65D8u) { return; }
    }
    ctx->pc = 0x2D65D8u;
label_2d65d8:
    // 0x2d65d8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d65d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d65dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d65dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65e0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d65e4: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2d65e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2d65e8: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x2d65e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2d65ec: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D65ECu;
    SET_GPR_U32(ctx, 31, 0x2D65F4u);
    ctx->pc = 0x2D65F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D65ECu;
            // 0x2d65f0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D65F4u; }
        if (ctx->pc != 0x2D65F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D65F4u; }
        if (ctx->pc != 0x2D65F4u) { return; }
    }
    ctx->pc = 0x2D65F4u;
label_2d65f4:
    // 0x2d65f4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d65f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d65f8: 0x8c257070  lw          $a1, 0x7070($at)
    ctx->pc = 0x2d65f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28784)));
    // 0x2d65fc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d65fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6600: 0x8c267074  lw          $a2, 0x7074($at)
    ctx->pc = 0x2d6600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28788)));
    // 0x2d6604: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6608: 0x8c277078  lw          $a3, 0x7078($at)
    ctx->pc = 0x2d6608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28792)));
    // 0x2d660c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d660cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6610: 0x8c28707c  lw          $t0, 0x707C($at)
    ctx->pc = 0x2d6610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28796)));
    // 0x2d6614: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6614u;
    SET_GPR_U32(ctx, 31, 0x2D661Cu);
    ctx->pc = 0x2D6618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6614u;
            // 0x2d6618: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D661Cu; }
        if (ctx->pc != 0x2D661Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D661Cu; }
        if (ctx->pc != 0x2D661Cu) { return; }
    }
    ctx->pc = 0x2D661Cu;
label_2d661c:
    // 0x2d661c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2d661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2d6620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d6620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6624: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d6624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6628: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d6628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d662c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D662Cu;
    SET_GPR_U32(ctx, 31, 0x2D6634u);
    ctx->pc = 0x2D6630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D662Cu;
            // 0x2d6630: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6634u; }
        if (ctx->pc != 0x2D6634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6634u; }
        if (ctx->pc != 0x2D6634u) { return; }
    }
    ctx->pc = 0x2D6634u;
label_2d6634:
    // 0x2d6634: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6638: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d663c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6640: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x2d6640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2d6644: 0x27a70210  addiu       $a3, $sp, 0x210
    ctx->pc = 0x2d6644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2d6648: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6648u;
    SET_GPR_U32(ctx, 31, 0x2D6650u);
    ctx->pc = 0x2D664Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6648u;
            // 0x2d664c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6650u; }
        if (ctx->pc != 0x2D6650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6650u; }
        if (ctx->pc != 0x2D6650u) { return; }
    }
    ctx->pc = 0x2D6650u;
label_2d6650:
    // 0x2d6650: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6654: 0x8c257080  lw          $a1, 0x7080($at)
    ctx->pc = 0x2d6654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28800)));
    // 0x2d6658: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d665c: 0x8c267084  lw          $a2, 0x7084($at)
    ctx->pc = 0x2d665cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28804)));
    // 0x2d6660: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6664: 0x8c277088  lw          $a3, 0x7088($at)
    ctx->pc = 0x2d6664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28808)));
    // 0x2d6668: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d666c: 0x8c28708c  lw          $t0, 0x708C($at)
    ctx->pc = 0x2d666cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28812)));
    // 0x2d6670: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6670u;
    SET_GPR_U32(ctx, 31, 0x2D6678u);
    ctx->pc = 0x2D6674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6670u;
            // 0x2d6674: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6678u; }
        if (ctx->pc != 0x2D6678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6678u; }
        if (ctx->pc != 0x2D6678u) { return; }
    }
    ctx->pc = 0x2D6678u;
label_2d6678:
    // 0x2d6678: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d6678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d667c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2d667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2d6680: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d6680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6684: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d6684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d6688: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6688u;
    SET_GPR_U32(ctx, 31, 0x2D6690u);
    ctx->pc = 0x2D668Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6688u;
            // 0x2d668c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6690u; }
        if (ctx->pc != 0x2D6690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6690u; }
        if (ctx->pc != 0x2D6690u) { return; }
    }
    ctx->pc = 0x2D6690u;
label_2d6690:
    // 0x2d6690: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6694: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6698: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d669c: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x2d669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2d66a0: 0x27a70230  addiu       $a3, $sp, 0x230
    ctx->pc = 0x2d66a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2d66a4: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D66A4u;
    SET_GPR_U32(ctx, 31, 0x2D66ACu);
    ctx->pc = 0x2D66A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D66A4u;
            // 0x2d66a8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66ACu; }
        if (ctx->pc != 0x2D66ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66ACu; }
        if (ctx->pc != 0x2D66ACu) { return; }
    }
    ctx->pc = 0x2D66ACu;
label_2d66ac:
    // 0x2d66ac: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d66acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d66b0: 0x8c257090  lw          $a1, 0x7090($at)
    ctx->pc = 0x2d66b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28816)));
    // 0x2d66b4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d66b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d66b8: 0x8c267094  lw          $a2, 0x7094($at)
    ctx->pc = 0x2d66b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28820)));
    // 0x2d66bc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d66bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d66c0: 0x8c277098  lw          $a3, 0x7098($at)
    ctx->pc = 0x2d66c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28824)));
    // 0x2d66c4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d66c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d66c8: 0x8c28709c  lw          $t0, 0x709C($at)
    ctx->pc = 0x2d66c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28828)));
    // 0x2d66cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D66CCu;
    SET_GPR_U32(ctx, 31, 0x2D66D4u);
    ctx->pc = 0x2D66D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D66CCu;
            // 0x2d66d0: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66D4u; }
        if (ctx->pc != 0x2D66D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66D4u; }
        if (ctx->pc != 0x2D66D4u) { return; }
    }
    ctx->pc = 0x2D66D4u;
label_2d66d4:
    // 0x2d66d4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d66d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d66d8: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2d66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2d66dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d66dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d66e0: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d66e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d66e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D66E4u;
    SET_GPR_U32(ctx, 31, 0x2D66ECu);
    ctx->pc = 0x2D66E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D66E4u;
            // 0x2d66e8: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66ECu; }
        if (ctx->pc != 0x2D66ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66ECu; }
        if (ctx->pc != 0x2D66ECu) { return; }
    }
    ctx->pc = 0x2D66ECu;
label_2d66ec:
    // 0x2d66ec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d66ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d66f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d66f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d66f4: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d66f8: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x2d66f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2d66fc: 0x27a70250  addiu       $a3, $sp, 0x250
    ctx->pc = 0x2d66fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2d6700: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6700u;
    SET_GPR_U32(ctx, 31, 0x2D6708u);
    ctx->pc = 0x2D6704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6700u;
            // 0x2d6704: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6708u; }
        if (ctx->pc != 0x2D6708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6708u; }
        if (ctx->pc != 0x2D6708u) { return; }
    }
    ctx->pc = 0x2D6708u;
label_2d6708:
    // 0x2d6708: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d670c: 0x8c2570a0  lw          $a1, 0x70A0($at)
    ctx->pc = 0x2d670cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28832)));
    // 0x2d6710: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6714: 0x8c2670a4  lw          $a2, 0x70A4($at)
    ctx->pc = 0x2d6714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28836)));
    // 0x2d6718: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d671c: 0x8c2770a8  lw          $a3, 0x70A8($at)
    ctx->pc = 0x2d671cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28840)));
    // 0x2d6720: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6724: 0x8c2870ac  lw          $t0, 0x70AC($at)
    ctx->pc = 0x2d6724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28844)));
    // 0x2d6728: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6728u;
    SET_GPR_U32(ctx, 31, 0x2D6730u);
    ctx->pc = 0x2D672Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6728u;
            // 0x2d672c: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6730u; }
        if (ctx->pc != 0x2D6730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6730u; }
        if (ctx->pc != 0x2D6730u) { return; }
    }
    ctx->pc = 0x2D6730u;
label_2d6730:
    // 0x2d6730: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d6730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6734: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d6734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6738: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x2d6738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2d673c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d673cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6740: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6740u;
    SET_GPR_U32(ctx, 31, 0x2D6748u);
    ctx->pc = 0x2D6744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6740u;
            // 0x2d6744: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6748u; }
        if (ctx->pc != 0x2D6748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6748u; }
        if (ctx->pc != 0x2D6748u) { return; }
    }
    ctx->pc = 0x2D6748u;
label_2d6748:
    // 0x2d6748: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d674c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d674cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6750: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6754: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x2d6754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2d6758: 0x27a70270  addiu       $a3, $sp, 0x270
    ctx->pc = 0x2d6758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2d675c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D675Cu;
    SET_GPR_U32(ctx, 31, 0x2D6764u);
    ctx->pc = 0x2D6760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D675Cu;
            // 0x2d6760: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6764u; }
        if (ctx->pc != 0x2D6764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6764u; }
        if (ctx->pc != 0x2D6764u) { return; }
    }
    ctx->pc = 0x2D6764u;
label_2d6764:
    // 0x2d6764: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6768: 0x8c2570b0  lw          $a1, 0x70B0($at)
    ctx->pc = 0x2d6768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28848)));
    // 0x2d676c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d676cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6770: 0x8c2670b4  lw          $a2, 0x70B4($at)
    ctx->pc = 0x2d6770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28852)));
    // 0x2d6774: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d6774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6778: 0x8c2770b8  lw          $a3, 0x70B8($at)
    ctx->pc = 0x2d6778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28856)));
    // 0x2d677c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d677cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d6780: 0x8c2870bc  lw          $t0, 0x70BC($at)
    ctx->pc = 0x2d6780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28860)));
    // 0x2d6784: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6784u;
    SET_GPR_U32(ctx, 31, 0x2D678Cu);
    ctx->pc = 0x2D6788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6784u;
            // 0x2d6788: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D678Cu; }
        if (ctx->pc != 0x2D678Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D678Cu; }
        if (ctx->pc != 0x2D678Cu) { return; }
    }
    ctx->pc = 0x2D678Cu;
label_2d678c:
    // 0x2d678c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d678cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6790: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d6790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6794: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2d6794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2d6798: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d6798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d679c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D679Cu;
    SET_GPR_U32(ctx, 31, 0x2D67A4u);
    ctx->pc = 0x2D67A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D679Cu;
            // 0x2d67a0: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D67A4u; }
        if (ctx->pc != 0x2D67A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D67A4u; }
        if (ctx->pc != 0x2D67A4u) { return; }
    }
    ctx->pc = 0x2D67A4u;
label_2d67a4:
    // 0x2d67a4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d67a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d67a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d67a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d67ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d67acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d67b0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d67b4: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x2d67b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2d67b8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D67B8u;
    SET_GPR_U32(ctx, 31, 0x2D67C0u);
    ctx->pc = 0x2D67BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D67B8u;
            // 0x2d67bc: 0x27a70290  addiu       $a3, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D67C0u; }
        if (ctx->pc != 0x2D67C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D67C0u; }
        if (ctx->pc != 0x2D67C0u) { return; }
    }
    ctx->pc = 0x2D67C0u;
label_2d67c0:
    // 0x2d67c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d67c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d67c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d67c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d67c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d67c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d67cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d67ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d67d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d67d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d67d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d67d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d67d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d67d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d67dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d67dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d67e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d67e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d67e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d67e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d67e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D67E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D67ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D67E8u;
            // 0x2d67ec: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D67F0u;
}
