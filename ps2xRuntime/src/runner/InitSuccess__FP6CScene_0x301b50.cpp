#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSuccess__FP6CScene
// Address: 0x301b50 - 0x301f90
void InitSuccess__FP6CScene_0x301b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSuccess__FP6CScene_0x301b50");
#endif

    switch (ctx->pc) {
        case 0x301b50u: goto label_301b50;
        case 0x301b54u: goto label_301b54;
        case 0x301b58u: goto label_301b58;
        case 0x301b5cu: goto label_301b5c;
        case 0x301b60u: goto label_301b60;
        case 0x301b64u: goto label_301b64;
        case 0x301b68u: goto label_301b68;
        case 0x301b6cu: goto label_301b6c;
        case 0x301b70u: goto label_301b70;
        case 0x301b74u: goto label_301b74;
        case 0x301b78u: goto label_301b78;
        case 0x301b7cu: goto label_301b7c;
        case 0x301b80u: goto label_301b80;
        case 0x301b84u: goto label_301b84;
        case 0x301b88u: goto label_301b88;
        case 0x301b8cu: goto label_301b8c;
        case 0x301b90u: goto label_301b90;
        case 0x301b94u: goto label_301b94;
        case 0x301b98u: goto label_301b98;
        case 0x301b9cu: goto label_301b9c;
        case 0x301ba0u: goto label_301ba0;
        case 0x301ba4u: goto label_301ba4;
        case 0x301ba8u: goto label_301ba8;
        case 0x301bacu: goto label_301bac;
        case 0x301bb0u: goto label_301bb0;
        case 0x301bb4u: goto label_301bb4;
        case 0x301bb8u: goto label_301bb8;
        case 0x301bbcu: goto label_301bbc;
        case 0x301bc0u: goto label_301bc0;
        case 0x301bc4u: goto label_301bc4;
        case 0x301bc8u: goto label_301bc8;
        case 0x301bccu: goto label_301bcc;
        case 0x301bd0u: goto label_301bd0;
        case 0x301bd4u: goto label_301bd4;
        case 0x301bd8u: goto label_301bd8;
        case 0x301bdcu: goto label_301bdc;
        case 0x301be0u: goto label_301be0;
        case 0x301be4u: goto label_301be4;
        case 0x301be8u: goto label_301be8;
        case 0x301becu: goto label_301bec;
        case 0x301bf0u: goto label_301bf0;
        case 0x301bf4u: goto label_301bf4;
        case 0x301bf8u: goto label_301bf8;
        case 0x301bfcu: goto label_301bfc;
        case 0x301c00u: goto label_301c00;
        case 0x301c04u: goto label_301c04;
        case 0x301c08u: goto label_301c08;
        case 0x301c0cu: goto label_301c0c;
        case 0x301c10u: goto label_301c10;
        case 0x301c14u: goto label_301c14;
        case 0x301c18u: goto label_301c18;
        case 0x301c1cu: goto label_301c1c;
        case 0x301c20u: goto label_301c20;
        case 0x301c24u: goto label_301c24;
        case 0x301c28u: goto label_301c28;
        case 0x301c2cu: goto label_301c2c;
        case 0x301c30u: goto label_301c30;
        case 0x301c34u: goto label_301c34;
        case 0x301c38u: goto label_301c38;
        case 0x301c3cu: goto label_301c3c;
        case 0x301c40u: goto label_301c40;
        case 0x301c44u: goto label_301c44;
        case 0x301c48u: goto label_301c48;
        case 0x301c4cu: goto label_301c4c;
        case 0x301c50u: goto label_301c50;
        case 0x301c54u: goto label_301c54;
        case 0x301c58u: goto label_301c58;
        case 0x301c5cu: goto label_301c5c;
        case 0x301c60u: goto label_301c60;
        case 0x301c64u: goto label_301c64;
        case 0x301c68u: goto label_301c68;
        case 0x301c6cu: goto label_301c6c;
        case 0x301c70u: goto label_301c70;
        case 0x301c74u: goto label_301c74;
        case 0x301c78u: goto label_301c78;
        case 0x301c7cu: goto label_301c7c;
        case 0x301c80u: goto label_301c80;
        case 0x301c84u: goto label_301c84;
        case 0x301c88u: goto label_301c88;
        case 0x301c8cu: goto label_301c8c;
        case 0x301c90u: goto label_301c90;
        case 0x301c94u: goto label_301c94;
        case 0x301c98u: goto label_301c98;
        case 0x301c9cu: goto label_301c9c;
        case 0x301ca0u: goto label_301ca0;
        case 0x301ca4u: goto label_301ca4;
        case 0x301ca8u: goto label_301ca8;
        case 0x301cacu: goto label_301cac;
        case 0x301cb0u: goto label_301cb0;
        case 0x301cb4u: goto label_301cb4;
        case 0x301cb8u: goto label_301cb8;
        case 0x301cbcu: goto label_301cbc;
        case 0x301cc0u: goto label_301cc0;
        case 0x301cc4u: goto label_301cc4;
        case 0x301cc8u: goto label_301cc8;
        case 0x301cccu: goto label_301ccc;
        case 0x301cd0u: goto label_301cd0;
        case 0x301cd4u: goto label_301cd4;
        case 0x301cd8u: goto label_301cd8;
        case 0x301cdcu: goto label_301cdc;
        case 0x301ce0u: goto label_301ce0;
        case 0x301ce4u: goto label_301ce4;
        case 0x301ce8u: goto label_301ce8;
        case 0x301cecu: goto label_301cec;
        case 0x301cf0u: goto label_301cf0;
        case 0x301cf4u: goto label_301cf4;
        case 0x301cf8u: goto label_301cf8;
        case 0x301cfcu: goto label_301cfc;
        case 0x301d00u: goto label_301d00;
        case 0x301d04u: goto label_301d04;
        case 0x301d08u: goto label_301d08;
        case 0x301d0cu: goto label_301d0c;
        case 0x301d10u: goto label_301d10;
        case 0x301d14u: goto label_301d14;
        case 0x301d18u: goto label_301d18;
        case 0x301d1cu: goto label_301d1c;
        case 0x301d20u: goto label_301d20;
        case 0x301d24u: goto label_301d24;
        case 0x301d28u: goto label_301d28;
        case 0x301d2cu: goto label_301d2c;
        case 0x301d30u: goto label_301d30;
        case 0x301d34u: goto label_301d34;
        case 0x301d38u: goto label_301d38;
        case 0x301d3cu: goto label_301d3c;
        case 0x301d40u: goto label_301d40;
        case 0x301d44u: goto label_301d44;
        case 0x301d48u: goto label_301d48;
        case 0x301d4cu: goto label_301d4c;
        case 0x301d50u: goto label_301d50;
        case 0x301d54u: goto label_301d54;
        case 0x301d58u: goto label_301d58;
        case 0x301d5cu: goto label_301d5c;
        case 0x301d60u: goto label_301d60;
        case 0x301d64u: goto label_301d64;
        case 0x301d68u: goto label_301d68;
        case 0x301d6cu: goto label_301d6c;
        case 0x301d70u: goto label_301d70;
        case 0x301d74u: goto label_301d74;
        case 0x301d78u: goto label_301d78;
        case 0x301d7cu: goto label_301d7c;
        case 0x301d80u: goto label_301d80;
        case 0x301d84u: goto label_301d84;
        case 0x301d88u: goto label_301d88;
        case 0x301d8cu: goto label_301d8c;
        case 0x301d90u: goto label_301d90;
        case 0x301d94u: goto label_301d94;
        case 0x301d98u: goto label_301d98;
        case 0x301d9cu: goto label_301d9c;
        case 0x301da0u: goto label_301da0;
        case 0x301da4u: goto label_301da4;
        case 0x301da8u: goto label_301da8;
        case 0x301dacu: goto label_301dac;
        case 0x301db0u: goto label_301db0;
        case 0x301db4u: goto label_301db4;
        case 0x301db8u: goto label_301db8;
        case 0x301dbcu: goto label_301dbc;
        case 0x301dc0u: goto label_301dc0;
        case 0x301dc4u: goto label_301dc4;
        case 0x301dc8u: goto label_301dc8;
        case 0x301dccu: goto label_301dcc;
        case 0x301dd0u: goto label_301dd0;
        case 0x301dd4u: goto label_301dd4;
        case 0x301dd8u: goto label_301dd8;
        case 0x301ddcu: goto label_301ddc;
        case 0x301de0u: goto label_301de0;
        case 0x301de4u: goto label_301de4;
        case 0x301de8u: goto label_301de8;
        case 0x301decu: goto label_301dec;
        case 0x301df0u: goto label_301df0;
        case 0x301df4u: goto label_301df4;
        case 0x301df8u: goto label_301df8;
        case 0x301dfcu: goto label_301dfc;
        case 0x301e00u: goto label_301e00;
        case 0x301e04u: goto label_301e04;
        case 0x301e08u: goto label_301e08;
        case 0x301e0cu: goto label_301e0c;
        case 0x301e10u: goto label_301e10;
        case 0x301e14u: goto label_301e14;
        case 0x301e18u: goto label_301e18;
        case 0x301e1cu: goto label_301e1c;
        case 0x301e20u: goto label_301e20;
        case 0x301e24u: goto label_301e24;
        case 0x301e28u: goto label_301e28;
        case 0x301e2cu: goto label_301e2c;
        case 0x301e30u: goto label_301e30;
        case 0x301e34u: goto label_301e34;
        case 0x301e38u: goto label_301e38;
        case 0x301e3cu: goto label_301e3c;
        case 0x301e40u: goto label_301e40;
        case 0x301e44u: goto label_301e44;
        case 0x301e48u: goto label_301e48;
        case 0x301e4cu: goto label_301e4c;
        case 0x301e50u: goto label_301e50;
        case 0x301e54u: goto label_301e54;
        case 0x301e58u: goto label_301e58;
        case 0x301e5cu: goto label_301e5c;
        case 0x301e60u: goto label_301e60;
        case 0x301e64u: goto label_301e64;
        case 0x301e68u: goto label_301e68;
        case 0x301e6cu: goto label_301e6c;
        case 0x301e70u: goto label_301e70;
        case 0x301e74u: goto label_301e74;
        case 0x301e78u: goto label_301e78;
        case 0x301e7cu: goto label_301e7c;
        case 0x301e80u: goto label_301e80;
        case 0x301e84u: goto label_301e84;
        case 0x301e88u: goto label_301e88;
        case 0x301e8cu: goto label_301e8c;
        case 0x301e90u: goto label_301e90;
        case 0x301e94u: goto label_301e94;
        case 0x301e98u: goto label_301e98;
        case 0x301e9cu: goto label_301e9c;
        case 0x301ea0u: goto label_301ea0;
        case 0x301ea4u: goto label_301ea4;
        case 0x301ea8u: goto label_301ea8;
        case 0x301eacu: goto label_301eac;
        case 0x301eb0u: goto label_301eb0;
        case 0x301eb4u: goto label_301eb4;
        case 0x301eb8u: goto label_301eb8;
        case 0x301ebcu: goto label_301ebc;
        case 0x301ec0u: goto label_301ec0;
        case 0x301ec4u: goto label_301ec4;
        case 0x301ec8u: goto label_301ec8;
        case 0x301eccu: goto label_301ecc;
        case 0x301ed0u: goto label_301ed0;
        case 0x301ed4u: goto label_301ed4;
        case 0x301ed8u: goto label_301ed8;
        case 0x301edcu: goto label_301edc;
        case 0x301ee0u: goto label_301ee0;
        case 0x301ee4u: goto label_301ee4;
        case 0x301ee8u: goto label_301ee8;
        case 0x301eecu: goto label_301eec;
        case 0x301ef0u: goto label_301ef0;
        case 0x301ef4u: goto label_301ef4;
        case 0x301ef8u: goto label_301ef8;
        case 0x301efcu: goto label_301efc;
        case 0x301f00u: goto label_301f00;
        case 0x301f04u: goto label_301f04;
        case 0x301f08u: goto label_301f08;
        case 0x301f0cu: goto label_301f0c;
        case 0x301f10u: goto label_301f10;
        case 0x301f14u: goto label_301f14;
        case 0x301f18u: goto label_301f18;
        case 0x301f1cu: goto label_301f1c;
        case 0x301f20u: goto label_301f20;
        case 0x301f24u: goto label_301f24;
        case 0x301f28u: goto label_301f28;
        case 0x301f2cu: goto label_301f2c;
        case 0x301f30u: goto label_301f30;
        case 0x301f34u: goto label_301f34;
        case 0x301f38u: goto label_301f38;
        case 0x301f3cu: goto label_301f3c;
        case 0x301f40u: goto label_301f40;
        case 0x301f44u: goto label_301f44;
        case 0x301f48u: goto label_301f48;
        case 0x301f4cu: goto label_301f4c;
        case 0x301f50u: goto label_301f50;
        case 0x301f54u: goto label_301f54;
        case 0x301f58u: goto label_301f58;
        case 0x301f5cu: goto label_301f5c;
        case 0x301f60u: goto label_301f60;
        case 0x301f64u: goto label_301f64;
        case 0x301f68u: goto label_301f68;
        case 0x301f6cu: goto label_301f6c;
        case 0x301f70u: goto label_301f70;
        case 0x301f74u: goto label_301f74;
        case 0x301f78u: goto label_301f78;
        case 0x301f7cu: goto label_301f7c;
        case 0x301f80u: goto label_301f80;
        case 0x301f84u: goto label_301f84;
        case 0x301f88u: goto label_301f88;
        case 0x301f8cu: goto label_301f8c;
        default: break;
    }

    ctx->pc = 0x301b50u;

