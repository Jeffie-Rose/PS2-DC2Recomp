#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitFirePowder__FiP6CSceneiP9mgCMemory
// Address: 0x2f7980 - 0x2f7cd8
void InitFirePowder__FiP6CSceneiP9mgCMemory_0x2f7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFirePowder__FiP6CSceneiP9mgCMemory_0x2f7980");
#endif

    switch (ctx->pc) {
        case 0x2f7980u: goto label_2f7980;
        case 0x2f7984u: goto label_2f7984;
        case 0x2f7988u: goto label_2f7988;
        case 0x2f798cu: goto label_2f798c;
        case 0x2f7990u: goto label_2f7990;
        case 0x2f7994u: goto label_2f7994;
        case 0x2f7998u: goto label_2f7998;
        case 0x2f799cu: goto label_2f799c;
        case 0x2f79a0u: goto label_2f79a0;
        case 0x2f79a4u: goto label_2f79a4;
        case 0x2f79a8u: goto label_2f79a8;
        case 0x2f79acu: goto label_2f79ac;
        case 0x2f79b0u: goto label_2f79b0;
        case 0x2f79b4u: goto label_2f79b4;
        case 0x2f79b8u: goto label_2f79b8;
        case 0x2f79bcu: goto label_2f79bc;
        case 0x2f79c0u: goto label_2f79c0;
        case 0x2f79c4u: goto label_2f79c4;
        case 0x2f79c8u: goto label_2f79c8;
        case 0x2f79ccu: goto label_2f79cc;
        case 0x2f79d0u: goto label_2f79d0;
        case 0x2f79d4u: goto label_2f79d4;
        case 0x2f79d8u: goto label_2f79d8;
        case 0x2f79dcu: goto label_2f79dc;
        case 0x2f79e0u: goto label_2f79e0;
        case 0x2f79e4u: goto label_2f79e4;
        case 0x2f79e8u: goto label_2f79e8;
        case 0x2f79ecu: goto label_2f79ec;
        case 0x2f79f0u: goto label_2f79f0;
        case 0x2f79f4u: goto label_2f79f4;
        case 0x2f79f8u: goto label_2f79f8;
        case 0x2f79fcu: goto label_2f79fc;
        case 0x2f7a00u: goto label_2f7a00;
        case 0x2f7a04u: goto label_2f7a04;
        case 0x2f7a08u: goto label_2f7a08;
        case 0x2f7a0cu: goto label_2f7a0c;
        case 0x2f7a10u: goto label_2f7a10;
        case 0x2f7a14u: goto label_2f7a14;
        case 0x2f7a18u: goto label_2f7a18;
        case 0x2f7a1cu: goto label_2f7a1c;
        case 0x2f7a20u: goto label_2f7a20;
        case 0x2f7a24u: goto label_2f7a24;
        case 0x2f7a28u: goto label_2f7a28;
        case 0x2f7a2cu: goto label_2f7a2c;
        case 0x2f7a30u: goto label_2f7a30;
        case 0x2f7a34u: goto label_2f7a34;
        case 0x2f7a38u: goto label_2f7a38;
        case 0x2f7a3cu: goto label_2f7a3c;
        case 0x2f7a40u: goto label_2f7a40;
        case 0x2f7a44u: goto label_2f7a44;
        case 0x2f7a48u: goto label_2f7a48;
        case 0x2f7a4cu: goto label_2f7a4c;
        case 0x2f7a50u: goto label_2f7a50;
        case 0x2f7a54u: goto label_2f7a54;
        case 0x2f7a58u: goto label_2f7a58;
        case 0x2f7a5cu: goto label_2f7a5c;
        case 0x2f7a60u: goto label_2f7a60;
        case 0x2f7a64u: goto label_2f7a64;
        case 0x2f7a68u: goto label_2f7a68;
        case 0x2f7a6cu: goto label_2f7a6c;
        case 0x2f7a70u: goto label_2f7a70;
        case 0x2f7a74u: goto label_2f7a74;
        case 0x2f7a78u: goto label_2f7a78;
        case 0x2f7a7cu: goto label_2f7a7c;
        case 0x2f7a80u: goto label_2f7a80;
        case 0x2f7a84u: goto label_2f7a84;
        case 0x2f7a88u: goto label_2f7a88;
        case 0x2f7a8cu: goto label_2f7a8c;
        case 0x2f7a90u: goto label_2f7a90;
        case 0x2f7a94u: goto label_2f7a94;
        case 0x2f7a98u: goto label_2f7a98;
        case 0x2f7a9cu: goto label_2f7a9c;
        case 0x2f7aa0u: goto label_2f7aa0;
        case 0x2f7aa4u: goto label_2f7aa4;
        case 0x2f7aa8u: goto label_2f7aa8;
        case 0x2f7aacu: goto label_2f7aac;
        case 0x2f7ab0u: goto label_2f7ab0;
        case 0x2f7ab4u: goto label_2f7ab4;
        case 0x2f7ab8u: goto label_2f7ab8;
        case 0x2f7abcu: goto label_2f7abc;
        case 0x2f7ac0u: goto label_2f7ac0;
        case 0x2f7ac4u: goto label_2f7ac4;
        case 0x2f7ac8u: goto label_2f7ac8;
        case 0x2f7accu: goto label_2f7acc;
        case 0x2f7ad0u: goto label_2f7ad0;
        case 0x2f7ad4u: goto label_2f7ad4;
        case 0x2f7ad8u: goto label_2f7ad8;
        case 0x2f7adcu: goto label_2f7adc;
        case 0x2f7ae0u: goto label_2f7ae0;
        case 0x2f7ae4u: goto label_2f7ae4;
        case 0x2f7ae8u: goto label_2f7ae8;
        case 0x2f7aecu: goto label_2f7aec;
        case 0x2f7af0u: goto label_2f7af0;
        case 0x2f7af4u: goto label_2f7af4;
        case 0x2f7af8u: goto label_2f7af8;
        case 0x2f7afcu: goto label_2f7afc;
        case 0x2f7b00u: goto label_2f7b00;
        case 0x2f7b04u: goto label_2f7b04;
        case 0x2f7b08u: goto label_2f7b08;
        case 0x2f7b0cu: goto label_2f7b0c;
        case 0x2f7b10u: goto label_2f7b10;
        case 0x2f7b14u: goto label_2f7b14;
        case 0x2f7b18u: goto label_2f7b18;
        case 0x2f7b1cu: goto label_2f7b1c;
        case 0x2f7b20u: goto label_2f7b20;
        case 0x2f7b24u: goto label_2f7b24;
        case 0x2f7b28u: goto label_2f7b28;
        case 0x2f7b2cu: goto label_2f7b2c;
        case 0x2f7b30u: goto label_2f7b30;
        case 0x2f7b34u: goto label_2f7b34;
        case 0x2f7b38u: goto label_2f7b38;
        case 0x2f7b3cu: goto label_2f7b3c;
        case 0x2f7b40u: goto label_2f7b40;
        case 0x2f7b44u: goto label_2f7b44;
        case 0x2f7b48u: goto label_2f7b48;
        case 0x2f7b4cu: goto label_2f7b4c;
        case 0x2f7b50u: goto label_2f7b50;
        case 0x2f7b54u: goto label_2f7b54;
        case 0x2f7b58u: goto label_2f7b58;
        case 0x2f7b5cu: goto label_2f7b5c;
        case 0x2f7b60u: goto label_2f7b60;
        case 0x2f7b64u: goto label_2f7b64;
        case 0x2f7b68u: goto label_2f7b68;
        case 0x2f7b6cu: goto label_2f7b6c;
        case 0x2f7b70u: goto label_2f7b70;
        case 0x2f7b74u: goto label_2f7b74;
        case 0x2f7b78u: goto label_2f7b78;
        case 0x2f7b7cu: goto label_2f7b7c;
        case 0x2f7b80u: goto label_2f7b80;
        case 0x2f7b84u: goto label_2f7b84;
        case 0x2f7b88u: goto label_2f7b88;
        case 0x2f7b8cu: goto label_2f7b8c;
        case 0x2f7b90u: goto label_2f7b90;
        case 0x2f7b94u: goto label_2f7b94;
        case 0x2f7b98u: goto label_2f7b98;
        case 0x2f7b9cu: goto label_2f7b9c;
        case 0x2f7ba0u: goto label_2f7ba0;
        case 0x2f7ba4u: goto label_2f7ba4;
        case 0x2f7ba8u: goto label_2f7ba8;
        case 0x2f7bacu: goto label_2f7bac;
        case 0x2f7bb0u: goto label_2f7bb0;
        case 0x2f7bb4u: goto label_2f7bb4;
        case 0x2f7bb8u: goto label_2f7bb8;
        case 0x2f7bbcu: goto label_2f7bbc;
        case 0x2f7bc0u: goto label_2f7bc0;
        case 0x2f7bc4u: goto label_2f7bc4;
        case 0x2f7bc8u: goto label_2f7bc8;
        case 0x2f7bccu: goto label_2f7bcc;
        case 0x2f7bd0u: goto label_2f7bd0;
        case 0x2f7bd4u: goto label_2f7bd4;
        case 0x2f7bd8u: goto label_2f7bd8;
        case 0x2f7bdcu: goto label_2f7bdc;
        case 0x2f7be0u: goto label_2f7be0;
        case 0x2f7be4u: goto label_2f7be4;
        case 0x2f7be8u: goto label_2f7be8;
        case 0x2f7becu: goto label_2f7bec;
        case 0x2f7bf0u: goto label_2f7bf0;
        case 0x2f7bf4u: goto label_2f7bf4;
        case 0x2f7bf8u: goto label_2f7bf8;
        case 0x2f7bfcu: goto label_2f7bfc;
        case 0x2f7c00u: goto label_2f7c00;
        case 0x2f7c04u: goto label_2f7c04;
        case 0x2f7c08u: goto label_2f7c08;
        case 0x2f7c0cu: goto label_2f7c0c;
        case 0x2f7c10u: goto label_2f7c10;
        case 0x2f7c14u: goto label_2f7c14;
        case 0x2f7c18u: goto label_2f7c18;
        case 0x2f7c1cu: goto label_2f7c1c;
        case 0x2f7c20u: goto label_2f7c20;
        case 0x2f7c24u: goto label_2f7c24;
        case 0x2f7c28u: goto label_2f7c28;
        case 0x2f7c2cu: goto label_2f7c2c;
        case 0x2f7c30u: goto label_2f7c30;
        case 0x2f7c34u: goto label_2f7c34;
        case 0x2f7c38u: goto label_2f7c38;
        case 0x2f7c3cu: goto label_2f7c3c;
        case 0x2f7c40u: goto label_2f7c40;
        case 0x2f7c44u: goto label_2f7c44;
        case 0x2f7c48u: goto label_2f7c48;
        case 0x2f7c4cu: goto label_2f7c4c;
        case 0x2f7c50u: goto label_2f7c50;
        case 0x2f7c54u: goto label_2f7c54;
        case 0x2f7c58u: goto label_2f7c58;
        case 0x2f7c5cu: goto label_2f7c5c;
        case 0x2f7c60u: goto label_2f7c60;
        case 0x2f7c64u: goto label_2f7c64;
        case 0x2f7c68u: goto label_2f7c68;
        case 0x2f7c6cu: goto label_2f7c6c;
        case 0x2f7c70u: goto label_2f7c70;
        case 0x2f7c74u: goto label_2f7c74;
        case 0x2f7c78u: goto label_2f7c78;
        case 0x2f7c7cu: goto label_2f7c7c;
        case 0x2f7c80u: goto label_2f7c80;
        case 0x2f7c84u: goto label_2f7c84;
        case 0x2f7c88u: goto label_2f7c88;
        case 0x2f7c8cu: goto label_2f7c8c;
        case 0x2f7c90u: goto label_2f7c90;
        case 0x2f7c94u: goto label_2f7c94;
        case 0x2f7c98u: goto label_2f7c98;
        case 0x2f7c9cu: goto label_2f7c9c;
        case 0x2f7ca0u: goto label_2f7ca0;
        case 0x2f7ca4u: goto label_2f7ca4;
        case 0x2f7ca8u: goto label_2f7ca8;
        case 0x2f7cacu: goto label_2f7cac;
        case 0x2f7cb0u: goto label_2f7cb0;
        case 0x2f7cb4u: goto label_2f7cb4;
        case 0x2f7cb8u: goto label_2f7cb8;
        case 0x2f7cbcu: goto label_2f7cbc;
        case 0x2f7cc0u: goto label_2f7cc0;
        case 0x2f7cc4u: goto label_2f7cc4;
        case 0x2f7cc8u: goto label_2f7cc8;
        case 0x2f7cccu: goto label_2f7ccc;
        case 0x2f7cd0u: goto label_2f7cd0;
        case 0x2f7cd4u: goto label_2f7cd4;
        default: break;
    }

    ctx->pc = 0x2f7980u;

