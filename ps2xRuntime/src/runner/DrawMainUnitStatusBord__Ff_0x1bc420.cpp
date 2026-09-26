#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMainUnitStatusBord__Ff
// Address: 0x1bc420 - 0x1bd6b4
void DrawMainUnitStatusBord__Ff_0x1bc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMainUnitStatusBord__Ff_0x1bc420");
#endif

    switch (ctx->pc) {
        case 0x1bc494u: goto label_1bc494;
        case 0x1bc4b8u: goto label_1bc4b8;
        case 0x1bc4c8u: goto label_1bc4c8;
        case 0x1bc4f4u: goto label_1bc4f4;
        case 0x1bc504u: goto label_1bc504;
        case 0x1bc510u: goto label_1bc510;
        case 0x1bc51cu: goto label_1bc51c;
        case 0x1bc528u: goto label_1bc528;
        case 0x1bc53cu: goto label_1bc53c;
        case 0x1bc54cu: goto label_1bc54c;
        case 0x1bc600u: goto label_1bc600;
        case 0x1bc60cu: goto label_1bc60c;
        case 0x1bc614u: goto label_1bc614;
        case 0x1bc624u: goto label_1bc624;
        case 0x1bc62cu: goto label_1bc62c;
        case 0x1bc638u: goto label_1bc638;
        case 0x1bc644u: goto label_1bc644;
        case 0x1bc650u: goto label_1bc650;
        case 0x1bc668u: goto label_1bc668;
        case 0x1bc688u: goto label_1bc688;
        case 0x1bc6a8u: goto label_1bc6a8;
        case 0x1bc6c8u: goto label_1bc6c8;
        case 0x1bc6d4u: goto label_1bc6d4;
        case 0x1bc6e4u: goto label_1bc6e4;
        case 0x1bc6ecu: goto label_1bc6ec;
        case 0x1bc71cu: goto label_1bc71c;
        case 0x1bc728u: goto label_1bc728;
        case 0x1bc758u: goto label_1bc758;
        case 0x1bc764u: goto label_1bc764;
        case 0x1bc794u: goto label_1bc794;
        case 0x1bc7a0u: goto label_1bc7a0;
        case 0x1bc854u: goto label_1bc854;
        case 0x1bc85cu: goto label_1bc85c;
        case 0x1bc864u: goto label_1bc864;
        case 0x1bc888u: goto label_1bc888;
        case 0x1bc890u: goto label_1bc890;
        case 0x1bc8b8u: goto label_1bc8b8;
        case 0x1bc8d4u: goto label_1bc8d4;
        case 0x1bc8e0u: goto label_1bc8e0;
        case 0x1bc8ecu: goto label_1bc8ec;
        case 0x1bc948u: goto label_1bc948;
        case 0x1bc950u: goto label_1bc950;
        case 0x1bc95cu: goto label_1bc95c;
        case 0x1bc968u: goto label_1bc968;
        case 0x1bc978u: goto label_1bc978;
        case 0x1bc994u: goto label_1bc994;
        case 0x1bc9a4u: goto label_1bc9a4;
        case 0x1bc9e4u: goto label_1bc9e4;
        case 0x1bca18u: goto label_1bca18;
        case 0x1bca30u: goto label_1bca30;
        case 0x1bca38u: goto label_1bca38;
        case 0x1bca9cu: goto label_1bca9c;
        case 0x1bcaa4u: goto label_1bcaa4;
        case 0x1bcab0u: goto label_1bcab0;
        case 0x1bcabcu: goto label_1bcabc;
        case 0x1bcad4u: goto label_1bcad4;
        case 0x1bcadcu: goto label_1bcadc;
        case 0x1bcb14u: goto label_1bcb14;
        case 0x1bcb30u: goto label_1bcb30;
        case 0x1bcb40u: goto label_1bcb40;
        case 0x1bcb7cu: goto label_1bcb7c;
        case 0x1bcb98u: goto label_1bcb98;
        case 0x1bcba0u: goto label_1bcba0;
        case 0x1bcbacu: goto label_1bcbac;
        case 0x1bcbb8u: goto label_1bcbb8;
        case 0x1bcbd0u: goto label_1bcbd0;
        case 0x1bcc10u: goto label_1bcc10;
        case 0x1bcc24u: goto label_1bcc24;
        case 0x1bcc34u: goto label_1bcc34;
        case 0x1bcc48u: goto label_1bcc48;
        case 0x1bcc58u: goto label_1bcc58;
        case 0x1bcc6cu: goto label_1bcc6c;
        case 0x1bcc7cu: goto label_1bcc7c;
        case 0x1bcc90u: goto label_1bcc90;
        case 0x1bcc9cu: goto label_1bcc9c;
        case 0x1bccb4u: goto label_1bccb4;
        case 0x1bccdcu: goto label_1bccdc;
        case 0x1bccf4u: goto label_1bccf4;
        case 0x1bcd1cu: goto label_1bcd1c;
        case 0x1bcd5cu: goto label_1bcd5c;
        case 0x1bcd98u: goto label_1bcd98;
        case 0x1bcde8u: goto label_1bcde8;
        case 0x1bcdf4u: goto label_1bcdf4;
        case 0x1bce18u: goto label_1bce18;
        case 0x1bce38u: goto label_1bce38;
        case 0x1bce5cu: goto label_1bce5c;
        case 0x1bce70u: goto label_1bce70;
        case 0x1bce9cu: goto label_1bce9c;
        case 0x1bcea8u: goto label_1bcea8;
        case 0x1bced8u: goto label_1bced8;
        case 0x1bcee4u: goto label_1bcee4;
        case 0x1bcf04u: goto label_1bcf04;
        case 0x1bcf30u: goto label_1bcf30;
        case 0x1bcf48u: goto label_1bcf48;
        case 0x1bcf78u: goto label_1bcf78;
        case 0x1bcf88u: goto label_1bcf88;
        case 0x1bcf9cu: goto label_1bcf9c;
        case 0x1bcfa8u: goto label_1bcfa8;
        case 0x1bcfc0u: goto label_1bcfc0;
        case 0x1bcfd0u: goto label_1bcfd0;
        case 0x1bcfe4u: goto label_1bcfe4;
        case 0x1bcff4u: goto label_1bcff4;
        case 0x1bd008u: goto label_1bd008;
        case 0x1bd018u: goto label_1bd018;
        case 0x1bd02cu: goto label_1bd02c;
        case 0x1bd03cu: goto label_1bd03c;
        case 0x1bd050u: goto label_1bd050;
        case 0x1bd058u: goto label_1bd058;
        case 0x1bd068u: goto label_1bd068;
        case 0x1bd094u: goto label_1bd094;
        case 0x1bd0a8u: goto label_1bd0a8;
        case 0x1bd0b4u: goto label_1bd0b4;
        case 0x1bd0c4u: goto label_1bd0c4;
        case 0x1bd0d8u: goto label_1bd0d8;
        case 0x1bd0e8u: goto label_1bd0e8;
        case 0x1bd0fcu: goto label_1bd0fc;
        case 0x1bd10cu: goto label_1bd10c;
        case 0x1bd120u: goto label_1bd120;
        case 0x1bd130u: goto label_1bd130;
        case 0x1bd144u: goto label_1bd144;
        case 0x1bd14cu: goto label_1bd14c;
        case 0x1bd188u: goto label_1bd188;
        case 0x1bd1c4u: goto label_1bd1c4;
        case 0x1bd214u: goto label_1bd214;
        case 0x1bd220u: goto label_1bd220;
        case 0x1bd244u: goto label_1bd244;
        case 0x1bd268u: goto label_1bd268;
        case 0x1bd28cu: goto label_1bd28c;
        case 0x1bd2a0u: goto label_1bd2a0;
        case 0x1bd2ccu: goto label_1bd2cc;
        case 0x1bd2d8u: goto label_1bd2d8;
        case 0x1bd308u: goto label_1bd308;
        case 0x1bd314u: goto label_1bd314;
        case 0x1bd324u: goto label_1bd324;
        case 0x1bd338u: goto label_1bd338;
        case 0x1bd344u: goto label_1bd344;
        case 0x1bd354u: goto label_1bd354;
        case 0x1bd368u: goto label_1bd368;
        case 0x1bd378u: goto label_1bd378;
        case 0x1bd38cu: goto label_1bd38c;
        case 0x1bd39cu: goto label_1bd39c;
        case 0x1bd3b0u: goto label_1bd3b0;
        case 0x1bd3c0u: goto label_1bd3c0;
        case 0x1bd3d4u: goto label_1bd3d4;
        case 0x1bd3dcu: goto label_1bd3dc;
        case 0x1bd3ecu: goto label_1bd3ec;
        case 0x1bd418u: goto label_1bd418;
        case 0x1bd434u: goto label_1bd434;
        case 0x1bd43cu: goto label_1bd43c;
        case 0x1bd448u: goto label_1bd448;
        case 0x1bd458u: goto label_1bd458;
        case 0x1bd46cu: goto label_1bd46c;
        case 0x1bd47cu: goto label_1bd47c;
        case 0x1bd490u: goto label_1bd490;
        case 0x1bd4a0u: goto label_1bd4a0;
        case 0x1bd4b4u: goto label_1bd4b4;
        case 0x1bd4c4u: goto label_1bd4c4;
        case 0x1bd4d8u: goto label_1bd4d8;
        case 0x1bd4e0u: goto label_1bd4e0;
        case 0x1bd500u: goto label_1bd500;
        case 0x1bd52cu: goto label_1bd52c;
        case 0x1bd544u: goto label_1bd544;
        case 0x1bd574u: goto label_1bd574;
        case 0x1bd598u: goto label_1bd598;
        default: break;
    }

    ctx->pc = 0x1bc420u;

    // 0x1bc420: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x1bc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x1bc424: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x1bc424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x1bc428: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1bc428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1bc42c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1bc42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bc430: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1bc430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1bc434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc438: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1bc438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1bc43c: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1bc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1bc440: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1bc440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1bc444: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1bc444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1bc448: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1bc448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1bc44c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1bc44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1bc450: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1bc450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1bc454: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1bc454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1bc458: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bc458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bc45c: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x1bc45cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1bc460: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x1bc460u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1bc464: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x1bc464u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1bc468: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1bc468u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1bc46c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1bc46cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1bc470: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x1bc470u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x1bc474: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x1bc474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x1bc478: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1bc478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1bc47c: 0x46180302  mul.s       $f12, $f0, $f24
    ctx->pc = 0x1bc47cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1bc480: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1bc480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bc484: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1bc484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1bc488: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1bc488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1bc48c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BC48Cu;
    SET_GPR_U32(ctx, 31, 0x1BC494u);
    ctx->pc = 0x1BC490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC48Cu;
            // 0x1bc490: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC494u; }
        if (ctx->pc != 0x1BC494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC494u; }
        if (ctx->pc != 0x1BC494u) { return; }
    }
    ctx->pc = 0x1BC494u;
label_1bc494:
    // 0x1bc494: 0x2450ffb8  addiu       $s0, $v0, -0x48
    ctx->pc = 0x1bc494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967224));
    // 0x1bc498: 0x24120244  addiu       $s2, $zero, 0x244
    ctx->pc = 0x1bc498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    // 0x1bc49c: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x1bc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1bc4a0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1bc4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4a4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1bc4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1bc4a8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1bc4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1bc4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc4b0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BC4B0u;
    SET_GPR_U32(ctx, 31, 0x1BC4B8u);
    ctx->pc = 0x1BC4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4B0u;
            // 0x1bc4b4: 0x46180302  mul.s       $f12, $f0, $f24 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4B8u; }
        if (ctx->pc != 0x1BC4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4B8u; }
        if (ctx->pc != 0x1BC4B8u) { return; }
    }
    ctx->pc = 0x1BC4B8u;
label_1bc4b8:
    // 0x1bc4b8: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1bc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1bc4bc: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x1bc4bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bc4c0: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x1BC4C0u;
    SET_GPR_U32(ctx, 31, 0x1BC4C8u);
    ctx->pc = 0x1BC4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4C0u;
            // 0x1bc4c4: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4C8u; }
        if (ctx->pc != 0x1BC4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4C8u; }
        if (ctx->pc != 0x1BC4C8u) { return; }
    }
    ctx->pc = 0x1BC4C8u;
label_1bc4c8:
    // 0x1bc4c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC4C8u;
    {
        const bool branch_taken_0x1bc4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4c8) {
            ctx->pc = 0x1BC4E4u;
            goto label_1bc4e4;
        }
    }
    ctx->pc = 0x1BC4D0u;
    // 0x1bc4d0: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x1bc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1bc4d4: 0x2410ffb8  addiu       $s0, $zero, -0x48
    ctx->pc = 0x1bc4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x1bc4d8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1bc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1bc4dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bc4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4e0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1bc4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1bc4e4:
    // 0x1bc4e4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bc4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1bc4e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4ec: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1BC4ECu;
    SET_GPR_U32(ctx, 31, 0x1BC4F4u);
    ctx->pc = 0x1BC4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4ECu;
            // 0x1bc4f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4F4u; }
        if (ctx->pc != 0x1BC4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4F4u; }
        if (ctx->pc != 0x1BC4F4u) { return; }
    }
    ctx->pc = 0x1BC4F4u;
label_1bc4f4:
    // 0x1bc4f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC4F4u;
    {
        const bool branch_taken_0x1bc4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4f4) {
            ctx->pc = 0x1BC508u;
            goto label_1bc508;
        }
    }
    ctx->pc = 0x1BC4FCu;
    // 0x1bc4fc: 0xc05a930  jal         func_16A4C0
    ctx->pc = 0x1BC4FCu;
    SET_GPR_U32(ctx, 31, 0x1BC504u);
    ctx->pc = 0x1BC500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4FCu;
            // 0x1bc500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A4C0u;
    if (runtime->hasFunction(0x16A4C0u)) {
        auto targetFn = runtime->lookupFunction(0x16A4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC504u; }
        if (ctx->pc != 0x1BC504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRunEvent__12CActionCharaFv_0x16a4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC504u; }
        if (ctx->pc != 0x1BC504u) { return; }
    }
    ctx->pc = 0x1BC504u;
label_1bc504:
    // 0x1bc504: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bc504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc508:
    // 0x1bc508: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1BC508u;
    SET_GPR_U32(ctx, 31, 0x1BC510u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC510u; }
        if (ctx->pc != 0x1BC510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC510u; }
        if (ctx->pc != 0x1BC510u) { return; }
    }
    ctx->pc = 0x1BC510u;
label_1bc510:
    // 0x1bc510: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1bc510u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc514: 0xc0680e8  jal         func_1A03A0
    ctx->pc = 0x1BC514u;
    SET_GPR_U32(ctx, 31, 0x1BC51Cu);
    ctx->pc = 0x1BC518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC514u;
            // 0x1bc518: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03A0u;
    if (runtime->hasFunction(0x1A03A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC51Cu; }
        if (ctx->pc != 0x1BC51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC51Cu; }
        if (ctx->pc != 0x1BC51Cu) { return; }
    }
    ctx->pc = 0x1BC51Cu;
label_1bc51c:
    // 0x1bc51c: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x1bc51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x1bc520: 0xc0680f8  jal         func_1A03E0
    ctx->pc = 0x1BC520u;
    SET_GPR_U32(ctx, 31, 0x1BC528u);
    ctx->pc = 0x1BC524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC520u;
            // 0x1bc524: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC528u; }
        if (ctx->pc != 0x1BC528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC528u; }
        if (ctx->pc != 0x1BC528u) { return; }
    }
    ctx->pc = 0x1BC528u;
label_1bc528:
    // 0x1bc528: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1bc528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1bc52c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bc52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc534: 0xc067e84  jal         func_19FA10
    ctx->pc = 0x1BC534u;
    SET_GPR_U32(ctx, 31, 0x1BC53Cu);
    ctx->pc = 0x1BC538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC534u;
            // 0x1bc538: 0x27a60460  addiu       $a2, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA10u;
    if (runtime->hasFunction(0x19FA10u)) {
        auto targetFn = runtime->lookupFunction(0x19FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC53Cu; }
        if (ctx->pc != 0x1BC53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC53Cu; }
        if (ctx->pc != 0x1BC53Cu) { return; }
    }
    ctx->pc = 0x1BC53Cu;