label_301b50:
    // 0x301b50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x301b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_301b54:
    // 0x301b54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x301b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_301b58:
    // 0x301b58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x301b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_301b5c:
    // 0x301b5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x301b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_301b60:
    // 0x301b60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x301b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_301b64:
    // 0x301b64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x301b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_301b68:
    // 0x301b68: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x301b68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_301b6c:
    // 0x301b6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x301b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_301b70:
    // 0x301b70: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x301b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_301b74:
    // 0x301b74: 0xc0a0ed8  jal         func_283B60
label_301b78:
    if (ctx->pc == 0x301B78u) {
        ctx->pc = 0x301B78u;
            // 0x301b78: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301B7Cu;
        goto label_301b7c;
    }
    ctx->pc = 0x301B74u;
    SET_GPR_U32(ctx, 31, 0x301B7Cu);
    ctx->pc = 0x301B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301B74u;
            // 0x301b78: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B7Cu; }
        if (ctx->pc != 0x301B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B7Cu; }
        if (ctx->pc != 0x301B7Cu) { return; }
    }
    ctx->pc = 0x301B7Cu;
label_301b7c:
    // 0x301b7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x301b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301b80:
    // 0x301b80: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_301b84:
    if (ctx->pc == 0x301B84u) {
        ctx->pc = 0x301B84u;
            // 0x301b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301B88u;
        goto label_301b88;
    }
    ctx->pc = 0x301B80u;
    {
        const bool branch_taken_0x301b80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x301B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301B80u;
            // 0x301b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b80) {
            ctx->pc = 0x301B90u;
            goto label_301b90;
        }
    }
    ctx->pc = 0x301B88u;
