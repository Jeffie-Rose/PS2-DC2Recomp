#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaMessageMake__Fi
// Address: 0x1f7820 - 0x1f81ac
void MenuGeoramaMessageMake__Fi_0x1f7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaMessageMake__Fi_0x1f7820");
#endif

    switch (ctx->pc) {
        case 0x1f7874u: goto label_1f7874;
        case 0x1f787cu: goto label_1f787c;
        case 0x1f79c4u: goto label_1f79c4;
        case 0x1f7abcu: goto label_1f7abc;
        case 0x1f7ad4u: goto label_1f7ad4;
        case 0x1f7ae8u: goto label_1f7ae8;
        case 0x1f7b24u: goto label_1f7b24;
        case 0x1f7b54u: goto label_1f7b54;
        case 0x1f7b68u: goto label_1f7b68;
        case 0x1f7bc0u: goto label_1f7bc0;
        case 0x1f7bf8u: goto label_1f7bf8;
        case 0x1f7c74u: goto label_1f7c74;
        case 0x1f7c80u: goto label_1f7c80;
        case 0x1f7c98u: goto label_1f7c98;
        case 0x1f7d54u: goto label_1f7d54;
        case 0x1f7dc0u: goto label_1f7dc0;
        case 0x1f7dccu: goto label_1f7dcc;
        case 0x1f7dd8u: goto label_1f7dd8;
        case 0x1f7e2cu: goto label_1f7e2c;
        case 0x1f7e4cu: goto label_1f7e4c;
        case 0x1f7e68u: goto label_1f7e68;
        case 0x1f7fb8u: goto label_1f7fb8;
        case 0x1f7fdcu: goto label_1f7fdc;
        case 0x1f800cu: goto label_1f800c;
        case 0x1f8030u: goto label_1f8030;
        case 0x1f8074u: goto label_1f8074;
        case 0x1f8090u: goto label_1f8090;
        case 0x1f80bcu: goto label_1f80bc;
        case 0x1f80d8u: goto label_1f80d8;
        case 0x1f80f4u: goto label_1f80f4;
        case 0x1f80fcu: goto label_1f80fc;
        default: break;
    }

    ctx->pc = 0x1f7820u;

    // 0x1f7820: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x1f7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x1f7824: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f7824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f7828: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1f7828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1f782c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1f782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1f7830: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1f7830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1f7834: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1f7834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1f7838: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f7838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f783c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1f7840: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f7840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f7844: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f7844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f7848: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f7848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f784c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f7850: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1f7850u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f7854: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f7854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f7858: 0x8f828ff8  lw          $v0, -0x7008($gp)
    ctx->pc = 0x1f7858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f785c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1f785cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1f7860: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1f7860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1f7864: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1f7864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1f7868: 0x93829028  lbu         $v0, -0x6FD8($gp)
    ctx->pc = 0x1f7868u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938664)));
    // 0x1f786c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1f786cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1f7870: 0xa3809028  sb          $zero, -0x6FD8($gp)
    ctx->pc = 0x1f7870u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938664), (uint8_t)GPR_U32(ctx, 0));
label_1f7874:
    // 0x1f7874: 0xc07c958  jal         func_1F2560
    ctx->pc = 0x1F7874u;
    SET_GPR_U32(ctx, 31, 0x1F787Cu);
    ctx->pc = 0x1F7878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7874u;
            // 0x1f7878: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2560u;
    if (runtime->hasFunction(0x1F2560u)) {
        auto targetFn = runtime->lookupFunction(0x1F2560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F787Cu; }
        if (ctx->pc != 0x1F787Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvGeoramaDataNo__Fi_0x1f2560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F787Cu; }
        if (ctx->pc != 0x1F787Cu) { return; }
    }
    ctx->pc = 0x1F787Cu;
label_1f787c:
    // 0x1f787c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f787cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7880: 0x7c0021e  bltz        $fp, . + 4 + (0x21E << 2)
    ctx->pc = 0x1F7880u;
    {
        const bool branch_taken_0x1f7880 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x1f7880) {
            ctx->pc = 0x1F80FCu;
            goto label_1f80fc;
        }
    }
    ctx->pc = 0x1F7888u;
    // 0x1f7888: 0x27829030  addiu       $v0, $gp, -0x6FD0
    ctx->pc = 0x1f7888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x1f788c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f788cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f7890: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1f7890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1f7894: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x1f7894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x1f7898: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1f7898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1f789c: 0x27a50308  addiu       $a1, $sp, 0x308
    ctx->pc = 0x1f789cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
    // 0x1f78a0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f78a4: 0xdf849080  ld          $a0, -0x6F80($gp)
    ctx->pc = 0x1f78a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1f78a8: 0x24429478  addiu       $v0, $v0, -0x6B88
    ctx->pc = 0x1f78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939768));
    // 0x1f78ac: 0x3421b7f8  ori         $at, $at, 0xB7F8
    ctx->pc = 0x1f78acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47096);
    // 0x1f78b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f78b4: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x1f78b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f78b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f78bc: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x1f78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x1f78c0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1f78c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f78c4: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1f78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1f78c8: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x1f78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x1f78cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f78d0: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1f78d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x1f78d4: 0x3469b840  ori         $t1, $v1, 0xB840
    ctx->pc = 0x1f78d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47168);
    // 0x1f78d8: 0x8f878ffc  lw          $a3, -0x7004($gp)
    ctx->pc = 0x1f78d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f78dc: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x1f78dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1f78e0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1f78e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f78e4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1f78e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1f78e8: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1f78e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1f78ec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1f78ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f78f0: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x1f78f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x1f78f4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1f78f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f78f8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1f78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1f78fc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1f78fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f7900: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f7900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f7904: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x1f7904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f7908: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1f7908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f790c: 0x814021  addu        $t0, $a0, $at
    ctx->pc = 0x1f790cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f7910: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f7910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f7914: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x1f7914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f7918: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1f7918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f791c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x1f791cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x1f7920: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1f7920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f7924: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x1f7924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f7928: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1f7928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f792c: 0xafa30308  sw          $v1, 0x308($sp)
    ctx->pc = 0x1f792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 3));
    // 0x1f7930: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f7934: 0xafa3030c  sw          $v1, 0x30C($sp)
    ctx->pc = 0x1f7934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 3));
    // 0x1f7938: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1f7938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f793c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1f793cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f7940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f7944: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1f7944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1f7948: 0x84630308  lh          $v1, 0x308($v1)
    ctx->pc = 0x1f7948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 776)));
    // 0x1f794c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1f794cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7950: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1f7950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7954: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1f7954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1f7958: 0x8c22b8cc  lw          $v0, -0x4734($at)
    ctx->pc = 0x1f7958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949068)));
    // 0x1f795c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1f795cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1f7960: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f7960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f7964: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f7964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f7968: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1f7968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f796c: 0x3421b894  ori         $at, $at, 0xB894
    ctx->pc = 0x1f796cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47252);
    // 0x1f7970: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x1f7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f7978: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1f7978u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f797c: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x1f797cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1f7980: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f7980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1f7984: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f7984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f7988: 0x8f838ffc  lw          $v1, -0x7004($gp)
    ctx->pc = 0x1f7988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f798c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7990: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1f7990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f7994: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1f7994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1f7998: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f7998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f799c: 0x419021  addu        $s2, $v0, $at
    ctx->pc = 0x1f799cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f79a0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f79a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f79a4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f79a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f79a8: 0x8f838ffc  lw          $v1, -0x7004($gp)
    ctx->pc = 0x1f79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f79ac: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1f79acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f79b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f79b4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f79b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f79b8: 0xc42cb840  lwc1        $f12, -0x47C0($at)
    ctx->pc = 0x1f79b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f79bc: 0xc094514  jal         func_251450
    ctx->pc = 0x1F79BCu;
    SET_GPR_U32(ctx, 31, 0x1F79C4u);
    ctx->pc = 0x1F79C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79BCu;
            // 0x1f79c0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79C4u; }
        if (ctx->pc != 0x1F79C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79C4u; }
        if (ctx->pc != 0x1F79C4u) { return; }
    }
    ctx->pc = 0x1F79C4u;
