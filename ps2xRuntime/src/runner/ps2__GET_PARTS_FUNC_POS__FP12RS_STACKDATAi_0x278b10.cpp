#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PARTS_FUNC_POS__FP12RS_STACKDATAi
// Address: 0x278b10 - 0x278d70
void ps2__GET_PARTS_FUNC_POS__FP12RS_STACKDATAi_0x278b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PARTS_FUNC_POS__FP12RS_STACKDATAi_0x278b10");
#endif

    switch (ctx->pc) {
        case 0x278b10u: goto label_278b10;
        case 0x278b14u: goto label_278b14;
        case 0x278b18u: goto label_278b18;
        case 0x278b1cu: goto label_278b1c;
        case 0x278b20u: goto label_278b20;
        case 0x278b24u: goto label_278b24;
        case 0x278b28u: goto label_278b28;
        case 0x278b2cu: goto label_278b2c;
        case 0x278b30u: goto label_278b30;
        case 0x278b34u: goto label_278b34;
        case 0x278b38u: goto label_278b38;
        case 0x278b3cu: goto label_278b3c;
        case 0x278b40u: goto label_278b40;
        case 0x278b44u: goto label_278b44;
        case 0x278b48u: goto label_278b48;
        case 0x278b4cu: goto label_278b4c;
        case 0x278b50u: goto label_278b50;
        case 0x278b54u: goto label_278b54;
        case 0x278b58u: goto label_278b58;
        case 0x278b5cu: goto label_278b5c;
        case 0x278b60u: goto label_278b60;
        case 0x278b64u: goto label_278b64;
        case 0x278b68u: goto label_278b68;
        case 0x278b6cu: goto label_278b6c;
        case 0x278b70u: goto label_278b70;
        case 0x278b74u: goto label_278b74;
        case 0x278b78u: goto label_278b78;
        case 0x278b7cu: goto label_278b7c;
        case 0x278b80u: goto label_278b80;
        case 0x278b84u: goto label_278b84;
        case 0x278b88u: goto label_278b88;
        case 0x278b8cu: goto label_278b8c;
        case 0x278b90u: goto label_278b90;
        case 0x278b94u: goto label_278b94;
        case 0x278b98u: goto label_278b98;
        case 0x278b9cu: goto label_278b9c;
        case 0x278ba0u: goto label_278ba0;
        case 0x278ba4u: goto label_278ba4;
        case 0x278ba8u: goto label_278ba8;
        case 0x278bacu: goto label_278bac;
        case 0x278bb0u: goto label_278bb0;
        case 0x278bb4u: goto label_278bb4;
        case 0x278bb8u: goto label_278bb8;
        case 0x278bbcu: goto label_278bbc;
        case 0x278bc0u: goto label_278bc0;
        case 0x278bc4u: goto label_278bc4;
        case 0x278bc8u: goto label_278bc8;
        case 0x278bccu: goto label_278bcc;
        case 0x278bd0u: goto label_278bd0;
        case 0x278bd4u: goto label_278bd4;
        case 0x278bd8u: goto label_278bd8;
        case 0x278bdcu: goto label_278bdc;
        case 0x278be0u: goto label_278be0;
        case 0x278be4u: goto label_278be4;
        case 0x278be8u: goto label_278be8;
        case 0x278becu: goto label_278bec;
        case 0x278bf0u: goto label_278bf0;
        case 0x278bf4u: goto label_278bf4;
        case 0x278bf8u: goto label_278bf8;
        case 0x278bfcu: goto label_278bfc;
        case 0x278c00u: goto label_278c00;
        case 0x278c04u: goto label_278c04;
        case 0x278c08u: goto label_278c08;
        case 0x278c0cu: goto label_278c0c;
        case 0x278c10u: goto label_278c10;
        case 0x278c14u: goto label_278c14;
        case 0x278c18u: goto label_278c18;
        case 0x278c1cu: goto label_278c1c;
        case 0x278c20u: goto label_278c20;
        case 0x278c24u: goto label_278c24;
        case 0x278c28u: goto label_278c28;
        case 0x278c2cu: goto label_278c2c;
        case 0x278c30u: goto label_278c30;
        case 0x278c34u: goto label_278c34;
        case 0x278c38u: goto label_278c38;
        case 0x278c3cu: goto label_278c3c;
        case 0x278c40u: goto label_278c40;
        case 0x278c44u: goto label_278c44;
        case 0x278c48u: goto label_278c48;
        case 0x278c4cu: goto label_278c4c;
        case 0x278c50u: goto label_278c50;
        case 0x278c54u: goto label_278c54;
        case 0x278c58u: goto label_278c58;
        case 0x278c5cu: goto label_278c5c;
        case 0x278c60u: goto label_278c60;
        case 0x278c64u: goto label_278c64;
        case 0x278c68u: goto label_278c68;
        case 0x278c6cu: goto label_278c6c;
        case 0x278c70u: goto label_278c70;
        case 0x278c74u: goto label_278c74;
        case 0x278c78u: goto label_278c78;
        case 0x278c7cu: goto label_278c7c;
        case 0x278c80u: goto label_278c80;
        case 0x278c84u: goto label_278c84;
        case 0x278c88u: goto label_278c88;
        case 0x278c8cu: goto label_278c8c;
        case 0x278c90u: goto label_278c90;
        case 0x278c94u: goto label_278c94;
        case 0x278c98u: goto label_278c98;
        case 0x278c9cu: goto label_278c9c;
        case 0x278ca0u: goto label_278ca0;
        case 0x278ca4u: goto label_278ca4;
        case 0x278ca8u: goto label_278ca8;
        case 0x278cacu: goto label_278cac;
        case 0x278cb0u: goto label_278cb0;
        case 0x278cb4u: goto label_278cb4;
        case 0x278cb8u: goto label_278cb8;
        case 0x278cbcu: goto label_278cbc;
        case 0x278cc0u: goto label_278cc0;
        case 0x278cc4u: goto label_278cc4;
        case 0x278cc8u: goto label_278cc8;
        case 0x278cccu: goto label_278ccc;
        case 0x278cd0u: goto label_278cd0;
        case 0x278cd4u: goto label_278cd4;
        case 0x278cd8u: goto label_278cd8;
        case 0x278cdcu: goto label_278cdc;
        case 0x278ce0u: goto label_278ce0;
        case 0x278ce4u: goto label_278ce4;
        case 0x278ce8u: goto label_278ce8;
        case 0x278cecu: goto label_278cec;
        case 0x278cf0u: goto label_278cf0;
        case 0x278cf4u: goto label_278cf4;
        case 0x278cf8u: goto label_278cf8;
        case 0x278cfcu: goto label_278cfc;
        case 0x278d00u: goto label_278d00;
        case 0x278d04u: goto label_278d04;
        case 0x278d08u: goto label_278d08;
        case 0x278d0cu: goto label_278d0c;
        case 0x278d10u: goto label_278d10;
        case 0x278d14u: goto label_278d14;
        case 0x278d18u: goto label_278d18;
        case 0x278d1cu: goto label_278d1c;
        case 0x278d20u: goto label_278d20;
        case 0x278d24u: goto label_278d24;
        case 0x278d28u: goto label_278d28;
        case 0x278d2cu: goto label_278d2c;
        case 0x278d30u: goto label_278d30;
        case 0x278d34u: goto label_278d34;
        case 0x278d38u: goto label_278d38;
        case 0x278d3cu: goto label_278d3c;
        case 0x278d40u: goto label_278d40;
        case 0x278d44u: goto label_278d44;
        case 0x278d48u: goto label_278d48;
        case 0x278d4cu: goto label_278d4c;
        case 0x278d50u: goto label_278d50;
        case 0x278d54u: goto label_278d54;
        case 0x278d58u: goto label_278d58;
        case 0x278d5cu: goto label_278d5c;
        case 0x278d60u: goto label_278d60;
        case 0x278d64u: goto label_278d64;
        case 0x278d68u: goto label_278d68;
        case 0x278d6cu: goto label_278d6c;
        default: break;
    }

    ctx->pc = 0x278b10u;

