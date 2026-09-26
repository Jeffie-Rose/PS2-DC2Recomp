#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventNetaMemoDraw__FPfRi
// Address: 0x209930 - 0x209d08
void MenuInventNetaMemoDraw__FPfRi_0x209930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventNetaMemoDraw__FPfRi_0x209930");
#endif

    switch (ctx->pc) {
        case 0x2099a8u: goto label_2099a8;
        case 0x2099bcu: goto label_2099bc;
        case 0x2099d8u: goto label_2099d8;
        case 0x2099e0u: goto label_2099e0;
        case 0x2099e8u: goto label_2099e8;
        case 0x2099f8u: goto label_2099f8;
        case 0x209a10u: goto label_209a10;
        case 0x209a48u: goto label_209a48;
        case 0x209a54u: goto label_209a54;
        case 0x209a60u: goto label_209a60;
        case 0x209a6cu: goto label_209a6c;
        case 0x209a84u: goto label_209a84;
        case 0x209a88u: goto label_209a88;
        case 0x209ad4u: goto label_209ad4;
        case 0x209af8u: goto label_209af8;
        case 0x209b00u: goto label_209b00;
        case 0x209b18u: goto label_209b18;
        case 0x209b4cu: goto label_209b4c;
        case 0x209b54u: goto label_209b54;
        case 0x209b64u: goto label_209b64;
        case 0x209b74u: goto label_209b74;
        case 0x209b90u: goto label_209b90;
        case 0x209b9cu: goto label_209b9c;
        case 0x209bacu: goto label_209bac;
        case 0x209bbcu: goto label_209bbc;
        case 0x209c40u: goto label_209c40;
        case 0x209c4cu: goto label_209c4c;
        case 0x209c5cu: goto label_209c5c;
        case 0x209c70u: goto label_209c70;
        case 0x209c84u: goto label_209c84;
        case 0x209c94u: goto label_209c94;
        case 0x209ca8u: goto label_209ca8;
        case 0x209cd8u: goto label_209cd8;
        default: break;
    }

    ctx->pc = 0x209930u;

    // 0x209930: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x209930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x209934: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x209934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x209938: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x209938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x20993c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x209940: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x209940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x209944: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x209944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x209948: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x209948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20994c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20994cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209950: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x209950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x209954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x209954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x209958: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x209958u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20995c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20995cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x209960: 0x8f839110  lw          $v1, -0x6EF0($gp)
    ctx->pc = 0x209960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
    // 0x209964: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x209964u;
    {
        const bool branch_taken_0x209964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209964u;
            // 0x209968: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209964) {
            ctx->pc = 0x209CD8u;
            goto label_209cd8;
        }
    }
    ctx->pc = 0x20996Cu;
    // 0x20996c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x20996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209970: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x209970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
    // 0x209974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209978: 0x0  nop
    ctx->pc = 0x209978u;
    // NOP
    // 0x20997c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20997cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209980: 0x0  nop
    ctx->pc = 0x209980u;
    // NOP
    // 0x209984: 0x450100d4  bc1t        . + 4 + (0xD4 << 2)
    ctx->pc = 0x209984u;
    {
        const bool branch_taken_0x209984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209984) {
            ctx->pc = 0x209CD8u;
            goto label_209cd8;
        }
    }
    ctx->pc = 0x20998Cu;
    // 0x20998c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x20998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209990: 0x3c024298  lui         $v0, 0x4298
    ctx->pc = 0x209990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17048 << 16));
    // 0x209994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209998: 0x0  nop
    ctx->pc = 0x209998u;
    // NOP
    // 0x20999c: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x20999cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2099a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2099A0u;
    SET_GPR_U32(ctx, 31, 0x2099A8u);
    ctx->pc = 0x2099A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2099A0u;
            // 0x2099a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099A8u; }
        if (ctx->pc != 0x2099A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099A8u; }
        if (ctx->pc != 0x2099A8u) { return; }
    }
    ctx->pc = 0x2099A8u;
label_2099a8:
    // 0x2099a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2099a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099ac: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x2099acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x2099b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2099b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2099b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2099B4u;
    SET_GPR_U32(ctx, 31, 0x2099BCu);
    ctx->pc = 0x2099B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2099B4u;
            // 0x2099b8: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099BCu; }
        if (ctx->pc != 0x2099BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099BCu; }
        if (ctx->pc != 0x2099BCu) { return; }
    }
    ctx->pc = 0x2099BCu;