label_1f79c4:
    // 0x1f79c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f79c8: 0x16c3000e  bne         $s6, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F79C8u;
    {
        const bool branch_taken_0x1f79c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f79c8) {
            ctx->pc = 0x1F7A04u;
            goto label_1f7a04;
        }
    }
    ctx->pc = 0x1F79D0u;
    // 0x1f79d0: 0x93839044  lbu         $v1, -0x6FBC($gp)
    ctx->pc = 0x1f79d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938692)));
    // 0x1f79d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F79D4u;
    {
        const bool branch_taken_0x1f79d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f79d4) {
            ctx->pc = 0x1F7A28u;
            goto label_1f7a28;
        }
    }
    ctx->pc = 0x1F79DCu;
    // 0x1f79dc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1f79dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f79e0: 0x3c03c334  lui         $v1, 0xC334
    ctx->pc = 0x1f79e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49972 << 16));
    // 0x1f79e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f79e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f79e8: 0x0  nop
    ctx->pc = 0x1f79e8u;
    // NOP
    // 0x1f79ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f79ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f79f0: 0x0  nop
    ctx->pc = 0x1f79f0u;
    // NOP
    // 0x1f79f4: 0x450101c1  bc1t        . + 4 + (0x1C1 << 2)
    ctx->pc = 0x1F79F4u;
    {
        const bool branch_taken_0x1f79f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f79f4) {
            ctx->pc = 0x1F80FCu;
            goto label_1f80fc;
        }
    }
    ctx->pc = 0x1F79FCu;
    // 0x1f79fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F79FCu;
    {
        const bool branch_taken_0x1f79fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f79fc) {
            ctx->pc = 0x1F7A28u;
            goto label_1f7a28;
        }
    }
    ctx->pc = 0x1F7A04u;
label_1f7a04:
    // 0x1f7a04: 0x0  nop
    ctx->pc = 0x1f7a04u;
    // NOP
    // 0x1f7a08: 0x3c03c334  lui         $v1, 0xC334
    ctx->pc = 0x1f7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49972 << 16));
    // 0x1f7a0c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1f7a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7a14: 0x0  nop
    ctx->pc = 0x1f7a14u;
    // NOP
    // 0x1f7a18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f7a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7a1c: 0x0  nop
    ctx->pc = 0x1f7a1cu;
    // NOP
    // 0x1f7a20: 0x450101b6  bc1t        . + 4 + (0x1B6 << 2)
    ctx->pc = 0x1F7A20u;
    {
        const bool branch_taken_0x1f7a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7a20) {
            ctx->pc = 0x1F80FCu;
            goto label_1f80fc;
        }
    }
    ctx->pc = 0x1F7A28u;
label_1f7a28:
    // 0x1f7a28: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f7a2c: 0x24429620  addiu       $v0, $v0, -0x69E0
    ctx->pc = 0x1f7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940192));
    // 0x1f7a30: 0x3c0801ed  lui         $t0, 0x1ED
    ctx->pc = 0x1f7a30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)493 << 16));
    // 0x1f7a34: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x1f7a34u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7a38: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x1f7a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7a3c: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x1f7a3cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f7a40: 0x27aa0220  addiu       $t2, $sp, 0x220
    ctx->pc = 0x1f7a40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1f7a44: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x1f7a44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f7a48: 0x25089660  addiu       $t0, $t0, -0x69A0
    ctx->pc = 0x1f7a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940256));
    // 0x1f7a4c: 0x27a702d0  addiu       $a3, $sp, 0x2D0
    ctx->pc = 0x1f7a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1f7a50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f7a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a54: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1f7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1f7a58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f7a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7a5c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1f7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f7a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7a64: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x1f7a64u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x1f7a68: 0x7d460010  sq          $a2, 0x10($t2)
    ctx->pc = 0x1f7a68u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 6));
    // 0x1f7a6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f7a74: 0x7d430020  sq          $v1, 0x20($t2)
    ctx->pc = 0x1f7a74u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 3));
    // 0x1f7a78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f7a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f7a7c: 0xe5420030  swc1        $f2, 0x30($t2)
    ctx->pc = 0x1f7a7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 48), bits); }
    // 0x1f7a80: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1f7a80u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f7a84: 0xc5010030  lwc1        $f1, 0x30($t0)
    ctx->pc = 0x1f7a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7a88: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x1f7a88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1f7a8c: 0x79020020  lq          $v0, 0x20($t0)
    ctx->pc = 0x1f7a8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1f7a90: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1f7a90u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1f7a94: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x1f7a94u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x1f7a98: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x1f7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x1f7a9c: 0xe4e10030  swc1        $f1, 0x30($a3)
    ctx->pc = 0x1f7a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x1f7aa0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1f7aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7aa4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1f7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f7aa8: 0xc6540000  lwc1        $f20, 0x0($s2)
    ctx->pc = 0x1f7aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7aac: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F7AACu;
    {
        const bool branch_taken_0x1f7aac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7AACu;
            // 0x1f7ab0: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7aac) {
            ctx->pc = 0x1F7B0Cu;
            goto label_1f7b0c;
        }
    }
    ctx->pc = 0x1F7AB4u;
    // 0x1f7ab4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f7ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ab8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f7ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7abc:
    // 0x1f7abc: 0x0  nop
    ctx->pc = 0x1f7abcu;
    // NOP
    // 0x1f7ac0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1f7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1f7ac4: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x1f7ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    // 0x1f7ac8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f7ac8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f7acc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7ACCu;
    SET_GPR_U32(ctx, 31, 0x1F7AD4u);
    ctx->pc = 0x1F7AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7ACCu;
            // 0x1f7ad0: 0xac4002d0  sw          $zero, 0x2D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7AD4u; }
        if (ctx->pc != 0x1F7AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7AD4u; }
        if (ctx->pc != 0x1F7AD4u) { return; }
    }
    ctx->pc = 0x1F7AD4u;
