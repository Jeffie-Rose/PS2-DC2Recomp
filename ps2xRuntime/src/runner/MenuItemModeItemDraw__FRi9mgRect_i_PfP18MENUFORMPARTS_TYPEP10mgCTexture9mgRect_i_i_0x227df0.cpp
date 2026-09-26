#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemModeItemDraw__FRi9mgRect<i>PfP18MENUFORMPARTS_TYPEP10mgCTexture9mgRect<i>i
// Address: 0x227df0 - 0x2285d4
void MenuItemModeItemDraw__FRi9mgRect_i_PfP18MENUFORMPARTS_TYPEP10mgCTexture9mgRect_i_i_0x227df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemModeItemDraw__FRi9mgRect_i_PfP18MENUFORMPARTS_TYPEP10mgCTexture9mgRect_i_i_0x227df0");
#endif

    switch (ctx->pc) {
        case 0x227e48u: goto label_227e48;
        case 0x227e94u: goto label_227e94;
        case 0x227eacu: goto label_227eac;
        case 0x227eb8u: goto label_227eb8;
        case 0x227ed0u: goto label_227ed0;
        case 0x227ef8u: goto label_227ef8;
        case 0x227f04u: goto label_227f04;
        case 0x227f0cu: goto label_227f0c;
        case 0x227f14u: goto label_227f14;
        case 0x227f24u: goto label_227f24;
        case 0x227f44u: goto label_227f44;
        case 0x228018u: goto label_228018;
        case 0x228034u: goto label_228034;
        case 0x228040u: goto label_228040;
        case 0x228074u: goto label_228074;
        case 0x228080u: goto label_228080;
        case 0x22809cu: goto label_22809c;
        case 0x228128u: goto label_228128;
        case 0x228180u: goto label_228180;
        case 0x228214u: goto label_228214;
        case 0x228244u: goto label_228244;
        case 0x228288u: goto label_228288;
        case 0x2282b4u: goto label_2282b4;
        case 0x2282c0u: goto label_2282c0;
        case 0x2282e4u: goto label_2282e4;
        case 0x228324u: goto label_228324;
        case 0x228348u: goto label_228348;
        case 0x22836cu: goto label_22836c;
        case 0x228374u: goto label_228374;
        case 0x228390u: goto label_228390;
        case 0x228398u: goto label_228398;
        case 0x2283b8u: goto label_2283b8;
        case 0x228408u: goto label_228408;
        case 0x228434u: goto label_228434;
        case 0x228440u: goto label_228440;
        case 0x228458u: goto label_228458;
        case 0x22847cu: goto label_22847c;
        case 0x228484u: goto label_228484;
        case 0x228498u: goto label_228498;
        case 0x2284c0u: goto label_2284c0;
        case 0x2284e0u: goto label_2284e0;
        case 0x2285a4u: goto label_2285a4;
        default: break;
    }

    ctx->pc = 0x227df0u;

    // 0x227df0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x227df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x227df4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x227df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x227df8: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x227df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x227dfc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x227dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x227e00: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x227e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x227e04: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x227e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x227e08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x227e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x227e0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x227e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x227e10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x227e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x227e14: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x227e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x227e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x227e1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x227e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x227e24: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x227e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x227e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227e2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x227e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e30: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x227e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
    // 0x227e34: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x227e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227e38: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x227e38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x227e3c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x227e3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x227e40: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x227E40u;
    SET_GPR_U32(ctx, 31, 0x227E48u);
    ctx->pc = 0x227E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227E40u;
            // 0x227e44: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227E48u; }
        if (ctx->pc != 0x227E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227E48u; }
        if (ctx->pc != 0x227E48u) { return; }
    }
    ctx->pc = 0x227E48u;
label_227e48:
    // 0x227e48: 0x8f869450  lw          $a2, -0x6BB0($gp)
    ctx->pc = 0x227e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x227e4c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x227e50: 0x24631ef0  addiu       $v1, $v1, 0x1EF0
    ctx->pc = 0x227e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7920));
    // 0x227e54: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x227e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x227e58: 0x8cd10054  lw          $s1, 0x54($a2)
    ctx->pc = 0x227e58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x227e5c: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x227e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x227e60: 0x122001d0  beqz        $s1, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x227E60u;
    {
        const bool branch_taken_0x227e60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227E60u;
            // 0x227e64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e60) {
            ctx->pc = 0x2285A4u;
            goto label_2285a4;
        }
    }
    ctx->pc = 0x227E68u;
    // 0x227e68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x227E68u;
    {
        const bool branch_taken_0x227e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227e68) {
            ctx->pc = 0x227E78u;
            goto label_227e78;
        }
    }
    ctx->pc = 0x227E70u;
    // 0x227e70: 0x100001cd  b           . + 4 + (0x1CD << 2)
    ctx->pc = 0x227E70u;
    {
        const bool branch_taken_0x227e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227E70u;
            // 0x227e74: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e70) {
            ctx->pc = 0x2285A8u;
            goto label_2285a8;
        }
    }
    ctx->pc = 0x227E78u;
label_227e78:
    // 0x227e78: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x227e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x227e7c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x227e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x227e80: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x227e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227e84: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x227e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x227e88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x227e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x227e8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227E8Cu;
    SET_GPR_U32(ctx, 31, 0x227E94u);
    ctx->pc = 0x227E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227E8Cu;
            // 0x227e90: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227E94u; }
        if (ctx->pc != 0x227E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227E94u; }
        if (ctx->pc != 0x227E94u) { return; }
    }
    ctx->pc = 0x227E94u;