label_2f7980:
    // 0x2f7980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f7980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f7984:
    // 0x2f7984: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f7984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f7988:
    // 0x2f7988: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f7988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2f798c:
    // 0x2f798c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f7990:
    // 0x2f7990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f7990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f7994:
    // 0x2f7994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f7994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f7998:
    // 0x2f7998: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f7998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f799c:
    // 0x2f799c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f79a0:
    // 0x2f79a0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f79a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f79a4:
    // 0x2f79a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f79a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f79a8:
    // 0x2f79a8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_2f79ac:
    if (ctx->pc == 0x2F79ACu) {
        ctx->pc = 0x2F79ACu;
            // 0x2f79ac: 0xaf809f24  sw          $zero, -0x60DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942500), GPR_U32(ctx, 0));
        ctx->pc = 0x2F79B0u;
        goto label_2f79b0;
    }
    ctx->pc = 0x2F79A8u;
    {
        const bool branch_taken_0x2f79a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F79ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F79A8u;
            // 0x2f79ac: 0xaf809f24  sw          $zero, -0x60DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79a8) {
            ctx->pc = 0x2F79C4u;
            goto label_2f79c4;
        }
    }
    ctx->pc = 0x2F79B0u;
label_2f79b0:
    // 0x2f79b0: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x2f79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_2f79b4:
    // 0x2f79b4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2f79b8:
    if (ctx->pc == 0x2F79B8u) {
        ctx->pc = 0x2F79B8u;
            // 0x2f79b8: 0x24030055  addiu       $v1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->pc = 0x2F79BCu;
        goto label_2f79bc;
    }
    ctx->pc = 0x2F79B4u;
    {
        const bool branch_taken_0x2f79b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F79B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F79B4u;
            // 0x2f79b8: 0x24030055  addiu       $v1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79b4) {
            ctx->pc = 0x2F79C4u;
            goto label_2f79c4;
        }
    }
    ctx->pc = 0x2F79BCu;