label_301b88:
    // 0x301b88: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_301b8c:
    if (ctx->pc == 0x301B8Cu) {
        ctx->pc = 0x301B8Cu;
            // 0x301b8c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x301B90u;
        goto label_301b90;
    }
    ctx->pc = 0x301B88u;
    {
        const bool branch_taken_0x301b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301B88u;
            // 0x301b8c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b88) {
            ctx->pc = 0x301F70u;
            goto label_301f70;
        }
    }
    ctx->pc = 0x301B90u;
label_301b90:
    // 0x301b90: 0x8e652e54  lw          $a1, 0x2E54($s3)
    ctx->pc = 0x301b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11860)));
label_301b94:
    // 0x301b94: 0xc0a0e30  jal         func_2838C0
label_301b98:
    if (ctx->pc == 0x301B98u) {
        ctx->pc = 0x301B98u;
            // 0x301b98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301B9Cu;
        goto label_301b9c;
    }
    ctx->pc = 0x301B94u;
    SET_GPR_U32(ctx, 31, 0x301B9Cu);
    ctx->pc = 0x301B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301B94u;
            // 0x301b98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B9Cu; }
        if (ctx->pc != 0x301B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B9Cu; }
        if (ctx->pc != 0x301B9Cu) { return; }
    }
    ctx->pc = 0x301B9Cu;
label_301b9c:
    // 0x301b9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_301ba0:
    if (ctx->pc == 0x301BA0u) {
        ctx->pc = 0x301BA4u;
        goto label_301ba4;
    }
    ctx->pc = 0x301B9Cu;
    {
        const bool branch_taken_0x301b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b9c) {
            ctx->pc = 0x301BC0u;
            goto label_301bc0;
        }
    }
    ctx->pc = 0x301BA4u;
label_301ba4:
    // 0x301ba4: 0x8c590060  lw          $t9, 0x60($v0)
    ctx->pc = 0x301ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_301ba8:
    // 0x301ba8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x301ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_301bac:
    // 0x301bac: 0x320f809  jalr        $t9
label_301bb0:
    if (ctx->pc == 0x301BB0u) {
        ctx->pc = 0x301BB0u;
            // 0x301bb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301BB4u;
        goto label_301bb4;
    }
    ctx->pc = 0x301BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301BB4u);
        ctx->pc = 0x301BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301BACu;
            // 0x301bb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301BB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301BB4u; }
            if (ctx->pc != 0x301BB4u) { return; }
        }
        }
    }
    ctx->pc = 0x301BB4u;
label_301bb4:
    // 0x301bb4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x301bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_301bb8:
    // 0x301bb8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_301bbc:
    if (ctx->pc == 0x301BBCu) {
        ctx->pc = 0x301BC0u;
        goto label_301bc0;
    }
    ctx->pc = 0x301BB8u;
    {
        const bool branch_taken_0x301bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x301bb8) {
            ctx->pc = 0x301BC8u;
            goto label_301bc8;
        }
    }
    ctx->pc = 0x301BC0u;
label_301bc0:
    // 0x301bc0: 0x100000ea  b           . + 4 + (0xEA << 2)
label_301bc4:
    if (ctx->pc == 0x301BC4u) {
        ctx->pc = 0x301BC4u;
            // 0x301bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301BC8u;
        goto label_301bc8;
    }
    ctx->pc = 0x301BC0u;
    {
        const bool branch_taken_0x301bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301BC0u;
            // 0x301bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bc0) {
            ctx->pc = 0x301F6Cu;
            goto label_301f6c;
        }
    }
    ctx->pc = 0x301BC8u;
label_301bc8:
    // 0x301bc8: 0x8f82a020  lw          $v0, -0x5FE0($gp)
    ctx->pc = 0x301bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
label_301bcc:
    // 0x301bcc: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x301bccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_301bd0:
    // 0x301bd0: 0xaf80a0dc  sw          $zero, -0x5F24($gp)
    ctx->pc = 0x301bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 0));
label_301bd4:
    // 0x301bd4: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_301bd8:
    if (ctx->pc == 0x301BD8u) {
        ctx->pc = 0x301BD8u;
            // 0x301bd8: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->pc = 0x301BDCu;
        goto label_301bdc;
    }
    ctx->pc = 0x301BD4u;
    {
        const bool branch_taken_0x301bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301BD4u;
            // 0x301bd8: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bd4) {
            ctx->pc = 0x301D74u;
            goto label_301d74;
        }
    }
    ctx->pc = 0x301BDCu;
label_301bdc:
    // 0x301bdc: 0xc05239c  jal         func_148E70
label_301be0:
    if (ctx->pc == 0x301BE0u) {
        ctx->pc = 0x301BE4u;
        goto label_301be4;
    }
    ctx->pc = 0x301BDCu;
    SET_GPR_U32(ctx, 31, 0x301BE4u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301BE4u; }
        if (ctx->pc != 0x301BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301BE4u; }
        if (ctx->pc != 0x301BE4u) { return; }
    }
    ctx->pc = 0x301BE4u;
label_301be4:
    // 0x301be4: 0x0  nop
    ctx->pc = 0x301be4u;
    // NOP
label_301be8:
    // 0x301be8: 0x0  nop
    ctx->pc = 0x301be8u;
    // NOP
label_301bec:
    // 0x301bec: 0x0  nop
    ctx->pc = 0x301becu;
    // NOP
label_301bf0:
    // 0x301bf0: 0x0  nop
    ctx->pc = 0x301bf0u;
    // NOP
label_301bf4:
    // 0x301bf4: 0x0  nop
    ctx->pc = 0x301bf4u;
    // NOP
label_301bf8:
    // 0x301bf8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_301bfc:
    if (ctx->pc == 0x301BFCu) {
        ctx->pc = 0x301C00u;
        goto label_301c00;
    }
    ctx->pc = 0x301BF8u;
    {
        const bool branch_taken_0x301bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301bf8) {
            ctx->pc = 0x301BDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_301bdc;
        }
    }
    ctx->pc = 0x301C00u;
label_301c00:
    // 0x301c00: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301c04:
    // 0x301c04: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x301c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_301c08:
    // 0x301c08: 0x8c239d58  lw          $v1, -0x62A8($at)
    ctx->pc = 0x301c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942040)));
