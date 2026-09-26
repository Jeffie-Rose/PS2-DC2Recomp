#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCharacter__16CEffectScriptManFP11CCharacter2ii
// Address: 0x2e2970 - 0x2e2c0c
void SetCharacter__16CEffectScriptManFP11CCharacter2ii_0x2e2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCharacter__16CEffectScriptManFP11CCharacter2ii_0x2e2970");
#endif

    switch (ctx->pc) {
        case 0x2e2970u: goto label_2e2970;
        case 0x2e2974u: goto label_2e2974;
        case 0x2e2978u: goto label_2e2978;
        case 0x2e297cu: goto label_2e297c;
        case 0x2e2980u: goto label_2e2980;
        case 0x2e2984u: goto label_2e2984;
        case 0x2e2988u: goto label_2e2988;
        case 0x2e298cu: goto label_2e298c;
        case 0x2e2990u: goto label_2e2990;
        case 0x2e2994u: goto label_2e2994;
        case 0x2e2998u: goto label_2e2998;
        case 0x2e299cu: goto label_2e299c;
        case 0x2e29a0u: goto label_2e29a0;
        case 0x2e29a4u: goto label_2e29a4;
        case 0x2e29a8u: goto label_2e29a8;
        case 0x2e29acu: goto label_2e29ac;
        case 0x2e29b0u: goto label_2e29b0;
        case 0x2e29b4u: goto label_2e29b4;
        case 0x2e29b8u: goto label_2e29b8;
        case 0x2e29bcu: goto label_2e29bc;
        case 0x2e29c0u: goto label_2e29c0;
        case 0x2e29c4u: goto label_2e29c4;
        case 0x2e29c8u: goto label_2e29c8;
        case 0x2e29ccu: goto label_2e29cc;
        case 0x2e29d0u: goto label_2e29d0;
        case 0x2e29d4u: goto label_2e29d4;
        case 0x2e29d8u: goto label_2e29d8;
        case 0x2e29dcu: goto label_2e29dc;
        case 0x2e29e0u: goto label_2e29e0;
        case 0x2e29e4u: goto label_2e29e4;
        case 0x2e29e8u: goto label_2e29e8;
        case 0x2e29ecu: goto label_2e29ec;
        case 0x2e29f0u: goto label_2e29f0;
        case 0x2e29f4u: goto label_2e29f4;
        case 0x2e29f8u: goto label_2e29f8;
        case 0x2e29fcu: goto label_2e29fc;
        case 0x2e2a00u: goto label_2e2a00;
        case 0x2e2a04u: goto label_2e2a04;
        case 0x2e2a08u: goto label_2e2a08;
        case 0x2e2a0cu: goto label_2e2a0c;
        case 0x2e2a10u: goto label_2e2a10;
        case 0x2e2a14u: goto label_2e2a14;
        case 0x2e2a18u: goto label_2e2a18;
        case 0x2e2a1cu: goto label_2e2a1c;
        case 0x2e2a20u: goto label_2e2a20;
        case 0x2e2a24u: goto label_2e2a24;
        case 0x2e2a28u: goto label_2e2a28;
        case 0x2e2a2cu: goto label_2e2a2c;
        case 0x2e2a30u: goto label_2e2a30;
        case 0x2e2a34u: goto label_2e2a34;
        case 0x2e2a38u: goto label_2e2a38;
        case 0x2e2a3cu: goto label_2e2a3c;
        case 0x2e2a40u: goto label_2e2a40;
        case 0x2e2a44u: goto label_2e2a44;
        case 0x2e2a48u: goto label_2e2a48;
        case 0x2e2a4cu: goto label_2e2a4c;
        case 0x2e2a50u: goto label_2e2a50;
        case 0x2e2a54u: goto label_2e2a54;
        case 0x2e2a58u: goto label_2e2a58;
        case 0x2e2a5cu: goto label_2e2a5c;
        case 0x2e2a60u: goto label_2e2a60;
        case 0x2e2a64u: goto label_2e2a64;
        case 0x2e2a68u: goto label_2e2a68;
        case 0x2e2a6cu: goto label_2e2a6c;
        case 0x2e2a70u: goto label_2e2a70;
        case 0x2e2a74u: goto label_2e2a74;
        case 0x2e2a78u: goto label_2e2a78;
        case 0x2e2a7cu: goto label_2e2a7c;
        case 0x2e2a80u: goto label_2e2a80;
        case 0x2e2a84u: goto label_2e2a84;
        case 0x2e2a88u: goto label_2e2a88;
        case 0x2e2a8cu: goto label_2e2a8c;
        case 0x2e2a90u: goto label_2e2a90;
        case 0x2e2a94u: goto label_2e2a94;
        case 0x2e2a98u: goto label_2e2a98;
        case 0x2e2a9cu: goto label_2e2a9c;
        case 0x2e2aa0u: goto label_2e2aa0;
        case 0x2e2aa4u: goto label_2e2aa4;
        case 0x2e2aa8u: goto label_2e2aa8;
        case 0x2e2aacu: goto label_2e2aac;
        case 0x2e2ab0u: goto label_2e2ab0;
        case 0x2e2ab4u: goto label_2e2ab4;
        case 0x2e2ab8u: goto label_2e2ab8;
        case 0x2e2abcu: goto label_2e2abc;
        case 0x2e2ac0u: goto label_2e2ac0;
        case 0x2e2ac4u: goto label_2e2ac4;
        case 0x2e2ac8u: goto label_2e2ac8;
        case 0x2e2accu: goto label_2e2acc;
        case 0x2e2ad0u: goto label_2e2ad0;
        case 0x2e2ad4u: goto label_2e2ad4;
        case 0x2e2ad8u: goto label_2e2ad8;
        case 0x2e2adcu: goto label_2e2adc;
        case 0x2e2ae0u: goto label_2e2ae0;
        case 0x2e2ae4u: goto label_2e2ae4;
        case 0x2e2ae8u: goto label_2e2ae8;
        case 0x2e2aecu: goto label_2e2aec;
        case 0x2e2af0u: goto label_2e2af0;
        case 0x2e2af4u: goto label_2e2af4;
        case 0x2e2af8u: goto label_2e2af8;
        case 0x2e2afcu: goto label_2e2afc;
        case 0x2e2b00u: goto label_2e2b00;
        case 0x2e2b04u: goto label_2e2b04;
        case 0x2e2b08u: goto label_2e2b08;
        case 0x2e2b0cu: goto label_2e2b0c;
        case 0x2e2b10u: goto label_2e2b10;
        case 0x2e2b14u: goto label_2e2b14;
        case 0x2e2b18u: goto label_2e2b18;
        case 0x2e2b1cu: goto label_2e2b1c;
        case 0x2e2b20u: goto label_2e2b20;
        case 0x2e2b24u: goto label_2e2b24;
        case 0x2e2b28u: goto label_2e2b28;
        case 0x2e2b2cu: goto label_2e2b2c;
        case 0x2e2b30u: goto label_2e2b30;
        case 0x2e2b34u: goto label_2e2b34;
        case 0x2e2b38u: goto label_2e2b38;
        case 0x2e2b3cu: goto label_2e2b3c;
        case 0x2e2b40u: goto label_2e2b40;
        case 0x2e2b44u: goto label_2e2b44;
        case 0x2e2b48u: goto label_2e2b48;
        case 0x2e2b4cu: goto label_2e2b4c;
        case 0x2e2b50u: goto label_2e2b50;
        case 0x2e2b54u: goto label_2e2b54;
        case 0x2e2b58u: goto label_2e2b58;
        case 0x2e2b5cu: goto label_2e2b5c;
        case 0x2e2b60u: goto label_2e2b60;
        case 0x2e2b64u: goto label_2e2b64;
        case 0x2e2b68u: goto label_2e2b68;
        case 0x2e2b6cu: goto label_2e2b6c;
        case 0x2e2b70u: goto label_2e2b70;
        case 0x2e2b74u: goto label_2e2b74;
        case 0x2e2b78u: goto label_2e2b78;
        case 0x2e2b7cu: goto label_2e2b7c;
        case 0x2e2b80u: goto label_2e2b80;
        case 0x2e2b84u: goto label_2e2b84;
        case 0x2e2b88u: goto label_2e2b88;
        case 0x2e2b8cu: goto label_2e2b8c;
        case 0x2e2b90u: goto label_2e2b90;
        case 0x2e2b94u: goto label_2e2b94;
        case 0x2e2b98u: goto label_2e2b98;
        case 0x2e2b9cu: goto label_2e2b9c;
        case 0x2e2ba0u: goto label_2e2ba0;
        case 0x2e2ba4u: goto label_2e2ba4;
        case 0x2e2ba8u: goto label_2e2ba8;
        case 0x2e2bacu: goto label_2e2bac;
        case 0x2e2bb0u: goto label_2e2bb0;
        case 0x2e2bb4u: goto label_2e2bb4;
        case 0x2e2bb8u: goto label_2e2bb8;
        case 0x2e2bbcu: goto label_2e2bbc;
        case 0x2e2bc0u: goto label_2e2bc0;
        case 0x2e2bc4u: goto label_2e2bc4;
        case 0x2e2bc8u: goto label_2e2bc8;
        case 0x2e2bccu: goto label_2e2bcc;
        case 0x2e2bd0u: goto label_2e2bd0;
        case 0x2e2bd4u: goto label_2e2bd4;
        case 0x2e2bd8u: goto label_2e2bd8;
        case 0x2e2bdcu: goto label_2e2bdc;
        case 0x2e2be0u: goto label_2e2be0;
        case 0x2e2be4u: goto label_2e2be4;
        case 0x2e2be8u: goto label_2e2be8;
        case 0x2e2becu: goto label_2e2bec;
        case 0x2e2bf0u: goto label_2e2bf0;
        case 0x2e2bf4u: goto label_2e2bf4;
        case 0x2e2bf8u: goto label_2e2bf8;
        case 0x2e2bfcu: goto label_2e2bfc;
        case 0x2e2c00u: goto label_2e2c00;
        case 0x2e2c04u: goto label_2e2c04;
        case 0x2e2c08u: goto label_2e2c08;
        default: break;
    }

    ctx->pc = 0x2e2970u;