label_2f79bc:
    // 0x2f79bc: 0x148300bf  bne         $a0, $v1, . + 4 + (0xBF << 2)
label_2f79c0:
    if (ctx->pc == 0x2F79C0u) {
        ctx->pc = 0x2F79C4u;
        goto label_2f79c4;
    }
    ctx->pc = 0x2F79BCu;
    {
        const bool branch_taken_0x2f79bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f79bc) {
            ctx->pc = 0x2F7CBCu;
            goto label_2f7cbc;
        }
    }
    ctx->pc = 0x2F79C4u;
label_2f79c4:
    // 0x2f79c4: 0xc064220  jal         func_190880
label_2f79c8:
    if (ctx->pc == 0x2F79C8u) {
        ctx->pc = 0x2F79CCu;
        goto label_2f79cc;
    }
    ctx->pc = 0x2F79C4u;
    SET_GPR_U32(ctx, 31, 0x2F79CCu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F79CCu; }
        if (ctx->pc != 0x2F79CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F79CCu; }
        if (ctx->pc != 0x2F79CCu) { return; }
    }
    ctx->pc = 0x2F79CCu;
label_2f79cc:
    // 0x2f79cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f79ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f79d0:
    // 0x2f79d0: 0xc0bd920  jal         func_2F6480
label_2f79d4:
    if (ctx->pc == 0x2F79D4u) {
        ctx->pc = 0x2F79D4u;
            // 0x2f79d4: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->pc = 0x2F79D8u;
        goto label_2f79d8;
    }
    ctx->pc = 0x2F79D0u;
    SET_GPR_U32(ctx, 31, 0x2F79D8u);
    ctx->pc = 0x2F79D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F79D0u;
            // 0x2f79d4: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F79D8u; }
        if (ctx->pc != 0x2F79D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F79D8u; }
        if (ctx->pc != 0x2F79D8u) { return; }
    }
    ctx->pc = 0x2F79D8u;
label_2f79d8:
    // 0x2f79d8: 0x144000b8  bnez        $v0, . + 4 + (0xB8 << 2)
label_2f79dc:
    if (ctx->pc == 0x2F79DCu) {
        ctx->pc = 0x2F79E0u;
        goto label_2f79e0;
    }
    ctx->pc = 0x2F79D8u;
    {
        const bool branch_taken_0x2f79d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f79d8) {
            ctx->pc = 0x2F7CBCu;
            goto label_2f7cbc;
        }
    }
    ctx->pc = 0x2F79E0u;
label_2f79e0:
    // 0x2f79e0: 0x8e10003c  lw          $s0, 0x3C($s0)
    ctx->pc = 0x2f79e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2f79e4:
    // 0x2f79e4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2f79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2f79e8:
    // 0x2f79e8: 0x24841a80  addiu       $a0, $a0, 0x1A80
    ctx->pc = 0x2f79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6784));
label_2f79ec:
    // 0x2f79ec: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x2f79ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2f79f0:
    // 0x2f79f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f79f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f79f4:
    // 0x2f79f4: 0xc0524dc  jal         func_149370