label_278b10:
    // 0x278b10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x278b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_278b14:
    // 0x278b14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x278b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_278b18:
    // 0x278b18: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x278b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_278b1c:
    // 0x278b1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x278b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_278b20:
    // 0x278b20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x278b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_278b24:
    // 0x278b24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x278b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_278b28:
    // 0x278b28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x278b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_278b2c:
    // 0x278b2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x278b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_278b30:
    // 0x278b30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x278b30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_278b34:
    // 0x278b34: 0xc097e28  jal         func_25F8A0
label_278b38:
    if (ctx->pc == 0x278B38u) {
        ctx->pc = 0x278B38u;
            // 0x278b38: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278B3Cu;
        goto label_278b3c;
    }
    ctx->pc = 0x278B34u;
    SET_GPR_U32(ctx, 31, 0x278B3Cu);
    ctx->pc = 0x278B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B34u;
            // 0x278b38: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B3Cu; }
        if (ctx->pc != 0x278B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B3Cu; }
        if (ctx->pc != 0x278B3Cu) { return; }
    }
    ctx->pc = 0x278B3Cu;
label_278b3c:
    // 0x278b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278b40:
    // 0x278b40: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x278b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_278b44:
    // 0x278b44: 0xc097e28  jal         func_25F8A0
label_278b48:
    if (ctx->pc == 0x278B48u) {
        ctx->pc = 0x278B48u;
            // 0x278b48: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278B4Cu;
        goto label_278b4c;
    }
    ctx->pc = 0x278B44u;
    SET_GPR_U32(ctx, 31, 0x278B4Cu);
    ctx->pc = 0x278B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B44u;
            // 0x278b48: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B4Cu; }
        if (ctx->pc != 0x278B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B4Cu; }
        if (ctx->pc != 0x278B4Cu) { return; }
    }
    ctx->pc = 0x278B4Cu;