label_2e2970:
    // 0x2e2970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e2970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e2974:
    // 0x2e2974: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e2974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e2978:
    // 0x2e2978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e2978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e297c:
    // 0x2e297c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e2980:
    // 0x2e2980: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e2980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2984:
    // 0x2e2984: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e2984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e2988:
    // 0x2e2988: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e2988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e298c:
    // 0x2e298c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e2990:
    // 0x2e2990: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e2990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e2994:
    // 0x2e2994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e2998:
    // 0x2e2998: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e2998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e299c:
    // 0x2e299c: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x2e299cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e29a0:
    // 0x2e29a0: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x2e29a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_2e29a4:
    // 0x2e29a4: 0x320f809  jalr        $t9
label_2e29a8:
    if (ctx->pc == 0x2E29A8u) {
        ctx->pc = 0x2E29A8u;
            // 0x2e29a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E29ACu;
        goto label_2e29ac;
    }
    ctx->pc = 0x2E29A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E29ACu);
        ctx->pc = 0x2E29A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E29A4u;
            // 0x2e29a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E29ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E29ACu; }
            if (ctx->pc != 0x2E29ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2E29ACu;
label_2e29ac:
    // 0x2e29ac: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2e29acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e29b0:
    // 0x2e29b0: 0x24460068  addiu       $a2, $v0, 0x68
    ctx->pc = 0x2e29b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2e29b4:
    // 0x2e29b4: 0xc04e6a8  jal         func_139AA0
label_2e29b8:
    if (ctx->pc == 0x2E29B8u) {
        ctx->pc = 0x2E29B8u;
            // 0x2e29b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2E29BCu;
        goto label_2e29bc;
    }
    ctx->pc = 0x2E29B4u;
    SET_GPR_U32(ctx, 31, 0x2E29BCu);
    ctx->pc = 0x2E29B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E29B4u;
            // 0x2e29b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (runtime->hasFunction(0x139AA0u)) {
        auto targetFn = runtime->lookupFunction(0x139AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E29BCu; }
        if (ctx->pc != 0x2E29BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartStackMode__9mgCMemoryFii_0x139aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E29BCu; }
        if (ctx->pc != 0x2E29BCu) { return; }
    }
    ctx->pc = 0x2E29BCu;
