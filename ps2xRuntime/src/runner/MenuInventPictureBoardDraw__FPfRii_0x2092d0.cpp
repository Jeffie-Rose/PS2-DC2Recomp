#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventPictureBoardDraw__FPfRii
// Address: 0x2092d0 - 0x209754
void MenuInventPictureBoardDraw__FPfRii_0x2092d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventPictureBoardDraw__FPfRii_0x2092d0");
#endif

    switch (ctx->pc) {
        case 0x209334u: goto label_209334;
        case 0x20934cu: goto label_20934c;
        case 0x209370u: goto label_209370;
        case 0x20938cu: goto label_20938c;
        case 0x209394u: goto label_209394;
        case 0x2093a4u: goto label_2093a4;
        case 0x2093c0u: goto label_2093c0;
        case 0x20944cu: goto label_20944c;
        case 0x209460u: goto label_209460;
        case 0x20946cu: goto label_20946c;
        case 0x209478u: goto label_209478;
        case 0x209484u: goto label_209484;
        case 0x20949cu: goto label_20949c;
        case 0x2094b4u: goto label_2094b4;
        case 0x2094e0u: goto label_2094e0;
        case 0x2094e8u: goto label_2094e8;
        case 0x209508u: goto label_209508;
        case 0x209554u: goto label_209554;
        case 0x209570u: goto label_209570;
        case 0x209588u: goto label_209588;
        case 0x2095b0u: goto label_2095b0;
        case 0x209674u: goto label_209674;
        case 0x209690u: goto label_209690;
        case 0x20969cu: goto label_20969c;
        case 0x2096b0u: goto label_2096b0;
        case 0x2096ccu: goto label_2096cc;
        case 0x2096e4u: goto label_2096e4;
        case 0x209700u: goto label_209700;
        default: break;
    }

    ctx->pc = 0x2092d0u;

    // 0x2092d0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2092d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x2092d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2092d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2092d8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2092d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2092dc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2092dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2092e0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2092e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2092e4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2092e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2092e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2092ec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2092ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2092f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2092f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2092f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2092f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2092f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2092fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2092fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x209300: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x209300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x209304: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x209304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x209308: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x209308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x20930c: 0x10600104  beqz        $v1, . + 4 + (0x104 << 2)
    ctx->pc = 0x20930Cu;
    {
        const bool branch_taken_0x20930c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20930Cu;
            // 0x209310: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20930c) {
            ctx->pc = 0x209720u;
            goto label_209720;
        }
    }
    ctx->pc = 0x209314u;
    // 0x209314: 0x8c630ec0  lw          $v1, 0xEC0($v1)
    ctx->pc = 0x209314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3776)));
    // 0x209318: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x209318u;
    {
        const bool branch_taken_0x209318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209318) {
            ctx->pc = 0x209328u;
            goto label_209328;
        }
    }
    ctx->pc = 0x209320u;
    // 0x209320: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x209320u;
    {
        const bool branch_taken_0x209320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209320u;
            // 0x209324: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209320) {
            ctx->pc = 0x209724u;
            goto label_209724;
        }
    }
    ctx->pc = 0x209328u;
label_209328:
    // 0x209328: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x209328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x20932c: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x20932Cu;
    SET_GPR_U32(ctx, 31, 0x209334u);
    ctx->pc = 0x209330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20932Cu;
            // 0x209330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209334u; }
        if (ctx->pc != 0x209334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209334u; }
        if (ctx->pc != 0x209334u) { return; }
    }
    ctx->pc = 0x209334u;
label_209334:
    // 0x209334: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x209334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209338: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x209338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x20933c: 0x8c4203c8  lw          $v0, 0x3C8($v0)
    ctx->pc = 0x20933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
    // 0x209340: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x209340u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209344: 0xc08878c  jal         func_221E30
    ctx->pc = 0x209344u;
    SET_GPR_U32(ctx, 31, 0x20934Cu);
    ctx->pc = 0x209348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209344u;
            // 0x209348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20934Cu; }
        if (ctx->pc != 0x20934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20934Cu; }
        if (ctx->pc != 0x20934Cu) { return; }
    }
    ctx->pc = 0x20934Cu;