label_227e94:
    // 0x227e94: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x227e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227e98: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x227e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x227e9c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x227e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x227ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227ea4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227EA4u;
    SET_GPR_U32(ctx, 31, 0x227EACu);
    ctx->pc = 0x227EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227EA4u;
            // 0x227ea8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EACu; }
        if (ctx->pc != 0x227EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EACu; }
        if (ctx->pc != 0x227EACu) { return; }
    }
    ctx->pc = 0x227EACu;
label_227eac:
    // 0x227eac: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x227eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x227eb0: 0xc088038  jal         func_2200E0
    ctx->pc = 0x227EB0u;
    SET_GPR_U32(ctx, 31, 0x227EB8u);
    ctx->pc = 0x227EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227EB0u;
            // 0x227eb4: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EB8u; }
        if (ctx->pc != 0x227EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EB8u; }
        if (ctx->pc != 0x227EB8u) { return; }
    }
    ctx->pc = 0x227EB8u;
label_227eb8:
    // 0x227eb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x227eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227ebc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x227ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x227ec0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x227ec0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x227ec4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x227ec4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x227ec8: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x227EC8u;
    SET_GPR_U32(ctx, 31, 0x227ED0u);
    ctx->pc = 0x227ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227EC8u;
            // 0x227ecc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227ED0u; }
        if (ctx->pc != 0x227ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227ED0u; }
        if (ctx->pc != 0x227ED0u) { return; }
    }
    ctx->pc = 0x227ED0u;
label_227ed0:
    // 0x227ed0: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x227ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x227ed4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x227ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x227ed8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x227ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227edc: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x227edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
    // 0x227ee0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x227ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x227ee4: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x227ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x227ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227eec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ef0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x227EF0u;
    SET_GPR_U32(ctx, 31, 0x227EF8u);
    ctx->pc = 0x227EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227EF0u;
            // 0x227ef4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EF8u; }
        if (ctx->pc != 0x227EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227EF8u; }
        if (ctx->pc != 0x227EF8u) { return; }
    }
    ctx->pc = 0x227EF8u;
label_227ef8:
    // 0x227ef8: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x227ef8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x227efc: 0xc08878c  jal         func_221E30
    ctx->pc = 0x227EFCu;
    SET_GPR_U32(ctx, 31, 0x227F04u);
    ctx->pc = 0x227F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227EFCu;
            // 0x227f00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F04u; }
        if (ctx->pc != 0x227F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F04u; }
        if (ctx->pc != 0x227F04u) { return; }
    }
    ctx->pc = 0x227F04u;
label_227f04:
    // 0x227f04: 0xc088050  jal         func_220140
    ctx->pc = 0x227F04u;
    SET_GPR_U32(ctx, 31, 0x227F0Cu);
    ctx->pc = 0x227F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227F04u;
            // 0x227f08: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F0Cu; }
        if (ctx->pc != 0x227F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F0Cu; }
        if (ctx->pc != 0x227F0Cu) { return; }
    }
    ctx->pc = 0x227F0Cu;
label_227f0c:
    // 0x227f0c: 0xc068644  jal         func_1A1910
    ctx->pc = 0x227F0Cu;
    SET_GPR_U32(ctx, 31, 0x227F14u);
    ctx->pc = 0x227F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227F0Cu;
            // 0x227f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F14u; }
        if (ctx->pc != 0x227F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227F14u; }
        if (ctx->pc != 0x227F14u) { return; }
    }
    ctx->pc = 0x227F14u;
label_227f14:
    // 0x227f14: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x227f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x227f18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x227f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f1c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x227f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x227f20: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x227f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_227f24:
    // 0x227f24: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x227f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x227f28: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x227f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x227f2c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x227f2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227f30: 0x14200187  bnez        $at, . + 4 + (0x187 << 2)
    ctx->pc = 0x227F30u;
    {
        const bool branch_taken_0x227f30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x227f30) {
            ctx->pc = 0x228550u;
            goto label_228550;
        }
    }
    ctx->pc = 0x227F38u;
    // 0x227f38: 0x8fb60150  lw          $s6, 0x150($sp)
    ctx->pc = 0x227f38u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x227f3c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x227f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x227f40: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x227f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_227f44:
    // 0x227f44: 0x0  nop
    ctx->pc = 0x227f44u;
    // NOP
    // 0x227f48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x227f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x227f4c: 0x2842ffd8  slti        $v0, $v0, -0x28
    ctx->pc = 0x227f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967256) ? 1 : 0);
    // 0x227f50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227F50u;
    {
        const bool branch_taken_0x227f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227f50) {
            ctx->pc = 0x227F6Cu;
            goto label_227f6c;
        }
    }
    ctx->pc = 0x227F58u;
    // 0x227f58: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x227F58u;
    {
        const bool branch_taken_0x227f58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f58) {
            ctx->pc = 0x227F80u;
            goto label_227f80;
        }
    }
    ctx->pc = 0x227F60u;
    // 0x227f60: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x227f60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x227f64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227F64u;
    {
        const bool branch_taken_0x227f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227f64) {
            ctx->pc = 0x227F80u;
            goto label_227f80;
        }
    }
    ctx->pc = 0x227F6Cu;
label_227f6c:
    // 0x227f6c: 0x0  nop
    ctx->pc = 0x227f6cu;
    // NOP
    // 0x227f70: 0x1280015e  beqz        $s4, . + 4 + (0x15E << 2)
    ctx->pc = 0x227F70u;
    {
        const bool branch_taken_0x227f70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f70) {
            ctx->pc = 0x2284ECu;
            goto label_2284ec;
        }
    }
    ctx->pc = 0x227F78u;
    // 0x227f78: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x227F78u;
    {
        const bool branch_taken_0x227f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227F78u;
            // 0x227f7c: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f78) {
            ctx->pc = 0x2284ECu;
            goto label_2284ec;
        }
    }
    ctx->pc = 0x227F80u;
