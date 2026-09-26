#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: setImageTag__FPUiPviii
// Address: 0x29ba30 - 0x29bca8
void setImageTag__FPUiPviii_0x29ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setImageTag__FPUiPviii_0x29ba30");
#endif

    switch (ctx->pc) {
        case 0x29ba90u: goto label_29ba90;
        case 0x29ba98u: goto label_29ba98;
        case 0x29baacu: goto label_29baac;
        case 0x29baccu: goto label_29bacc;
        case 0x29badcu: goto label_29badc;
        case 0x29bb18u: goto label_29bb18;
        case 0x29bb30u: goto label_29bb30;
        case 0x29bb38u: goto label_29bb38;
        case 0x29bb50u: goto label_29bb50;
        case 0x29bb60u: goto label_29bb60;
        case 0x29bb74u: goto label_29bb74;
        case 0x29bb84u: goto label_29bb84;
        case 0x29bbacu: goto label_29bbac;
        case 0x29bbbcu: goto label_29bbbc;
        case 0x29bbc4u: goto label_29bbc4;
        case 0x29bbd0u: goto label_29bbd0;
        case 0x29bc04u: goto label_29bc04;
        case 0x29bc50u: goto label_29bc50;
        case 0x29bc60u: goto label_29bc60;
        case 0x29bc70u: goto label_29bc70;
        case 0x29bc78u: goto label_29bc78;
        case 0x29bc80u: goto label_29bc80;
        default: break;
    }

    ctx->pc = 0x29ba30u;

    // 0x29ba30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x29ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x29ba34: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x29ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x29ba38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29ba3c: 0x24424260  addiu       $v0, $v0, 0x4260
    ctx->pc = 0x29ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16992));
    // 0x29ba40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29ba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29ba44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29ba48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29ba4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29ba50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29ba54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ba54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ba58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x29ba58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ba60: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x29ba60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29ba64: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x29ba64u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29ba68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29ba68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba6c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x29ba6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba70: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x29ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x29ba74: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x29ba74u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x29ba78: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x29ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29ba7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29ba7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29ba80: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x29ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x29ba84: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x29ba84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29ba88: 0xc04198c  jal         func_106630
    ctx->pc = 0x29BA88u;
    SET_GPR_U32(ctx, 31, 0x29BA90u);
    ctx->pc = 0x29BA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA88u;
            // 0x29ba8c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106630u;
    if (runtime->hasFunction(0x106630u)) {
        auto targetFn = runtime->lookupFunction(0x106630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BA90u; }
        if (ctx->pc != 0x29BA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x106630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BA90u; }
        if (ctx->pc != 0x29BA90u) { return; }
    }
    ctx->pc = 0x29BA90u;
label_29ba90:
    // 0x29ba90: 0xc041990  jal         func_106640
    ctx->pc = 0x29BA90u;
    SET_GPR_U32(ctx, 31, 0x29BA98u);
    ctx->pc = 0x29BA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA90u;
            // 0x29ba94: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106640u;
    if (runtime->hasFunction(0x106640u)) {
        auto targetFn = runtime->lookupFunction(0x106640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BA98u; }
        if (ctx->pc != 0x29BA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReset_0x106640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BA98u; }
        if (ctx->pc != 0x29BA98u) { return; }
    }
    ctx->pc = 0x29BA98u;
label_29ba98:
    // 0x29ba98: 0x8f8598e8  lw          $a1, -0x6718($gp)
    ctx->pc = 0x29ba98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940904)));
    // 0x29ba9c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x29ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x29baa0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x29baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x29baa4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x29BAA4u;
    SET_GPR_U32(ctx, 31, 0x29BAACu);
    ctx->pc = 0x29BAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAA4u;
            // 0x29baa8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BAACu; }
        if (ctx->pc != 0x29BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BAACu; }
        if (ctx->pc != 0x29BAACu) { return; }
    }
    ctx->pc = 0x29BAACu;
