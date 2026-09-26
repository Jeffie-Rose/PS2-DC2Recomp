#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__14CEffectManagerFP11mgC3DSprite
// Address: 0x17d410 - 0x17d750
void CreatePacket__14CEffectManagerFP11mgC3DSprite_0x17d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__14CEffectManagerFP11mgC3DSprite_0x17d410");
#endif

    switch (ctx->pc) {
        case 0x17d450u: goto label_17d450;
        case 0x17d4d8u: goto label_17d4d8;
        case 0x17d4e4u: goto label_17d4e4;
        case 0x17d4f4u: goto label_17d4f4;
        case 0x17d500u: goto label_17d500;
        case 0x17d508u: goto label_17d508;
        case 0x17d538u: goto label_17d538;
        case 0x17d540u: goto label_17d540;
        case 0x17d55cu: goto label_17d55c;
        case 0x17d638u: goto label_17d638;
        case 0x17d644u: goto label_17d644;
        case 0x17d654u: goto label_17d654;
        case 0x17d664u: goto label_17d664;
        case 0x17d66cu: goto label_17d66c;
        case 0x17d6f4u: goto label_17d6f4;
        case 0x17d718u: goto label_17d718;
        case 0x17d720u: goto label_17d720;
        default: break;
    }

    ctx->pc = 0x17d410u;

    // 0x17d410: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x17d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x17d414: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17d418: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17d418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17d41c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17d420: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17d424: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x17d424u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d428: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17d42c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17d430: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17d430u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d434: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17d438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d440: 0x12a000b7  beqz        $s5, . + 4 + (0xB7 << 2)
    ctx->pc = 0x17D440u;
    {
        const bool branch_taken_0x17d440 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D440u;
            // 0x17d444: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d440) {
            ctx->pc = 0x17D720u;
            goto label_17d720;
        }
    }
    ctx->pc = 0x17D448u;
    // 0x17d448: 0xc051150  jal         func_144540
    ctx->pc = 0x17D448u;
    SET_GPR_U32(ctx, 31, 0x17D450u);
    ctx->pc = 0x17D44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D448u;
            // 0x17d44c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144540u;
    if (runtime->hasFunction(0x144540u)) {
        auto targetFn = runtime->lookupFunction(0x144540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D450u; }
        if (ctx->pc != 0x17D450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetpDrawEnv__Fi_0x144540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D450u; }
        if (ctx->pc != 0x17D450u) { return; }
    }
    ctx->pc = 0x17D450u;
label_17d450:
    // 0x17d450: 0xdc4d0000  ld          $t5, 0x0($v0)
    ctx->pc = 0x17d450u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d454: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17d454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17d458: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x17d458u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17d45c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x17d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17d460: 0x27ac00e0  addiu       $t4, $sp, 0xE0
    ctx->pc = 0x17d460u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17d464: 0x27ab00f0  addiu       $t3, $sp, 0xF0
    ctx->pc = 0x17d464u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17d468: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x17d468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17d46c: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x17d46cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x17d470: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x17d470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x17d474: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x17d474u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x17d478: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17d478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17d47c: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x17d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x17d480: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x17d480u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x17d484: 0xdc4a0010  ld          $t2, 0x10($v0)
    ctx->pc = 0x17d484u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17d488: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x17d488u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x17d48c: 0xdc4a0018  ld          $t2, 0x18($v0)
    ctx->pc = 0x17d48cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17d490: 0xffaa00d8  sd          $t2, 0xD8($sp)
    ctx->pc = 0x17d490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 10));
    // 0x17d494: 0xdc4a0020  ld          $t2, 0x20($v0)
    ctx->pc = 0x17d494u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17d498: 0xfd8a0000  sd          $t2, 0x0($t4)
    ctx->pc = 0x17d498u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 10));
    // 0x17d49c: 0xdc4a0028  ld          $t2, 0x28($v0)
    ctx->pc = 0x17d49cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17d4a0: 0xffaa00e8  sd          $t2, 0xE8($sp)
    ctx->pc = 0x17d4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 10));
    // 0x17d4a4: 0xdc4a0030  ld          $t2, 0x30($v0)
    ctx->pc = 0x17d4a4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x17d4a8: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x17d4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
    // 0x17d4ac: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x17d4acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x17d4b0: 0xffa200f8  sd          $v0, 0xF8($sp)
    ctx->pc = 0x17d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
    // 0x17d4b4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x17d4b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17d4b8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x17d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x17d4bc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x17d4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x17d4c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x17d4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17d4c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x17d4c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17d4c8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x17d4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x17d4cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17d4d0: 0xc04e290  jal         func_138A40
    ctx->pc = 0x17D4D0u;
    SET_GPR_U32(ctx, 31, 0x17D4D8u);
    ctx->pc = 0x17D4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4D0u;
            // 0x17d4d4: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4D8u; }
        if (ctx->pc != 0x17D4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4D8u; }
        if (ctx->pc != 0x17D4D8u) { return; }
    }
    ctx->pc = 0x17D4D8u;