label_301c0c:
    // 0x301c0c: 0x24849dc0  addiu       $a0, $a0, -0x6240
    ctx->pc = 0x301c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942144));
label_301c10:
    // 0x301c10: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301c14:
    // 0x301c14: 0x8c259d54  lw          $a1, -0x62AC($at)
    ctx->pc = 0x301c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942036)));
label_301c18:
    // 0x301c18: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301c1c:
    // 0x301c1c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x301c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_301c20:
    // 0x301c20: 0x8c229d50  lw          $v0, -0x62B0($at)
    ctx->pc = 0x301c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942032)));
label_301c24:
    // 0x301c24: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x301c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_301c28:
    // 0x301c28: 0xc04e79c  jal         func_139E70
label_301c2c:
    if (ctx->pc == 0x301C2Cu) {
        ctx->pc = 0x301C2Cu;
            // 0x301c2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x301C30u;
        goto label_301c30;
    }
    ctx->pc = 0x301C28u;
    SET_GPR_U32(ctx, 31, 0x301C30u);
    ctx->pc = 0x301C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301C28u;
            // 0x301c2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C30u; }
        if (ctx->pc != 0x301C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C30u; }
        if (ctx->pc != 0x301C30u) { return; }
    }
    ctx->pc = 0x301C30u;
label_301c30:
    // 0x301c30: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301c34:
    // 0x301c34: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x301c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_301c38:
    // 0x301c38: 0xac209de4  sw          $zero, -0x621C($at)
    ctx->pc = 0x301c38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942180), GPR_U32(ctx, 0));
label_301c3c:
    // 0x301c3c: 0x24849dc0  addiu       $a0, $a0, -0x6240
    ctx->pc = 0x301c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942144));
label_301c40:
    // 0x301c40: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301c44:
    // 0x301c44: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x301c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_301c48:
    // 0x301c48: 0xc04e748  jal         func_139D20
label_301c4c:
    if (ctx->pc == 0x301C4Cu) {
        ctx->pc = 0x301C4Cu;
            // 0x301c4c: 0xac209ddc  sw          $zero, -0x6224($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942172), GPR_U32(ctx, 0));
        ctx->pc = 0x301C50u;
        goto label_301c50;
    }
    ctx->pc = 0x301C48u;
    SET_GPR_U32(ctx, 31, 0x301C50u);
    ctx->pc = 0x301C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301C48u;
            // 0x301c4c: 0xac209ddc  sw          $zero, -0x6224($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C50u; }
        if (ctx->pc != 0x301C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C50u; }
        if (ctx->pc != 0x301C50u) { return; }
    }
    ctx->pc = 0x301C50u;
label_301c50:
    // 0x301c50: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x301c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_301c54:
    // 0x301c54: 0xc04e638  jal         func_1398E0
label_301c58:
    if (ctx->pc == 0x301C58u) {
        ctx->pc = 0x301C58u;
            // 0x301c58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301C5Cu;
        goto label_301c5c;
    }
    ctx->pc = 0x301C54u;
    SET_GPR_U32(ctx, 31, 0x301C5Cu);
    ctx->pc = 0x301C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301C54u;
            // 0x301c58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C5Cu; }
        if (ctx->pc != 0x301C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C5Cu; }
        if (ctx->pc != 0x301C5Cu) { return; }
    }
    ctx->pc = 0x301C5Cu;
label_301c5c:
    // 0x301c5c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_301c60:
    if (ctx->pc == 0x301C60u) {
        ctx->pc = 0x301C60u;
            // 0x301c60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301C64u;
        goto label_301c64;
    }
    ctx->pc = 0x301C5Cu;
    {
        const bool branch_taken_0x301c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301C5Cu;
            // 0x301c60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c5c) {
            ctx->pc = 0x301CE0u;
            goto label_301ce0;
        }
    }
    ctx->pc = 0x301C64u;
label_301c64:
    // 0x301c64: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x301c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_301c68:
    // 0x301c68: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x301c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_301c6c:
    // 0x301c6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x301c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_301c70:
    // 0x301c70: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x301c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_301c74:
    // 0x301c74: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x301c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_301c78:
    // 0x301c78: 0x320f809  jalr        $t9
label_301c7c:
    if (ctx->pc == 0x301C7Cu) {
        ctx->pc = 0x301C7Cu;
            // 0x301c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301C80u;
        goto label_301c80;
    }
    ctx->pc = 0x301C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301C80u);
        ctx->pc = 0x301C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301C78u;
            // 0x301c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301C80u; }
            if (ctx->pc != 0x301C80u) { return; }
        }
        }
    }
    ctx->pc = 0x301C80u;
label_301c80:
    // 0x301c80: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x301c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_301c84:
    // 0x301c84: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x301c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_301c88:
    // 0x301c88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x301c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_301c8c:
    // 0x301c8c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x301c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_301c90:
    // 0x301c90: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x301c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_301c94:
    // 0x301c94: 0x320f809  jalr        $t9
label_301c98:
    if (ctx->pc == 0x301C98u) {
        ctx->pc = 0x301C98u;
            // 0x301c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301C9Cu;
        goto label_301c9c;
    }
    ctx->pc = 0x301C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301C9Cu);
        ctx->pc = 0x301C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301C94u;
            // 0x301c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301C9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301C9Cu; }
            if (ctx->pc != 0x301C9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x301C9Cu;
label_301c9c:
    // 0x301c9c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x301c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_301ca0:
    // 0x301ca0: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x301ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_301ca4:
    // 0x301ca4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x301ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_301ca8:
    // 0x301ca8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x301ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_301cac:
    // 0x301cac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x301cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_301cb0:
    // 0x301cb0: 0x320f809  jalr        $t9
label_301cb4:
    if (ctx->pc == 0x301CB4u) {
        ctx->pc = 0x301CB4u;
            // 0x301cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301CB8u;
        goto label_301cb8;
    }
    ctx->pc = 0x301CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301CB8u);
        ctx->pc = 0x301CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301CB0u;
            // 0x301cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301CB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301CB8u; }
            if (ctx->pc != 0x301CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x301CB8u;
label_301cb8:
    // 0x301cb8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x301cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_301cbc:
    // 0x301cbc: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x301cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_301cc0:
    // 0x301cc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x301cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_301cc4:
    // 0x301cc4: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x301cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_301cc8:
    // 0x301cc8: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x301cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_301ccc:
    // 0x301ccc: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x301cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_301cd0:
    // 0x301cd0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x301cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_301cd4:
    // 0x301cd4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x301cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_301cd8:
    // 0x301cd8: 0x320f809  jalr        $t9
label_301cdc:
    if (ctx->pc == 0x301CDCu) {
        ctx->pc = 0x301CDCu;
            // 0x301cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301CE0u;
        goto label_301ce0;
    }
    ctx->pc = 0x301CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301CE0u);
        ctx->pc = 0x301CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301CD8u;
            // 0x301cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301CE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301CE0u; }
            if (ctx->pc != 0x301CE0u) { return; }
        }
        }
    }
    ctx->pc = 0x301CE0u;
label_301ce0:
    // 0x301ce0: 0xaf919fa4  sw          $s1, -0x605C($gp)
    ctx->pc = 0x301ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942628), GPR_U32(ctx, 17));
