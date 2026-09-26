#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrimQuad__FP10mgCTexture9mgRect<i>9mgRect<i>iiii
// Address: 0x220010 - 0x2200d4
void PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010");
#endif

    switch (ctx->pc) {
        case 0x220060u: goto label_220060;
        case 0x22006cu: goto label_22006c;
        case 0x220078u: goto label_220078;
        case 0x220084u: goto label_220084;
        case 0x22009cu: goto label_22009c;
        case 0x2200acu: goto label_2200ac;
        case 0x2200b4u: goto label_2200b4;
        default: break;
    }

    ctx->pc = 0x220010u;

    // 0x220010: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x220010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x220014: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x220014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x220018: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x220018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22001c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x220020: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x220020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x220024: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x220024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x220028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22002c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22002cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x220030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x220034: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x220034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x220038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22003c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x22003cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220040: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x220040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x220044: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x220044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220048: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x220048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22004c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22004cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x220050: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x220050u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x220054: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x220054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x220058: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x220058u;
    SET_GPR_U32(ctx, 31, 0x220060u);
    ctx->pc = 0x22005Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220058u;
            // 0x22005c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220060u; }
        if (ctx->pc != 0x220060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220060u; }
        if (ctx->pc != 0x220060u) { return; }
    }
    ctx->pc = 0x220060u;
label_220060:
    // 0x220060: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x220060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x220064: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x220064u;
    SET_GPR_U32(ctx, 31, 0x22006Cu);
    ctx->pc = 0x220068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220064u;
            // 0x220068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22006Cu; }
        if (ctx->pc != 0x22006Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22006Cu; }
        if (ctx->pc != 0x22006Cu) { return; }
    }
    ctx->pc = 0x22006Cu;
label_22006c:
    // 0x22006c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x220070: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x220070u;
    SET_GPR_U32(ctx, 31, 0x220078u);
    ctx->pc = 0x220074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220070u;
            // 0x220074: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220078u; }
        if (ctx->pc != 0x220078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220078u; }
        if (ctx->pc != 0x220078u) { return; }
    }
    ctx->pc = 0x220078u;
label_220078:
    // 0x220078: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x220078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22007c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22007Cu;
    SET_GPR_U32(ctx, 31, 0x220084u);
    ctx->pc = 0x220080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22007Cu;
            // 0x220080: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220084u; }
        if (ctx->pc != 0x220084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220084u; }
        if (ctx->pc != 0x220084u) { return; }
    }
    ctx->pc = 0x220084u;
label_220084:
    // 0x220084: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x220084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220088: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x220088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22008c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22008cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220090: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x220090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220094: 0xc04d320  jal         func_134C80
    ctx->pc = 0x220094u;
    SET_GPR_U32(ctx, 31, 0x22009Cu);
    ctx->pc = 0x220098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220094u;
            // 0x220098: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22009Cu; }
        if (ctx->pc != 0x22009Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22009Cu; }
        if (ctx->pc != 0x22009Cu) { return; }
    }
    ctx->pc = 0x22009Cu;
label_22009c:
    // 0x22009c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2200a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2200a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2200a4: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2200A4u;
    SET_GPR_U32(ctx, 31, 0x2200ACu);
    ctx->pc = 0x2200A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2200A4u;
            // 0x2200a8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200ACu; }
        if (ctx->pc != 0x2200ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200ACu; }
        if (ctx->pc != 0x2200ACu) { return; }
    }
    ctx->pc = 0x2200ACu;
label_2200ac:
    // 0x2200ac: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2200ACu;
    SET_GPR_U32(ctx, 31, 0x2200B4u);
    ctx->pc = 0x2200B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2200ACu;
            // 0x2200b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200B4u; }
        if (ctx->pc != 0x2200B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200B4u; }
        if (ctx->pc != 0x2200B4u) { return; }
    }
    ctx->pc = 0x2200B4u;
label_2200b4:
    // 0x2200b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2200b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2200b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2200b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2200bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2200bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2200c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2200c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2200c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2200c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2200c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2200c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2200cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2200CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2200D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2200CCu;
            // 0x2200d0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2200D4u;
}