label_1f7ad4:
    // 0x1f7ad4: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1f7ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1f7ad8: 0x24730260  addiu       $s3, $v1, 0x260
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 608));
    // 0x1f7adc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f7adcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1f7ae0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7AE0u;
    SET_GPR_U32(ctx, 31, 0x1F7AE8u);
    ctx->pc = 0x1F7AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7AE0u;
            // 0x1f7ae4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7AE8u; }
        if (ctx->pc != 0x1F7AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7AE8u; }
        if (ctx->pc != 0x1F7AE8u) { return; }
    }
    ctx->pc = 0x1F7AE8u;
label_1f7ae8:
    // 0x1f7ae8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1f7ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1f7aec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f7aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f7af0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1f7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1f7af4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1f7af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1f7af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7afc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1f7afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1f7b00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7b04: 0x600ffed  bltz        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F7B04u;
    {
        const bool branch_taken_0x1f7b04 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1F7B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7B04u;
            // 0x1f7b08: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b04) {
            ctx->pc = 0x1F7ABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f7abc;
        }
    }
    ctx->pc = 0x1F7B0Cu;
label_1f7b0c:
    // 0x1f7b0c: 0x0  nop
    ctx->pc = 0x1f7b0cu;
    // NOP
    // 0x1f7b10: 0x2a21000a  slti        $at, $s1, 0xA
    ctx->pc = 0x1f7b10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f7b14: 0x10200083  beqz        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x1F7B14u;
    {
        const bool branch_taken_0x1f7b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7B14u;
            // 0x1f7b18: 0x11a080  sll         $s4, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b14) {
            ctx->pc = 0x1F7D24u;
            goto label_1f7d24;
        }
    }
    ctx->pc = 0x1F7B1Cu;
    // 0x1f7b1c: 0x11b8c0  sll         $s7, $s1, 3
    ctx->pc = 0x1f7b1cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1f7b20: 0x11a900  sll         $s5, $s1, 4
    ctx->pc = 0x1f7b20u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1f7b24:
    // 0x1f7b24: 0x0  nop
    ctx->pc = 0x1f7b24u;
    // NOP
    // 0x1f7b28: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x1f7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1f7b2c: 0x24620220  addiu       $v0, $v1, 0x220
    ctx->pc = 0x1f7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x1f7b30: 0x247002d0  addiu       $s0, $v1, 0x2D0
    ctx->pc = 0x1f7b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x1f7b34: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1f7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1f7b38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f7b38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f7b3c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1f7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f7b40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f7b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f7b44: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1f7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f7b48: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x1f7b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f7b4c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7B4Cu;
    SET_GPR_U32(ctx, 31, 0x1F7B54u);
    ctx->pc = 0x1F7B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7B4Cu;
            // 0x1f7b50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7B54u; }
        if (ctx->pc != 0x1F7B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7B54u; }
        if (ctx->pc != 0x1F7B54u) { return; }
    }
    ctx->pc = 0x1F7B54u;
label_1f7b54:
    // 0x1f7b54: 0x2fd1821  addu        $v1, $s7, $sp
    ctx->pc = 0x1f7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
    // 0x1f7b58: 0x24720260  addiu       $s2, $v1, 0x260
    ctx->pc = 0x1f7b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 608));
    // 0x1f7b5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f7b5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1f7b60: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7B60u;
    SET_GPR_U32(ctx, 31, 0x1F7B68u);
    ctx->pc = 0x1F7B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7B60u;
            // 0x1f7b64: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7B68u; }
        if (ctx->pc != 0x1F7B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7B68u; }
        if (ctx->pc != 0x1F7B68u) { return; }
    }
    ctx->pc = 0x1F7B68u;
label_1f7b68:
    // 0x1f7b68: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1f7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1f7b6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7b70: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7B70u;
    {
        const bool branch_taken_0x1f7b70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f7b70) {
            ctx->pc = 0x1F7B80u;
            goto label_1f7b80;
        }
    }
    ctx->pc = 0x1F7B78u;
    // 0x1f7b78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F7B78u;
    {
        const bool branch_taken_0x1f7b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7b78) {
            ctx->pc = 0x1F7BC8u;
            goto label_1f7bc8;
        }
    }
    ctx->pc = 0x1F7B80u;
label_1f7b80:
    // 0x1f7b80: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1f7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f7b84: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f7b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f7b88: 0x2626145a  addiu       $a2, $s1, 0x145A
    ctx->pc = 0x1f7b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5210));
    // 0x1f7b8c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f7b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f7b90: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f7b90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f7b94: 0x8c22b808  lw          $v0, -0x47F8($at)
    ctx->pc = 0x1f7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948872)));
    // 0x1f7b98: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1f7b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f7b9c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1f7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f7ba0: 0x16630057  bne         $s3, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1F7BA0u;
    {
        const bool branch_taken_0x1f7ba0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F7BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7BA0u;
            // 0x1f7ba4: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ba0) {
            ctx->pc = 0x1F7D00u;
            goto label_1f7d00;
        }
    }
    ctx->pc = 0x1F7BA8u;
    // 0x1f7ba8: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1f7ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f7bac: 0x18400054  blez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1F7BACu;
    {
        const bool branch_taken_0x1f7bac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7BACu;
            // 0x1f7bb0: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bac) {
            ctx->pc = 0x1F7D00u;
            goto label_1f7d00;
        }
    }
    ctx->pc = 0x1F7BB4u;
    // 0x1f7bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7bb8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7BB8u;
    SET_GPR_U32(ctx, 31, 0x1F7BC0u);
    ctx->pc = 0x1F7BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7BB8u;
            // 0x1f7bbc: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7BC0u; }
        if (ctx->pc != 0x1F7BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7BC0u; }
        if (ctx->pc != 0x1F7BC0u) { return; }
    }
    ctx->pc = 0x1F7BC0u;
label_1f7bc0:
    // 0x1f7bc0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1F7BC0u;
    {
        const bool branch_taken_0x1f7bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7BC0u;
            // 0x1f7bc4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bc0) {
            ctx->pc = 0x1F7D00u;
            goto label_1f7d00;
        }
    }
    ctx->pc = 0x1F7BC8u;
label_1f7bc8:
    // 0x1f7bc8: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x1f7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x1f7bcc: 0x24520180  addiu       $s2, $v0, 0x180
    ctx->pc = 0x1f7bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1f7bd0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f7bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bd4: 0x3c0242d6  lui         $v0, 0x42D6
    ctx->pc = 0x1f7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17110 << 16));
    // 0x1f7bd8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1f7bdc: 0x3c0242d4  lui         $v0, 0x42D4
    ctx->pc = 0x1f7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17108 << 16));
    // 0x1f7be0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1f7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1f7be4: 0x3c0242d0  lui         $v0, 0x42D0
    ctx->pc = 0x1f7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17104 << 16));
    // 0x1f7be8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f7be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f7bec: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f7bf0: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x1F7BF0u;
    SET_GPR_U32(ctx, 31, 0x1F7BF8u);
    ctx->pc = 0x1F7BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7BF0u;
            // 0x1f7bf4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9600u;
    if (runtime->hasFunction(0x1F9600u)) {
        auto targetFn = runtime->lookupFunction(0x1F9600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7BF8u; }
        if (ctx->pc != 0x1F7BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSelectEditPartsInfo__12CMenuGeoramaFii_0x1f9600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7BF8u; }
        if (ctx->pc != 0x1F7BF8u) { return; }
    }
    ctx->pc = 0x1F7BF8u;
