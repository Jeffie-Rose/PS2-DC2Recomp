#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuWeaponBuildUpDraw__FRi
// Address: 0x24b0b0 - 0x24becc
void MenuWeaponBuildUpDraw__FRi_0x24b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuWeaponBuildUpDraw__FRi_0x24b0b0");
#endif

    switch (ctx->pc) {
        case 0x24b13cu: goto label_24b13c;
        case 0x24b154u: goto label_24b154;
        case 0x24b16cu: goto label_24b16c;
        case 0x24b184u: goto label_24b184;
        case 0x24b19cu: goto label_24b19c;
        case 0x24b1b4u: goto label_24b1b4;
        case 0x24b1ccu: goto label_24b1cc;
        case 0x24b1e4u: goto label_24b1e4;
        case 0x24b1f0u: goto label_24b1f0;
        case 0x24b200u: goto label_24b200;
        case 0x24b20cu: goto label_24b20c;
        case 0x24b218u: goto label_24b218;
        case 0x24b230u: goto label_24b230;
        case 0x24b234u: goto label_24b234;
        case 0x24b23cu: goto label_24b23c;
        case 0x24b24cu: goto label_24b24c;
        case 0x24b284u: goto label_24b284;
        case 0x24b28cu: goto label_24b28c;
        case 0x24b2b0u: goto label_24b2b0;
        case 0x24b328u: goto label_24b328;
        case 0x24b408u: goto label_24b408;
        case 0x24b438u: goto label_24b438;
        case 0x24b47cu: goto label_24b47c;
        case 0x24b4b4u: goto label_24b4b4;
        case 0x24b4ecu: goto label_24b4ec;
        case 0x24b524u: goto label_24b524;
        case 0x24b55cu: goto label_24b55c;
        case 0x24b594u: goto label_24b594;
        case 0x24b5ccu: goto label_24b5cc;
        case 0x24b5f8u: goto label_24b5f8;
        case 0x24b628u: goto label_24b628;
        case 0x24b6c8u: goto label_24b6c8;
        case 0x24b6e8u: goto label_24b6e8;
        case 0x24b6f4u: goto label_24b6f4;
        case 0x24b70cu: goto label_24b70c;
        case 0x24b744u: goto label_24b744;
        case 0x24b774u: goto label_24b774;
        case 0x24b7b0u: goto label_24b7b0;
        case 0x24b7e0u: goto label_24b7e0;
        case 0x24b804u: goto label_24b804;
        case 0x24b810u: goto label_24b810;
        case 0x24b830u: goto label_24b830;
        case 0x24b854u: goto label_24b854;
        case 0x24b8acu: goto label_24b8ac;
        case 0x24b920u: goto label_24b920;
        case 0x24b92cu: goto label_24b92c;
        case 0x24b944u: goto label_24b944;
        case 0x24b950u: goto label_24b950;
        case 0x24b978u: goto label_24b978;
        case 0x24b990u: goto label_24b990;
        case 0x24b9a0u: goto label_24b9a0;
        case 0x24b9bcu: goto label_24b9bc;
        case 0x24ba00u: goto label_24ba00;
        case 0x24ba18u: goto label_24ba18;
        case 0x24ba28u: goto label_24ba28;
        case 0x24ba48u: goto label_24ba48;
        case 0x24ba7cu: goto label_24ba7c;
        case 0x24ba98u: goto label_24ba98;
        case 0x24baa8u: goto label_24baa8;
        case 0x24bac4u: goto label_24bac4;
        case 0x24baccu: goto label_24bacc;
        case 0x24bb80u: goto label_24bb80;
        case 0x24bb8cu: goto label_24bb8c;
        case 0x24bb98u: goto label_24bb98;
        case 0x24bbb0u: goto label_24bbb0;
        case 0x24bbb4u: goto label_24bbb4;
        case 0x24bbbcu: goto label_24bbbc;
        case 0x24bbccu: goto label_24bbcc;
        case 0x24bc08u: goto label_24bc08;
        case 0x24bc10u: goto label_24bc10;
        case 0x24bc30u: goto label_24bc30;
        case 0x24bcb8u: goto label_24bcb8;
        case 0x24bcccu: goto label_24bccc;
        case 0x24bd08u: goto label_24bd08;
        case 0x24bd18u: goto label_24bd18;
        case 0x24bd40u: goto label_24bd40;
        case 0x24bd68u: goto label_24bd68;
        case 0x24bd90u: goto label_24bd90;
        case 0x24bda0u: goto label_24bda0;
        case 0x24bda8u: goto label_24bda8;
        case 0x24bdc0u: goto label_24bdc0;
        case 0x24bdc8u: goto label_24bdc8;
        case 0x24bde0u: goto label_24bde0;
        case 0x24bdf0u: goto label_24bdf0;
        case 0x24be04u: goto label_24be04;
        case 0x24be48u: goto label_24be48;
        case 0x24be58u: goto label_24be58;
        case 0x24be6cu: goto label_24be6c;
        case 0x24be90u: goto label_24be90;
        case 0x24be98u: goto label_24be98;
        default: break;
    }

    ctx->pc = 0x24b0b0u;

    // 0x24b0b0: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x24b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
    // 0x24b0b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24b0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24b0b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24b0bc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x24b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x24b0c0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x24b0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x24b0c4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x24b0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x24b0c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x24b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x24b0cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x24b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x24b0d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x24b0d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24b0d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24b0dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24b0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24b0e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x24b0e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24b0e4: 0x8023dc22  lb          $v1, -0x23DE($at)
    ctx->pc = 0x24b0e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958114)));
    // 0x24b0e8: 0x1060036b  beqz        $v1, . + 4 + (0x36B << 2)
    ctx->pc = 0x24B0E8u;
    {
        const bool branch_taken_0x24b0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B0E8u;
            // 0x24b0ec: 0xafa401bc  sw          $a0, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0e8) {
            ctx->pc = 0x24BE98u;
            goto label_24be98;
        }
    }
    ctx->pc = 0x24B0F0u;
    // 0x24b0f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24b0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24b0f4: 0x8c23ca58  lw          $v1, -0x35A8($at)
    ctx->pc = 0x24b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x24b0f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24b0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24b0fc: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x24b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x24b100: 0x8424dc20  lh          $a0, -0x23E0($at)
    ctx->pc = 0x24b100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958112)));
    // 0x24b104: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x24b104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24b108: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B108u;
    {
        const bool branch_taken_0x24b108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B108u;
            // 0x24b10c: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b108) {
            ctx->pc = 0x24B120u;
            goto label_24b120;
        }
    }
    ctx->pc = 0x24B110u;
    // 0x24b110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24b110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b114: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B114u;
    {
        const bool branch_taken_0x24b114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24B118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B114u;
            // 0x24b118: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b114) {
            ctx->pc = 0x24B120u;
            goto label_24b120;
        }
    }
    ctx->pc = 0x24B11Cu;
    // 0x24b11c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x24b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_24b120:
    // 0x24b120: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x24b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24b124: 0x1060035c  beqz        $v1, . + 4 + (0x35C << 2)
    ctx->pc = 0x24B124u;
    {
        const bool branch_taken_0x24b124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b124) {
            ctx->pc = 0x24BE98u;
            goto label_24be98;
        }
    }
    ctx->pc = 0x24B12Cu;
    // 0x24b12c: 0x8f8296b8  lw          $v0, -0x6948($gp)
    ctx->pc = 0x24b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940344)));
    // 0x24b130: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x24b130u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b134: 0xc08878c  jal         func_221E30
    ctx->pc = 0x24B134u;
    SET_GPR_U32(ctx, 31, 0x24B13Cu);
    ctx->pc = 0x24B138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B134u;
            // 0x24b138: 0x8fa401bc  lw          $a0, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B13Cu; }
        if (ctx->pc != 0x24B13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B13Cu; }
        if (ctx->pc != 0x24B13Cu) { return; }
    }
    ctx->pc = 0x24B13Cu;
label_24b13c:
    // 0x24b13c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x24b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x24b140: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x24b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x24b144: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x24b144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x24b148: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x24b148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x24b14c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B14Cu;
    SET_GPR_U32(ctx, 31, 0x24B154u);
    ctx->pc = 0x24B150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B14Cu;
            // 0x24b150: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B154u; }
        if (ctx->pc != 0x24B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B154u; }
        if (ctx->pc != 0x24B154u) { return; }
    }
    ctx->pc = 0x24B154u;
label_24b154:
    // 0x24b154: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x24b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x24b158: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x24b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x24b15c: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x24b15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x24b160: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x24b160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24b164: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B164u;
    SET_GPR_U32(ctx, 31, 0x24B16Cu);
    ctx->pc = 0x24B168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B164u;
            // 0x24b168: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B16Cu; }
        if (ctx->pc != 0x24B16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B16Cu; }
        if (ctx->pc != 0x24B16Cu) { return; }
    }
    ctx->pc = 0x24B16Cu;
label_24b16c:
    // 0x24b16c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x24b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x24b170: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x24b170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x24b174: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x24b174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x24b178: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x24b178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24b17c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B17Cu;
    SET_GPR_U32(ctx, 31, 0x24B184u);
    ctx->pc = 0x24B180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B17Cu;
            // 0x24b180: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B184u; }
        if (ctx->pc != 0x24B184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B184u; }
        if (ctx->pc != 0x24B184u) { return; }
    }
    ctx->pc = 0x24B184u;
label_24b184:
    // 0x24b184: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x24b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x24b188: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x24b188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x24b18c: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x24b18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x24b190: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x24b190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24b194: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B194u;
    SET_GPR_U32(ctx, 31, 0x24B19Cu);
    ctx->pc = 0x24B198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B194u;
            // 0x24b198: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B19Cu; }
        if (ctx->pc != 0x24B19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B19Cu; }
        if (ctx->pc != 0x24B19Cu) { return; }
    }
    ctx->pc = 0x24B19Cu;
