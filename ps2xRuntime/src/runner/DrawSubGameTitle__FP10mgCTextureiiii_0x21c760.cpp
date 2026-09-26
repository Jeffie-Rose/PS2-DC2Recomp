#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSubGameTitle__FP10mgCTextureiiii
// Address: 0x21c760 - 0x21c880
void DrawSubGameTitle__FP10mgCTextureiiii_0x21c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSubGameTitle__FP10mgCTextureiiii_0x21c760");
#endif

    switch (ctx->pc) {
        case 0x21c7acu: goto label_21c7ac;
        case 0x21c7b8u: goto label_21c7b8;
        case 0x21c7c4u: goto label_21c7c4;
        case 0x21c7d0u: goto label_21c7d0;
        case 0x21c7e8u: goto label_21c7e8;
        case 0x21c800u: goto label_21c800;
        case 0x21c814u: goto label_21c814;
        case 0x21c82cu: goto label_21c82c;
        case 0x21c844u: goto label_21c844;
        case 0x21c858u: goto label_21c858;
        case 0x21c860u: goto label_21c860;
        default: break;
    }

    ctx->pc = 0x21c760u;

    // 0x21c760: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x21c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x21c764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c768: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21c768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21c76c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21c76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21c770: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21c774: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21c774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21c77c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21c77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21c784: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x21c784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c78c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x21c78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c790: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x21c790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x21c794: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C794u;
    {
        const bool branch_taken_0x21c794 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C794u;
            // 0x21c798: 0x2610ff30  addiu       $s0, $s0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c794) {
            ctx->pc = 0x21C7A4u;
            goto label_21c7a4;
        }
    }
    ctx->pc = 0x21C79Cu;
    // 0x21c79c: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x21c79cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x21c7a0: 0x2610ff50  addiu       $s0, $s0, -0xB0
    ctx->pc = 0x21c7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967120));
label_21c7a4:
    // 0x21c7a4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x21C7A4u;
    SET_GPR_U32(ctx, 31, 0x21C7ACu);
    ctx->pc = 0x21C7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7A4u;
            // 0x21c7a8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7ACu; }
        if (ctx->pc != 0x21C7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7ACu; }
        if (ctx->pc != 0x21C7ACu) { return; }
    }
    ctx->pc = 0x21C7ACu;
label_21c7ac:
    // 0x21c7ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21c7b0: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x21C7B0u;
    SET_GPR_U32(ctx, 31, 0x21C7B8u);
    ctx->pc = 0x21C7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7B0u;
            // 0x21c7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7B8u; }
        if (ctx->pc != 0x21C7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7B8u; }
        if (ctx->pc != 0x21C7B8u) { return; }
    }
    ctx->pc = 0x21C7B8u;
label_21c7b8:
    // 0x21c7b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21c7bc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x21C7BCu;
    SET_GPR_U32(ctx, 31, 0x21C7C4u);
    ctx->pc = 0x21C7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7BCu;
            // 0x21c7c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7C4u; }
        if (ctx->pc != 0x21C7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7C4u; }
        if (ctx->pc != 0x21C7C4u) { return; }
    }
    ctx->pc = 0x21C7C4u;
label_21c7c4:
    // 0x21c7c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21c7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7c8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x21C7C8u;
    SET_GPR_U32(ctx, 31, 0x21C7D0u);
    ctx->pc = 0x21C7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7C8u;
            // 0x21c7cc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7D0u; }
        if (ctx->pc != 0x21C7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7D0u; }
        if (ctx->pc != 0x21C7D0u) { return; }
    }
    ctx->pc = 0x21C7D0u;
label_21c7d0:
    // 0x21c7d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21c7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21c7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21c7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7e0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x21C7E0u;
    SET_GPR_U32(ctx, 31, 0x21C7E8u);
    ctx->pc = 0x21C7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7E0u;
            // 0x21c7e4: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7E8u; }
        if (ctx->pc != 0x21C7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7E8u; }
        if (ctx->pc != 0x21C7E8u) { return; }
    }
    ctx->pc = 0x21C7E8u;
label_21c7e8:
    // 0x21c7e8: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x21c7e8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21c7ec: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x21c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x21c7f0: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x21c7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x21c7f4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x21c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x21c7f8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C7F8u;
    SET_GPR_U32(ctx, 31, 0x21C800u);
    ctx->pc = 0x21C7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7F8u;
            // 0x21c7fc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C800u; }
        if (ctx->pc != 0x21C800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C800u; }
        if (ctx->pc != 0x21C800u) { return; }
    }
    ctx->pc = 0x21C800u;
label_21c800:
    // 0x21c800: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21c804: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x21c804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x21c808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21c808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c80c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21C80Cu;
    SET_GPR_U32(ctx, 31, 0x21C814u);
    ctx->pc = 0x21C810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C80Cu;
            // 0x21c810: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C814u; }
        if (ctx->pc != 0x21C814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C814u; }
        if (ctx->pc != 0x21C814u) { return; }
    }
    ctx->pc = 0x21C814u;
label_21c814:
    // 0x21c814: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x21c814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21c818: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21c818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21c81c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21c81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c820: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21c820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c824: 0xc04d320  jal         func_134C80
    ctx->pc = 0x21C824u;
    SET_GPR_U32(ctx, 31, 0x21C82Cu);
    ctx->pc = 0x21C828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C824u;
            // 0x21c828: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C82Cu; }
        if (ctx->pc != 0x21C82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C82Cu; }
        if (ctx->pc != 0x21C82Cu) { return; }
    }
    ctx->pc = 0x21C82Cu;
label_21c82c:
    // 0x21c82c: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x21c82cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21c830: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21c830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c834: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21c834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c838: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c83c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C83Cu;
    SET_GPR_U32(ctx, 31, 0x21C844u);
    ctx->pc = 0x21C840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C83Cu;
            // 0x21c840: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C844u; }
        if (ctx->pc != 0x21C844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C844u; }
        if (ctx->pc != 0x21C844u) { return; }
    }
    ctx->pc = 0x21C844u;
label_21c844:
    // 0x21c844: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21c844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c848: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21c848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21c84c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x21c84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x21c850: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21C850u;
    SET_GPR_U32(ctx, 31, 0x21C858u);
    ctx->pc = 0x21C854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C850u;
            // 0x21c854: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C858u; }
        if (ctx->pc != 0x21C858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C858u; }
        if (ctx->pc != 0x21C858u) { return; }
    }
    ctx->pc = 0x21C858u;
label_21c858:
    // 0x21c858: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x21C858u;
    SET_GPR_U32(ctx, 31, 0x21C860u);
    ctx->pc = 0x21C85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C858u;
            // 0x21c85c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C860u; }
        if (ctx->pc != 0x21C860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C860u; }
        if (ctx->pc != 0x21C860u) { return; }
    }
    ctx->pc = 0x21C860u;
label_21c860:
    // 0x21c860: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21c860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21c864: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21c864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c868: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21c868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c86c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21c86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c878: 0x3e00008  jr          $ra
    ctx->pc = 0x21C878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C878u;
            // 0x21c87c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C880u;
}