label_20934c:
    // 0x20934c: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x20934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209350: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x209350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x209354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x209354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209358: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x209358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x20935c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20935cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209360: 0x0  nop
    ctx->pc = 0x209360u;
    // NOP
    // 0x209364: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x209364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x209368: 0xc0a248c  jal         func_289230
    ctx->pc = 0x209368u;
    SET_GPR_U32(ctx, 31, 0x209370u);
    ctx->pc = 0x20936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209368u;
            // 0x20936c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209370u; }
        if (ctx->pc != 0x209370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209370u; }
        if (ctx->pc != 0x209370u) { return; }
    }
    ctx->pc = 0x209370u;
label_209370:
    // 0x209370: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x209370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x209374: 0x244800a3  addiu       $t0, $v0, 0xA3
    ctx->pc = 0x209374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
    // 0x209378: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x209378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20937c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x20937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x209380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209384: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x209384u;
    SET_GPR_U32(ctx, 31, 0x20938Cu);
    ctx->pc = 0x209388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209384u;
            // 0x209388: 0x2467ffff  addiu       $a3, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20938Cu; }
        if (ctx->pc != 0x20938Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20938Cu; }
        if (ctx->pc != 0x20938Cu) { return; }
    }
    ctx->pc = 0x20938Cu;
label_20938c:
    // 0x20938c: 0xc088050  jal         func_220140
    ctx->pc = 0x20938Cu;
    SET_GPR_U32(ctx, 31, 0x209394u);
    ctx->pc = 0x209390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20938Cu;
            // 0x209390: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209394u; }
        if (ctx->pc != 0x209394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209394u; }
        if (ctx->pc != 0x209394u) { return; }
    }
    ctx->pc = 0x209394u;
label_209394:
    // 0x209394: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x209394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209398: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x209398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20939c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20939cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2093a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2093a4:
    // 0x2093a4: 0x2f1a021  addu        $s4, $s7, $s1
    ctx->pc = 0x2093a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x2093a8: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x2093a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2093ac: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2093ACu;
    {
        const bool branch_taken_0x2093ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2093ac) {
            ctx->pc = 0x2094E8u;
            goto label_2094e8;
        }
    }
    ctx->pc = 0x2093B4u;
    // 0x2093b4: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x2093b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x2093b8: 0xc080780  jal         func_201E00
    ctx->pc = 0x2093B8u;
    SET_GPR_U32(ctx, 31, 0x2093C0u);
    ctx->pc = 0x2093BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2093B8u;
            // 0x2093bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201E00u;
    if (runtime->hasFunction(0x201E00u)) {
        auto targetFn = runtime->lookupFunction(0x201E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2093C0u; }
        if (ctx->pc != 0x2093C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectedNetaPhotoAlready__11CMenuInventFi_0x201e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2093C0u; }
        if (ctx->pc != 0x2093C0u) { return; }
    }
    ctx->pc = 0x2093C0u;