label_227f80:
    // 0x227f80: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x227f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x227f84: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x227f84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227f88: 0x10200167  beqz        $at, . + 4 + (0x167 << 2)
    ctx->pc = 0x227F88u;
    {
        const bool branch_taken_0x227f88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f88) {
            ctx->pc = 0x228528u;
            goto label_228528;
        }
    }
    ctx->pc = 0x227F90u;
    // 0x227f90: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x227f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x227f94: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x227f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x227f98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227fa0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x227fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x227fa4: 0x2442cb70  addiu       $v0, $v0, -0x3490
    ctx->pc = 0x227fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x227fa8: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x227fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x227fac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x227facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x227fb0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x227fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x227fb4: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x227fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x227fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227fbc: 0x0  nop
    ctx->pc = 0x227fbcu;
    // NOP
    // 0x227fc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x227fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x227fc4: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x227fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x227fc8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x227fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x227fcc: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x227fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227fd0: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x227fd0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227fd4: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x227fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227fd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x227fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x227fdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x227fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227fe0: 0x0  nop
    ctx->pc = 0x227fe0u;
    // NOP
    // 0x227fe4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x227FE4u;
    {
        const bool branch_taken_0x227fe4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x227FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227FE4u;
            // 0x227fe8: 0x86f30002  lh          $s3, 0x2($s7) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227fe4) {
            ctx->pc = 0x227FF4u;
            goto label_227ff4;
        }
    }
    ctx->pc = 0x227FECu;
    // 0x227fec: 0x1e600006  bgtz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x227FECu;
    {
        const bool branch_taken_0x227fec = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x227fec) {
            ctx->pc = 0x228008u;
            goto label_228008;
        }
    }
    ctx->pc = 0x227FF4u;
label_227ff4:
    // 0x227ff4: 0x0  nop
    ctx->pc = 0x227ff4u;
    // NOP
    // 0x227ff8: 0x1280013c  beqz        $s4, . + 4 + (0x13C << 2)
    ctx->pc = 0x227FF8u;
    {
        const bool branch_taken_0x227ff8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x227ff8) {
            ctx->pc = 0x2284ECu;
            goto label_2284ec;
        }
    }
    ctx->pc = 0x228000u;
    // 0x228000: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x228000u;
    {
        const bool branch_taken_0x228000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228000u;
            // 0x228004: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228000) {
            ctx->pc = 0x2284ECu;
            goto label_2284ec;
        }
    }
    ctx->pc = 0x228008u;
label_228008:
    // 0x228008: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x228008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x22800c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22800cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228010: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228010u;
    SET_GPR_U32(ctx, 31, 0x228018u);
    ctx->pc = 0x228014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228010u;
            // 0x228014: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228018u; }
        if (ctx->pc != 0x228018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228018u; }
        if (ctx->pc != 0x228018u) { return; }
    }
    ctx->pc = 0x228018u;
label_228018:
    // 0x228018: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x228018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x22801c: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x22801cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x228020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228024: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x228024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x228028: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x228028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22802c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22802Cu;
    SET_GPR_U32(ctx, 31, 0x228034u);
    ctx->pc = 0x228030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22802Cu;
            // 0x228030: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228034u; }
        if (ctx->pc != 0x228034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228034u; }
        if (ctx->pc != 0x228034u) { return; }
    }
    ctx->pc = 0x228034u;
label_228034:
    // 0x228034: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x228034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x228038: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x228038u;
    SET_GPR_U32(ctx, 31, 0x228040u);
    ctx->pc = 0x22803Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228038u;
            // 0x22803c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228040u; }
        if (ctx->pc != 0x228040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228040u; }
        if (ctx->pc != 0x228040u) { return; }
    }
    ctx->pc = 0x228040u;
label_228040:
    // 0x228040: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x228040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x228044: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x228044u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228048: 0x279282d8  addiu       $s2, $gp, -0x7D28
    ctx->pc = 0x228048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935256));
    // 0x22804c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x22804cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x228050: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x228050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x228054: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x228054u;
    {
        const bool branch_taken_0x228054 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x228058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228054u;
            // 0x228058: 0xafa0012c  sw          $zero, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228054) {
            ctx->pc = 0x228084u;
            goto label_228084;
        }
    }
    ctx->pc = 0x22805Cu;
    // 0x22805c: 0x8e950040  lw          $s5, 0x40($s4)
    ctx->pc = 0x22805cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x228060: 0x92820045  lbu         $v0, 0x45($s4)
    ctx->pc = 0x228060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 69)));
    // 0x228064: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x228064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x228068: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x228068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22806c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22806Cu;
    SET_GPR_U32(ctx, 31, 0x228074u);
    ctx->pc = 0x228070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22806Cu;
            // 0x228070: 0x26920007  addiu       $s2, $s4, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228074u; }
        if (ctx->pc != 0x228074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228074u; }
        if (ctx->pc != 0x228074u) { return; }
    }
    ctx->pc = 0x228074u;
label_228074:
    // 0x228074: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x228074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x228078: 0xc0a248c  jal         func_289230
    ctx->pc = 0x228078u;
    SET_GPR_U32(ctx, 31, 0x228080u);
    ctx->pc = 0x22807Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228078u;
            // 0x22807c: 0xc68c0020  lwc1        $f12, 0x20($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228080u; }
        if (ctx->pc != 0x228080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228080u; }
        if (ctx->pc != 0x228080u) { return; }
    }
    ctx->pc = 0x228080u;