label_2e29bc:
    // 0x2e29bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e29bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e29c0:
    // 0x2e29c0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_2e29c4:
    if (ctx->pc == 0x2E29C4u) {
        ctx->pc = 0x2E29C4u;
            // 0x2e29c4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2E29C8u;
        goto label_2e29c8;
    }
    ctx->pc = 0x2E29C0u;
    {
        const bool branch_taken_0x2e29c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E29C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E29C0u;
            // 0x2e29c4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29c0) {
            ctx->pc = 0x2E29D8u;
            goto label_2e29d8;
        }
    }
    ctx->pc = 0x2E29C8u;
label_2e29c8:
    // 0x2e29c8: 0xc04a0d2  jal         func_128348
label_2e29cc:
    if (ctx->pc == 0x2E29CCu) {
        ctx->pc = 0x2E29CCu;
            // 0x2e29cc: 0x248412e0  addiu       $a0, $a0, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4832));
        ctx->pc = 0x2E29D0u;
        goto label_2e29d0;
    }
    ctx->pc = 0x2E29C8u;
    SET_GPR_U32(ctx, 31, 0x2E29D0u);
    ctx->pc = 0x2E29CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E29C8u;
            // 0x2e29cc: 0x248412e0  addiu       $a0, $a0, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E29D0u; }
        if (ctx->pc != 0x2E29D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E29D0u; }
        if (ctx->pc != 0x2E29D0u) { return; }
    }
    ctx->pc = 0x2E29D0u;
label_2e29d0:
    // 0x2e29d0: 0x10000086  b           . + 4 + (0x86 << 2)