label_1f7bf8:
    // 0x1f7bf8: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x1f7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1f7bfc: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x1f7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x1f7c00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f7c04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7c08: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7C08u;
    {
        const bool branch_taken_0x1f7c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c08) {
            ctx->pc = 0x1F7C1Cu;
            goto label_1f7c1c;
        }
    }
    ctx->pc = 0x1F7C10u;
    // 0x1f7c10: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1f7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1f7c14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7C14u;
    {
        const bool branch_taken_0x1f7c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C14u;
            // 0x1f7c18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c14) {
            ctx->pc = 0x1F7C24u;
            goto label_1f7c24;
        }
    }
    ctx->pc = 0x1F7C1Cu;
label_1f7c1c:
    // 0x1f7c1c: 0x0  nop
    ctx->pc = 0x1f7c1cu;
    // NOP
    // 0x1f7c20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1f7c24:
    // 0x1f7c24: 0x0  nop
    ctx->pc = 0x1f7c24u;
    // NOP
    // 0x1f7c28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7c2c: 0x16c20034  bne         $s6, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F7C2Cu;
    {
        const bool branch_taken_0x1f7c2c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7c2c) {
            ctx->pc = 0x1F7D00u;
            goto label_1f7d00;
        }
    }
    ctx->pc = 0x1F7C34u;
    // 0x1f7c34: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7C34u;
    {
        const bool branch_taken_0x1f7c34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c34) {
            ctx->pc = 0x1F7C5Cu;
            goto label_1f7c5c;
        }
    }
    ctx->pc = 0x1F7C3Cu;
    // 0x1f7c3c: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1f7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f7c40: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1f7c44: 0x2442e920  addiu       $v0, $v0, -0x16E0
    ctx->pc = 0x1f7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961440));
    // 0x1f7c48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f7c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7c50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7c54: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F7C54u;
    {
        const bool branch_taken_0x1f7c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C54u;
            // 0x1f7c58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c54) {
            ctx->pc = 0x1F7D00u;
            goto label_1f7d00;
        }
    }
    ctx->pc = 0x1F7C5Cu;
label_1f7c5c:
    // 0x1f7c5c: 0x0  nop
    ctx->pc = 0x1f7c5cu;
    // NOP
    // 0x1f7c60: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F7C60u;
    {
        const bool branch_taken_0x1f7c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c60) {
            ctx->pc = 0x1F7D00u;
            goto label_1f7d00;
        }
    }
    ctx->pc = 0x1F7C68u;
    // 0x1f7c68: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1f7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f7c6c: 0xc07e520  jal         func_1F9480
    ctx->pc = 0x1F7C6Cu;
    SET_GPR_U32(ctx, 31, 0x1F7C74u);
    ctx->pc = 0x1F7C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C6Cu;
            // 0x1f7c70: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9480u;
    if (runtime->hasFunction(0x1F9480u)) {
        auto targetFn = runtime->lookupFunction(0x1F9480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C74u; }
        if (ctx->pc != 0x1F7C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSelectPlaceID__12CMenuGeoramaFi_0x1f9480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C74u; }
        if (ctx->pc != 0x1F7C74u) { return; }
    }
    ctx->pc = 0x1F7C74u;
label_1f7c74:
    // 0x1f7c74: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1f7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f7c78: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x1F7C78u;
    SET_GPR_U32(ctx, 31, 0x1F7C80u);
    ctx->pc = 0x1F7C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C78u;
            // 0x1f7c7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C80u; }
        if (ctx->pc != 0x1F7C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C80u; }
        if (ctx->pc != 0x1F7C80u) { return; }
    }
    ctx->pc = 0x1F7C80u;
label_1f7c80:
    // 0x1f7c80: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F7C80u;
    {
        const bool branch_taken_0x1f7c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c80) {
            ctx->pc = 0x1F7D00u;
            goto label_1f7d00;
        }
    }
    ctx->pc = 0x1F7C88u;
    // 0x1f7c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c90: 0xc0599ec  jal         func_1667B0
    ctx->pc = 0x1F7C90u;
    SET_GPR_U32(ctx, 31, 0x1F7C98u);
    ctx->pc = 0x1F7C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C90u;
            // 0x1f7c94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1667B0u;
    if (runtime->hasFunction(0x1667B0u)) {
        auto targetFn = runtime->lookupFunction(0x1667B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C98u; }
        if (ctx->pc != 0x1F7C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__9CMapPartsFiPf_0x1667b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C98u; }
        if (ctx->pc != 0x1F7C98u) { return; }
    }
    ctx->pc = 0x1F7C98u;
label_1f7c98:
    // 0x1f7c98: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1f7c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7ca0: 0x0  nop
    ctx->pc = 0x1f7ca0u;
    // NOP
    // 0x1f7ca4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f7ca4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7ca8: 0x0  nop
    ctx->pc = 0x1f7ca8u;
    // NOP
    // 0x1f7cac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7CACu;
    {
        const bool branch_taken_0x1f7cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7CACu;
            // 0x1f7cb0: 0x3c0242d6  lui         $v0, 0x42D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17110 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cac) {
            ctx->pc = 0x1F7CCCu;
            goto label_1f7ccc;
        }
    }
    ctx->pc = 0x1F7CB4u;
    // 0x1f7cb4: 0x3c0342d4  lui         $v1, 0x42D4
    ctx->pc = 0x1f7cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17108 << 16));
    // 0x1f7cb8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f7cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1f7cbc: 0x3c0242d0  lui         $v0, 0x42D0
    ctx->pc = 0x1f7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17104 << 16));
    // 0x1f7cc0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1f7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1f7cc4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F7CC4u;
    {
        const bool branch_taken_0x1f7cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7CC4u;
            // 0x1f7cc8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cc4) {
            ctx->pc = 0x1F7D00u;
            goto label_1f7d00;
        }
    }
    ctx->pc = 0x1F7CCCu;
label_1f7ccc:
    // 0x1f7ccc: 0x0  nop
    ctx->pc = 0x1f7cccu;
    // NOP
    // 0x1f7cd0: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1f7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1f7cd4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7cd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f7cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7cdc: 0x0  nop
    ctx->pc = 0x1f7cdcu;
    // NOP
    // 0x1f7ce0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f7ce4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f7ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f7ce8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f7ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7cec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f7cf0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1f7cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1f7cf4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f7cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7cf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f7cfc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f7cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1f7d00:
    // 0x1f7d00: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1f7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1f7d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7d08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7d0c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1f7d0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1f7d10: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x1f7d10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1f7d14: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1f7d14u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1f7d18: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1f7d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f7d1c: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x1F7D1Cu;
    {
        const bool branch_taken_0x1f7d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D1Cu;
            // 0x1f7d20: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d1c) {
            ctx->pc = 0x1F7B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f7b24;
        }
    }
    ctx->pc = 0x1F7D24u;