label_228080:
    // 0x228080: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x228080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_228084:
    // 0x228084: 0x0  nop
    ctx->pc = 0x228084u;
    // NOP
    // 0x228088: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x228088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x22808c: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22808Cu;
    {
        const bool branch_taken_0x22808c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x228090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22808Cu;
            // 0x228090: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22808c) {
            ctx->pc = 0x2280A8u;
            goto label_2280a8;
        }
    }
    ctx->pc = 0x228094u;
    // 0x228094: 0xc065c94  jal         func_197250
    ctx->pc = 0x228094u;
    SET_GPR_U32(ctx, 31, 0x22809Cu);
    ctx->pc = 0x228098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228094u;
            // 0x228098: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197250u;
    if (runtime->hasFunction(0x197250u)) {
        auto targetFn = runtime->lookupFunction(0x197250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22809Cu; }
        if (ctx->pc != 0x22809Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpectolNo__13CGameDataUsedFv_0x197250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22809Cu; }
        if (ctx->pc != 0x22809Cu) { return; }
    }
    ctx->pc = 0x22809Cu;
label_22809c:
    // 0x22809c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22809cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280a0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2280A0u;
    {
        const bool branch_taken_0x2280a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2280A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2280A0u;
            // 0x2280a4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280a0) {
            ctx->pc = 0x228254u;
            goto label_228254;
        }
    }
    ctx->pc = 0x2280A8u;
label_2280a8:
    // 0x2280a8: 0x240201aa  addiu       $v0, $zero, 0x1AA
    ctx->pc = 0x2280a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
    // 0x2280ac: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2280ACu;
    {
        const bool branch_taken_0x2280ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2280ac) {
            ctx->pc = 0x2280C0u;
            goto label_2280c0;
        }
    }
    ctx->pc = 0x2280B4u;
    // 0x2280b4: 0x86f30010  lh          $s3, 0x10($s7)
    ctx->pc = 0x2280b4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2280b8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2280B8u;
    {
        const bool branch_taken_0x2280b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2280BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2280B8u;
            // 0x2280bc: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280b8) {
            ctx->pc = 0x228254u;
            goto label_228254;
        }
    }
    ctx->pc = 0x2280C0u;
label_2280c0:
    // 0x2280c0: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x2280c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2280c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2280c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2280c8: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2280C8u;
    {
        const bool branch_taken_0x2280c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2280c8) {
            ctx->pc = 0x22822Cu;
            goto label_22822c;
        }
    }
    ctx->pc = 0x2280D0u;
    // 0x2280d0: 0x12a00056  beqz        $s5, . + 4 + (0x56 << 2)
    ctx->pc = 0x2280D0u;
    {
        const bool branch_taken_0x2280d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2280d0) {
            ctx->pc = 0x22822Cu;
            goto label_22822c;
        }
    }
    ctx->pc = 0x2280D8u;
    // 0x2280d8: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x2280d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2280dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2280dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2280e0: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x2280e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2280e4: 0xc4420074  lwc1        $f2, 0x74($v0)
    ctx->pc = 0x2280e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2280e8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2280e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2280ec: 0x0  nop
    ctx->pc = 0x2280ecu;
    // NOP
    // 0x2280f0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2280F0u;
    {
        const bool branch_taken_0x2280f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2280F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2280F0u;
            // 0x2280f4: 0x24570074  addiu       $s7, $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280f0) {
            ctx->pc = 0x228158u;
            goto label_228158;
        }
    }
    ctx->pc = 0x2280F8u;
    // 0x2280f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2280f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2280fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2280fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228100: 0x0  nop
    ctx->pc = 0x228100u;
    // NOP
    // 0x228104: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x228104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x228108: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x228108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22810c: 0x0  nop
    ctx->pc = 0x22810cu;
    // NOP
    // 0x228110: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x228110u;
    {
        const bool branch_taken_0x228110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228110u;
            // 0x228114: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228110) {
            ctx->pc = 0x228254u;
            goto label_228254;
        }
    }
    ctx->pc = 0x228118u;
    // 0x228118: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x228118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x22811c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22811cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228120: 0xc0941c0  jal         func_250700
    ctx->pc = 0x228120u;
    SET_GPR_U32(ctx, 31, 0x228128u);
    ctx->pc = 0x228124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228120u;
            // 0x228124: 0xe6a10028  swc1        $f1, 0x28($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228128u; }
        if (ctx->pc != 0x228128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228128u; }
        if (ctx->pc != 0x228128u) { return; }
    }
    ctx->pc = 0x228128u;
label_228128:
    // 0x228128: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x228128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x22812c: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x22812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x228130: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x228130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228134: 0x0  nop
    ctx->pc = 0x228134u;
    // NOP
    // 0x228138: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x228138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22813c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228140: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x228140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x228144: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x228144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
    // 0x228148: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x228148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x22814c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x228150: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x228150u;
    {
        const bool branch_taken_0x228150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228150u;
            // 0x228154: 0xa0430524  sb          $v1, 0x524($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1316), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228150) {
            ctx->pc = 0x228254u;
            goto label_228254;
        }
    }
    ctx->pc = 0x228158u;
label_228158:
    // 0x228158: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x228158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22815c: 0x80430524  lb          $v1, 0x524($v0)
    ctx->pc = 0x22815cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1316)));
    // 0x228160: 0xc6a10028  lwc1        $f1, 0x28($s5)
    ctx->pc = 0x228160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228164: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x228164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x228168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22816c: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x22816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x228170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x228170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x228174: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x228174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228178: 0xc047a42  jal         func_11E908
    ctx->pc = 0x228178u;
    SET_GPR_U32(ctx, 31, 0x228180u);
    ctx->pc = 0x22817Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228178u;
            // 0x22817c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228180u; }
        if (ctx->pc != 0x228180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228180u; }
        if (ctx->pc != 0x228180u) { return; }
    }
    ctx->pc = 0x228180u;