label_278b4c:
    // 0x278b4c: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x278b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_278b50:
    // 0x278b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278b54:
    // 0x278b54: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x278b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_278b58:
    // 0x278b58: 0xc097e28  jal         func_25F8A0
label_278b5c:
    if (ctx->pc == 0x278B5Cu) {
        ctx->pc = 0x278B5Cu;
            // 0x278b5c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278B60u;
        goto label_278b60;
    }
    ctx->pc = 0x278B58u;
    SET_GPR_U32(ctx, 31, 0x278B60u);
    ctx->pc = 0x278B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B58u;
            // 0x278b5c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B60u; }
        if (ctx->pc != 0x278B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B60u; }
        if (ctx->pc != 0x278B60u) { return; }
    }
    ctx->pc = 0x278B60u;
label_278b60:
    // 0x278b60: 0x27b30088  addiu       $s3, $sp, 0x88
    ctx->pc = 0x278b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_278b64:
    // 0x278b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278b68:
    // 0x278b68: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x278b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_278b6c:
    // 0x278b6c: 0xc097e28  jal         func_25F8A0
label_278b70:
    if (ctx->pc == 0x278B70u) {
        ctx->pc = 0x278B70u;
            // 0x278b70: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278B74u;
        goto label_278b74;
    }
    ctx->pc = 0x278B6Cu;
    SET_GPR_U32(ctx, 31, 0x278B74u);
    ctx->pc = 0x278B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B6Cu;
            // 0x278b70: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B74u; }
        if (ctx->pc != 0x278B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B74u; }
        if (ctx->pc != 0x278B74u) { return; }
    }
    ctx->pc = 0x278B74u;
