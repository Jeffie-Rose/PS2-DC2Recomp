#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDivSprite4__FP11mgCDrawPrim9mgRect<i>P10mgCTexturePiii
// Address: 0x17cb20 - 0x17ce40
void DrawDivSprite4__FP11mgCDrawPrim9mgRect_i_P10mgCTexturePiii_0x17cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDivSprite4__FP11mgCDrawPrim9mgRect_i_P10mgCTexturePiii_0x17cb20");
#endif

    switch (ctx->pc) {
        case 0x17cb9cu: goto label_17cb9c;
        case 0x17cba8u: goto label_17cba8;
        case 0x17cbb4u: goto label_17cbb4;
        case 0x17cbccu: goto label_17cbcc;
        case 0x17cbd4u: goto label_17cbd4;
        case 0x17cbecu: goto label_17cbec;
        case 0x17cc58u: goto label_17cc58;
        case 0x17cc94u: goto label_17cc94;
        case 0x17ccccu: goto label_17cccc;
        case 0x17ce08u: goto label_17ce08;
        case 0x17ce10u: goto label_17ce10;
        default: break;
    }

    ctx->pc = 0x17cb20u;

    // 0x17cb20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x17cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x17cb24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17cb28: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x17cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17cb2c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17cb30: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17cb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17cb34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17cb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17cb38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17cb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17cb3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17cb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17cb40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17cb44: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x17cb44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17cb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17cb4c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x17cb4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17cb54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17cb54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17cb5c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x17cb5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17cb60: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x17cb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb64: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x17cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x17cb68: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x17cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x17cb6c: 0x8f86879c  lw          $a2, -0x7864($gp)
    ctx->pc = 0x17cb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x17cb70: 0x8f878798  lw          $a3, -0x7868($gp)
    ctx->pc = 0x17cb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x17cb74: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x17cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x17cb78: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x17cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x17cb7c: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x17cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x17cb80: 0x6b100  sll         $s6, $a2, 4
    ctx->pc = 0x17cb80u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x17cb84: 0x7b900  sll         $s7, $a3, 4
    ctx->pc = 0x17cb84u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x17cb88: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x17cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x17cb8c: 0xb7f021  addu        $fp, $a1, $s7
    ctx->pc = 0x17cb8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x17cb90: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x17cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x17cb94: 0xc04d1b4  jal         func_1346D0
    ctx->pc = 0x17CB94u;
    SET_GPR_U32(ctx, 31, 0x17CB9Cu);
    ctx->pc = 0x17CB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB94u;
            // 0x17cb98: 0x768821  addu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1346D0u;
    if (runtime->hasFunction(0x1346D0u)) {
        auto targetFn = runtime->lookupFunction(0x1346D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CB9Cu; }
        if (ctx->pc != 0x17CB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin2__11mgCDrawPrimFv_0x1346d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CB9Cu; }
        if (ctx->pc != 0x17CB9Cu) { return; }
    }
    ctx->pc = 0x17CB9Cu;
label_17cb9c:
    // 0x17cb9c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x17cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17cba0: 0xc04d218  jal         func_134860
    ctx->pc = 0x17CBA0u;
    SET_GPR_U32(ctx, 31, 0x17CBA8u);
    ctx->pc = 0x17CBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBA0u;
            // 0x17cba4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134860u;
    if (runtime->hasFunction(0x134860u)) {
        auto targetFn = runtime->lookupFunction(0x134860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBA8u; }
        if (ctx->pc != 0x17CBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFi_0x134860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBA8u; }
        if (ctx->pc != 0x17CBA8u) { return; }
    }
    ctx->pc = 0x17CBA8u;
label_17cba8:
    // 0x17cba8: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x17cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17cbac: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x17CBACu;
    SET_GPR_U32(ctx, 31, 0x17CBB4u);
    ctx->pc = 0x17CBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBACu;
            // 0x17cbb0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBB4u; }
        if (ctx->pc != 0x17CBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBB4u; }
        if (ctx->pc != 0x17CBB4u) { return; }
    }
    ctx->pc = 0x17CBB4u;