label_24b19c:
    // 0x24b19c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x24b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x24b1a0: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x24b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x24b1a4: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x24b1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x24b1a8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x24b1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24b1ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B1ACu;
    SET_GPR_U32(ctx, 31, 0x24B1B4u);
    ctx->pc = 0x24B1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B1ACu;
            // 0x24b1b0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B1B4u; }
        if (ctx->pc != 0x24B1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B1B4u; }
        if (ctx->pc != 0x24B1B4u) { return; }
    }
    ctx->pc = 0x24B1B4u;
label_24b1b4:
    // 0x24b1b4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x24b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x24b1b8: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x24b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x24b1bc: 0x2406007a  addiu       $a2, $zero, 0x7A
    ctx->pc = 0x24b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x24b1c0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x24b1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24b1c4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B1C4u;
    SET_GPR_U32(ctx, 31, 0x24B1CCu);
    ctx->pc = 0x24B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B1C4u;
            // 0x24b1c8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B1CCu; }
        if (ctx->pc != 0x24B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B1CCu; }
        if (ctx->pc != 0x24B1CCu) { return; }
    }
    ctx->pc = 0x24B1CCu;
label_24b1cc:
    // 0x24b1cc: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x24b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x24b1d0: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x24b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x24b1d4: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x24b1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x24b1d8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x24b1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24b1dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B1DCu;
    SET_GPR_U32(ctx, 31, 0x24B1E4u);
    ctx->pc = 0x24B1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B1DCu;
            // 0x24b1e0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B1E4u; }
        if (ctx->pc != 0x24B1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B1E4u; }
        if (ctx->pc != 0x24B1E4u) { return; }
    }
    ctx->pc = 0x24B1E4u;
label_24b1e4:
    // 0x24b1e4: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x24b1e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24b1e8: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x24B1E8u;
    SET_GPR_U32(ctx, 31, 0x24B1F0u);
    ctx->pc = 0x24B1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B1E8u;
            // 0x24b1ec: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B1F0u; }
        if (ctx->pc != 0x24B1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B1F0u; }
        if (ctx->pc != 0x24B1F0u) { return; }
    }
    ctx->pc = 0x24B1F0u;
label_24b1f0:
    // 0x24b1f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1f8: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x24B1F8u;
    SET_GPR_U32(ctx, 31, 0x24B200u);
    ctx->pc = 0x24B1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B1F8u;
            // 0x24b1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B200u; }
        if (ctx->pc != 0x24B200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B200u; }
        if (ctx->pc != 0x24B200u) { return; }
    }
    ctx->pc = 0x24B200u;
label_24b200:
    // 0x24b200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b204: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x24B204u;
    SET_GPR_U32(ctx, 31, 0x24B20Cu);
    ctx->pc = 0x24B208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B204u;
            // 0x24b208: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B20Cu; }
        if (ctx->pc != 0x24B20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B20Cu; }
        if (ctx->pc != 0x24B20Cu) { return; }
    }
    ctx->pc = 0x24B20Cu;
label_24b20c:
    // 0x24b20c: 0x8f8596b8  lw          $a1, -0x6948($gp)
    ctx->pc = 0x24b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940344)));
    // 0x24b210: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x24B210u;
    SET_GPR_U32(ctx, 31, 0x24B218u);
    ctx->pc = 0x24B214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B210u;
            // 0x24b214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B218u; }
        if (ctx->pc != 0x24B218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B218u; }
        if (ctx->pc != 0x24B218u) { return; }
    }
    ctx->pc = 0x24B218u;
label_24b218:
    // 0x24b218: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24b218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24b21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b220: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24b220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b224: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24b224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b228: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24B228u;
    SET_GPR_U32(ctx, 31, 0x24B230u);
    ctx->pc = 0x24B22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B228u;
            // 0x24b22c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B230u; }
        if (ctx->pc != 0x24B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B230u; }
        if (ctx->pc != 0x24B230u) { return; }
    }
    ctx->pc = 0x24B230u;
label_24b230:
    // 0x24b230: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x24b230u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b234:
    // 0x24b234: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x24B234u;
    {
        const bool branch_taken_0x24b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B234u;
            // 0x24b238: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b234) {
            ctx->pc = 0x24B2F4u;
            goto label_24b2f4;
        }
    }
    ctx->pc = 0x24B23Cu;
label_24b23c:
    // 0x24b23c: 0x0  nop
    ctx->pc = 0x24b23cu;
    // NOP
    // 0x24b240: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x24b240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24b244: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24b244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b248: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24b248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b24c:
    // 0x24b24c: 0x0  nop
    ctx->pc = 0x24b24cu;
    // NOP
    // 0x24b250: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24b250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24b254: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x24b254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x24b258: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x24b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x24b25c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x24b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24b260: 0x278283c4  addiu       $v0, $gp, -0x7C3C
    ctx->pc = 0x24b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935492));
    // 0x24b264: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x24b264u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b268: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x24b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x24b26c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x24b26cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b270: 0x278283c8  addiu       $v0, $gp, -0x7C38
    ctx->pc = 0x24b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935496));
    // 0x24b274: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24b278: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x24b278u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b27c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B27Cu;
    SET_GPR_U32(ctx, 31, 0x24B284u);
    ctx->pc = 0x24B280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B27Cu;
            // 0x24b280: 0x2408001c  addiu       $t0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B284u; }
        if (ctx->pc != 0x24B284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B284u; }
        if (ctx->pc != 0x24B284u) { return; }
    }
    ctx->pc = 0x24B284u;
label_24b284:
    // 0x24b284: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24B284u;
    {
        const bool branch_taken_0x24b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B284u;
            // 0x24b288: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b284) {
            ctx->pc = 0x24B2BCu;
            goto label_24b2bc;
        }
    }
    ctx->pc = 0x24B28Cu;
label_24b28c:
    // 0x24b28c: 0x0  nop
    ctx->pc = 0x24b28cu;
    // NOP
    // 0x24b290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b294: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x24b294u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b298: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x24b298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x24b29c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x24b29cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b2a0: 0x0  nop
    ctx->pc = 0x24b2a0u;
    // NOP
    // 0x24b2a4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x24b2a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24b2a8: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24B2A8u;
    SET_GPR_U32(ctx, 31, 0x24B2B0u);
    ctx->pc = 0x24B2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B2A8u;
            // 0x24b2ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B2B0u; }
        if (ctx->pc != 0x24B2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B2B0u; }
        if (ctx->pc != 0x24B2B0u) { return; }
    }
    ctx->pc = 0x24B2B0u;
label_24b2b0:
    // 0x24b2b0: 0x8fa20238  lw          $v0, 0x238($sp)
    ctx->pc = 0x24b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x24b2b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24b2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24b2b8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x24b2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_24b2bc:
    // 0x24b2bc: 0x0  nop
    ctx->pc = 0x24b2bcu;
    // NOP
    // 0x24b2c0: 0x278283d0  addiu       $v0, $gp, -0x7C30
    ctx->pc = 0x24b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935504));
    // 0x24b2c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24b2c8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x24b2c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b2cc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x24b2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24b2d0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24B2D0u;
    {
        const bool branch_taken_0x24b2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b2d0) {
            ctx->pc = 0x24B28Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b28c;
        }
    }
    ctx->pc = 0x24B2D8u;
    // 0x24b2d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24b2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24b2dc: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x24b2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x24b2e0: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x24B2E0u;
    {
        const bool branch_taken_0x24b2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B2E0u;
            // 0x24b2e4: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2e0) {
            ctx->pc = 0x24B24Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b24c;
        }
    }
    ctx->pc = 0x24B2E8u;
    // 0x24b2e8: 0x26d6001c  addiu       $s6, $s6, 0x1C
    ctx->pc = 0x24b2e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
    // 0x24b2ec: 0x26f7001c  addiu       $s7, $s7, 0x1C
    ctx->pc = 0x24b2ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x24b2f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24b2f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_24b2f4:
    // 0x24b2f4: 0x0  nop
    ctx->pc = 0x24b2f4u;
    // NOP
    // 0x24b2f8: 0x278283d8  addiu       $v0, $gp, -0x7C28
    ctx->pc = 0x24b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935512));
    // 0x24b2fc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x24b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x24b300: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x24b300u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b304: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x24b304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24b308: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x24B308u;
    {
        const bool branch_taken_0x24b308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b308) {
            ctx->pc = 0x24B23Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b23c;
        }
    }
    ctx->pc = 0x24B310u;
    // 0x24b310: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x24b310u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x24b314: 0x2bc20003  slti        $v0, $fp, 0x3
    ctx->pc = 0x24b314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24b318: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x24B318u;
    {
        const bool branch_taken_0x24b318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B318u;
            // 0x24b31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b318) {
            ctx->pc = 0x24B234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b234;
        }
    }
    ctx->pc = 0x24B320u;
    // 0x24b320: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x24B320u;
    SET_GPR_U32(ctx, 31, 0x24B328u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B328u; }
        if (ctx->pc != 0x24B328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B328u; }
        if (ctx->pc != 0x24B328u) { return; }
    }
    ctx->pc = 0x24B328u;