label_278b74:
    // 0x278b74: 0x27b4008c  addiu       $s4, $sp, 0x8C
    ctx->pc = 0x278b74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_278b78:
    // 0x278b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278b7c:
    // 0x278b7c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x278b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_278b80:
    // 0x278b80: 0xc097e48  jal         func_25F920
label_278b84:
    if (ctx->pc == 0x278B84u) {
        ctx->pc = 0x278B84u;
            // 0x278b84: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278B88u;
        goto label_278b88;
    }
    ctx->pc = 0x278B80u;
    SET_GPR_U32(ctx, 31, 0x278B88u);
    ctx->pc = 0x278B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B80u;
            // 0x278b84: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B88u; }
        if (ctx->pc != 0x278B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B88u; }
        if (ctx->pc != 0x278B88u) { return; }
    }
    ctx->pc = 0x278B88u;
label_278b88:
    // 0x278b88: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x278b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_278b8c:
    // 0x278b8c: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x278b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_278b90:
    // 0x278b90: 0xc0a0f58  jal         func_283D60
label_278b94:
    if (ctx->pc == 0x278B94u) {
        ctx->pc = 0x278B94u;
            // 0x278b94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278B98u;
        goto label_278b98;
    }
    ctx->pc = 0x278B90u;
    SET_GPR_U32(ctx, 31, 0x278B98u);
    ctx->pc = 0x278B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B90u;
            // 0x278b94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B98u; }
        if (ctx->pc != 0x278B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278B98u; }
        if (ctx->pc != 0x278B98u) { return; }
    }
    ctx->pc = 0x278B98u;
label_278b98:
    // 0x278b98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_278b9c:
    if (ctx->pc == 0x278B9Cu) {
        ctx->pc = 0x278BA0u;
        goto label_278ba0;
    }
    ctx->pc = 0x278B98u;
    {
        const bool branch_taken_0x278b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278b98) {
            ctx->pc = 0x278BA8u;
            goto label_278ba8;
        }
    }
    ctx->pc = 0x278BA0u;
label_278ba0:
    // 0x278ba0: 0x10000069  b           . + 4 + (0x69 << 2)
label_278ba4:
    if (ctx->pc == 0x278BA4u) {
        ctx->pc = 0x278BA4u;
            // 0x278ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278BA8u;
        goto label_278ba8;
    }
    ctx->pc = 0x278BA0u;
    {
        const bool branch_taken_0x278ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278BA0u;
            // 0x278ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ba0) {
            ctx->pc = 0x278D48u;
            goto label_278d48;
        }
    }
    ctx->pc = 0x278BA8u;
label_278ba8:
    // 0x278ba8: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x278ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_278bac:
    // 0x278bac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x278bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_278bb0:
    // 0x278bb0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x278bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278bb4:
    // 0x278bb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278bb8:
    // 0x278bb8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x278bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_278bbc:
    // 0x278bbc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x278bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_278bc0:
    // 0x278bc0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x278bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_278bc4:
    // 0x278bc4: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x278bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_278bc8:
    // 0x278bc8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x278bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_278bcc:
    // 0x278bcc: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x278bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_278bd0:
    // 0x278bd0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x278bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_278bd4:
    // 0x278bd4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x278bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278bd8:
    // 0x278bd8: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x278bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_278bdc:
    // 0x278bdc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x278bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_278be0:
    // 0x278be0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x278be0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_278be4:
    // 0x278be4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x278be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_278be8:
    // 0x278be8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x278be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278bec:
    // 0x278bec: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x278becu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_278bf0:
    // 0x278bf0: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x278bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_278bf4:
    // 0x278bf4: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x278bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_278bf8:
    // 0x278bf8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x278bf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_278bfc:
    // 0x278bfc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x278bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_278c00:
    // 0x278c00: 0xc057554  jal         func_15D550