label_1f7d24:
    // 0x1f7d24: 0x0  nop
    ctx->pc = 0x1f7d24u;
    // NOP
    // 0x1f7d28: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1f7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f7d2c: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f7d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f7d30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d34: 0x24639460  addiu       $v1, $v1, -0x6BA0
    ctx->pc = 0x1f7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939744));
    // 0x1f7d38: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f7d38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f7d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f7d40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f7d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7d4c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f7d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7d50: 0x0  nop
    ctx->pc = 0x1f7d50u;
    // NOP
label_1f7d54:
    // 0x1f7d54: 0x0  nop
    ctx->pc = 0x1f7d54u;
    // NOP
    // 0x1f7d58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7d5c: 0x16c20012  bne         $s6, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7D5Cu;
    {
        const bool branch_taken_0x1f7d5c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D5Cu;
            // 0x1f7d60: 0x2bd3821  addu        $a3, $s5, $sp (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d5c) {
            ctx->pc = 0x1F7DA8u;
            goto label_1f7da8;
        }
    }
    ctx->pc = 0x1F7D64u;
    // 0x1f7d64: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1f7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1f7d68: 0x8ce60260  lw          $a2, 0x260($a3)
    ctx->pc = 0x1f7d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 608)));
    // 0x1f7d6c: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1f7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1f7d70: 0x8c480220  lw          $t0, 0x220($v0)
    ctx->pc = 0x1f7d70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x1f7d74: 0x24c20028  addiu       $v0, $a2, 0x28
    ctx->pc = 0x1f7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x1f7d78: 0xace20260  sw          $v0, 0x260($a3)
    ctx->pc = 0x1f7d78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 608), GPR_U32(ctx, 2));
    // 0x1f7d7c: 0x8c621a04  lw          $v0, 0x1A04($v1)
    ctx->pc = 0x1f7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6660)));
    // 0x1f7d80: 0x10480003  beq         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7D80u;
    {
        const bool branch_taken_0x1f7d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1F7D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D80u;
            // 0x1f7d84: 0x24691a04  addiu       $t1, $v1, 0x1A04 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d80) {
            ctx->pc = 0x1F7D90u;
            goto label_1f7d90;
        }
    }
    ctx->pc = 0x1F7D88u;
    // 0x1f7d88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7d8c: 0xae2217e4  sw          $v0, 0x17E4($s1)
    ctx->pc = 0x1f7d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 2));
label_1f7d90:
    // 0x1f7d90: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F7D90u;
    {
        const bool branch_taken_0x1f7d90 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1F7D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D90u;
            // 0x1f7d94: 0x2a010010  slti        $at, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d90) {
            ctx->pc = 0x1F7E04u;
            goto label_1f7e04;
        }
    }
    ctx->pc = 0x1F7D98u;
    // 0x1f7d98: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7D98u;
    {
        const bool branch_taken_0x1f7d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7d98) {
            ctx->pc = 0x1F7E04u;
            goto label_1f7e04;
        }
    }
    ctx->pc = 0x1F7DA0u;
    // 0x1f7da0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F7DA0u;
    {
        const bool branch_taken_0x1f7da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DA0u;
            // 0x1f7da4: 0xad280000  sw          $t0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7da0) {
            ctx->pc = 0x1F7E04u;
            goto label_1f7e04;
        }
    }
    ctx->pc = 0x1F7DA8u;
label_1f7da8:
    // 0x1f7da8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f7da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f7dac: 0x16c20015  bne         $s6, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7DACu;
    {
        const bool branch_taken_0x1f7dac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DACu;
            // 0x1f7db0: 0x2fd1021  addu        $v0, $s7, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dac) {
            ctx->pc = 0x1F7E04u;
            goto label_1f7e04;
        }
    }
    ctx->pc = 0x1F7DB4u;
    // 0x1f7db4: 0x24540180  addiu       $s4, $v0, 0x180
    ctx->pc = 0x1f7db4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1f7db8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7DB8u;
    SET_GPR_U32(ctx, 31, 0x1F7DC0u);
    ctx->pc = 0x1F7DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DB8u;
            // 0x1f7dbc: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7DC0u; }
        if (ctx->pc != 0x1F7DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7DC0u; }
        if (ctx->pc != 0x1F7DC0u) { return; }
    }
    ctx->pc = 0x1F7DC0u;
label_1f7dc0:
    // 0x1f7dc0: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x1f7dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f7dc4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7DC4u;
    SET_GPR_U32(ctx, 31, 0x1F7DCCu);
    ctx->pc = 0x1F7DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DC4u;
            // 0x1f7dc8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7DCCu; }
        if (ctx->pc != 0x1F7DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7DCCu; }
        if (ctx->pc != 0x1F7DCCu) { return; }
    }
    ctx->pc = 0x1F7DCCu;
label_1f7dcc:
    // 0x1f7dcc: 0xc68c0008  lwc1        $f12, 0x8($s4)
    ctx->pc = 0x1f7dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f7dd0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7DD0u;
    SET_GPR_U32(ctx, 31, 0x1F7DD8u);
    ctx->pc = 0x1F7DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DD0u;
            // 0x1f7dd4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7DD8u; }
        if (ctx->pc != 0x1F7DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7DD8u; }
        if (ctx->pc != 0x1F7DD8u) { return; }
    }
    ctx->pc = 0x1F7DD8u;
label_1f7dd8:
    // 0x1f7dd8: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7DD8u;
    {
        const bool branch_taken_0x1f7dd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1F7DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DD8u;
            // 0x1f7ddc: 0x2a010014  slti        $at, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dd8) {
            ctx->pc = 0x1F7E04u;
            goto label_1f7e04;
        }
    }
    ctx->pc = 0x1F7DE0u;
    // 0x1f7de0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7DE0u;
    {
        const bool branch_taken_0x1f7de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DE0u;
            // 0x1f7de4: 0x23c00  sll         $a3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7de0) {
            ctx->pc = 0x1F7E04u;
            goto label_1f7e04;
        }
    }
    ctx->pc = 0x1F7DE8u;
    // 0x1f7de8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1f7de8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7dec: 0x141a00  sll         $v1, $s4, 8
    ctx->pc = 0x1f7decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
    // 0x1f7df0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1f7df0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1f7df4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1f7df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f7df8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1f7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1f7dfc: 0x3c31825  or          $v1, $fp, $v1
    ctx->pc = 0x1f7dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
    // 0x1f7e00: 0xac431cd4  sw          $v1, 0x1CD4($v0)
    ctx->pc = 0x1f7e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7380), GPR_U32(ctx, 3));
