#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventAlbumPictureDraw__FPfRi
// Address: 0x209760 - 0x209924
void MenuInventAlbumPictureDraw__FPfRi_0x209760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventAlbumPictureDraw__FPfRi_0x209760");
#endif

    switch (ctx->pc) {
        case 0x209798u: goto label_209798;
        case 0x2097acu: goto label_2097ac;
        case 0x2097c8u: goto label_2097c8;
        case 0x2097d0u: goto label_2097d0;
        case 0x2097dcu: goto label_2097dc;
        case 0x2097f8u: goto label_2097f8;
        case 0x20980cu: goto label_20980c;
        case 0x2098a4u: goto label_2098a4;
        case 0x209908u: goto label_209908;
        default: break;
    }

    ctx->pc = 0x209760u;

    // 0x209760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x209760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x209764: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209768: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x209768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20976c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20976cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209770: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x209770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x209774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x209774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209778: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x209778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20977c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x209780: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x209780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20978c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20978cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x209790: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x209790u;
    SET_GPR_U32(ctx, 31, 0x209798u);
    ctx->pc = 0x209794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209790u;
            // 0x209794: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209798u; }
        if (ctx->pc != 0x209798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209798u; }
        if (ctx->pc != 0x209798u) { return; }
    }
    ctx->pc = 0x209798u;
label_209798:
    // 0x209798: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x209798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20979c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x20979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2097a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2097a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2097a4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2097A4u;
    SET_GPR_U32(ctx, 31, 0x2097ACu);
    ctx->pc = 0x2097A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2097A4u;
            // 0x2097a8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097ACu; }
        if (ctx->pc != 0x2097ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097ACu; }
        if (ctx->pc != 0x2097ACu) { return; }
    }
    ctx->pc = 0x2097ACu;
label_2097ac:
    // 0x2097ac: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2097acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2097b0: 0x2448010c  addiu       $t0, $v0, 0x10C
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x2097b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2097b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2097bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2097bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097c0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2097C0u;
    SET_GPR_U32(ctx, 31, 0x2097C8u);
    ctx->pc = 0x2097C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2097C0u;
            // 0x2097c4: 0x2467ffff  addiu       $a3, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097C8u; }
        if (ctx->pc != 0x2097C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097C8u; }
        if (ctx->pc != 0x2097C8u) { return; }
    }
    ctx->pc = 0x2097C8u;
label_2097c8:
    // 0x2097c8: 0xc088050  jal         func_220140
    ctx->pc = 0x2097C8u;
    SET_GPR_U32(ctx, 31, 0x2097D0u);
    ctx->pc = 0x2097CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2097C8u;
            // 0x2097cc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097D0u; }
        if (ctx->pc != 0x2097D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097D0u; }
        if (ctx->pc != 0x2097D0u) { return; }
    }
    ctx->pc = 0x2097D0u;
label_2097d0:
    // 0x2097d0: 0x8f8490d8  lw          $a0, -0x6F28($gp)
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
    // 0x2097d4: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x2097D4u;
    SET_GPR_U32(ctx, 31, 0x2097DCu);
    ctx->pc = 0x2097D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2097D4u;
            // 0x2097d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097DCu; }
        if (ctx->pc != 0x2097DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097DCu; }
        if (ctx->pc != 0x2097DCu) { return; }
    }
    ctx->pc = 0x2097DCu;
label_2097dc:
    // 0x2097dc: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x2097dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x2097e0: 0x8c630440  lw          $v1, 0x440($v1)
    ctx->pc = 0x2097e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1088)));
    // 0x2097e4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2097E4u;
    {
        const bool branch_taken_0x2097e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2097E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2097E4u;
            // 0x2097e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097e4) {
            ctx->pc = 0x209908u;
            goto label_209908;
        }
    }
    ctx->pc = 0x2097ECu;
    // 0x2097ec: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2097ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2097f0: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2097F0u;
    SET_GPR_U32(ctx, 31, 0x2097F8u);
    ctx->pc = 0x2097F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2097F0u;
            // 0x2097f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097F8u; }
        if (ctx->pc != 0x2097F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097F8u; }
        if (ctx->pc != 0x2097F8u) { return; }
    }
    ctx->pc = 0x2097F8u;
label_2097f8:
    // 0x2097f8: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x2097f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x2097fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2097fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209800: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x209800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209804: 0xc4540254  lwc1        $f20, 0x254($v0)
    ctx->pc = 0x209804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209808: 0x0  nop
    ctx->pc = 0x209808u;
    // NOP