label_24b328:
    // 0x24b328: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x24b328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x24b32c: 0x26e3ffe4  addiu       $v1, $s7, -0x1C
    ctx->pc = 0x24b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967268));
    // 0x24b330: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x24b330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x24b334: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x24b334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x24b338: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x24b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x24b33c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x24b33cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x24b340: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x24b340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x24b344: 0x24e7e310  addiu       $a3, $a3, -0x1CF0
    ctx->pc = 0x24b344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959888));
    // 0x24b348: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24b34c: 0x27a60360  addiu       $a2, $sp, 0x360
    ctx->pc = 0x24b34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x24b350: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x24b350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b354: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x24b354u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24b358: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x24b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x24b35c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x24b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x24b360: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x24b360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b364: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x24b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x24b368: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x24b368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x24b36c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x24b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x24b370: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x24b370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x24b374: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x24b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x24b378: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24B378u;
    {
        const bool branch_taken_0x24b378 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24B37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B378u;
            // 0x24b37c: 0x241e0124  addiu       $fp, $zero, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b378) {
            ctx->pc = 0x24B3A4u;
            goto label_24b3a4;
        }
    }
    ctx->pc = 0x24B380u;
    // 0x24b380: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x24b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x24b384: 0x241e011a  addiu       $fp, $zero, 0x11A
    ctx->pc = 0x24b384u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    // 0x24b388: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x24b388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x24b38c: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x24b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x24b390: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x24b390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x24b394: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x24b394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x24b398: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x24b398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x24b39c: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x24b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x24b3a0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x24b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_24b3a4:
    // 0x24b3a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24b3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24b3a8: 0x27c2ffec  addiu       $v0, $fp, -0x14
    ctx->pc = 0x24b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967276));
    // 0x24b3ac: 0x8c35dc28  lw          $s5, -0x23D8($at)
    ctx->pc = 0x24b3acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958120)));
    // 0x24b3b0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x24b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x24b3b4: 0x26e2ffd8  addiu       $v0, $s7, -0x28
    ctx->pc = 0x24b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967256));
    // 0x24b3b8: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B3B8u;
    {
        const bool branch_taken_0x24b3b8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B3B8u;
            // 0x24b3bc: 0x55001a  div         $zero, $v0, $s5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3b8) {
            ctx->pc = 0x24B3C4u;
            goto label_24b3c4;
        }
    }
    ctx->pc = 0x24B3C0u;
    // 0x24b3c0: 0x1cd  break       0, 7
    ctx->pc = 0x24b3c0u;
    runtime->handleBreak(rdram, ctx);
label_24b3c4:
    // 0x24b3c4: 0x44951000  mtc1        $s5, $f2
    ctx->pc = 0x24b3c4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24b3c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24b3cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b3d0: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x24b3d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x24b3d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24b3d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24b3d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24b3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x24b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x24b3e0: 0x8812  mflo        $s1
    ctx->pc = 0x24b3e0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x24b3e4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x24b3e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x24b3e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b3ec: 0x10200095  beqz        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x24B3ECu;
    {
        const bool branch_taken_0x24b3ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B3ECu;
            // 0x24b3f0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3ec) {
            ctx->pc = 0x24B644u;
            goto label_24b644;
        }
    }
    ctx->pc = 0x24B3F4u;
    // 0x24b3f4: 0x26a2fff8  addiu       $v0, $s5, -0x8
    ctx->pc = 0x24b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967288));
    // 0x24b3f8: 0x2aa10009  slti        $at, $s5, 0x9
    ctx->pc = 0x24b3f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x24b3fc: 0x1420007c  bnez        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x24B3FCu;
    {
        const bool branch_taken_0x24b3fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B3FCu;
            // 0x24b400: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3fc) {
            ctx->pc = 0x24B5F0u;
            goto label_24b5f0;
        }
    }
    ctx->pc = 0x24B404u;
    // 0x24b404: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x24b404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
label_24b408:
    // 0x24b408: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x24b408u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b40c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x24b40cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b410: 0x0  nop
    ctx->pc = 0x24b410u;
    // NOP
    // 0x24b414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b418: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b41c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x24b41cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x24b420: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24b420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24b424: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24b424u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b428: 0x0  nop
    ctx->pc = 0x24b428u;
    // NOP
    // 0x24b42c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b42cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b430: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B430u;
    SET_GPR_U32(ctx, 31, 0x24B438u);
    ctx->pc = 0x24B434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B430u;
            // 0x24b434: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B438u; }
        if (ctx->pc != 0x24B438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B438u; }
        if (ctx->pc != 0x24B438u) { return; }
    }
    ctx->pc = 0x24B438u;
label_24b438:
    // 0x24b438: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x24b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x24b43c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b43cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b440: 0x0  nop
    ctx->pc = 0x24b440u;
    // NOP
    // 0x24b444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b448: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x24b448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x24b44c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x24b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24b450: 0x24d40360  addiu       $s4, $a2, 0x360
    ctx->pc = 0x24b450u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 864));
    // 0x24b454: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24b454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b458: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x24b458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x24b45c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b460: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x24b460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x24b464: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24b464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b468: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24b468u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b46c: 0x0  nop
    ctx->pc = 0x24b46cu;
    // NOP
    // 0x24b470: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b474: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B474u;
    SET_GPR_U32(ctx, 31, 0x24B47Cu);
    ctx->pc = 0x24B478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B474u;
            // 0x24b478: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B47Cu; }
        if (ctx->pc != 0x24B47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B47Cu; }
        if (ctx->pc != 0x24B47Cu) { return; }
    }
    ctx->pc = 0x24B47Cu;
label_24b47c:
    // 0x24b47c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x24b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x24b480: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b480u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b484: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x24b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x24b488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b48c: 0x0  nop
    ctx->pc = 0x24b48cu;
    // NOP
    // 0x24b490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b494: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b498: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x24b498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x24b49c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24b49cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b4a0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24b4a0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4a4: 0x0  nop
    ctx->pc = 0x24b4a4u;
    // NOP
    // 0x24b4a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b4ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B4ACu;
    SET_GPR_U32(ctx, 31, 0x24B4B4u);
    ctx->pc = 0x24B4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B4ACu;
            // 0x24b4b0: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B4B4u; }
        if (ctx->pc != 0x24B4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B4B4u; }
        if (ctx->pc != 0x24B4B4u) { return; }
    }
    ctx->pc = 0x24B4B4u;
label_24b4b4:
    // 0x24b4b4: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x24b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x24b4b8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b4b8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4bc: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x24b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x24b4c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b4c4: 0x0  nop
    ctx->pc = 0x24b4c4u;
    // NOP
    // 0x24b4c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b4c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b4cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b4d0: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x24b4d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x24b4d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24b4d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b4d8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24b4d8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4dc: 0x0  nop
    ctx->pc = 0x24b4dcu;
    // NOP
    // 0x24b4e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b4e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b4e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B4E4u;
    SET_GPR_U32(ctx, 31, 0x24B4ECu);
    ctx->pc = 0x24B4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B4E4u;
            // 0x24b4e8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B4ECu; }
        if (ctx->pc != 0x24B4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B4ECu; }
        if (ctx->pc != 0x24B4ECu) { return; }
    }
    ctx->pc = 0x24B4ECu;
label_24b4ec:
    // 0x24b4ec: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x24b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x24b4f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b4f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4f4: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x24b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x24b4f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b4fc: 0x0  nop
    ctx->pc = 0x24b4fcu;
    // NOP
    // 0x24b500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b504: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b508: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x24b508u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x24b50c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24b50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b510: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24b510u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b514: 0x0  nop
    ctx->pc = 0x24b514u;
    // NOP
    // 0x24b518: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b51c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B51Cu;
    SET_GPR_U32(ctx, 31, 0x24B524u);
    ctx->pc = 0x24B520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B51Cu;
            // 0x24b520: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B524u; }
        if (ctx->pc != 0x24B524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B524u; }
        if (ctx->pc != 0x24B524u) { return; }
    }
    ctx->pc = 0x24B524u;
label_24b524:
    // 0x24b524: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x24b524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x24b528: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b528u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b52c: 0x26420005  addiu       $v0, $s2, 0x5
    ctx->pc = 0x24b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x24b530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b534: 0x0  nop
    ctx->pc = 0x24b534u;
    // NOP
    // 0x24b538: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b53c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b53cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b540: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x24b540u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x24b544: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24b544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b548: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24b548u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b54c: 0x0  nop
    ctx->pc = 0x24b54cu;
    // NOP
    // 0x24b550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b554: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B554u;
    SET_GPR_U32(ctx, 31, 0x24B55Cu);
    ctx->pc = 0x24B558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B554u;
            // 0x24b558: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B55Cu; }
        if (ctx->pc != 0x24B55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B55Cu; }
        if (ctx->pc != 0x24B55Cu) { return; }
    }
    ctx->pc = 0x24B55Cu;
label_24b55c:
    // 0x24b55c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x24b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x24b560: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b560u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b564: 0x26420006  addiu       $v0, $s2, 0x6
    ctx->pc = 0x24b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x24b568: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b56c: 0x0  nop
    ctx->pc = 0x24b56cu;
    // NOP
    // 0x24b570: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b574: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b578: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x24b578u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x24b57c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24b57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b580: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24b580u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b584: 0x0  nop
    ctx->pc = 0x24b584u;
    // NOP
    // 0x24b588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b58c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B58Cu;
    SET_GPR_U32(ctx, 31, 0x24B594u);
    ctx->pc = 0x24B590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B58Cu;
            // 0x24b590: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B594u; }
        if (ctx->pc != 0x24B594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B594u; }
        if (ctx->pc != 0x24B594u) { return; }
    }
    ctx->pc = 0x24B594u;
label_24b594:
    // 0x24b594: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x24b594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x24b598: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b598u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b59c: 0x26420007  addiu       $v0, $s2, 0x7
    ctx->pc = 0x24b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x24b5a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b5a4: 0x0  nop
    ctx->pc = 0x24b5a4u;
    // NOP
    // 0x24b5a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b5ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b5b0: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x24b5b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x24b5b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24b5b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b5b8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24b5b8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b5bc: 0x0  nop
    ctx->pc = 0x24b5bcu;
    // NOP
    // 0x24b5c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b5c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B5C4u;
    SET_GPR_U32(ctx, 31, 0x24B5CCu);
    ctx->pc = 0x24B5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B5C4u;
            // 0x24b5c8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B5CCu; }
        if (ctx->pc != 0x24B5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B5CCu; }
        if (ctx->pc != 0x24B5CCu) { return; }
    }
    ctx->pc = 0x24B5CCu;
label_24b5cc:
    // 0x24b5cc: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x24b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x24b5d0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x24b5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x24b5d4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x24b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x24b5d8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x24b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x24b5dc: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x24b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x24b5e0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x24b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x24b5e4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x24b5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24b5e8: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x24B5E8u;
    {
        const bool branch_taken_0x24b5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b5e8) {
            ctx->pc = 0x24B408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b408;
        }
    }
    ctx->pc = 0x24B5F0u;
label_24b5f0:
    // 0x24b5f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24B5F0u;
    {
        const bool branch_taken_0x24b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B5F0u;
            // 0x24b5f4: 0x12a080  sll         $s4, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5f0) {
            ctx->pc = 0x24B638u;
            goto label_24b638;
        }
    }
    ctx->pc = 0x24B5F8u;