label_2e29d4:
    if (ctx->pc == 0x2E29D4u) {
        ctx->pc = 0x2E29D4u;
            // 0x2e29d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E29D8u;
        goto label_2e29d8;
    }
    ctx->pc = 0x2E29D0u;
    {
        const bool branch_taken_0x2e29d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E29D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E29D0u;
            // 0x2e29d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29d0) {
            ctx->pc = 0x2E2BECu;
            goto label_2e2bec;
        }
    }
    ctx->pc = 0x2E29D8u;
label_2e29d8:
    // 0x2e29d8: 0x6200047  bltz        $s1, . + 4 + (0x47 << 2)
label_2e29dc:
    if (ctx->pc == 0x2E29DCu) {
        ctx->pc = 0x2E29E0u;
        goto label_2e29e0;
    }
    ctx->pc = 0x2E29D8u;
    {
        const bool branch_taken_0x2e29d8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2e29d8) {
            ctx->pc = 0x2E2AF8u;
            goto label_2e2af8;
        }
    }
    ctx->pc = 0x2E29E0u;
label_2e29e0:
    // 0x2e29e0: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_2e29e4:
    if (ctx->pc == 0x2E29E4u) {
        ctx->pc = 0x2E29E4u;
            // 0x2e29e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E29E8u;
        goto label_2e29e8;
    }
    ctx->pc = 0x2E29E0u;
    {
        const bool branch_taken_0x2e29e0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2E29E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E29E0u;
            // 0x2e29e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29e0) {
            ctx->pc = 0x2E2A00u;
            goto label_2e2a00;
        }
    }
    ctx->pc = 0x2E29E8u;
label_2e29e8:
    // 0x2e29e8: 0x2a410080  slti        $at, $s2, 0x80
    ctx->pc = 0x2e29e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)128) ? 1 : 0);
label_2e29ec:
    // 0x2e29ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2e29f0:
    if (ctx->pc == 0x2E29F0u) {
        ctx->pc = 0x2E29F0u;
            // 0x2e29f0: 0x2a220008  slti        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->pc = 0x2E29F4u;
        goto label_2e29f4;
    }
    ctx->pc = 0x2E29ECu;
    {
        const bool branch_taken_0x2e29ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E29F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E29ECu;
            // 0x2e29f0: 0x2a220008  slti        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29ec) {
            ctx->pc = 0x2E29FCu;
            goto label_2e29fc;
        }
    }
    ctx->pc = 0x2E29F4u;
label_2e29f4:
    // 0x2e29f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2e29f8:
    if (ctx->pc == 0x2E29F8u) {
        ctx->pc = 0x2E29F8u;
            // 0x2e29f8: 0x121940  sll         $v1, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x2E29FCu;
        goto label_2e29fc;
    }
    ctx->pc = 0x2E29F4u;
    {
        const bool branch_taken_0x2e29f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E29F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E29F4u;
            // 0x2e29f8: 0x121940  sll         $v1, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29f4) {
            ctx->pc = 0x2E2A08u;
            goto label_2e2a08;
        }
    }
    ctx->pc = 0x2E29FCu;
label_2e29fc:
    // 0x2e29fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e29fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2a00:
    // 0x2e2a00: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2e2a04:
    if (ctx->pc == 0x2E2A04u) {
        ctx->pc = 0x2E2A04u;
            // 0x2e2a04: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2E2A08u;
        goto label_2e2a08;
    }
    ctx->pc = 0x2E2A00u;
    {
        const bool branch_taken_0x2e2a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A00u;
            // 0x2e2a04: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a00) {
            ctx->pc = 0x2E2BF0u;
            goto label_2e2bf0;
        }
    }
    ctx->pc = 0x2E2A08u;
label_2e2a08:
    // 0x2e2a08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2e2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2e2a0c:
    // 0x2e2a0c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2e2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2e2a10:
    // 0x2e2a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e2a14:
    // 0x2e2a14: 0x24520184  addiu       $s2, $v0, 0x184
    ctx->pc = 0x2e2a14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
label_2e2a18:
    // 0x2e2a18: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x2e2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
label_2e2a1c:
    // 0x2e2a1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e2a20:
    if (ctx->pc == 0x2E2A20u) {
        ctx->pc = 0x2E2A20u;
            // 0x2e2a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A24u;
        goto label_2e2a24;
    }
    ctx->pc = 0x2E2A1Cu;
    {
        const bool branch_taken_0x2e2a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A1Cu;
            // 0x2e2a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a1c) {
            ctx->pc = 0x2E2A2Cu;
            goto label_2e2a2c;
        }
    }
    ctx->pc = 0x2E2A24u;