label_2093c0:
    // 0x2093c0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2093C0u;
    {
        const bool branch_taken_0x2093c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2093c0) {
            ctx->pc = 0x2094E8u;
            goto label_2094e8;
        }
    }
    ctx->pc = 0x2093C8u;
    // 0x2093c8: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x2093c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x2093cc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2093ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2093d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2093d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2093d4: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x2093d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2093d8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2093d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2093dc: 0xc462025c  lwc1        $f2, 0x25C($v1)
    ctx->pc = 0x2093dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2093e0: 0xc4410268  lwc1        $f1, 0x268($v0)
    ctx->pc = 0x2093e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2093e4: 0xc4440264  lwc1        $f4, 0x264($v0)
    ctx->pc = 0x2093e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2093e8: 0x46011540  add.s       $f21, $f2, $f1
    ctx->pc = 0x2093e8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2093ec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2093ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2093f0: 0x0  nop
    ctx->pc = 0x2093f0u;
    // NOP
    // 0x2093f4: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x2093F4u;
    {
        const bool branch_taken_0x2093f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2093F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2093F4u;
            // 0x2093f8: 0x46041d00  add.s       $f20, $f3, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093f4) {
            ctx->pc = 0x2094E8u;
            goto label_2094e8;
        }
    }
    ctx->pc = 0x2093FCu;
    // 0x2093fc: 0x3c0243cd  lui         $v0, 0x43CD
    ctx->pc = 0x2093fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17357 << 16));
    // 0x209400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209404: 0x0  nop
    ctx->pc = 0x209404u;
    // NOP
    // 0x209408: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x209408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20940c: 0x0  nop
    ctx->pc = 0x20940cu;
    // NOP
    // 0x209410: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x209410u;
    {
        const bool branch_taken_0x209410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209410) {
            ctx->pc = 0x209500u;
            goto label_209500;
        }
    }
    ctx->pc = 0x209418u;
    // 0x209418: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x209418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x20941c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x20941cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x209420: 0x8c4403c8  lw          $a0, 0x3C8($v0)
    ctx->pc = 0x209420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
    // 0x209424: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x209424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x209428: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x209428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x20942c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209430: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x209430u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x209434: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x209434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209438: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x209438u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20943c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x20943cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209440: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x209440u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x209444: 0xc08230c  jal         func_208C30
    ctx->pc = 0x209444u;
    SET_GPR_U32(ctx, 31, 0x20944Cu);
    ctx->pc = 0x209448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209444u;
            // 0x209448: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208C30u;
    if (runtime->hasFunction(0x208C30u)) {
        auto targetFn = runtime->lookupFunction(0x208C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20944Cu; }
        if (ctx->pc != 0x20944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PictureDraw__FP10mgCTextureP17USER_PICTURE_INFOfffiiii_0x208c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20944Cu; }
        if (ctx->pc != 0x20944Cu) { return; }
    }
    ctx->pc = 0x20944Cu;
label_20944c:
    // 0x20944c: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x20944cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x209450: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x209450u;
    {
        const bool branch_taken_0x209450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209450) {
            ctx->pc = 0x2094E8u;
            goto label_2094e8;
        }
    }
    ctx->pc = 0x209458u;
    // 0x209458: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x209458u;
    SET_GPR_U32(ctx, 31, 0x209460u);
    ctx->pc = 0x20945Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209458u;
            // 0x20945c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209460u; }
        if (ctx->pc != 0x209460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209460u; }
        if (ctx->pc != 0x209460u) { return; }
    }
    ctx->pc = 0x209460u;
label_209460:
    // 0x209460: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x209460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x209464: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x209464u;
    SET_GPR_U32(ctx, 31, 0x20946Cu);
    ctx->pc = 0x209468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209464u;
            // 0x209468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20946Cu; }
        if (ctx->pc != 0x20946Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20946Cu; }
        if (ctx->pc != 0x20946Cu) { return; }
    }
    ctx->pc = 0x20946Cu;
label_20946c:
    // 0x20946c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x20946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x209470: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x209470u;
    SET_GPR_U32(ctx, 31, 0x209478u);
    ctx->pc = 0x209474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209470u;
            // 0x209474: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209478u; }
        if (ctx->pc != 0x209478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209478u; }
        if (ctx->pc != 0x209478u) { return; }
    }
    ctx->pc = 0x209478u;
label_209478:
    // 0x209478: 0x8f859110  lw          $a1, -0x6EF0($gp)
    ctx->pc = 0x209478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
    // 0x20947c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x20947Cu;
    SET_GPR_U32(ctx, 31, 0x209484u);
    ctx->pc = 0x209480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20947Cu;
            // 0x209480: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209484u; }
        if (ctx->pc != 0x209484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209484u; }
        if (ctx->pc != 0x209484u) { return; }
    }
    ctx->pc = 0x209484u;