label_24b5f8:
    // 0x24b5f8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x24b5f8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b5fc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x24b5fcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b600: 0x0  nop
    ctx->pc = 0x24b600u;
    // NOP
    // 0x24b604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b608: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b60c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x24b60cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x24b610: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24b610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24b614: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24b614u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b618: 0x0  nop
    ctx->pc = 0x24b618u;
    // NOP
    // 0x24b61c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b620: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B620u;
    SET_GPR_U32(ctx, 31, 0x24B628u);
    ctx->pc = 0x24B624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B620u;
            // 0x24b624: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B628u; }
        if (ctx->pc != 0x24B628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B628u; }
        if (ctx->pc != 0x24B628u) { return; }
    }
    ctx->pc = 0x24B628u;
label_24b628:
    // 0x24b628: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x24b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x24b62c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24b62cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24b630: 0xac620360  sw          $v0, 0x360($v1)
    ctx->pc = 0x24b630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 2));
    // 0x24b634: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x24b634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_24b638:
    // 0x24b638: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x24b638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x24b63c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24B63Cu;
    {
        const bool branch_taken_0x24b63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b63c) {
            ctx->pc = 0x24B5F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b5f8;
        }
    }
    ctx->pc = 0x24B644u;
label_24b644:
    // 0x24b644: 0x0  nop
    ctx->pc = 0x24b644u;
    // NOP
    // 0x24b648: 0x6a10004  bgez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B648u;
    {
        const bool branch_taken_0x24b648 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x24B64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B648u;
            // 0x24b64c: 0x32a30001  andi        $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b648) {
            ctx->pc = 0x24B65Cu;
            goto label_24b65c;
        }
    }
    ctx->pc = 0x24B650u;
    // 0x24b650: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B650u;
    {
        const bool branch_taken_0x24b650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B650u;
            // 0x24b654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b650) {
            ctx->pc = 0x24B660u;
            goto label_24b660;
        }
    }
    ctx->pc = 0x24B658u;
    // 0x24b658: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x24b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_24b65c:
    // 0x24b65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b660:
    // 0x24b660: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24B660u;
    {
        const bool branch_taken_0x24b660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B660u;
            // 0x24b664: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b660) {
            ctx->pc = 0x24B68Cu;
            goto label_24b68c;
        }
    }
    ctx->pc = 0x24B668u;
    // 0x24b668: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x24b668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x24b66c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B66Cu;
    {
        const bool branch_taken_0x24b66c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x24B670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B66Cu;
            // 0x24b670: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b66c) {
            ctx->pc = 0x24B67Cu;
            goto label_24b67c;
        }
    }
    ctx->pc = 0x24B674u;
    // 0x24b674: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x24b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24b678: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24b678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_24b67c:
    // 0x24b67c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24b680: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x24b680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x24b684: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24B684u;
    {
        const bool branch_taken_0x24b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B684u;
            // 0x24b688: 0x8c420360  lw          $v0, 0x360($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b684) {
            ctx->pc = 0x24B6C8u;
            goto label_24b6c8;
        }
    }
    ctx->pc = 0x24B68Cu;
label_24b68c:
    // 0x24b68c: 0x8fa60360  lw          $a2, 0x360($sp)
    ctx->pc = 0x24b68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x24b690: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x24b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x24b694: 0x8c63035c  lw          $v1, 0x35C($v1)
    ctx->pc = 0x24b694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 860)));
    // 0x24b698: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x24b698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x24b69c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b6a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x24b6a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b6a4: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x24b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x24b6a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24b6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24b6ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b6b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24b6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24b6b4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x24b6b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x24b6b8: 0x0  nop
    ctx->pc = 0x24b6b8u;
    // NOP
    // 0x24b6bc: 0x0  nop
    ctx->pc = 0x24b6bcu;
    // NOP
    // 0x24b6c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24B6C0u;
    SET_GPR_U32(ctx, 31, 0x24B6C8u);
    ctx->pc = 0x24B6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B6C0u;
            // 0x24b6c4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B6C8u; }
        if (ctx->pc != 0x24B6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B6C8u; }
        if (ctx->pc != 0x24B6C8u) { return; }
    }
    ctx->pc = 0x24B6C8u;
label_24b6c8:
    // 0x24b6c8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x24b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x24b6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b6d0: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x24b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x24b6d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24b6d8: 0x222a818  mult        $s5, $s1, $v0
    ctx->pc = 0x24b6d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x24b6dc: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x24b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x24b6e0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x24B6E0u;
    SET_GPR_U32(ctx, 31, 0x24B6E8u);
    ctx->pc = 0x24B6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B6E0u;
            // 0x24b6e4: 0x2454000e  addiu       $s4, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B6E8u; }
        if (ctx->pc != 0x24B6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B6E8u; }
        if (ctx->pc != 0x24B6E8u) { return; }
    }
    ctx->pc = 0x24B6E8u;
label_24b6e8:
    // 0x24b6e8: 0x8f8596b8  lw          $a1, -0x6948($gp)
    ctx->pc = 0x24b6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940344)));
    // 0x24b6ec: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x24B6ECu;
    SET_GPR_U32(ctx, 31, 0x24B6F4u);
    ctx->pc = 0x24B6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B6ECu;
            // 0x24b6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B6F4u; }
        if (ctx->pc != 0x24B6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B6F4u; }
        if (ctx->pc != 0x24B6F4u) { return; }
    }
    ctx->pc = 0x24B6F4u;
label_24b6f4:
    // 0x24b6f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24b6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b6fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24b6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b700: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24b700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b704: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24B704u;
    SET_GPR_U32(ctx, 31, 0x24B70Cu);
    ctx->pc = 0x24B708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B704u;
            // 0x24b708: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B70Cu; }
        if (ctx->pc != 0x24B70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B70Cu; }
        if (ctx->pc != 0x24B70Cu) { return; }
    }
    ctx->pc = 0x24B70Cu;
label_24b70c:
    // 0x24b70c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24b70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24b710: 0x8422dc20  lh          $v0, -0x23E0($at)
    ctx->pc = 0x24b710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958112)));
    // 0x24b714: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x24B714u;
    {
        const bool branch_taken_0x24b714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b714) {
            ctx->pc = 0x24B774u;
            goto label_24b774;
        }
    }
    ctx->pc = 0x24B71Cu;
    // 0x24b71c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24b720: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x24b720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x24b724: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x24b724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x24b728: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x24b728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x24b72c: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x24b72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x24b730: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x24b730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x24b734: 0x24420026  addiu       $v0, $v0, 0x26
    ctx->pc = 0x24b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    // 0x24b738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b73c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B73Cu;
    SET_GPR_U32(ctx, 31, 0x24B744u);
    ctx->pc = 0x24B740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B73Cu;
            // 0x24b740: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B744u; }
        if (ctx->pc != 0x24B744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B744u; }
        if (ctx->pc != 0x24B744u) { return; }
    }
    ctx->pc = 0x24B744u;
label_24b744:
    // 0x24b744: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x24b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x24b748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b74c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B74Cu;
    {
        const bool branch_taken_0x24b74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B74Cu;
            // 0x24b750: 0x3c024240  lui         $v0, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b74c) {
            ctx->pc = 0x24B760u;
            goto label_24b760;
        }
    }
    ctx->pc = 0x24B754u;
    // 0x24b754: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x24b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x24b758: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x24b758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x24b75c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x24b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_24b760:
    // 0x24b760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b764: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24b764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b768: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x24b768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x24b76c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24B76Cu;
    SET_GPR_U32(ctx, 31, 0x24B774u);
    ctx->pc = 0x24B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B76Cu;
            // 0x24b770: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B774u; }
        if (ctx->pc != 0x24B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B774u; }
        if (ctx->pc != 0x24B774u) { return; }
    }
    ctx->pc = 0x24B774u;
label_24b774:
    // 0x24b774: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24b774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24b778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b77c: 0x8423dc20  lh          $v1, -0x23E0($at)
    ctx->pc = 0x24b77cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958112)));
    // 0x24b780: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x24B780u;
    {
        const bool branch_taken_0x24b780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b780) {
            ctx->pc = 0x24B7E0u;
            goto label_24b7e0;
        }
    }
    ctx->pc = 0x24B788u;
    // 0x24b788: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24b78c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x24b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x24b790: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x24b790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x24b794: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x24b794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24b798: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x24b798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x24b79c: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x24b79cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x24b7a0: 0x24420026  addiu       $v0, $v0, 0x26
    ctx->pc = 0x24b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    // 0x24b7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b7a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B7A8u;
    SET_GPR_U32(ctx, 31, 0x24B7B0u);
    ctx->pc = 0x24B7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B7A8u;
            // 0x24b7ac: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B7B0u; }
        if (ctx->pc != 0x24B7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B7B0u; }
        if (ctx->pc != 0x24B7B0u) { return; }
    }
    ctx->pc = 0x24B7B0u;
label_24b7b0:
    // 0x24b7b0: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x24b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x24b7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b7b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B7B8u;
    {
        const bool branch_taken_0x24b7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B7B8u;
            // 0x24b7bc: 0x3c024240  lui         $v0, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7b8) {
            ctx->pc = 0x24B7CCu;
            goto label_24b7cc;
        }
    }
    ctx->pc = 0x24B7C0u;
    // 0x24b7c0: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x24b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x24b7c4: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x24b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x24b7c8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x24b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_24b7cc:
    // 0x24b7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24b7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b7d4: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x24b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x24b7d8: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24B7D8u;
    SET_GPR_U32(ctx, 31, 0x24B7E0u);
    ctx->pc = 0x24B7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B7D8u;
            // 0x24b7dc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B7E0u; }
        if (ctx->pc != 0x24B7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B7E0u; }
        if (ctx->pc != 0x24B7E0u) { return; }
    }
    ctx->pc = 0x24B7E0u;