label_2e2a24:
    // 0x2e2a24: 0x10000071  b           . + 4 + (0x71 << 2)
label_2e2a28:
    if (ctx->pc == 0x2E2A28u) {
        ctx->pc = 0x2E2A2Cu;
        goto label_2e2a2c;
    }
    ctx->pc = 0x2E2A24u;
    {
        const bool branch_taken_0x2e2a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a24) {
            ctx->pc = 0x2E2BECu;
            goto label_2e2bec;
        }
    }
    ctx->pc = 0x2E2A2Cu;
label_2e2a2c:
    // 0x2e2a2c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2e2a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e2a30:
    // 0x2e2a30: 0xc04e748  jal         func_139D20
label_2e2a34:
    if (ctx->pc == 0x2E2A34u) {
        ctx->pc = 0x2E2A34u;
            // 0x2e2a34: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2E2A38u;
        goto label_2e2a38;
    }
    ctx->pc = 0x2E2A30u;
    SET_GPR_U32(ctx, 31, 0x2E2A38u);
    ctx->pc = 0x2E2A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A30u;
            // 0x2e2a34: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2A38u; }
        if (ctx->pc != 0x2E2A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2A38u; }
        if (ctx->pc != 0x2E2A38u) { return; }
    }
    ctx->pc = 0x2E2A38u;
label_2e2a38:
    // 0x2e2a38: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2e2a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2e2a3c:
    // 0x2e2a3c: 0xc04e638  jal         func_1398E0
label_2e2a40:
    if (ctx->pc == 0x2E2A40u) {
        ctx->pc = 0x2E2A40u;
            // 0x2e2a40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A44u;
        goto label_2e2a44;
    }
    ctx->pc = 0x2E2A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E2A44u);
    ctx->pc = 0x2E2A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A3Cu;
            // 0x2e2a40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2A44u; }
        if (ctx->pc != 0x2E2A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2A44u; }
        if (ctx->pc != 0x2E2A44u) { return; }
    }
    ctx->pc = 0x2E2A44u;
label_2e2a44:
    // 0x2e2a44: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2e2a48:
    if (ctx->pc == 0x2E2A48u) {
        ctx->pc = 0x2E2A48u;
            // 0x2e2a48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A4Cu;
        goto label_2e2a4c;
    }
    ctx->pc = 0x2E2A44u;
    {
        const bool branch_taken_0x2e2a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A44u;
            // 0x2e2a48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a44) {
            ctx->pc = 0x2E2AC8u;
            goto label_2e2ac8;
        }
    }
    ctx->pc = 0x2E2A4Cu;
label_2e2a4c:
    // 0x2e2a4c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2a50:
    // 0x2e2a50: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2e2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2e2a54:
    // 0x2e2a54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e2a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e2a58:
    // 0x2e2a58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e2a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2a5c:
    // 0x2e2a5c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e2a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e2a60:
    // 0x2e2a60: 0x320f809  jalr        $t9
