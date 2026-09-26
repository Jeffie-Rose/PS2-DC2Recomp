#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11CDngFreeMapFv
// Address: 0x1ee1a0 - 0x1ee790
void Draw__11CDngFreeMapFv_0x1ee1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11CDngFreeMapFv_0x1ee1a0");
#endif

    switch (ctx->pc) {
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee234u: goto label_1ee234;
        case 0x1ee240u: goto label_1ee240;
        case 0x1ee248u: goto label_1ee248;
        case 0x1ee254u: goto label_1ee254;
        case 0x1ee260u: goto label_1ee260;
        case 0x1ee278u: goto label_1ee278;
        case 0x1ee284u: goto label_1ee284;
        case 0x1ee290u: goto label_1ee290;
        case 0x1ee29cu: goto label_1ee29c;
        case 0x1ee2a8u: goto label_1ee2a8;
        case 0x1ee2c0u: goto label_1ee2c0;
        case 0x1ee2ccu: goto label_1ee2cc;
        case 0x1ee2e0u: goto label_1ee2e0;
        case 0x1ee2f4u: goto label_1ee2f4;
        case 0x1ee318u: goto label_1ee318;
        case 0x1ee32cu: goto label_1ee32c;
        case 0x1ee364u: goto label_1ee364;
        case 0x1ee374u: goto label_1ee374;
        case 0x1ee384u: goto label_1ee384;
        case 0x1ee398u: goto label_1ee398;
        case 0x1ee3d0u: goto label_1ee3d0;
        case 0x1ee3fcu: goto label_1ee3fc;
        case 0x1ee420u: goto label_1ee420;
        case 0x1ee444u: goto label_1ee444;
        case 0x1ee460u: goto label_1ee460;
        case 0x1ee47cu: goto label_1ee47c;
        case 0x1ee49cu: goto label_1ee49c;
        case 0x1ee4acu: goto label_1ee4ac;
        case 0x1ee4b8u: goto label_1ee4b8;
        case 0x1ee4c8u: goto label_1ee4c8;
        case 0x1ee4dcu: goto label_1ee4dc;
        case 0x1ee4f0u: goto label_1ee4f0;
        case 0x1ee508u: goto label_1ee508;
        case 0x1ee520u: goto label_1ee520;
        case 0x1ee538u: goto label_1ee538;
        case 0x1ee558u: goto label_1ee558;
        case 0x1ee564u: goto label_1ee564;
        case 0x1ee574u: goto label_1ee574;
        case 0x1ee588u: goto label_1ee588;
        case 0x1ee598u: goto label_1ee598;
        case 0x1ee5a8u: goto label_1ee5a8;
        case 0x1ee5b4u: goto label_1ee5b4;
        case 0x1ee5dcu: goto label_1ee5dc;
        case 0x1ee5fcu: goto label_1ee5fc;
        case 0x1ee60cu: goto label_1ee60c;
        case 0x1ee620u: goto label_1ee620;
        case 0x1ee634u: goto label_1ee634;
        case 0x1ee654u: goto label_1ee654;
        case 0x1ee660u: goto label_1ee660;
        case 0x1ee670u: goto label_1ee670;
        case 0x1ee684u: goto label_1ee684;
        case 0x1ee694u: goto label_1ee694;
        case 0x1ee6a8u: goto label_1ee6a8;
        case 0x1ee6d4u: goto label_1ee6d4;
        case 0x1ee6f0u: goto label_1ee6f0;
        case 0x1ee71cu: goto label_1ee71c;
        case 0x1ee72cu: goto label_1ee72c;
        case 0x1ee740u: goto label_1ee740;
        case 0x1ee768u: goto label_1ee768;
        default: break;
    }

    ctx->pc = 0x1ee1a0u;

    // 0x1ee1a0: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x1ee1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
    // 0x1ee1a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ee1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ee1a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ee1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ee1ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ee1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ee1b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ee1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ee1b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ee1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ee1b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee1bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee1c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee1c4: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x1ee1c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ee1c8: 0x10600167  beqz        $v1, . + 4 + (0x167 << 2)
    ctx->pc = 0x1EE1C8u;
    {
        const bool branch_taken_0x1ee1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1C8u;
            // 0x1ee1cc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1c8) {
            ctx->pc = 0x1EE768u;
            goto label_1ee768;
        }
    }
    ctx->pc = 0x1EE1D0u;
    // 0x1ee1d0: 0xc66c00f0  lwc1        $f12, 0xF0($s3)
    ctx->pc = 0x1ee1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ee1d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ee1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee1d8: 0x0  nop
    ctx->pc = 0x1ee1d8u;
    // NOP
    // 0x1ee1dc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1ee1dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee1e0: 0x0  nop
    ctx->pc = 0x1ee1e0u;
    // NOP
    // 0x1ee1e4: 0x45010160  bc1t        . + 4 + (0x160 << 2)
    ctx->pc = 0x1EE1E4u;
    {
        const bool branch_taken_0x1ee1e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee1e4) {
            ctx->pc = 0x1EE768u;
            goto label_1ee768;
        }
    }
    ctx->pc = 0x1EE1ECu;
    // 0x1ee1ec: 0x8e7200d8  lw          $s2, 0xD8($s3)
    ctx->pc = 0x1ee1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x1ee1f0: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1ee1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x1ee1f4: 0x1240015c  beqz        $s2, . + 4 + (0x15C << 2)
    ctx->pc = 0x1EE1F4u;
    {
        const bool branch_taken_0x1ee1f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1F4u;
            // 0x1ee1f8: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1f4) {
            ctx->pc = 0x1EE768u;
            goto label_1ee768;
        }
    }
    ctx->pc = 0x1EE1FCu;
    // 0x1ee1fc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EE1FCu;
    SET_GPR_U32(ctx, 31, 0x1EE204u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE204u; }
        if (ctx->pc != 0x1EE204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE204u; }
        if (ctx->pc != 0x1EE204u) { return; }
    }
    ctx->pc = 0x1EE204u;