label_24b7e0:
    // 0x24b7e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x24b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24b7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7e8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x24b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24b7ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b7f0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x24b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x24b7f4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x24b7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24b7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b7fc: 0xc092be4  jal         func_24AF90
    ctx->pc = 0x24B7FCu;
    SET_GPR_U32(ctx, 31, 0x24B804u);
    ctx->pc = 0x24B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B7FCu;
            // 0x24b800: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x24AF90u;
    if (runtime->hasFunction(0x24AF90u)) {
        auto targetFn = runtime->lookupFunction(0x24AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B804u; }
        if (ctx->pc != 0x24B804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildUpWeaponNameBoardDraw__FP11mgCDrawPrimffi_0x24af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B804u; }
        if (ctx->pc != 0x24B804u) { return; }
    }
    ctx->pc = 0x24B804u;
label_24b804:
    // 0x24b804: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24b804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24B808u;
    {
        const bool branch_taken_0x24b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B808u;
            // 0x24b80c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b808) {
            ctx->pc = 0x24B838u;
            goto label_24b838;
        }
    }
    ctx->pc = 0x24B810u;
label_24b810:
    // 0x24b810: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x24b810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24b814: 0xc4400360  lwc1        $f0, 0x360($v0)
    ctx->pc = 0x24b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b81c: 0x449e0800  mtc1        $fp, $f1
    ctx->pc = 0x24b81cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b820: 0x0  nop
    ctx->pc = 0x24b820u;
    // NOP
    // 0x24b824: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x24b824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24b828: 0xc092be4  jal         func_24AF90
    ctx->pc = 0x24B828u;
    SET_GPR_U32(ctx, 31, 0x24B830u);
    ctx->pc = 0x24B82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B828u;
            // 0x24b82c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x24AF90u;
    if (runtime->hasFunction(0x24AF90u)) {
        auto targetFn = runtime->lookupFunction(0x24AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B830u; }
        if (ctx->pc != 0x24B830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildUpWeaponNameBoardDraw__FP11mgCDrawPrimffi_0x24af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B830u; }
        if (ctx->pc != 0x24B830u) { return; }
    }
    ctx->pc = 0x24B830u;
label_24b830:
    // 0x24b830: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x24b830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x24b834: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24b834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24b838:
    // 0x24b838: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24b838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24b83c: 0x8c22dc28  lw          $v0, -0x23D8($at)
    ctx->pc = 0x24b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958120)));
    // 0x24b840: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x24b840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24b844: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x24B844u;
    {
        const bool branch_taken_0x24b844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B844u;
            // 0x24b848: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b844) {
            ctx->pc = 0x24B810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b810;
        }
    }
    ctx->pc = 0x24B84Cu;
    // 0x24b84c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x24B84Cu;
    SET_GPR_U32(ctx, 31, 0x24B854u);
    ctx->pc = 0x24B850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B84Cu;
            // 0x24b850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B854u; }
        if (ctx->pc != 0x24B854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B854u; }
        if (ctx->pc != 0x24B854u) { return; }
    }
    ctx->pc = 0x24B854u;
label_24b854:
    // 0x24b854: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x24b854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24b858: 0x24040208  addiu       $a0, $zero, 0x208
    ctx->pc = 0x24b858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x24b85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b860: 0xac641b94  sw          $a0, 0x1B94($v1)
    ctx->pc = 0x24b860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7060), GPR_U32(ctx, 4));
    // 0x24b864: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x24b864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x24b868: 0x24670005  addiu       $a3, $v1, 0x5
    ctx->pc = 0x24b868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x24b86c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x24b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24b870: 0xac601b98  sw          $zero, 0x1B98($v1)
    ctx->pc = 0x24b870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7064), GPR_U32(ctx, 0));
    // 0x24b874: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24b874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24b878: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24b878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b87c: 0xac821c34  sw          $v0, 0x1C34($a0)
    ctx->pc = 0x24b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7220), GPR_U32(ctx, 2));
    // 0x24b880: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x24b880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24b884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b888: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x24b888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24b88c: 0xaca61b9c  sw          $a2, 0x1B9C($a1)
    ctx->pc = 0x24b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7068), GPR_U32(ctx, 6));
    // 0x24b890: 0x8fa60190  lw          $a2, 0x190($sp)
    ctx->pc = 0x24b890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24b894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b898: 0xacc71ba0  sw          $a3, 0x1BA0($a2)
    ctx->pc = 0x24b898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7072), GPR_U32(ctx, 7));
    // 0x24b89c: 0x8fa60190  lw          $a2, 0x190($sp)
    ctx->pc = 0x24b89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24b8a0: 0xacc21c38  sw          $v0, 0x1C38($a2)
    ctx->pc = 0x24b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7224), GPR_U32(ctx, 2));
    // 0x24b8a4: 0x3c0901ed  lui         $t1, 0x1ED
    ctx->pc = 0x24b8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)493 << 16));
    // 0x24b8a8: 0x2529df28  addiu       $t1, $t1, -0x20D8
    ctx->pc = 0x24b8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958888));
label_24b8ac:
    // 0x24b8ac: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x24b8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24b8b0: 0x1244021  addu        $t0, $t1, $a0
    ctx->pc = 0x24b8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x24b8b4: 0x9d3821  addu        $a3, $a0, $sp
    ctx->pc = 0x24b8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x24b8b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24b8bc: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x24b8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x24b8c0: 0x84e70360  lh          $a3, 0x360($a3)
    ctx->pc = 0x24b8c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 864)));
    // 0x24b8c4: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x24b8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x24b8c8: 0x24e70005  addiu       $a3, $a3, 0x5
    ctx->pc = 0x24b8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x24b8cc: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x24b8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x24b8d0: 0x8c27ca58  lw          $a3, -0x35A8($at)
    ctx->pc = 0x24b8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x24b8d4: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x24B8D4u;
    {
        const bool branch_taken_0x24b8d4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x24B8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B8D4u;
            // 0x24b8d8: 0x85080002  lh          $t0, 0x2($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8d4) {
            ctx->pc = 0x24B900u;
            goto label_24b900;
        }
    }
    ctx->pc = 0x24B8DCu;
    // 0x24b8dc: 0x28c10014  slti        $at, $a2, 0x14
    ctx->pc = 0x24b8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x24b8e0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B8E0u;
    {
        const bool branch_taken_0x24b8e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b8e0) {
            ctx->pc = 0x24B900u;
            goto label_24b900;
        }
    }
    ctx->pc = 0x24B8E8u;
    // 0x24b8e8: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x24b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24b8ec: 0xe55021  addu        $t2, $a3, $a1
    ctx->pc = 0x24b8ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x24b8f0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x24b8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x24b8f4: 0xad461ba4  sw          $a2, 0x1BA4($t2)
    ctx->pc = 0x24b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7076), GPR_U32(ctx, 6));
    // 0x24b8f8: 0xad481ba8  sw          $t0, 0x1BA8($t2)
    ctx->pc = 0x24b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 7080), GPR_U32(ctx, 8));
    // 0x24b8fc: 0xace21c3c  sw          $v0, 0x1C3C($a3)
    ctx->pc = 0x24b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7228), GPR_U32(ctx, 2));
label_24b900:
    // 0x24b900: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24b900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24b904: 0x28660003  slti        $a2, $v1, 0x3
    ctx->pc = 0x24b904u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24b908: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24b908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x24b90c: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x24B90Cu;
    {
        const bool branch_taken_0x24b90c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B90Cu;
            // 0x24b910: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b90c) {
            ctx->pc = 0x24B8ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b8ac;
        }
    }
    ctx->pc = 0x24B914u;
    // 0x24b914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b918: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x24B918u;
    SET_GPR_U32(ctx, 31, 0x24B920u);
    ctx->pc = 0x24B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B918u;
            // 0x24b91c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B920u; }
        if (ctx->pc != 0x24B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B920u; }
        if (ctx->pc != 0x24B920u) { return; }
    }
    ctx->pc = 0x24B920u;
label_24b920:
    // 0x24b920: 0x8f8596b8  lw          $a1, -0x6948($gp)
    ctx->pc = 0x24b920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940344)));
    // 0x24b924: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x24B924u;
    SET_GPR_U32(ctx, 31, 0x24B92Cu);
    ctx->pc = 0x24B928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B924u;
            // 0x24b928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B92Cu; }
        if (ctx->pc != 0x24B92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B92Cu; }
        if (ctx->pc != 0x24B92Cu) { return; }
    }
    ctx->pc = 0x24B92Cu;
label_24b92c:
    // 0x24b92c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24b930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b934: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24b934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b938: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24b938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b93c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24B93Cu;
    SET_GPR_U32(ctx, 31, 0x24B944u);
    ctx->pc = 0x24B940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B93Cu;
            // 0x24b940: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B944u; }
        if (ctx->pc != 0x24B944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B944u; }
        if (ctx->pc != 0x24B944u) { return; }
    }
    ctx->pc = 0x24B944u;
label_24b944:
    // 0x24b944: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24b944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b948: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24B948u;
    {
        const bool branch_taken_0x24b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B948u;
            // 0x24b94c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b948) {
            ctx->pc = 0x24B9C4u;
            goto label_24b9c4;
        }
    }
    ctx->pc = 0x24B950u;
label_24b950:
    // 0x24b950: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x24b950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x24b954: 0x3c024381  lui         $v0, 0x4381
    ctx->pc = 0x24b954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17281 << 16));
    // 0x24b958: 0x8c630360  lw          $v1, 0x360($v1)
    ctx->pc = 0x24b958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x24b95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24b95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b964: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x24b964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x24b968: 0x2471000c  addiu       $s1, $v1, 0xC
    ctx->pc = 0x24b968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x24b96c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b96cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b970: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24B970u;
    SET_GPR_U32(ctx, 31, 0x24B978u);
    ctx->pc = 0x24B974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B970u;
            // 0x24b974: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B978u; }
        if (ctx->pc != 0x24B978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B978u; }
        if (ctx->pc != 0x24B978u) { return; }
    }
    ctx->pc = 0x24B978u;