label_29baac:
    // 0x29baac: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x29baacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29bab0: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x29bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x29bab4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29bab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29babc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29babcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29bac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bac4: 0xc0419aa  jal         func_1066A8
    ctx->pc = 0x29BAC4u;
    SET_GPR_U32(ctx, 31, 0x29BACCu);
    ctx->pc = 0x29BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAC4u;
            // 0x29bac8: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066A8u;
    if (runtime->hasFunction(0x1066A8u)) {
        auto targetFn = runtime->lookupFunction(0x1066A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BACCu; }
        if (ctx->pc != 0x29BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x1066a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BACCu; }
        if (ctx->pc != 0x29BACCu) { return; }
    }
    ctx->pc = 0x29BACCu;
label_29bacc:
    // 0x29bacc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x29baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29bad0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x29bad0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bad4: 0xc041a12  jal         func_106848
    ctx->pc = 0x29BAD4u;
    SET_GPR_U32(ctx, 31, 0x29BADCu);
    ctx->pc = 0x29BAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAD4u;
            // 0x29bad8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BADCu; }
        if (ctx->pc != 0x29BADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BADCu; }
        if (ctx->pc != 0x29BADCu) { return; }
    }
    ctx->pc = 0x29BADCu;
label_29badc:
    // 0x29badc: 0xdfa200b8  ld          $v0, 0xB8($sp)
    ctx->pc = 0x29badcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x29bae0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bae4: 0x97a300b8  lhu         $v1, 0xB8($sp)
    ctx->pc = 0x29bae4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x29bae8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x29baec: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x29baecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x29baf0: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x29baf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x29baf4: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x29baf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x29baf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29baf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29bafc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29bafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29bb00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29bb00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29bb04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29bb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29bb08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29bb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29bb0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29bb10: 0xc041a4c  jal         func_106930
    ctx->pc = 0x29BB10u;
    SET_GPR_U32(ctx, 31, 0x29BB18u);
    ctx->pc = 0x29BB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB10u;
            // 0x29bb14: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB18u; }
        if (ctx->pc != 0x29BB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB18u; }
        if (ctx->pc != 0x29BB18u) { return; }
    }
    ctx->pc = 0x29BB18u;
label_29bb18:
    // 0x29bb18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29bb1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bb20: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x29bb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29bb24: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x29bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x29bb28: 0xc041a4c  jal         func_106930
    ctx->pc = 0x29BB28u;
    SET_GPR_U32(ctx, 31, 0x29BB30u);
    ctx->pc = 0x29BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB28u;
            // 0x29bb2c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB30u; }
        if (ctx->pc != 0x29BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB30u; }
        if (ctx->pc != 0x29BB30u) { return; }
    }
    ctx->pc = 0x29BB30u;
label_29bb30:
    // 0x29bb30: 0xc041a18  jal         func_106860
    ctx->pc = 0x29BB30u;
    SET_GPR_U32(ctx, 31, 0x29BB38u);
    ctx->pc = 0x29BB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB30u;
            // 0x29bb34: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106860u;
    if (runtime->hasFunction(0x106860u)) {
        auto targetFn = runtime->lookupFunction(0x106860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB38u; }
        if (ctx->pc != 0x29BB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x106860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB38u; }
        if (ctx->pc != 0x29BB38u) { return; }
    }
    ctx->pc = 0x29BB38u;
label_29bb38:
    // 0x29bb38: 0x12b103  sra         $s6, $s2, 4
    ctx->pc = 0x29bb38u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 18), 4));
    // 0x29bb3c: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x29bb3cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x29bb40: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x29bb40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x29bb44: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x29BB44u;
    {
        const bool branch_taken_0x29bb44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB44u;
            // 0x29bb48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb44) {
            ctx->pc = 0x29BC28u;
            goto label_29bc28;
        }
    }
    ctx->pc = 0x29BB4Cu;
    // 0x29bb4c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29bb4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bb50:
    // 0x29bb50: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x29bb50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29bb54: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x29BB54u;
    {
        const bool branch_taken_0x29bb54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB54u;
            // 0x29bb58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb54) {
            ctx->pc = 0x29BC18u;
            goto label_29bc18;
        }
    }
    ctx->pc = 0x29BB5Cu;
    // 0x29bb5c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29bb5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29bb60:
    // 0x29bb60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bb64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29bb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29bb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb6c: 0xc0419aa  jal         func_1066A8
    ctx->pc = 0x29BB6Cu;
    SET_GPR_U32(ctx, 31, 0x29BB74u);
    ctx->pc = 0x29BB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB6Cu;
            // 0x29bb70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066A8u;
    if (runtime->hasFunction(0x1066A8u)) {
        auto targetFn = runtime->lookupFunction(0x1066A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB74u; }
        if (ctx->pc != 0x29BB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x1066a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB74u; }
        if (ctx->pc != 0x29BB74u) { return; }
    }
    ctx->pc = 0x29BB74u;