label_228180:
    // 0x228180: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x228180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x228184: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x228184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228188: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x228188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x22818c: 0xc44202cc  lwc1        $f2, 0x2CC($v0)
    ctx->pc = 0x22818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228190: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x228190u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x228194: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x228194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228198: 0x0  nop
    ctx->pc = 0x228198u;
    // NOP
    // 0x22819c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22819Cu;
    {
        const bool branch_taken_0x22819c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22819c) {
            ctx->pc = 0x2281B8u;
            goto label_2281b8;
        }
    }
    ctx->pc = 0x2281A4u;
    // 0x2281a4: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2281a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2281a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2281a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2281ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2281acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2281b0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2281B0u;
    {
        const bool branch_taken_0x2281b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2281B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2281B0u;
            // 0x2281b4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2281b0) {
            ctx->pc = 0x228254u;
            goto label_228254;
        }
    }
    ctx->pc = 0x2281B8u;
label_2281b8:
    // 0x2281b8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2281b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x2281bc: 0xe6a10028  swc1        $f1, 0x28($s5)
    ctx->pc = 0x2281bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x2281c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2281c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2281c4: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x2281c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2281c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2281c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2281cc: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x2281ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2281d0: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x2281d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2281d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2281d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2281d8: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x2281d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
    // 0x2281dc: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x2281dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2281e0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2281e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2281e4: 0x80620524  lb          $v0, 0x524($v1)
    ctx->pc = 0x2281e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1316)));
    // 0x2281e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2281e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2281ec: 0xa0620524  sb          $v0, 0x524($v1)
    ctx->pc = 0x2281ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1316), (uint8_t)GPR_U32(ctx, 2));
    // 0x2281f0: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x2281f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2281f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2281f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2281f8: 0x80420524  lb          $v0, 0x524($v0)
    ctx->pc = 0x2281f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1316)));
    // 0x2281fc: 0x1c400015  bgtz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2281FCu;
    {
        const bool branch_taken_0x2281fc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2281fc) {
            ctx->pc = 0x228254u;
            goto label_228254;
        }
    }
    ctx->pc = 0x228204u;
    // 0x228204: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x228204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x228208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x228208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22820c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22820Cu;
    SET_GPR_U32(ctx, 31, 0x228214u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228214u; }
        if (ctx->pc != 0x228214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228214u; }
        if (ctx->pc != 0x228214u) { return; }
    }
    ctx->pc = 0x228214u;
label_228214:
    // 0x228214: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x228214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x228218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22821c: 0x0  nop
    ctx->pc = 0x22821cu;
    // NOP
    // 0x228220: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x228220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228224: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x228224u;
    {
        const bool branch_taken_0x228224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228224u;
            // 0x228228: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228224) {
            ctx->pc = 0x228254u;
            goto label_228254;
        }
    }
    ctx->pc = 0x22822Cu;
label_22822c:
    // 0x22822c: 0x0  nop
    ctx->pc = 0x22822cu;
    // NOP
    // 0x228230: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x228230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x228234: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228234u;
    {
        const bool branch_taken_0x228234 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x228234) {
            ctx->pc = 0x228254u;
            goto label_228254;
        }
    }
    ctx->pc = 0x22823Cu;
    // 0x22823c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x22823Cu;
    SET_GPR_U32(ctx, 31, 0x228244u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228244u; }
        if (ctx->pc != 0x228244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228244u; }
        if (ctx->pc != 0x228244u) { return; }
    }
    ctx->pc = 0x228244u;
label_228244:
    // 0x228244: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x228244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x228248: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x228248u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22824c: 0x84224da0  lh          $v0, 0x4DA0($at)
    ctx->pc = 0x22824cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19872)));
    // 0x228250: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x228250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_228254:
    // 0x228254: 0x0  nop
    ctx->pc = 0x228254u;
    // NOP
    // 0x228258: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x228258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x22825c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x22825cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228260: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x228260u;
    {
        const bool branch_taken_0x228260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x228260) {
            ctx->pc = 0x22837Cu;
            goto label_22837c;
        }
    }
    ctx->pc = 0x228268u;
    // 0x228268: 0x8faa0110  lw          $t2, 0x110($sp)
    ctx->pc = 0x228268u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x22826c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x22826cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228274: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x228274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x228278: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x228278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22827c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x22827cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228280: 0xc0881fc  jal         func_2207F0
    ctx->pc = 0x228280u;
    SET_GPR_U32(ctx, 31, 0x228288u);
    ctx->pc = 0x228284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228280u;
            // 0x228284: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2207F0u;
    if (runtime->hasFunction(0x2207F0u)) {
        auto targetFn = runtime->lookupFunction(0x2207F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228288u; }
        if (ctx->pc != 0x228288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228288u; }
        if (ctx->pc != 0x228288u) { return; }
    }
    ctx->pc = 0x228288u;
label_228288:
    // 0x228288: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x228288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x22828c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x22828cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x228290: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x228290u;
    {
        const bool branch_taken_0x228290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x228290) {
            ctx->pc = 0x2282A4u;
            goto label_2282a4;
        }
    }
    ctx->pc = 0x228298u;
    // 0x228298: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x228298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x22829c: 0x1662007e  bne         $s3, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x22829Cu;
    {
        const bool branch_taken_0x22829c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x22829c) {
            ctx->pc = 0x228498u;
            goto label_228498;
        }
    }
    ctx->pc = 0x2282A4u;
label_2282a4:
    // 0x2282a4: 0x0  nop
    ctx->pc = 0x2282a4u;
    // NOP
    // 0x2282a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2282a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2282ac: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2282ACu;
    SET_GPR_U32(ctx, 31, 0x2282B4u);
    ctx->pc = 0x2282B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2282ACu;
            // 0x2282b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282B4u; }
        if (ctx->pc != 0x2282B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282B4u; }
        if (ctx->pc != 0x2282B4u) { return; }
    }
    ctx->pc = 0x2282B4u;