label_2099bc:
    // 0x2099bc: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x2099bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2099c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2099c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2099c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2099c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2099c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2099ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2099D0u;
    SET_GPR_U32(ctx, 31, 0x2099D8u);
    ctx->pc = 0x2099D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2099D0u;
            // 0x2099d4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099D8u; }
        if (ctx->pc != 0x2099D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099D8u; }
        if (ctx->pc != 0x2099D8u) { return; }
    }
    ctx->pc = 0x2099D8u;
label_2099d8:
    // 0x2099d8: 0xc088038  jal         func_2200E0
    ctx->pc = 0x2099D8u;
    SET_GPR_U32(ctx, 31, 0x2099E0u);
    ctx->pc = 0x2099DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2099D8u;
            // 0x2099dc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099E0u; }
        if (ctx->pc != 0x2099E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099E0u; }
        if (ctx->pc != 0x2099E0u) { return; }
    }
    ctx->pc = 0x2099E0u;
label_2099e0:
    // 0x2099e0: 0xc088050  jal         func_220140
    ctx->pc = 0x2099E0u;
    SET_GPR_U32(ctx, 31, 0x2099E8u);
    ctx->pc = 0x2099E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2099E0u;
            // 0x2099e4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099E8u; }
        if (ctx->pc != 0x2099E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099E8u; }
        if (ctx->pc != 0x2099E8u) { return; }
    }
    ctx->pc = 0x2099E8u;
label_2099e8:
    // 0x2099e8: 0x8f829110  lw          $v0, -0x6EF0($gp)
    ctx->pc = 0x2099e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
    // 0x2099ec: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2099ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2099f0: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2099F0u;
    SET_GPR_U32(ctx, 31, 0x2099F8u);
    ctx->pc = 0x2099F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2099F0u;
            // 0x2099f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099F8u; }
        if (ctx->pc != 0x2099F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099F8u; }
        if (ctx->pc != 0x2099F8u) { return; }
    }
    ctx->pc = 0x2099F8u;
label_2099f8:
    // 0x2099f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2099f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2099fc: 0x24050144  addiu       $a1, $zero, 0x144
    ctx->pc = 0x2099fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x209a00: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x209a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x209a04: 0x240700bc  addiu       $a3, $zero, 0xBC
    ctx->pc = 0x209a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x209a08: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x209A08u;
    SET_GPR_U32(ctx, 31, 0x209A10u);
    ctx->pc = 0x209A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A08u;
            // 0x209a0c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A10u; }
        if (ctx->pc != 0x209A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A10u; }
        if (ctx->pc != 0x209A10u) { return; }
    }
    ctx->pc = 0x209A10u;
label_209a10:
    // 0x209a10: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x209a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209a14: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x209a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x209a18: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x209a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x209a1c: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x209a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x209a20: 0x8f859178  lw          $a1, -0x6E88($gp)
    ctx->pc = 0x209a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x209a24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x209a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209a28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x209a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x209a2c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x209a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x209a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209a34: 0x46021d00  add.s       $f20, $f3, $f2
    ctx->pc = 0x209a34u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x209a38: 0xc4a20358  lwc1        $f2, 0x358($a1)
    ctx->pc = 0x209a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209a3c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x209a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x209a40: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x209A40u;
    SET_GPR_U32(ctx, 31, 0x209A48u);
    ctx->pc = 0x209A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A40u;
            // 0x209a44: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A48u; }
        if (ctx->pc != 0x209A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A48u; }
        if (ctx->pc != 0x209A48u) { return; }
    }
    ctx->pc = 0x209A48u;
label_209a48:
    // 0x209a48: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x209a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x209a4c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x209A4Cu;
    SET_GPR_U32(ctx, 31, 0x209A54u);
    ctx->pc = 0x209A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A4Cu;
            // 0x209a50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A54u; }
        if (ctx->pc != 0x209A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A54u; }
        if (ctx->pc != 0x209A54u) { return; }
    }
    ctx->pc = 0x209A54u;
label_209a54:
    // 0x209a54: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x209a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x209a58: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x209A58u;
    SET_GPR_U32(ctx, 31, 0x209A60u);
    ctx->pc = 0x209A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A58u;
            // 0x209a5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A60u; }
        if (ctx->pc != 0x209A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A60u; }
        if (ctx->pc != 0x209A60u) { return; }
    }
    ctx->pc = 0x209A60u;