label_24b978:
    // 0x24b978: 0x27c7fefc  addiu       $a3, $fp, -0x104
    ctx->pc = 0x24b978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967036));
    // 0x24b97c: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x24b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x24b980: 0x24050106  addiu       $a1, $zero, 0x106
    ctx->pc = 0x24b980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x24b984: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24b984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b988: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24B988u;
    SET_GPR_U32(ctx, 31, 0x24B990u);
    ctx->pc = 0x24B98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B988u;
            // 0x24b98c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B990u; }
        if (ctx->pc != 0x24B990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B990u; }
        if (ctx->pc != 0x24B990u) { return; }
    }
    ctx->pc = 0x24B990u;
label_24b990:
    // 0x24b990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b994: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x24b994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x24b998: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x24B998u;
    SET_GPR_U32(ctx, 31, 0x24B9A0u);
    ctx->pc = 0x24B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B998u;
            // 0x24b99c: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B9A0u; }
        if (ctx->pc != 0x24B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B9A0u; }
        if (ctx->pc != 0x24B9A0u) { return; }
    }
    ctx->pc = 0x24B9A0u;
label_24b9a0:
    // 0x24b9a0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24b9a0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9a8: 0x449e0800  mtc1        $fp, $f1
    ctx->pc = 0x24b9a8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b9ac: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x24b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x24b9b0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x24b9b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24b9b4: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24B9B4u;
    SET_GPR_U32(ctx, 31, 0x24B9BCu);
    ctx->pc = 0x24B9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B9B4u;
            // 0x24b9b8: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B9BCu; }
        if (ctx->pc != 0x24B9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B9BCu; }
        if (ctx->pc != 0x24B9BCu) { return; }
    }
    ctx->pc = 0x24B9BCu;
label_24b9bc:
    // 0x24b9bc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x24b9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x24b9c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24b9c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24b9c4:
    // 0x24b9c4: 0x0  nop
    ctx->pc = 0x24b9c4u;
    // NOP
    // 0x24b9c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24b9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24b9cc: 0x8c23dc28  lw          $v1, -0x23D8($at)
    ctx->pc = 0x24b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958120)));
    // 0x24b9d0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x24b9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24b9d4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x24B9D4u;
    {
        const bool branch_taken_0x24b9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B9D4u;
            // 0x24b9d8: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9d4) {
            ctx->pc = 0x24B950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b950;
        }
    }
    ctx->pc = 0x24B9DCu;
    // 0x24b9dc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x24B9DCu;
    {
        const bool branch_taken_0x24b9dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b9dc) {
            ctx->pc = 0x24BA48u;
            goto label_24ba48;
        }
    }
    ctx->pc = 0x24B9E4u;
    // 0x24b9e4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x24b9e4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b9e8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x24b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x24b9ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24b9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9f4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x24b9f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24b9f8: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24B9F8u;
    SET_GPR_U32(ctx, 31, 0x24BA00u);
    ctx->pc = 0x24B9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B9F8u;
            // 0x24b9fc: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA00u; }
        if (ctx->pc != 0x24BA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA00u; }
        if (ctx->pc != 0x24BA00u) { return; }
    }
    ctx->pc = 0x24BA00u;
label_24ba00:
    // 0x24ba00: 0x26860004  addiu       $a2, $s4, 0x4
    ctx->pc = 0x24ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x24ba04: 0x26a8fffc  addiu       $t0, $s5, -0x4
    ctx->pc = 0x24ba04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x24ba08: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x24ba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x24ba0c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x24ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24ba10: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24BA10u;
    SET_GPR_U32(ctx, 31, 0x24BA18u);
    ctx->pc = 0x24BA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA10u;
            // 0x24ba14: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA18u; }
        if (ctx->pc != 0x24BA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA18u; }
        if (ctx->pc != 0x24BA18u) { return; }
    }
    ctx->pc = 0x24BA18u;
label_24ba18:
    // 0x24ba18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba1c: 0x27a50330  addiu       $a1, $sp, 0x330
    ctx->pc = 0x24ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x24ba20: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x24BA20u;
    SET_GPR_U32(ctx, 31, 0x24BA28u);
    ctx->pc = 0x24BA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA20u;
            // 0x24ba24: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA28u; }
        if (ctx->pc != 0x24BA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA28u; }
        if (ctx->pc != 0x24BA28u) { return; }
    }
    ctx->pc = 0x24BA28u;
label_24ba28:
    // 0x24ba28: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x24ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x24ba2c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x24ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x24ba30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24ba30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ba34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24ba38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24ba3c: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x24ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x24ba40: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24BA40u;
    SET_GPR_U32(ctx, 31, 0x24BA48u);
    ctx->pc = 0x24BA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA40u;
            // 0x24ba44: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA48u; }
        if (ctx->pc != 0x24BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA48u; }
        if (ctx->pc != 0x24BA48u) { return; }
    }
    ctx->pc = 0x24BA48u;
label_24ba48:
    // 0x24ba48: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x24ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x24ba4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba50: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x24ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24ba54: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x24ba54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x24ba58: 0x2451000c  addiu       $s1, $v0, 0xC
    ctx->pc = 0x24ba58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x24ba5c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x24ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24ba60: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24ba60u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ba64: 0x0  nop
    ctx->pc = 0x24ba64u;
    // NOP
    // 0x24ba68: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x24ba68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24ba6c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x24ba6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ba70: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x24ba70u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ba74: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24BA74u;
    SET_GPR_U32(ctx, 31, 0x24BA7Cu);
    ctx->pc = 0x24BA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA74u;
            // 0x24ba78: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA7Cu; }
        if (ctx->pc != 0x24BA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA7Cu; }
        if (ctx->pc != 0x24BA7Cu) { return; }
    }
    ctx->pc = 0x24BA7Cu;
label_24ba7c:
    // 0x24ba7c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x24ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24ba80: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x24ba80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x24ba84: 0x523823  subu        $a3, $v0, $s2
    ctx->pc = 0x24ba84u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24ba88: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x24ba88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x24ba8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24ba8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba90: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24BA90u;
    SET_GPR_U32(ctx, 31, 0x24BA98u);
    ctx->pc = 0x24BA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA90u;
            // 0x24ba94: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA98u; }
        if (ctx->pc != 0x24BA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA98u; }
        if (ctx->pc != 0x24BA98u) { return; }
    }
    ctx->pc = 0x24BA98u;
label_24ba98:
    // 0x24ba98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ba98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba9c: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x24ba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x24baa0: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x24BAA0u;
    SET_GPR_U32(ctx, 31, 0x24BAA8u);
    ctx->pc = 0x24BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BAA0u;
            // 0x24baa4: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BAA8u; }
        if (ctx->pc != 0x24BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BAA8u; }
        if (ctx->pc != 0x24BAA8u) { return; }
    }
    ctx->pc = 0x24BAA8u;
label_24baa8:
    // 0x24baa8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x24baa8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24baac: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x24baacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x24bab0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24bab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24bab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bab8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x24bab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24babc: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24BABCu;
    SET_GPR_U32(ctx, 31, 0x24BAC4u);
    ctx->pc = 0x24BAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BABCu;
            // 0x24bac0: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BAC4u; }
        if (ctx->pc != 0x24BAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BAC4u; }
        if (ctx->pc != 0x24BAC4u) { return; }
    }
    ctx->pc = 0x24BAC4u;
label_24bac4:
    // 0x24bac4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x24BAC4u;
    SET_GPR_U32(ctx, 31, 0x24BACCu);
    ctx->pc = 0x24BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BAC4u;
            // 0x24bac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BACCu; }
        if (ctx->pc != 0x24BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BACCu; }
        if (ctx->pc != 0x24BACCu) { return; }
    }
    ctx->pc = 0x24BACCu;
label_24bacc:
    // 0x24bacc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24baccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24bad0: 0x8423dc20  lh          $v1, -0x23E0($at)
    ctx->pc = 0x24bad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958112)));
    // 0x24bad4: 0x146000e5  bnez        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x24BAD4u;
    {
        const bool branch_taken_0x24bad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bad4) {
            ctx->pc = 0x24BE6Cu;
            goto label_24be6c;
        }
    }
    ctx->pc = 0x24BADCu;
    // 0x24badc: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x24badcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x24bae0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24bae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24bae4: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x24bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x24bae8: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x24bae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x24baec: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x24baecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24baf0: 0x26c2001e  addiu       $v0, $s6, 0x1E
    ctx->pc = 0x24baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 30));
    // 0x24baf4: 0x8027dc23  lb          $a3, -0x23DD($at)
    ctx->pc = 0x24baf4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
    // 0x24baf8: 0x24c6dc4c  addiu       $a2, $a2, -0x23B4
    ctx->pc = 0x24baf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958156));
    // 0x24bafc: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x24bafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x24bb00: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x24bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x24bb04: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24bb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb08: 0x2402011e  addiu       $v0, $zero, 0x11E
    ctx->pc = 0x24bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x24bb0c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x24bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x24bb10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bb14: 0x2402010a  addiu       $v0, $zero, 0x10A
    ctx->pc = 0x24bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x24bb18: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x24bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x24bb1c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x24bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x24bb20: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x24bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24bb24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bb28: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x24bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x24bb2c: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x24bb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x24bb30: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x24bb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x24bb34: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x24bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x24bb38: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BB38u;
    {
        const bool branch_taken_0x24bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24BB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB38u;
            // 0x24bb3c: 0x24020114  addiu       $v0, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb38) {
            ctx->pc = 0x24BB4Cu;
            goto label_24bb4c;
        }
    }
    ctx->pc = 0x24BB40u;
    // 0x24bb40: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x24bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x24bb44: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x24bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x24bb48: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x24bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_24bb4c:
    // 0x24bb4c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24bb50: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x24bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x24bb54: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x24bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x24bb58: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x24bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24bb5c: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x24BB5Cu;
    {
        const bool branch_taken_0x24bb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bb5c) {
            ctx->pc = 0x24BD90u;
            goto label_24bd90;
        }
    }
    ctx->pc = 0x24BB64u;
    // 0x24bb64: 0x84420040  lh          $v0, 0x40($v0)
    ctx->pc = 0x24bb64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x24bb68: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x24bb68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x24bb6c: 0x14200088  bnez        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x24BB6Cu;
    {
        const bool branch_taken_0x24bb6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB6Cu;
            // 0x24bb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb6c) {
            ctx->pc = 0x24BD90u;
            goto label_24bd90;
        }
    }
    ctx->pc = 0x24BB74u;
    // 0x24bb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24bb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb78: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x24BB78u;
    SET_GPR_U32(ctx, 31, 0x24BB80u);
    ctx->pc = 0x24BB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB78u;
            // 0x24bb7c: 0x2c0a82d  daddu       $s5, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BB80u; }
        if (ctx->pc != 0x24BB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BB80u; }
        if (ctx->pc != 0x24BB80u) { return; }
    }
    ctx->pc = 0x24BB80u;