label_1ee204:
    // 0x1ee204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee208: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE208u;
    {
        const bool branch_taken_0x1ee208 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1EE20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE208u;
            // 0x1ee20c: 0x2a010081  slti        $at, $s0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee208) {
            ctx->pc = 0x1EE218u;
            goto label_1ee218;
        }
    }
    ctx->pc = 0x1EE210u;
    // 0x1ee210: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee214: 0x2a010081  slti        $at, $s0, 0x81
    ctx->pc = 0x1ee214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
label_1ee218:
    // 0x1ee218: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE218u;
    {
        const bool branch_taken_0x1ee218 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee218) {
            ctx->pc = 0x1EE224u;
            goto label_1ee224;
        }
    }
    ctx->pc = 0x1EE220u;
    // 0x1ee220: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1ee220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ee224:
    // 0x1ee224: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x1ee224u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ee228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee22c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1EE22Cu;
    SET_GPR_U32(ctx, 31, 0x1EE234u);
    ctx->pc = 0x1EE230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE22Cu;
            // 0x1ee230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE234u; }
        if (ctx->pc != 0x1EE234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE234u; }
        if (ctx->pc != 0x1EE234u) { return; }
    }
    ctx->pc = 0x1EE234u;
label_1ee234:
    // 0x1ee234: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ee234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee238: 0xc07ab84  jal         func_1EAE10
    ctx->pc = 0x1EE238u;
    SET_GPR_U32(ctx, 31, 0x1EE240u);
    ctx->pc = 0x1EE23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE238u;
            // 0x1ee23c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE10u;
    if (runtime->hasFunction(0x1EAE10u)) {
        auto targetFn = runtime->lookupFunction(0x1EAE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE240u; }
        if (ctx->pc != 0x1EE240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBackPattern__11CDngFreeMapFi_0x1eae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE240u; }
        if (ctx->pc != 0x1EE240u) { return; }
    }
    ctx->pc = 0x1EE240u;
label_1ee240:
    // 0x1ee240: 0xc07ac0c  jal         func_1EB030
    ctx->pc = 0x1EE240u;
    SET_GPR_U32(ctx, 31, 0x1EE248u);
    ctx->pc = 0x1EE244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE240u;
            // 0x1ee244: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB030u;
    if (runtime->hasFunction(0x1EB030u)) {
        auto targetFn = runtime->lookupFunction(0x1EB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE248u; }
        if (ctx->pc != 0x1EE248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawLast__11CDngFreeMapFv_0x1eb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE248u; }
        if (ctx->pc != 0x1EE248u) { return; }
    }
    ctx->pc = 0x1EE248u;
label_1ee248:
    // 0x1ee248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ee248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee24c: 0xc07b6a0  jal         func_1EDA80
    ctx->pc = 0x1EE24Cu;
    SET_GPR_U32(ctx, 31, 0x1EE254u);
    ctx->pc = 0x1EE250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE24Cu;
            // 0x1ee250: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA80u;
    if (runtime->hasFunction(0x1EDA80u)) {
        auto targetFn = runtime->lookupFunction(0x1EDA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE254u; }
        if (ctx->pc != 0x1EE254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawTreeMap__11CDngFreeMapFi_0x1eda80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE254u; }
        if (ctx->pc != 0x1EE254u) { return; }
    }
    ctx->pc = 0x1EE254u;
label_1ee254:
    // 0x1ee254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ee254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee258: 0xc07b768  jal         func_1EDDA0
    ctx->pc = 0x1EE258u;
    SET_GPR_U32(ctx, 31, 0x1EE260u);
    ctx->pc = 0x1EE25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE258u;
            // 0x1ee25c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDA0u;
    if (runtime->hasFunction(0x1EDDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EDDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE260u; }
        if (ctx->pc != 0x1EE260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawPlayer__11CDngFreeMapFi_0x1edda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE260u; }
        if (ctx->pc != 0x1EE260u) { return; }
    }
    ctx->pc = 0x1EE260u;
label_1ee260:
    // 0x1ee260: 0x8664000c  lh          $a0, 0xC($s3)
    ctx->pc = 0x1ee260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1ee264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee268: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EE268u;
    {
        const bool branch_taken_0x1ee268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EE26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE268u;
            // 0x1ee26c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee268) {
            ctx->pc = 0x1EE318u;
            goto label_1ee318;
        }
    }
    ctx->pc = 0x1EE270u;
    // 0x1ee270: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1EE270u;
    SET_GPR_U32(ctx, 31, 0x1EE278u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE278u; }
        if (ctx->pc != 0x1EE278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE278u; }
        if (ctx->pc != 0x1EE278u) { return; }
    }
    ctx->pc = 0x1EE278u;
label_1ee278:
    // 0x1ee278: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ee278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ee27c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1EE27Cu;
    SET_GPR_U32(ctx, 31, 0x1EE284u);
    ctx->pc = 0x1EE280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE27Cu;
            // 0x1ee280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE284u; }
        if (ctx->pc != 0x1EE284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE284u; }
        if (ctx->pc != 0x1EE284u) { return; }
    }
    ctx->pc = 0x1EE284u;
label_1ee284:
    // 0x1ee284: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ee284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ee288: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1EE288u;
    SET_GPR_U32(ctx, 31, 0x1EE290u);
    ctx->pc = 0x1EE28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE288u;
            // 0x1ee28c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE290u; }
        if (ctx->pc != 0x1EE290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE290u; }
        if (ctx->pc != 0x1EE290u) { return; }
    }
    ctx->pc = 0x1EE290u;