label_301ce4:
    // 0x301ce4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x301ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_301ce8:
    // 0x301ce8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x301ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_301cec:
    // 0x301cec: 0x320f809  jalr        $t9
label_301cf0:
    if (ctx->pc == 0x301CF0u) {
        ctx->pc = 0x301CF0u;
            // 0x301cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301CF4u;
        goto label_301cf4;
    }
    ctx->pc = 0x301CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301CF4u);
        ctx->pc = 0x301CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301CECu;
            // 0x301cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301CF4u; }
            if (ctx->pc != 0x301CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x301CF4u;
label_301cf4:
    // 0x301cf4: 0x8f859f94  lw          $a1, -0x606C($gp)
    ctx->pc = 0x301cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942612)));
label_301cf8:
    // 0x301cf8: 0xc04b950  jal         func_12E540
label_301cfc:
    if (ctx->pc == 0x301CFCu) {
        ctx->pc = 0x301CFCu;
            // 0x301cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301D00u;
        goto label_301d00;
    }
    ctx->pc = 0x301CF8u;
    SET_GPR_U32(ctx, 31, 0x301D00u);
    ctx->pc = 0x301CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301CF8u;
            // 0x301cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D00u; }
        if (ctx->pc != 0x301D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D00u; }
        if (ctx->pc != 0x301D00u) { return; }
    }
    ctx->pc = 0x301D00u;
label_301d00:
    // 0x301d00: 0x8f849fa4  lw          $a0, -0x605C($gp)
    ctx->pc = 0x301d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942628)));
label_301d04:
    // 0x301d04: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x301d04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
label_301d08:
    // 0x301d08: 0x24e79dc0  addiu       $a3, $a3, -0x6240
    ctx->pc = 0x301d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942144));
label_301d0c:
    // 0x301d0c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x301d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_301d10:
    // 0x301d10: 0x8f85a01c  lw          $a1, -0x5FE4($gp)
    ctx->pc = 0x301d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
label_301d14:
    // 0x301d14: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x301d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_301d18:
    // 0x301d18: 0x8f8a9f94  lw          $t2, -0x606C($gp)
    ctx->pc = 0x301d18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942612)));
label_301d1c:
    // 0x301d1c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x301d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_301d20:
    // 0x301d20: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x301d20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_301d24:
    // 0x301d24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x301d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_301d28:
    // 0x301d28: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x301d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_301d2c:
    // 0x301d2c: 0x320f809  jalr        $t9
label_301d30:
    if (ctx->pc == 0x301D30u) {
        ctx->pc = 0x301D30u;
            // 0x301d30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301D34u;
        goto label_301d34;
    }
    ctx->pc = 0x301D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301D34u);
        ctx->pc = 0x301D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301D2Cu;
            // 0x301d30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301D34u; }
            if (ctx->pc != 0x301D34u) { return; }
        }
        }
    }
    ctx->pc = 0x301D34u;
label_301d34:
    // 0x301d34: 0x8f849fa4  lw          $a0, -0x605C($gp)
    ctx->pc = 0x301d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942628)));
label_301d38:
    // 0x301d38: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301d3c:
    // 0x301d3c: 0xc42c9d10  lwc1        $f12, -0x62F0($at)
    ctx->pc = 0x301d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_301d40:
    // 0x301d40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x301d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_301d44:
    // 0x301d44: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301d48:
    // 0x301d48: 0xc42e9d0c  lwc1        $f14, -0x62F4($at)
    ctx->pc = 0x301d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_301d4c:
    // 0x301d4c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x301d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_301d50:
    // 0x301d50: 0x320f809  jalr        $t9
label_301d54:
    if (ctx->pc == 0x301D54u) {
        ctx->pc = 0x301D54u;
            // 0x301d54: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x301D58u;
        goto label_301d58;
    }
    ctx->pc = 0x301D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301D58u);
        ctx->pc = 0x301D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301D50u;
            // 0x301d54: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301D58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301D58u; }
            if (ctx->pc != 0x301D58u) { return; }
        }
        }
    }
    ctx->pc = 0x301D58u;
label_301d58:
    // 0x301d58: 0x8f849fa4  lw          $a0, -0x605C($gp)
    ctx->pc = 0x301d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942628)));
label_301d5c:
    // 0x301d5c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x301d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_301d60:
    // 0x301d60: 0x24a520c8  addiu       $a1, $a1, 0x20C8
    ctx->pc = 0x301d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8392));
label_301d64:
    // 0x301d64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x301d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_301d68:
    // 0x301d68: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x301d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_301d6c:
    // 0x301d6c: 0x320f809  jalr        $t9
label_301d70:
    if (ctx->pc == 0x301D70u) {
        ctx->pc = 0x301D70u;
            // 0x301d70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301D74u;
        goto label_301d74;
    }
    ctx->pc = 0x301D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301D74u);
        ctx->pc = 0x301D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301D6Cu;
            // 0x301d70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301D74u; }
            if (ctx->pc != 0x301D74u) { return; }
        }
        }
    }
    ctx->pc = 0x301D74u;
label_301d74:
    // 0x301d74: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x301d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_301d78:
    // 0x301d78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301d7c:
    // 0x301d7c: 0xc0c3e94  jal         func_30FA50
label_301d80:
    if (ctx->pc == 0x301D80u) {
        ctx->pc = 0x301D84u;
        goto label_301d84;
    }
    ctx->pc = 0x301D7Cu;
    SET_GPR_U32(ctx, 31, 0x301D84u);
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D84u; }
        if (ctx->pc != 0x301D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D84u; }
        if (ctx->pc != 0x301D84u) { return; }
    }
    ctx->pc = 0x301D84u;
label_301d84:
    // 0x301d84: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x301d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_301d88:
    // 0x301d88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301d8c:
    // 0x301d8c: 0xc0c3e94  jal         func_30FA50
label_301d90:
    if (ctx->pc == 0x301D90u) {
        ctx->pc = 0x301D94u;
        goto label_301d94;
    }
    ctx->pc = 0x301D8Cu;
    SET_GPR_U32(ctx, 31, 0x301D94u);
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D94u; }
        if (ctx->pc != 0x301D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D94u; }
        if (ctx->pc != 0x301D94u) { return; }
    }
    ctx->pc = 0x301D94u;
label_301d94:
    // 0x301d94: 0xc0c4244  jal         func_310910
label_301d98:
    if (ctx->pc == 0x301D98u) {
        ctx->pc = 0x301D9Cu;
        goto label_301d9c;
    }
    ctx->pc = 0x301D94u;
    SET_GPR_U32(ctx, 31, 0x301D9Cu);
    ctx->pc = 0x310910u;
    if (runtime->hasFunction(0x310910u)) {
        auto targetFn = runtime->lookupFunction(0x310910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D9Cu; }
        if (ctx->pc != 0x301D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetLineVelo__Fv_0x310910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D9Cu; }
        if (ctx->pc != 0x301D9Cu) { return; }
    }
    ctx->pc = 0x301D9Cu;
label_301d9c:
    // 0x301d9c: 0xaf80a0c8  sw          $zero, -0x5F38($gp)
    ctx->pc = 0x301d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 0));
label_301da0:
    // 0x301da0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x301da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_301da4:
    // 0x301da4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x301da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301da8:
    // 0x301da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301dac:
    // 0x301dac: 0x24a520d8  addiu       $a1, $a1, 0x20D8
    ctx->pc = 0x301dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8408));