label_17d4d8:
    // 0x17d4d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17d4dc: 0xc04e25c  jal         func_138970
    ctx->pc = 0x17D4DCu;
    SET_GPR_U32(ctx, 31, 0x17D4E4u);
    ctx->pc = 0x17D4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4DCu;
            // 0x17d4e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4E4u; }
        if (ctx->pc != 0x17D4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4E4u; }
        if (ctx->pc != 0x17D4E4u) { return; }
    }
    ctx->pc = 0x17D4E4u;
label_17d4e4:
    // 0x17d4e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d4ec: 0xc04ec68  jal         func_13B1A0
    ctx->pc = 0x17D4ECu;
    SET_GPR_U32(ctx, 31, 0x17D4F4u);
    ctx->pc = 0x17D4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4ECu;
            // 0x17d4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B1A0u;
    if (runtime->hasFunction(0x13B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4F4u; }
        if (ctx->pc != 0x17D4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4F4u; }
        if (ctx->pc != 0x17D4F4u) { return; }
    }
    ctx->pc = 0x17D4F4u;
label_17d4f4:
    // 0x17d4f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17d4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4f8: 0xc04ec80  jal         func_13B200
    ctx->pc = 0x17D4F8u;
    SET_GPR_U32(ctx, 31, 0x17D500u);
    ctx->pc = 0x17D4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4F8u;
            // 0x17d4fc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D500u; }
        if (ctx->pc != 0x17D500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D500u; }
        if (ctx->pc != 0x17D500u) { return; }
    }
    ctx->pc = 0x17D500u;
label_17d500:
    // 0x17d500: 0xc04ecd8  jal         func_13B360
    ctx->pc = 0x17D500u;
    SET_GPR_U32(ctx, 31, 0x17D508u);
    ctx->pc = 0x17D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D500u;
            // 0x17d504: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D508u; }
        if (ctx->pc != 0x17D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D508u; }
        if (ctx->pc != 0x17D508u) { return; }
    }
    ctx->pc = 0x17D508u;
label_17d508:
    // 0x17d508: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17d50c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x17d50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17d510: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x17d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x17d514: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x17d514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17d518: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17d518u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d51c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x17d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x17d520: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17d524: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x17d524u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x17d528: 0x24424ee0  addiu       $v0, $v0, 0x4EE0
    ctx->pc = 0x17d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
    // 0x17d52c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17d52cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d530: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17D530u;
    SET_GPR_U32(ctx, 31, 0x17D538u);
    ctx->pc = 0x17D534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D530u;
            // 0x17d534: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D538u; }
        if (ctx->pc != 0x17D538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D538u; }
        if (ctx->pc != 0x17D538u) { return; }
    }
    ctx->pc = 0x17D538u;
label_17d538:
    // 0x17d538: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17D538u;
    SET_GPR_U32(ctx, 31, 0x17D540u);
    ctx->pc = 0x17D53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D538u;
            // 0x17d53c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D540u; }
        if (ctx->pc != 0x17D540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D540u; }
        if (ctx->pc != 0x17D540u) { return; }
    }
    ctx->pc = 0x17D540u;
label_17d540:
    // 0x17d540: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d544: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x17d544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x17d548: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x17d548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x17d54c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x17d54cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d550: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17d550u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d554: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x17D554u;
    {
        const bool branch_taken_0x17d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D554u;
            // 0x17d558: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d554) {
            ctx->pc = 0x17D700u;
            goto label_17d700;
        }
    }
    ctx->pc = 0x17D55Cu;
label_17d55c:
    // 0x17d55c: 0x8ee20020  lw          $v0, 0x20($s7)
    ctx->pc = 0x17d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x17d560: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x17d560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17d564: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17d564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17d568: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x17D568u;
    {
        const bool branch_taken_0x17d568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d568) {
            ctx->pc = 0x17D6F4u;
            goto label_17d6f4;
        }
    }
    ctx->pc = 0x17D570u;
    // 0x17d570: 0x8e500144  lw          $s0, 0x144($s2)
    ctx->pc = 0x17d570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x17d574: 0x1200005f  beqz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x17D574u;
    {
        const bool branch_taken_0x17d574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d574) {
            ctx->pc = 0x17D6F4u;
            goto label_17d6f4;
        }
    }
    ctx->pc = 0x17D57Cu;
    // 0x17d57c: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x17d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x17d580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d584: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D584u;
    {
        const bool branch_taken_0x17d584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D584u;
            // 0x17d588: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d584) {
            ctx->pc = 0x17D594u;
            goto label_17d594;
        }
    }
    ctx->pc = 0x17D58Cu;
    // 0x17d58c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17D58Cu;
    {
        const bool branch_taken_0x17d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d58c) {
            ctx->pc = 0x17D5B4u;
            goto label_17d5b4;
        }
    }
    ctx->pc = 0x17D594u;