label_2f79f8:
    if (ctx->pc == 0x2F79F8u) {
        ctx->pc = 0x2F79F8u;
            // 0x2f79f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F79FCu;
        goto label_2f79fc;
    }
    ctx->pc = 0x2F79F4u;
    SET_GPR_U32(ctx, 31, 0x2F79FCu);
    ctx->pc = 0x2F79F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F79F4u;
            // 0x2f79f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F79FCu; }
        if (ctx->pc != 0x2F79FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F79FCu; }
        if (ctx->pc != 0x2F79FCu) { return; }
    }
    ctx->pc = 0x2F79FCu;
label_2f79fc:
    // 0x2f79fc: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
label_2f7a00:
    if (ctx->pc == 0x2F7A00u) {
        ctx->pc = 0x2F7A04u;
        goto label_2f7a04;
    }
    ctx->pc = 0x2F79FCu;
    {
        const bool branch_taken_0x2f79fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f79fc) {
            ctx->pc = 0x2F7CBCu;
            goto label_2f7cbc;
        }
    }
    ctx->pc = 0x2F7A04u;
label_2f7a04:
    // 0x2f7a04: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2f7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2f7a08:
    // 0x2f7a08: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2f7a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2f7a0c:
    // 0x2f7a0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f7a10:
    if (ctx->pc == 0x2F7A10u) {
        ctx->pc = 0x2F7A10u;
            // 0x2f7a10: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2F7A14u;
        goto label_2f7a14;
    }
    ctx->pc = 0x2F7A0Cu;
    {
        const bool branch_taken_0x2f7a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A0Cu;
            // 0x2f7a10: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a0c) {
            ctx->pc = 0x2F7A1Cu;
            goto label_2f7a1c;
        }
    }
    ctx->pc = 0x2F7A14u;
label_2f7a14:
    // 0x2f7a14: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2f7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2f7a18:
    // 0x2f7a18: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2f7a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f7a1c:
    // 0x2f7a1c: 0xc04e748  jal         func_139D20
label_2f7a20:
    if (ctx->pc == 0x2F7A20u) {
        ctx->pc = 0x2F7A20u;
            // 0x2f7a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A24u;
        goto label_2f7a24;
    }
    ctx->pc = 0x2F7A1Cu;
    SET_GPR_U32(ctx, 31, 0x2F7A24u);
    ctx->pc = 0x2F7A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A1Cu;
            // 0x2f7a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A24u; }
        if (ctx->pc != 0x2F7A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A24u; }
        if (ctx->pc != 0x2F7A24u) { return; }
    }
    ctx->pc = 0x2F7A24u;
label_2f7a24:
    // 0x2f7a24: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2f7a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2f7a28:
    // 0x2f7a28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f7a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a2c:
    // 0x2f7a2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f7a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a30:
    // 0x2f7a30: 0xc049c18  jal         func_127060
label_2f7a34:
    if (ctx->pc == 0x2F7A34u) {
        ctx->pc = 0x2F7A34u;
            // 0x2f7a34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A38u;
        goto label_2f7a38;
    }
    ctx->pc = 0x2F7A30u;
    SET_GPR_U32(ctx, 31, 0x2F7A38u);
    ctx->pc = 0x2F7A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A30u;
            // 0x2f7a34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A38u; }
        if (ctx->pc != 0x2F7A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A38u; }
        if (ctx->pc != 0x2F7A38u) { return; }
    }
    ctx->pc = 0x2F7A38u;
label_2f7a38:
    // 0x2f7a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7a3c:
    // 0x2f7a3c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2f7a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2f7a40:
    // 0x2f7a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f7a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a44:
    // 0x2f7a44: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2f7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2f7a48:
    // 0x2f7a48: 0xaf829f24  sw          $v0, -0x60DC($gp)
    ctx->pc = 0x2f7a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942500), GPR_U32(ctx, 2));
label_2f7a4c:
    // 0x2f7a4c: 0xc04b950  jal         func_12E540
label_2f7a50:
    if (ctx->pc == 0x2F7A50u) {
        ctx->pc = 0x2F7A50u;
            // 0x2f7a50: 0xaf929f28  sw          $s2, -0x60D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942504), GPR_U32(ctx, 18));
        ctx->pc = 0x2F7A54u;
        goto label_2f7a54;
    }
    ctx->pc = 0x2F7A4Cu;
    SET_GPR_U32(ctx, 31, 0x2F7A54u);
    ctx->pc = 0x2F7A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A4Cu;
            // 0x2f7a50: 0xaf929f28  sw          $s2, -0x60D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942504), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A54u; }
        if (ctx->pc != 0x2F7A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A54u; }
        if (ctx->pc != 0x2F7A54u) { return; }
    }
    ctx->pc = 0x2F7A54u;
label_2f7a54:
    // 0x2f7a54: 0x8f869f28  lw          $a2, -0x60D8($gp)
    ctx->pc = 0x2f7a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942504)));
label_2f7a58:
    // 0x2f7a58: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2f7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2f7a5c:
    // 0x2f7a5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f7a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a60:
    // 0x2f7a60: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2f7a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2f7a64:
    // 0x2f7a64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f7a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a68:
    // 0x2f7a68: 0xc04b6a4  jal         func_12DA90
label_2f7a6c:
    if (ctx->pc == 0x2F7A6Cu) {
        ctx->pc = 0x2F7A6Cu;
            // 0x2f7a6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A70u;
        goto label_2f7a70;
    }
    ctx->pc = 0x2F7A68u;
    SET_GPR_U32(ctx, 31, 0x2F7A70u);
    ctx->pc = 0x2F7A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A68u;
            // 0x2f7a6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A70u; }
        if (ctx->pc != 0x2F7A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A70u; }
        if (ctx->pc != 0x2F7A70u) { return; }
    }
    ctx->pc = 0x2F7A70u;
label_2f7a70:
    // 0x2f7a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a74:
    // 0x2f7a74: 0xc04e748  jal         func_139D20