label_1ee290:
    // 0x1ee290: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ee290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ee294: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EE294u;
    SET_GPR_U32(ctx, 31, 0x1EE29Cu);
    ctx->pc = 0x1EE298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE294u;
            // 0x1ee298: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE29Cu; }
        if (ctx->pc != 0x1EE29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE29Cu; }
        if (ctx->pc != 0x1EE29Cu) { return; }
    }
    ctx->pc = 0x1EE29Cu;
label_1ee29c:
    // 0x1ee29c: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x1ee29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x1ee2a0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1EE2A0u;
    SET_GPR_U32(ctx, 31, 0x1EE2A8u);
    ctx->pc = 0x1EE2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2A0u;
            // 0x1ee2a4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2A8u; }
        if (ctx->pc != 0x1EE2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2A8u; }
        if (ctx->pc != 0x1EE2A8u) { return; }
    }
    ctx->pc = 0x1EE2A8u;
label_1ee2a8:
    // 0x1ee2a8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ee2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ee2ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ee2acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ee2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ee2b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ee2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2b8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EE2B8u;
    SET_GPR_U32(ctx, 31, 0x1EE2C0u);
    ctx->pc = 0x1EE2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2B8u;
            // 0x1ee2bc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2C0u; }
        if (ctx->pc != 0x1EE2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2C0u; }
        if (ctx->pc != 0x1EE2C0u) { return; }
    }
    ctx->pc = 0x1EE2C0u;
label_1ee2c0:
    // 0x1ee2c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EE2C4u;
    {
        const bool branch_taken_0x1ee2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2C4u;
            // 0x1ee2c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2c4) {
            ctx->pc = 0x1EE2FCu;
            goto label_1ee2fc;
        }
    }
    ctx->pc = 0x1EE2CCu;
label_1ee2cc:
    // 0x1ee2cc: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1ee2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ee2d0: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x1ee2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1ee2d4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1ee2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee2d8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1EE2D8u;
    SET_GPR_U32(ctx, 31, 0x1EE2E0u);
    ctx->pc = 0x1EE2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2D8u;
            // 0x1ee2dc: 0x2408002e  addiu       $t0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2E0u; }
        if (ctx->pc != 0x1EE2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2E0u; }
        if (ctx->pc != 0x1EE2E0u) { return; }
    }
    ctx->pc = 0x1EE2E0u;
label_1ee2e0:
    // 0x1ee2e0: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1ee2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1ee2e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ee2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ee2e8: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1ee2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ee2ec: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x1EE2ECu;
    SET_GPR_U32(ctx, 31, 0x1EE2F4u);
    ctx->pc = 0x1EE2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2ECu;
            // 0x1ee2f0: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (runtime->hasFunction(0x2328C0u)) {
        auto targetFn = runtime->lookupFunction(0x2328C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2F4u; }
        if (ctx->pc != 0x1EE2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2F4u; }
        if (ctx->pc != 0x1EE2F4u) { return; }
    }
    ctx->pc = 0x1EE2F4u;
label_1ee2f4:
    // 0x1ee2f4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1ee2f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ee2f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ee2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ee2fc:
    // 0x1ee2fc: 0x0  nop
    ctx->pc = 0x1ee2fcu;
    // NOP
    // 0x1ee300: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1ee304: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1ee304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee308: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EE308u;
    {
        const bool branch_taken_0x1ee308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE308u;
            // 0x1ee30c: 0x27a40360  addiu       $a0, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee308) {
            ctx->pc = 0x1EE2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ee2cc;
        }
    }
    ctx->pc = 0x1EE310u;
    // 0x1ee310: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EE310u;
    SET_GPR_U32(ctx, 31, 0x1EE318u);
    ctx->pc = 0x1EE314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE310u;
            // 0x1ee314: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE318u; }
        if (ctx->pc != 0x1EE318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE318u; }
        if (ctx->pc != 0x1EE318u) { return; }
    }
    ctx->pc = 0x1EE318u;
label_1ee318:
    // 0x1ee318: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x1ee318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x1ee31c: 0x10600112  beqz        $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x1EE31Cu;
    {
        const bool branch_taken_0x1ee31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE31Cu;
            // 0x1ee320: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee31c) {
            ctx->pc = 0x1EE768u;
            goto label_1ee768;
        }
    }
    ctx->pc = 0x1EE324u;
    // 0x1ee324: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x1EE324u;
    SET_GPR_U32(ctx, 31, 0x1EE32Cu);
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE32Cu; }
        if (ctx->pc != 0x1EE32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE32Cu; }
        if (ctx->pc != 0x1EE32Cu) { return; }
    }
    ctx->pc = 0x1EE32Cu;
label_1ee32c:
    // 0x1ee32c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ee32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1ee330: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1ee330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee334: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ee334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ee338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee33c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ee33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ee340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ee340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee344: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1ee344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1ee348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee34c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ee34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ee350: 0x27b00190  addiu       $s0, $sp, 0x190
    ctx->pc = 0x1ee350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1ee354: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1ee354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1ee358: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1ee358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ee35c: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x1EE35Cu;
    SET_GPR_U32(ctx, 31, 0x1EE364u);
    ctx->pc = 0x1EE360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE35Cu;
            // 0x1ee360: 0x2411006e  addiu       $s1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE364u; }
        if (ctx->pc != 0x1EE364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE364u; }
        if (ctx->pc != 0x1EE364u) { return; }
    }
    ctx->pc = 0x1EE364u;
label_1ee364:
    // 0x1ee364: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee36c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1EE36Cu;
    SET_GPR_U32(ctx, 31, 0x1EE374u);
    ctx->pc = 0x1EE370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE36Cu;
            // 0x1ee370: 0x24a586b0  addiu       $a1, $a1, -0x7950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE374u; }
        if (ctx->pc != 0x1EE374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE374u; }
        if (ctx->pc != 0x1EE374u) { return; }
    }
    ctx->pc = 0x1EE374u;