label_29bb74:
    // 0x29bb74: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x29bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29bb78: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x29bb78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bb7c: 0xc041a12  jal         func_106848
    ctx->pc = 0x29BB7Cu;
    SET_GPR_U32(ctx, 31, 0x29BB84u);
    ctx->pc = 0x29BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB7Cu;
            // 0x29bb80: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB84u; }
        if (ctx->pc != 0x29BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB84u; }
        if (ctx->pc != 0x29BB84u) { return; }
    }
    ctx->pc = 0x29BB84u;
label_29bb84:
    // 0x29bb84: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x29bb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29bb88: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x29bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x29bb8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29bb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29bb90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29bb94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29bb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29bb98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29bb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29bb9c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x29bb9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29bba0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bba4: 0xc041a4c  jal         func_106930
    ctx->pc = 0x29BBA4u;
    SET_GPR_U32(ctx, 31, 0x29BBACu);
    ctx->pc = 0x29BBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBA4u;
            // 0x29bba8: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBACu; }
        if (ctx->pc != 0x29BBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBACu; }
        if (ctx->pc != 0x29BBACu) { return; }
    }
    ctx->pc = 0x29BBACu;
label_29bbac:
    // 0x29bbac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bbb0: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x29bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x29bbb4: 0xc041a4c  jal         func_106930
    ctx->pc = 0x29BBB4u;
    SET_GPR_U32(ctx, 31, 0x29BBBCu);
    ctx->pc = 0x29BBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBB4u;
            // 0x29bbb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBBCu; }
        if (ctx->pc != 0x29BBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBBCu; }
        if (ctx->pc != 0x29BBBCu) { return; }
    }
    ctx->pc = 0x29BBBCu;
label_29bbbc:
    // 0x29bbbc: 0xc041a18  jal         func_106860
    ctx->pc = 0x29BBBCu;
    SET_GPR_U32(ctx, 31, 0x29BBC4u);
    ctx->pc = 0x29BBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBBCu;
            // 0x29bbc0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106860u;
    if (runtime->hasFunction(0x106860u)) {
        auto targetFn = runtime->lookupFunction(0x106860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBC4u; }
        if (ctx->pc != 0x29BBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x106860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBC4u; }
        if (ctx->pc != 0x29BBC4u) { return; }
    }
    ctx->pc = 0x29BBC4u;
label_29bbc4:
    // 0x29bbc4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bbc8: 0xc041a0c  jal         func_106830
    ctx->pc = 0x29BBC8u;
    SET_GPR_U32(ctx, 31, 0x29BBD0u);
    ctx->pc = 0x29BBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBC8u;
            // 0x29bbcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106830u;
    if (runtime->hasFunction(0x106830u)) {
        auto targetFn = runtime->lookupFunction(0x106830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBD0u; }
        if (ctx->pc != 0x29BBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReserve_0x106830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBD0u; }
        if (ctx->pc != 0x29BBD0u) { return; }
    }
    ctx->pc = 0x29BBD0u;
label_29bbd0:
    // 0x29bbd0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x29bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x29bbd4: 0x10293c  dsll32      $a1, $s0, 4
    ctx->pc = 0x29bbd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 4));
    // 0x29bbd8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x29bbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29bbdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29bbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29bbe0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x29bbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bbe4: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x29bbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x29bbe8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x29bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29bbec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bbf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29bbf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbf4: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x29bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x29bbf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29bbf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbfc: 0xc0419c8  jal         func_106720
    ctx->pc = 0x29BBFCu;
    SET_GPR_U32(ctx, 31, 0x29BC04u);
    ctx->pc = 0x29BC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBFCu;
            // 0x29bc00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106720u;
    if (runtime->hasFunction(0x106720u)) {
        auto targetFn = runtime->lookupFunction(0x106720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC04u; }
        if (ctx->pc != 0x29BC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkRef_0x106720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC04u; }
        if (ctx->pc != 0x29BC04u) { return; }
    }
    ctx->pc = 0x29BC04u;