label_2f7a78:
    if (ctx->pc == 0x2F7A78u) {
        ctx->pc = 0x2F7A78u;
            // 0x2f7a78: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2F7A7Cu;
        goto label_2f7a7c;
    }
    ctx->pc = 0x2F7A74u;
    SET_GPR_U32(ctx, 31, 0x2F7A7Cu);
    ctx->pc = 0x2F7A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A74u;
            // 0x2f7a78: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A7Cu; }
        if (ctx->pc != 0x2F7A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A7Cu; }
        if (ctx->pc != 0x2F7A7Cu) { return; }
    }
    ctx->pc = 0x2F7A7Cu;
label_2f7a7c:
    // 0x2f7a7c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2f7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2f7a80:
    // 0x2f7a80: 0xc04e638  jal         func_1398E0
label_2f7a84:
    if (ctx->pc == 0x2F7A84u) {
        ctx->pc = 0x2F7A84u;
            // 0x2f7a84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A88u;
        goto label_2f7a88;
    }
    ctx->pc = 0x2F7A80u;
    SET_GPR_U32(ctx, 31, 0x2F7A88u);
    ctx->pc = 0x2F7A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A80u;
            // 0x2f7a84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A88u; }
        if (ctx->pc != 0x2F7A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A88u; }
        if (ctx->pc != 0x2F7A88u) { return; }
    }
    ctx->pc = 0x2F7A88u;
label_2f7a88:
    // 0x2f7a88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2f7a8c:
    if (ctx->pc == 0x2F7A8Cu) {
        ctx->pc = 0x2F7A8Cu;
            // 0x2f7a8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A90u;
        goto label_2f7a90;
    }
    ctx->pc = 0x2F7A88u;
    {
        const bool branch_taken_0x2f7a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A88u;
            // 0x2f7a8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a88) {
            ctx->pc = 0x2F7AC8u;
            goto label_2f7ac8;
        }
    }
    ctx->pc = 0x2F7A90u;
label_2f7a90:
    // 0x2f7a90: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2f7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2f7a94:
    // 0x2f7a94: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x2f7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_2f7a98:
    // 0x2f7a98: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2f7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2f7a9c:
    // 0x2f7a9c: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x2f7a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2f7aa0:
    // 0x2f7aa0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f7aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f7aa4:
    // 0x2f7aa4: 0x320f809  jalr        $t9
label_2f7aa8:
    if (ctx->pc == 0x2F7AA8u) {
        ctx->pc = 0x2F7AA8u;
            // 0x2f7aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AACu;
        goto label_2f7aac;
    }
    ctx->pc = 0x2F7AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7AACu);
        ctx->pc = 0x2F7AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7AA4u;
            // 0x2f7aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7AACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AACu; }
            if (ctx->pc != 0x2F7AACu) { return; }
        }
        }
    }
    ctx->pc = 0x2F7AACu;
label_2f7aac:
    // 0x2f7aac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2f7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2f7ab0:
    // 0x2f7ab0: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x2f7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_2f7ab4:
    // 0x2f7ab4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2f7ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2f7ab8:
    // 0x2f7ab8: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x2f7ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2f7abc:
    // 0x2f7abc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f7abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f7ac0:
    // 0x2f7ac0: 0x320f809  jalr        $t9
label_2f7ac4:
    if (ctx->pc == 0x2F7AC4u) {
        ctx->pc = 0x2F7AC4u;
            // 0x2f7ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AC8u;
        goto label_2f7ac8;
    }
    ctx->pc = 0x2F7AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7AC8u);
        ctx->pc = 0x2F7AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7AC0u;
            // 0x2f7ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AC8u; }
            if (ctx->pc != 0x2F7AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7AC8u;
label_2f7ac8:
    // 0x2f7ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7acc:
    // 0x2f7acc: 0x24050202  addiu       $a1, $zero, 0x202
    ctx->pc = 0x2f7accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
label_2f7ad0:
    // 0x2f7ad0: 0xc04e748  jal         func_139D20
label_2f7ad4:
    if (ctx->pc == 0x2F7AD4u) {
        ctx->pc = 0x2F7AD4u;
            // 0x2f7ad4: 0xaf909f2c  sw          $s0, -0x60D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942508), GPR_U32(ctx, 16));
        ctx->pc = 0x2F7AD8u;
        goto label_2f7ad8;
    }
    ctx->pc = 0x2F7AD0u;
    SET_GPR_U32(ctx, 31, 0x2F7AD8u);
    ctx->pc = 0x2F7AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7AD0u;
            // 0x2f7ad4: 0xaf909f2c  sw          $s0, -0x60D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AD8u; }
        if (ctx->pc != 0x2F7AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AD8u; }
        if (ctx->pc != 0x2F7AD8u) { return; }
    }
    ctx->pc = 0x2F7AD8u;
label_2f7ad8:
    // 0x2f7ad8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x2f7ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2f7adc:
    // 0x2f7adc: 0xc04e63c  jal         func_1398F0
label_2f7ae0:
    if (ctx->pc == 0x2F7AE0u) {
        ctx->pc = 0x2F7AE0u;
            // 0x2f7ae0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AE4u;
        goto label_2f7ae4;
    }
    ctx->pc = 0x2F7ADCu;
    SET_GPR_U32(ctx, 31, 0x2F7AE4u);
    ctx->pc = 0x2F7AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7ADCu;
            // 0x2f7ae0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AE4u; }
        if (ctx->pc != 0x2F7AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AE4u; }
        if (ctx->pc != 0x2F7AE4u) { return; }
    }
    ctx->pc = 0x2F7AE4u;
label_2f7ae4:
    // 0x2f7ae4: 0xaf829f34  sw          $v0, -0x60CC($gp)
    ctx->pc = 0x2f7ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942516), GPR_U32(ctx, 2));
label_2f7ae8:
    // 0x2f7ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7aec:
    // 0x2f7aec: 0xc04e748  jal         func_139D20