label_1bc53c:
    // 0x1bc53c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bc53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc540: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc544: 0xc067e84  jal         func_19FA10
    ctx->pc = 0x1BC544u;
    SET_GPR_U32(ctx, 31, 0x1BC54Cu);
    ctx->pc = 0x1BC548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC544u;
            // 0x1bc548: 0x27a60468  addiu       $a2, $sp, 0x468 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA10u;
    if (runtime->hasFunction(0x19FA10u)) {
        auto targetFn = runtime->lookupFunction(0x19FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC54Cu; }
        if (ctx->pc != 0x1BC54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC54Cu; }
        if (ctx->pc != 0x1BC54Cu) { return; }
    }
    ctx->pc = 0x1BC54Cu;
label_1bc54c:
    // 0x1bc54c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1bc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1bc550: 0xc7a30460  lwc1        $f3, 0x460($sp)
    ctx->pc = 0x1bc550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bc554: 0xc7a10468  lwc1        $f1, 0x468($sp)
    ctx->pc = 0x1bc554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc55c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1bc55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1bc560: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x1bc560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1bc564: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1bc564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1bc568: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1bc568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bc56c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bc56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc570: 0x27a20464  addiu       $v0, $sp, 0x464
    ctx->pc = 0x1bc570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1124));
    // 0x1bc574: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1bc574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bc578: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1bc578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1bc57c: 0x27a2046c  addiu       $v0, $sp, 0x46C
    ctx->pc = 0x1bc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1132));
    // 0x1bc580: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1bc580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc584: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bc584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bc588: 0x83828d64  lb          $v0, -0x729C($gp)
    ctx->pc = 0x1bc588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937956)));
    // 0x1bc58c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc58cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc590: 0x46042d03  div.s       $f20, $f5, $f4
    ctx->pc = 0x1bc590u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x1bc594: 0x46021d43  div.s       $f21, $f3, $f2
    ctx->pc = 0x1bc594u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1bc598: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1bc598u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bc59c: 0x0  nop
    ctx->pc = 0x1bc59cu;
    // NOP
    // 0x1bc5a0: 0x0  nop
    ctx->pc = 0x1bc5a0u;
    // NOP
    // 0x1bc5a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC5A4u;
    {
        const bool branch_taken_0x1bc5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc5a4) {
            ctx->pc = 0x1BC5B8u;
            goto label_1bc5b8;
        }
    }
    ctx->pc = 0x1BC5ACu;
    // 0x1bc5ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc5b0: 0xaf808d60  sw          $zero, -0x72A0($gp)
    ctx->pc = 0x1bc5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937952), GPR_U32(ctx, 0));
    // 0x1bc5b4: 0xa3828d64  sb          $v0, -0x729C($gp)
    ctx->pc = 0x1bc5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937956), (uint8_t)GPR_U32(ctx, 2));
label_1bc5b8:
    // 0x1bc5b8: 0xc7818d60  lwc1        $f1, -0x72A0($gp)
    ctx->pc = 0x1bc5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc5bc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1bc5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1bc5c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bc5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bc5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc5c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1bc5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc5cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bc5ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bc5d0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1bc5d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc5d4: 0x0  nop
    ctx->pc = 0x1bc5d4u;
    // NOP
    // 0x1bc5d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC5D8u;
    {
        const bool branch_taken_0x1bc5d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5D8u;
            // 0x1bc5dc: 0xe7818d60  swc1        $f1, -0x72A0($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5d8) {
            ctx->pc = 0x1BC5F8u;
            goto label_1bc5f8;
        }
    }
    ctx->pc = 0x1BC5E0u;
    // 0x1bc5e0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bc5e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bc5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bc5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc5ec: 0x0  nop
    ctx->pc = 0x1bc5ecu;
    // NOP
    // 0x1bc5f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bc5f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bc5f4: 0xe7808d60  swc1        $f0, -0x72A0($gp)
    ctx->pc = 0x1bc5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937952), bits); }
label_1bc5f8:
    // 0x1bc5f8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BC5F8u;
    SET_GPR_U32(ctx, 31, 0x1BC600u);
    ctx->pc = 0x1BC5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5F8u;
            // 0x1bc5fc: 0xc78c8d60  lwc1        $f12, -0x72A0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC600u; }
        if (ctx->pc != 0x1BC600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC600u; }
        if (ctx->pc != 0x1BC600u) { return; }
    }
    ctx->pc = 0x1BC600u;
label_1bc600:
    // 0x1bc600: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1bc600u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc604: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BC604u;
    SET_GPR_U32(ctx, 31, 0x1BC60Cu);
    ctx->pc = 0x1BC608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC604u;
            // 0x1bc608: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC60Cu; }
        if (ctx->pc != 0x1BC60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC60Cu; }
        if (ctx->pc != 0x1BC60Cu) { return; }
    }
    ctx->pc = 0x1BC60Cu;
label_1bc60c:
    // 0x1bc60c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BC60Cu;
    SET_GPR_U32(ctx, 31, 0x1BC614u);
    ctx->pc = 0x1BC610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC60Cu;
            // 0x1bc610: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC614u; }
        if (ctx->pc != 0x1BC614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC614u; }
        if (ctx->pc != 0x1BC614u) { return; }
    }
    ctx->pc = 0x1BC614u;
label_1bc614:
    // 0x1bc614: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc61c: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BC61Cu;
    SET_GPR_U32(ctx, 31, 0x1BC624u);
    ctx->pc = 0x1BC620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC61Cu;
            // 0x1bc620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC624u; }
        if (ctx->pc != 0x1BC624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC624u; }
        if (ctx->pc != 0x1BC624u) { return; }
    }
    ctx->pc = 0x1BC624u;
label_1bc624:
    // 0x1bc624: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BC624u;
    SET_GPR_U32(ctx, 31, 0x1BC62Cu);
    ctx->pc = 0x1BC628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC624u;
            // 0x1bc628: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC62Cu; }
        if (ctx->pc != 0x1BC62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC62Cu; }
        if (ctx->pc != 0x1BC62Cu) { return; }
    }
    ctx->pc = 0x1BC62Cu;
label_1bc62c:
    // 0x1bc62c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc630: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BC630u;
    SET_GPR_U32(ctx, 31, 0x1BC638u);
    ctx->pc = 0x1BC634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC630u;
            // 0x1bc634: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC638u; }
        if (ctx->pc != 0x1BC638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC638u; }
        if (ctx->pc != 0x1BC638u) { return; }
    }
    ctx->pc = 0x1BC638u;
label_1bc638:
    // 0x1bc638: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc63c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1BC63Cu;
    SET_GPR_U32(ctx, 31, 0x1BC644u);
    ctx->pc = 0x1BC640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC63Cu;
            // 0x1bc640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC644u; }
        if (ctx->pc != 0x1BC644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC644u; }
        if (ctx->pc != 0x1BC644u) { return; }
    }
    ctx->pc = 0x1BC644u;
label_1bc644:
    // 0x1bc644: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bc644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bc648: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BC648u;
    SET_GPR_U32(ctx, 31, 0x1BC650u);
    ctx->pc = 0x1BC64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC648u;
            // 0x1bc64c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC650u; }
        if (ctx->pc != 0x1BC650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC650u; }
        if (ctx->pc != 0x1BC650u) { return; }
    }
    ctx->pc = 0x1BC650u;
label_1bc650:
    // 0x1bc650: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bc650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bc654: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc658: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bc658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc65c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bc65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc660: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BC660u;
    SET_GPR_U32(ctx, 31, 0x1BC668u);
    ctx->pc = 0x1BC664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC660u;
            // 0x1bc664: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC668u; }
        if (ctx->pc != 0x1BC668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC668u; }
        if (ctx->pc != 0x1BC668u) { return; }
    }
    ctx->pc = 0x1BC668u;
label_1bc668:
    // 0x1bc668: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc66c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1bc66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bc670: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bc670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc674: 0x240700cb  addiu       $a3, $zero, 0xCB
    ctx->pc = 0x1bc674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x1bc678: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x1bc678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bc67c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc67cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc680: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BC680u;
    SET_GPR_U32(ctx, 31, 0x1BC688u);
    ctx->pc = 0x1BC684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC680u;
            // 0x1bc684: 0x240a008c  addiu       $t2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC688u; }
        if (ctx->pc != 0x1BC688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC688u; }
        if (ctx->pc != 0x1BC688u) { return; }
    }
    ctx->pc = 0x1BC688u;
label_1bc688:
    // 0x1bc688: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bc688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bc68c: 0x2626000e  addiu       $a2, $s1, 0xE
    ctx->pc = 0x1bc68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x1bc690: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc694: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x1bc694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x1bc698: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bc698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc69c: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1bc69cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bc6a0: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BC6A0u;
    SET_GPR_U32(ctx, 31, 0x1BC6A8u);
    ctx->pc = 0x1BC6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6A0u;
            // 0x1bc6a4: 0x240a00e8  addiu       $t2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6A8u; }
        if (ctx->pc != 0x1BC6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6A8u; }
        if (ctx->pc != 0x1BC6A8u) { return; }
    }
    ctx->pc = 0x1BC6A8u;
label_1bc6a8:
    // 0x1bc6a8: 0x26260012  addiu       $a2, $s1, 0x12
    ctx->pc = 0x1bc6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
    // 0x1bc6ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc6b0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1bc6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1bc6b4: 0x24070095  addiu       $a3, $zero, 0x95
    ctx->pc = 0x1bc6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x1bc6b8: 0x2408002f  addiu       $t0, $zero, 0x2F
    ctx->pc = 0x1bc6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1bc6bc: 0x240900ec  addiu       $t1, $zero, 0xEC
    ctx->pc = 0x1bc6bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x1bc6c0: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BC6C0u;
    SET_GPR_U32(ctx, 31, 0x1BC6C8u);
    ctx->pc = 0x1BC6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6C0u;
            // 0x1bc6c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6C8u; }
        if (ctx->pc != 0x1BC6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6C8u; }
        if (ctx->pc != 0x1BC6C8u) { return; }
    }
    ctx->pc = 0x1BC6C8u;
label_1bc6c8:
    // 0x1bc6c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bc6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc6cc: 0xc067ce0  jal         func_19F380
    ctx->pc = 0x1BC6CCu;
    SET_GPR_U32(ctx, 31, 0x1BC6D4u);
    ctx->pc = 0x1BC6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6CCu;
            // 0x1bc6d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6D4u; }
        if (ctx->pc != 0x1BC6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveItemInfo__16CBattleCharaInfoFi_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6D4u; }
        if (ctx->pc != 0x1BC6D4u) { return; }
    }
    ctx->pc = 0x1BC6D4u;
label_1bc6d4:
    // 0x1bc6d4: 0x8f858e88  lw          $a1, -0x7178($gp)
    ctx->pc = 0x1bc6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938248)));
    // 0x1bc6d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bc6d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc6dc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BC6DCu;
    SET_GPR_U32(ctx, 31, 0x1BC6E4u);
    ctx->pc = 0x1BC6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6DCu;
            // 0x1bc6e0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6E4u; }
        if (ctx->pc != 0x1BC6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6E4u; }
        if (ctx->pc != 0x1BC6E4u) { return; }
    }
    ctx->pc = 0x1BC6E4u;
label_1bc6e4:
    // 0x1bc6e4: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x1BC6E4u;
    SET_GPR_U32(ctx, 31, 0x1BC6ECu);
    ctx->pc = 0x1BC6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6E4u;
            // 0x1bc6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6ECu; }
        if (ctx->pc != 0x1BC6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6ECu; }
        if (ctx->pc != 0x1BC6ECu) { return; }
    }
    ctx->pc = 0x1BC6ECu;
label_1bc6ec:
    // 0x1bc6ec: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC6ECu;
    {
        const bool branch_taken_0x1bc6ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BC6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6ECu;
            // 0x1bc6f0: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6ec) {
            ctx->pc = 0x1BC720u;
            goto label_1bc720;
        }
    }
    ctx->pc = 0x1BC6F4u;
    // 0x1bc6f4: 0x240b001f  addiu       $t3, $zero, 0x1F
    ctx->pc = 0x1bc6f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bc6f8: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x1bc6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1bc6fc: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1bc6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x1bc700: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc704: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1bc704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1bc708: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1bc708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bc70c: 0x24080023  addiu       $t0, $zero, 0x23
    ctx->pc = 0x1bc70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1bc710: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc714: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1BC714u;
    SET_GPR_U32(ctx, 31, 0x1BC71Cu);
    ctx->pc = 0x1BC718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC714u;
            // 0x1bc718: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC71Cu; }
        if (ctx->pc != 0x1BC71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC71Cu; }
        if (ctx->pc != 0x1BC71Cu) { return; }
    }
    ctx->pc = 0x1BC71Cu;
label_1bc71c:
    // 0x1bc71c: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x1bc71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_1bc720:
    // 0x1bc720: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x1BC720u;
    SET_GPR_U32(ctx, 31, 0x1BC728u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC728u; }
        if (ctx->pc != 0x1BC728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC728u; }
        if (ctx->pc != 0x1BC728u) { return; }
    }
    ctx->pc = 0x1BC728u;
label_1bc728:
    // 0x1bc728: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC728u;
    {
        const bool branch_taken_0x1bc728 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BC72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC728u;
            // 0x1bc72c: 0x264400d8  addiu       $a0, $s2, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc728) {
            ctx->pc = 0x1BC75Cu;
            goto label_1bc75c;
        }
    }
    ctx->pc = 0x1BC730u;
    // 0x1bc730: 0x240b001f  addiu       $t3, $zero, 0x1F
    ctx->pc = 0x1bc730u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bc734: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x1bc734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1bc738: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1bc738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x1bc73c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc740: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1bc740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1bc744: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1bc744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bc748: 0x24080023  addiu       $t0, $zero, 0x23
    ctx->pc = 0x1bc748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1bc74c: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1bc74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bc750: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1BC750u;
    SET_GPR_U32(ctx, 31, 0x1BC758u);
    ctx->pc = 0x1BC754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC750u;
            // 0x1bc754: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC758u; }
        if (ctx->pc != 0x1BC758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC758u; }
        if (ctx->pc != 0x1BC758u) { return; }
    }
    ctx->pc = 0x1BC758u;
label_1bc758:
    // 0x1bc758: 0x264400d8  addiu       $a0, $s2, 0xD8
    ctx->pc = 0x1bc758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
label_1bc75c:
    // 0x1bc75c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x1BC75Cu;
    SET_GPR_U32(ctx, 31, 0x1BC764u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC764u; }
        if (ctx->pc != 0x1BC764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC764u; }
        if (ctx->pc != 0x1BC764u) { return; }
    }
    ctx->pc = 0x1BC764u;
label_1bc764:
    // 0x1bc764: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC764u;
    {
        const bool branch_taken_0x1bc764 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BC768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC764u;
            // 0x1bc768: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc764) {
            ctx->pc = 0x1BC798u;
            goto label_1bc798;
        }
    }
    ctx->pc = 0x1BC76Cu;
    // 0x1bc76c: 0x240b001f  addiu       $t3, $zero, 0x1F
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bc770: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x1bc770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1bc774: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1bc774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x1bc778: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc77c: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x1bc77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x1bc780: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1bc780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bc784: 0x24080023  addiu       $t0, $zero, 0x23
    ctx->pc = 0x1bc784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1bc788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc78c: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1BC78Cu;
    SET_GPR_U32(ctx, 31, 0x1BC794u);
    ctx->pc = 0x1BC790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC78Cu;
            // 0x1bc790: 0x240a0020  addiu       $t2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC794u; }
        if (ctx->pc != 0x1BC794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC794u; }
        if (ctx->pc != 0x1BC794u) { return; }
    }
    ctx->pc = 0x1BC794u;
