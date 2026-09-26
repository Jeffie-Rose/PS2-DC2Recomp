#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSubGameUnderLine__FP10mgCTextureiii
// Address: 0x21cd30 - 0x21cdf4
void DrawSubGameUnderLine__FP10mgCTextureiii_0x21cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSubGameUnderLine__FP10mgCTextureiii_0x21cd30");
#endif

    switch (ctx->pc) {
        case 0x21cd60u: goto label_21cd60;
        case 0x21cd6cu: goto label_21cd6c;
        case 0x21cd78u: goto label_21cd78;
        case 0x21cd84u: goto label_21cd84;
        case 0x21cd9cu: goto label_21cd9c;
        case 0x21cdb8u: goto label_21cdb8;
        case 0x21cdd0u: goto label_21cdd0;
        case 0x21cdd8u: goto label_21cdd8;
        default: break;
    }

    ctx->pc = 0x21cd30u;

    // 0x21cd30: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x21cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x21cd34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21cd38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21cd3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21cd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21cd40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21cd40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21cd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21cd48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21cd48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21cd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21cd50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21cd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd54: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x21cd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd58: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x21CD58u;
    SET_GPR_U32(ctx, 31, 0x21CD60u);
    ctx->pc = 0x21CD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD58u;
            // 0x21cd5c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD60u; }
        if (ctx->pc != 0x21CD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD60u; }
        if (ctx->pc != 0x21CD60u) { return; }
    }
    ctx->pc = 0x21CD60u;
label_21cd60:
    // 0x21cd60: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x21cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21cd64: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x21CD64u;
    SET_GPR_U32(ctx, 31, 0x21CD6Cu);
    ctx->pc = 0x21CD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD64u;
            // 0x21cd68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD6Cu; }
        if (ctx->pc != 0x21CD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD6Cu; }
        if (ctx->pc != 0x21CD6Cu) { return; }
    }
    ctx->pc = 0x21CD6Cu;
label_21cd6c:
    // 0x21cd6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x21cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21cd70: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x21CD70u;
    SET_GPR_U32(ctx, 31, 0x21CD78u);
    ctx->pc = 0x21CD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD70u;
            // 0x21cd74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD78u; }
        if (ctx->pc != 0x21CD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD78u; }
        if (ctx->pc != 0x21CD78u) { return; }
    }
    ctx->pc = 0x21CD78u;
label_21cd78:
    // 0x21cd78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21cd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd7c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x21CD7Cu;
    SET_GPR_U32(ctx, 31, 0x21CD84u);
    ctx->pc = 0x21CD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD7Cu;
            // 0x21cd80: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD84u; }
        if (ctx->pc != 0x21CD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD84u; }
        if (ctx->pc != 0x21CD84u) { return; }
    }
    ctx->pc = 0x21CD84u;
label_21cd84:
    // 0x21cd84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x21cd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21cd88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x21cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21cd8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21cd8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd90: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21cd90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd94: 0xc04d320  jal         func_134C80
    ctx->pc = 0x21CD94u;
    SET_GPR_U32(ctx, 31, 0x21CD9Cu);
    ctx->pc = 0x21CD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD94u;
            // 0x21cd98: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD9Cu; }
        if (ctx->pc != 0x21CD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD9Cu; }
        if (ctx->pc != 0x21CD9Cu) { return; }
    }
    ctx->pc = 0x21CD9Cu;
label_21cd9c:
    // 0x21cd9c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21cd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21cda0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21cda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cda4: 0x84280036  lh          $t0, 0x36($at)
    ctx->pc = 0x21cda4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 54)));
    // 0x21cda8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21cda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cdac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21cdacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cdb0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CDB0u;
    SET_GPR_U32(ctx, 31, 0x21CDB8u);
    ctx->pc = 0x21CDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDB0u;
            // 0x21cdb4: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDB8u; }
        if (ctx->pc != 0x21CDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDB8u; }
        if (ctx->pc != 0x21CDB8u) { return; }
    }
    ctx->pc = 0x21CDB8u;
label_21cdb8:
    // 0x21cdb8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21cdbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x21cdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21cdc0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x21cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x21cdc4: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x21cdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x21cdc8: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CDC8u;
    SET_GPR_U32(ctx, 31, 0x21CDD0u);
    ctx->pc = 0x21CDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDC8u;
            // 0x21cdcc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDD0u; }
        if (ctx->pc != 0x21CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDD0u; }
        if (ctx->pc != 0x21CDD0u) { return; }
    }
    ctx->pc = 0x21CDD0u;
label_21cdd0:
    // 0x21cdd0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x21CDD0u;
    SET_GPR_U32(ctx, 31, 0x21CDD8u);
    ctx->pc = 0x21CDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDD0u;
            // 0x21cdd4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDD8u; }
        if (ctx->pc != 0x21CDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CDD8u; }
        if (ctx->pc != 0x21CDD8u) { return; }
    }
    ctx->pc = 0x21CDD8u;
label_21cdd8:
    // 0x21cdd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21cdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cddc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21cddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cde0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21cde0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cde4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21cde4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cde8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21cde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cdec: 0x3e00008  jr          $ra
    ctx->pc = 0x21CDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDECu;
            // 0x21cdf0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CDF4u;
}