label_17cbb4:
    // 0x17cbb4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x17cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17cbb8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x17cbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17cbbc: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x17cbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17cbc0: 0x8e48000c  lw          $t0, 0xC($s2)
    ctx->pc = 0x17cbc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17cbc4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17CBC4u;
    SET_GPR_U32(ctx, 31, 0x17CBCCu);
    ctx->pc = 0x17CBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBC4u;
            // 0x17cbc8: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBCCu; }
        if (ctx->pc != 0x17CBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBCCu; }
        if (ctx->pc != 0x17CBCCu) { return; }
    }
    ctx->pc = 0x17CBCCu;
label_17cbcc:
    // 0x17cbcc: 0xc04d250  jal         func_134940
    ctx->pc = 0x17CBCCu;
    SET_GPR_U32(ctx, 31, 0x17CBD4u);
    ctx->pc = 0x17CBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBCCu;
            // 0x17cbd0: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBD4u; }
        if (ctx->pc != 0x17CBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBD4u; }
        if (ctx->pc != 0x17CBD4u) { return; }
    }
    ctx->pc = 0x17CBD4u;
label_17cbd4:
    // 0x17cbd4: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x17cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17cbd8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17cbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17cbdc: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x17cbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x17cbe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17cbe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbe4: 0xc04d224  jal         func_134890
    ctx->pc = 0x17CBE4u;
    SET_GPR_U32(ctx, 31, 0x17CBECu);
    ctx->pc = 0x17CBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBE4u;
            // 0x17cbe8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134890u;
    if (runtime->hasFunction(0x134890u)) {
        auto targetFn = runtime->lookupFunction(0x134890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBECu; }
        if (ctx->pc != 0x17CBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFiUiUii_0x134890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBECu; }
        if (ctx->pc != 0x17CBECu) { return; }
    }
    ctx->pc = 0x17CBECu;
label_17cbec:
    // 0x17cbec: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17cbf0: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x17cbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x17cbf4: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x17cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x17cbf8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x17cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x17cbfc: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x17cbfcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cc00: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x17cc00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17cc04: 0x24c60710  addiu       $a2, $a2, 0x710
    ctx->pc = 0x17cc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1808));
    // 0x17cc08: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x17cc08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17cc0c: 0x24840720  addiu       $a0, $a0, 0x720
    ctx->pc = 0x17cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1824));
    // 0x17cc10: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x17cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17cc14: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x17cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17cc18: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x17cc18u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x17cc1c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x17cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x17cc20: 0xafb300d8  sw          $s3, 0xD8($sp)
    ctx->pc = 0x17cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 19));
    // 0x17cc24: 0x24420730  addiu       $v0, $v0, 0x730
    ctx->pc = 0x17cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
    // 0x17cc28: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x17cc28u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17cc2c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x17cc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x17cc30: 0xafb300e8  sw          $s3, 0xE8($sp)
    ctx->pc = 0x17cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 19));
    // 0x17cc34: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x17cc34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cc38: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x17cc38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x17cc3c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17cc3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cc40: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x17cc40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x17cc44: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17cc48: 0x579021  addu        $s2, $v0, $s7
    ctx->pc = 0x17cc48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x17cc4c: 0x25e082a  slt         $at, $s2, $fp
    ctx->pc = 0x17cc4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x17cc50: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x17CC50u;
    {
        const bool branch_taken_0x17cc50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cc50) {
            ctx->pc = 0x17CDFCu;
            goto label_17cdfc;
        }
    }
    ctx->pc = 0x17CC58u;
label_17cc58:
    // 0x17cc58: 0x26430200  addiu       $v1, $s2, 0x200
    ctx->pc = 0x17cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x17cc5c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CC5Cu;
    {
        const bool branch_taken_0x17cc5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17CC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC5Cu;
            // 0x17cc60: 0x31243  sra         $v0, $v1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc5c) {
            ctx->pc = 0x17CC6Cu;
            goto label_17cc6c;
        }
    }
    ctx->pc = 0x17CC64u;
    // 0x17cc64: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x17cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x17cc68: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x17cc68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