label_1bc794:
    // 0x1bc794: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1bc798:
    // 0x1bc798: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BC798u;
    SET_GPR_U32(ctx, 31, 0x1BC7A0u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7A0u; }
        if (ctx->pc != 0x1BC7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7A0u; }
        if (ctx->pc != 0x1BC7A0u) { return; }
    }
    ctx->pc = 0x1BC7A0u;
label_1bc7a0:
    // 0x1bc7a0: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC7A0u;
    {
        const bool branch_taken_0x1bc7a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc7a0) {
            ctx->pc = 0x1BC7E8u;
            goto label_1bc7e8;
        }
    }
    ctx->pc = 0x1BC7A8u;
    // 0x1bc7a8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bc7ac: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1bc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1bc7b0: 0xc421f6f0  lwc1        $f1, -0x910($at)
    ctx->pc = 0x1bc7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc7b4: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x1bc7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1bc7b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc7bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bc7c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc7c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bc7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bc7c8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bc7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bc7cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1bc7ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc7d0: 0x0  nop
    ctx->pc = 0x1bc7d0u;
    // NOP
    // 0x1bc7d4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1BC7D4u;
    {
        const bool branch_taken_0x1bc7d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7D4u;
            // 0x1bc7d8: 0xe420f6f0  swc1        $f0, -0x910($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294964976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7d4) {
            ctx->pc = 0x1BC824u;
            goto label_1bc824;
        }
    }
    ctx->pc = 0x1BC7DCu;
    // 0x1bc7dc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bc7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bc7e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BC7E0u;
    {
        const bool branch_taken_0x1bc7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7E0u;
            // 0x1bc7e4: 0xe422f6f0  swc1        $f2, -0x910($at) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294964976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7e0) {
            ctx->pc = 0x1BC824u;
            goto label_1bc824;
        }
    }
    ctx->pc = 0x1BC7E8u;
label_1bc7e8:
    // 0x1bc7e8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bc7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bc7ec: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x1bc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x1bc7f0: 0xc422f6f0  lwc1        $f2, -0x910($at)
    ctx->pc = 0x1bc7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bc7f4: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1bc7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1bc7f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc7fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc7fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc800: 0x0  nop
    ctx->pc = 0x1bc800u;
    // NOP
    // 0x1bc804: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1bc804u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1bc808: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bc80c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc80cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc810: 0x0  nop
    ctx->pc = 0x1bc810u;
    // NOP
    // 0x1bc814: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC814u;
    {
        const bool branch_taken_0x1bc814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC814u;
            // 0x1bc818: 0xe421f6f0  swc1        $f1, -0x910($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294964976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc814) {
            ctx->pc = 0x1BC824u;
            goto label_1bc824;
        }
    }
    ctx->pc = 0x1BC81Cu;
    // 0x1bc81c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bc81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bc820: 0xe420f6f0  swc1        $f0, -0x910($at)
    ctx->pc = 0x1bc820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294964976), bits); }
label_1bc824:
    // 0x1bc824: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bc824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bc828: 0x26250026  addiu       $a1, $s1, 0x26
    ctx->pc = 0x1bc828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
    // 0x1bc82c: 0x8c23f6ec  lw          $v1, -0x914($at)
    ctx->pc = 0x1bc82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964972)));
    // 0x1bc830: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bc830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bc834: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bc834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bc838: 0xc42cf6f0  lwc1        $f12, -0x910($at)
    ctx->pc = 0x1bc838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc83c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1bc83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc840: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bc840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bc844: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bc844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc848: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bc848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bc84c: 0xc06efe0  jal         func_1BBF80
    ctx->pc = 0x1BC84Cu;
    SET_GPR_U32(ctx, 31, 0x1BC854u);
    ctx->pc = 0x1BC850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC84Cu;
            // 0x1bc850: 0x24440044  addiu       $a0, $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF80u;
    if (runtime->hasFunction(0x1BBF80u)) {
        auto targetFn = runtime->lookupFunction(0x1BBF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC854u; }
        if (ctx->pc != 0x1BC854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawActiveItemCursor__Fiif_0x1bbf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC854u; }
        if (ctx->pc != 0x1BC854u) { return; }
    }
    ctx->pc = 0x1BC854u;
label_1bc854:
    // 0x1bc854: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bc854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc858: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bc858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc85c:
    // 0x1bc85c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x1BC85Cu;
    SET_GPR_U32(ctx, 31, 0x1BC864u);
    ctx->pc = 0x1BC860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC85Cu;
            // 0x1bc860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC864u; }
        if (ctx->pc != 0x1BC864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC864u; }
        if (ctx->pc != 0x1BC864u) { return; }
    }
    ctx->pc = 0x1BC864u;
label_1bc864:
    // 0x1bc864: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1bc864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bc868: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BC868u;
    {
        const bool branch_taken_0x1bc868 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc868) {
            ctx->pc = 0x1BC8B8u;
            goto label_1bc8b8;
        }
    }
    ctx->pc = 0x1BC870u;
    // 0x1bc870: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bc870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bc874: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x1bc874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x1bc878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc87c: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bc880: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BC880u;
    SET_GPR_U32(ctx, 31, 0x1BC888u);
    ctx->pc = 0x1BC884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC880u;
            // 0x1bc884: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC888u; }
        if (ctx->pc != 0x1BC888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC888u; }
        if (ctx->pc != 0x1BC888u) { return; }
    }
    ctx->pc = 0x1BC888u;
label_1bc888:
    // 0x1bc888: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x1BC888u;
    SET_GPR_U32(ctx, 31, 0x1BC890u);
    ctx->pc = 0x1BC88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC888u;
            // 0x1bc88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC890u; }
        if (ctx->pc != 0x1BC890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC890u; }
        if (ctx->pc != 0x1BC890u) { return; }
    }
    ctx->pc = 0x1BC890u;
label_1bc890:
    // 0x1bc890: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1bc890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1bc894: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bc894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc898: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bc898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bc89c: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x1bc89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1bc8a0: 0x2625002d  addiu       $a1, $s1, 0x2D
    ctx->pc = 0x1bc8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 45));
    // 0x1bc8a4: 0x27a803f0  addiu       $t0, $sp, 0x3F0
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x1bc8a8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1bc8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc8ac: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bc8acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc8b0: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BC8B0u;
    SET_GPR_U32(ctx, 31, 0x1BC8B8u);
    ctx->pc = 0x1BC8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8B0u;
            // 0x1bc8b4: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8B8u; }
        if (ctx->pc != 0x1BC8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8B8u; }
        if (ctx->pc != 0x1BC8B8u) { return; }
    }
    ctx->pc = 0x1BC8B8u;
label_1bc8b8:
    // 0x1bc8b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bc8b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bc8bc: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1bc8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bc8c0: 0x2652006c  addiu       $s2, $s2, 0x6C
    ctx->pc = 0x1bc8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x1bc8c4: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1BC8C4u;
    {
        const bool branch_taken_0x1bc8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8C4u;
            // 0x1bc8c8: 0x26940029  addiu       $s4, $s4, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8c4) {
            ctx->pc = 0x1BC85Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bc85c;
        }
    }
    ctx->pc = 0x1BC8CCu;
    // 0x1bc8cc: 0xc067f20  jal         func_19FC80
    ctx->pc = 0x1BC8CCu;
    SET_GPR_U32(ctx, 31, 0x1BC8D4u);
    ctx->pc = 0x1BC8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8CCu;
            // 0x1bc8d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FC80u;
    if (runtime->hasFunction(0x19FC80u)) {
        auto targetFn = runtime->lookupFunction(0x19FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8D4u; }
        if (ctx->pc != 0x1BC8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordCounterMax__16CBattleCharaInfoFv_0x19fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8D4u; }
        if (ctx->pc != 0x1BC8D4u) { return; }
    }
    ctx->pc = 0x1BC8D4u;
label_1bc8d4:
    // 0x1bc8d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bc8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8d8: 0xc067ed8  jal         func_19FB60
    ctx->pc = 0x1BC8D8u;
    SET_GPR_U32(ctx, 31, 0x1BC8E0u);
    ctx->pc = 0x1BC8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8D8u;
            // 0x1bc8dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FB60u;
    if (runtime->hasFunction(0x19FB60u)) {
        auto targetFn = runtime->lookupFunction(0x19FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8E0u; }
        if (ctx->pc != 0x1BC8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordElem__16CBattleCharaInfoFv_0x19fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8E0u; }
        if (ctx->pc != 0x1BC8E0u) { return; }
    }
    ctx->pc = 0x1BC8E0u;
label_1bc8e0:
    // 0x1bc8e0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1bc8e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8e4: 0xc067f14  jal         func_19FC50
    ctx->pc = 0x1BC8E4u;
    SET_GPR_U32(ctx, 31, 0x1BC8ECu);
    ctx->pc = 0x1BC8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8E4u;
            // 0x1bc8e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FC50u;
    if (runtime->hasFunction(0x19FC50u)) {
        auto targetFn = runtime->lookupFunction(0x19FC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8ECu; }
        if (ctx->pc != 0x1BC8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordCounterNow__16CBattleCharaInfoFv_0x19fc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8ECu; }
        if (ctx->pc != 0x1BC8ECu) { return; }
    }
    ctx->pc = 0x1BC8ECu;
label_1bc8ec:
    // 0x1bc8ec: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bc8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bc8f0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1bc8f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8f4: 0x24638c50  addiu       $v1, $v1, -0x73B0
    ctx->pc = 0x1bc8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937680));
    // 0x1bc8f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bc8fc: 0x786a0000  lq          $t2, 0x0($v1)
    ctx->pc = 0x1bc8fcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc900: 0x27ab0350  addiu       $t3, $sp, 0x350
    ctx->pc = 0x1bc900u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x1bc904: 0x78690010  lq          $t1, 0x10($v1)
    ctx->pc = 0x1bc904u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bc908: 0x24428c90  addiu       $v0, $v0, -0x7370
    ctx->pc = 0x1bc908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x1bc90c: 0x78680020  lq          $t0, 0x20($v1)
    ctx->pc = 0x1bc90cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bc910: 0x27a70390  addiu       $a3, $sp, 0x390
    ctx->pc = 0x1bc910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x1bc914: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc91c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc920: 0xdc630030  ld          $v1, 0x30($v1)
    ctx->pc = 0x1bc920u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1bc924: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x1bc924u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
    // 0x1bc928: 0x7d690010  sq          $t1, 0x10($t3)
    ctx->pc = 0x1bc928u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 9));
    // 0x1bc92c: 0x7d680020  sq          $t0, 0x20($t3)
    ctx->pc = 0x1bc92cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), GPR_VEC(ctx, 8));
    // 0x1bc930: 0xfd630030  sd          $v1, 0x30($t3)
    ctx->pc = 0x1bc930u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 3));
    // 0x1bc934: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bc934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc938: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x1bc938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bc93c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1bc93cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1bc940: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BC940u;
    SET_GPR_U32(ctx, 31, 0x1BC948u);
    ctx->pc = 0x1BC944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC940u;
            // 0x1bc944: 0x7ce20010  sq          $v0, 0x10($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC948u; }
        if (ctx->pc != 0x1BC948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC948u; }
        if (ctx->pc != 0x1BC948u) { return; }
    }
    ctx->pc = 0x1BC948u;
label_1bc948:
    // 0x1bc948: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BC948u;
    SET_GPR_U32(ctx, 31, 0x1BC950u);
    ctx->pc = 0x1BC94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC948u;
            // 0x1bc94c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC950u; }
        if (ctx->pc != 0x1BC950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC950u; }
        if (ctx->pc != 0x1BC950u) { return; }
    }
    ctx->pc = 0x1BC950u;
label_1bc950:
    // 0x1bc950: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc954: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BC954u;
    SET_GPR_U32(ctx, 31, 0x1BC95Cu);
    ctx->pc = 0x1BC958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC954u;
            // 0x1bc958: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC95Cu; }
        if (ctx->pc != 0x1BC95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC95Cu; }
        if (ctx->pc != 0x1BC95Cu) { return; }
    }
    ctx->pc = 0x1BC95Cu;
label_1bc95c:
    // 0x1bc95c: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bc95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bc960: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BC960u;
    SET_GPR_U32(ctx, 31, 0x1BC968u);
    ctx->pc = 0x1BC964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC960u;
            // 0x1bc964: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC968u; }
        if (ctx->pc != 0x1BC968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC968u; }
        if (ctx->pc != 0x1BC968u) { return; }
    }
    ctx->pc = 0x1BC968u;
label_1bc968:
    // 0x1bc968: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1bc968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1bc96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc970: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BC970u;
    SET_GPR_U32(ctx, 31, 0x1BC978u);
    ctx->pc = 0x1BC974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC970u;
            // 0x1bc974: 0x46180302  mul.s       $f12, $f0, $f24 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC978u; }
        if (ctx->pc != 0x1BC978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC978u; }
        if (ctx->pc != 0x1BC978u) { return; }
    }
    ctx->pc = 0x1BC978u;
label_1bc978:
    // 0x1bc978: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bc978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bc97c: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1bc97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x1bc980: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1bc980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc984: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc988: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bc988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc98c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BC98Cu;
    SET_GPR_U32(ctx, 31, 0x1BC994u);
    ctx->pc = 0x1BC990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC98Cu;
            // 0x1bc990: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC994u; }
        if (ctx->pc != 0x1BC994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC994u; }
        if (ctx->pc != 0x1BC994u) { return; }
    }
    ctx->pc = 0x1BC994u;
label_1bc994:
    // 0x1bc994: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1bc994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1bc998: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BC998u;
    {
        const bool branch_taken_0x1bc998 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC998u;
            // 0x1bc99c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc998) {
            ctx->pc = 0x1BCA28u;
            goto label_1bca28;
        }
    }
    ctx->pc = 0x1BC9A0u;
    // 0x1bc9a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bc9a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9a4:
    // 0x1bc9a4: 0x257082a  slt         $at, $s2, $s7
    ctx->pc = 0x1bc9a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1bc9a8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BC9A8u;
    {
        const bool branch_taken_0x1bc9a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9a8) {
            ctx->pc = 0x1BC9ECu;
            goto label_1bc9ec;
        }
    }
    ctx->pc = 0x1BC9B0u;
    // 0x1bc9b0: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1bc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1bc9b4: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x1bc9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1bc9b8: 0x24460350  addiu       $a2, $v0, 0x350
    ctx->pc = 0x1bc9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x1bc9bc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1bc9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1bc9c0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1bc9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bc9c4: 0x24620390  addiu       $v0, $v1, 0x390
    ctx->pc = 0x1bc9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 912));
    // 0x1bc9c8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1bc9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc9cc: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1bc9ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc9d0: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x1bc9d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc9d4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bc9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bc9d8: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1bc9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1bc9dc: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BC9DCu;
    SET_GPR_U32(ctx, 31, 0x1BC9E4u);
    ctx->pc = 0x1BC9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC9DCu;
            // 0x1bc9e0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9E4u; }
        if (ctx->pc != 0x1BC9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9E4u; }
        if (ctx->pc != 0x1BC9E4u) { return; }
    }
    ctx->pc = 0x1BC9E4u;
label_1bc9e4:
    // 0x1bc9e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BC9E4u;
    {
        const bool branch_taken_0x1bc9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9e4) {
            ctx->pc = 0x1BCA18u;
            goto label_1bca18;
        }
    }
    ctx->pc = 0x1BC9ECu;
label_1bc9ec:
    // 0x1bc9ec: 0x0  nop
    ctx->pc = 0x1bc9ecu;
    // NOP
    // 0x1bc9f0: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1bc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1bc9f4: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x1bc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x1bc9f8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1bc9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc9fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bc9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bca00: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bca00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bca04: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1bca04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bca08: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bca08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca0c: 0x240900d0  addiu       $t1, $zero, 0xD0
    ctx->pc = 0x1bca0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1bca10: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BCA10u;
    SET_GPR_U32(ctx, 31, 0x1BCA18u);
    ctx->pc = 0x1BCA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA10u;
            // 0x1bca14: 0x240a00d8  addiu       $t2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA18u; }
        if (ctx->pc != 0x1BCA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA18u; }
        if (ctx->pc != 0x1BCA18u) { return; }
    }
    ctx->pc = 0x1BCA18u;