label_1f7e04:
    // 0x1f7e04: 0x0  nop
    ctx->pc = 0x1f7e04u;
    // NOP
    // 0x1f7e08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7e0c: 0x12c20016  beq         $s6, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7E0Cu;
    {
        const bool branch_taken_0x1f7e0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E0Cu;
            // 0x1f7e10: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e0c) {
            ctx->pc = 0x1F7E68u;
            goto label_1f7e68;
        }
    }
    ctx->pc = 0x1F7E14u;
    // 0x1f7e14: 0x8c5402d0  lw          $s4, 0x2D0($v0)
    ctx->pc = 0x1f7e14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1f7e18: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7E18u;
    {
        const bool branch_taken_0x1f7e18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E18u;
            // 0x1f7e1c: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e18) {
            ctx->pc = 0x1F7E38u;
            goto label_1f7e38;
        }
    }
    ctx->pc = 0x1F7E20u;
    // 0x1f7e20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f7e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e24: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1F7E24u;
    SET_GPR_U32(ctx, 31, 0x1F7E2Cu);
    ctx->pc = 0x1F7E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E24u;
            // 0x1f7e28: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7E2Cu; }
        if (ctx->pc != 0x1F7E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7E2Cu; }
        if (ctx->pc != 0x1F7E2Cu) { return; }
    }
    ctx->pc = 0x1F7E2Cu;
label_1f7e2c:
    // 0x1f7e2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7E2Cu;
    {
        const bool branch_taken_0x1f7e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E2Cu;
            // 0x1f7e30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e2c) {
            ctx->pc = 0x1F7E38u;
            goto label_1f7e38;
        }
    }
    ctx->pc = 0x1F7E34u;
    // 0x1f7e34: 0xae2217e4  sw          $v0, 0x17E4($s1)
    ctx->pc = 0x1f7e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 2));
label_1f7e38:
    // 0x1f7e38: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7E38u;
    {
        const bool branch_taken_0x1f7e38 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E38u;
            // 0x1f7e3c: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e38) {
            ctx->pc = 0x1F7E4Cu;
            goto label_1f7e4c;
        }
    }
    ctx->pc = 0x1F7E40u;
    // 0x1f7e40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f7e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e44: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F7E44u;
    SET_GPR_U32(ctx, 31, 0x1F7E4Cu);
    ctx->pc = 0x1F7E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E44u;
            // 0x1f7e48: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7E4Cu; }
        if (ctx->pc != 0x1F7E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7E4Cu; }
        if (ctx->pc != 0x1F7E4Cu) { return; }
    }
    ctx->pc = 0x1F7E4Cu;
label_1f7e4c:
    // 0x1f7e4c: 0x0  nop
    ctx->pc = 0x1f7e4cu;
    // NOP
    // 0x1f7e50: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7E50u;
    {
        const bool branch_taken_0x1f7e50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E50u;
            // 0x1f7e54: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e50) {
            ctx->pc = 0x1F7E68u;
            goto label_1f7e68;
        }
    }
    ctx->pc = 0x1F7E58u;
    // 0x1f7e58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f7e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f7e5c: 0x24a58a58  addiu       $a1, $a1, -0x75A8
    ctx->pc = 0x1f7e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937176));
    // 0x1f7e60: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F7E60u;
    SET_GPR_U32(ctx, 31, 0x1F7E68u);
    ctx->pc = 0x1F7E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E60u;
            // 0x1f7e64: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7E68u; }
        if (ctx->pc != 0x1F7E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7E68u; }
        if (ctx->pc != 0x1F7E68u) { return; }
    }
    ctx->pc = 0x1F7E68u;
label_1f7e68:
    // 0x1f7e68: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x1f7e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x1f7e6c: 0x24420260  addiu       $v0, $v0, 0x260
    ctx->pc = 0x1f7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x1f7e70: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1f7e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f7e74: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7E74u;
    {
        const bool branch_taken_0x1f7e74 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1F7E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E74u;
            // 0x1f7e78: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e74) {
            ctx->pc = 0x1F7E9Cu;
            goto label_1f7e9c;
        }
    }
    ctx->pc = 0x1F7E7Cu;
    // 0x1f7e7c: 0x2a010014  slti        $at, $s0, 0x14
    ctx->pc = 0x1f7e7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f7e80: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7E80u;
    {
        const bool branch_taken_0x1f7e80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E80u;
            // 0x1f7e84: 0x2353821  addu        $a3, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e80) {
            ctx->pc = 0x1F7E9Cu;
            goto label_1f7e9c;
        }
    }
    ctx->pc = 0x1F7E88u;
    // 0x1f7e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7e8c: 0xace21b94  sw          $v0, 0x1B94($a3)
    ctx->pc = 0x1f7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7060), GPR_U32(ctx, 2));
    // 0x1f7e90: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1f7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1f7e94: 0xace61b98  sw          $a2, 0x1B98($a3)
    ctx->pc = 0x1f7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7064), GPR_U32(ctx, 6));
    // 0x1f7e98: 0xac431c34  sw          $v1, 0x1C34($v0)
    ctx->pc = 0x1f7e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7220), GPR_U32(ctx, 3));
label_1f7e9c:
    // 0x1f7e9c: 0x0  nop
    ctx->pc = 0x1f7e9cu;
    // NOP
    // 0x1f7ea0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f7ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f7ea4: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x1f7ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f7ea8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1f7ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1f7eac: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f7eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f7eb0: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1f7eb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1f7eb4: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1F7EB4u;
    {
        const bool branch_taken_0x1f7eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7EB4u;
            // 0x1f7eb8: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7eb4) {
            ctx->pc = 0x1F7D54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f7d54;
        }
    }
    ctx->pc = 0x1F7EBCu;
    // 0x1f7ebc: 0x93829040  lbu         $v0, -0x6FC0($gp)
    ctx->pc = 0x1f7ebcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938688)));
    // 0x1f7ec0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7EC0u;
    {
        const bool branch_taken_0x1f7ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7EC0u;
            // 0x1f7ec4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ec0) {
            ctx->pc = 0x1F7ECCu;
            goto label_1f7ecc;
        }
    }
    ctx->pc = 0x1F7EC8u;
    // 0x1f7ec8: 0xae2217e4  sw          $v0, 0x17E4($s1)
    ctx->pc = 0x1f7ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 2));