label_20980c:
    // 0x20980c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x20980cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x209810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209814: 0x0  nop
    ctx->pc = 0x209814u;
    // NOP
    // 0x209818: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x209818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20981c: 0x0  nop
    ctx->pc = 0x20981cu;
    // NOP
    // 0x209820: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x209820u;
    {
        const bool branch_taken_0x209820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209820) {
            ctx->pc = 0x2098A4u;
            goto label_2098a4;
        }
    }
    ctx->pc = 0x209828u;
    // 0x209828: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x209828u;
    {
        const bool branch_taken_0x209828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x209828) {
            ctx->pc = 0x2098A4u;
            goto label_2098a4;
        }
    }
    ctx->pc = 0x209830u;
    // 0x209830: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x209830u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209838: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x209838u;
    {
        const bool branch_taken_0x209838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209838) {
            ctx->pc = 0x2098A4u;
            goto label_2098a4;
        }
    }
    ctx->pc = 0x209840u;
    // 0x209840: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x209840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x209844: 0xc4620250  lwc1        $f2, 0x250($v1)
    ctx->pc = 0x209844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209848: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x209848u;
    {
        const bool branch_taken_0x209848 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x20984Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209848u;
            // 0x20984c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209848) {
            ctx->pc = 0x20985Cu;
            goto label_20985c;
        }
    }
    ctx->pc = 0x209850u;
    // 0x209850: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x209850u;
    {
        const bool branch_taken_0x209850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209850) {
            ctx->pc = 0x20985Cu;
            goto label_20985c;
        }
    }
    ctx->pc = 0x209858u;
    // 0x209858: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x209858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_20985c:
    // 0x20985c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20985cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209860: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x209860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x209864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209868: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x209868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20986c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20986cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x209870: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x209870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x209874: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x209874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x209878: 0x8c440440  lw          $a0, 0x440($v0)
    ctx->pc = 0x209878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
    // 0x20987c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x20987cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209880: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x209880u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209888: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x209888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x20988c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20988cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x209890: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x209890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x209894: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x209894u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x209898: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x209898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20989c: 0xc08230c  jal         func_208C30
    ctx->pc = 0x20989Cu;
    SET_GPR_U32(ctx, 31, 0x2098A4u);
    ctx->pc = 0x2098A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20989Cu;
            // 0x2098a0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x208C30u;
    if (runtime->hasFunction(0x208C30u)) {
        auto targetFn = runtime->lookupFunction(0x208C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2098A4u; }
        if (ctx->pc != 0x2098A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PictureDraw__FP10mgCTextureP17USER_PICTURE_INFOfffiiii_0x208c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2098A4u; }
        if (ctx->pc != 0x2098A4u) { return; }
    }
    ctx->pc = 0x2098A4u;
label_2098a4:
    // 0x2098a4: 0x0  nop
    ctx->pc = 0x2098a4u;
    // NOP
    // 0x2098a8: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2098A8u;
    {
        const bool branch_taken_0x2098a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2098ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2098A8u;
            // 0x2098ac: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098a8) {
            ctx->pc = 0x2098BCu;
            goto label_2098bc;
        }
    }
    ctx->pc = 0x2098B0u;
    // 0x2098b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2098B0u;
    {
        const bool branch_taken_0x2098b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2098b0) {
            ctx->pc = 0x2098BCu;
            goto label_2098bc;
        }
    }
    ctx->pc = 0x2098B8u;
    // 0x2098b8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2098b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2098bc:
    // 0x2098bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2098BCu;
    {
        const bool branch_taken_0x2098bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2098C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2098BCu;
            // 0x2098c0: 0x3c024258  lui         $v0, 0x4258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098bc) {
            ctx->pc = 0x2098D0u;
            goto label_2098d0;
        }
    }
    ctx->pc = 0x2098C4u;
    // 0x2098c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2098c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2098c8: 0x0  nop
    ctx->pc = 0x2098c8u;
    // NOP
    // 0x2098cc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2098ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2098d0:
    // 0x2098d0: 0x3c0243cd  lui         $v0, 0x43CD
    ctx->pc = 0x2098d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17357 << 16));
    // 0x2098d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2098d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2098d8: 0x0  nop
    ctx->pc = 0x2098d8u;
    // NOP
    // 0x2098dc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2098dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2098e0: 0x0  nop
    ctx->pc = 0x2098e0u;
    // NOP
    // 0x2098e4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2098E4u;
    {
        const bool branch_taken_0x2098e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2098e4) {
            ctx->pc = 0x209900u;
            goto label_209900;
        }
    }
    ctx->pc = 0x2098ECu;
    // 0x2098ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2098ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2098f0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2098f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2098f4: 0x2a220032  slti        $v0, $s1, 0x32
    ctx->pc = 0x2098f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2098f8: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2098F8u;
    {
        const bool branch_taken_0x2098f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2098FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2098F8u;
            // 0x2098fc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098f8) {
            ctx->pc = 0x20980Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20980c;
        }
    }
    ctx->pc = 0x209900u;
label_209900:
    // 0x209900: 0xc088070  jal         func_2201C0
    ctx->pc = 0x209900u;
    SET_GPR_U32(ctx, 31, 0x209908u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209908u; }
        if (ctx->pc != 0x209908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209908u; }
        if (ctx->pc != 0x209908u) { return; }
    }
    ctx->pc = 0x209908u;
label_209908:
    // 0x209908: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x209908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20990c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209910: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x209910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209914: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x209914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x209918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20991c: 0x3e00008  jr          $ra
    ctx->pc = 0x20991Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20991Cu;
            // 0x209920: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209924u;
}