label_301db0:
    // 0x301db0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x301db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_301db4:
    // 0x301db4: 0x320f809  jalr        $t9
label_301db8:
    if (ctx->pc == 0x301DB8u) {
        ctx->pc = 0x301DB8u;
            // 0x301db8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x301DBCu;
        goto label_301dbc;
    }
    ctx->pc = 0x301DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301DBCu);
        ctx->pc = 0x301DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301DB4u;
            // 0x301db8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301DBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301DBCu; }
            if (ctx->pc != 0x301DBCu) { return; }
        }
        }
    }
    ctx->pc = 0x301DBCu;
label_301dbc:
    // 0x301dbc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x301dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_301dc0:
    // 0x301dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301dc4:
    // 0x301dc4: 0x24a520d8  addiu       $a1, $a1, 0x20D8
    ctx->pc = 0x301dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8408));
label_301dc8:
    // 0x301dc8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x301dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_301dcc:
    // 0x301dcc: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x301dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_301dd0:
    // 0x301dd0: 0xc0bff38  jal         func_2FFCE0
label_301dd4:
    if (ctx->pc == 0x301DD4u) {
        ctx->pc = 0x301DD4u;
            // 0x301dd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301DD8u;
        goto label_301dd8;
    }
    ctx->pc = 0x301DD0u;
    SET_GPR_U32(ctx, 31, 0x301DD8u);
    ctx->pc = 0x301DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301DD0u;
            // 0x301dd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFCE0u;
    if (runtime->hasFunction(0x2FFCE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FFCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DD8u; }
        if (ctx->pc != 0x301DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMotionCount__FP11CCharacter2Pciii_0x2ffce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DD8u; }
        if (ctx->pc != 0x301DD8u) { return; }
    }
    ctx->pc = 0x301DD8u;
label_301dd8:
    // 0x301dd8: 0xc064220  jal         func_190880
label_301ddc:
    if (ctx->pc == 0x301DDCu) {
        ctx->pc = 0x301DDCu;
            // 0x301ddc: 0xaf82a0d0  sw          $v0, -0x5F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 2));
        ctx->pc = 0x301DE0u;
        goto label_301de0;
    }
    ctx->pc = 0x301DD8u;
    SET_GPR_U32(ctx, 31, 0x301DE0u);
    ctx->pc = 0x301DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301DD8u;
            // 0x301ddc: 0xaf82a0d0  sw          $v0, -0x5F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DE0u; }
        if (ctx->pc != 0x301DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DE0u; }
        if (ctx->pc != 0x301DE0u) { return; }
    }
    ctx->pc = 0x301DE0u;
label_301de0:
    // 0x301de0: 0xc0c3e70  jal         func_30F9C0
label_301de4:
    if (ctx->pc == 0x301DE4u) {
        ctx->pc = 0x301DE4u;
            // 0x301de4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301DE8u;
        goto label_301de8;
    }
    ctx->pc = 0x301DE0u;
    SET_GPR_U32(ctx, 31, 0x301DE8u);
    ctx->pc = 0x301DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301DE0u;
            // 0x301de4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9C0u;
    if (runtime->hasFunction(0x30F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DE8u; }
        if (ctx->pc != 0x301DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingMode__Fv_0x30f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DE8u; }
        if (ctx->pc != 0x301DE8u) { return; }
    }
    ctx->pc = 0x301DE8u;
label_301de8:
    // 0x301de8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301dec:
    // 0x301dec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_301df0:
    if (ctx->pc == 0x301DF0u) {
        ctx->pc = 0x301DF0u;
            // 0x301df0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301DF4u;
        goto label_301df4;
    }
    ctx->pc = 0x301DECu;
    {
        const bool branch_taken_0x301dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x301DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301DECu;
            // 0x301df0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301dec) {
            ctx->pc = 0x301E00u;
            goto label_301e00;
        }
    }
    ctx->pc = 0x301DF4u;
label_301df4:
    // 0x301df4: 0xc0c05c8  jal         func_301720
label_301df8:
    if (ctx->pc == 0x301DF8u) {
        ctx->pc = 0x301DFCu;
        goto label_301dfc;
    }
    ctx->pc = 0x301DF4u;
    SET_GPR_U32(ctx, 31, 0x301DFCu);
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DFCu; }
        if (ctx->pc != 0x301DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEsa__Fv_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DFCu; }
        if (ctx->pc != 0x301DFCu) { return; }
    }
    ctx->pc = 0x301DFCu;
label_301dfc:
    // 0x301dfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301e00:
    // 0x301e00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x301e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301e04:
    // 0x301e04: 0xc0a0e78  jal         func_2839E0
label_301e08:
    if (ctx->pc == 0x301E08u) {
        ctx->pc = 0x301E08u;
            // 0x301e08: 0xaf80a0d4  sw          $zero, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 0));
        ctx->pc = 0x301E0Cu;
        goto label_301e0c;
    }
    ctx->pc = 0x301E04u;
    SET_GPR_U32(ctx, 31, 0x301E0Cu);
    ctx->pc = 0x301E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301E04u;
            // 0x301e08: 0xaf80a0d4  sw          $zero, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2839E0u;
    if (runtime->hasFunction(0x2839E0u)) {
        auto targetFn = runtime->lookupFunction(0x2839E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E0Cu; }
        if (ctx->pc != 0x301E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMessage__6CSceneFi_0x2839e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E0Cu; }
        if (ctx->pc != 0x301E0Cu) { return; }
    }
    ctx->pc = 0x301E0Cu;
label_301e0c:
    // 0x301e0c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301e10:
    // 0x301e10: 0x8c249d00  lw          $a0, -0x6300($at)
    ctx->pc = 0x301e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941952)));
label_301e14:
    // 0x301e14: 0xc0bf144  jal         func_2FC510
label_301e18:
    if (ctx->pc == 0x301E18u) {
        ctx->pc = 0x301E18u;
            // 0x301e18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301E1Cu;
        goto label_301e1c;
    }
    ctx->pc = 0x301E14u;
    SET_GPR_U32(ctx, 31, 0x301E1Cu);
    ctx->pc = 0x301E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301E14u;
            // 0x301e18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC510u;
    if (runtime->hasFunction(0x2FC510u)) {
        auto targetFn = runtime->lookupFunction(0x2FC510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E1Cu; }
        if (ctx->pc != 0x301E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishParam__Fi_0x2fc510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E1Cu; }
        if (ctx->pc != 0x301E1Cu) { return; }
    }
    ctx->pc = 0x301E1Cu;
label_301e1c:
    // 0x301e1c: 0xae001a44  sw          $zero, 0x1A44($s0)
    ctx->pc = 0x301e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6724), GPR_U32(ctx, 0));
label_301e20:
    // 0x301e20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x301e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301e24:
    // 0x301e24: 0xae001a84  sw          $zero, 0x1A84($s0)
    ctx->pc = 0x301e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6788), GPR_U32(ctx, 0));
label_301e28:
    // 0x301e28: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x301e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_301e2c:
    // 0x301e2c: 0xae001a48  sw          $zero, 0x1A48($s0)
    ctx->pc = 0x301e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6728), GPR_U32(ctx, 0));