label_17cc6c:
    // 0x17cc6c: 0x2a240  sll         $s4, $v0, 9
    ctx->pc = 0x17cc6cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x17cc70: 0x3d4082a  slt         $at, $fp, $s4
    ctx->pc = 0x17cc70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x17cc74: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CC74u;
    {
        const bool branch_taken_0x17cc74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cc74) {
            ctx->pc = 0x17CC80u;
            goto label_17cc80;
        }
    }
    ctx->pc = 0x17CC7Cu;
    // 0x17cc7c: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x17cc7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_17cc80:
    // 0x17cc80: 0x8fb300a0  lw          $s3, 0xA0($sp)
    ctx->pc = 0x17cc80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17cc84: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x17cc84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc88: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x17cc88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17cc8c: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x17CC8Cu;
    {
        const bool branch_taken_0x17cc8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cc8c) {
            ctx->pc = 0x17CDF0u;
            goto label_17cdf0;
        }
    }
    ctx->pc = 0x17CC94u;
label_17cc94:
    // 0x17cc94: 0x0  nop
    ctx->pc = 0x17cc94u;
    // NOP
    // 0x17cc98: 0x26630200  addiu       $v1, $s3, 0x200
    ctx->pc = 0x17cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x17cc9c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CC9Cu;
    {
        const bool branch_taken_0x17cc9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC9Cu;
            // 0x17cca0: 0x31243  sra         $v0, $v1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc9c) {
            ctx->pc = 0x17CCACu;
            goto label_17ccac;
        }
    }
    ctx->pc = 0x17CCA4u;
    // 0x17cca4: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x17cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x17cca8: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x17cca8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
label_17ccac:
    // 0x17ccac: 0x2aa40  sll         $s5, $v0, 9
    ctx->pc = 0x17ccacu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x17ccb0: 0x235082a  slt         $at, $s1, $s5
    ctx->pc = 0x17ccb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x17ccb4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CCB4u;
    {
        const bool branch_taken_0x17ccb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ccb4) {
            ctx->pc = 0x17CCC0u;
            goto label_17ccc0;
        }
    }
    ctx->pc = 0x17CCBCu;
    // 0x17ccbc: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x17ccbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17ccc0:
    // 0x17ccc0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x17ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17ccc4: 0xc04d2c0  jal         func_134B00
    ctx->pc = 0x17CCC4u;
    SET_GPR_U32(ctx, 31, 0x17CCCCu);
    ctx->pc = 0x17CCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCC4u;
            // 0x17ccc8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B00u;
    if (runtime->hasFunction(0x134B00u)) {
        auto targetFn = runtime->lookupFunction(0x134B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCCCu; }
        if (ctx->pc != 0x17CCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DirectData__11mgCDrawPrimFi_0x134b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCCCu; }
        if (ctx->pc != 0x17CCCCu) { return; }
    }
    ctx->pc = 0x17CCCCu;