label_2e2a64:
    if (ctx->pc == 0x2E2A64u) {
        ctx->pc = 0x2E2A64u;
            // 0x2e2a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A68u;
        goto label_2e2a68;
    }
    ctx->pc = 0x2E2A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2A68u);
        ctx->pc = 0x2E2A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A60u;
            // 0x2e2a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2A68u; }
            if (ctx->pc != 0x2E2A68u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2A68u;
label_2e2a68:
    // 0x2e2a68: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2a6c:
    // 0x2e2a6c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2e2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2e2a70:
    // 0x2e2a70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e2a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e2a74:
    // 0x2e2a74: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e2a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2a78:
    // 0x2e2a78: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e2a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e2a7c:
    // 0x2e2a7c: 0x320f809  jalr        $t9
label_2e2a80:
    if (ctx->pc == 0x2E2A80u) {
        ctx->pc = 0x2E2A80u;
            // 0x2e2a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A84u;
        goto label_2e2a84;
    }
    ctx->pc = 0x2E2A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2A84u);
        ctx->pc = 0x2E2A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A7Cu;
            // 0x2e2a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2A84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2A84u; }
            if (ctx->pc != 0x2E2A84u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2A84u;
label_2e2a84:
    // 0x2e2a84: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2a88:
    // 0x2e2a88: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2e2a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2e2a8c:
    // 0x2e2a8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e2a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e2a90:
    // 0x2e2a90: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e2a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2a94:
    // 0x2e2a94: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e2a94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e2a98:
    // 0x2e2a98: 0x320f809  jalr        $t9
label_2e2a9c:
    if (ctx->pc == 0x2E2A9Cu) {
        ctx->pc = 0x2E2A9Cu;
            // 0x2e2a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2AA0u;
        goto label_2e2aa0;
    }
    ctx->pc = 0x2E2A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2AA0u);
        ctx->pc = 0x2E2A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A98u;
            // 0x2e2a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2AA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2AA0u; }
            if (ctx->pc != 0x2E2AA0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2AA0u;
label_2e2aa0:
    // 0x2e2aa0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2aa4:
    // 0x2e2aa4: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2e2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2e2aa8:
    // 0x2e2aa8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e2aac:
    // 0x2e2aac: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x2e2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_2e2ab0:
    // 0x2e2ab0: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x2e2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_2e2ab4:
    // 0x2e2ab4: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x2e2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_2e2ab8:
    // 0x2e2ab8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e2ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2abc:
    // 0x2e2abc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e2abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e2ac0:
    // 0x2e2ac0: 0x320f809  jalr        $t9
label_2e2ac4:
    if (ctx->pc == 0x2E2AC4u) {
        ctx->pc = 0x2E2AC4u;
            // 0x2e2ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2AC8u;
        goto label_2e2ac8;
    }
    ctx->pc = 0x2E2AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2AC8u);
        ctx->pc = 0x2E2AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2AC0u;
            // 0x2e2ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2AC8u; }
            if (ctx->pc != 0x2E2AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2AC8u;
label_2e2ac8:
    // 0x2e2ac8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2acc:
    // 0x2e2acc: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2e2accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_2e2ad0:
    // 0x2e2ad0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e2ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e2ad4:
    // 0x2e2ad4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2ad8:
    // 0x2e2ad8: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2e2ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e2adc:
    // 0x2e2adc: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x2e2adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_2e2ae0:
    // 0x2e2ae0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e2ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e2ae4:
    // 0x2e2ae4: 0x320f809  jalr        $t9
label_2e2ae8:
    if (ctx->pc == 0x2E2AE8u) {
        ctx->pc = 0x2E2AE8u;
            // 0x2e2ae8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2AECu;
        goto label_2e2aec;
    }
    ctx->pc = 0x2E2AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2AECu);
        ctx->pc = 0x2E2AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2AE4u;
            // 0x2e2ae8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2AECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2AECu; }
            if (ctx->pc != 0x2E2AECu) { return; }
        }
        }
    }
    ctx->pc = 0x2E2AECu;
label_2e2aec:
    // 0x2e2aec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e2af0:
    // 0x2e2af0: 0x10000039  b           . + 4 + (0x39 << 2)
label_2e2af4:
    if (ctx->pc == 0x2E2AF4u) {
        ctx->pc = 0x2E2AF4u;
            // 0x2e2af4: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2E2AF8u;
        goto label_2e2af8;
    }
    ctx->pc = 0x2E2AF0u;
    {
        const bool branch_taken_0x2e2af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2AF0u;
            // 0x2e2af4: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2af0) {
            ctx->pc = 0x2E2BD8u;
            goto label_2e2bd8;
        }
    }
    ctx->pc = 0x2E2AF8u;
label_2e2af8:
    // 0x2e2af8: 0x8e821184  lw          $v0, 0x1184($s4)
    ctx->pc = 0x2e2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4484)));
label_2e2afc:
    // 0x2e2afc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_2e2b00:
    if (ctx->pc == 0x2E2B00u) {
        ctx->pc = 0x2E2B00u;
            // 0x2e2b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B04u;
        goto label_2e2b04;
    }
    ctx->pc = 0x2E2AFCu;
    {
        const bool branch_taken_0x2e2afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2AFCu;
            // 0x2e2b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2afc) {
            ctx->pc = 0x2E2BD0u;
            goto label_2e2bd0;
        }
    }
    ctx->pc = 0x2E2B04u;
label_2e2b04:
    // 0x2e2b04: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2e2b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e2b08:
    // 0x2e2b08: 0xc04e748  jal         func_139D20
label_2e2b0c:
    if (ctx->pc == 0x2E2B0Cu) {
        ctx->pc = 0x2E2B0Cu;
            // 0x2e2b0c: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2E2B10u;
        goto label_2e2b10;
    }
    ctx->pc = 0x2E2B08u;
    SET_GPR_U32(ctx, 31, 0x2E2B10u);
    ctx->pc = 0x2E2B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B08u;
            // 0x2e2b0c: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B10u; }
        if (ctx->pc != 0x2E2B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B10u; }
        if (ctx->pc != 0x2E2B10u) { return; }
    }
    ctx->pc = 0x2E2B10u;
label_2e2b10:
    // 0x2e2b10: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2e2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2e2b14:
    // 0x2e2b14: 0xc04e638  jal         func_1398E0