label_29bc04:
    // 0x29bc04: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29bc04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29bc08: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x29bc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x29bc0c: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x29bc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29bc10: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x29BC10u;
    {
        const bool branch_taken_0x29bc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC10u;
            // 0x29bc14: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc10) {
            ctx->pc = 0x29BB60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29bb60;
        }
    }
    ctx->pc = 0x29BC18u;
label_29bc18:
    // 0x29bc18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29bc18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29bc1c: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x29bc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x29bc20: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x29BC20u;
    {
        const bool branch_taken_0x29bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC20u;
            // 0x29bc24: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc20) {
            ctx->pc = 0x29BB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29bb50;
        }
    }
    ctx->pc = 0x29BC28u;
label_29bc28:
    // 0x29bc28: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x29bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x29bc2c: 0x24424270  addiu       $v0, $v0, 0x4270
    ctx->pc = 0x29bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17008));
    // 0x29bc30: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x29bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29bc34: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29bc34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bc38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bc3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29bc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29bc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29bc44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc48: 0xc0419ee  jal         func_1067B8
    ctx->pc = 0x29BC48u;
    SET_GPR_U32(ctx, 31, 0x29BC50u);
    ctx->pc = 0x29BC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC48u;
            // 0x29bc4c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1067B8u;
    if (runtime->hasFunction(0x1067B8u)) {
        auto targetFn = runtime->lookupFunction(0x1067B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC50u; }
        if (ctx->pc != 0x29BC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x1067b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC50u; }
        if (ctx->pc != 0x29BC50u) { return; }
    }
    ctx->pc = 0x29BC50u;
label_29bc50:
    // 0x29bc50: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x29bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29bc54: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x29bc54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bc58: 0xc041a12  jal         func_106848
    ctx->pc = 0x29BC58u;
    SET_GPR_U32(ctx, 31, 0x29BC60u);
    ctx->pc = 0x29BC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC58u;
            // 0x29bc5c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC60u; }
        if (ctx->pc != 0x29BC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC60u; }
        if (ctx->pc != 0x29BC60u) { return; }
    }
    ctx->pc = 0x29BC60u;
label_29bc60:
    // 0x29bc60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x29bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29bc64: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29bc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29bc68: 0xc041a4c  jal         func_106930
    ctx->pc = 0x29BC68u;
    SET_GPR_U32(ctx, 31, 0x29BC70u);
    ctx->pc = 0x29BC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC68u;
            // 0x29bc6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC70u; }
        if (ctx->pc != 0x29BC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC70u; }
        if (ctx->pc != 0x29BC70u) { return; }
    }
    ctx->pc = 0x29BC70u;
label_29bc70:
    // 0x29bc70: 0xc041a18  jal         func_106860
    ctx->pc = 0x29BC70u;
    SET_GPR_U32(ctx, 31, 0x29BC78u);
    ctx->pc = 0x29BC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC70u;
            // 0x29bc74: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106860u;
    if (runtime->hasFunction(0x106860u)) {
        auto targetFn = runtime->lookupFunction(0x106860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC78u; }
        if (ctx->pc != 0x29BC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x106860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC78u; }
        if (ctx->pc != 0x29BC78u) { return; }
    }
    ctx->pc = 0x29BC78u;
label_29bc78:
    // 0x29bc78: 0xc041994  jal         func_106650
    ctx->pc = 0x29BC78u;
    SET_GPR_U32(ctx, 31, 0x29BC80u);
    ctx->pc = 0x29BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC78u;
            // 0x29bc7c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106650u;
    if (runtime->hasFunction(0x106650u)) {
        auto targetFn = runtime->lookupFunction(0x106650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC80u; }
        if (ctx->pc != 0x29BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkTerminate_0x106650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BC80u; }
        if (ctx->pc != 0x29BC80u) { return; }
    }
    ctx->pc = 0x29BC80u;
label_29bc80:
    // 0x29bc80: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29bc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29bc84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29bc84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29bc88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29bc88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29bc8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29bc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bc90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29bc90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bc94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29bc94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bc98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29bc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bc9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29bc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bca0: 0x3e00008  jr          $ra
    ctx->pc = 0x29BCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCA0u;
            // 0x29bca4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BCA8u;
}