label_17cccc:
    // 0x17cccc: 0x2571823  subu        $v1, $s2, $s7
    ctx->pc = 0x17ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x17ccd0: 0x2762023  subu        $a0, $s3, $s6
    ctx->pc = 0x17ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x17ccd4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x17ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x17ccd8: 0x27a600d4  addiu       $a2, $sp, 0xD4
    ctx->pc = 0x17ccd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x17ccdc: 0x2971823  subu        $v1, $s4, $s7
    ctx->pc = 0x17ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x17cce0: 0xafa400f4  sw          $a0, 0xF4($sp)
    ctx->pc = 0x17cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 4));
    // 0x17cce4: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x17cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x17cce8: 0x2b62023  subu        $a0, $s5, $s6
    ctx->pc = 0x17cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x17ccec: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x17ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x17ccf0: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x17ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
    // 0x17ccf4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x17ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x17ccf8: 0x27a700e4  addiu       $a3, $sp, 0xE4
    ctx->pc = 0x17ccf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x17ccfc: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x17ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x17cd00: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x17cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
    // 0x17cd04: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x17cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x17cd08: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x17cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17cd0c: 0xacf50000  sw          $s5, 0x0($a3)
    ctx->pc = 0x17cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
    // 0x17cd10: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17cd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17cd14: 0x78af0000  lq          $t7, 0x0($a1)
    ctx->pc = 0x17cd14u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17cd18: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x17cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17cd1c: 0x27b800e0  addiu       $t8, $sp, 0xE0
    ctx->pc = 0x17cd1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17cd20: 0x2507023  subu        $t6, $s2, $s0
    ctx->pc = 0x17cd20u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x17cd24: 0x2906823  subu        $t5, $s4, $s0
    ctx->pc = 0x17cd24u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x17cd28: 0x2706021  addu        $t4, $s3, $s0
    ctx->pc = 0x17cd28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x17cd2c: 0x2b05821  addu        $t3, $s5, $s0
    ctx->pc = 0x17cd2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x17cd30: 0x2705023  subu        $t2, $s3, $s0
    ctx->pc = 0x17cd30u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x17cd34: 0x2b04823  subu        $t1, $s5, $s0
    ctx->pc = 0x17cd34u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x17cd38: 0x2b1402a  slt         $t0, $s5, $s1
    ctx->pc = 0x17cd38u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17cd3c: 0x7c4f0000  sq          $t7, 0x0($v0)
    ctx->pc = 0x17cd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 15));
    // 0x17cd40: 0x788f0000  lq          $t7, 0x0($a0)
    ctx->pc = 0x17cd40u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cd44: 0x7c4f0010  sq          $t7, 0x10($v0)
    ctx->pc = 0x17cd44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 15));
    // 0x17cd48: 0x786f0000  lq          $t7, 0x0($v1)
    ctx->pc = 0x17cd48u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cd4c: 0x7c4f0020  sq          $t7, 0x20($v0)
    ctx->pc = 0x17cd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 15));
    // 0x17cd50: 0x7b0f0000  lq          $t7, 0x0($t8)
    ctx->pc = 0x17cd50u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x17cd54: 0x7c4f0030  sq          $t7, 0x30($v0)
    ctx->pc = 0x17cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 15));
    // 0x17cd58: 0xafae00d0  sw          $t6, 0xD0($sp)
    ctx->pc = 0x17cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 14));
    // 0x17cd5c: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x17cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
    // 0x17cd60: 0xafad00e0  sw          $t5, 0xE0($sp)
    ctx->pc = 0x17cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 13));
    // 0x17cd64: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x17cd64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd68: 0xacf50000  sw          $s5, 0x0($a3)
    ctx->pc = 0x17cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
    // 0x17cd6c: 0x78ad0000  lq          $t5, 0x0($a1)
    ctx->pc = 0x17cd6cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17cd70: 0x7c4d0040  sq          $t5, 0x40($v0)
    ctx->pc = 0x17cd70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 13));
    // 0x17cd74: 0x788d0000  lq          $t5, 0x0($a0)
    ctx->pc = 0x17cd74u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cd78: 0x7c4d0050  sq          $t5, 0x50($v0)
    ctx->pc = 0x17cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 13));
    // 0x17cd7c: 0x786d0000  lq          $t5, 0x0($v1)
    ctx->pc = 0x17cd7cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cd80: 0x7c4d0060  sq          $t5, 0x60($v0)
    ctx->pc = 0x17cd80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 13));
    // 0x17cd84: 0x7b0d0000  lq          $t5, 0x0($t8)
    ctx->pc = 0x17cd84u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x17cd88: 0x7c4d0070  sq          $t5, 0x70($v0)
    ctx->pc = 0x17cd88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 13));
    // 0x17cd8c: 0xafb200d0  sw          $s2, 0xD0($sp)
    ctx->pc = 0x17cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 18));
    // 0x17cd90: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x17cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x17cd94: 0xafb400e0  sw          $s4, 0xE0($sp)
    ctx->pc = 0x17cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 20));
    // 0x17cd98: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x17cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x17cd9c: 0x78ab0000  lq          $t3, 0x0($a1)
    ctx->pc = 0x17cd9cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17cda0: 0x7c4b0080  sq          $t3, 0x80($v0)
    ctx->pc = 0x17cda0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 11));
    // 0x17cda4: 0x788b0000  lq          $t3, 0x0($a0)
    ctx->pc = 0x17cda4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cda8: 0x7c4b0090  sq          $t3, 0x90($v0)
    ctx->pc = 0x17cda8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 11));
    // 0x17cdac: 0x786b0000  lq          $t3, 0x0($v1)
    ctx->pc = 0x17cdacu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cdb0: 0x7c4b00a0  sq          $t3, 0xA0($v0)
    ctx->pc = 0x17cdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 160), GPR_VEC(ctx, 11));
    // 0x17cdb4: 0x7b0b0000  lq          $t3, 0x0($t8)
    ctx->pc = 0x17cdb4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x17cdb8: 0x7c4b00b0  sq          $t3, 0xB0($v0)
    ctx->pc = 0x17cdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), GPR_VEC(ctx, 11));
    // 0x17cdbc: 0xafb200d0  sw          $s2, 0xD0($sp)
    ctx->pc = 0x17cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 18));
    // 0x17cdc0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x17cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x17cdc4: 0xafb400e0  sw          $s4, 0xE0($sp)
    ctx->pc = 0x17cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 20));
    // 0x17cdc8: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x17cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x17cdcc: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x17cdccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17cdd0: 0x7c4500c0  sq          $a1, 0xC0($v0)
    ctx->pc = 0x17cdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 5));
    // 0x17cdd4: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x17cdd4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cdd8: 0x7c4400d0  sq          $a0, 0xD0($v0)
    ctx->pc = 0x17cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 208), GPR_VEC(ctx, 4));
    // 0x17cddc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x17cddcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cde0: 0x7c4300e0  sq          $v1, 0xE0($v0)
    ctx->pc = 0x17cde0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 224), GPR_VEC(ctx, 3));
    // 0x17cde4: 0x7b030000  lq          $v1, 0x0($t8)
    ctx->pc = 0x17cde4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x17cde8: 0x1500ffaa  bnez        $t0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x17CDE8u;
    {
        const bool branch_taken_0x17cde8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDE8u;
            // 0x17cdec: 0x7c4300f0  sq          $v1, 0xF0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 240), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cde8) {
            ctx->pc = 0x17CC94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17cc94;
        }
    }
    ctx->pc = 0x17CDF0u;