label_2f7af0:
    if (ctx->pc == 0x2F7AF0u) {
        ctx->pc = 0x2F7AF0u;
            // 0x2f7af0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2F7AF4u;
        goto label_2f7af4;
    }
    ctx->pc = 0x2F7AECu;
    SET_GPR_U32(ctx, 31, 0x2F7AF4u);
    ctx->pc = 0x2F7AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7AECu;
            // 0x2f7af0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AF4u; }
        if (ctx->pc != 0x2F7AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AF4u; }
        if (ctx->pc != 0x2F7AF4u) { return; }
    }
    ctx->pc = 0x2F7AF4u;
label_2f7af4:
    // 0x2f7af4: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x2f7af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_2f7af8:
    // 0x2f7af8: 0xc04e638  jal         func_1398E0
label_2f7afc:
    if (ctx->pc == 0x2F7AFCu) {
        ctx->pc = 0x2F7AFCu;
            // 0x2f7afc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B00u;
        goto label_2f7b00;
    }
    ctx->pc = 0x2F7AF8u;
    SET_GPR_U32(ctx, 31, 0x2F7B00u);
    ctx->pc = 0x2F7AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7AF8u;
            // 0x2f7afc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B00u; }
        if (ctx->pc != 0x2F7B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B00u; }
        if (ctx->pc != 0x2F7B00u) { return; }
    }
    ctx->pc = 0x2F7B00u;
label_2f7b00:
    // 0x2f7b00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f7b04:
    if (ctx->pc == 0x2F7B04u) {
        ctx->pc = 0x2F7B04u;
            // 0x2f7b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B08u;
        goto label_2f7b08;
    }
    ctx->pc = 0x2F7B00u;
    {
        const bool branch_taken_0x2f7b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B00u;
            // 0x2f7b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b00) {
            ctx->pc = 0x2F7B14u;
            goto label_2f7b14;
        }
    }
    ctx->pc = 0x2F7B08u;
label_2f7b08:
    // 0x2f7b08: 0xc04d924  jal         func_136490
label_2f7b0c:
    if (ctx->pc == 0x2F7B0Cu) {
        ctx->pc = 0x2F7B0Cu;
            // 0x2f7b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B10u;
        goto label_2f7b10;
    }
    ctx->pc = 0x2F7B08u;
    SET_GPR_U32(ctx, 31, 0x2F7B10u);
    ctx->pc = 0x2F7B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B08u;
            // 0x2f7b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B10u; }
        if (ctx->pc != 0x2F7B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B10u; }
        if (ctx->pc != 0x2F7B10u) { return; }
    }
    ctx->pc = 0x2F7B10u;
label_2f7b10:
    // 0x2f7b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b14:
    // 0x2f7b14: 0xaf829f30  sw          $v0, -0x60D0($gp)
    ctx->pc = 0x2f7b14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942512), GPR_U32(ctx, 2));
label_2f7b18:
    // 0x2f7b18: 0xc04e748  jal         func_139D20
label_2f7b1c:
    if (ctx->pc == 0x2F7B1Cu) {
        ctx->pc = 0x2F7B1Cu;
            // 0x2f7b1c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2F7B20u;
        goto label_2f7b20;
    }
    ctx->pc = 0x2F7B18u;
    SET_GPR_U32(ctx, 31, 0x2F7B20u);
    ctx->pc = 0x2F7B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B18u;
            // 0x2f7b1c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B20u; }
        if (ctx->pc != 0x2F7B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B20u; }
        if (ctx->pc != 0x2F7B20u) { return; }
    }
    ctx->pc = 0x2F7B20u;
label_2f7b20:
    // 0x2f7b20: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2f7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2f7b24:
    // 0x2f7b24: 0xc04e638  jal         func_1398E0
label_2f7b28:
    if (ctx->pc == 0x2F7B28u) {
        ctx->pc = 0x2F7B28u;
            // 0x2f7b28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B2Cu;
        goto label_2f7b2c;
    }
    ctx->pc = 0x2F7B24u;
    SET_GPR_U32(ctx, 31, 0x2F7B2Cu);
    ctx->pc = 0x2F7B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B24u;
            // 0x2f7b28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B2Cu; }
        if (ctx->pc != 0x2F7B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B2Cu; }
        if (ctx->pc != 0x2F7B2Cu) { return; }
    }
    ctx->pc = 0x2F7B2Cu;
label_2f7b2c:
    // 0x2f7b2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f7b30:
    if (ctx->pc == 0x2F7B30u) {
        ctx->pc = 0x2F7B30u;
            // 0x2f7b30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B34u;
        goto label_2f7b34;
    }
    ctx->pc = 0x2F7B2Cu;
    {
        const bool branch_taken_0x2f7b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B2Cu;
            // 0x2f7b30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b2c) {
            ctx->pc = 0x2F7B3Cu;
            goto label_2f7b3c;
        }
    }
    ctx->pc = 0x2F7B34u;
label_2f7b34:
    // 0x2f7b34: 0xc04d6d8  jal         func_135B60
label_2f7b38:
    if (ctx->pc == 0x2F7B38u) {
        ctx->pc = 0x2F7B3Cu;
        goto label_2f7b3c;
    }
    ctx->pc = 0x2F7B34u;
    SET_GPR_U32(ctx, 31, 0x2F7B3Cu);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B3Cu; }
        if (ctx->pc != 0x2F7B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B3Cu; }
        if (ctx->pc != 0x2F7B3Cu) { return; }
    }
    ctx->pc = 0x2F7B3Cu;
label_2f7b3c:
    // 0x2f7b3c: 0x8f859f30  lw          $a1, -0x60D0($gp)
    ctx->pc = 0x2f7b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942512)));
label_2f7b40:
    // 0x2f7b40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f7b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f7b44:
    // 0x2f7b44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7b48:
    // 0x2f7b48: 0xaca200f4  sw          $v0, 0xF4($a1)
    ctx->pc = 0x2f7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 2));
label_2f7b4c:
    // 0x2f7b4c: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x2f7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