label_278c04:
    if (ctx->pc == 0x278C04u) {
        ctx->pc = 0x278C04u;
            // 0x278c04: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x278C08u;
        goto label_278c08;
    }
    ctx->pc = 0x278C00u;
    SET_GPR_U32(ctx, 31, 0x278C08u);
    ctx->pc = 0x278C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278C00u;
            // 0x278c04: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D550u;
    if (runtime->hasFunction(0x15D550u)) {
        auto targetFn = runtime->lookupFunction(0x15D550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278C08u; }
        if (ctx->pc != 0x278C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFP9mgVu0FBOXPP9CMapPartsi_0x15d550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278C08u; }
        if (ctx->pc != 0x278C08u) { return; }
    }
    ctx->pc = 0x278C08u;
label_278c08:
    // 0x278c08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x278c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278c0c:
    // 0x278c0c: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_278c10:
    if (ctx->pc == 0x278C10u) {
        ctx->pc = 0x278C10u;
            // 0x278c10: 0x3c024974  lui         $v0, 0x4974 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
        ctx->pc = 0x278C14u;
        goto label_278c14;
    }
    ctx->pc = 0x278C0Cu;
    {
        const bool branch_taken_0x278c0c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x278C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C0Cu;
            // 0x278c10: 0x3c024974  lui         $v0, 0x4974 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c0c) {
            ctx->pc = 0x278C1Cu;
            goto label_278c1c;
        }
    }
    ctx->pc = 0x278C14u;
label_278c14:
    // 0x278c14: 0x1000004c  b           . + 4 + (0x4C << 2)
label_278c18:
    if (ctx->pc == 0x278C18u) {
        ctx->pc = 0x278C18u;
            // 0x278c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278C1Cu;
        goto label_278c1c;
    }
    ctx->pc = 0x278C14u;
    {
        const bool branch_taken_0x278c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C14u;
            // 0x278c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c14) {
            ctx->pc = 0x278D48u;
            goto label_278d48;
        }
    }
    ctx->pc = 0x278C1Cu;
label_278c1c:
    // 0x278c1c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x278c1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_278c20:
    // 0x278c20: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x278c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_278c24:
    // 0x278c24: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x278c24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_278c28:
    // 0x278c28: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x278c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_278c2c:
    // 0x278c2c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_278c30:
    if (ctx->pc == 0x278C30u) {
        ctx->pc = 0x278C30u;
            // 0x278c30: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278C34u;
        goto label_278c34;
    }
    ctx->pc = 0x278C2Cu;
    {
        const bool branch_taken_0x278c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C2Cu;
            // 0x278c30: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c2c) {
            ctx->pc = 0x278C88u;
            goto label_278c88;
        }
    }
    ctx->pc = 0x278C34u;
label_278c34:
    // 0x278c34: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x278c34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278c38:
    // 0x278c38: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x278c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_278c3c:
    // 0x278c3c: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x278c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_278c40:
    // 0x278c40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x278c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_278c44:
    // 0x278c44: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x278c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_278c48:
    // 0x278c48: 0x320f809  jalr        $t9
label_278c4c:
    if (ctx->pc == 0x278C4Cu) {
        ctx->pc = 0x278C4Cu;
            // 0x278c4c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x278C50u;
        goto label_278c50;
    }
    ctx->pc = 0x278C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x278C50u);
        ctx->pc = 0x278C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C48u;
            // 0x278c4c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x278C50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x278C50u; }
            if (ctx->pc != 0x278C50u) { return; }
        }
        }
    }
    ctx->pc = 0x278C50u;
label_278c50:
    // 0x278c50: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x278c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_278c54:
    // 0x278c54: 0xc04c018  jal         func_130060