label_209a60:
    // 0x209a60: 0x8f859110  lw          $a1, -0x6EF0($gp)
    ctx->pc = 0x209a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
    // 0x209a64: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x209A64u;
    SET_GPR_U32(ctx, 31, 0x209A6Cu);
    ctx->pc = 0x209A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A64u;
            // 0x209a68: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A6Cu; }
        if (ctx->pc != 0x209A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A6Cu; }
        if (ctx->pc != 0x209A6Cu) { return; }
    }
    ctx->pc = 0x209A6Cu;
label_209a6c:
    // 0x209a6c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x209a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x209a70: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x209a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x209a74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x209a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a78: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x209a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a7c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x209A7Cu;
    SET_GPR_U32(ctx, 31, 0x209A84u);
    ctx->pc = 0x209A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A7Cu;
            // 0x209a80: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A84u; }
        if (ctx->pc != 0x209A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A84u; }
        if (ctx->pc != 0x209A84u) { return; }
    }
    ctx->pc = 0x209A84u;
label_209a84:
    // 0x209a84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x209a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209a88:
    // 0x209a88: 0x26a2ffd8  addiu       $v0, $s5, -0x28
    ctx->pc = 0x209a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967256));
    // 0x209a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209a90: 0x0  nop
    ctx->pc = 0x209a90u;
    // NOP
    // 0x209a94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x209a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x209a98: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x209a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209a9c: 0x0  nop
    ctx->pc = 0x209a9cu;
    // NOP
    // 0x209aa0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x209AA0u;
    {
        const bool branch_taken_0x209aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209aa0) {
            ctx->pc = 0x209AD4u;
            goto label_209ad4;
        }
    }
    ctx->pc = 0x209AA8u;
    // 0x209aa8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x209aa8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209aac: 0x0  nop
    ctx->pc = 0x209aacu;
    // NOP
    // 0x209ab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x209ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x209ab4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x209ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209ab8: 0x0  nop
    ctx->pc = 0x209ab8u;
    // NOP
    // 0x209abc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x209ABCu;
    {
        const bool branch_taken_0x209abc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209ABCu;
            // 0x209ac0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209abc) {
            ctx->pc = 0x209AF0u;
            goto label_209af0;
        }
    }
    ctx->pc = 0x209AC4u;
    // 0x209ac4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x209ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x209ac8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x209ac8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x209acc: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x209ACCu;
    SET_GPR_U32(ctx, 31, 0x209AD4u);
    ctx->pc = 0x209AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209ACCu;
            // 0x209ad0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AD4u; }
        if (ctx->pc != 0x209AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AD4u; }
        if (ctx->pc != 0x209AD4u) { return; }
    }
    ctx->pc = 0x209AD4u;
label_209ad4:
    // 0x209ad4: 0x0  nop
    ctx->pc = 0x209ad4u;
    // NOP
    // 0x209ad8: 0x3c0341d0  lui         $v1, 0x41D0
    ctx->pc = 0x209ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
    // 0x209adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209ae0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x209ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x209ae4: 0x2a220200  slti        $v0, $s1, 0x200
    ctx->pc = 0x209ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x209ae8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x209AE8u;
    {
        const bool branch_taken_0x209ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209AE8u;
            // 0x209aec: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ae8) {
            ctx->pc = 0x209A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209a88;
        }
    }
    ctx->pc = 0x209AF0u;
label_209af0:
    // 0x209af0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x209AF0u;
    SET_GPR_U32(ctx, 31, 0x209AF8u);
    ctx->pc = 0x209AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209AF0u;
            // 0x209af4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AF8u; }
        if (ctx->pc != 0x209AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AF8u; }
        if (ctx->pc != 0x209AF8u) { return; }
    }
    ctx->pc = 0x209AF8u;
label_209af8:
    // 0x209af8: 0xc088070  jal         func_2201C0
    ctx->pc = 0x209AF8u;
    SET_GPR_U32(ctx, 31, 0x209B00u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B00u; }
        if (ctx->pc != 0x209B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B00u; }
        if (ctx->pc != 0x209B00u) { return; }
    }
    ctx->pc = 0x209B00u;