label_301e30:
    // 0x301e30: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
label_301e34:
    if (ctx->pc == 0x301E34u) {
        ctx->pc = 0x301E34u;
            // 0x301e34: 0xae001a88  sw          $zero, 0x1A88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6792), GPR_U32(ctx, 0));
        ctx->pc = 0x301E38u;
        goto label_301e38;
    }
    ctx->pc = 0x301E30u;
    {
        const bool branch_taken_0x301e30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x301E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301E30u;
            // 0x301e34: 0xae001a88  sw          $zero, 0x1A88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e30) {
            ctx->pc = 0x301EACu;
            goto label_301eac;
        }
    }
    ctx->pc = 0x301E38u;
label_301e38:
    // 0x301e38: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301e3c:
    // 0x301e3c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x301e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_301e40:
    // 0x301e40: 0xc4209d04  lwc1        $f0, -0x62FC($at)
    ctx->pc = 0x301e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301e44:
    // 0x301e44: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x301e44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_301e48:
    // 0x301e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x301e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_301e4c:
    // 0x301e4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x301e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_301e50:
    // 0x301e50: 0x3442d2a0  ori         $v0, $v0, 0xD2A0
    ctx->pc = 0x301e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53920);
label_301e54:
    // 0x301e54: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x301e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_301e58:
    // 0x301e58: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x301e58u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_301e5c:
    // 0x301e5c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301e60:
    // 0x301e60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x301e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301e64:
    // 0x301e64: 0xc4359d08  lwc1        $f21, -0x62F8($at)
    ctx->pc = 0x301e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_301e68:
    // 0x301e68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x301e68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_301e6c:
    // 0x301e6c: 0xc0673f4  jal         func_19CFD0
label_301e70:
    if (ctx->pc == 0x301E70u) {
        ctx->pc = 0x301E70u;
            // 0x301e70: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x301E74u;
        goto label_301e74;
    }
    ctx->pc = 0x301E6Cu;
    SET_GPR_U32(ctx, 31, 0x301E74u);
    ctx->pc = 0x301E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301E6Cu;
            // 0x301e70: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFD0u;
    if (runtime->hasFunction(0x19CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x19CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E74u; }
        if (ctx->pc != 0x301E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishInAquarium__16CUserDataManagerFiff_0x19cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E74u; }
        if (ctx->pc != 0x301E74u) { return; }
    }
    ctx->pc = 0x301E74u;
label_301e74:
    // 0x301e74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x301e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_301e78:
    // 0x301e78: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x301e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
label_301e7c:
    // 0x301e7c: 0x2212021  addu        $a0, $s1, $at
    ctx->pc = 0x301e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_301e80:
    // 0x301e80: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301e84:
    // 0x301e84: 0x8c259d20  lw          $a1, -0x62E0($at)
    ctx->pc = 0x301e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941984)));
label_301e88:
    // 0x301e88: 0xc0674b8  jal         func_19D2E0
label_301e8c:
    if (ctx->pc == 0x301E8Cu) {
        ctx->pc = 0x301E8Cu;
            // 0x301e8c: 0xaf82a0d4  sw          $v0, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 2));
        ctx->pc = 0x301E90u;
        goto label_301e90;
    }
    ctx->pc = 0x301E88u;
    SET_GPR_U32(ctx, 31, 0x301E90u);
    ctx->pc = 0x301E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301E88u;
            // 0x301e8c: 0xaf82a0d4  sw          $v0, -0x5F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D2E0u;
    if (runtime->hasFunction(0x19D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x19D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E90u; }
        if (ctx->pc != 0x301E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFp__16CUserDataManagerFi_0x19d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E90u; }
        if (ctx->pc != 0x301E90u) { return; }
    }
    ctx->pc = 0x301E90u;
label_301e90:
    // 0x301e90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x301e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_301e94:
    // 0x301e94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x301e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301e98:
    // 0x301e98: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x301e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
label_301e9c:
    // 0x301e9c: 0x2212021  addu        $a0, $s1, $at
    ctx->pc = 0x301e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_301ea0:
    // 0x301ea0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x301ea0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_301ea4:
    // 0x301ea4: 0xc067470  jal         func_19D1C0
label_301ea8:
    if (ctx->pc == 0x301EA8u) {
        ctx->pc = 0x301EA8u;
            // 0x301ea8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x301EACu;
        goto label_301eac;
    }
    ctx->pc = 0x301EA4u;
    SET_GPR_U32(ctx, 31, 0x301EACu);
    ctx->pc = 0x301EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301EA4u;
            // 0x301ea8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D1C0u;
    if (runtime->hasFunction(0x19D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x19D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301EACu; }
        if (ctx->pc != 0x301EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishRecordUpdate__16CUserDataManagerFiff_0x19d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301EACu; }
        if (ctx->pc != 0x301EACu) { return; }
    }
    ctx->pc = 0x301EACu;
label_301eac:
    // 0x301eac: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x301eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_301eb0:
    // 0x301eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x301eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301eb4:
    // 0x301eb4: 0xc0c409c  jal         func_310270
label_301eb8:
    if (ctx->pc == 0x301EB8u) {
        ctx->pc = 0x301EB8u;
            // 0x301eb8: 0xaf82a064  sw          $v0, -0x5F9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942820), GPR_U32(ctx, 2));
        ctx->pc = 0x301EBCu;
        goto label_301ebc;
    }
    ctx->pc = 0x301EB4u;
    SET_GPR_U32(ctx, 31, 0x301EBCu);
    ctx->pc = 0x301EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301EB4u;
            // 0x301eb8: 0xaf82a064  sw          $v0, -0x5F9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310270u;
    if (runtime->hasFunction(0x310270u)) {
        auto targetFn = runtime->lookupFunction(0x310270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301EBCu; }
        if (ctx->pc != 0x301EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetShowHari__Fi_0x310270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301EBCu; }
        if (ctx->pc != 0x301EBCu) { return; }
    }
    ctx->pc = 0x301EBCu;
label_301ebc:
    // 0x301ebc: 0x6600026  bltz        $s3, . + 4 + (0x26 << 2)
label_301ec0:
    if (ctx->pc == 0x301EC0u) {
        ctx->pc = 0x301EC0u;
            // 0x301ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301EC4u;
        goto label_301ec4;
    }
    ctx->pc = 0x301EBCu;
    {
        const bool branch_taken_0x301ebc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x301EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301EBCu;
            // 0x301ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ebc) {
            ctx->pc = 0x301F58u;
            goto label_301f58;
        }
    }
    ctx->pc = 0x301EC4u;
label_301ec4:
    // 0x301ec4: 0xc054bb4  jal         func_152ED0
label_301ec8:
    if (ctx->pc == 0x301EC8u) {
        ctx->pc = 0x301EC8u;
            // 0x301ec8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x301ECCu;
        goto label_301ecc;
    }
    ctx->pc = 0x301EC4u;
    SET_GPR_U32(ctx, 31, 0x301ECCu);
    ctx->pc = 0x301EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301EC4u;
            // 0x301ec8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301ECCu; }
        if (ctx->pc != 0x301ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301ECCu; }
        if (ctx->pc != 0x301ECCu) { return; }
    }
    ctx->pc = 0x301ECCu;