label_278c58:
    if (ctx->pc == 0x278C58u) {
        ctx->pc = 0x278C58u;
            // 0x278c58: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x278C5Cu;
        goto label_278c5c;
    }
    ctx->pc = 0x278C54u;
    SET_GPR_U32(ctx, 31, 0x278C5Cu);
    ctx->pc = 0x278C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278C54u;
            // 0x278c58: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278C5Cu; }
        if (ctx->pc != 0x278C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278C5Cu; }
        if (ctx->pc != 0x278C5Cu) { return; }
    }
    ctx->pc = 0x278C5Cu;
label_278c5c:
    // 0x278c5c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x278c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278c60:
    // 0x278c60: 0x0  nop
    ctx->pc = 0x278c60u;
    // NOP
label_278c64:
    // 0x278c64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_278c68:
    if (ctx->pc == 0x278C68u) {
        ctx->pc = 0x278C6Cu;
        goto label_278c6c;
    }
    ctx->pc = 0x278C64u;
    {
        const bool branch_taken_0x278c64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x278c64) {
            ctx->pc = 0x278C74u;
            goto label_278c74;
        }
    }
    ctx->pc = 0x278C6Cu;
label_278c6c:
    // 0x278c6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x278c6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_278c70:
    // 0x278c70: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x278c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278c74:
    // 0x278c74: 0x0  nop
    ctx->pc = 0x278c74u;
    // NOP
label_278c78:
    // 0x278c78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x278c78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_278c7c:
    // 0x278c7c: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x278c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_278c80:
    // 0x278c80: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_278c84:
    if (ctx->pc == 0x278C84u) {
        ctx->pc = 0x278C84u;
            // 0x278c84: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x278C88u;
        goto label_278c88;
    }
    ctx->pc = 0x278C80u;
    {
        const bool branch_taken_0x278c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C80u;
            // 0x278c84: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c80) {
            ctx->pc = 0x278C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278c38;
        }
    }
    ctx->pc = 0x278C88u;
label_278c88:
    // 0x278c88: 0x2a610000  slti        $at, $s3, 0x0
    ctx->pc = 0x278c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)0) ? 1 : 0);
label_278c8c:
    // 0x278c8c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_278c90:
    if (ctx->pc == 0x278C90u) {
        ctx->pc = 0x278C90u;
            // 0x278c90: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x278C94u;
        goto label_278c94;
    }
    ctx->pc = 0x278C8Cu;
    {
        const bool branch_taken_0x278c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C8Cu;
            // 0x278c90: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c8c) {
            ctx->pc = 0x278CA8u;
            goto label_278ca8;
        }
    }
    ctx->pc = 0x278C94u;
label_278c94:
    // 0x278c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278c98:
    // 0x278c98: 0xc097e4c  jal         func_25F930
label_278c9c:
    if (ctx->pc == 0x278C9Cu) {
        ctx->pc = 0x278C9Cu;
            // 0x278c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278CA0u;
        goto label_278ca0;
    }
    ctx->pc = 0x278C98u;
    SET_GPR_U32(ctx, 31, 0x278CA0u);
    ctx->pc = 0x278C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278C98u;
            // 0x278c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CA0u; }
        if (ctx->pc != 0x278CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CA0u; }
        if (ctx->pc != 0x278CA0u) { return; }
    }
    ctx->pc = 0x278CA0u;
label_278ca0:
    // 0x278ca0: 0x10000029  b           . + 4 + (0x29 << 2)
label_278ca4:
    if (ctx->pc == 0x278CA4u) {
        ctx->pc = 0x278CA4u;
            // 0x278ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278CA8u;
        goto label_278ca8;
    }
    ctx->pc = 0x278CA0u;
    {
        const bool branch_taken_0x278ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CA0u;
            // 0x278ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ca0) {
            ctx->pc = 0x278D48u;
            goto label_278d48;
        }
    }
    ctx->pc = 0x278CA8u;