label_209b00:
    // 0x209b00: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x209b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x209b04: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x209b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x209b08: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x209b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x209b0c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x209b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x209b10: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x209B10u;
    SET_GPR_U32(ctx, 31, 0x209B18u);
    ctx->pc = 0x209B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B10u;
            // 0x209b14: 0x2408001c  addiu       $t0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B18u; }
        if (ctx->pc != 0x209B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B18u; }
        if (ctx->pc != 0x209B18u) { return; }
    }
    ctx->pc = 0x209B18u;
label_209b18:
    // 0x209b18: 0x3c024351  lui         $v0, 0x4351
    ctx->pc = 0x209b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17233 << 16));
    // 0x209b1c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x209b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x209b20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x209b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209b24: 0x8f849110  lw          $a0, -0x6EF0($gp)
    ctx->pc = 0x209b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
    // 0x209b28: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x209b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209b2c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x209b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x209b30: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x209b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x209b34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x209b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b38: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x209b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b3c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x209b3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b40: 0xc44d035c  lwc1        $f13, 0x35C($v0)
    ctx->pc = 0x209b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x209b44: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x209B44u;
    SET_GPR_U32(ctx, 31, 0x209B4Cu);
    ctx->pc = 0x209B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B44u;
            // 0x209b48: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B4Cu; }
        if (ctx->pc != 0x209B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B4Cu; }
        if (ctx->pc != 0x209B4Cu) { return; }
    }
    ctx->pc = 0x209B4Cu;
label_209b4c:
    // 0x209b4c: 0xc088050  jal         func_220140
    ctx->pc = 0x209B4Cu;
    SET_GPR_U32(ctx, 31, 0x209B54u);
    ctx->pc = 0x209B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B4Cu;
            // 0x209b50: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B54u; }
        if (ctx->pc != 0x209B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B54u; }
        if (ctx->pc != 0x209B54u) { return; }
    }
    ctx->pc = 0x209B54u;
label_209b54:
    // 0x209b54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x209b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x209b58: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x209b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x209b5c: 0xc08878c  jal         func_221E30
    ctx->pc = 0x209B5Cu;
    SET_GPR_U32(ctx, 31, 0x209B64u);
    ctx->pc = 0x209B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B5Cu;
            // 0x209b60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B64u; }
        if (ctx->pc != 0x209B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B64u; }
        if (ctx->pc != 0x209B64u) { return; }
    }
    ctx->pc = 0x209B64u;
label_209b64:
    // 0x209b64: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x209b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x209b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209b6c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x209B6Cu;
    SET_GPR_U32(ctx, 31, 0x209B74u);
    ctx->pc = 0x209B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B6Cu;
            // 0x209b70: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B74u; }
        if (ctx->pc != 0x209B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B74u; }
        if (ctx->pc != 0x209B74u) { return; }
    }
    ctx->pc = 0x209B74u;
label_209b74:
    // 0x209b74: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x209b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x209b78: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x209b78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b7c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x209b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x209b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209b84: 0xc4610358  lwc1        $f1, 0x358($v1)
    ctx->pc = 0x209b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209b88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x209B88u;
    SET_GPR_U32(ctx, 31, 0x209B90u);
    ctx->pc = 0x209B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B88u;
            // 0x209b8c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B90u; }
        if (ctx->pc != 0x209B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B90u; }
        if (ctx->pc != 0x209B90u) { return; }
    }
    ctx->pc = 0x209B90u;
label_209b90:
    // 0x209b90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x209b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b94: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x209B94u;
    SET_GPR_U32(ctx, 31, 0x209B9Cu);
    ctx->pc = 0x209B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B94u;
            // 0x209b98: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B9Cu; }
        if (ctx->pc != 0x209B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B9Cu; }
        if (ctx->pc != 0x209B9Cu) { return; }
    }
    ctx->pc = 0x209B9Cu;
label_209b9c:
    // 0x209b9c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x209b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x209ba0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x209ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x209ba4: 0xc0b512c  jal         func_2D44B0
    ctx->pc = 0x209BA4u;
    SET_GPR_U32(ctx, 31, 0x209BACu);
    ctx->pc = 0x209BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209BA4u;
            // 0x209ba8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BACu; }
        if (ctx->pc != 0x209BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BACu; }
        if (ctx->pc != 0x209BACu) { return; }
    }
    ctx->pc = 0x209BACu;
label_209bac:
    // 0x209bac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x209bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209bb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x209bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209bb4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x209BB4u;
    {
        const bool branch_taken_0x209bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BB4u;
            // 0x209bb8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bb4) {
            ctx->pc = 0x209CB8u;
            goto label_209cb8;
        }
    }
    ctx->pc = 0x209BBCu;