label_17d594:
    // 0x17d594: 0x0  nop
    ctx->pc = 0x17d594u;
    // NOP
    // 0x17d598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d59c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D59Cu;
    {
        const bool branch_taken_0x17d59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D59Cu;
            // 0x17d5a0: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d59c) {
            ctx->pc = 0x17D5ACu;
            goto label_17d5ac;
        }
    }
    ctx->pc = 0x17D5A4u;
    // 0x17d5a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17D5A4u;
    {
        const bool branch_taken_0x17d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d5a4) {
            ctx->pc = 0x17D5B4u;
            goto label_17d5b4;
        }
    }
    ctx->pc = 0x17D5ACu;
label_17d5ac:
    // 0x17d5ac: 0x0  nop
    ctx->pc = 0x17d5acu;
    // NOP
    // 0x17d5b0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x17d5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17d5b4:
    // 0x17d5b4: 0x0  nop
    ctx->pc = 0x17d5b4u;
    // NOP
    // 0x17d5b8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x17d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17d5bc: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x17d5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d5c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17d5c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5c4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x17d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d5c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17d5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d5d0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x17d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x17d5d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17d5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17d5d8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x17d5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x17d5dc: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x17d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d5e0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x17d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d5e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17d5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17d5e8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x17d5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x17d5ec: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x17d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d5f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17d5f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d5f4: 0x10500002  beq         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D5F4u;
    {
        const bool branch_taken_0x17d5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x17D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5F4u;
            // 0x17d5f8: 0xe7a0011c  swc1        $f0, 0x11C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d5f4) {
            ctx->pc = 0x17D600u;
            goto label_17d600;
        }
    }
    ctx->pc = 0x17D5FCu;
    // 0x17d5fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d600:
    // 0x17d600: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D600u;
    {
        const bool branch_taken_0x17d600 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d600) {
            ctx->pc = 0x17D614u;
            goto label_17d614;
        }
    }
    ctx->pc = 0x17D608u;
    // 0x17d608: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17d60c: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D60Cu;
    {
        const bool branch_taken_0x17d60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x17d60c) {
            ctx->pc = 0x17D61Cu;
            goto label_17d61c;
        }
    }
    ctx->pc = 0x17D614u;
label_17d614:
    // 0x17d614: 0x0  nop
    ctx->pc = 0x17d614u;
    // NOP
    // 0x17d618: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x17d618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d61c:
    // 0x17d61c: 0x0  nop
    ctx->pc = 0x17d61cu;
    // NOP
    // 0x17d620: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D620u;
    {
        const bool branch_taken_0x17d620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D620u;
            // 0x17d624: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d620) {
            ctx->pc = 0x17D630u;
            goto label_17d630;
        }
    }
    ctx->pc = 0x17D628u;
    // 0x17d628: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x17D628u;
    {
        const bool branch_taken_0x17d628 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d628) {
            ctx->pc = 0x17D66Cu;
            goto label_17d66c;
        }
    }
    ctx->pc = 0x17D630u;
label_17d630:
    // 0x17d630: 0xc04edb0  jal         func_13B6C0
    ctx->pc = 0x17D630u;
    SET_GPR_U32(ctx, 31, 0x17D638u);
    ctx->pc = 0x17D634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D630u;
            // 0x17d634: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D638u; }
        if (ctx->pc != 0x17D638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D638u; }
        if (ctx->pc != 0x17D638u) { return; }
    }
    ctx->pc = 0x17D638u;
label_17d638:
    // 0x17d638: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17d638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17d63c: 0xc04e25c  jal         func_138970
    ctx->pc = 0x17D63Cu;
    SET_GPR_U32(ctx, 31, 0x17D644u);
    ctx->pc = 0x17D640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D63Cu;
            // 0x17d640: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D644u; }
        if (ctx->pc != 0x17D644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D644u; }
        if (ctx->pc != 0x17D644u) { return; }
    }
    ctx->pc = 0x17D644u;
label_17d644:
    // 0x17d644: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D644u;
    {
        const bool branch_taken_0x17d644 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D644u;
            // 0x17d648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d644) {
            ctx->pc = 0x17D654u;
            goto label_17d654;
        }
    }
    ctx->pc = 0x17D64Cu;
    // 0x17d64c: 0xc04ec80  jal         func_13B200
    ctx->pc = 0x17D64Cu;
    SET_GPR_U32(ctx, 31, 0x17D654u);
    ctx->pc = 0x17D650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D64Cu;
            // 0x17d650: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D654u; }
        if (ctx->pc != 0x17D654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D654u; }
        if (ctx->pc != 0x17D654u) { return; }
    }
    ctx->pc = 0x17D654u;