label_209484:
    // 0x209484: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x209484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x209488: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20948c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20948cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209490: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x209490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209494: 0xc04d320  jal         func_134C80
    ctx->pc = 0x209494u;
    SET_GPR_U32(ctx, 31, 0x20949Cu);
    ctx->pc = 0x209498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209494u;
            // 0x209498: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20949Cu; }
        if (ctx->pc != 0x20949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20949Cu; }
        if (ctx->pc != 0x20949Cu) { return; }
    }
    ctx->pc = 0x20949Cu;
label_20949c:
    // 0x20949c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x20949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2094a0: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x2094a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2094a4: 0x24060156  addiu       $a2, $zero, 0x156
    ctx->pc = 0x2094a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x2094a8: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x2094a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2094ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2094ACu;
    SET_GPR_U32(ctx, 31, 0x2094B4u);
    ctx->pc = 0x2094B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2094ACu;
            // 0x2094b0: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094B4u; }
        if (ctx->pc != 0x2094B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094B4u; }
        if (ctx->pc != 0x2094B4u) { return; }
    }
    ctx->pc = 0x2094B4u;
label_2094b4:
    // 0x2094b4: 0x3c024233  lui         $v0, 0x4233
    ctx->pc = 0x2094b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16947 << 16));
    // 0x2094b8: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x2094b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x2094bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2094bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2094c0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2094c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2094c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2094c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2094c8: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2094c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2094cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2094ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2094d0: 0x0  nop
    ctx->pc = 0x2094d0u;
    // NOP
    // 0x2094d4: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x2094d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2094d8: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2094D8u;
    SET_GPR_U32(ctx, 31, 0x2094E0u);
    ctx->pc = 0x2094DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2094D8u;
            // 0x2094dc: 0x46150340  add.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094E0u; }
        if (ctx->pc != 0x2094E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094E0u; }
        if (ctx->pc != 0x2094E0u) { return; }
    }
    ctx->pc = 0x2094E0u;
label_2094e0:
    // 0x2094e0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2094E0u;
    SET_GPR_U32(ctx, 31, 0x2094E8u);
    ctx->pc = 0x2094E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2094E0u;
            // 0x2094e4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094E8u; }
        if (ctx->pc != 0x2094E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094E8u; }
        if (ctx->pc != 0x2094E8u) { return; }
    }
    ctx->pc = 0x2094E8u;
label_2094e8:
    // 0x2094e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2094e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2094ec: 0x2a02001e  slti        $v0, $s0, 0x1E
    ctx->pc = 0x2094ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2094f0: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x2094f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2094f4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2094f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2094f8: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2094F8u;
    {
        const bool branch_taken_0x2094f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2094FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2094F8u;
            // 0x2094fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094f8) {
            ctx->pc = 0x2093A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2093a4;
        }
    }
    ctx->pc = 0x209500u;
label_209500:
    // 0x209500: 0xc088070  jal         func_2201C0
    ctx->pc = 0x209500u;
    SET_GPR_U32(ctx, 31, 0x209508u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209508u; }
        if (ctx->pc != 0x209508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209508u; }
        if (ctx->pc != 0x209508u) { return; }
    }
    ctx->pc = 0x209508u;
label_209508:
    // 0x209508: 0x93839160  lbu         $v1, -0x6EA0($gp)
    ctx->pc = 0x209508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938976)));
    // 0x20950c: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x20950Cu;
    {
        const bool branch_taken_0x20950c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20950c) {
            ctx->pc = 0x209720u;
            goto label_209720;
        }
    }
    ctx->pc = 0x209514u;
    // 0x209514: 0xdf859188  ld          $a1, -0x6E78($gp)
    ctx->pc = 0x209514u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294939016)));
    // 0x209518: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x209518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x20951c: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x20951cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
    // 0x209520: 0x3c0341d0  lui         $v1, 0x41D0
    ctx->pc = 0x209520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
    // 0x209524: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x209524u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x209528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20952c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x20952cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x209530: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x209530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209534: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x209534u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x209538: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x209538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20953c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20953cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209540: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x209540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x209544: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x209544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209548: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x209548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x20954c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20954Cu;
    {
        const bool branch_taken_0x20954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20954Cu;
            // 0x209550: 0xe7a001dc  swc1        $f0, 0x1DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20954c) {
            ctx->pc = 0x209590u;
            goto label_209590;
        }
    }
    ctx->pc = 0x209554u;
