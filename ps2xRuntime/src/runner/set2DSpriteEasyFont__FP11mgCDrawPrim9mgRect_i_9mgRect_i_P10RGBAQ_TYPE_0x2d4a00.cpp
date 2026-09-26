#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect<i>9mgRect<i>P10RGBAQ_TYPE
// Address: 0x2d4a00 - 0x2d4b38
void set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00");
#endif

    switch (ctx->pc) {
        case 0x2d4ac8u: goto label_2d4ac8;
        case 0x2d4ad8u: goto label_2d4ad8;
        case 0x2d4aecu: goto label_2d4aec;
        case 0x2d4afcu: goto label_2d4afc;
        case 0x2d4b10u: goto label_2d4b10;
        default: break;
    }

    ctx->pc = 0x2d4a00u;

    // 0x2d4a00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d4a04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d4a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d4a08: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x2d4a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d4a0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d4a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d4a10: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2d4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d4a14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d4a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d4a18: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x2d4a18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2d4a1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d4a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d4a20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d4a20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d4a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d4a28: 0x27b40088  addiu       $s4, $sp, 0x88
    ctx->pc = 0x2d4a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2d4a2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d4a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d4a30: 0x27b3008c  addiu       $s3, $sp, 0x8C
    ctx->pc = 0x2d4a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2d4a34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4a38: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x2d4a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2d4a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d4a40: 0x27b1009c  addiu       $s1, $sp, 0x9C
    ctx->pc = 0x2d4a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2d4a44: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2d4a44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4a48: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x2d4a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2d4a4c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x2d4a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x2d4a50: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2d4a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4a54: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d4a54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d4a58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4a5c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d4a60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d4a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d4a68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d4a6c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2d4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d4a70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d4a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d4a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2d4a78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4a7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4a80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d4a84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d4a88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4a8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2d4a90: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2d4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d4a94: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2d4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d4a98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a9c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2d4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2d4aa0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d4aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d4aa4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d4aa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4aac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2d4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2d4ab0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x2d4ab0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d4ab4: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x2d4ab4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2d4ab8: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x2d4ab8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2d4abc: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x2d4abcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x2d4ac0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2D4AC0u;
    SET_GPR_U32(ctx, 31, 0x2D4AC8u);
    ctx->pc = 0x2D4AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4AC0u;
            // 0x2d4ac4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4AC8u; }
        if (ctx->pc != 0x2D4AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4AC8u; }
        if (ctx->pc != 0x2D4AC8u) { return; }
    }
    ctx->pc = 0x2D4AC8u;
label_2d4ac8:
    // 0x2d4ac8: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x2d4ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d4acc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2d4accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d4ad0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2D4AD0u;
    SET_GPR_U32(ctx, 31, 0x2D4AD8u);
    ctx->pc = 0x2D4AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4AD0u;
            // 0x2d4ad4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4AD8u; }
        if (ctx->pc != 0x2D4AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4AD8u; }
        if (ctx->pc != 0x2D4AD8u) { return; }
    }
    ctx->pc = 0x2D4AD8u;
label_2d4ad8:
    // 0x2d4ad8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2d4ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d4adc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d4adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ae0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2d4ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d4ae4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2D4AE4u;
    SET_GPR_U32(ctx, 31, 0x2D4AECu);
    ctx->pc = 0x2D4AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4AE4u;
            // 0x2d4ae8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4AECu; }
        if (ctx->pc != 0x2D4AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4AECu; }
        if (ctx->pc != 0x2D4AECu) { return; }
    }
    ctx->pc = 0x2D4AECu;
label_2d4aec:
    // 0x2d4aec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d4aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4af0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2d4af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d4af4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2D4AF4u;
    SET_GPR_U32(ctx, 31, 0x2D4AFCu);
    ctx->pc = 0x2D4AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4AF4u;
            // 0x2d4af8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4AFCu; }
        if (ctx->pc != 0x2D4AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4AFCu; }
        if (ctx->pc != 0x2D4AFCu) { return; }
    }
    ctx->pc = 0x2D4AFCu;
label_2d4afc:
    // 0x2d4afc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2d4afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d4b00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d4b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b04: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2d4b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d4b08: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2D4B08u;
    SET_GPR_U32(ctx, 31, 0x2D4B10u);
    ctx->pc = 0x2D4B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4B08u;
            // 0x2d4b0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4B10u; }
        if (ctx->pc != 0x2D4B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4B10u; }
        if (ctx->pc != 0x2D4B10u) { return; }
    }
    ctx->pc = 0x2D4B10u;
label_2d4b10:
    // 0x2d4b10: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d4b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4b14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d4b14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4b18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d4b18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4b1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d4b1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4b20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d4b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4b24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d4b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d4b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4B30u;
            // 0x2d4b34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4B38u;
}