label_1ee374:
    // 0x1ee374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee37c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1EE37Cu;
    SET_GPR_U32(ctx, 31, 0x1EE384u);
    ctx->pc = 0x1EE380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE37Cu;
            // 0x1ee380: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE384u; }
        if (ctx->pc != 0x1EE384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE384u; }
        if (ctx->pc != 0x1EE384u) { return; }
    }
    ctx->pc = 0x1EE384u;
label_1ee384:
    // 0x1ee384: 0x8fa60224  lw          $a2, 0x224($sp)
    ctx->pc = 0x1ee384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x1ee388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee38c: 0x8fa70228  lw          $a3, 0x228($sp)
    ctx->pc = 0x1ee38cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1ee390: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1EE390u;
    SET_GPR_U32(ctx, 31, 0x1EE398u);
    ctx->pc = 0x1EE394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE390u;
            // 0x1ee394: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE398u; }
        if (ctx->pc != 0x1EE398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE398u; }
        if (ctx->pc != 0x1EE398u) { return; }
    }
    ctx->pc = 0x1EE398u;
label_1ee398:
    // 0x1ee398: 0x8f888784  lw          $t0, -0x787C($gp)
    ctx->pc = 0x1ee398u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1ee39c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1ee39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1ee3a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ee3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ee3a4: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x1ee3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x1ee3a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ee3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ee3ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1ee3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee3b0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1ee3b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ee3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ee3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3c0: 0x2502ff92  addiu       $v0, $t0, -0x6E
    ctx->pc = 0x1ee3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967186));
    // 0x1ee3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee3c8: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x1EE3C8u;
    SET_GPR_U32(ctx, 31, 0x1EE3D0u);
    ctx->pc = 0x1EE3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3C8u;
            // 0x1ee3cc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3D0u; }
        if (ctx->pc != 0x1EE3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3D0u; }
        if (ctx->pc != 0x1EE3D0u) { return; }
    }
    ctx->pc = 0x1EE3D0u;
label_1ee3d0:
    // 0x1ee3d0: 0x8e6500cc  lw          $a1, 0xCC($s3)
    ctx->pc = 0x1ee3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1ee3d4: 0x10a000e4  beqz        $a1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1EE3D4u;
    {
        const bool branch_taken_0x1ee3d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee3d4) {
            ctx->pc = 0x1EE768u;
            goto label_1ee768;
        }
    }
    ctx->pc = 0x1EE3DCu;
    // 0x1ee3dc: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1ee3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ee3e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee3e4: 0x148300e0  bne         $a0, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x1EE3E4u;
    {
        const bool branch_taken_0x1ee3e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee3e4) {
            ctx->pc = 0x1EE768u;
            goto label_1ee768;
        }
    }
    ctx->pc = 0x1EE3ECu;
    // 0x1ee3ec: 0x80a60028  lb          $a2, 0x28($a1)
    ctx->pc = 0x1ee3ecu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1ee3f0: 0x8665000a  lh          $a1, 0xA($s3)
    ctx->pc = 0x1ee3f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1ee3f4: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x1EE3F4u;
    SET_GPR_U32(ctx, 31, 0x1EE3FCu);
    ctx->pc = 0x1EE3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3F4u;
            // 0x1ee3f8: 0x8f8494b8  lw          $a0, -0x6B48($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3FCu; }
        if (ctx->pc != 0x1EE3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE3FCu; }
        if (ctx->pc != 0x1EE3FCu) { return; }
    }
    ctx->pc = 0x1EE3FCu;
label_1ee3fc:
    // 0x1ee3fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ee3fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee400: 0x12a000d9  beqz        $s5, . + 4 + (0xD9 << 2)
    ctx->pc = 0x1EE400u;
    {
        const bool branch_taken_0x1ee400 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee400) {
            ctx->pc = 0x1EE768u;
            goto label_1ee768;
        }
    }
    ctx->pc = 0x1EE408u;
    // 0x1ee408: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x1ee408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1ee40c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee40cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee410: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee414: 0x80460028  lb          $a2, 0x28($v0)
    ctx->pc = 0x1ee414u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1ee418: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EE418u;
    SET_GPR_U32(ctx, 31, 0x1EE420u);
    ctx->pc = 0x1EE41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE418u;
            // 0x1ee41c: 0x24a586e8  addiu       $a1, $a1, -0x7918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE420u; }
        if (ctx->pc != 0x1EE420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE420u; }
        if (ctx->pc != 0x1EE420u) { return; }
    }
    ctx->pc = 0x1EE420u;
label_1ee420:
    // 0x1ee420: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x1ee420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1ee424: 0x24520020  addiu       $s2, $v0, 0x20
    ctx->pc = 0x1ee424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1ee428: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1ee428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1ee42c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ee42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ee430: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE430u;
    {
        const bool branch_taken_0x1ee430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE430u;
            // 0x1ee434: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee430) {
            ctx->pc = 0x1EE444u;
            goto label_1ee444;
        }
    }
    ctx->pc = 0x1EE438u;
    // 0x1ee438: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee43c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1EE43Cu;
    SET_GPR_U32(ctx, 31, 0x1EE444u);
    ctx->pc = 0x1EE440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE43Cu;
            // 0x1ee440: 0x24a586f8  addiu       $a1, $a1, -0x7908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE444u; }
        if (ctx->pc != 0x1EE444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE444u; }
        if (ctx->pc != 0x1EE444u) { return; }
    }
    ctx->pc = 0x1EE444u;
label_1ee444:
    // 0x1ee444: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ee444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ee448: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ee448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ee44c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE44Cu;
    {
        const bool branch_taken_0x1ee44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE44Cu;
            // 0x1ee450: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee44c) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE454u;
    // 0x1ee454: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee458: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1EE458u;
    SET_GPR_U32(ctx, 31, 0x1EE460u);
    ctx->pc = 0x1EE45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE458u;
            // 0x1ee45c: 0x24a58700  addiu       $a1, $a1, -0x7900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE460u; }
        if (ctx->pc != 0x1EE460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE460u; }
        if (ctx->pc != 0x1EE460u) { return; }
    }
    ctx->pc = 0x1EE460u;