label_1bca18:
    // 0x1bca18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bca18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1bca1c: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x1bca1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1bca20: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1BCA20u;
    {
        const bool branch_taken_0x1bca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA20u;
            // 0x1bca24: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca20) {
            ctx->pc = 0x1BC9A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bc9a4;
        }
    }
    ctx->pc = 0x1BCA28u;
label_1bca28:
    // 0x1bca28: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BCA28u;
    SET_GPR_U32(ctx, 31, 0x1BCA30u);
    ctx->pc = 0x1BCA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA28u;
            // 0x1bca2c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA30u; }
        if (ctx->pc != 0x1BCA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA30u; }
        if (ctx->pc != 0x1BCA30u) { return; }
    }
    ctx->pc = 0x1BCA30u;
label_1bca30:
    // 0x1bca30: 0xc068140  jal         func_1A0500
    ctx->pc = 0x1BCA30u;
    SET_GPR_U32(ctx, 31, 0x1BCA38u);
    ctx->pc = 0x1BCA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA30u;
            // 0x1bca34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA38u; }
        if (ctx->pc != 0x1BCA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA38u; }
        if (ctx->pc != 0x1BCA38u) { return; }
    }
    ctx->pc = 0x1BCA38u;
label_1bca38:
    // 0x1bca38: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1bca3c: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1bca3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1bca40: 0x24c68cb0  addiu       $a2, $a2, -0x7350
    ctx->pc = 0x1bca40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937776));
    // 0x1bca44: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1bca44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca48: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x1bca48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bca4c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x1bca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bca50: 0xdcc20010  ld          $v0, 0x10($a2)
    ctx->pc = 0x1bca50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1bca54: 0x27a803b0  addiu       $t0, $sp, 0x3B0
    ctx->pc = 0x1bca54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x1bca58: 0x24e78cd0  addiu       $a3, $a3, -0x7330
    ctx->pc = 0x1bca58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937808));
    // 0x1bca5c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x1bca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x1bca60: 0x27a603d0  addiu       $a2, $sp, 0x3D0
    ctx->pc = 0x1bca60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x1bca64: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x1bca64u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x1bca68: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x1bca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1bca6c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x1bca6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bca70: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x1bca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bca74: 0xdce20010  ld          $v0, 0x10($a3)
    ctx->pc = 0x1bca74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1bca78: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1bca78u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1bca7c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1bca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x1bca80: 0x12e0002b  beqz        $s7, . + 4 + (0x2B << 2)
    ctx->pc = 0x1BCA80u;
    {
        const bool branch_taken_0x1bca80 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA80u;
            // 0x1bca84: 0xe4c00018  swc1        $f0, 0x18($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca80) {
            ctx->pc = 0x1BCB30u;
            goto label_1bcb30;
        }
    }
    ctx->pc = 0x1BCA88u;
    // 0x1bca88: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bca88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bca8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bca8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bca90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca94: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BCA94u;
    SET_GPR_U32(ctx, 31, 0x1BCA9Cu);
    ctx->pc = 0x1BCA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA94u;
            // 0x1bca98: 0x24120018  addiu       $s2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA9Cu; }
        if (ctx->pc != 0x1BCA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA9Cu; }
        if (ctx->pc != 0x1BCA9Cu) { return; }
    }
    ctx->pc = 0x1BCA9Cu;
label_1bca9c:
    // 0x1bca9c: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BCA9Cu;
    SET_GPR_U32(ctx, 31, 0x1BCAA4u);
    ctx->pc = 0x1BCAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA9Cu;
            // 0x1bcaa0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAA4u; }
        if (ctx->pc != 0x1BCAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAA4u; }
        if (ctx->pc != 0x1BCAA4u) { return; }
    }
    ctx->pc = 0x1BCAA4u;
label_1bcaa4:
    // 0x1bcaa4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcaa8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BCAA8u;
    SET_GPR_U32(ctx, 31, 0x1BCAB0u);
    ctx->pc = 0x1BCAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCAA8u;
            // 0x1bcaac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAB0u; }
        if (ctx->pc != 0x1BCAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAB0u; }
        if (ctx->pc != 0x1BCAB0u) { return; }
    }
    ctx->pc = 0x1BCAB0u;
label_1bcab0:
    // 0x1bcab0: 0x8f858e84  lw          $a1, -0x717C($gp)
    ctx->pc = 0x1bcab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938244)));
    // 0x1bcab4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BCAB4u;
    SET_GPR_U32(ctx, 31, 0x1BCABCu);
    ctx->pc = 0x1BCAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCAB4u;
            // 0x1bcab8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCABCu; }
        if (ctx->pc != 0x1BCABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCABCu; }
        if (ctx->pc != 0x1BCABCu) { return; }
    }
    ctx->pc = 0x1BCABCu;
label_1bcabc:
    // 0x1bcabc: 0x8fa800fc  lw          $t0, 0xFC($sp)
    ctx->pc = 0x1bcabcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1bcac0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bcac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bcac4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcac8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bcac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcacc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BCACCu;
    SET_GPR_U32(ctx, 31, 0x1BCAD4u);
    ctx->pc = 0x1BCAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCACCu;
            // 0x1bcad0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAD4u; }
        if (ctx->pc != 0x1BCAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAD4u; }
        if (ctx->pc != 0x1BCAD4u) { return; }
    }
    ctx->pc = 0x1BCAD4u;
label_1bcad4:
    // 0x1bcad4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bcad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcad8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bcad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcadc:
    // 0x1bcadc: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x1bcadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1bcae0: 0x8c6203b0  lw          $v0, 0x3B0($v1)
    ctx->pc = 0x1bcae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 944)));
    // 0x1bcae4: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x1bcae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x1bcae8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BCAE8u;
    {
        const bool branch_taken_0x1bcae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcae8) {
            ctx->pc = 0x1BCB18u;
            goto label_1bcb18;
        }
    }
    ctx->pc = 0x1BCAF0u;
    // 0x1bcaf0: 0x246203d0  addiu       $v0, $v1, 0x3D0
    ctx->pc = 0x1bcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    // 0x1bcaf4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1bcaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bcaf8: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x1bcaf8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcafc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcb00: 0x844a0002  lh          $t2, 0x2($v0)
    ctx->pc = 0x1bcb00u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1bcb04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bcb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb08: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1bcb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1bcb0c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BCB0Cu;
    SET_GPR_U32(ctx, 31, 0x1BCB14u);
    ctx->pc = 0x1BCB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB0Cu;
            // 0x1bcb10: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB14u; }
        if (ctx->pc != 0x1BCB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB14u; }
        if (ctx->pc != 0x1BCB14u) { return; }
    }
    ctx->pc = 0x1BCB14u;
label_1bcb14:
    // 0x1bcb14: 0x2652001a  addiu       $s2, $s2, 0x1A
    ctx->pc = 0x1bcb14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 26));
label_1bcb18:
    // 0x1bcb18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bcb18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bcb1c: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x1bcb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bcb20: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BCB20u;
    {
        const bool branch_taken_0x1bcb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB20u;
            // 0x1bcb24: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb20) {
            ctx->pc = 0x1BCADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bcadc;
        }
    }
    ctx->pc = 0x1BCB28u;
    // 0x1bcb28: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BCB28u;
    SET_GPR_U32(ctx, 31, 0x1BCB30u);
    ctx->pc = 0x1BCB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB28u;
            // 0x1bcb2c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB30u; }
        if (ctx->pc != 0x1BCB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB30u; }
        if (ctx->pc != 0x1BCB30u) { return; }
    }
    ctx->pc = 0x1BCB30u;
label_1bcb30:
    // 0x1bcb30: 0x3c02432b  lui         $v0, 0x432B
    ctx->pc = 0x1bcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17195 << 16));
    // 0x1bcb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcb38: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BCB38u;
    SET_GPR_U32(ctx, 31, 0x1BCB40u);
    ctx->pc = 0x1BCB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB38u;
            // 0x1bcb3c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB40u; }
        if (ctx->pc != 0x1BCB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB40u; }
        if (ctx->pc != 0x1BCB40u) { return; }
    }
    ctx->pc = 0x1BCB40u;
label_1bcb40:
    // 0x1bcb40: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1bcb40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb44: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1bcb44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bcb48: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1bcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1bcb4c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1bcb4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bcb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bcb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcb58: 0x0  nop
    ctx->pc = 0x1bcb58u;
    // NOP
    // 0x1bcb5c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1bcb5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcb60: 0x0  nop
    ctx->pc = 0x1bcb60u;
    // NOP
    // 0x1bcb64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCB64u;
    {
        const bool branch_taken_0x1bcb64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BCB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB64u;
            // 0x1bcb68: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb64) {
            ctx->pc = 0x1BCB88u;
            goto label_1bcb88;
        }
    }
    ctx->pc = 0x1BCB6Cu;
    // 0x1bcb6c: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x1bcb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
    // 0x1bcb70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcb74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BCB74u;
    SET_GPR_U32(ctx, 31, 0x1BCB7Cu);
    ctx->pc = 0x1BCB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB74u;
            // 0x1bcb78: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB7Cu; }
        if (ctx->pc != 0x1BCB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB7Cu; }
        if (ctx->pc != 0x1BCB7Cu) { return; }
    }
    ctx->pc = 0x1BCB7Cu;
label_1bcb7c:
    // 0x1bcb7c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1bcb7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1bcb80: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x1bcb80u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1bcb84: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x1bcb84u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1bcb88:
    // 0x1bcb88: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcb8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb90: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BCB90u;
    SET_GPR_U32(ctx, 31, 0x1BCB98u);
    ctx->pc = 0x1BCB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB90u;
            // 0x1bcb94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB98u; }
        if (ctx->pc != 0x1BCB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB98u; }
        if (ctx->pc != 0x1BCB98u) { return; }
    }
    ctx->pc = 0x1BCB98u;
label_1bcb98:
    // 0x1bcb98: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BCB98u;
    SET_GPR_U32(ctx, 31, 0x1BCBA0u);
    ctx->pc = 0x1BCB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB98u;
            // 0x1bcb9c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBA0u; }
        if (ctx->pc != 0x1BCBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBA0u; }
        if (ctx->pc != 0x1BCBA0u) { return; }
    }
    ctx->pc = 0x1BCBA0u;
label_1bcba0:
    // 0x1bcba0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcba4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BCBA4u;
    SET_GPR_U32(ctx, 31, 0x1BCBACu);
    ctx->pc = 0x1BCBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBA4u;
            // 0x1bcba8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBACu; }
        if (ctx->pc != 0x1BCBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBACu; }
        if (ctx->pc != 0x1BCBACu) { return; }
    }
    ctx->pc = 0x1BCBACu;
label_1bcbac:
    // 0x1bcbac: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bcbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bcbb0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BCBB0u;
    SET_GPR_U32(ctx, 31, 0x1BCBB8u);
    ctx->pc = 0x1BCBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBB0u;
            // 0x1bcbb4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBB8u; }
        if (ctx->pc != 0x1BCBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBB8u; }
        if (ctx->pc != 0x1BCBB8u) { return; }
    }
    ctx->pc = 0x1BCBB8u;
label_1bcbb8:
    // 0x1bcbb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bcbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbbc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1bcbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbc0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1bcbc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbc4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcbc8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BCBC8u;
    SET_GPR_U32(ctx, 31, 0x1BCBD0u);
    ctx->pc = 0x1BCBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBC8u;
            // 0x1bcbcc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBD0u; }
        if (ctx->pc != 0x1BCBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBD0u; }
        if (ctx->pc != 0x1BCBD0u) { return; }
    }
    ctx->pc = 0x1BCBD0u;
label_1bcbd0:
    // 0x1bcbd0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1bcbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1bcbd4: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BCBD4u;
    {
        const bool branch_taken_0x1bcbd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BCBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBD4u;
            // 0x1bcbd8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbd4) {
            ctx->pc = 0x1BCC94u;
            goto label_1bcc94;
        }
    }
    ctx->pc = 0x1BCBDCu;
    // 0x1bcbdc: 0x26f2002d  addiu       $s2, $s7, 0x2D
    ctx->pc = 0x1bcbdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 45));
    // 0x1bcbe0: 0x2a410032  slti        $at, $s2, 0x32
    ctx->pc = 0x1bcbe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1bcbe4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCBE4u;
    {
        const bool branch_taken_0x1bcbe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBE4u;
            // 0x1bcbe8: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbe4) {
            ctx->pc = 0x1BCBF0u;
            goto label_1bcbf0;
        }
    }
    ctx->pc = 0x1BCBECu;
    // 0x1bcbec: 0x24120032  addiu       $s2, $zero, 0x32
    ctx->pc = 0x1bcbecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1bcbf0:
    // 0x1bcbf0: 0x2a6100d4  slti        $at, $s3, 0xD4
    ctx->pc = 0x1bcbf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)212) ? 1 : 0);
    // 0x1bcbf4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCBF4u;
    {
        const bool branch_taken_0x1bcbf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBF4u;
            // 0x1bcbf8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbf4) {
            ctx->pc = 0x1BCC04u;
            goto label_1bcc04;
        }
    }
    ctx->pc = 0x1BCBFCu;
    // 0x1bcbfc: 0x241300d3  addiu       $s3, $zero, 0xD3
    ctx->pc = 0x1bcbfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x1bcc00: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1bcc04:
    // 0x1bcc04: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bcc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bcc08: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BCC08u;
    SET_GPR_U32(ctx, 31, 0x1BCC10u);
    ctx->pc = 0x1BCC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC08u;
            // 0x1bcc0c: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC10u; }
        if (ctx->pc != 0x1BCC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC10u; }
        if (ctx->pc != 0x1BCC10u) { return; }
    }
    ctx->pc = 0x1BCC10u;
label_1bcc10:
    // 0x1bcc10: 0x26260006  addiu       $a2, $s1, 0x6
    ctx->pc = 0x1bcc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1bcc14: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcc18: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bcc1c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BCC1Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC24u);
    ctx->pc = 0x1BCC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC1Cu;
            // 0x1bcc20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC24u; }
        if (ctx->pc != 0x1BCC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC24u; }
        if (ctx->pc != 0x1BCC24u) { return; }
    }
    ctx->pc = 0x1BCC24u;
label_1bcc24:
    // 0x1bcc24: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcc28: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bcc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bcc2c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BCC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC34u);
    ctx->pc = 0x1BCC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC2Cu;
            // 0x1bcc30: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC34u; }
        if (ctx->pc != 0x1BCC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC34u; }
        if (ctx->pc != 0x1BCC34u) { return; }
    }
    ctx->pc = 0x1BCC34u;
label_1bcc34:
    // 0x1bcc34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bcc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc38: 0x26260006  addiu       $a2, $s1, 0x6
    ctx->pc = 0x1bcc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1bcc3c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcc40: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BCC40u;
    SET_GPR_U32(ctx, 31, 0x1BCC48u);
    ctx->pc = 0x1BCC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC40u;
            // 0x1bcc44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC48u; }
        if (ctx->pc != 0x1BCC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC48u; }
        if (ctx->pc != 0x1BCC48u) { return; }
    }
    ctx->pc = 0x1BCC48u;
label_1bcc48:
    // 0x1bcc48: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcc4c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bcc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bcc50: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BCC50u;
    SET_GPR_U32(ctx, 31, 0x1BCC58u);
    ctx->pc = 0x1BCC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC50u;
            // 0x1bcc54: 0x240600a7  addiu       $a2, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC58u; }
        if (ctx->pc != 0x1BCC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC58u; }
        if (ctx->pc != 0x1BCC58u) { return; }
    }
    ctx->pc = 0x1BCC58u;
label_1bcc58:
    // 0x1bcc58: 0x2626000b  addiu       $a2, $s1, 0xB
    ctx->pc = 0x1bcc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x1bcc5c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcc60: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x1bcc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1bcc64: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BCC64u;
    SET_GPR_U32(ctx, 31, 0x1BCC6Cu);
    ctx->pc = 0x1BCC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC64u;
            // 0x1bcc68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC6Cu; }
        if (ctx->pc != 0x1BCC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC6Cu; }
        if (ctx->pc != 0x1BCC6Cu) { return; }
    }
    ctx->pc = 0x1BCC6Cu;