label_2282b4:
    // 0x2282b4: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x2282b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x2282b8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2282B8u;
    SET_GPR_U32(ctx, 31, 0x2282C0u);
    ctx->pc = 0x2282BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2282B8u;
            // 0x2282bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282C0u; }
        if (ctx->pc != 0x2282C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282C0u; }
        if (ctx->pc != 0x2282C0u) { return; }
    }
    ctx->pc = 0x2282C0u;
label_2282c0:
    // 0x2282c0: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x2282c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x2282c4: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2282C4u;
    {
        const bool branch_taken_0x2282c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2282c4) {
            ctx->pc = 0x2282ECu;
            goto label_2282ec;
        }
    }
    ctx->pc = 0x2282CCu;
    // 0x2282cc: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x2282ccu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2282d0: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x2282d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x2282d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2282d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2282d8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2282d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2282dc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2282DCu;
    SET_GPR_U32(ctx, 31, 0x2282E4u);
    ctx->pc = 0x2282E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2282DCu;
            // 0x2282e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282E4u; }
        if (ctx->pc != 0x2282E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282E4u; }
        if (ctx->pc != 0x2282E4u) { return; }
    }
    ctx->pc = 0x2282E4u;
label_2282e4:
    // 0x2282e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2282E4u;
    {
        const bool branch_taken_0x2282e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2282e4) {
            ctx->pc = 0x228348u;
            goto label_228348;
        }
    }
    ctx->pc = 0x2282ECu;
label_2282ec:
    // 0x2282ec: 0x0  nop
    ctx->pc = 0x2282ecu;
    // NOP
    // 0x2282f0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2282f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2282f4: 0x2442ca90  addiu       $v0, $v0, -0x3570
    ctx->pc = 0x2282f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953616));
    // 0x2282f8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2282f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2282fc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2282fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228304: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x228304u;
    {
        const bool branch_taken_0x228304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x228304) {
            ctx->pc = 0x22832Cu;
            goto label_22832c;
        }
    }
    ctx->pc = 0x22830Cu;
    // 0x22830c: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x22830cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x228310: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x228310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x228314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228318: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x228318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x22831c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22831Cu;
    SET_GPR_U32(ctx, 31, 0x228324u);
    ctx->pc = 0x228320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22831Cu;
            // 0x228320: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228324u; }
        if (ctx->pc != 0x228324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228324u; }
        if (ctx->pc != 0x228324u) { return; }
    }
    ctx->pc = 0x228324u;
label_228324:
    // 0x228324: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x228324u;
    {
        const bool branch_taken_0x228324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228324) {
            ctx->pc = 0x228348u;
            goto label_228348;
        }
    }
    ctx->pc = 0x22832Cu;
label_22832c:
    // 0x22832c: 0x0  nop
    ctx->pc = 0x22832cu;
    // NOP
    // 0x228330: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x228330u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x228334: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x228334u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x228338: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x228338u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x22833c: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x22833cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x228340: 0xc04d320  jal         func_134C80
    ctx->pc = 0x228340u;
    SET_GPR_U32(ctx, 31, 0x228348u);
    ctx->pc = 0x228344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228340u;
            // 0x228344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228348u; }
        if (ctx->pc != 0x228348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228348u; }
        if (ctx->pc != 0x228348u) { return; }
    }
    ctx->pc = 0x228348u;
label_228348:
    // 0x228348: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x228348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x22834c: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x22834cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x228350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228354: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x228354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x228358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22835c: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x22835cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x228360: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x228360u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x228364: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x228364u;
    SET_GPR_U32(ctx, 31, 0x22836Cu);
    ctx->pc = 0x228368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228364u;
            // 0x228368: 0x27a90180  addiu       $t1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22836Cu; }
        if (ctx->pc != 0x22836Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22836Cu; }
        if (ctx->pc != 0x22836Cu) { return; }
    }
    ctx->pc = 0x22836Cu;
label_22836c:
    // 0x22836c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22836Cu;
    SET_GPR_U32(ctx, 31, 0x228374u);
    ctx->pc = 0x228370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22836Cu;
            // 0x228370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228374u; }
        if (ctx->pc != 0x228374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228374u; }
        if (ctx->pc != 0x228374u) { return; }
    }
    ctx->pc = 0x228374u;
label_228374:
    // 0x228374: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x228374u;
    {
        const bool branch_taken_0x228374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228374) {
            ctx->pc = 0x228498u;
            goto label_228498;
        }
    }
    ctx->pc = 0x22837Cu;
label_22837c:
    // 0x22837c: 0x0  nop
    ctx->pc = 0x22837cu;
    // NOP
    // 0x228380: 0x2784941c  addiu       $a0, $gp, -0x6BE4
    ctx->pc = 0x228380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939676));
    // 0x228384: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x228384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228388: 0xc049c18  jal         func_127060
    ctx->pc = 0x228388u;
    SET_GPR_U32(ctx, 31, 0x228390u);
    ctx->pc = 0x22838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228388u;
            // 0x22838c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228390u; }
        if (ctx->pc != 0x228390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228390u; }
        if (ctx->pc != 0x228390u) { return; }
    }
    ctx->pc = 0x228390u;
label_228390:
    // 0x228390: 0xc047a42  jal         func_11E908
    ctx->pc = 0x228390u;
    SET_GPR_U32(ctx, 31, 0x228398u);
    ctx->pc = 0x228394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228390u;
            // 0x228394: 0xc78c9344  lwc1        $f12, -0x6CBC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228398u; }
        if (ctx->pc != 0x228398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228398u; }
        if (ctx->pc != 0x228398u) { return; }
    }
    ctx->pc = 0x228398u;