label_1ee460:
    // 0x1ee460: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ee460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ee464: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ee464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ee468: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE468u;
    {
        const bool branch_taken_0x1ee468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE468u;
            // 0x1ee46c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee468) {
            ctx->pc = 0x1EE47Cu;
            goto label_1ee47c;
        }
    }
    ctx->pc = 0x1EE470u;
    // 0x1ee470: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee474: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1EE474u;
    SET_GPR_U32(ctx, 31, 0x1EE47Cu);
    ctx->pc = 0x1EE478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE474u;
            // 0x1ee478: 0x24a58708  addiu       $a1, $a1, -0x78F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE47Cu; }
        if (ctx->pc != 0x1EE47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE47Cu; }
        if (ctx->pc != 0x1EE47Cu) { return; }
    }
    ctx->pc = 0x1EE47Cu;
label_1ee47c:
    // 0x1ee47c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ee47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ee480: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1ee480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1ee484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE484u;
    {
        const bool branch_taken_0x1ee484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee484) {
            ctx->pc = 0x1EE49Cu;
            goto label_1ee49c;
        }
    }
    ctx->pc = 0x1EE48Cu;
    // 0x1ee48c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee490: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee494: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1EE494u;
    SET_GPR_U32(ctx, 31, 0x1EE49Cu);
    ctx->pc = 0x1EE498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE494u;
            // 0x1ee498: 0x24a58710  addiu       $a1, $a1, -0x78F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE49Cu; }
        if (ctx->pc != 0x1EE49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE49Cu; }
        if (ctx->pc != 0x1EE49Cu) { return; }
    }
    ctx->pc = 0x1EE49Cu;
label_1ee49c:
    // 0x1ee49c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee4a0: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee4a4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1EE4A4u;
    SET_GPR_U32(ctx, 31, 0x1EE4ACu);
    ctx->pc = 0x1EE4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4A4u;
            // 0x1ee4a8: 0x24a58718  addiu       $a1, $a1, -0x78E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4ACu; }
        if (ctx->pc != 0x1EE4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4ACu; }
        if (ctx->pc != 0x1EE4ACu) { return; }
    }
    ctx->pc = 0x1EE4ACu;
label_1ee4ac:
    // 0x1ee4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4b0: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1EE4B0u;
    SET_GPR_U32(ctx, 31, 0x1EE4B8u);
    ctx->pc = 0x1EE4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4B0u;
            // 0x1ee4b4: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4B8u; }
        if (ctx->pc != 0x1EE4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4B8u; }
        if (ctx->pc != 0x1EE4B8u) { return; }
    }
    ctx->pc = 0x1EE4B8u;
label_1ee4b8:
    // 0x1ee4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ee4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee4c0: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1EE4C0u;
    SET_GPR_U32(ctx, 31, 0x1EE4C8u);
    ctx->pc = 0x1EE4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4C0u;
            // 0x1ee4c4: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4C8u; }
        if (ctx->pc != 0x1EE4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4C8u; }
        if (ctx->pc != 0x1EE4C8u) { return; }
    }
    ctx->pc = 0x1EE4C8u;
label_1ee4c8:
    // 0x1ee4c8: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x1ee4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1ee4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4d0: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1ee4d4: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1EE4D4u;
    SET_GPR_U32(ctx, 31, 0x1EE4DCu);
    ctx->pc = 0x1EE4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4D4u;
            // 0x1ee4d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4DCu; }
        if (ctx->pc != 0x1EE4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4DCu; }
        if (ctx->pc != 0x1EE4DCu) { return; }
    }
    ctx->pc = 0x1EE4DCu;
label_1ee4dc:
    // 0x1ee4dc: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x1ee4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1ee4e0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1ee4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ee4e4: 0x80450028  lb          $a1, 0x28($v0)
    ctx->pc = 0x1ee4e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1ee4e8: 0xc0be954  jal         func_2FA550
    ctx->pc = 0x1EE4E8u;
    SET_GPR_U32(ctx, 31, 0x1EE4F0u);
    ctx->pc = 0x1EE4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4E8u;
            // 0x1ee4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA550u;
    if (runtime->hasFunction(0x2FA550u)) {
        auto targetFn = runtime->lookupFunction(0x2FA550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4F0u; }
        if (ctx->pc != 0x1EE4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNextFloorID__16CDngFloorManagerFii_0x2fa550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE4F0u; }
        if (ctx->pc != 0x1EE4F0u) { return; }
    }
    ctx->pc = 0x1EE4F0u;
label_1ee4f0:
    // 0x1ee4f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ee4f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4f4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1ee4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ee4f8: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x1ee4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1ee4fc: 0x80450028  lb          $a1, 0x28($v0)
    ctx->pc = 0x1ee4fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1ee500: 0xc0be954  jal         func_2FA550
    ctx->pc = 0x1EE500u;
    SET_GPR_U32(ctx, 31, 0x1EE508u);
    ctx->pc = 0x1EE504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE500u;
            // 0x1ee504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA550u;
    if (runtime->hasFunction(0x2FA550u)) {
        auto targetFn = runtime->lookupFunction(0x2FA550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE508u; }
        if (ctx->pc != 0x1EE508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNextFloorID__16CDngFloorManagerFii_0x2fa550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE508u; }
        if (ctx->pc != 0x1EE508u) { return; }
    }
    ctx->pc = 0x1EE508u;