label_278ca8:
    // 0x278ca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278cac:
    // 0x278cac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x278cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_278cb0:
    // 0x278cb0: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x278cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_278cb4:
    // 0x278cb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x278cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_278cb8:
    // 0x278cb8: 0xc0a763c  jal         func_29D8F0
label_278cbc:
    if (ctx->pc == 0x278CBCu) {
        ctx->pc = 0x278CBCu;
            // 0x278cbc: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->pc = 0x278CC0u;
        goto label_278cc0;
    }
    ctx->pc = 0x278CB8u;
    SET_GPR_U32(ctx, 31, 0x278CC0u);
    ctx->pc = 0x278CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278CB8u;
            // 0x278cbc: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CC0u; }
        if (ctx->pc != 0x278CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CC0u; }
        if (ctx->pc != 0x278CC0u) { return; }
    }
    ctx->pc = 0x278CC0u;
label_278cc0:
    // 0x278cc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x278cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278cc4:
    // 0x278cc4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_278cc8:
    if (ctx->pc == 0x278CC8u) {
        ctx->pc = 0x278CC8u;
            // 0x278cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278CCCu;
        goto label_278ccc;
    }
    ctx->pc = 0x278CC4u;
    {
        const bool branch_taken_0x278cc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x278CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CC4u;
            // 0x278cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cc4) {
            ctx->pc = 0x278CDCu;
            goto label_278cdc;
        }
    }
    ctx->pc = 0x278CCCu;
label_278ccc:
    // 0x278ccc: 0xc097e4c  jal         func_25F930
label_278cd0:
    if (ctx->pc == 0x278CD0u) {
        ctx->pc = 0x278CD0u;
            // 0x278cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278CD4u;
        goto label_278cd4;
    }
    ctx->pc = 0x278CCCu;
    SET_GPR_U32(ctx, 31, 0x278CD4u);
    ctx->pc = 0x278CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278CCCu;
            // 0x278cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CD4u; }
        if (ctx->pc != 0x278CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CD4u; }
        if (ctx->pc != 0x278CD4u) { return; }
    }
    ctx->pc = 0x278CD4u;
label_278cd4:
    // 0x278cd4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_278cd8:
    if (ctx->pc == 0x278CD8u) {
        ctx->pc = 0x278CD8u;
            // 0x278cd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x278CDCu;
        goto label_278cdc;
    }
    ctx->pc = 0x278CD4u;
    {
        const bool branch_taken_0x278cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CD4u;
            // 0x278cd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cd4) {
            ctx->pc = 0x278D48u;
            goto label_278d48;
        }
    }
    ctx->pc = 0x278CDCu;
label_278cdc:
    // 0x278cdc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x278cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_278ce0:
    // 0x278ce0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x278ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_278ce4:
    // 0x278ce4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x278ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_278ce8:
    // 0x278ce8: 0x320f809  jalr        $t9
label_278cec:
    if (ctx->pc == 0x278CECu) {
        ctx->pc = 0x278CECu;
            // 0x278cec: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x278CF0u;
        goto label_278cf0;
    }
    ctx->pc = 0x278CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x278CF0u);
        ctx->pc = 0x278CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CE8u;
            // 0x278cec: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x278CF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x278CF0u; }
            if (ctx->pc != 0x278CF0u) { return; }
        }
        }
    }
    ctx->pc = 0x278CF0u;
label_278cf0:
    // 0x278cf0: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x278cf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_278cf4:
    // 0x278cf4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x278cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_278cf8:
    // 0x278cf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x278cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_278cfc:
    // 0x278cfc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x278cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_278d00:
    // 0x278d00: 0xc041c38  jal         func_1070E0
label_278d04:
    if (ctx->pc == 0x278D04u) {
        ctx->pc = 0x278D04u;
            // 0x278d04: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x278D08u;
        goto label_278d08;
    }
    ctx->pc = 0x278D00u;
    SET_GPR_U32(ctx, 31, 0x278D08u);
    ctx->pc = 0x278D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D00u;
            // 0x278d04: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D08u; }
        if (ctx->pc != 0x278D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D08u; }
        if (ctx->pc != 0x278D08u) { return; }
    }
    ctx->pc = 0x278D08u;