label_209554:
    // 0x209554: 0x8f83916c  lw          $v1, -0x6E94($gp)
    ctx->pc = 0x209554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x209558: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x209558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20955c: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x20955cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x209560: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x209560u;
    {
        const bool branch_taken_0x209560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209560) {
            ctx->pc = 0x209588u;
            goto label_209588;
        }
    }
    ctx->pc = 0x209568u;
    // 0x209568: 0xc08baf0  jal         func_22EBC0
    ctx->pc = 0x209568u;
    SET_GPR_U32(ctx, 31, 0x209570u);
    ctx->pc = 0x22EBC0u;
    if (runtime->hasFunction(0x22EBC0u)) {
        auto targetFn = runtime->lookupFunction(0x22EBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209570u; }
        if (ctx->pc != 0x209570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CStarDustFv_0x22ebc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209570u; }
        if (ctx->pc != 0x209570u) { return; }
    }
    ctx->pc = 0x209570u;
label_209570:
    // 0x209570: 0x8f82916c  lw          $v0, -0x6E94($gp)
    ctx->pc = 0x209570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x209574: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x209574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x209578: 0x8f859110  lw          $a1, -0x6EF0($gp)
    ctx->pc = 0x209578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
    // 0x20957c: 0x240701ea  addiu       $a3, $zero, 0x1EA
    ctx->pc = 0x20957cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
    // 0x209580: 0xc08bafc  jal         func_22EBF0
    ctx->pc = 0x209580u;
    SET_GPR_U32(ctx, 31, 0x209588u);
    ctx->pc = 0x209584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209580u;
            // 0x209584: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EBF0u;
    if (runtime->hasFunction(0x22EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x22EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209588u; }
        if (ctx->pc != 0x209588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__9CStarDustFP10mgCTextureii_0x22ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209588u; }
        if (ctx->pc != 0x209588u) { return; }
    }
    ctx->pc = 0x209588u;
label_209588:
    // 0x209588: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x209588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x20958c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20958cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_209590:
    // 0x209590: 0x87839168  lh          $v1, -0x6E98($gp)
    ctx->pc = 0x209590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938984)));
    // 0x209594: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x209594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x209598: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x209598u;
    {
        const bool branch_taken_0x209598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209598) {
            ctx->pc = 0x209554u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209554;
        }
    }
    ctx->pc = 0x2095A0u;
    // 0x2095a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2095a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2095a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095a8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2095A8u;
    {
        const bool branch_taken_0x2095a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2095A8u;
            // 0x2095ac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095a8) {
            ctx->pc = 0x20970Cu;
            goto label_20970c;
        }
    }
    ctx->pc = 0x2095B0u;