label_24bb80:
    // 0x24bb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb84: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x24BB84u;
    SET_GPR_U32(ctx, 31, 0x24BB8Cu);
    ctx->pc = 0x24BB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB84u;
            // 0x24bb88: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BB8Cu; }
        if (ctx->pc != 0x24BB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BB8Cu; }
        if (ctx->pc != 0x24BB8Cu) { return; }
    }
    ctx->pc = 0x24BB8Cu;
label_24bb8c:
    // 0x24bb8c: 0x8f8596b8  lw          $a1, -0x6948($gp)
    ctx->pc = 0x24bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940344)));
    // 0x24bb90: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x24BB90u;
    SET_GPR_U32(ctx, 31, 0x24BB98u);
    ctx->pc = 0x24BB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB90u;
            // 0x24bb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BB98u; }
        if (ctx->pc != 0x24BB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BB98u; }
        if (ctx->pc != 0x24BB98u) { return; }
    }
    ctx->pc = 0x24BB98u;
label_24bb98:
    // 0x24bb98: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24bb9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bba0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24bba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bba4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24bba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bba8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24BBA8u;
    SET_GPR_U32(ctx, 31, 0x24BBB0u);
    ctx->pc = 0x24BBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBA8u;
            // 0x24bbac: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BBB0u; }
        if (ctx->pc != 0x24BBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BBB0u; }
        if (ctx->pc != 0x24BBB0u) { return; }
    }
    ctx->pc = 0x24BBB0u;
label_24bbb0:
    // 0x24bbb0: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x24bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_24bbb4:
    // 0x24bbb4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24BBB4u;
    {
        const bool branch_taken_0x24bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBB4u;
            // 0x24bbb8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbb4) {
            ctx->pc = 0x24BC78u;
            goto label_24bc78;
        }
    }
    ctx->pc = 0x24BBBCu;
label_24bbbc:
    // 0x24bbbc: 0x0  nop
    ctx->pc = 0x24bbbcu;
    // NOP
    // 0x24bbc0: 0x241200e8  addiu       $s2, $zero, 0xE8
    ctx->pc = 0x24bbc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x24bbc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24bbc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bbc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24bbc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bbcc:
    // 0x24bbcc: 0x0  nop
    ctx->pc = 0x24bbccu;
    // NOP
    // 0x24bbd0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24bbd4: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x24bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x24bbd8: 0x278383c4  addiu       $v1, $gp, -0x7C3C
    ctx->pc = 0x24bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935492));
    // 0x24bbdc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x24bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x24bbe0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x24bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x24bbe4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x24bbe4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bbe8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x24bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x24bbec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24bbf0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x24bbf0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bbf4: 0x278283c8  addiu       $v0, $gp, -0x7C38
    ctx->pc = 0x24bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935496));
    // 0x24bbf8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x24bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24bbfc: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x24bbfcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bc00: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24BC00u;
    SET_GPR_U32(ctx, 31, 0x24BC08u);
    ctx->pc = 0x24BC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC00u;
            // 0x24bc04: 0x2408001c  addiu       $t0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC08u; }
        if (ctx->pc != 0x24BC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC08u; }
        if (ctx->pc != 0x24BC08u) { return; }
    }
    ctx->pc = 0x24BC08u;
label_24bc08:
    // 0x24bc08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24BC08u;
    {
        const bool branch_taken_0x24bc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC08u;
            // 0x24bc0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc08) {
            ctx->pc = 0x24BC3Cu;
            goto label_24bc3c;
        }
    }
    ctx->pc = 0x24BC10u;
label_24bc10:
    // 0x24bc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc14: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x24bc14u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bc18: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x24bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x24bc1c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x24bc1cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bc20: 0x0  nop
    ctx->pc = 0x24bc20u;
    // NOP
    // 0x24bc24: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x24bc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24bc28: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24BC28u;
    SET_GPR_U32(ctx, 31, 0x24BC30u);
    ctx->pc = 0x24BC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC28u;
            // 0x24bc2c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC30u; }
        if (ctx->pc != 0x24BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC30u; }
        if (ctx->pc != 0x24BC30u) { return; }
    }
    ctx->pc = 0x24BC30u;
label_24bc30:
    // 0x24bc30: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x24bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x24bc34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24bc34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24bc38: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x24bc38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_24bc3c:
    // 0x24bc3c: 0x0  nop
    ctx->pc = 0x24bc3cu;
    // NOP
    // 0x24bc40: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24bc44: 0x24421268  addiu       $v0, $v0, 0x1268
    ctx->pc = 0x24bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x24bc48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x24bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x24bc4c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x24bc4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bc50: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x24bc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24bc54: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24BC54u;
    {
        const bool branch_taken_0x24bc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bc54) {
            ctx->pc = 0x24BC10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bc10;
        }
    }
    ctx->pc = 0x24BC5Cu;
    // 0x24bc5c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x24bc5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x24bc60: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x24bc60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x24bc64: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x24BC64u;
    {
        const bool branch_taken_0x24bc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC64u;
            // 0x24bc68: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc64) {
            ctx->pc = 0x24BBCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bbcc;
        }
    }
    ctx->pc = 0x24BC6Cu;
    // 0x24bc6c: 0x26b5001c  addiu       $s5, $s5, 0x1C
    ctx->pc = 0x24bc6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x24bc70: 0x26f7001c  addiu       $s7, $s7, 0x1C
    ctx->pc = 0x24bc70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x24bc74: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x24bc74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_24bc78:
    // 0x24bc78: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x24bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x24bc7c: 0x278383dc  addiu       $v1, $gp, -0x7C24
    ctx->pc = 0x24bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935516));
    // 0x24bc80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24bc84: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x24bc84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bc88: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x24bc88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24bc8c: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x24BC8Cu;
    {
        const bool branch_taken_0x24bc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bc8c) {
            ctx->pc = 0x24BBBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bbbc;
        }
    }
    ctx->pc = 0x24BC94u;
    // 0x24bc94: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x24bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x24bc98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24bc9c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x24bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x24bca0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x24bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x24bca4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x24bca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24bca8: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x24BCA8u;
    {
        const bool branch_taken_0x24bca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BCA8u;
            // 0x24bcac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bca8) {
            ctx->pc = 0x24BBB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bbb4;
        }
    }
    ctx->pc = 0x24BCB0u;
    // 0x24bcb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24bcb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24bcb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bcb8:
    // 0x24bcb8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x24bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24bcbc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24bcc0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x24bcc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x24bcc4: 0xc0ad6c4  jal         func_2B5B10
    ctx->pc = 0x24BCC4u;
    SET_GPR_U32(ctx, 31, 0x24BCCCu);
    ctx->pc = 0x24BCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BCC4u;
            // 0x24bcc8: 0x24540040  addiu       $s4, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BCCCu; }
        if (ctx->pc != 0x24BCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BCCCu; }
        if (ctx->pc != 0x24BCCCu) { return; }
    }
    ctx->pc = 0x24BCCCu;
label_24bccc:
    // 0x24bccc: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x24bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x24bcd0: 0x24630370  addiu       $v1, $v1, 0x370
    ctx->pc = 0x24bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 880));
    // 0x24bcd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24bcd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24bcdc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24BCDCu;
    {
        const bool branch_taken_0x24bcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bcdc) {
            ctx->pc = 0x24BD68u;
            goto label_24bd68;
        }
    }
    ctx->pc = 0x24BCE4u;
    // 0x24bce4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24bce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcec: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x24bcecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24bcf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24bcf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bcf4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x24bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24bcf8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x24bcf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24bcfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24bcfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bd00: 0xc092be4  jal         func_24AF90
    ctx->pc = 0x24BD00u;
    SET_GPR_U32(ctx, 31, 0x24BD08u);
    ctx->pc = 0x24BD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BD00u;
            // 0x24bd04: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x24AF90u;
    if (runtime->hasFunction(0x24AF90u)) {
        auto targetFn = runtime->lookupFunction(0x24AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD08u; }
        if (ctx->pc != 0x24BD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildUpWeaponNameBoardDraw__FP11mgCDrawPrimffi_0x24af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD08u; }
        if (ctx->pc != 0x24BD08u) { return; }
    }
    ctx->pc = 0x24BD08u;
label_24bd08:
    // 0x24bd08: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x24bd08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24bd0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24bd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd10: 0xc068444  jal         func_1A1110
    ctx->pc = 0x24BD10u;
    SET_GPR_U32(ctx, 31, 0x24BD18u);
    ctx->pc = 0x24BD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BD10u;
            // 0x24bd14: 0x2414015a  addiu       $s4, $zero, 0x15A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1110u;
    if (runtime->hasFunction(0x1A1110u)) {
        auto targetFn = runtime->lookupFunction(0x1A1110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD18u; }
        if (ctx->pc != 0x24BD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KillMonsterCount__Fii_0x1a1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD18u; }
        if (ctx->pc != 0x24BD18u) { return; }
    }
    ctx->pc = 0x24BD18u;
label_24bd18:
    // 0x24bd18: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24bd18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24bd1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x24BD1Cu;
    {
        const bool branch_taken_0x24bd1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bd1c) {
            ctx->pc = 0x24BD28u;
            goto label_24bd28;
        }
    }
    ctx->pc = 0x24BD24u;
    // 0x24bd24: 0x2414016a  addiu       $s4, $zero, 0x16A
    ctx->pc = 0x24bd24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