label_209bbc:
    // 0x209bbc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x209bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x209bc0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x209BC0u;
    {
        const bool branch_taken_0x209bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BC0u;
            // 0x209bc4: 0x211102a  slt         $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bc0) {
            ctx->pc = 0x209CA8u;
            goto label_209ca8;
        }
    }
    ctx->pc = 0x209BC8u;
    // 0x209bc8: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x209BC8u;
    {
        const bool branch_taken_0x209bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BC8u;
            // 0x209bcc: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bc8) {
            ctx->pc = 0x209CD0u;
            goto label_209cd0;
        }
    }
    ctx->pc = 0x209BD0u;
    // 0x209bd0: 0x2442b7d0  addiu       $v0, $v0, -0x4830
    ctx->pc = 0x209bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948816));
    // 0x209bd4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x209bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x209bd8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209bdc: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x209BDCu;
    {
        const bool branch_taken_0x209bdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BDCu;
            // 0x209be0: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bdc) {
            ctx->pc = 0x209C78u;
            goto label_209c78;
        }
    }
    ctx->pc = 0x209BE4u;
    // 0x209be4: 0x2442bfd0  addiu       $v0, $v0, -0x4030
    ctx->pc = 0x209be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950864));
    // 0x209be8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x209bec: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x209becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209bf0: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x209bf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x209bf4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x209BF4u;
    {
        const bool branch_taken_0x209bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BF4u;
            // 0x209bf8: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bf4) {
            ctx->pc = 0x209C04u;
            goto label_209c04;
        }
    }
    ctx->pc = 0x209BFCu;
    // 0x209bfc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x209BFCu;
    {
        const bool branch_taken_0x209bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BFCu;
            // 0x209c00: 0x8c26f0c0  lw          $a2, -0xF40($at) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bfc) {
            ctx->pc = 0x209C2Cu;
            goto label_209c2c;
        }
    }
    ctx->pc = 0x209C04u;
label_209c04:
    // 0x209c04: 0x0  nop
    ctx->pc = 0x209c04u;
    // NOP
    // 0x209c08: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x209c08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x209c0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x209C0Cu;
    {
        const bool branch_taken_0x209c0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209C0Cu;
            // 0x209c10: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c0c) {
            ctx->pc = 0x209C1Cu;
            goto label_209c1c;
        }
    }
    ctx->pc = 0x209C14u;
    // 0x209c14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x209C14u;
    {
        const bool branch_taken_0x209c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209C14u;
            // 0x209c18: 0x8c26f0c4  lw          $a2, -0xF3C($at) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c14) {
            ctx->pc = 0x209C2Cu;
            goto label_209c2c;
        }
    }
    ctx->pc = 0x209C1Cu;
label_209c1c:
    // 0x209c1c: 0x0  nop
    ctx->pc = 0x209c1cu;
    // NOP
    // 0x209c20: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x209c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x209c24: 0x8c26f0c8  lw          $a2, -0xF38($at)
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963400)));
    // 0x209c28: 0x0  nop
    ctx->pc = 0x209c28u;
    // NOP
label_209c2c:
    // 0x209c2c: 0x0  nop
    ctx->pc = 0x209c2cu;
    // NOP
    // 0x209c30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x209c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x209c34: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x209c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x209c38: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x209C38u;
    SET_GPR_U32(ctx, 31, 0x209C40u);
    ctx->pc = 0x209C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C38u;
            // 0x209c3c: 0x24a59b78  addiu       $a1, $a1, -0x6488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C40u; }
        if (ctx->pc != 0x209C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C40u; }
        if (ctx->pc != 0x209C40u) { return; }
    }
    ctx->pc = 0x209C40u;
label_209c40:
    // 0x209c40: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x209c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x209c44: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x209C44u;
    SET_GPR_U32(ctx, 31, 0x209C4Cu);
    ctx->pc = 0x209C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C44u;
            // 0x209c48: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C4Cu; }
        if (ctx->pc != 0x209C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C4Cu; }
        if (ctx->pc != 0x209C4Cu) { return; }
    }
    ctx->pc = 0x209C4Cu;