label_2095b0:
    // 0x2095b0: 0x8f859178  lw          $a1, -0x6E88($gp)
    ctx->pc = 0x2095b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x2095b4: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x2095b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2095b8: 0x24640e70  addiu       $a0, $v1, 0xE70
    ctx->pc = 0x2095b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3696));
    // 0x2095bc: 0x84630e70  lh          $v1, 0xE70($v1)
    ctx->pc = 0x2095bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3696)));
    // 0x2095c0: 0x1860004f  blez        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2095C0u;
    {
        const bool branch_taken_0x2095c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2095c0) {
            ctx->pc = 0x209700u;
            goto label_209700;
        }
    }
    ctx->pc = 0x2095C8u;
    // 0x2095c8: 0xb41821  addu        $v1, $a1, $s4
    ctx->pc = 0x2095c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2095cc: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x2095ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x2095d0: 0xc7a501dc  lwc1        $f5, 0x1DC($sp)
    ctx->pc = 0x2095d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2095d4: 0x24710d80  addiu       $s1, $v1, 0xD80
    ctx->pc = 0x2095d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3456));
    // 0x2095d8: 0xc4660d84  lwc1        $f6, 0xD84($v1)
    ctx->pc = 0x2095d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2095dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2095dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2095e0: 0xc7a401d8  lwc1        $f4, 0x1D8($sp)
    ctx->pc = 0x2095e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2095e4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2095e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2095e8: 0xc4630d80  lwc1        $f3, 0xD80($v1)
    ctx->pc = 0x2095e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2095ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2095ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2095f0: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2095f0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x2095f4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2095f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2095f8: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x2095f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2095fc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2095fcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x209600: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x209600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x209604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x209604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209608: 0x0  nop
    ctx->pc = 0x209608u;
    // NOP
    // 0x20960c: 0xe4600d80  swc1        $f0, 0xD80($v1)
    ctx->pc = 0x20960cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3456), bits); }
    // 0x209610: 0x46012803  div.s       $f0, $f5, $f1
    ctx->pc = 0x209610u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x209614: 0xc4610d84  lwc1        $f1, 0xD84($v1)
    ctx->pc = 0x209614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209618: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20961c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20961Cu;
    {
        const bool branch_taken_0x20961c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20961Cu;
            // 0x209620: 0xe4600d84  swc1        $f0, 0xD84($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20961c) {
            ctx->pc = 0x209628u;
            goto label_209628;
        }
    }
    ctx->pc = 0x209624u;
    // 0x209624: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x209624u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_209628:
    // 0x209628: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x209628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x20962c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20962cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209630: 0x0  nop
    ctx->pc = 0x209630u;
    // NOP
    // 0x209634: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x209634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209638: 0x0  nop
    ctx->pc = 0x209638u;
    // NOP
    // 0x20963c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x20963Cu;
    {
        const bool branch_taken_0x20963c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20963c) {
            ctx->pc = 0x209664u;
            goto label_209664;
        }
    }
    ctx->pc = 0x209644u;
    // 0x209644: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x209644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209648: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x209648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x20964c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x20964cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x209650: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x209650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209654: 0x4410023  bgez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x209654u;
    {
        const bool branch_taken_0x209654 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x209654) {
            ctx->pc = 0x2096E4u;
            goto label_2096e4;
        }
    }
    ctx->pc = 0x20965Cu;
    // 0x20965c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x20965Cu;
    {
        const bool branch_taken_0x20965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20965Cu;
            // 0x209660: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20965c) {
            ctx->pc = 0x2096E4u;
            goto label_2096e4;
        }
    }
    ctx->pc = 0x209664u;
label_209664:
    // 0x209664: 0x0  nop
    ctx->pc = 0x209664u;
    // NOP
    // 0x209668: 0x8f84916c  lw          $a0, -0x6E94($gp)
    ctx->pc = 0x209668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x20966c: 0xc08bb44  jal         func_22ED10
    ctx->pc = 0x20966Cu;
    SET_GPR_U32(ctx, 31, 0x209674u);
    ctx->pc = 0x209670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20966Cu;
            // 0x209670: 0x87859168  lh          $a1, -0x6E98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938984)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ED10u;
    if (runtime->hasFunction(0x22ED10u)) {
        auto targetFn = runtime->lookupFunction(0x22ED10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209674u; }
        if (ctx->pc != 0x209674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNotRunStarDust__FP9CStarDusti_0x22ed10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209674u; }
        if (ctx->pc != 0x209674u) { return; }
    }
    ctx->pc = 0x209674u;
label_209674:
    // 0x209674: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x209674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209678: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x209678u;
    {
        const bool branch_taken_0x209678 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x209678) {
            ctx->pc = 0x2096E4u;
            goto label_2096e4;
        }
    }
    ctx->pc = 0x209680u;
    // 0x209680: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x209680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x209684: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x209684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209688: 0xc0941c0  jal         func_250700
    ctx->pc = 0x209688u;
    SET_GPR_U32(ctx, 31, 0x209690u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209690u; }
        if (ctx->pc != 0x209690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209690u; }
        if (ctx->pc != 0x209690u) { return; }
    }
    ctx->pc = 0x209690u;