label_2f7b50:
    // 0x2f7b50: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2f7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2f7b54:
    // 0x2f7b54: 0x8f849f30  lw          $a0, -0x60D0($gp)
    ctx->pc = 0x2f7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942512)));
label_2f7b58:
    // 0x2f7b58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7b5c:
    // 0x2f7b5c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x2f7b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_2f7b60:
    // 0x2f7b60: 0x320f809  jalr        $t9
label_2f7b64:
    if (ctx->pc == 0x2F7B64u) {
        ctx->pc = 0x2F7B64u;
            // 0x2f7b64: 0x8f859f2c  lw          $a1, -0x60D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942508)));
        ctx->pc = 0x2F7B68u;
        goto label_2f7b68;
    }
    ctx->pc = 0x2F7B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7B68u);
        ctx->pc = 0x2F7B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B60u;
            // 0x2f7b64: 0x8f859f2c  lw          $a1, -0x60D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942508)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B68u; }
            if (ctx->pc != 0x2F7B68u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7B68u;
label_2f7b68:
    // 0x2f7b68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f7b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b6c:
    // 0x2f7b6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f7b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b70:
    // 0x2f7b70: 0x8f829f34  lw          $v0, -0x60CC($gp)
    ctx->pc = 0x2f7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942516)));
label_2f7b74:
    // 0x2f7b74: 0xc04c3b8  jal         func_130EE0
label_2f7b78:
    if (ctx->pc == 0x2F7B78u) {
        ctx->pc = 0x2F7B78u;
            // 0x2f7b78: 0x528821  addu        $s1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x2F7B7Cu;
        goto label_2f7b7c;
    }
    ctx->pc = 0x2F7B74u;
    SET_GPR_U32(ctx, 31, 0x2F7B7Cu);
    ctx->pc = 0x2F7B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B74u;
            // 0x2f7b78: 0x528821  addu        $s1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B7Cu; }
        if (ctx->pc != 0x2F7B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7B7Cu; }
        if (ctx->pc != 0x2F7B7Cu) { return; }
    }
    ctx->pc = 0x2F7B7Cu;
label_2f7b7c:
    // 0x2f7b7c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f7b80:
    // 0x2f7b80: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2f7b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_2f7b84:
    // 0x2f7b84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7b88:
    // 0x2f7b88: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f7b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f7b8c:
    // 0x2f7b8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f7b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f7b90:
    // 0x2f7b90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2f7b94:
    // 0x2f7b94: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f7b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f7b98:
    // 0x2f7b98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7b9c:
    // 0x2f7b9c: 0x0  nop
    ctx->pc = 0x2f7b9cu;
    // NOP
label_2f7ba0:
    // 0x2f7ba0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f7ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7ba4:
    // 0x2f7ba4: 0xc04c3b8  jal         func_130EE0
label_2f7ba8:
    if (ctx->pc == 0x2F7BA8u) {
        ctx->pc = 0x2F7BA8u;
            // 0x2f7ba8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x2F7BACu;
        goto label_2f7bac;
    }
    ctx->pc = 0x2F7BA4u;
    SET_GPR_U32(ctx, 31, 0x2F7BACu);
    ctx->pc = 0x2F7BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7BA4u;
            // 0x2f7ba8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7BACu; }
        if (ctx->pc != 0x2F7BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7BACu; }
        if (ctx->pc != 0x2F7BACu) { return; }
    }
    ctx->pc = 0x2F7BACu;
label_2f7bac:
    // 0x2f7bac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f7bb0:
    // 0x2f7bb0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2f7bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_2f7bb4:
    // 0x2f7bb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f7bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f7bb8:
    // 0x2f7bb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7bbc:
    // 0x2f7bbc: 0x0  nop
    ctx->pc = 0x2f7bbcu;
    // NOP
label_2f7bc0:
    // 0x2f7bc0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f7bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2f7bc4:
    // 0x2f7bc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2f7bc8:
    // 0x2f7bc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7bcc:
    // 0x2f7bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f7bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7bd0:
    // 0x2f7bd0: 0x0  nop
    ctx->pc = 0x2f7bd0u;
    // NOP
label_2f7bd4:
    // 0x2f7bd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f7bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f7bd8:
    // 0x2f7bd8: 0xc04c3b8  jal         func_130EE0
label_2f7bdc:
    if (ctx->pc == 0x2F7BDCu) {
        ctx->pc = 0x2F7BDCu;
            // 0x2f7bdc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->pc = 0x2F7BE0u;
        goto label_2f7be0;
    }
    ctx->pc = 0x2F7BD8u;
    SET_GPR_U32(ctx, 31, 0x2F7BE0u);
    ctx->pc = 0x2F7BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7BD8u;
            // 0x2f7bdc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7BE0u; }
        if (ctx->pc != 0x2F7BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7BE0u; }
        if (ctx->pc != 0x2F7BE0u) { return; }
    }
    ctx->pc = 0x2F7BE0u;
label_2f7be0:
    // 0x2f7be0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f7be4:
    // 0x2f7be4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2f7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_2f7be8:
    // 0x2f7be8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f7be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f7bec:
    // 0x2f7bec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7bf0:
    // 0x2f7bf0: 0x0  nop
    ctx->pc = 0x2f7bf0u;
    // NOP
label_2f7bf4:
    // 0x2f7bf4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f7bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2f7bf8:
    // 0x2f7bf8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2f7bfc:
    // 0x2f7bfc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7bfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7c00:
    // 0x2f7c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f7c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7c04:
    // 0x2f7c04: 0x0  nop
    ctx->pc = 0x2f7c04u;
    // NOP
label_2f7c08:
    // 0x2f7c08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f7c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f7c0c:
    // 0x2f7c0c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2f7c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2f7c10:
    // 0x2f7c10: 0xc04c3b8  jal         func_130EE0