label_1f7ecc:
    // 0x1f7ecc: 0x0  nop
    ctx->pc = 0x1f7eccu;
    // NOP
    // 0x1f7ed0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1f7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f7ed4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1f7ed4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7edc: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F7EDCu;
    {
        const bool branch_taken_0x1f7edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7edc) {
            ctx->pc = 0x1F7F24u;
            goto label_1f7f24;
        }
    }
    ctx->pc = 0x1F7EE4u;
    // 0x1f7ee4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f7ee8: 0xc7a002a4  lwc1        $f0, 0x2A4($sp)
    ctx->pc = 0x1f7ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7eec: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1f7eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7ef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f7ef4: 0x3c02436e  lui         $v0, 0x436E
    ctx->pc = 0x1f7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17262 << 16));
    // 0x1f7ef8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f7ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f7efc: 0x0  nop
    ctx->pc = 0x1f7efcu;
    // NOP
    // 0x1f7f00: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1f7f00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1f7f04: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1f7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1f7f08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f7f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7f0c: 0x0  nop
    ctx->pc = 0x1f7f0cu;
    // NOP
    // 0x1f7f10: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1f7f10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f7f14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f7f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7f18: 0x0  nop
    ctx->pc = 0x1f7f18u;
    // NOP
    // 0x1f7f1c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1F7F1Cu;
    {
        const bool branch_taken_0x1f7f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7f1c) {
            ctx->pc = 0x1F7F70u;
            goto label_1f7f70;
        }
    }
    ctx->pc = 0x1F7F24u;
label_1f7f24:
    // 0x1f7f24: 0x0  nop
    ctx->pc = 0x1f7f24u;
    // NOP
    // 0x1f7f28: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7F28u;
    {
        const bool branch_taken_0x1f7f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7f28) {
            ctx->pc = 0x1F7F84u;
            goto label_1f7f84;
        }
    }
    ctx->pc = 0x1F7F30u;
    // 0x1f7f30: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f7f34: 0xc7a002a4  lwc1        $f0, 0x2A4($sp)
    ctx->pc = 0x1f7f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f38: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1f7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7f3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f7f40: 0x3c02436e  lui         $v0, 0x436E
    ctx->pc = 0x1f7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17262 << 16));
    // 0x1f7f44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f7f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f7f48: 0x0  nop
    ctx->pc = 0x1f7f48u;
    // NOP
    // 0x1f7f4c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1f7f4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1f7f50: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1f7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1f7f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f7f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7f58: 0x0  nop
    ctx->pc = 0x1f7f58u;
    // NOP
    // 0x1f7f5c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1f7f5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f7f60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f7f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7f64: 0x0  nop
    ctx->pc = 0x1f7f64u;
    // NOP
    // 0x1f7f68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7F68u;
    {
        const bool branch_taken_0x1f7f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7f68) {
            ctx->pc = 0x1F7F84u;
            goto label_1f7f84;
        }
    }
    ctx->pc = 0x1F7F70u;
label_1f7f70:
    // 0x1f7f70: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1f7f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7f78: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1f7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1f7f7c: 0xae231bd4  sw          $v1, 0x1BD4($s1)
    ctx->pc = 0x1f7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7124), GPR_U32(ctx, 3));
    // 0x1f7f80: 0xae221c54  sw          $v0, 0x1C54($s1)
    ctx->pc = 0x1f7f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7252), GPR_U32(ctx, 2));
label_1f7f84:
    // 0x1f7f84: 0x0  nop
    ctx->pc = 0x1f7f84u;
    // NOP
    // 0x1f7f88: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1f7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f7f8c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1f7f90: 0x2463e8f0  addiu       $v1, $v1, -0x1710
    ctx->pc = 0x1f7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961392));
    // 0x1f7f94: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1f7f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7f98: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f7f9c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1f7f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7fa0: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1f7fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7fa8: 0x0  nop
    ctx->pc = 0x1f7fa8u;
    // NOP
    // 0x1f7fac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f7fb0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7FB0u;
    SET_GPR_U32(ctx, 31, 0x1F7FB8u);
    ctx->pc = 0x1F7FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7FB0u;
            // 0x1f7fb4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7FB8u; }
        if (ctx->pc != 0x1F7FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7FB8u; }
        if (ctx->pc != 0x1F7FB8u) { return; }
    }
    ctx->pc = 0x1F7FB8u;
label_1f7fb8:
    // 0x1f7fb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f7fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fbc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f7fc0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1f7fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7fc4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1f7fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f7fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7fcc: 0x0  nop
    ctx->pc = 0x1f7fccu;
    // NOP
    // 0x1f7fd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f7fd4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F7FD4u;
    SET_GPR_U32(ctx, 31, 0x1F7FDCu);
    ctx->pc = 0x1F7FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7FD4u;
            // 0x1f7fd8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7FDCu; }
        if (ctx->pc != 0x1F7FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7FDCu; }
        if (ctx->pc != 0x1F7FDCu) { return; }
    }
    ctx->pc = 0x1F7FDCu;
label_1f7fdc:
    // 0x1f7fdc: 0xae221bdc  sw          $v0, 0x1BDC($s1)
    ctx->pc = 0x1f7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7132), GPR_U32(ctx, 2));
    // 0x1f7fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7fe4: 0xae321be0  sw          $s2, 0x1BE0($s1)
    ctx->pc = 0x1f7fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7136), GPR_U32(ctx, 18));
    // 0x1f7fe8: 0xae221c58  sw          $v0, 0x1C58($s1)
    ctx->pc = 0x1f7fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7256), GPR_U32(ctx, 2));
    // 0x1f7fec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f7ff0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1f7ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7ff4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x1f7ff4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1f7ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7ffc: 0x0  nop
    ctx->pc = 0x1f7ffcu;
    // NOP
    // 0x1f8000: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f8000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f8004: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F8004u;
    SET_GPR_U32(ctx, 31, 0x1F800Cu);
    ctx->pc = 0x1F8008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8004u;
            // 0x1f8008: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F800Cu; }
        if (ctx->pc != 0x1F800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F800Cu; }
        if (ctx->pc != 0x1F800Cu) { return; }
    }
    ctx->pc = 0x1F800Cu;
label_1f800c:
    // 0x1f800c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f800cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8010: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f8014: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1f8014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8018: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x1f8018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f801c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f801cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8020: 0x0  nop
    ctx->pc = 0x1f8020u;
    // NOP
    // 0x1f8024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f8024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f8028: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F8028u;
    SET_GPR_U32(ctx, 31, 0x1F8030u);
    ctx->pc = 0x1F802Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8028u;
            // 0x1f802c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8030u; }
        if (ctx->pc != 0x1F8030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8030u; }
        if (ctx->pc != 0x1F8030u) { return; }
    }
    ctx->pc = 0x1F8030u;
label_1f8030:
    // 0x1f8030: 0xae221be4  sw          $v0, 0x1BE4($s1)
    ctx->pc = 0x1f8030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7140), GPR_U32(ctx, 2));
    // 0x1f8034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8038: 0xae321be8  sw          $s2, 0x1BE8($s1)
    ctx->pc = 0x1f8038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7144), GPR_U32(ctx, 18));
    // 0x1f803c: 0xae221c5c  sw          $v0, 0x1C5C($s1)
    ctx->pc = 0x1f803cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7260), GPR_U32(ctx, 2));
    // 0x1f8040: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1f8040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f8044: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F8044u;
    {
        const bool branch_taken_0x1f8044 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f8044) {
            ctx->pc = 0x1F80E8u;
            goto label_1f80e8;
        }
    }
    ctx->pc = 0x1F804Cu;
    // 0x1f804c: 0x16c00026  bnez        $s6, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F804Cu;
    {
        const bool branch_taken_0x1f804c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f804c) {
            ctx->pc = 0x1F80E8u;
            goto label_1f80e8;
        }
    }
    ctx->pc = 0x1F8054u;
    // 0x1f8054: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f8054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f8058: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1f8058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f805c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x1f805cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1f8060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8064: 0x0  nop
    ctx->pc = 0x1f8064u;
    // NOP
    // 0x1f8068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f8068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f806c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F806Cu;
    SET_GPR_U32(ctx, 31, 0x1F8074u);
    ctx->pc = 0x1F8070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F806Cu;
            // 0x1f8070: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8074u; }
        if (ctx->pc != 0x1F8074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8074u; }
        if (ctx->pc != 0x1F8074u) { return; }
    }
    ctx->pc = 0x1F8074u;