label_209690:
    // 0x209690: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x209690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209694: 0xc0a248c  jal         func_289230
    ctx->pc = 0x209694u;
    SET_GPR_U32(ctx, 31, 0x20969Cu);
    ctx->pc = 0x209698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209694u;
            // 0x209698: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20969Cu; }
        if (ctx->pc != 0x20969Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20969Cu; }
        if (ctx->pc != 0x20969Cu) { return; }
    }
    ctx->pc = 0x20969Cu;
label_20969c:
    // 0x20969c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20969cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096a0: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2096a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2096a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2096a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2096a8: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2096A8u;
    SET_GPR_U32(ctx, 31, 0x2096B0u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096B0u; }
        if (ctx->pc != 0x2096B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096B0u; }
        if (ctx->pc != 0x2096B0u) { return; }
    }
    ctx->pc = 0x2096B0u;
label_2096b0:
    // 0x2096b0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2096b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2096b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2096b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2096b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2096b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2096bc: 0x0  nop
    ctx->pc = 0x2096bcu;
    // NOP
    // 0x2096c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2096c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2096c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2096C4u;
    SET_GPR_U32(ctx, 31, 0x2096CCu);
    ctx->pc = 0x2096C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2096C4u;
            // 0x2096c8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096CCu; }
        if (ctx->pc != 0x2096CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096CCu; }
        if (ctx->pc != 0x2096CCu) { return; }
    }
    ctx->pc = 0x2096CCu;
label_2096cc:
    // 0x2096cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2096ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2096d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2096d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096d8: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x2096d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2096dc: 0xc08bad8  jal         func_22EB60
    ctx->pc = 0x2096DCu;
    SET_GPR_U32(ctx, 31, 0x2096E4u);
    ctx->pc = 0x2096E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2096DCu;
            // 0x2096e0: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EB60u;
    if (runtime->hasFunction(0x22EB60u)) {
        auto targetFn = runtime->lookupFunction(0x22EB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096E4u; }
        if (ctx->pc != 0x2096E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__9CStarDustFiiii_0x22eb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096E4u; }
        if (ctx->pc != 0x2096E4u) { return; }
    }
    ctx->pc = 0x2096E4u;
label_2096e4:
    // 0x2096e4: 0x0  nop
    ctx->pc = 0x2096e4u;
    // NOP
    // 0x2096e8: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x2096e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x2096ec: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2096ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2096f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2096f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2096f4: 0x84440e70  lh          $a0, 0xE70($v0)
    ctx->pc = 0x2096f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3696)));
    // 0x2096f8: 0xc08241c  jal         func_209070
    ctx->pc = 0x2096F8u;
    SET_GPR_U32(ctx, 31, 0x209700u);
    ctx->pc = 0x2096FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2096F8u;
            // 0x2096fc: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209070u;
    if (runtime->hasFunction(0x209070u)) {
        auto targetFn = runtime->lookupFunction(0x209070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209700u; }
        if (ctx->pc != 0x209700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PictureMemoOne__Fffi_0x209070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209700u; }
        if (ctx->pc != 0x209700u) { return; }
    }
    ctx->pc = 0x209700u;
label_209700:
    // 0x209700: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x209700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x209704: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x209704u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x209708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x209708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20970c:
    // 0x20970c: 0x0  nop
    ctx->pc = 0x20970cu;
    // NOP
    // 0x209710: 0x83839164  lb          $v1, -0x6E9C($gp)
    ctx->pc = 0x209710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938980)));
    // 0x209714: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x209714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x209718: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x209718u;
    {
        const bool branch_taken_0x209718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209718) {
            ctx->pc = 0x2095B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2095b0;
        }
    }
    ctx->pc = 0x209720u;
label_209720:
    // 0x209720: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x209720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_209724:
    // 0x209724: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x209724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x209728: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x209728u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20972c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209730: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x209730u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x209734: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x209734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x209738: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x209738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20973c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20973cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209740: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x209740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209744: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x209744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209748: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x209748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20974c: 0x3e00008  jr          $ra
    ctx->pc = 0x20974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20974Cu;
            // 0x209750: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209754u;
}