label_1ee508:
    // 0x1ee508: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ee508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee50c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1ee50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ee510: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x1ee510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1ee514: 0x80450028  lb          $a1, 0x28($v0)
    ctx->pc = 0x1ee514u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1ee518: 0xc0be954  jal         func_2FA550
    ctx->pc = 0x1EE518u;
    SET_GPR_U32(ctx, 31, 0x1EE520u);
    ctx->pc = 0x1EE51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE518u;
            // 0x1ee51c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA550u;
    if (runtime->hasFunction(0x2FA550u)) {
        auto targetFn = runtime->lookupFunction(0x2FA550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE520u; }
        if (ctx->pc != 0x1EE520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNextFloorID__16CDngFloorManagerFii_0x2fa550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE520u; }
        if (ctx->pc != 0x1EE520u) { return; }
    }
    ctx->pc = 0x1EE520u;
label_1ee520:
    // 0x1ee520: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ee520u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee524: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1ee524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ee528: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x1ee528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1ee52c: 0x80450028  lb          $a1, 0x28($v0)
    ctx->pc = 0x1ee52cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1ee530: 0xc0be954  jal         func_2FA550
    ctx->pc = 0x1EE530u;
    SET_GPR_U32(ctx, 31, 0x1EE538u);
    ctx->pc = 0x1EE534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE530u;
            // 0x1ee534: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA550u;
    if (runtime->hasFunction(0x2FA550u)) {
        auto targetFn = runtime->lookupFunction(0x2FA550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE538u; }
        if (ctx->pc != 0x1EE538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNextFloorID__16CDngFloorManagerFii_0x2fa550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE538u; }
        if (ctx->pc != 0x1EE538u) { return; }
    }
    ctx->pc = 0x1EE538u;
label_1ee538:
    // 0x1ee538: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee53c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ee53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee540: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ee540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee544: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1ee544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee548: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1ee548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee54c: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x1ee54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x1ee550: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EE550u;
    SET_GPR_U32(ctx, 31, 0x1EE558u);
    ctx->pc = 0x1EE554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE550u;
            // 0x1ee554: 0x24a58720  addiu       $a1, $a1, -0x78E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE558u; }
        if (ctx->pc != 0x1EE558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE558u; }
        if (ctx->pc != 0x1EE558u) { return; }
    }
    ctx->pc = 0x1EE558u;
label_1ee558:
    // 0x1ee558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee55c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1EE55Cu;
    SET_GPR_U32(ctx, 31, 0x1EE564u);
    ctx->pc = 0x1EE560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE55Cu;
            // 0x1ee560: 0x27a50340  addiu       $a1, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE564u; }
        if (ctx->pc != 0x1EE564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE564u; }
        if (ctx->pc != 0x1EE564u) { return; }
    }
    ctx->pc = 0x1EE564u;
label_1ee564:
    // 0x1ee564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee568: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ee568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ee56c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1EE56Cu;
    SET_GPR_U32(ctx, 31, 0x1EE574u);
    ctx->pc = 0x1EE570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE56Cu;
            // 0x1ee570: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE574u; }
        if (ctx->pc != 0x1EE574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE574u; }
        if (ctx->pc != 0x1EE574u) { return; }
    }
    ctx->pc = 0x1EE574u;
label_1ee574:
    // 0x1ee574: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x1ee574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1ee578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee57c: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x1ee57cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1ee580: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1EE580u;
    SET_GPR_U32(ctx, 31, 0x1EE588u);
    ctx->pc = 0x1EE584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE580u;
            // 0x1ee584: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE588u; }
        if (ctx->pc != 0x1EE588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE588u; }
        if (ctx->pc != 0x1EE588u) { return; }
    }
    ctx->pc = 0x1EE588u;
label_1ee588:
    // 0x1ee588: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee58c: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x1ee58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x1ee590: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EE590u;
    SET_GPR_U32(ctx, 31, 0x1EE598u);
    ctx->pc = 0x1EE594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE590u;
            // 0x1ee594: 0x24a58748  addiu       $a1, $a1, -0x78B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE598u; }
        if (ctx->pc != 0x1EE598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE598u; }
        if (ctx->pc != 0x1EE598u) { return; }
    }
    ctx->pc = 0x1EE598u;
label_1ee598:
    // 0x1ee598: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x1ee598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1ee59c: 0x80450028  lb          $a1, 0x28($v0)
    ctx->pc = 0x1ee59cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1ee5a0: 0xc0be9c4  jal         func_2FA710
    ctx->pc = 0x1EE5A0u;
    SET_GPR_U32(ctx, 31, 0x1EE5A8u);
    ctx->pc = 0x1EE5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5A0u;
            // 0x1ee5a4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA710u;
    if (runtime->hasFunction(0x2FA710u)) {
        auto targetFn = runtime->lookupFunction(0x2FA710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5A8u; }
        if (ctx->pc != 0x1EE5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNextRoot__16CDngFloorManagerFi_0x2fa710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5A8u; }
        if (ctx->pc != 0x1EE5A8u) { return; }
    }
    ctx->pc = 0x1EE5A8u;
label_1ee5a8:
    // 0x1ee5a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ee5a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ee5acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee5b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee5b4:
    // 0x1ee5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee5b8: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x1ee5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x1ee5bc: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1ee5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1ee5c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE5C0u;
    {
        const bool branch_taken_0x1ee5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5C0u;
            // 0x1ee5c4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5c0) {
            ctx->pc = 0x1EE5DCu;
            goto label_1ee5dc;
        }
    }
    ctx->pc = 0x1EE5C8u;
    // 0x1ee5c8: 0x2442dcb0  addiu       $v0, $v0, -0x2350
    ctx->pc = 0x1ee5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958256));
    // 0x1ee5cc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1ee5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ee5d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ee5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee5d4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1EE5D4u;
    SET_GPR_U32(ctx, 31, 0x1EE5DCu);
    ctx->pc = 0x1EE5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5D4u;
            // 0x1ee5d8: 0x27a40340  addiu       $a0, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5DCu; }
        if (ctx->pc != 0x1EE5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5DCu; }
        if (ctx->pc != 0x1EE5DCu) { return; }
    }
    ctx->pc = 0x1EE5DCu;