label_2e2b18:
    if (ctx->pc == 0x2E2B18u) {
        ctx->pc = 0x2E2B18u;
            // 0x2e2b18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B1Cu;
        goto label_2e2b1c;
    }
    ctx->pc = 0x2E2B14u;
    SET_GPR_U32(ctx, 31, 0x2E2B1Cu);
    ctx->pc = 0x2E2B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B14u;
            // 0x2e2b18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B1Cu; }
        if (ctx->pc != 0x2E2B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B1Cu; }
        if (ctx->pc != 0x2E2B1Cu) { return; }
    }
    ctx->pc = 0x2E2B1Cu;
label_2e2b1c:
    // 0x2e2b1c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2e2b20:
    if (ctx->pc == 0x2E2B20u) {
        ctx->pc = 0x2E2B20u;
            // 0x2e2b20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B24u;
        goto label_2e2b24;
    }
    ctx->pc = 0x2E2B1Cu;
    {
        const bool branch_taken_0x2e2b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B1Cu;
            // 0x2e2b20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b1c) {
            ctx->pc = 0x2E2BA0u;
            goto label_2e2ba0;
        }
    }
    ctx->pc = 0x2E2B24u;
label_2e2b24:
    // 0x2e2b24: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2b28:
    // 0x2e2b28: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2e2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2e2b2c:
    // 0x2e2b2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e2b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e2b30:
    // 0x2e2b30: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e2b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2b34:
    // 0x2e2b34: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e2b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e2b38:
    // 0x2e2b38: 0x320f809  jalr        $t9
label_2e2b3c:
    if (ctx->pc == 0x2E2B3Cu) {
        ctx->pc = 0x2E2B3Cu;
            // 0x2e2b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B40u;
        goto label_2e2b40;
    }
    ctx->pc = 0x2E2B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2B40u);
        ctx->pc = 0x2E2B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B38u;
            // 0x2e2b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B40u; }
            if (ctx->pc != 0x2E2B40u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2B40u;
label_2e2b40:
    // 0x2e2b40: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2b44:
    // 0x2e2b44: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2e2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2e2b48:
    // 0x2e2b48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e2b4c:
    // 0x2e2b4c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e2b4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2b50:
    // 0x2e2b50: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e2b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e2b54:
    // 0x2e2b54: 0x320f809  jalr        $t9
label_2e2b58:
    if (ctx->pc == 0x2E2B58u) {
        ctx->pc = 0x2E2B58u;
            // 0x2e2b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B5Cu;
        goto label_2e2b5c;
    }
    ctx->pc = 0x2E2B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2B5Cu);
        ctx->pc = 0x2E2B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B54u;
            // 0x2e2b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2B5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B5Cu; }
            if (ctx->pc != 0x2E2B5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E2B5Cu;
label_2e2b5c:
    // 0x2e2b5c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2b60:
    // 0x2e2b60: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2e2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2e2b64:
    // 0x2e2b64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e2b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e2b68:
    // 0x2e2b68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e2b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2b6c:
    // 0x2e2b6c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e2b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e2b70:
    // 0x2e2b70: 0x320f809  jalr        $t9
label_2e2b74:
    if (ctx->pc == 0x2E2B74u) {
        ctx->pc = 0x2E2B74u;
            // 0x2e2b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B78u;
        goto label_2e2b78;
    }
    ctx->pc = 0x2E2B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2B78u);
        ctx->pc = 0x2E2B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B70u;
            // 0x2e2b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B78u; }
            if (ctx->pc != 0x2E2B78u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2B78u;
label_2e2b78:
    // 0x2e2b78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e2b7c:
    // 0x2e2b7c: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2e2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2e2b80:
    // 0x2e2b80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e2b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e2b84:
    // 0x2e2b84: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x2e2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_2e2b88:
    // 0x2e2b88: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x2e2b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_2e2b8c:
    // 0x2e2b8c: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x2e2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_2e2b90:
    // 0x2e2b90: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e2b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2b94:
    // 0x2e2b94: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e2b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e2b98:
    // 0x2e2b98: 0x320f809  jalr        $t9
label_2e2b9c:
    if (ctx->pc == 0x2E2B9Cu) {
        ctx->pc = 0x2E2B9Cu;
            // 0x2e2b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BA0u;
        goto label_2e2ba0;
    }
    ctx->pc = 0x2E2B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2BA0u);
        ctx->pc = 0x2E2B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B98u;
            // 0x2e2b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2BA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BA0u; }
            if (ctx->pc != 0x2E2BA0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2BA0u;
label_2e2ba0:
    // 0x2e2ba0: 0x8e821184  lw          $v0, 0x1184($s4)
    ctx->pc = 0x2e2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4484)));
label_2e2ba4:
    // 0x2e2ba4: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2e2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_2e2ba8:
    // 0x2e2ba8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e2ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e2bac:
    // 0x2e2bac: 0x8e821184  lw          $v0, 0x1184($s4)
    ctx->pc = 0x2e2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4484)));