label_228398:
    // 0x228398: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x228398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x22839c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x22839cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2283a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2283a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2283a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2283a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2283a8: 0x0  nop
    ctx->pc = 0x2283a8u;
    // NOP
    // 0x2283ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2283acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2283b0: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2283B0u;
    SET_GPR_U32(ctx, 31, 0x2283B8u);
    ctx->pc = 0x2283B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2283B0u;
            // 0x2283b4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2283B8u; }
        if (ctx->pc != 0x2283B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2283B8u; }
        if (ctx->pc != 0x2283B8u) { return; }
    }
    ctx->pc = 0x2283B8u;
label_2283b8:
    // 0x2283b8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2283b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2283bc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2283bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2283c0: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x2283c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2283c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2283c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2283c8: 0xa2430002  sb          $v1, 0x2($s2)
    ctx->pc = 0x2283c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2283cc: 0x8f838ad4  lw          $v1, -0x752C($gp)
    ctx->pc = 0x2283ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x2283d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2283D0u;
    {
        const bool branch_taken_0x2283d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2283d0) {
            ctx->pc = 0x2283E8u;
            goto label_2283e8;
        }
    }
    ctx->pc = 0x2283D8u;
    // 0x2283d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2283d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2283dc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2283dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2283e0: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x2283e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2283e4: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x2283e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_2283e8:
    // 0x2283e8: 0x8faa0110  lw          $t2, 0x110($sp)
    ctx->pc = 0x2283e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2283ec: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2283ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2283f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283f4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2283f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2283f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2283f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283fc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2283fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228400: 0xc0881fc  jal         func_2207F0
    ctx->pc = 0x228400u;
    SET_GPR_U32(ctx, 31, 0x228408u);
    ctx->pc = 0x228404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228400u;
            // 0x228404: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2207F0u;
    if (runtime->hasFunction(0x2207F0u)) {
        auto targetFn = runtime->lookupFunction(0x2207F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228408u; }
        if (ctx->pc != 0x228408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228408u; }
        if (ctx->pc != 0x228408u) { return; }
    }
    ctx->pc = 0x228408u;
label_228408:
    // 0x228408: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x228408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x22840c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x22840cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x228410: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x228410u;
    {
        const bool branch_taken_0x228410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x228410) {
            ctx->pc = 0x228424u;
            goto label_228424;
        }
    }
    ctx->pc = 0x228418u;
    // 0x228418: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x228418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x22841c: 0x16620019  bne         $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22841Cu;
    {
        const bool branch_taken_0x22841c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x22841c) {
            ctx->pc = 0x228484u;
            goto label_228484;
        }
    }
    ctx->pc = 0x228424u;
label_228424:
    // 0x228424: 0x0  nop
    ctx->pc = 0x228424u;
    // NOP
    // 0x228428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22842c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22842Cu;
    SET_GPR_U32(ctx, 31, 0x228434u);
    ctx->pc = 0x228430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22842Cu;
            // 0x228430: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228434u; }
        if (ctx->pc != 0x228434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228434u; }
        if (ctx->pc != 0x228434u) { return; }
    }
    ctx->pc = 0x228434u;
label_228434:
    // 0x228434: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x228434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x228438: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x228438u;
    SET_GPR_U32(ctx, 31, 0x228440u);
    ctx->pc = 0x22843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228438u;
            // 0x22843c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228440u; }
        if (ctx->pc != 0x228440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228440u; }
        if (ctx->pc != 0x228440u) { return; }
    }
    ctx->pc = 0x228440u;
label_228440:
    // 0x228440: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x228440u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x228444: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x228444u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x228448: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x228448u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x22844c: 0x92480003  lbu         $t0, 0x3($s2)
    ctx->pc = 0x22844cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x228450: 0xc04d320  jal         func_134C80
    ctx->pc = 0x228450u;
    SET_GPR_U32(ctx, 31, 0x228458u);
    ctx->pc = 0x228454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228450u;
            // 0x228454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228458u; }
        if (ctx->pc != 0x228458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228458u; }
        if (ctx->pc != 0x228458u) { return; }
    }
    ctx->pc = 0x228458u;
label_228458:
    // 0x228458: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x228458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x22845c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22845cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228460: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x228460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x228464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228468: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x228468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22846c: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x22846cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x228470: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x228470u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x228474: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x228474u;
    SET_GPR_U32(ctx, 31, 0x22847Cu);
    ctx->pc = 0x228478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228474u;
            // 0x228478: 0x27a90180  addiu       $t1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22847Cu; }
        if (ctx->pc != 0x22847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22847Cu; }
        if (ctx->pc != 0x22847Cu) { return; }
    }
    ctx->pc = 0x22847Cu;
label_22847c:
    // 0x22847c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22847Cu;
    SET_GPR_U32(ctx, 31, 0x228484u);
    ctx->pc = 0x228480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22847Cu;
            // 0x228480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228484u; }
        if (ctx->pc != 0x228484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228484u; }
        if (ctx->pc != 0x228484u) { return; }
    }
    ctx->pc = 0x228484u;
label_228484:
    // 0x228484: 0x0  nop
    ctx->pc = 0x228484u;
    // NOP
    // 0x228488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x228488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22848c: 0x2785941c  addiu       $a1, $gp, -0x6BE4
    ctx->pc = 0x22848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939676));
    // 0x228490: 0xc049c18  jal         func_127060
    ctx->pc = 0x228490u;
    SET_GPR_U32(ctx, 31, 0x228498u);
    ctx->pc = 0x228494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228490u;
            // 0x228494: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228498u; }
        if (ctx->pc != 0x228498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228498u; }
        if (ctx->pc != 0x228498u) { return; }
    }
    ctx->pc = 0x228498u;