label_1bcc6c:
    // 0x1bcc6c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcc70: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bcc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bcc74: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BCC74u;
    SET_GPR_U32(ctx, 31, 0x1BCC7Cu);
    ctx->pc = 0x1BCC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC74u;
            // 0x1bcc78: 0x240600a7  addiu       $a2, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC7Cu; }
        if (ctx->pc != 0x1BCC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC7Cu; }
        if (ctx->pc != 0x1BCC7Cu) { return; }
    }
    ctx->pc = 0x1BCC7Cu;
label_1bcc7c:
    // 0x1bcc7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bcc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc80: 0x2626000b  addiu       $a2, $s1, 0xB
    ctx->pc = 0x1bcc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x1bcc84: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcc88: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BCC88u;
    SET_GPR_U32(ctx, 31, 0x1BCC90u);
    ctx->pc = 0x1BCC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC88u;
            // 0x1bcc8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC90u; }
        if (ctx->pc != 0x1BCC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC90u; }
        if (ctx->pc != 0x1BCC90u) { return; }
    }
    ctx->pc = 0x1BCC90u;
label_1bcc90:
    // 0x1bcc90: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1bcc94:
    // 0x1bcc94: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BCC94u;
    SET_GPR_U32(ctx, 31, 0x1BCC9Cu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC9Cu; }
        if (ctx->pc != 0x1BCC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC9Cu; }
        if (ctx->pc != 0x1BCC9Cu) { return; }
    }
    ctx->pc = 0x1BCC9Cu;
label_1bcc9c:
    // 0x1bcc9c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bcc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bcca0: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x1bcca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x1bcca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcca8: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bcca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bccac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BCCACu;
    SET_GPR_U32(ctx, 31, 0x1BCCB4u);
    ctx->pc = 0x1BCCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCACu;
            // 0x1bccb0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCB4u; }
        if (ctx->pc != 0x1BCCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCB4u; }
        if (ctx->pc != 0x1BCCB4u) { return; }
    }
    ctx->pc = 0x1BCCB4u;
label_1bccb4:
    // 0x1bccb4: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x1bccb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1bccb8: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x1bccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x1bccbc: 0x240400a1  addiu       $a0, $zero, 0xA1
    ctx->pc = 0x1bccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1bccc0: 0x27a80400  addiu       $t0, $sp, 0x400
    ctx->pc = 0x1bccc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x1bccc4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bccc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bccc8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bccc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcccc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1bccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1bccd0: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bccd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bccd4: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BCCD4u;
    SET_GPR_U32(ctx, 31, 0x1BCCDCu);
    ctx->pc = 0x1BCCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCD4u;
            // 0x1bccd8: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCDCu; }
        if (ctx->pc != 0x1BCCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCDCu; }
        if (ctx->pc != 0x1BCCDCu) { return; }
    }
    ctx->pc = 0x1BCCDCu;
label_1bccdc:
    // 0x1bccdc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bccdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bcce0: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x1bcce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x1bcce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcce8: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bcce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bccec: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BCCECu;
    SET_GPR_U32(ctx, 31, 0x1BCCF4u);
    ctx->pc = 0x1BCCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCECu;
            // 0x1bccf0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCF4u; }
        if (ctx->pc != 0x1BCCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCF4u; }
        if (ctx->pc != 0x1BCCF4u) { return; }
    }
    ctx->pc = 0x1BCCF4u;
label_1bccf4:
    // 0x1bccf4: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x1bccf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1bccf8: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x1bccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x1bccfc: 0x240400dd  addiu       $a0, $zero, 0xDD
    ctx->pc = 0x1bccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x1bcd00: 0x27a80410  addiu       $t0, $sp, 0x410
    ctx->pc = 0x1bcd00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x1bcd04: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bcd04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bcd08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bcd08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd0c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1bcd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1bcd10: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bcd10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bcd14: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BCD14u;
    SET_GPR_U32(ctx, 31, 0x1BCD1Cu);
    ctx->pc = 0x1BCD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD14u;
            // 0x1bcd18: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD1Cu; }
        if (ctx->pc != 0x1BCD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD1Cu; }
        if (ctx->pc != 0x1BCD1Cu) { return; }
    }
    ctx->pc = 0x1BCD1Cu;
label_1bcd1c:
    // 0x1bcd1c: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x1bcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x1bcd20: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1bcd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1bcd24: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bcd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bcd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcd2c: 0x0  nop
    ctx->pc = 0x1bcd2cu;
    // NOP
    // 0x1bcd30: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1bcd30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcd34: 0x8473006e  lh          $s3, 0x6E($v1)
    ctx->pc = 0x1bcd34u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 110)));
    // 0x1bcd38: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1BCD38u;
    {
        const bool branch_taken_0x1bcd38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BCD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD38u;
            // 0x1bcd3c: 0x84710002  lh          $s1, 0x2($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd38) {
            ctx->pc = 0x1BCDC0u;
            goto label_1bcdc0;
        }
    }
    ctx->pc = 0x1BCD40u;
    // 0x1bcd40: 0x8fa20460  lw          $v0, 0x460($sp)
    ctx->pc = 0x1bcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1bcd44: 0x1c400011  bgtz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BCD44u;
    {
        const bool branch_taken_0x1bcd44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1BCD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD44u;
            // 0x1bcd48: 0x3c02c280  lui         $v0, 0xC280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd44) {
            ctx->pc = 0x1BCD8Cu;
            goto label_1bcd8c;
        }
    }
    ctx->pc = 0x1BCD4Cu;
    // 0x1bcd4c: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x1bcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
    // 0x1bcd50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcd54: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BCD54u;
    SET_GPR_U32(ctx, 31, 0x1BCD5Cu);
    ctx->pc = 0x1BCD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD54u;
            // 0x1bcd58: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD5Cu; }
        if (ctx->pc != 0x1BCD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD5Cu; }
        if (ctx->pc != 0x1BCD5Cu) { return; }
    }
    ctx->pc = 0x1BCD5Cu;
label_1bcd5c:
    // 0x1bcd5c: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1bcd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1bcd60: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bcd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bcd64: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1bcd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1bcd68: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1bcd68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bcd6c: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1bcd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1bcd70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1bcd70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1bcd74: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1bcd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bcd78: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1bcd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1bcd7c: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1bcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1bcd80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1BCD80u;
    {
        const bool branch_taken_0x1bcd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD80u;
            // 0x1bcd84: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd80) {
            ctx->pc = 0x1BCDE0u;
            goto label_1bcde0;
        }
    }
    ctx->pc = 0x1BCD88u;
    // 0x1bcd88: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x1bcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
label_1bcd8c:
    // 0x1bcd8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcd90: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BCD90u;
    SET_GPR_U32(ctx, 31, 0x1BCD98u);
    ctx->pc = 0x1BCD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD90u;
            // 0x1bcd94: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD98u; }
        if (ctx->pc != 0x1BCD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD98u; }
        if (ctx->pc != 0x1BCD98u) { return; }
    }
    ctx->pc = 0x1BCD98u;
label_1bcd98:
    // 0x1bcd98: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bcd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bcd9c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1bcd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bcda0: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1bcda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1bcda4: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1bcda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1bcda8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1bcda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1bcdac: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1bcdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bcdb0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1bcdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1bcdb4: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1bcdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1bcdb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCDB8u;
    {
        const bool branch_taken_0x1bcdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDB8u;
            // 0x1bcdbc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdb8) {
            ctx->pc = 0x1BCDE0u;
            goto label_1bcde0;
        }
    }
    ctx->pc = 0x1BCDC0u;
label_1bcdc0:
    // 0x1bcdc0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bcdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bcdc4: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1bcdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1bcdc8: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1bcdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1bcdcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bcdccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bcdd0: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1bcdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bcdd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bcdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bcdd8: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1bcdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1bcddc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bcddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1bcde0:
    // 0x1bcde0: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BCDE0u;
    SET_GPR_U32(ctx, 31, 0x1BCDE8u);
    ctx->pc = 0x1BCDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDE0u;
            // 0x1bcde4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDE8u; }
        if (ctx->pc != 0x1BCDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDE8u; }
        if (ctx->pc != 0x1BCDE8u) { return; }
    }
    ctx->pc = 0x1BCDE8u;
label_1bcde8:
    // 0x1bcde8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcdec: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BCDECu;
    SET_GPR_U32(ctx, 31, 0x1BCDF4u);
    ctx->pc = 0x1BCDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDECu;
            // 0x1bcdf0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDF4u; }
        if (ctx->pc != 0x1BCDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDF4u; }
        if (ctx->pc != 0x1BCDF4u) { return; }
    }
    ctx->pc = 0x1BCDF4u;
label_1bcdf4:
    // 0x1bcdf4: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1bcdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1bcdf8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1bcdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bcdfc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bcdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bce00: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1bce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bce04: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1bce04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bce08: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1bce0c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1bce0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bce10: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BCE10u;
    SET_GPR_U32(ctx, 31, 0x1BCE18u);
    ctx->pc = 0x1BCE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE10u;
            // 0x1bce14: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE18u; }
        if (ctx->pc != 0x1BCE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE18u; }
        if (ctx->pc != 0x1BCE18u) { return; }
    }
    ctx->pc = 0x1BCE18u;
label_1bce18:
    // 0x1bce18: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1bce18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bce1c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bce20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bce20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce24: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x1bce24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1bce28: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x1bce28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bce2c: 0x240900ec  addiu       $t1, $zero, 0xEC
    ctx->pc = 0x1bce2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x1bce30: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BCE30u;
    SET_GPR_U32(ctx, 31, 0x1BCE38u);
    ctx->pc = 0x1BCE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE30u;
            // 0x1bce34: 0x240a002e  addiu       $t2, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE38u; }
        if (ctx->pc != 0x1BCE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE38u; }
        if (ctx->pc != 0x1BCE38u) { return; }
    }
    ctx->pc = 0x1BCE38u;
label_1bce38:
    // 0x1bce38: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1bce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bce3c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bce3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bce40: 0x26060013  addiu       $a2, $s0, 0x13
    ctx->pc = 0x1bce40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 19));
    // 0x1bce44: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bce44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bce48: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bce48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce4c: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1bce4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bce50: 0x240a00e8  addiu       $t2, $zero, 0xE8
    ctx->pc = 0x1bce50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bce54: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BCE54u;
    SET_GPR_U32(ctx, 31, 0x1BCE5Cu);
    ctx->pc = 0x1BCE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE54u;
            // 0x1bce58: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE5Cu; }
        if (ctx->pc != 0x1BCE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE5Cu; }
        if (ctx->pc != 0x1BCE5Cu) { return; }
    }
    ctx->pc = 0x1BCE5Cu;
label_1bce5c:
    // 0x1bce5c: 0x1a20001f  blez        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BCE5Cu;
    {
        const bool branch_taken_0x1bce5c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1BCE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE5Cu;
            // 0x1bce60: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce5c) {
            ctx->pc = 0x1BCEDCu;
            goto label_1bcedc;
        }
    }
    ctx->pc = 0x1BCE64u;
    // 0x1bce64: 0x8f858e8c  lw          $a1, -0x7174($gp)
    ctx->pc = 0x1bce64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938252)));
    // 0x1bce68: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BCE68u;
    SET_GPR_U32(ctx, 31, 0x1BCE70u);
    ctx->pc = 0x1BCE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE68u;
            // 0x1bce6c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE70u; }
        if (ctx->pc != 0x1BCE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE70u; }
        if (ctx->pc != 0x1BCE70u) { return; }
    }
    ctx->pc = 0x1BCE70u;
label_1bce70:
    // 0x1bce70: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1bce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bce74: 0x240b001f  addiu       $t3, $zero, 0x1F
    ctx->pc = 0x1bce74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bce78: 0x2606000a  addiu       $a2, $s0, 0xA
    ctx->pc = 0x1bce78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x1bce7c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bce80: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1bce80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bce84: 0x24080023  addiu       $t0, $zero, 0x23
    ctx->pc = 0x1bce84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1bce88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bce88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bce8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce90: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1bce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1bce94: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1BCE94u;
    SET_GPR_U32(ctx, 31, 0x1BCE9Cu);
    ctx->pc = 0x1BCE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE94u;
            // 0x1bce98: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE9Cu; }
        if (ctx->pc != 0x1BCE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE9Cu; }
        if (ctx->pc != 0x1BCE9Cu) { return; }
    }
    ctx->pc = 0x1BCE9Cu;
label_1bce9c:
    // 0x1bce9c: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bcea0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BCEA0u;
    SET_GPR_U32(ctx, 31, 0x1BCEA8u);
    ctx->pc = 0x1BCEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCEA0u;
            // 0x1bcea4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEA8u; }
        if (ctx->pc != 0x1BCEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEA8u; }
        if (ctx->pc != 0x1BCEA8u) { return; }
    }
    ctx->pc = 0x1BCEA8u;
label_1bcea8:
    // 0x1bcea8: 0x8fa20460  lw          $v0, 0x460($sp)
    ctx->pc = 0x1bcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1bceac: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BCEACu;
    {
        const bool branch_taken_0x1bceac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1bceac) {
            ctx->pc = 0x1BCED8u;
            goto label_1bced8;
        }
    }
    ctx->pc = 0x1BCEB4u;
    // 0x1bceb4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1bceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bceb8: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x1bceb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1bcebc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcec0: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1bcec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bcec4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1bcec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bcec8: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x1bcec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1bcecc: 0x240a00ba  addiu       $t2, $zero, 0xBA
    ctx->pc = 0x1bceccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1bced0: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BCED0u;
    SET_GPR_U32(ctx, 31, 0x1BCED8u);
    ctx->pc = 0x1BCED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCED0u;
            // 0x1bced4: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCED8u; }
        if (ctx->pc != 0x1BCED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCED8u; }
        if (ctx->pc != 0x1BCED8u) { return; }
    }
    ctx->pc = 0x1BCED8u;
label_1bced8:
    // 0x1bced8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1bcedc:
    // 0x1bcedc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BCEDCu;
    SET_GPR_U32(ctx, 31, 0x1BCEE4u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEE4u; }
        if (ctx->pc != 0x1BCEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEE4u; }
        if (ctx->pc != 0x1BCEE4u) { return; }
    }
    ctx->pc = 0x1BCEE4u;
label_1bcee4:
    // 0x1bcee4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1bcee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bcee8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bcee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bceec: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1bceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x1bcef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcef4: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bcef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bcef8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bcef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcefc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BCEFCu;
    SET_GPR_U32(ctx, 31, 0x1BCF04u);
    ctx->pc = 0x1BCF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCEFCu;
            // 0x1bcf00: 0x2451004c  addiu       $s1, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF04u; }
        if (ctx->pc != 0x1BCF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF04u; }
        if (ctx->pc != 0x1BCF04u) { return; }
    }
    ctx->pc = 0x1BCF04u;
label_1bcf04:
    // 0x1bcf04: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1bcf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1bcf08: 0x2624ffc3  addiu       $a0, $s1, -0x3D
    ctx->pc = 0x1bcf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967235));
    // 0x1bcf0c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1bcf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1bcf10: 0x26050013  addiu       $a1, $s0, 0x13
    ctx->pc = 0x1bcf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 19));
    // 0x1bcf14: 0x8fa60460  lw          $a2, 0x460($sp)
    ctx->pc = 0x1bcf14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1bcf18: 0x27a80420  addiu       $t0, $sp, 0x420
    ctx->pc = 0x1bcf18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x1bcf1c: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bcf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bcf20: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bcf20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bcf24: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bcf24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcf28: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BCF28u;
    SET_GPR_U32(ctx, 31, 0x1BCF30u);
    ctx->pc = 0x1BCF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF28u;
            // 0x1bcf2c: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF30u; }
        if (ctx->pc != 0x1BCF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF30u; }
        if (ctx->pc != 0x1BCF30u) { return; }
    }
    ctx->pc = 0x1BCF30u;