label_17cdf0:
    // 0x17cdf0: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x17cdf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x17cdf4: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x17CDF4u;
    {
        const bool branch_taken_0x17cdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDF4u;
            // 0x17cdf8: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdf4) {
            ctx->pc = 0x17CC58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17cc58;
        }
    }
    ctx->pc = 0x17CDFCu;
label_17cdfc:
    // 0x17cdfc: 0x0  nop
    ctx->pc = 0x17cdfcu;
    // NOP
    // 0x17ce00: 0xc04d250  jal         func_134940
    ctx->pc = 0x17CE00u;
    SET_GPR_U32(ctx, 31, 0x17CE08u);
    ctx->pc = 0x17CE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE00u;
            // 0x17ce04: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE08u; }
        if (ctx->pc != 0x17CE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE08u; }
        if (ctx->pc != 0x17CE08u) { return; }
    }
    ctx->pc = 0x17CE08u;
label_17ce08:
    // 0x17ce08: 0xc04d288  jal         func_134A20
    ctx->pc = 0x17CE08u;
    SET_GPR_U32(ctx, 31, 0x17CE10u);
    ctx->pc = 0x17CE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE08u;
            // 0x17ce0c: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A20u;
    if (runtime->hasFunction(0x134A20u)) {
        auto targetFn = runtime->lookupFunction(0x134A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE10u; }
        if (ctx->pc != 0x17CE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End2__11mgCDrawPrimFv_0x134a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE10u; }
        if (ctx->pc != 0x17CE10u) { return; }
    }
    ctx->pc = 0x17CE10u;
label_17ce10:
    // 0x17ce10: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17ce10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17ce14: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17ce14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17ce18: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17ce18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17ce1c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17ce1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ce20: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17ce20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ce24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17ce24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ce28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17ce28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ce2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ce2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ce30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ce30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ce34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ce34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ce38: 0x3e00008  jr          $ra
    ctx->pc = 0x17CE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE38u;
            // 0x17ce3c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CE40u;
}