label_228498:
    // 0x228498: 0x13c00011  beqz        $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x228498u;
    {
        const bool branch_taken_0x228498 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x228498) {
            ctx->pc = 0x2284E0u;
            goto label_2284e0;
        }
    }
    ctx->pc = 0x2284A0u;
    // 0x2284a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2284a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2284a4: 0x17c20006  bne         $fp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2284A4u;
    {
        const bool branch_taken_0x2284a4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x2284a4) {
            ctx->pc = 0x2284C0u;
            goto label_2284c0;
        }
    }
    ctx->pc = 0x2284ACu;
    // 0x2284ac: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2284acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2284b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2284b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2284b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2284b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2284b8: 0xc089ab4  jal         func_226AD0
    ctx->pc = 0x2284B8u;
    SET_GPR_U32(ctx, 31, 0x2284C0u);
    ctx->pc = 0x2284BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2284B8u;
            // 0x2284bc: 0x27a70190  addiu       $a3, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226AD0u;
    if (runtime->hasFunction(0x226AD0u)) {
        auto targetFn = runtime->lookupFunction(0x226AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284C0u; }
        if (ctx->pc != 0x2284C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawItemIconEffect2__FP11mgCDrawPrimP10mgCTextureP18MENUFORMPARTS_TYPE9mgRect_f__0x226ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284C0u; }
        if (ctx->pc != 0x2284C0u) { return; }
    }
    ctx->pc = 0x2284C0u;
label_2284c0:
    // 0x2284c0: 0x87839340  lh          $v1, -0x6CC0($gp)
    ctx->pc = 0x2284c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939456)));
    // 0x2284c4: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x2284c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2284c8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2284c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2284cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2284ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2284d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2284d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2284d4: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x2284d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2284d8: 0xc04bba8  jal         func_12EEA0
    ctx->pc = 0x2284D8u;
    SET_GPR_U32(ctx, 31, 0x2284E0u);
    ctx->pc = 0x2284DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2284D8u;
            // 0x2284dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEA0u;
    if (runtime->hasFunction(0x12EEA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284E0u; }
        if (ctx->pc != 0x2284E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadCLUT__17mgCTextureManagerFP10mgCTextureP13sceVif1Packet_0x12eea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2284E0u; }
        if (ctx->pc != 0x2284E0u) { return; }
    }
    ctx->pc = 0x2284E0u;
label_2284e0:
    // 0x2284e0: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2284E0u;
    {
        const bool branch_taken_0x2284e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2284e0) {
            ctx->pc = 0x2284ECu;
            goto label_2284ec;
        }
    }
    ctx->pc = 0x2284E8u;
    // 0x2284e8: 0x26940048  addiu       $s4, $s4, 0x48
    ctx->pc = 0x2284e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_2284ec:
    // 0x2284ec: 0x0  nop
    ctx->pc = 0x2284ecu;
    // NOP
    // 0x2284f0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2284f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2284f4: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x2284f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2284f8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2284f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2284fc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x2284fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x228500: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x228500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x228504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228508: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x228508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x22850c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x22850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x228510: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x228510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x228514: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x228514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x228518: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x228518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x22851c: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x22851cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x228520: 0x1440fe88  bnez        $v0, . + 4 + (-0x178 << 2)
    ctx->pc = 0x228520u;
    {
        const bool branch_taken_0x228520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228520u;
            // 0x228524: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228520) {
            ctx->pc = 0x227F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227f44;
        }
    }
    ctx->pc = 0x228528u;
label_228528:
    // 0x228528: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x228528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22852c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228530: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x228530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x228534: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x228534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x228538: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x228538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x22853c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x22853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x228540: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x228540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x228544: 0x28420019  slti        $v0, $v0, 0x19
    ctx->pc = 0x228544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x228548: 0x1440fe76  bnez        $v0, . + 4 + (-0x18A << 2)
    ctx->pc = 0x228548u;
    {
        const bool branch_taken_0x228548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228548) {
            ctx->pc = 0x227F24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227f24;
        }
    }
    ctx->pc = 0x228550u;
label_228550:
    // 0x228550: 0x3c033d8b  lui         $v1, 0x3D8B
    ctx->pc = 0x228550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15755 << 16));
    // 0x228554: 0xc7829344  lwc1        $f2, -0x6CBC($gp)
    ctx->pc = 0x228554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228558: 0x3463de82  ori         $v1, $v1, 0xDE82
    ctx->pc = 0x228558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56962);
    // 0x22855c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22855cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228560: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x228560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x228564: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x228564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x228568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22856c: 0x0  nop
    ctx->pc = 0x22856cu;
    // NOP
    // 0x228570: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x228570u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x228574: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228578: 0x0  nop
    ctx->pc = 0x228578u;
    // NOP
    // 0x22857c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x22857Cu;
    {
        const bool branch_taken_0x22857c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22857Cu;
            // 0x228580: 0xe7819344  swc1        $f1, -0x6CBC($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22857c) {
            ctx->pc = 0x22859Cu;
            goto label_22859c;
        }
    }
    ctx->pc = 0x228584u;
    // 0x228584: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x228584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x228588: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x228588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22858c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22858cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228590: 0x0  nop
    ctx->pc = 0x228590u;
    // NOP
    // 0x228594: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x228594u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x228598: 0xe7809344  swc1        $f0, -0x6CBC($gp)
    ctx->pc = 0x228598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939460), bits); }
label_22859c:
    // 0x22859c: 0xc088070  jal         func_2201C0
    ctx->pc = 0x22859Cu;
    SET_GPR_U32(ctx, 31, 0x2285A4u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2285A4u; }
        if (ctx->pc != 0x2285A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2285A4u; }
        if (ctx->pc != 0x2285A4u) { return; }
    }
    ctx->pc = 0x2285A4u;
label_2285a4:
    // 0x2285a4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2285a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2285a8:
    // 0x2285a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2285a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2285ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2285acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2285b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2285b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2285b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2285b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2285b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2285b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2285bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2285bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2285c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2285c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2285c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2285c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2285c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2285c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2285cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2285CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2285D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2285CCu;
            // 0x2285d0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2285D4u;
}