label_1bcf30:
    // 0x1bcf30: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bcf30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bcf34: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x1bcf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x1bcf38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf3c: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bcf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bcf40: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BCF40u;
    SET_GPR_U32(ctx, 31, 0x1BCF48u);
    ctx->pc = 0x1BCF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF40u;
            // 0x1bcf44: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF48u; }
        if (ctx->pc != 0x1BCF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF48u; }
        if (ctx->pc != 0x1BCF48u) { return; }
    }
    ctx->pc = 0x1BCF48u;
label_1bcf48:
    // 0x1bcf48: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1bcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1bcf4c: 0x2624fffc  addiu       $a0, $s1, -0x4
    ctx->pc = 0x1bcf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1bcf50: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1bcf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1bcf54: 0x26050013  addiu       $a1, $s0, 0x13
    ctx->pc = 0x1bcf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 19));
    // 0x1bcf58: 0x27a20464  addiu       $v0, $sp, 0x464
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1124));
    // 0x1bcf5c: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bcf5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bcf60: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcf64: 0x27a80430  addiu       $t0, $sp, 0x430
    ctx->pc = 0x1bcf64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x1bcf68: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bcf68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bcf6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bcf6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf70: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BCF70u;
    SET_GPR_U32(ctx, 31, 0x1BCF78u);
    ctx->pc = 0x1BCF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF70u;
            // 0x1bcf74: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF78u; }
        if (ctx->pc != 0x1BCF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF78u; }
        if (ctx->pc != 0x1BCF78u) { return; }
    }
    ctx->pc = 0x1BCF78u;
label_1bcf78:
    // 0x1bcf78: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x1bcf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
    // 0x1bcf7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcf80: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BCF80u;
    SET_GPR_U32(ctx, 31, 0x1BCF88u);
    ctx->pc = 0x1BCF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF80u;
            // 0x1bcf84: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF88u; }
        if (ctx->pc != 0x1BCF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF88u; }
        if (ctx->pc != 0x1BCF88u) { return; }
    }
    ctx->pc = 0x1BCF88u;
label_1bcf88:
    // 0x1bcf88: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1bcf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bcf8c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcf90: 0x24710024  addiu       $s1, $v1, 0x24
    ctx->pc = 0x1bcf90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x1bcf94: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BCF94u;
    SET_GPR_U32(ctx, 31, 0x1BCF9Cu);
    ctx->pc = 0x1BCF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF94u;
            // 0x1bcf98: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF9Cu; }
        if (ctx->pc != 0x1BCF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF9Cu; }
        if (ctx->pc != 0x1BCF9Cu) { return; }
    }
    ctx->pc = 0x1BCF9Cu;
label_1bcf9c:
    // 0x1bcf9c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcfa0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BCFA0u;
    SET_GPR_U32(ctx, 31, 0x1BCFA8u);
    ctx->pc = 0x1BCFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFA0u;
            // 0x1bcfa4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFA8u; }
        if (ctx->pc != 0x1BCFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFA8u; }
        if (ctx->pc != 0x1BCFA8u) { return; }
    }
    ctx->pc = 0x1BCFA8u;
label_1bcfa8:
    // 0x1bcfa8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bcfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bcfac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcfb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bcfb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcfb4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bcfb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcfb8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BCFB8u;
    SET_GPR_U32(ctx, 31, 0x1BCFC0u);
    ctx->pc = 0x1BCFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFB8u;
            // 0x1bcfbc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFC0u; }
        if (ctx->pc != 0x1BCFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFC0u; }
        if (ctx->pc != 0x1BCFC0u) { return; }
    }
    ctx->pc = 0x1BCFC0u;
label_1bcfc0:
    // 0x1bcfc0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcfc4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bcfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bcfc8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BCFC8u;
    SET_GPR_U32(ctx, 31, 0x1BCFD0u);
    ctx->pc = 0x1BCFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFC8u;
            // 0x1bcfcc: 0x240600b2  addiu       $a2, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFD0u; }
        if (ctx->pc != 0x1BCFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFD0u; }
        if (ctx->pc != 0x1BCFD0u) { return; }
    }
    ctx->pc = 0x1BCFD0u;
label_1bcfd0:
    // 0x1bcfd0: 0x26060005  addiu       $a2, $s0, 0x5
    ctx->pc = 0x1bcfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x1bcfd4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcfd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bcfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcfdc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BCFDCu;
    SET_GPR_U32(ctx, 31, 0x1BCFE4u);
    ctx->pc = 0x1BCFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFDCu;
            // 0x1bcfe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFE4u; }
        if (ctx->pc != 0x1BCFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFE4u; }
        if (ctx->pc != 0x1BCFE4u) { return; }
    }
    ctx->pc = 0x1BCFE4u;
label_1bcfe4:
    // 0x1bcfe4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcfe8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bcfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bcfec: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BCFECu;
    SET_GPR_U32(ctx, 31, 0x1BCFF4u);
    ctx->pc = 0x1BCFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFECu;
            // 0x1bcff0: 0x240600b2  addiu       $a2, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFF4u; }
        if (ctx->pc != 0x1BCFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFF4u; }
        if (ctx->pc != 0x1BCFF4u) { return; }
    }
    ctx->pc = 0x1BCFF4u;
label_1bcff4:
    // 0x1bcff4: 0x26060005  addiu       $a2, $s0, 0x5
    ctx->pc = 0x1bcff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x1bcff8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bcff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bcffc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bcffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd000: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD000u;
    SET_GPR_U32(ctx, 31, 0x1BD008u);
    ctx->pc = 0x1BD004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD000u;
            // 0x1bd004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD008u; }
        if (ctx->pc != 0x1BD008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD008u; }
        if (ctx->pc != 0x1BD008u) { return; }
    }
    ctx->pc = 0x1BD008u;
label_1bd008:
    // 0x1bd008: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd00c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bd00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bd010: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD010u;
    SET_GPR_U32(ctx, 31, 0x1BD018u);
    ctx->pc = 0x1BD014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD010u;
            // 0x1bd014: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD018u; }
        if (ctx->pc != 0x1BD018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD018u; }
        if (ctx->pc != 0x1BD018u) { return; }
    }
    ctx->pc = 0x1BD018u;
label_1bd018:
    // 0x1bd018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd01c: 0x26060009  addiu       $a2, $s0, 0x9
    ctx->pc = 0x1bd01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x1bd020: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd024: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD024u;
    SET_GPR_U32(ctx, 31, 0x1BD02Cu);
    ctx->pc = 0x1BD028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD024u;
            // 0x1bd028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD02Cu; }
        if (ctx->pc != 0x1BD02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD02Cu; }
        if (ctx->pc != 0x1BD02Cu) { return; }
    }
    ctx->pc = 0x1BD02Cu;
label_1bd02c:
    // 0x1bd02c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd030: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bd030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bd034: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD034u;
    SET_GPR_U32(ctx, 31, 0x1BD03Cu);
    ctx->pc = 0x1BD038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD034u;
            // 0x1bd038: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD03Cu; }
        if (ctx->pc != 0x1BD03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD03Cu; }
        if (ctx->pc != 0x1BD03Cu) { return; }
    }
    ctx->pc = 0x1BD03Cu;
label_1bd03c:
    // 0x1bd03c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd040: 0x26060009  addiu       $a2, $s0, 0x9
    ctx->pc = 0x1bd040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x1bd044: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd048: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD048u;
    SET_GPR_U32(ctx, 31, 0x1BD050u);
    ctx->pc = 0x1BD04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD048u;
            // 0x1bd04c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD050u; }
        if (ctx->pc != 0x1BD050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD050u; }
        if (ctx->pc != 0x1BD050u) { return; }
    }
    ctx->pc = 0x1BD050u;
label_1bd050:
    // 0x1bd050: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BD050u;
    SET_GPR_U32(ctx, 31, 0x1BD058u);
    ctx->pc = 0x1BD054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD050u;
            // 0x1bd054: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD058u; }
        if (ctx->pc != 0x1BD058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD058u; }
        if (ctx->pc != 0x1BD058u) { return; }
    }
    ctx->pc = 0x1BD058u;
label_1bd058:
    // 0x1bd058: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bd058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd060: 0xc067ff8  jal         func_19FFE0
    ctx->pc = 0x1BD060u;
    SET_GPR_U32(ctx, 31, 0x1BD068u);
    ctx->pc = 0x1BD064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD060u;
            // 0x1bd064: 0x27a60470  addiu       $a2, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FFE0u;
    if (runtime->hasFunction(0x19FFE0u)) {
        auto targetFn = runtime->lookupFunction(0x19FFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD068u; }
        if (ctx->pc != 0x1BD068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAbs__16CBattleCharaInfoFiPi_0x19ffe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD068u; }
        if (ctx->pc != 0x1BD068u) { return; }
    }
    ctx->pc = 0x1BD068u;
label_1bd068:
    // 0x1bd068: 0xc7a20470  lwc1        $f2, 0x470($sp)
    ctx->pc = 0x1bd068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd06c: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x1bd06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
    // 0x1bd070: 0xc7a10474  lwc1        $f1, 0x474($sp)
    ctx->pc = 0x1bd070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd078: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd07c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bd07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bd080: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1bd080u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1bd084: 0x0  nop
    ctx->pc = 0x1bd084u;
    // NOP
    // 0x1bd088: 0x0  nop
    ctx->pc = 0x1bd088u;
    // NOP
    // 0x1bd08c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BD08Cu;
    SET_GPR_U32(ctx, 31, 0x1BD094u);
    ctx->pc = 0x1BD090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD08Cu;
            // 0x1bd090: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD094u; }
        if (ctx->pc != 0x1BD094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD094u; }
        if (ctx->pc != 0x1BD094u) { return; }
    }
    ctx->pc = 0x1BD094u;
label_1bd094:
    // 0x1bd094: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1bd094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bd098: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd09c: 0x24710026  addiu       $s1, $v1, 0x26
    ctx->pc = 0x1bd09cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 38));
    // 0x1bd0a0: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BD0A0u;
    SET_GPR_U32(ctx, 31, 0x1BD0A8u);
    ctx->pc = 0x1BD0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0A0u;
            // 0x1bd0a4: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0A8u; }
        if (ctx->pc != 0x1BD0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0A8u; }
        if (ctx->pc != 0x1BD0A8u) { return; }
    }
    ctx->pc = 0x1BD0A8u;
label_1bd0a8:
    // 0x1bd0a8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd0ac: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BD0ACu;
    SET_GPR_U32(ctx, 31, 0x1BD0B4u);
    ctx->pc = 0x1BD0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0ACu;
            // 0x1bd0b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0B4u; }
        if (ctx->pc != 0x1BD0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0B4u; }
        if (ctx->pc != 0x1BD0B4u) { return; }
    }
    ctx->pc = 0x1BD0B4u;
label_1bd0b4:
    // 0x1bd0b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd0b8: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bd0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bd0bc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD0BCu;
    SET_GPR_U32(ctx, 31, 0x1BD0C4u);
    ctx->pc = 0x1BD0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0BCu;
            // 0x1bd0c0: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0C4u; }
        if (ctx->pc != 0x1BD0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0C4u; }
        if (ctx->pc != 0x1BD0C4u) { return; }
    }
    ctx->pc = 0x1BD0C4u;
label_1bd0c4:
    // 0x1bd0c4: 0x2606000a  addiu       $a2, $s0, 0xA
    ctx->pc = 0x1bd0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x1bd0c8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd0cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0d0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD0D0u;
    SET_GPR_U32(ctx, 31, 0x1BD0D8u);
    ctx->pc = 0x1BD0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0D0u;
            // 0x1bd0d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0D8u; }
        if (ctx->pc != 0x1BD0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0D8u; }
        if (ctx->pc != 0x1BD0D8u) { return; }
    }
    ctx->pc = 0x1BD0D8u;
label_1bd0d8:
    // 0x1bd0d8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd0dc: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bd0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bd0e0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD0E0u;
    SET_GPR_U32(ctx, 31, 0x1BD0E8u);
    ctx->pc = 0x1BD0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0E0u;
            // 0x1bd0e4: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0E8u; }
        if (ctx->pc != 0x1BD0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0E8u; }
        if (ctx->pc != 0x1BD0E8u) { return; }
    }
    ctx->pc = 0x1BD0E8u;
label_1bd0e8:
    // 0x1bd0e8: 0x2606000a  addiu       $a2, $s0, 0xA
    ctx->pc = 0x1bd0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x1bd0ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd0f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0f4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD0F4u;
    SET_GPR_U32(ctx, 31, 0x1BD0FCu);
    ctx->pc = 0x1BD0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0F4u;
            // 0x1bd0f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0FCu; }
        if (ctx->pc != 0x1BD0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0FCu; }
        if (ctx->pc != 0x1BD0FCu) { return; }
    }
    ctx->pc = 0x1BD0FCu;
label_1bd0fc:
    // 0x1bd0fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd100: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bd100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bd104: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD104u;
    SET_GPR_U32(ctx, 31, 0x1BD10Cu);
    ctx->pc = 0x1BD108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD104u;
            // 0x1bd108: 0x240600ba  addiu       $a2, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD10Cu; }
        if (ctx->pc != 0x1BD10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD10Cu; }
        if (ctx->pc != 0x1BD10Cu) { return; }
    }
    ctx->pc = 0x1BD10Cu;
label_1bd10c:
    // 0x1bd10c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd110: 0x2606000d  addiu       $a2, $s0, 0xD
    ctx->pc = 0x1bd110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1bd114: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd118: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD118u;
    SET_GPR_U32(ctx, 31, 0x1BD120u);
    ctx->pc = 0x1BD11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD118u;
            // 0x1bd11c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD120u; }
        if (ctx->pc != 0x1BD120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD120u; }
        if (ctx->pc != 0x1BD120u) { return; }
    }
    ctx->pc = 0x1BD120u;
label_1bd120:
    // 0x1bd120: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd124: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bd124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bd128: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD128u;
    SET_GPR_U32(ctx, 31, 0x1BD130u);
    ctx->pc = 0x1BD12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD128u;
            // 0x1bd12c: 0x240600ba  addiu       $a2, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD130u; }
        if (ctx->pc != 0x1BD130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD130u; }
        if (ctx->pc != 0x1BD130u) { return; }
    }
    ctx->pc = 0x1BD130u;
label_1bd130:
    // 0x1bd130: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd134: 0x2606000d  addiu       $a2, $s0, 0xD
    ctx->pc = 0x1bd134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1bd138: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd13c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD13Cu;
    SET_GPR_U32(ctx, 31, 0x1BD144u);
    ctx->pc = 0x1BD140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD13Cu;
            // 0x1bd140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD144u; }
        if (ctx->pc != 0x1BD144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD144u; }
        if (ctx->pc != 0x1BD144u) { return; }
    }
    ctx->pc = 0x1BD144u;
label_1bd144:
    // 0x1bd144: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BD144u;
    SET_GPR_U32(ctx, 31, 0x1BD14Cu);
    ctx->pc = 0x1BD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD144u;
            // 0x1bd148: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD14Cu; }
        if (ctx->pc != 0x1BD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD14Cu; }
        if (ctx->pc != 0x1BD14Cu) { return; }
    }
    ctx->pc = 0x1BD14Cu;
label_1bd14c:
    // 0x1bd14c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1bd14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1bd150: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bd150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bd154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd158: 0x0  nop
    ctx->pc = 0x1bd158u;
    // NOP
    // 0x1bd15c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1bd15cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd160: 0x0  nop
    ctx->pc = 0x1bd160u;
    // NOP
    // 0x1bd164: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1BD164u;
    {
        const bool branch_taken_0x1bd164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD164u;
            // 0x1bd168: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd164) {
            ctx->pc = 0x1BD1F0u;
            goto label_1bd1f0;
        }
    }
    ctx->pc = 0x1BD16Cu;
    // 0x1bd16c: 0x8fa20468  lw          $v0, 0x468($sp)
    ctx->pc = 0x1bd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x1bd170: 0x1c400011  bgtz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD170u;
    {
        const bool branch_taken_0x1bd170 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1BD174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD170u;
            // 0x1bd174: 0x3c02c280  lui         $v0, 0xC280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd170) {
            ctx->pc = 0x1BD1B8u;
            goto label_1bd1b8;
        }
    }
    ctx->pc = 0x1BD178u;
    // 0x1bd178: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x1bd178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
    // 0x1bd17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd180: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BD180u;
    SET_GPR_U32(ctx, 31, 0x1BD188u);
    ctx->pc = 0x1BD184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD180u;
            // 0x1bd184: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD188u; }
        if (ctx->pc != 0x1BD188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD188u; }
        if (ctx->pc != 0x1BD188u) { return; }
    }
    ctx->pc = 0x1BD188u;