label_301ecc:
    // 0x301ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301ed0:
    // 0x301ed0: 0xc054cdc  jal         func_153370
label_301ed4:
    if (ctx->pc == 0x301ED4u) {
        ctx->pc = 0x301ED4u;
            // 0x301ed4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x301ED8u;
        goto label_301ed8;
    }
    ctx->pc = 0x301ED0u;
    SET_GPR_U32(ctx, 31, 0x301ED8u);
    ctx->pc = 0x301ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301ED0u;
            // 0x301ed4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301ED8u; }
        if (ctx->pc != 0x301ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301ED8u; }
        if (ctx->pc != 0x301ED8u) { return; }
    }
    ctx->pc = 0x301ED8u;
label_301ed8:
    // 0x301ed8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x301ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_301edc:
    // 0x301edc: 0xc0657f8  jal         func_195FE0
label_301ee0:
    if (ctx->pc == 0x301EE0u) {
        ctx->pc = 0x301EE0u;
            // 0x301ee0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x301EE4u;
        goto label_301ee4;
    }
    ctx->pc = 0x301EDCu;
    SET_GPR_U32(ctx, 31, 0x301EE4u);
    ctx->pc = 0x301EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301EDCu;
            // 0x301ee0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195FE0u;
    if (runtime->hasFunction(0x195FE0u)) {
        auto targetFn = runtime->lookupFunction(0x195FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301EE4u; }
        if (ctx->pc != 0x301EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessageNo__Fii_0x195fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301EE4u; }
        if (ctx->pc != 0x301EE4u) { return; }
    }
    ctx->pc = 0x301EE4u;
label_301ee4:
    // 0x301ee4: 0xae021a04  sw          $v0, 0x1A04($s0)
    ctx->pc = 0x301ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6660), GPR_U32(ctx, 2));
label_301ee8:
    // 0x301ee8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301eec:
    // 0x301eec: 0xc0a248c  jal         func_289230
label_301ef0:
    if (ctx->pc == 0x301EF0u) {
        ctx->pc = 0x301EF0u;
            // 0x301ef0: 0xc42c9d04  lwc1        $f12, -0x62FC($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x301EF4u;
        goto label_301ef4;
    }
    ctx->pc = 0x301EECu;
    SET_GPR_U32(ctx, 31, 0x301EF4u);
    ctx->pc = 0x301EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301EECu;
            // 0x301ef0: 0xc42c9d04  lwc1        $f12, -0x62FC($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301EF4u; }
        if (ctx->pc != 0x301EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301EF4u; }
        if (ctx->pc != 0x301EF4u) { return; }
    }
    ctx->pc = 0x301EF4u;
label_301ef4:
    // 0x301ef4: 0xae021a44  sw          $v0, 0x1A44($s0)
    ctx->pc = 0x301ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6724), GPR_U32(ctx, 2));
label_301ef8:
    // 0x301ef8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x301ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_301efc:
    // 0x301efc: 0xae001a84  sw          $zero, 0x1A84($s0)
    ctx->pc = 0x301efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6788), GPR_U32(ctx, 0));
label_301f00:
    // 0x301f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301f04:
    // 0x301f04: 0x8c229d20  lw          $v0, -0x62E0($at)
    ctx->pc = 0x301f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941984)));
label_301f08:
    // 0x301f08: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x301f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_301f0c:
    // 0x301f0c: 0xae021a48  sw          $v0, 0x1A48($s0)
    ctx->pc = 0x301f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6728), GPR_U32(ctx, 2));
label_301f10:
    // 0x301f10: 0xae001a88  sw          $zero, 0x1A88($s0)
    ctx->pc = 0x301f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6792), GPR_U32(ctx, 0));
label_301f14:
    // 0x301f14: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x301f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_301f18:
    // 0x301f18: 0xaf82a0dc  sw          $v0, -0x5F24($gp)
    ctx->pc = 0x301f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 2));
label_301f1c:
    // 0x301f1c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x301f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_301f20:
    // 0x301f20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x301f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_301f24:
    // 0x301f24: 0xc0562c8  jal         func_158B20
label_301f28:
    if (ctx->pc == 0x301F28u) {
        ctx->pc = 0x301F28u;
            // 0x301f28: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->pc = 0x301F2Cu;
        goto label_301f2c;
    }
    ctx->pc = 0x301F24u;
    SET_GPR_U32(ctx, 31, 0x301F2Cu);
    ctx->pc = 0x301F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301F24u;
            // 0x301f28: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301F2Cu; }
        if (ctx->pc != 0x301F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301F2Cu; }
        if (ctx->pc != 0x301F2Cu) { return; }
    }
    ctx->pc = 0x301F2Cu;
label_301f2c:
    // 0x301f2c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x301f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_301f30:
    // 0x301f30: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x301f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
label_301f34:
    // 0x301f34: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x301f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_301f38:
    // 0x301f38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x301f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_301f3c:
    // 0x301f3c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_301f40:
    if (ctx->pc == 0x301F40u) {
        ctx->pc = 0x301F40u;
            // 0x301f40: 0x41043  sra         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
        ctx->pc = 0x301F44u;
        goto label_301f44;
    }
    ctx->pc = 0x301F3Cu;
    {
        const bool branch_taken_0x301f3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x301F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301F3Cu;
            // 0x301f40: 0x41043  sra         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f3c) {
            ctx->pc = 0x301F4Cu;
            goto label_301f4c;
        }
    }
    ctx->pc = 0x301F44u;
label_301f44:
    // 0x301f44: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x301f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_301f48:
    // 0x301f48: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x301f48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_301f4c:
    // 0x301f4c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x301f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_301f50:
    // 0x301f50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x301f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_301f54:
    // 0x301f54: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x301f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
label_301f58:
    // 0x301f58: 0x8f849f78  lw          $a0, -0x6088($gp)
    ctx->pc = 0x301f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942584)));
label_301f5c:
    // 0x301f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301f60:
    // 0x301f60: 0xc063818  jal         func_18E060
label_301f64:
    if (ctx->pc == 0x301F64u) {
        ctx->pc = 0x301F64u;
            // 0x301f64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301F68u;
        goto label_301f68;
    }
    ctx->pc = 0x301F60u;
    SET_GPR_U32(ctx, 31, 0x301F68u);
    ctx->pc = 0x301F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301F60u;
            // 0x301f64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301F68u; }
        if (ctx->pc != 0x301F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301F68u; }
        if (ctx->pc != 0x301F68u) { return; }
    }
    ctx->pc = 0x301F68u;
label_301f68:
    // 0x301f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301f6c:
    // 0x301f6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x301f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_301f70:
    // 0x301f70: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x301f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_301f74:
    // 0x301f74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x301f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_301f78:
    // 0x301f78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x301f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_301f7c:
    // 0x301f7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x301f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_301f80:
    // 0x301f80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x301f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_301f84:
    // 0x301f84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x301f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_301f88:
    // 0x301f88: 0x3e00008  jr          $ra
label_301f8c:
    if (ctx->pc == 0x301F8Cu) {
        ctx->pc = 0x301F8Cu;
            // 0x301f8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x301F90u;
        goto label_fallthrough_0x301f88;
    }
    ctx->pc = 0x301F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301F88u;
            // 0x301f8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x301f88:
    ctx->pc = 0x301F90u;
}