label_209c4c:
    // 0x209c4c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x209c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x209c50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x209c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c54: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x209C54u;
    SET_GPR_U32(ctx, 31, 0x209C5Cu);
    ctx->pc = 0x209C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C54u;
            // 0x209c58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C5Cu; }
        if (ctx->pc != 0x209C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C5Cu; }
        if (ctx->pc != 0x209C5Cu) { return; }
    }
    ctx->pc = 0x209C5Cu;
label_209c5c:
    // 0x209c5c: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x209c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x209c60: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x209c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x209c64: 0x8fa70268  lw          $a3, 0x268($sp)
    ctx->pc = 0x209c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x209c68: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x209C68u;
    SET_GPR_U32(ctx, 31, 0x209C70u);
    ctx->pc = 0x209C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C68u;
            // 0x209c6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C70u; }
        if (ctx->pc != 0x209C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C70u; }
        if (ctx->pc != 0x209C70u) { return; }
    }
    ctx->pc = 0x209C70u;
label_209c70:
    // 0x209c70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x209C70u;
    {
        const bool branch_taken_0x209c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c70) {
            ctx->pc = 0x209CA8u;
            goto label_209ca8;
        }
    }
    ctx->pc = 0x209C78u;
label_209c78:
    // 0x209c78: 0x8f8582a4  lw          $a1, -0x7D5C($gp)
    ctx->pc = 0x209c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x209c7c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x209C7Cu;
    SET_GPR_U32(ctx, 31, 0x209C84u);
    ctx->pc = 0x209C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C7Cu;
            // 0x209c80: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C84u; }
        if (ctx->pc != 0x209C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C84u; }
        if (ctx->pc != 0x209C84u) { return; }
    }
    ctx->pc = 0x209C84u;
label_209c84:
    // 0x209c84: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x209c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x209c88: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x209c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c8c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x209C8Cu;
    SET_GPR_U32(ctx, 31, 0x209C94u);
    ctx->pc = 0x209C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C8Cu;
            // 0x209c90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C94u; }
        if (ctx->pc != 0x209C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C94u; }
        if (ctx->pc != 0x209C94u) { return; }
    }
    ctx->pc = 0x209C94u;
label_209c94:
    // 0x209c94: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x209c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x209c98: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x209c9c: 0x8fa70268  lw          $a3, 0x268($sp)
    ctx->pc = 0x209c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x209ca0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x209CA0u;
    SET_GPR_U32(ctx, 31, 0x209CA8u);
    ctx->pc = 0x209CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209CA0u;
            // 0x209ca4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CA8u; }
        if (ctx->pc != 0x209CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CA8u; }
        if (ctx->pc != 0x209CA8u) { return; }
    }
    ctx->pc = 0x209CA8u;
label_209ca8:
    // 0x209ca8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x209ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x209cac: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x209cacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x209cb0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x209cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x209cb4: 0x2631001a  addiu       $s1, $s1, 0x1A
    ctx->pc = 0x209cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26));
label_209cb8:
    // 0x209cb8: 0x878290f4  lh          $v0, -0x6F0C($gp)
    ctx->pc = 0x209cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
    // 0x209cbc: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x209cbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x209cc0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x209CC0u;
    {
        const bool branch_taken_0x209cc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209CC0u;
            // 0x209cc4: 0x2a820200  slti        $v0, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cc0) {
            ctx->pc = 0x209CD0u;
            goto label_209cd0;
        }
    }
    ctx->pc = 0x209CC8u;
    // 0x209cc8: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x209CC8u;
    {
        const bool branch_taken_0x209cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209CC8u;
            // 0x209ccc: 0x26a2ffd8  addiu       $v0, $s5, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cc8) {
            ctx->pc = 0x209BBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209bbc;
        }
    }
    ctx->pc = 0x209CD0u;
label_209cd0:
    // 0x209cd0: 0xc088070  jal         func_2201C0
    ctx->pc = 0x209CD0u;
    SET_GPR_U32(ctx, 31, 0x209CD8u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CD8u; }
        if (ctx->pc != 0x209CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CD8u; }
        if (ctx->pc != 0x209CD8u) { return; }
    }
    ctx->pc = 0x209CD8u;
label_209cd8:
    // 0x209cd8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x209cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x209cdc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x209cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x209ce0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x209ce0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x209ce4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x209ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209ce8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x209ce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x209cec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x209cecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x209cf0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x209cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209cf4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x209cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209cf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x209cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209cfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x209cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209d00: 0x3e00008  jr          $ra
    ctx->pc = 0x209D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209D00u;
            // 0x209d04: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209D08u;
}