label_1bd188:
    // 0x1bd188: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1bd188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1bd18c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bd18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd190: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1bd190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1bd194: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1bd194u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd198: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1bd198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1bd19c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1bd19cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1bd1a0: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1bd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bd1a4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1bd1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1bd1a8: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1bd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1bd1ac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD1ACu;
    {
        const bool branch_taken_0x1bd1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1ACu;
            // 0x1bd1b0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1ac) {
            ctx->pc = 0x1BD20Cu;
            goto label_1bd20c;
        }
    }
    ctx->pc = 0x1BD1B4u;
    // 0x1bd1b4: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x1bd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
label_1bd1b8:
    // 0x1bd1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd1bc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BD1BCu;
    SET_GPR_U32(ctx, 31, 0x1BD1C4u);
    ctx->pc = 0x1BD1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1BCu;
            // 0x1bd1c0: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1C4u; }
        if (ctx->pc != 0x1BD1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1C4u; }
        if (ctx->pc != 0x1BD1C4u) { return; }
    }
    ctx->pc = 0x1BD1C4u;
label_1bd1c4:
    // 0x1bd1c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bd1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd1c8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1bd1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd1cc: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1bd1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1bd1d0: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1bd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1bd1d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1bd1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1bd1d8: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1bd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bd1dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1bd1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1bd1e0: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1bd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1bd1e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD1E4u;
    {
        const bool branch_taken_0x1bd1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1E4u;
            // 0x1bd1e8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1e4) {
            ctx->pc = 0x1BD20Cu;
            goto label_1bd20c;
        }
    }
    ctx->pc = 0x1BD1ECu;
    // 0x1bd1ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bd1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1bd1f0:
    // 0x1bd1f0: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1bd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1bd1f4: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1bd1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1bd1f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bd1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bd1fc: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1bd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bd200: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bd200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bd204: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1bd204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1bd208: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bd208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1bd20c:
    // 0x1bd20c: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BD20Cu;
    SET_GPR_U32(ctx, 31, 0x1BD214u);
    ctx->pc = 0x1BD210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD20Cu;
            // 0x1bd210: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD214u; }
        if (ctx->pc != 0x1BD214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD214u; }
        if (ctx->pc != 0x1BD214u) { return; }
    }
    ctx->pc = 0x1BD214u;
label_1bd214:
    // 0x1bd214: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd218: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BD218u;
    SET_GPR_U32(ctx, 31, 0x1BD220u);
    ctx->pc = 0x1BD21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD218u;
            // 0x1bd21c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD220u; }
        if (ctx->pc != 0x1BD220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD220u; }
        if (ctx->pc != 0x1BD220u) { return; }
    }
    ctx->pc = 0x1BD220u;
label_1bd220:
    // 0x1bd220: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1bd220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1bd224: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1bd224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bd228: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bd228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd22c: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1bd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1bd230: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1bd230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd234: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1bd234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1bd238: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1bd238u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd23c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BD23Cu;
    SET_GPR_U32(ctx, 31, 0x1BD244u);
    ctx->pc = 0x1BD240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD23Cu;
            // 0x1bd240: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD244u; }
        if (ctx->pc != 0x1BD244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD244u; }
        if (ctx->pc != 0x1BD244u) { return; }
    }
    ctx->pc = 0x1BD244u;
label_1bd244:
    // 0x1bd244: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1bd244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bd248: 0x26a60009  addiu       $a2, $s5, 0x9
    ctx->pc = 0x1bd248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x1bd24c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd250: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x1bd250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1bd254: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x1bd254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bd258: 0x240900ec  addiu       $t1, $zero, 0xEC
    ctx->pc = 0x1bd258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x1bd25c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x1bd25cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1bd260: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BD260u;
    SET_GPR_U32(ctx, 31, 0x1BD268u);
    ctx->pc = 0x1BD264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD260u;
            // 0x1bd264: 0x2445003a  addiu       $a1, $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD268u; }
        if (ctx->pc != 0x1BD268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD268u; }
        if (ctx->pc != 0x1BD268u) { return; }
    }
    ctx->pc = 0x1BD268u;
label_1bd268:
    // 0x1bd268: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1bd268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bd26c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bd26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bd270: 0x26a6001c  addiu       $a2, $s5, 0x1C
    ctx->pc = 0x1bd270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x1bd274: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd278: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bd278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd27c: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1bd27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bd280: 0x240a00e8  addiu       $t2, $zero, 0xE8
    ctx->pc = 0x1bd280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bd284: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BD284u;
    SET_GPR_U32(ctx, 31, 0x1BD28Cu);
    ctx->pc = 0x1BD288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD284u;
            // 0x1bd288: 0x24450081  addiu       $a1, $v0, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 129));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD28Cu; }
        if (ctx->pc != 0x1BD28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD28Cu; }
        if (ctx->pc != 0x1BD28Cu) { return; }
    }
    ctx->pc = 0x1BD28Cu;
label_1bd28c:
    // 0x1bd28c: 0x1a60001f  blez        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BD28Cu;
    {
        const bool branch_taken_0x1bd28c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1BD290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD28Cu;
            // 0x1bd290: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd28c) {
            ctx->pc = 0x1BD30Cu;
            goto label_1bd30c;
        }
    }
    ctx->pc = 0x1BD294u;
    // 0x1bd294: 0x8f858e8c  lw          $a1, -0x7174($gp)
    ctx->pc = 0x1bd294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938252)));
    // 0x1bd298: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BD298u;
    SET_GPR_U32(ctx, 31, 0x1BD2A0u);
    ctx->pc = 0x1BD29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD298u;
            // 0x1bd29c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2A0u; }
        if (ctx->pc != 0x1BD2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2A0u; }
        if (ctx->pc != 0x1BD2A0u) { return; }
    }
    ctx->pc = 0x1BD2A0u;
label_1bd2a0:
    // 0x1bd2a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bd2a4: 0x240b001f  addiu       $t3, $zero, 0x1F
    ctx->pc = 0x1bd2a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bd2a8: 0x26a6000a  addiu       $a2, $s5, 0xA
    ctx->pc = 0x1bd2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 10));
    // 0x1bd2ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd2b0: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bd2b4: 0x24080023  addiu       $t0, $zero, 0x23
    ctx->pc = 0x1bd2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1bd2b8: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1bd2b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bd2bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bd2bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2c0: 0x244500aa  addiu       $a1, $v0, 0xAA
    ctx->pc = 0x1bd2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 170));
    // 0x1bd2c4: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1BD2C4u;
    SET_GPR_U32(ctx, 31, 0x1BD2CCu);
    ctx->pc = 0x1BD2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2C4u;
            // 0x1bd2c8: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2CCu; }
        if (ctx->pc != 0x1BD2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2CCu; }
        if (ctx->pc != 0x1BD2CCu) { return; }
    }
    ctx->pc = 0x1BD2CCu;
label_1bd2cc:
    // 0x1bd2cc: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bd2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bd2d0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BD2D0u;
    SET_GPR_U32(ctx, 31, 0x1BD2D8u);
    ctx->pc = 0x1BD2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2D0u;
            // 0x1bd2d4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2D8u; }
        if (ctx->pc != 0x1BD2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2D8u; }
        if (ctx->pc != 0x1BD2D8u) { return; }
    }
    ctx->pc = 0x1BD2D8u;
label_1bd2d8:
    // 0x1bd2d8: 0x8fa20468  lw          $v0, 0x468($sp)
    ctx->pc = 0x1bd2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x1bd2dc: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD2DCu;
    {
        const bool branch_taken_0x1bd2dc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1bd2dc) {
            ctx->pc = 0x1BD308u;
            goto label_1bd308;
        }
    }
    ctx->pc = 0x1BD2E4u;
    // 0x1bd2e4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1bd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bd2e8: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x1bd2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1bd2ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd2f0: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bd2f4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bd2f8: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x1bd2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1bd2fc: 0x240a00ba  addiu       $t2, $zero, 0xBA
    ctx->pc = 0x1bd2fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1bd300: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BD300u;
    SET_GPR_U32(ctx, 31, 0x1BD308u);
    ctx->pc = 0x1BD304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD300u;
            // 0x1bd304: 0x244500ba  addiu       $a1, $v0, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 186));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD308u; }
        if (ctx->pc != 0x1BD308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD308u; }
        if (ctx->pc != 0x1BD308u) { return; }
    }
    ctx->pc = 0x1BD308u;
label_1bd308:
    // 0x1bd308: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1bd30c:
    // 0x1bd30c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BD30Cu;
    SET_GPR_U32(ctx, 31, 0x1BD314u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD314u; }
        if (ctx->pc != 0x1BD314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD314u; }
        if (ctx->pc != 0x1BD314u) { return; }
    }
    ctx->pc = 0x1BD314u;
label_1bd314:
    // 0x1bd314: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x1bd314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
    // 0x1bd318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd31c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BD31Cu;
    SET_GPR_U32(ctx, 31, 0x1BD324u);
    ctx->pc = 0x1BD320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD31Cu;
            // 0x1bd320: 0x46160302  mul.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD324u; }
        if (ctx->pc != 0x1BD324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD324u; }
        if (ctx->pc != 0x1BD324u) { return; }
    }
    ctx->pc = 0x1BD324u;
label_1bd324:
    // 0x1bd324: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1bd324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bd328: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd32c: 0x2470004a  addiu       $s0, $v1, 0x4A
    ctx->pc = 0x1bd32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 74));
    // 0x1bd330: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BD330u;
    SET_GPR_U32(ctx, 31, 0x1BD338u);
    ctx->pc = 0x1BD334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD330u;
            // 0x1bd334: 0x2028821  addu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD338u; }
        if (ctx->pc != 0x1BD338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD338u; }
        if (ctx->pc != 0x1BD338u) { return; }
    }
    ctx->pc = 0x1BD338u;
label_1bd338:
    // 0x1bd338: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd33c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BD33Cu;
    SET_GPR_U32(ctx, 31, 0x1BD344u);
    ctx->pc = 0x1BD340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD33Cu;
            // 0x1bd340: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD344u; }
        if (ctx->pc != 0x1BD344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD344u; }
        if (ctx->pc != 0x1BD344u) { return; }
    }
    ctx->pc = 0x1BD344u;
label_1bd344:
    // 0x1bd344: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd348: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bd348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bd34c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD34Cu;
    SET_GPR_U32(ctx, 31, 0x1BD354u);
    ctx->pc = 0x1BD350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD34Cu;
            // 0x1bd350: 0x240600b2  addiu       $a2, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD354u; }
        if (ctx->pc != 0x1BD354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD354u; }
        if (ctx->pc != 0x1BD354u) { return; }
    }
    ctx->pc = 0x1BD354u;
label_1bd354:
    // 0x1bd354: 0x26a6002f  addiu       $a2, $s5, 0x2F
    ctx->pc = 0x1bd354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 47));
    // 0x1bd358: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd35c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd360: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD360u;
    SET_GPR_U32(ctx, 31, 0x1BD368u);
    ctx->pc = 0x1BD364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD360u;
            // 0x1bd364: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD368u; }
        if (ctx->pc != 0x1BD368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD368u; }
        if (ctx->pc != 0x1BD368u) { return; }
    }
    ctx->pc = 0x1BD368u;
label_1bd368:
    // 0x1bd368: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd36c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bd36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bd370: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD370u;
    SET_GPR_U32(ctx, 31, 0x1BD378u);
    ctx->pc = 0x1BD374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD370u;
            // 0x1bd374: 0x240600b2  addiu       $a2, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD378u; }
        if (ctx->pc != 0x1BD378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD378u; }
        if (ctx->pc != 0x1BD378u) { return; }
    }
    ctx->pc = 0x1BD378u;
label_1bd378:
    // 0x1bd378: 0x26a6002f  addiu       $a2, $s5, 0x2F
    ctx->pc = 0x1bd378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 47));
    // 0x1bd37c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd380: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd384: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD384u;
    SET_GPR_U32(ctx, 31, 0x1BD38Cu);
    ctx->pc = 0x1BD388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD384u;
            // 0x1bd388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD38Cu; }
        if (ctx->pc != 0x1BD38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD38Cu; }
        if (ctx->pc != 0x1BD38Cu) { return; }
    }
    ctx->pc = 0x1BD38Cu;
label_1bd38c:
    // 0x1bd38c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd390: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bd390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bd394: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD394u;
    SET_GPR_U32(ctx, 31, 0x1BD39Cu);
    ctx->pc = 0x1BD398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD394u;
            // 0x1bd398: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD39Cu; }
        if (ctx->pc != 0x1BD39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD39Cu; }
        if (ctx->pc != 0x1BD39Cu) { return; }
    }
    ctx->pc = 0x1BD39Cu;
label_1bd39c:
    // 0x1bd39c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3a0: 0x26a60033  addiu       $a2, $s5, 0x33
    ctx->pc = 0x1bd3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 51));
    // 0x1bd3a4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd3a8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD3A8u;
    SET_GPR_U32(ctx, 31, 0x1BD3B0u);
    ctx->pc = 0x1BD3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3A8u;
            // 0x1bd3ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3B0u; }
        if (ctx->pc != 0x1BD3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3B0u; }
        if (ctx->pc != 0x1BD3B0u) { return; }
    }
    ctx->pc = 0x1BD3B0u;
label_1bd3b0:
    // 0x1bd3b0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd3b4: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bd3b8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD3B8u;
    SET_GPR_U32(ctx, 31, 0x1BD3C0u);
    ctx->pc = 0x1BD3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3B8u;
            // 0x1bd3bc: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3C0u; }
        if (ctx->pc != 0x1BD3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3C0u; }
        if (ctx->pc != 0x1BD3C0u) { return; }
    }
    ctx->pc = 0x1BD3C0u;
label_1bd3c0:
    // 0x1bd3c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3c4: 0x26a60033  addiu       $a2, $s5, 0x33
    ctx->pc = 0x1bd3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 51));
    // 0x1bd3c8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd3cc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD3CCu;
    SET_GPR_U32(ctx, 31, 0x1BD3D4u);
    ctx->pc = 0x1BD3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3CCu;
            // 0x1bd3d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3D4u; }
        if (ctx->pc != 0x1BD3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3D4u; }
        if (ctx->pc != 0x1BD3D4u) { return; }
    }
    ctx->pc = 0x1BD3D4u;
label_1bd3d4:
    // 0x1bd3d4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BD3D4u;
    SET_GPR_U32(ctx, 31, 0x1BD3DCu);
    ctx->pc = 0x1BD3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3D4u;
            // 0x1bd3d8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3DCu; }
        if (ctx->pc != 0x1BD3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3DCu; }
        if (ctx->pc != 0x1BD3DCu) { return; }
    }
    ctx->pc = 0x1BD3DCu;
label_1bd3dc:
    // 0x1bd3dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bd3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd3e4: 0xc067ff8  jal         func_19FFE0
    ctx->pc = 0x1BD3E4u;
    SET_GPR_U32(ctx, 31, 0x1BD3ECu);
    ctx->pc = 0x1BD3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3E4u;
            // 0x1bd3e8: 0x27a60478  addiu       $a2, $sp, 0x478 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FFE0u;
    if (runtime->hasFunction(0x19FFE0u)) {
        auto targetFn = runtime->lookupFunction(0x19FFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3ECu; }
        if (ctx->pc != 0x1BD3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAbs__16CBattleCharaInfoFiPi_0x19ffe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3ECu; }
        if (ctx->pc != 0x1BD3ECu) { return; }
    }
    ctx->pc = 0x1BD3ECu;