label_1ee5dc:
    // 0x1ee5dc: 0x0  nop
    ctx->pc = 0x1ee5dcu;
    // NOP
    // 0x1ee5e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ee5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ee5e4: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1ee5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ee5e8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1EE5E8u;
    {
        const bool branch_taken_0x1ee5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5E8u;
            // 0x1ee5ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5e8) {
            ctx->pc = 0x1EE5B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ee5b4;
        }
    }
    ctx->pc = 0x1EE5F0u;
    // 0x1ee5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5f4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1EE5F4u;
    SET_GPR_U32(ctx, 31, 0x1EE5FCu);
    ctx->pc = 0x1EE5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5F4u;
            // 0x1ee5f8: 0x27a50340  addiu       $a1, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5FCu; }
        if (ctx->pc != 0x1EE5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5FCu; }
        if (ctx->pc != 0x1EE5FCu) { return; }
    }
    ctx->pc = 0x1EE5FCu;
label_1ee5fc:
    // 0x1ee5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee600: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ee600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee604: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1EE604u;
    SET_GPR_U32(ctx, 31, 0x1EE60Cu);
    ctx->pc = 0x1EE608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE604u;
            // 0x1ee608: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE60Cu; }
        if (ctx->pc != 0x1EE60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE60Cu; }
        if (ctx->pc != 0x1EE60Cu) { return; }
    }
    ctx->pc = 0x1EE60Cu;
label_1ee60c:
    // 0x1ee60c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x1ee60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1ee610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee614: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x1ee614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1ee618: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1EE618u;
    SET_GPR_U32(ctx, 31, 0x1EE620u);
    ctx->pc = 0x1EE61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE618u;
            // 0x1ee61c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE620u; }
        if (ctx->pc != 0x1EE620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE620u; }
        if (ctx->pc != 0x1EE620u) { return; }
    }
    ctx->pc = 0x1EE620u;
label_1ee620:
    // 0x1ee620: 0x96a60012  lhu         $a2, 0x12($s5)
    ctx->pc = 0x1ee620u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x1ee624: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee628: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee62c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EE62Cu;
    SET_GPR_U32(ctx, 31, 0x1EE634u);
    ctx->pc = 0x1EE630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE62Cu;
            // 0x1ee630: 0x24a58760  addiu       $a1, $a1, -0x78A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE634u; }
        if (ctx->pc != 0x1EE634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE634u; }
        if (ctx->pc != 0x1EE634u) { return; }
    }
    ctx->pc = 0x1EE634u;
label_1ee634:
    // 0x1ee634: 0x8f828eac  lw          $v0, -0x7154($gp)
    ctx->pc = 0x1ee634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
    // 0x1ee638: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE638u;
    {
        const bool branch_taken_0x1ee638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE638u;
            // 0x1ee63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee638) {
            ctx->pc = 0x1EE658u;
            goto label_1ee658;
        }
    }
    ctx->pc = 0x1EE640u;
    // 0x1ee640: 0x96a60012  lhu         $a2, 0x12($s5)
    ctx->pc = 0x1ee640u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x1ee644: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee648: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee64c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EE64Cu;
    SET_GPR_U32(ctx, 31, 0x1EE654u);
    ctx->pc = 0x1EE650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE64Cu;
            // 0x1ee650: 0x24a58780  addiu       $a1, $a1, -0x7880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE654u; }
        if (ctx->pc != 0x1EE654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE654u; }
        if (ctx->pc != 0x1EE654u) { return; }
    }
    ctx->pc = 0x1EE654u;
label_1ee654:
    // 0x1ee654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee658:
    // 0x1ee658: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1EE658u;
    SET_GPR_U32(ctx, 31, 0x1EE660u);
    ctx->pc = 0x1EE65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE658u;
            // 0x1ee65c: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE660u; }
        if (ctx->pc != 0x1EE660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE660u; }
        if (ctx->pc != 0x1EE660u) { return; }
    }
    ctx->pc = 0x1EE660u;
label_1ee660:
    // 0x1ee660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee664: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ee664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee668: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1EE668u;
    SET_GPR_U32(ctx, 31, 0x1EE670u);
    ctx->pc = 0x1EE66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE668u;
            // 0x1ee66c: 0x240600e8  addiu       $a2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE670u; }
        if (ctx->pc != 0x1EE670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE670u; }
        if (ctx->pc != 0x1EE670u) { return; }
    }
    ctx->pc = 0x1EE670u;
label_1ee670:
    // 0x1ee670: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x1ee670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1ee674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee678: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x1ee678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1ee67c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1EE67Cu;
    SET_GPR_U32(ctx, 31, 0x1EE684u);
    ctx->pc = 0x1EE680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE67Cu;
            // 0x1ee680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE684u; }
        if (ctx->pc != 0x1EE684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE684u; }
        if (ctx->pc != 0x1EE684u) { return; }
    }
    ctx->pc = 0x1EE684u;
label_1ee684:
    // 0x1ee684: 0x2631008e  addiu       $s1, $s1, 0x8E
    ctx->pc = 0x1ee684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 142));
    // 0x1ee688: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ee688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee68c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee68cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee690: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ee690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee694:
    // 0x1ee694: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ee694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ee698: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee69c: 0x2442dcc0  addiu       $v0, $v0, -0x2340
    ctx->pc = 0x1ee69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958272));
    // 0x1ee6a0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EE6A0u;
    SET_GPR_U32(ctx, 31, 0x1EE6A8u);
    ctx->pc = 0x1EE6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE6A0u;
            // 0x1ee6a4: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6A8u; }
        if (ctx->pc != 0x1EE6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6A8u; }
        if (ctx->pc != 0x1EE6A8u) { return; }
    }
    ctx->pc = 0x1EE6A8u;