label_2e2bb0:
    // 0x2e2bb0: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2e2bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e2bb4:
    // 0x2e2bb4: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x2e2bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_2e2bb8:
    // 0x2e2bb8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e2bbc:
    // 0x2e2bbc: 0x320f809  jalr        $t9
label_2e2bc0:
    if (ctx->pc == 0x2E2BC0u) {
        ctx->pc = 0x2E2BC0u;
            // 0x2e2bc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BC4u;
        goto label_2e2bc4;
    }
    ctx->pc = 0x2E2BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2BC4u);
        ctx->pc = 0x2E2BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BBCu;
            // 0x2e2bc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2BC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BC4u; }
            if (ctx->pc != 0x2E2BC4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2BC4u;
label_2e2bc4:
    // 0x2e2bc4: 0x8e821184  lw          $v0, 0x1184($s4)
    ctx->pc = 0x2e2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4484)));
label_2e2bc8:
    // 0x2e2bc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e2bcc:
    if (ctx->pc == 0x2E2BCCu) {
        ctx->pc = 0x2E2BCCu;
            // 0x2e2bcc: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2E2BD0u;
        goto label_2e2bd0;
    }
    ctx->pc = 0x2E2BC8u;
    {
        const bool branch_taken_0x2e2bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BC8u;
            // 0x2e2bcc: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bc8) {
            ctx->pc = 0x2E2BD8u;
            goto label_2e2bd8;
        }
    }
    ctx->pc = 0x2E2BD0u;
label_2e2bd0:
    // 0x2e2bd0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e2bd4:
    if (ctx->pc == 0x2E2BD4u) {
        ctx->pc = 0x2E2BD8u;
        goto label_2e2bd8;
    }
    ctx->pc = 0x2E2BD0u;
    {
        const bool branch_taken_0x2e2bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2bd0) {
            ctx->pc = 0x2E2BECu;
            goto label_2e2bec;
        }
    }
    ctx->pc = 0x2E2BD8u;
label_2e2bd8:
    // 0x2e2bd8: 0xc04e764  jal         func_139D90
label_2e2bdc:
    if (ctx->pc == 0x2E2BDCu) {
        ctx->pc = 0x2E2BDCu;
            // 0x2e2bdc: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x2E2BE0u;
        goto label_2e2be0;
    }
    ctx->pc = 0x2E2BD8u;
    SET_GPR_U32(ctx, 31, 0x2E2BE0u);
    ctx->pc = 0x2E2BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BD8u;
            // 0x2e2bdc: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D90u;
    if (runtime->hasFunction(0x139D90u)) {
        auto targetFn = runtime->lookupFunction(0x139D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BE0u; }
        if (ctx->pc != 0x2E2BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlign64__9mgCMemoryFv_0x139d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BE0u; }
        if (ctx->pc != 0x2E2BE0u) { return; }
    }
    ctx->pc = 0x2E2BE0u;
label_2e2be0:
    // 0x2e2be0: 0xc04e6f4  jal         func_139BD0
label_2e2be4:
    if (ctx->pc == 0x2E2BE4u) {
        ctx->pc = 0x2E2BE4u;
            // 0x2e2be4: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x2E2BE8u;
        goto label_2e2be8;
    }
    ctx->pc = 0x2E2BE0u;
    SET_GPR_U32(ctx, 31, 0x2E2BE8u);
    ctx->pc = 0x2E2BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BE0u;
            // 0x2e2be4: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139BD0u;
    if (runtime->hasFunction(0x139BD0u)) {
        auto targetFn = runtime->lookupFunction(0x139BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BE8u; }
        if (ctx->pc != 0x2E2BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndStackMode__9mgCMemoryFv_0x139bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BE8u; }
        if (ctx->pc != 0x2E2BE8u) { return; }
    }
    ctx->pc = 0x2E2BE8u;
label_2e2be8:
    // 0x2e2be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2bec:
    // 0x2e2bec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e2becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e2bf0:
    // 0x2e2bf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e2bf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e2bf4:
    // 0x2e2bf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e2bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e2bf8:
    // 0x2e2bf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e2bfc:
    // 0x2e2bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2c00:
    // 0x2e2c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2c04:
    // 0x2e2c04: 0x3e00008  jr          $ra
label_2e2c08:
    if (ctx->pc == 0x2E2C08u) {
        ctx->pc = 0x2E2C08u;
            // 0x2e2c08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2E2C0Cu;
        goto label_fallthrough_0x2e2c04;
    }
    ctx->pc = 0x2E2C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C04u;
            // 0x2e2c08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e2c04:
    ctx->pc = 0x2E2C0Cu;
}