label_1bd3ec:
    // 0x1bd3ec: 0xc7a20478  lwc1        $f2, 0x478($sp)
    ctx->pc = 0x1bd3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd3f0: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x1bd3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
    // 0x1bd3f4: 0xc7a1047c  lwc1        $f1, 0x47C($sp)
    ctx->pc = 0x1bd3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd3f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd3fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd400: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bd400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bd404: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1bd404u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1bd408: 0x0  nop
    ctx->pc = 0x1bd408u;
    // NOP
    // 0x1bd40c: 0x0  nop
    ctx->pc = 0x1bd40cu;
    // NOP
    // 0x1bd410: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BD410u;
    SET_GPR_U32(ctx, 31, 0x1BD418u);
    ctx->pc = 0x1BD414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD410u;
            // 0x1bd414: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD418u; }
        if (ctx->pc != 0x1BD418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD418u; }
        if (ctx->pc != 0x1BD418u) { return; }
    }
    ctx->pc = 0x1BD418u;
label_1bd418:
    // 0x1bd418: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1bd418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bd41c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bd424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd428: 0x2470004c  addiu       $s0, $v1, 0x4C
    ctx->pc = 0x1bd428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x1bd42c: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BD42Cu;
    SET_GPR_U32(ctx, 31, 0x1BD434u);
    ctx->pc = 0x1BD430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD42Cu;
            // 0x1bd430: 0x2028821  addu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD434u; }
        if (ctx->pc != 0x1BD434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD434u; }
        if (ctx->pc != 0x1BD434u) { return; }
    }
    ctx->pc = 0x1BD434u;
label_1bd434:
    // 0x1bd434: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BD434u;
    SET_GPR_U32(ctx, 31, 0x1BD43Cu);
    ctx->pc = 0x1BD438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD434u;
            // 0x1bd438: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD43Cu; }
        if (ctx->pc != 0x1BD43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD43Cu; }
        if (ctx->pc != 0x1BD43Cu) { return; }
    }
    ctx->pc = 0x1BD43Cu;
label_1bd43c:
    // 0x1bd43c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd440: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BD440u;
    SET_GPR_U32(ctx, 31, 0x1BD448u);
    ctx->pc = 0x1BD444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD440u;
            // 0x1bd444: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD448u; }
        if (ctx->pc != 0x1BD448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD448u; }
        if (ctx->pc != 0x1BD448u) { return; }
    }
    ctx->pc = 0x1BD448u;
label_1bd448:
    // 0x1bd448: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd44c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bd44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bd450: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD450u;
    SET_GPR_U32(ctx, 31, 0x1BD458u);
    ctx->pc = 0x1BD454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD450u;
            // 0x1bd454: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD458u; }
        if (ctx->pc != 0x1BD458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD458u; }
        if (ctx->pc != 0x1BD458u) { return; }
    }
    ctx->pc = 0x1BD458u;
label_1bd458:
    // 0x1bd458: 0x26a60034  addiu       $a2, $s5, 0x34
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
    // 0x1bd45c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd464: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD464u;
    SET_GPR_U32(ctx, 31, 0x1BD46Cu);
    ctx->pc = 0x1BD468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD464u;
            // 0x1bd468: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD46Cu; }
        if (ctx->pc != 0x1BD46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD46Cu; }
        if (ctx->pc != 0x1BD46Cu) { return; }
    }
    ctx->pc = 0x1BD46Cu;
label_1bd46c:
    // 0x1bd46c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd470: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bd470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bd474: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD474u;
    SET_GPR_U32(ctx, 31, 0x1BD47Cu);
    ctx->pc = 0x1BD478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD474u;
            // 0x1bd478: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD47Cu; }
        if (ctx->pc != 0x1BD47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD47Cu; }
        if (ctx->pc != 0x1BD47Cu) { return; }
    }
    ctx->pc = 0x1BD47Cu;
label_1bd47c:
    // 0x1bd47c: 0x26a60034  addiu       $a2, $s5, 0x34
    ctx->pc = 0x1bd47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
    // 0x1bd480: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd488: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD488u;
    SET_GPR_U32(ctx, 31, 0x1BD490u);
    ctx->pc = 0x1BD48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD488u;
            // 0x1bd48c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD490u; }
        if (ctx->pc != 0x1BD490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD490u; }
        if (ctx->pc != 0x1BD490u) { return; }
    }
    ctx->pc = 0x1BD490u;
label_1bd490:
    // 0x1bd490: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd494: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1bd494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1bd498: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD498u;
    SET_GPR_U32(ctx, 31, 0x1BD4A0u);
    ctx->pc = 0x1BD49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD498u;
            // 0x1bd49c: 0x240600ba  addiu       $a2, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4A0u; }
        if (ctx->pc != 0x1BD4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4A0u; }
        if (ctx->pc != 0x1BD4A0u) { return; }
    }
    ctx->pc = 0x1BD4A0u;
label_1bd4a0:
    // 0x1bd4a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4a4: 0x26a60037  addiu       $a2, $s5, 0x37
    ctx->pc = 0x1bd4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 55));
    // 0x1bd4a8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd4ac: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD4ACu;
    SET_GPR_U32(ctx, 31, 0x1BD4B4u);
    ctx->pc = 0x1BD4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4ACu;
            // 0x1bd4b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4B4u; }
        if (ctx->pc != 0x1BD4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4B4u; }
        if (ctx->pc != 0x1BD4B4u) { return; }
    }
    ctx->pc = 0x1BD4B4u;
label_1bd4b4:
    // 0x1bd4b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd4b8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1bd4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1bd4bc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BD4BCu;
    SET_GPR_U32(ctx, 31, 0x1BD4C4u);
    ctx->pc = 0x1BD4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4BCu;
            // 0x1bd4c0: 0x240600ba  addiu       $a2, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4C4u; }
        if (ctx->pc != 0x1BD4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4C4u; }
        if (ctx->pc != 0x1BD4C4u) { return; }
    }
    ctx->pc = 0x1BD4C4u;
label_1bd4c4:
    // 0x1bd4c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4c8: 0x26a60037  addiu       $a2, $s5, 0x37
    ctx->pc = 0x1bd4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 55));
    // 0x1bd4cc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1bd4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bd4d0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BD4D0u;
    SET_GPR_U32(ctx, 31, 0x1BD4D8u);
    ctx->pc = 0x1BD4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4D0u;
            // 0x1bd4d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4D8u; }
        if (ctx->pc != 0x1BD4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4D8u; }
        if (ctx->pc != 0x1BD4D8u) { return; }
    }
    ctx->pc = 0x1BD4D8u;
label_1bd4d8:
    // 0x1bd4d8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BD4D8u;
    SET_GPR_U32(ctx, 31, 0x1BD4E0u);
    ctx->pc = 0x1BD4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4D8u;
            // 0x1bd4dc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4E0u; }
        if (ctx->pc != 0x1BD4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4E0u; }
        if (ctx->pc != 0x1BD4E0u) { return; }
    }
    ctx->pc = 0x1BD4E0u;
label_1bd4e0:
    // 0x1bd4e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1bd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bd4e4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bd4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bd4e8: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x1bd4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x1bd4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4f0: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bd4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bd4f4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bd4f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4f8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BD4F8u;
    SET_GPR_U32(ctx, 31, 0x1BD500u);
    ctx->pc = 0x1BD4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4F8u;
            // 0x1bd4fc: 0x2450008e  addiu       $s0, $v0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 142));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD500u; }
        if (ctx->pc != 0x1BD500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD500u; }
        if (ctx->pc != 0x1BD500u) { return; }
    }
    ctx->pc = 0x1BD500u;
label_1bd500:
    // 0x1bd500: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1bd504: 0x2604ffc3  addiu       $a0, $s0, -0x3D
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967235));
    // 0x1bd508: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1bd508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1bd50c: 0x26a5001c  addiu       $a1, $s5, 0x1C
    ctx->pc = 0x1bd50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x1bd510: 0x8fa60468  lw          $a2, 0x468($sp)
    ctx->pc = 0x1bd510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x1bd514: 0x27a80440  addiu       $t0, $sp, 0x440
    ctx->pc = 0x1bd514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x1bd518: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bd518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bd51c: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bd51cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd520: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bd520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd524: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BD524u;
    SET_GPR_U32(ctx, 31, 0x1BD52Cu);
    ctx->pc = 0x1BD528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD524u;
            // 0x1bd528: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD52Cu; }
        if (ctx->pc != 0x1BD52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD52Cu; }
        if (ctx->pc != 0x1BD52Cu) { return; }
    }
    ctx->pc = 0x1BD52Cu;
label_1bd52c:
    // 0x1bd52c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bd52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bd530: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x1bd530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    // 0x1bd534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd538: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1bd538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bd53c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BD53Cu;
    SET_GPR_U32(ctx, 31, 0x1BD544u);
    ctx->pc = 0x1BD540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD53Cu;
            // 0x1bd540: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD544u; }
        if (ctx->pc != 0x1BD544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD544u; }
        if (ctx->pc != 0x1BD544u) { return; }
    }
    ctx->pc = 0x1BD544u;
label_1bd544:
    // 0x1bd544: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1bd544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1bd548: 0x2604fffc  addiu       $a0, $s0, -0x4
    ctx->pc = 0x1bd548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1bd54c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1bd54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1bd550: 0x26a5001c  addiu       $a1, $s5, 0x1C
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x1bd554: 0x27a2046c  addiu       $v0, $sp, 0x46C
    ctx->pc = 0x1bd554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1132));
    // 0x1bd558: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1bd558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bd55c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bd55cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd560: 0x27a80450  addiu       $t0, $sp, 0x450
    ctx->pc = 0x1bd560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    // 0x1bd564: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1bd564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd568: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bd568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd56c: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BD56Cu;
    SET_GPR_U32(ctx, 31, 0x1BD574u);
    ctx->pc = 0x1BD570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD56Cu;
            // 0x1bd570: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD574u; }
        if (ctx->pc != 0x1BD574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD574u; }
        if (ctx->pc != 0x1BD574u) { return; }
    }
    ctx->pc = 0x1BD574u;
label_1bd574:
    // 0x1bd574: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bd574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bd578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd57c: 0x0  nop
    ctx->pc = 0x1bd57cu;
    // NOP
    // 0x1bd580: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1bd580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd584: 0x0  nop
    ctx->pc = 0x1bd584u;
    // NOP
    // 0x1bd588: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x1BD588u;
    {
        const bool branch_taken_0x1bd588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd588) {
            ctx->pc = 0x1BD670u;
            goto label_1bd670;
        }
    }
    ctx->pc = 0x1BD590u;
    // 0x1bd590: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x1BD590u;
    SET_GPR_U32(ctx, 31, 0x1BD598u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD598u; }
        if (ctx->pc != 0x1BD598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD598u; }
        if (ctx->pc != 0x1BD598u) { return; }
    }
    ctx->pc = 0x1BD598u;
label_1bd598:
    // 0x1bd598: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD598u;
    {
        const bool branch_taken_0x1bd598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD598u;
            // 0x1bd59c: 0x3c033e99  lui         $v1, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd598) {
            ctx->pc = 0x1BD5ACu;
            goto label_1bd5ac;
        }
    }
    ctx->pc = 0x1BD5A0u;
    // 0x1bd5a0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1BD5A0u;
    {
        const bool branch_taken_0x1bd5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5A0u;
            // 0x1bd5a4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5a0) {
            ctx->pc = 0x1BD674u;
            goto label_1bd674;
        }
    }
    ctx->pc = 0x1BD5A8u;
    // 0x1bd5a8: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1bd5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_1bd5ac:
    // 0x1bd5ac: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bd5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1bd5b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd5b4: 0x0  nop
    ctx->pc = 0x1bd5b4u;
    // NOP
    // 0x1bd5b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1bd5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd5bc: 0x0  nop
    ctx->pc = 0x1bd5bcu;
    // NOP
    // 0x1bd5c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD5C0u;
    {
        const bool branch_taken_0x1bd5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd5c0) {
            ctx->pc = 0x1BD5D8u;
            goto label_1bd5d8;
        }
    }
    ctx->pc = 0x1BD5C8u;
    // 0x1bd5c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd5cc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd5d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD5D0u;
    {
        const bool branch_taken_0x1bd5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5D0u;
            // 0x1bd5d4: 0xac230460  sw          $v1, 0x460($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5d0) {
            ctx->pc = 0x1BD5E0u;
            goto label_1bd5e0;
        }
    }
    ctx->pc = 0x1BD5D8u;
label_1bd5d8:
    // 0x1bd5d8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd5dc: 0xac200460  sw          $zero, 0x460($at)
    ctx->pc = 0x1bd5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 0));
label_1bd5e0:
    // 0x1bd5e0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1bd5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1bd5e4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1bd5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1bd5e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd5ec: 0x0  nop
    ctx->pc = 0x1bd5ecu;
    // NOP
    // 0x1bd5f0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1bd5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd5f4: 0x0  nop
    ctx->pc = 0x1bd5f4u;
    // NOP
    // 0x1bd5f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD5F8u;
    {
        const bool branch_taken_0x1bd5f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd5f8) {
            ctx->pc = 0x1BD610u;
            goto label_1bd610;
        }
    }
    ctx->pc = 0x1BD600u;
    // 0x1bd600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd604: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD608u;
    {
        const bool branch_taken_0x1bd608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD608u;
            // 0x1bd60c: 0xac230464  sw          $v1, 0x464($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd608) {
            ctx->pc = 0x1BD618u;
            goto label_1bd618;
        }
    }
    ctx->pc = 0x1BD610u;
label_1bd610:
    // 0x1bd610: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd614: 0xac200464  sw          $zero, 0x464($at)
    ctx->pc = 0x1bd614u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1124), GPR_U32(ctx, 0));
label_1bd618:
    // 0x1bd618: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1bd618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1bd61c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1bd61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1bd620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd624: 0x0  nop
    ctx->pc = 0x1bd624u;
    // NOP
    // 0x1bd628: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1bd628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd62c: 0x0  nop
    ctx->pc = 0x1bd62cu;
    // NOP
    // 0x1bd630: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD630u;
    {
        const bool branch_taken_0x1bd630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd630) {
            ctx->pc = 0x1BD648u;
            goto label_1bd648;
        }
    }
    ctx->pc = 0x1BD638u;
    // 0x1bd638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd63c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd640: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD640u;
    {
        const bool branch_taken_0x1bd640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD640u;
            // 0x1bd644: 0xac230468  sw          $v1, 0x468($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd640) {
            ctx->pc = 0x1BD650u;
            goto label_1bd650;
        }
    }
    ctx->pc = 0x1BD648u;
label_1bd648:
    // 0x1bd648: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd64c: 0xac200468  sw          $zero, 0x468($at)
    ctx->pc = 0x1bd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1128), GPR_U32(ctx, 0));
label_1bd650:
    // 0x1bd650: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd654: 0xe4340470  swc1        $f20, 0x470($at)
    ctx->pc = 0x1bd654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1136), bits); }
    // 0x1bd658: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd65c: 0xe4350474  swc1        $f21, 0x474($at)
    ctx->pc = 0x1bd65cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1140), bits); }
    // 0x1bd660: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd664: 0xe4360478  swc1        $f22, 0x478($at)
    ctx->pc = 0x1bd664u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1144), bits); }
    // 0x1bd668: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bd66c: 0xac20047c  sw          $zero, 0x47C($at)
    ctx->pc = 0x1bd66cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1148), GPR_U32(ctx, 0));
label_1bd670:
    // 0x1bd670: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1bd670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1bd674:
    // 0x1bd674: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x1bd674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1bd678: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1bd678u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bd67c: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x1bd67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1bd680: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1bd680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bd684: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x1bd684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1bd688: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1bd688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bd68c: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x1bd68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bd690: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1bd690u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bd694: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1bd694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bd698: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1bd698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bd69c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1bd69cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bd6a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1bd6a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd6a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bd6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bd6a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bd6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6ACu;
            // 0x1bd6b0: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD6B4u;
}