label_278d08:
    // 0x278d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278d0c:
    // 0x278d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x278d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278d10:
    // 0x278d10: 0xc097e4c  jal         func_25F930
label_278d14:
    if (ctx->pc == 0x278D14u) {
        ctx->pc = 0x278D14u;
            // 0x278d14: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278D18u;
        goto label_278d18;
    }
    ctx->pc = 0x278D10u;
    SET_GPR_U32(ctx, 31, 0x278D18u);
    ctx->pc = 0x278D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D10u;
            // 0x278d14: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D18u; }
        if (ctx->pc != 0x278D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D18u; }
        if (ctx->pc != 0x278D18u) { return; }
    }
    ctx->pc = 0x278D18u;
label_278d18:
    // 0x278d18: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x278d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_278d1c:
    // 0x278d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278d20:
    // 0x278d20: 0xc097e54  jal         func_25F950
label_278d24:
    if (ctx->pc == 0x278D24u) {
        ctx->pc = 0x278D24u;
            // 0x278d24: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278D28u;
        goto label_278d28;
    }
    ctx->pc = 0x278D20u;
    SET_GPR_U32(ctx, 31, 0x278D28u);
    ctx->pc = 0x278D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D20u;
            // 0x278d24: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D28u; }
        if (ctx->pc != 0x278D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D28u; }
        if (ctx->pc != 0x278D28u) { return; }
    }
    ctx->pc = 0x278D28u;
label_278d28:
    // 0x278d28: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x278d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_278d2c:
    // 0x278d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278d30:
    // 0x278d30: 0xc097e54  jal         func_25F950
label_278d34:
    if (ctx->pc == 0x278D34u) {
        ctx->pc = 0x278D34u;
            // 0x278d34: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278D38u;
        goto label_278d38;
    }
    ctx->pc = 0x278D30u;
    SET_GPR_U32(ctx, 31, 0x278D38u);
    ctx->pc = 0x278D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D30u;
            // 0x278d34: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D38u; }
        if (ctx->pc != 0x278D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D38u; }
        if (ctx->pc != 0x278D38u) { return; }
    }
    ctx->pc = 0x278D38u;
label_278d38:
    // 0x278d38: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x278d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_278d3c:
    // 0x278d3c: 0xc097e54  jal         func_25F950
label_278d40:
    if (ctx->pc == 0x278D40u) {
        ctx->pc = 0x278D40u;
            // 0x278d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278D44u;
        goto label_278d44;
    }
    ctx->pc = 0x278D3Cu;
    SET_GPR_U32(ctx, 31, 0x278D44u);
    ctx->pc = 0x278D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D3Cu;
            // 0x278d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D44u; }
        if (ctx->pc != 0x278D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D44u; }
        if (ctx->pc != 0x278D44u) { return; }
    }
    ctx->pc = 0x278D44u;
label_278d44:
    // 0x278d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278d48:
    // 0x278d48: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x278d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_278d4c:
    // 0x278d4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x278d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_278d50:
    // 0x278d50: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x278d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_278d54:
    // 0x278d54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x278d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_278d58:
    // 0x278d58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x278d58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_278d5c:
    // 0x278d5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x278d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_278d60:
    // 0x278d60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x278d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278d64:
    // 0x278d64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x278d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_278d68:
    // 0x278d68: 0x3e00008  jr          $ra
label_278d6c:
    if (ctx->pc == 0x278D6Cu) {
        ctx->pc = 0x278D6Cu;
            // 0x278d6c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x278D70u;
        goto label_fallthrough_0x278d68;
    }
    ctx->pc = 0x278D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D68u;
            // 0x278d6c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x278d68:
    ctx->pc = 0x278D70u;
}