label_2f7c14:
    if (ctx->pc == 0x2F7C14u) {
        ctx->pc = 0x2F7C14u;
            // 0x2f7c14: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2F7C18u;
        goto label_2f7c18;
    }
    ctx->pc = 0x2F7C10u;
    SET_GPR_U32(ctx, 31, 0x2F7C18u);
    ctx->pc = 0x2F7C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C10u;
            // 0x2f7c14: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C18u; }
        if (ctx->pc != 0x2F7C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C18u; }
        if (ctx->pc != 0x2F7C18u) { return; }
    }
    ctx->pc = 0x2F7C18u;
label_2f7c18:
    // 0x2f7c18: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2f7c1c:
    // 0x2f7c1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f7c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2f7c20:
    // 0x2f7c20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7c24:
    // 0x2f7c24: 0x0  nop
    ctx->pc = 0x2f7c24u;
    // NOP
label_2f7c28:
    // 0x2f7c28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f7c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7c2c:
    // 0x2f7c2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f7c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f7c30:
    // 0x2f7c30: 0xc04c3b8  jal         func_130EE0
label_2f7c34:
    if (ctx->pc == 0x2F7C34u) {
        ctx->pc = 0x2F7C34u;
            // 0x2f7c34: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->pc = 0x2F7C38u;
        goto label_2f7c38;
    }
    ctx->pc = 0x2F7C30u;
    SET_GPR_U32(ctx, 31, 0x2F7C38u);
    ctx->pc = 0x2F7C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C30u;
            // 0x2f7c34: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C38u; }
        if (ctx->pc != 0x2F7C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C38u; }
        if (ctx->pc != 0x2F7C38u) { return; }
    }
    ctx->pc = 0x2F7C38u;
label_2f7c38:
    // 0x2f7c38: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2f7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2f7c3c:
    // 0x2f7c3c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2f7c40:
    // 0x2f7c40: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f7c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f7c44:
    // 0x2f7c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7c48:
    // 0x2f7c48: 0x0  nop
    ctx->pc = 0x2f7c48u;
    // NOP
label_2f7c4c:
    // 0x2f7c4c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f7c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2f7c50:
    // 0x2f7c50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f7c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7c54:
    // 0x2f7c54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f7c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7c58:
    // 0x2f7c58: 0xc04c3b8  jal         func_130EE0
label_2f7c5c:
    if (ctx->pc == 0x2F7C5Cu) {
        ctx->pc = 0x2F7C5Cu;
            // 0x2f7c5c: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->pc = 0x2F7C60u;
        goto label_2f7c60;
    }
    ctx->pc = 0x2F7C58u;
    SET_GPR_U32(ctx, 31, 0x2F7C60u);
    ctx->pc = 0x2F7C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C58u;
            // 0x2f7c5c: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C60u; }
        if (ctx->pc != 0x2F7C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C60u; }
        if (ctx->pc != 0x2F7C60u) { return; }
    }
    ctx->pc = 0x2F7C60u;
label_2f7c60:
    // 0x2f7c60: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2f7c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2f7c64:
    // 0x2f7c64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2f7c68:
    // 0x2f7c68: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f7c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f7c6c:
    // 0x2f7c6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7c70:
    // 0x2f7c70: 0x0  nop
    ctx->pc = 0x2f7c70u;
    // NOP
label_2f7c74:
    // 0x2f7c74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f7c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2f7c78:
    // 0x2f7c78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f7c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7c7c:
    // 0x2f7c7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f7c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7c80:
    // 0x2f7c80: 0xc04c3b8  jal         func_130EE0
label_2f7c84:
    if (ctx->pc == 0x2F7C84u) {
        ctx->pc = 0x2F7C84u;
            // 0x2f7c84: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->pc = 0x2F7C88u;
        goto label_2f7c88;
    }
    ctx->pc = 0x2F7C80u;
    SET_GPR_U32(ctx, 31, 0x2F7C88u);
    ctx->pc = 0x2F7C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C80u;
            // 0x2f7c84: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C88u; }
        if (ctx->pc != 0x2F7C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C88u; }
        if (ctx->pc != 0x2F7C88u) { return; }
    }
    ctx->pc = 0x2F7C88u;
label_2f7c88:
    // 0x2f7c88: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2f7c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_2f7c8c:
    // 0x2f7c8c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2f7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_2f7c90:
    // 0x2f7c90: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2f7c90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f7c94:
    // 0x2f7c94: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2f7c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2f7c98:
    // 0x2f7c98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7c9c:
    // 0x2f7c9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f7c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f7ca0:
    // 0x2f7ca0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f7ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f7ca4:
    // 0x2f7ca4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2f7ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2f7ca8:
    // 0x2f7ca8: 0x2a030100  slti        $v1, $s0, 0x100
    ctx->pc = 0x2f7ca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_2f7cac:
    // 0x2f7cac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f7cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f7cb0:
    // 0x2f7cb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f7cb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2f7cb4:
    // 0x2f7cb4: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
label_2f7cb8:
    if (ctx->pc == 0x2F7CB8u) {
        ctx->pc = 0x2F7CB8u;
            // 0x2f7cb8: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x2F7CBCu;
        goto label_2f7cbc;
    }
    ctx->pc = 0x2F7CB4u;
    {
        const bool branch_taken_0x2f7cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7CB4u;
            // 0x2f7cb8: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7cb4) {
            ctx->pc = 0x2F7B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7b70;
        }
    }
    ctx->pc = 0x2F7CBCu;
label_2f7cbc:
    // 0x2f7cbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f7cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f7cc0:
    // 0x2f7cc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f7cc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f7cc4:
    // 0x2f7cc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f7cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f7cc8:
    // 0x2f7cc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f7cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f7ccc:
    // 0x2f7ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f7cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7cd0:
    // 0x2f7cd0: 0x3e00008  jr          $ra
label_2f7cd4:
    if (ctx->pc == 0x2F7CD4u) {
        ctx->pc = 0x2F7CD4u;
            // 0x2f7cd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2F7CD8u;
        goto label_fallthrough_0x2f7cd0;
    }
    ctx->pc = 0x2F7CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7CD0u;
            // 0x2f7cd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f7cd0:
    ctx->pc = 0x2F7CD8u;
}