label_24bd28:
    // 0x24bd28: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x24bd28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24bd2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24bd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd30: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x24bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x24bd34: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x24bd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x24bd38: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24BD38u;
    SET_GPR_U32(ctx, 31, 0x24BD40u);
    ctx->pc = 0x24BD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BD38u;
            // 0x24bd3c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD40u; }
        if (ctx->pc != 0x24BD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD40u; }
        if (ctx->pc != 0x24BD40u) { return; }
    }
    ctx->pc = 0x24BD40u;
label_24bd40:
    // 0x24bd40: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x24bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x24bd44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd48: 0x27a50350  addiu       $a1, $sp, 0x350
    ctx->pc = 0x24bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x24bd4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24bd4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bd50: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x24bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24bd54: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x24bd54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24bd58: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x24bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x24bd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24bd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bd60: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24BD60u;
    SET_GPR_U32(ctx, 31, 0x24BD68u);
    ctx->pc = 0x24BD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BD60u;
            // 0x24bd64: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD68u; }
        if (ctx->pc != 0x24BD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD68u; }
        if (ctx->pc != 0x24BD68u) { return; }
    }
    ctx->pc = 0x24BD68u;
label_24bd68:
    // 0x24bd68: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x24bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24bd6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24bd6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24bd70: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x24bd70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x24bd74: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x24bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x24bd78: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x24bd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x24bd7c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x24bd7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24bd80: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x24BD80u;
    {
        const bool branch_taken_0x24bd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BD80u;
            // 0x24bd84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd80) {
            ctx->pc = 0x24BCB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bcb8;
        }
    }
    ctx->pc = 0x24BD88u;
    // 0x24bd88: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x24BD88u;
    SET_GPR_U32(ctx, 31, 0x24BD90u);
    ctx->pc = 0x24BD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BD88u;
            // 0x24bd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD90u; }
        if (ctx->pc != 0x24BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BD90u; }
        if (ctx->pc != 0x24BD90u) { return; }
    }
    ctx->pc = 0x24BD90u;
label_24bd90:
    // 0x24bd90: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24bd94: 0x8c451b2c  lw          $a1, 0x1B2C($v0)
    ctx->pc = 0x24bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6956)));
    // 0x24bd98: 0xc08878c  jal         func_221E30
    ctx->pc = 0x24BD98u;
    SET_GPR_U32(ctx, 31, 0x24BDA0u);
    ctx->pc = 0x24BD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BD98u;
            // 0x24bd9c: 0x8fa401bc  lw          $a0, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDA0u; }
        if (ctx->pc != 0x24BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDA0u; }
        if (ctx->pc != 0x24BDA0u) { return; }
    }
    ctx->pc = 0x24BDA0u;
label_24bda0:
    // 0x24bda0: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x24BDA0u;
    SET_GPR_U32(ctx, 31, 0x24BDA8u);
    ctx->pc = 0x24BDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BDA0u;
            // 0x24bda4: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDA8u; }
        if (ctx->pc != 0x24BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDA8u; }
        if (ctx->pc != 0x24BDA8u) { return; }
    }
    ctx->pc = 0x24BDA8u;
label_24bda8:
    // 0x24bda8: 0x8fa30370  lw          $v1, 0x370($sp)
    ctx->pc = 0x24bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x24bdac: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x24BDACu;
    {
        const bool branch_taken_0x24bdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bdac) {
            ctx->pc = 0x24BE6Cu;
            goto label_24be6c;
        }
    }
    ctx->pc = 0x24BDB4u;
    // 0x24bdb4: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x24bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x24bdb8: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x24BDB8u;
    SET_GPR_U32(ctx, 31, 0x24BDC0u);
    ctx->pc = 0x24BDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BDB8u;
            // 0x24bdbc: 0x26d00022  addiu       $s0, $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDC0u; }
        if (ctx->pc != 0x24BDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDC0u; }
        if (ctx->pc != 0x24BDC0u) { return; }
    }
    ctx->pc = 0x24BDC0u;
label_24bdc0:
    // 0x24bdc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24bdc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bdc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24bdc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bdc8:
    // 0x24bdc8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x24bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x24bdcc: 0x8c450370  lw          $a1, 0x370($v0)
    ctx->pc = 0x24bdccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x24bdd0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x24BDD0u;
    {
        const bool branch_taken_0x24bdd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BDD0u;
            // 0x24bdd4: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdd0) {
            ctx->pc = 0x24BE04u;
            goto label_24be04;
        }
    }
    ctx->pc = 0x24BDD8u;
    // 0x24bdd8: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x24BDD8u;
    SET_GPR_U32(ctx, 31, 0x24BDE0u);
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDE0u; }
        if (ctx->pc != 0x24BDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDE0u; }
        if (ctx->pc != 0x24BDE0u) { return; }
    }
    ctx->pc = 0x24BDE0u;
label_24bde0:
    // 0x24bde0: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x24bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x24bde4: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x24bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x24bde8: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x24BDE8u;
    SET_GPR_U32(ctx, 31, 0x24BDF0u);
    ctx->pc = 0x24BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BDE8u;
            // 0x24bdec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDF0u; }
        if (ctx->pc != 0x24BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BDF0u; }
        if (ctx->pc != 0x24BDF0u) { return; }
    }
    ctx->pc = 0x24BDF0u;
label_24bdf0:
    // 0x24bdf0: 0x8fa60304  lw          $a2, 0x304($sp)
    ctx->pc = 0x24bdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x24bdf4: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x24bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x24bdf8: 0x8fa70308  lw          $a3, 0x308($sp)
    ctx->pc = 0x24bdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x24bdfc: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x24BDFCu;
    SET_GPR_U32(ctx, 31, 0x24BE04u);
    ctx->pc = 0x24BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BDFCu;
            // 0x24be00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE04u; }
        if (ctx->pc != 0x24BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE04u; }
        if (ctx->pc != 0x24BE04u) { return; }
    }
    ctx->pc = 0x24BE04u;
label_24be04:
    // 0x24be04: 0x0  nop
    ctx->pc = 0x24be04u;
    // NOP
    // 0x24be08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24be08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24be0c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x24be0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24be10: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x24be10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x24be14: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x24BE14u;
    {
        const bool branch_taken_0x24be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE14u;
            // 0x24be18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be14) {
            ctx->pc = 0x24BDC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bdc8;
        }
    }
    ctx->pc = 0x24BE1Cu;
    // 0x24be1c: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x24be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x24be20: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24BE20u;
    {
        const bool branch_taken_0x24be20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24BE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE20u;
            // 0x24be24: 0x24100100  addiu       $s0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be20) {
            ctx->pc = 0x24BE2Cu;
            goto label_24be2c;
        }
    }
    ctx->pc = 0x24BE28u;
    // 0x24be28: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x24be28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_24be2c:
    // 0x24be2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24be30: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24be30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24be34: 0x24421280  addiu       $v0, $v0, 0x1280
    ctx->pc = 0x24be34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4736));
    // 0x24be38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24be3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24be40: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x24BE40u;
    SET_GPR_U32(ctx, 31, 0x24BE48u);
    ctx->pc = 0x24BE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE40u;
            // 0x24be44: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE48u; }
        if (ctx->pc != 0x24BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE48u; }
        if (ctx->pc != 0x24BE48u) { return; }
    }
    ctx->pc = 0x24BE48u;
label_24be48:
    // 0x24be48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24be48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be4c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x24be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x24be50: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x24BE50u;
    SET_GPR_U32(ctx, 31, 0x24BE58u);
    ctx->pc = 0x24BE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE50u;
            // 0x24be54: 0x24060160  addiu       $a2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE58u; }
        if (ctx->pc != 0x24BE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE58u; }
        if (ctx->pc != 0x24BE58u) { return; }
    }
    ctx->pc = 0x24BE58u;
label_24be58:
    // 0x24be58: 0x8fa60304  lw          $a2, 0x304($sp)
    ctx->pc = 0x24be58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x24be5c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x24be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x24be60: 0x8fa70308  lw          $a3, 0x308($sp)
    ctx->pc = 0x24be60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x24be64: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x24BE64u;
    SET_GPR_U32(ctx, 31, 0x24BE6Cu);
    ctx->pc = 0x24BE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE64u;
            // 0x24be68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE6Cu; }
        if (ctx->pc != 0x24BE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE6Cu; }
        if (ctx->pc != 0x24BE6Cu) { return; }
    }
    ctx->pc = 0x24BE6Cu;
label_24be6c:
    // 0x24be6c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24be6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24be70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24be70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24be74: 0x8424dc20  lh          $a0, -0x23E0($at)
    ctx->pc = 0x24be74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958112)));
    // 0x24be78: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BE78u;
    {
        const bool branch_taken_0x24be78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24be78) {
            ctx->pc = 0x24BE98u;
            goto label_24be98;
        }
    }
    ctx->pc = 0x24BE80u;
    // 0x24be80: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24be84: 0x8c451b2c  lw          $a1, 0x1B2C($v0)
    ctx->pc = 0x24be84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6956)));
    // 0x24be88: 0xc08878c  jal         func_221E30
    ctx->pc = 0x24BE88u;
    SET_GPR_U32(ctx, 31, 0x24BE90u);
    ctx->pc = 0x24BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE88u;
            // 0x24be8c: 0x8fa401bc  lw          $a0, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE90u; }
        if (ctx->pc != 0x24BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE90u; }
        if (ctx->pc != 0x24BE90u) { return; }
    }
    ctx->pc = 0x24BE90u;
label_24be90:
    // 0x24be90: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x24BE90u;
    SET_GPR_U32(ctx, 31, 0x24BE98u);
    ctx->pc = 0x24BE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BE90u;
            // 0x24be94: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE98u; }
        if (ctx->pc != 0x24BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BE98u; }
        if (ctx->pc != 0x24BE98u) { return; }
    }
    ctx->pc = 0x24BE98u;
label_24be98:
    // 0x24be98: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24be98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24be9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24bea0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x24bea0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24bea4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x24bea4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24bea8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x24bea8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24beac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x24beacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24beb0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x24beb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24beb4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24beb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24beb8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24beb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24bebc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24bebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24bec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bec4: 0x3e00008  jr          $ra
    ctx->pc = 0x24BEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BEC4u;
            // 0x24bec8: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24BECCu;
}