label_1f8074:
    // 0x1f8074: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f8074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8078: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f8078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f807c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8080: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x1f8080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x1f8084: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f8084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8088: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F8088u;
    SET_GPR_U32(ctx, 31, 0x1F8090u);
    ctx->pc = 0x1F808Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8088u;
            // 0x1f808c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8090u; }
        if (ctx->pc != 0x1F8090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8090u; }
        if (ctx->pc != 0x1F8090u) { return; }
    }
    ctx->pc = 0x1F8090u;
label_1f8090:
    // 0x1f8090: 0xae221bdc  sw          $v0, 0x1BDC($s1)
    ctx->pc = 0x1f8090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7132), GPR_U32(ctx, 2));
    // 0x1f8094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8098: 0xae321be0  sw          $s2, 0x1BE0($s1)
    ctx->pc = 0x1f8098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7136), GPR_U32(ctx, 18));
    // 0x1f809c: 0xae221c58  sw          $v0, 0x1C58($s1)
    ctx->pc = 0x1f809cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7256), GPR_U32(ctx, 2));
    // 0x1f80a0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x1f80a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1f80a4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f80a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f80a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f80ac: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1f80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f80b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f80b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f80b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F80B4u;
    SET_GPR_U32(ctx, 31, 0x1F80BCu);
    ctx->pc = 0x1F80B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F80B4u;
            // 0x1f80b8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F80BCu; }
        if (ctx->pc != 0x1F80BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F80BCu; }
        if (ctx->pc != 0x1F80BCu) { return; }
    }
    ctx->pc = 0x1F80BCu;
label_1f80bc:
    // 0x1f80bc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1f80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f80c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f80c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f80c4: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x1f80c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f80c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f80cc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f80ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f80d0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F80D0u;
    SET_GPR_U32(ctx, 31, 0x1F80D8u);
    ctx->pc = 0x1F80D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F80D0u;
            // 0x1f80d4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F80D8u; }
        if (ctx->pc != 0x1F80D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F80D8u; }
        if (ctx->pc != 0x1F80D8u) { return; }
    }
    ctx->pc = 0x1F80D8u;
label_1f80d8:
    // 0x1f80d8: 0xae221be4  sw          $v0, 0x1BE4($s1)
    ctx->pc = 0x1f80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7140), GPR_U32(ctx, 2));
    // 0x1f80dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f80e0: 0xae301be8  sw          $s0, 0x1BE8($s1)
    ctx->pc = 0x1f80e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7144), GPR_U32(ctx, 16));
    // 0x1f80e4: 0xae221c5c  sw          $v0, 0x1C5C($s1)
    ctx->pc = 0x1f80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7260), GPR_U32(ctx, 2));
label_1f80e8:
    // 0x1f80e8: 0x26c505f0  addiu       $a1, $s6, 0x5F0
    ctx->pc = 0x1f80e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1520));
    // 0x1f80ec: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x1F80ECu;
    SET_GPR_U32(ctx, 31, 0x1F80F4u);
    ctx->pc = 0x1F80F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F80ECu;
            // 0x1f80f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F80F4u; }
        if (ctx->pc != 0x1F80F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F80F4u; }
        if (ctx->pc != 0x1F80F4u) { return; }
    }
    ctx->pc = 0x1F80F4u;
label_1f80f4:
    // 0x1f80f4: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x1F80F4u;
    SET_GPR_U32(ctx, 31, 0x1F80FCu);
    ctx->pc = 0x1F80F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F80F4u;
            // 0x1f80f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F80FCu; }
        if (ctx->pc != 0x1F80FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F80FCu; }
        if (ctx->pc != 0x1F80FCu) { return; }
    }
    ctx->pc = 0x1F80FCu;
label_1f80fc:
    // 0x1f80fc: 0x0  nop
    ctx->pc = 0x1f80fcu;
    // NOP
    // 0x1f8100: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f8100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f8104: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1f8104u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1f8108: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1f8108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1f810c: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1f810cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1f8110: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1f8110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f8114: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f8114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f8118: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1f8118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1f811c: 0x2ac30007  slti        $v1, $s6, 0x7
    ctx->pc = 0x1f811cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f8120: 0x1460fdd4  bnez        $v1, . + 4 + (-0x22C << 2)
    ctx->pc = 0x1F8120u;
    {
        const bool branch_taken_0x1f8120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8120) {
            ctx->pc = 0x1F7874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f7874;
        }
    }
    ctx->pc = 0x1F8128u;
    // 0x1f8128: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1f8128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f812c: 0x3c034258  lui         $v1, 0x4258
    ctx->pc = 0x1f812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16984 << 16));
    // 0x1f8130: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f8134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8138: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f8138u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f813c: 0x8c23b8e8  lw          $v1, -0x4718($at)
    ctx->pc = 0x1f813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949096)));
    // 0x1f8140: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8144: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8148: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f8148u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f814c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f814cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8150: 0xe420b8bc  swc1        $f0, -0x4744($at)
    ctx->pc = 0x1f8150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949052), bits); }
    // 0x1f8154: 0x93839040  lbu         $v1, -0x6FC0($gp)
    ctx->pc = 0x1f8154u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938688)));
    // 0x1f8158: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8158u;
    {
        const bool branch_taken_0x1f8158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8158) {
            ctx->pc = 0x1F8174u;
            goto label_1f8174;
        }
    }
    ctx->pc = 0x1F8160u;
    // 0x1f8160: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1f8160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1f8164: 0xa3809044  sb          $zero, -0x6FBC($gp)
    ctx->pc = 0x1f8164u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938692), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8168: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1f8168u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1f816c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1f816cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1f8170: 0xa3839040  sb          $v1, -0x6FC0($gp)
    ctx->pc = 0x1f8170u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938688), (uint8_t)GPR_U32(ctx, 3));
label_1f8174:
    // 0x1f8174: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f8174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f8178: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1f8178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f817c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1f817cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f8180: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f8180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f8184: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1f8184u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8188: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1f8188u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f818c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1f818cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8190: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f8190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8194: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f8194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8198: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f8198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f819c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f819cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f81a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f81a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f81a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F81A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F81A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F81A4u;
            // 0x1f81a8: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F81ACu;
}