label_1ee6a8:
    // 0x1ee6a8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ee6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ee6ac: 0x96a3000e  lhu         $v1, 0xE($s5)
    ctx->pc = 0x1ee6acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x1ee6b0: 0x2442ddc0  addiu       $v0, $v0, -0x2240
    ctx->pc = 0x1ee6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x1ee6b4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ee6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ee6b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ee6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee6bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ee6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ee6c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE6C0u;
    {
        const bool branch_taken_0x1ee6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE6C0u;
            // 0x1ee6c4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6c0) {
            ctx->pc = 0x1EE6DCu;
            goto label_1ee6dc;
        }
    }
    ctx->pc = 0x1EE6C8u;
    // 0x1ee6c8: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee6cc: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1EE6CCu;
    SET_GPR_U32(ctx, 31, 0x1EE6D4u);
    ctx->pc = 0x1EE6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE6CCu;
            // 0x1ee6d0: 0x24a58798  addiu       $a1, $a1, -0x7868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6D4u; }
        if (ctx->pc != 0x1EE6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6D4u; }
        if (ctx->pc != 0x1EE6D4u) { return; }
    }
    ctx->pc = 0x1EE6D4u;
label_1ee6d4:
    // 0x1ee6d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE6D4u;
    {
        const bool branch_taken_0x1ee6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee6d4) {
            ctx->pc = 0x1EE6F0u;
            goto label_1ee6f0;
        }
    }
    ctx->pc = 0x1EE6DCu;
label_1ee6dc:
    // 0x1ee6dc: 0x0  nop
    ctx->pc = 0x1ee6dcu;
    // NOP
    // 0x1ee6e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee6e4: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee6e8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1EE6E8u;
    SET_GPR_U32(ctx, 31, 0x1EE6F0u);
    ctx->pc = 0x1EE6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE6E8u;
            // 0x1ee6ec: 0x24a587a0  addiu       $a1, $a1, -0x7860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6F0u; }
        if (ctx->pc != 0x1EE6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6F0u; }
        if (ctx->pc != 0x1EE6F0u) { return; }
    }
    ctx->pc = 0x1EE6F0u;
label_1ee6f0:
    // 0x1ee6f0: 0x8f828eac  lw          $v0, -0x7154($gp)
    ctx->pc = 0x1ee6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
    // 0x1ee6f4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE6F4u;
    {
        const bool branch_taken_0x1ee6f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ee6f4) {
            ctx->pc = 0x1EE70Cu;
            goto label_1ee70c;
        }
    }
    ctx->pc = 0x1EE6FCu;
    // 0x1ee6fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ee6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ee700: 0x14520002  bne         $v0, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE700u;
    {
        const bool branch_taken_0x1ee700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1EE704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE700u;
            // 0x1ee704: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee700) {
            ctx->pc = 0x1EE70Cu;
            goto label_1ee70c;
        }
    }
    ctx->pc = 0x1EE708u;
    // 0x1ee708: 0xa3a20240  sb          $v0, 0x240($sp)
    ctx->pc = 0x1ee708u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 576), (uint8_t)GPR_U32(ctx, 2));
label_1ee70c:
    // 0x1ee70c: 0x0  nop
    ctx->pc = 0x1ee70cu;
    // NOP
    // 0x1ee710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee714: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1EE714u;
    SET_GPR_U32(ctx, 31, 0x1EE71Cu);
    ctx->pc = 0x1EE718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE714u;
            // 0x1ee718: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE71Cu; }
        if (ctx->pc != 0x1EE71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE71Cu; }
        if (ctx->pc != 0x1EE71Cu) { return; }
    }
    ctx->pc = 0x1EE71Cu;
label_1ee71c:
    // 0x1ee71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee720: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ee720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee724: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1EE724u;
    SET_GPR_U32(ctx, 31, 0x1EE72Cu);
    ctx->pc = 0x1EE728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE724u;
            // 0x1ee728: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE72Cu; }
        if (ctx->pc != 0x1EE72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE72Cu; }
        if (ctx->pc != 0x1EE72Cu) { return; }
    }
    ctx->pc = 0x1EE72Cu;
label_1ee72c:
    // 0x1ee72c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x1ee72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1ee730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee734: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x1ee734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1ee738: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1EE738u;
    SET_GPR_U32(ctx, 31, 0x1EE740u);
    ctx->pc = 0x1EE73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE738u;
            // 0x1ee73c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE740u; }
        if (ctx->pc != 0x1EE740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE740u; }
        if (ctx->pc != 0x1EE740u) { return; }
    }
    ctx->pc = 0x1EE740u;
label_1ee740:
    // 0x1ee740: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ee740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ee744: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x1ee744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1ee748: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1ee748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ee74c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1ee74cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1ee750: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1EE750u;
    {
        const bool branch_taken_0x1ee750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE750u;
            // 0x1ee754: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee750) {
            ctx->pc = 0x1EE694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ee694;
        }
    }
    ctx->pc = 0x1EE758u;
    // 0x1ee758: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ee758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ee75c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1ee75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1ee760: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1EE760u;
    SET_GPR_U32(ctx, 31, 0x1EE768u);
    ctx->pc = 0x1EE764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE760u;
            // 0x1ee764: 0x24a587a8  addiu       $a1, $a1, -0x7858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE768u; }
        if (ctx->pc != 0x1EE768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE768u; }
        if (ctx->pc != 0x1EE768u) { return; }
    }
    ctx->pc = 0x1EE768u;
label_1ee768:
    // 0x1ee768: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ee768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee76c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ee76cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee770: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ee770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee774: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ee774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ee778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee77c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee788: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE788u;
            // 0x1ee78c: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE790u;
}