label_17d654:
    // 0x17d654: 0x0  nop
    ctx->pc = 0x17d654u;
    // NOP
    // 0x17d658: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17d658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d65c: 0xc04ecbc  jal         func_13B2F0
    ctx->pc = 0x17D65Cu;
    SET_GPR_U32(ctx, 31, 0x17D664u);
    ctx->pc = 0x17D660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D65Cu;
            // 0x17d660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D664u; }
        if (ctx->pc != 0x17D664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D664u; }
        if (ctx->pc != 0x17D664u) { return; }
    }
    ctx->pc = 0x17D664u;
label_17d664:
    // 0x17d664: 0xc04ecd8  jal         func_13B360
    ctx->pc = 0x17D664u;
    SET_GPR_U32(ctx, 31, 0x17D66Cu);
    ctx->pc = 0x17D668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D664u;
            // 0x17d668: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D66Cu; }
        if (ctx->pc != 0x17D66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D66Cu; }
        if (ctx->pc != 0x17D66Cu) { return; }
    }
    ctx->pc = 0x17D66Cu;
label_17d66c:
    // 0x17d66c: 0x0  nop
    ctx->pc = 0x17d66cu;
    // NOP
    // 0x17d670: 0xafb000ac  sw          $s0, 0xAC($sp)
    ctx->pc = 0x17d670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 16));
    // 0x17d674: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x17d674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
    // 0x17d678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17d67c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x17d67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d680: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17d680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d684: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x17d684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17d688: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x17d688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17d68c: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x17d68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17d690: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x17d690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x17d694: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x17d694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x17d698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d69c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x17d69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x17d6a0: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x17d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d6a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d6a8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x17d6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x17d6ac: 0x8e4a0030  lw          $t2, 0x30($s2)
    ctx->pc = 0x17d6acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x17d6b0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x17d6b4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x17d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x17d6b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17d6bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d6bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d6c0: 0x0  nop
    ctx->pc = 0x17d6c0u;
    // NOP
    // 0x17d6c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d6c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d6c8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x17d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x17d6cc: 0x8e4a0034  lw          $t2, 0x34($s2)
    ctx->pc = 0x17d6ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x17d6d0: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x17d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x17d6d4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x17d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x17d6d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17d6dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d6dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d6e0: 0x0  nop
    ctx->pc = 0x17d6e0u;
    // NOP
    // 0x17d6e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d6e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d6e8: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x17d6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x17d6ec: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x17D6ECu;
    SET_GPR_U32(ctx, 31, 0x17D6F4u);
    ctx->pc = 0x17D6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6ECu;
            // 0x17d6f0: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6F4u; }
        if (ctx->pc != 0x17D6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6F4u; }
        if (ctx->pc != 0x17D6F4u) { return; }
    }
    ctx->pc = 0x17D6F4u;
label_17d6f4:
    // 0x17d6f4: 0x0  nop
    ctx->pc = 0x17d6f4u;
    // NOP
    // 0x17d6f8: 0x26940200  addiu       $s4, $s4, 0x200
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x17d6fc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x17d6fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17d700:
    // 0x17d700: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x17d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x17d704: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x17d704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17d708: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x17D708u;
    {
        const bool branch_taken_0x17d708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D708u;
            // 0x17d70c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d708) {
            ctx->pc = 0x17D55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d55c;
        }
    }
    ctx->pc = 0x17D710u;
    // 0x17d710: 0xc04edb0  jal         func_13B6C0
    ctx->pc = 0x17D710u;
    SET_GPR_U32(ctx, 31, 0x17D718u);
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D718u; }
        if (ctx->pc != 0x17D718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D718u; }
        if (ctx->pc != 0x17D718u) { return; }
    }
    ctx->pc = 0x17D718u;
label_17d718:
    // 0x17d718: 0xc04edfc  jal         func_13B7F0
    ctx->pc = 0x17D718u;
    SET_GPR_U32(ctx, 31, 0x17D720u);
    ctx->pc = 0x17D71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D718u;
            // 0x17d71c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7F0u;
    if (runtime->hasFunction(0x13B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D720u; }
        if (ctx->pc != 0x17D720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D720u; }
        if (ctx->pc != 0x17D720u) { return; }
    }
    ctx->pc = 0x17D720u;
label_17d720:
    // 0x17d720: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17d720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17d724: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17d724u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17d728: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17d728u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17d72c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17d72cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d730: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17d730u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d734: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17d734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d738: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d73c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d748: 0x3e00008  jr          $ra
    ctx->pc = 0x17D748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D748u;
            // 0x17d74c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D750u;
}
