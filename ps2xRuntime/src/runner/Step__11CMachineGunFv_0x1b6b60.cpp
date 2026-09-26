#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CMachineGunFv
// Address: 0x1b6b60 - 0x1b6e50
void Step__11CMachineGunFv_0x1b6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CMachineGunFv_0x1b6b60");
#endif

    switch (ctx->pc) {
        case 0x1b6b60u: goto label_1b6b60;
        case 0x1b6b64u: goto label_1b6b64;
        case 0x1b6b68u: goto label_1b6b68;
        case 0x1b6b6cu: goto label_1b6b6c;
        case 0x1b6b70u: goto label_1b6b70;
        case 0x1b6b74u: goto label_1b6b74;
        case 0x1b6b78u: goto label_1b6b78;
        case 0x1b6b7cu: goto label_1b6b7c;
        case 0x1b6b80u: goto label_1b6b80;
        case 0x1b6b84u: goto label_1b6b84;
        case 0x1b6b88u: goto label_1b6b88;
        case 0x1b6b8cu: goto label_1b6b8c;
        case 0x1b6b90u: goto label_1b6b90;
        case 0x1b6b94u: goto label_1b6b94;
        case 0x1b6b98u: goto label_1b6b98;
        case 0x1b6b9cu: goto label_1b6b9c;
        case 0x1b6ba0u: goto label_1b6ba0;
        case 0x1b6ba4u: goto label_1b6ba4;
        case 0x1b6ba8u: goto label_1b6ba8;
        case 0x1b6bacu: goto label_1b6bac;
        case 0x1b6bb0u: goto label_1b6bb0;
        case 0x1b6bb4u: goto label_1b6bb4;
        case 0x1b6bb8u: goto label_1b6bb8;
        case 0x1b6bbcu: goto label_1b6bbc;
        case 0x1b6bc0u: goto label_1b6bc0;
        case 0x1b6bc4u: goto label_1b6bc4;
        case 0x1b6bc8u: goto label_1b6bc8;
        case 0x1b6bccu: goto label_1b6bcc;
        case 0x1b6bd0u: goto label_1b6bd0;
        case 0x1b6bd4u: goto label_1b6bd4;
        case 0x1b6bd8u: goto label_1b6bd8;
        case 0x1b6bdcu: goto label_1b6bdc;
        case 0x1b6be0u: goto label_1b6be0;
        case 0x1b6be4u: goto label_1b6be4;
        case 0x1b6be8u: goto label_1b6be8;
        case 0x1b6becu: goto label_1b6bec;
        case 0x1b6bf0u: goto label_1b6bf0;
        case 0x1b6bf4u: goto label_1b6bf4;
        case 0x1b6bf8u: goto label_1b6bf8;
        case 0x1b6bfcu: goto label_1b6bfc;
        case 0x1b6c00u: goto label_1b6c00;
        case 0x1b6c04u: goto label_1b6c04;
        case 0x1b6c08u: goto label_1b6c08;
        case 0x1b6c0cu: goto label_1b6c0c;
        case 0x1b6c10u: goto label_1b6c10;
        case 0x1b6c14u: goto label_1b6c14;
        case 0x1b6c18u: goto label_1b6c18;
        case 0x1b6c1cu: goto label_1b6c1c;
        case 0x1b6c20u: goto label_1b6c20;
        case 0x1b6c24u: goto label_1b6c24;
        case 0x1b6c28u: goto label_1b6c28;
        case 0x1b6c2cu: goto label_1b6c2c;
        case 0x1b6c30u: goto label_1b6c30;
        case 0x1b6c34u: goto label_1b6c34;
        case 0x1b6c38u: goto label_1b6c38;
        case 0x1b6c3cu: goto label_1b6c3c;
        case 0x1b6c40u: goto label_1b6c40;
        case 0x1b6c44u: goto label_1b6c44;
        case 0x1b6c48u: goto label_1b6c48;
        case 0x1b6c4cu: goto label_1b6c4c;
        case 0x1b6c50u: goto label_1b6c50;
        case 0x1b6c54u: goto label_1b6c54;
        case 0x1b6c58u: goto label_1b6c58;
        case 0x1b6c5cu: goto label_1b6c5c;
        case 0x1b6c60u: goto label_1b6c60;
        case 0x1b6c64u: goto label_1b6c64;
        case 0x1b6c68u: goto label_1b6c68;
        case 0x1b6c6cu: goto label_1b6c6c;
        case 0x1b6c70u: goto label_1b6c70;
        case 0x1b6c74u: goto label_1b6c74;
        case 0x1b6c78u: goto label_1b6c78;
        case 0x1b6c7cu: goto label_1b6c7c;
        case 0x1b6c80u: goto label_1b6c80;
        case 0x1b6c84u: goto label_1b6c84;
        case 0x1b6c88u: goto label_1b6c88;
        case 0x1b6c8cu: goto label_1b6c8c;
        case 0x1b6c90u: goto label_1b6c90;
        case 0x1b6c94u: goto label_1b6c94;
        case 0x1b6c98u: goto label_1b6c98;
        case 0x1b6c9cu: goto label_1b6c9c;
        case 0x1b6ca0u: goto label_1b6ca0;
        case 0x1b6ca4u: goto label_1b6ca4;
        case 0x1b6ca8u: goto label_1b6ca8;
        case 0x1b6cacu: goto label_1b6cac;
        case 0x1b6cb0u: goto label_1b6cb0;
        case 0x1b6cb4u: goto label_1b6cb4;
        case 0x1b6cb8u: goto label_1b6cb8;
        case 0x1b6cbcu: goto label_1b6cbc;
        case 0x1b6cc0u: goto label_1b6cc0;
        case 0x1b6cc4u: goto label_1b6cc4;
        case 0x1b6cc8u: goto label_1b6cc8;
        case 0x1b6cccu: goto label_1b6ccc;
        case 0x1b6cd0u: goto label_1b6cd0;
        case 0x1b6cd4u: goto label_1b6cd4;
        case 0x1b6cd8u: goto label_1b6cd8;
        case 0x1b6cdcu: goto label_1b6cdc;
        case 0x1b6ce0u: goto label_1b6ce0;
        case 0x1b6ce4u: goto label_1b6ce4;
        case 0x1b6ce8u: goto label_1b6ce8;
        case 0x1b6cecu: goto label_1b6cec;
        case 0x1b6cf0u: goto label_1b6cf0;
        case 0x1b6cf4u: goto label_1b6cf4;
        case 0x1b6cf8u: goto label_1b6cf8;
        case 0x1b6cfcu: goto label_1b6cfc;
        case 0x1b6d00u: goto label_1b6d00;
        case 0x1b6d04u: goto label_1b6d04;
        case 0x1b6d08u: goto label_1b6d08;
        case 0x1b6d0cu: goto label_1b6d0c;
        case 0x1b6d10u: goto label_1b6d10;
        case 0x1b6d14u: goto label_1b6d14;
        case 0x1b6d18u: goto label_1b6d18;
        case 0x1b6d1cu: goto label_1b6d1c;
        case 0x1b6d20u: goto label_1b6d20;
        case 0x1b6d24u: goto label_1b6d24;
        case 0x1b6d28u: goto label_1b6d28;
        case 0x1b6d2cu: goto label_1b6d2c;
        case 0x1b6d30u: goto label_1b6d30;
        case 0x1b6d34u: goto label_1b6d34;
        case 0x1b6d38u: goto label_1b6d38;
        case 0x1b6d3cu: goto label_1b6d3c;
        case 0x1b6d40u: goto label_1b6d40;
        case 0x1b6d44u: goto label_1b6d44;
        case 0x1b6d48u: goto label_1b6d48;
        case 0x1b6d4cu: goto label_1b6d4c;
        case 0x1b6d50u: goto label_1b6d50;
        case 0x1b6d54u: goto label_1b6d54;
        case 0x1b6d58u: goto label_1b6d58;
        case 0x1b6d5cu: goto label_1b6d5c;
        case 0x1b6d60u: goto label_1b6d60;
        case 0x1b6d64u: goto label_1b6d64;
        case 0x1b6d68u: goto label_1b6d68;
        case 0x1b6d6cu: goto label_1b6d6c;
        case 0x1b6d70u: goto label_1b6d70;
        case 0x1b6d74u: goto label_1b6d74;
        case 0x1b6d78u: goto label_1b6d78;
        case 0x1b6d7cu: goto label_1b6d7c;
        case 0x1b6d80u: goto label_1b6d80;
        case 0x1b6d84u: goto label_1b6d84;
        case 0x1b6d88u: goto label_1b6d88;
        case 0x1b6d8cu: goto label_1b6d8c;
        case 0x1b6d90u: goto label_1b6d90;
        case 0x1b6d94u: goto label_1b6d94;
        case 0x1b6d98u: goto label_1b6d98;
        case 0x1b6d9cu: goto label_1b6d9c;
        case 0x1b6da0u: goto label_1b6da0;
        case 0x1b6da4u: goto label_1b6da4;
        case 0x1b6da8u: goto label_1b6da8;
        case 0x1b6dacu: goto label_1b6dac;
        case 0x1b6db0u: goto label_1b6db0;
        case 0x1b6db4u: goto label_1b6db4;
        case 0x1b6db8u: goto label_1b6db8;
        case 0x1b6dbcu: goto label_1b6dbc;
        case 0x1b6dc0u: goto label_1b6dc0;
        case 0x1b6dc4u: goto label_1b6dc4;
        case 0x1b6dc8u: goto label_1b6dc8;
        case 0x1b6dccu: goto label_1b6dcc;
        case 0x1b6dd0u: goto label_1b6dd0;
        case 0x1b6dd4u: goto label_1b6dd4;
        case 0x1b6dd8u: goto label_1b6dd8;
        case 0x1b6ddcu: goto label_1b6ddc;
        case 0x1b6de0u: goto label_1b6de0;
        case 0x1b6de4u: goto label_1b6de4;
        case 0x1b6de8u: goto label_1b6de8;
        case 0x1b6decu: goto label_1b6dec;
        case 0x1b6df0u: goto label_1b6df0;
        case 0x1b6df4u: goto label_1b6df4;
        case 0x1b6df8u: goto label_1b6df8;
        case 0x1b6dfcu: goto label_1b6dfc;
        case 0x1b6e00u: goto label_1b6e00;
        case 0x1b6e04u: goto label_1b6e04;
        case 0x1b6e08u: goto label_1b6e08;
        case 0x1b6e0cu: goto label_1b6e0c;
        case 0x1b6e10u: goto label_1b6e10;
        case 0x1b6e14u: goto label_1b6e14;
        case 0x1b6e18u: goto label_1b6e18;
        case 0x1b6e1cu: goto label_1b6e1c;
        case 0x1b6e20u: goto label_1b6e20;
        case 0x1b6e24u: goto label_1b6e24;
        case 0x1b6e28u: goto label_1b6e28;
        case 0x1b6e2cu: goto label_1b6e2c;
        case 0x1b6e30u: goto label_1b6e30;
        case 0x1b6e34u: goto label_1b6e34;
        case 0x1b6e38u: goto label_1b6e38;
        case 0x1b6e3cu: goto label_1b6e3c;
        case 0x1b6e40u: goto label_1b6e40;
        case 0x1b6e44u: goto label_1b6e44;
        case 0x1b6e48u: goto label_1b6e48;
        case 0x1b6e4cu: goto label_1b6e4c;
        default: break;
    }

    ctx->pc = 0x1b6b60u;

label_1b6b60:
    // 0x1b6b60: 0x27bdd710  addiu       $sp, $sp, -0x28F0
    ctx->pc = 0x1b6b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956816));
label_1b6b64:
    // 0x1b6b64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b6b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b6b68:
    // 0x1b6b68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b6b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1b6b6c:
    // 0x1b6b6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b6b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b6b70:
    // 0x1b6b70: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1b6b70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b74:
    // 0x1b6b74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b6b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b6b78:
    // 0x1b6b78: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1b6b78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b7c:
    // 0x1b6b7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b6b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b6b80:
    // 0x1b6b80: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b6b80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b84:
    // 0x1b6b84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b6b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b6b88:
    // 0x1b6b88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b6b88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b8c:
    // 0x1b6b8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b6b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b6b90:
    // 0x1b6b90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b6b90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b94:
    // 0x1b6b94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b6b98:
    // 0x1b6b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b6b9c:
    // 0x1b6b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b6ba0:
    // 0x1b6ba0: 0x2972821  addu        $a1, $s4, $s7
    ctx->pc = 0x1b6ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
label_1b6ba4:
    // 0x1b6ba4: 0x84a40300  lh          $a0, 0x300($a1)
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 768)));
label_1b6ba8:
    // 0x1b6ba8: 0x10800097  beqz        $a0, . + 4 + (0x97 << 2)
label_1b6bac:
    if (ctx->pc == 0x1B6BACu) {
        ctx->pc = 0x1B6BACu;
            // 0x1b6bac: 0x24b30300  addiu       $s3, $a1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
        ctx->pc = 0x1B6BB0u;
        goto label_1b6bb0;
    }
    ctx->pc = 0x1B6BA8u;
    {
        const bool branch_taken_0x1b6ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BA8u;
            // 0x1b6bac: 0x24b30300  addiu       $s3, $a1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ba8) {
            ctx->pc = 0x1B6E08u;
            goto label_1b6e08;
        }
    }
    ctx->pc = 0x1B6BB0u;
label_1b6bb0:
    // 0x1b6bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6bb4:
    // 0x1b6bb4: 0x14830094  bne         $a0, $v1, . + 4 + (0x94 << 2)
label_1b6bb8:
    if (ctx->pc == 0x1B6BB8u) {
        ctx->pc = 0x1B6BBCu;
        goto label_1b6bbc;
    }
    ctx->pc = 0x1B6BB4u;
    {
        const bool branch_taken_0x1b6bb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b6bb4) {
            ctx->pc = 0x1B6E08u;
            goto label_1b6e08;
        }
    }
    ctx->pc = 0x1B6BBCu;
label_1b6bbc:
    // 0x1b6bbc: 0x84a50320  lh          $a1, 0x320($a1)
    ctx->pc = 0x1b6bbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 800)));
label_1b6bc0:
    // 0x1b6bc0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b6bc4:
    // 0x1b6bc4: 0xc06e9d4  jal         func_1BA750
label_1b6bc8:
    if (ctx->pc == 0x1B6BC8u) {
        ctx->pc = 0x1B6BC8u;
            // 0x1b6bc8: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1B6BCCu;
        goto label_1b6bcc;
    }
    ctx->pc = 0x1B6BC4u;
    SET_GPR_U32(ctx, 31, 0x1B6BCCu);
    ctx->pc = 0x1B6BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BC4u;
            // 0x1b6bc8: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA750u;
    if (runtime->hasFunction(0x1BA750u)) {
        auto targetFn = runtime->lookupFunction(0x1BA750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BCCu; }
        if (ctx->pc != 0x1B6BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetID2Prim__11CColPrimManFi_0x1ba750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BCCu; }
        if (ctx->pc != 0x1B6BCCu) { return; }
    }
    ctx->pc = 0x1B6BCCu;
label_1b6bcc:
    // 0x1b6bcc: 0x2968821  addu        $s1, $s4, $s6
    ctx->pc = 0x1b6bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_1b6bd0:
    // 0x1b6bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6bd4:
    // 0x1b6bd4: 0x26320200  addiu       $s2, $s1, 0x200
    ctx->pc = 0x1b6bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_1b6bd8:
    // 0x1b6bd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b6bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b6bdc:
    // 0x1b6bdc: 0xc041c5c  jal         func_107170
label_1b6be0:
    if (ctx->pc == 0x1B6BE0u) {
        ctx->pc = 0x1B6BE0u;
            // 0x1b6be0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BE4u;
        goto label_1b6be4;
    }
    ctx->pc = 0x1B6BDCu;
    SET_GPR_U32(ctx, 31, 0x1B6BE4u);
    ctx->pc = 0x1B6BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BDCu;
            // 0x1b6be0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BE4u; }
        if (ctx->pc != 0x1B6BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BE4u; }
        if (ctx->pc != 0x1B6BE4u) { return; }
    }
    ctx->pc = 0x1B6BE4u;
label_1b6be4:
    // 0x1b6be4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6be8:
    // 0x1b6be8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6bec:
    // 0x1b6bec: 0xc041c38  jal         func_1070E0
label_1b6bf0:
    if (ctx->pc == 0x1B6BF0u) {
        ctx->pc = 0x1B6BF0u;
            // 0x1b6bf0: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->pc = 0x1B6BF4u;
        goto label_1b6bf4;
    }
    ctx->pc = 0x1B6BECu;
    SET_GPR_U32(ctx, 31, 0x1B6BF4u);
    ctx->pc = 0x1B6BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BECu;
            // 0x1b6bf0: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BF4u; }
        if (ctx->pc != 0x1B6BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BF4u; }
        if (ctx->pc != 0x1B6BF4u) { return; }
    }
    ctx->pc = 0x1B6BF4u;
label_1b6bf4:
    // 0x1b6bf4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1b6bf8:
    if (ctx->pc == 0x1B6BF8u) {
        ctx->pc = 0x1B6BF8u;
            // 0x1b6bf8: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->pc = 0x1B6BFCu;
        goto label_1b6bfc;
    }
    ctx->pc = 0x1B6BF4u;
    {
        const bool branch_taken_0x1b6bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BF4u;
            // 0x1b6bf8: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bf4) {
            ctx->pc = 0x1B6C10u;
            goto label_1b6c10;
        }
    }
    ctx->pc = 0x1B6BFCu;
label_1b6bfc:
    // 0x1b6bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c00:
    // 0x1b6c00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b6c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6c04:
    // 0x1b6c04: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b6c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b6c08:
    // 0x1b6c08: 0xc06e788  jal         func_1B9E20
label_1b6c0c:
    if (ctx->pc == 0x1B6C0Cu) {
        ctx->pc = 0x1B6C0Cu;
            // 0x1b6c0c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C10u;
        goto label_1b6c10;
    }
    ctx->pc = 0x1B6C08u;
    SET_GPR_U32(ctx, 31, 0x1B6C10u);
    ctx->pc = 0x1B6C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C08u;
            // 0x1b6c0c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9E20u;
    if (runtime->hasFunction(0x1B9E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B9E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C10u; }
        if (ctx->pc != 0x1B6C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPfPff_0x1b9e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C10u; }
        if (ctx->pc != 0x1B6C10u) { return; }
    }
    ctx->pc = 0x1B6C10u;
label_1b6c10:
    // 0x1b6c10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b6c14:
    // 0x1b6c14: 0xafa328bc  sw          $v1, 0x28BC($sp)
    ctx->pc = 0x1b6c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10428), GPR_U32(ctx, 3));
label_1b6c18:
    // 0x1b6c18: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1b6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1b6c1c:
    // 0x1b6c1c: 0xafa328cc  sw          $v1, 0x28CC($sp)
    ctx->pc = 0x1b6c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10444), GPR_U32(ctx, 3));
label_1b6c20:
    // 0x1b6c20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b6c24:
    // 0x1b6c24: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x1b6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6c28:
    // 0x1b6c28: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1b6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1b6c2c:
    // 0x1b6c2c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1b6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1b6c30:
    // 0x1b6c30: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1b6c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b6c34:
    // 0x1b6c34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b6c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b6c38:
    // 0x1b6c38: 0x27a628b0  addiu       $a2, $sp, 0x28B0
    ctx->pc = 0x1b6c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
label_1b6c3c:
    // 0x1b6c3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6c40:
    // 0x1b6c40: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b6c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b6c44:
    // 0x1b6c44: 0xe7a028b0  swc1        $f0, 0x28B0($sp)
    ctx->pc = 0x1b6c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10416), bits); }
label_1b6c48:
    // 0x1b6c48: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x1b6c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6c4c:
    // 0x1b6c4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b6c50:
    // 0x1b6c50: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b6c50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b6c54:
    // 0x1b6c54: 0xe7a028c0  swc1        $f0, 0x28C0($sp)
    ctx->pc = 0x1b6c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10432), bits); }
label_1b6c58:
    // 0x1b6c58: 0xc6200204  lwc1        $f0, 0x204($s1)
    ctx->pc = 0x1b6c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6c5c:
    // 0x1b6c5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6c60:
    // 0x1b6c60: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b6c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b6c64:
    // 0x1b6c64: 0xe7a028b4  swc1        $f0, 0x28B4($sp)
    ctx->pc = 0x1b6c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10420), bits); }
label_1b6c68:
    // 0x1b6c68: 0xc6200204  lwc1        $f0, 0x204($s1)
    ctx->pc = 0x1b6c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6c6c:
    // 0x1b6c6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b6c70:
    // 0x1b6c70: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b6c70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b6c74:
    // 0x1b6c74: 0xe7a028c4  swc1        $f0, 0x28C4($sp)
    ctx->pc = 0x1b6c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10436), bits); }
label_1b6c78:
    // 0x1b6c78: 0xc6200208  lwc1        $f0, 0x208($s1)
    ctx->pc = 0x1b6c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6c7c:
    // 0x1b6c7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6c80:
    // 0x1b6c80: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b6c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b6c84:
    // 0x1b6c84: 0xe7a028b8  swc1        $f0, 0x28B8($sp)
    ctx->pc = 0x1b6c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10424), bits); }
label_1b6c88:
    // 0x1b6c88: 0xc6200208  lwc1        $f0, 0x208($s1)
    ctx->pc = 0x1b6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6c8c:
    // 0x1b6c8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6c8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b6c90:
    // 0x1b6c90: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b6c90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b6c94:
    // 0x1b6c94: 0xe7a028c8  swc1        $f0, 0x28C8($sp)
    ctx->pc = 0x1b6c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10440), bits); }
label_1b6c98:
    // 0x1b6c98: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1b6c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1b6c9c:
    // 0x1b6c9c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1b6c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1b6ca0:
    // 0x1b6ca0: 0x320f809  jalr        $t9
label_1b6ca4:
    if (ctx->pc == 0x1B6CA4u) {
        ctx->pc = 0x1B6CA4u;
            // 0x1b6ca4: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1B6CA8u;
        goto label_1b6ca8;
    }
    ctx->pc = 0x1B6CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B6CA8u);
        ctx->pc = 0x1B6CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6CA0u;
            // 0x1b6ca4: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B6CA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CA8u; }
            if (ctx->pc != 0x1B6CA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B6CA8u;
label_1b6ca8:
    // 0x1b6ca8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b6ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6cac:
    // 0x1b6cac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b6cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b6cb0:
    // 0x1b6cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6cb4:
    // 0x1b6cb4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1b6cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b6cb8:
    // 0x1b6cb8: 0x27a828d0  addiu       $t0, $sp, 0x28D0
    ctx->pc = 0x1b6cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
label_1b6cbc:
    // 0x1b6cbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1b6cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6cc0:
    // 0x1b6cc0: 0xc053794  jal         func_14DE50
label_1b6cc4:
    if (ctx->pc == 0x1B6CC4u) {
        ctx->pc = 0x1B6CC4u;
            // 0x1b6cc4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B6CC8u;
        goto label_1b6cc8;
    }
    ctx->pc = 0x1B6CC0u;
    SET_GPR_U32(ctx, 31, 0x1B6CC8u);
    ctx->pc = 0x1B6CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6CC0u;
            // 0x1b6cc4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CC8u; }
        if (ctx->pc != 0x1B6CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CC8u; }
        if (ctx->pc != 0x1B6CC8u) { return; }
    }
    ctx->pc = 0x1B6CC8u;
label_1b6cc8:
    // 0x1b6cc8: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
label_1b6ccc:
    if (ctx->pc == 0x1B6CCCu) {
        ctx->pc = 0x1B6CD0u;
        goto label_1b6cd0;
    }
    ctx->pc = 0x1B6CC8u;
    {
        const bool branch_taken_0x1b6cc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b6cc8) {
            ctx->pc = 0x1B6DACu;
            goto label_1b6dac;
        }
    }
    ctx->pc = 0x1B6CD0u;
label_1b6cd0:
    // 0x1b6cd0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1b6cd4:
    if (ctx->pc == 0x1B6CD4u) {
        ctx->pc = 0x1B6CD4u;
            // 0x1b6cd4: 0xa6600000  sh          $zero, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1B6CD8u;
        goto label_1b6cd8;
    }
    ctx->pc = 0x1B6CD0u;
    {
        const bool branch_taken_0x1b6cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6CD0u;
            // 0x1b6cd4: 0xa6600000  sh          $zero, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cd0) {
            ctx->pc = 0x1B6CE4u;
            goto label_1b6ce4;
        }
    }
    ctx->pc = 0x1B6CD8u;
label_1b6cd8:
    // 0x1b6cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6cdc:
    // 0x1b6cdc: 0xc06e9a0  jal         func_1BA680
label_1b6ce0:
    if (ctx->pc == 0x1B6CE0u) {
        ctx->pc = 0x1B6CE0u;
            // 0x1b6ce0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B6CE4u;
        goto label_1b6ce4;
    }
    ctx->pc = 0x1B6CDCu;
    SET_GPR_U32(ctx, 31, 0x1B6CE4u);
    ctx->pc = 0x1B6CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6CDCu;
            // 0x1b6ce0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CE4u; }
        if (ctx->pc != 0x1B6CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6CE4u; }
        if (ctx->pc != 0x1B6CE4u) { return; }
    }
    ctx->pc = 0x1B6CE4u;
label_1b6ce4:
    // 0x1b6ce4: 0x0  nop
    ctx->pc = 0x1b6ce4u;
    // NOP
label_1b6ce8:
    // 0x1b6ce8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1b6ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1b6cec:
    // 0x1b6cec: 0x24636a70  addiu       $v1, $v1, 0x6A70
    ctx->pc = 0x1b6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27248));
label_1b6cf0:
    // 0x1b6cf0: 0x27a428e0  addiu       $a0, $sp, 0x28E0
    ctx->pc = 0x1b6cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10464));
label_1b6cf4:
    // 0x1b6cf4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b6cf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1b6cf8:
    // 0x1b6cf8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b6cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6cfc:
    // 0x1b6cfc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1b6cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1b6d00:
    // 0x1b6d00: 0x8c270324  lw          $a3, 0x324($at)
    ctx->pc = 0x1b6d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 804)));
label_1b6d04:
    // 0x1b6d04: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_1b6d08:
    if (ctx->pc == 0x1B6D08u) {
        ctx->pc = 0x1B6D08u;
            // 0x1b6d08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D0Cu;
        goto label_1b6d0c;
    }
    ctx->pc = 0x1B6D04u;
    {
        const bool branch_taken_0x1b6d04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D04u;
            // 0x1b6d08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d04) {
            ctx->pc = 0x1B6D14u;
            goto label_1b6d14;
        }
    }
    ctx->pc = 0x1B6D0Cu;
label_1b6d0c:
    // 0x1b6d0c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b6d10:
    if (ctx->pc == 0x1B6D10u) {
        ctx->pc = 0x1B6D14u;
        goto label_1b6d14;
    }
    ctx->pc = 0x1B6D0Cu;
    {
        const bool branch_taken_0x1b6d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d0c) {
            ctx->pc = 0x1B6D60u;
            goto label_1b6d60;
        }
    }
    ctx->pc = 0x1B6D14u;
label_1b6d14:
    // 0x1b6d14: 0x0  nop
    ctx->pc = 0x1b6d14u;
    // NOP
label_1b6d18:
    // 0x1b6d18: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b6d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6d1c:
    // 0x1b6d1c: 0x8c26032c  lw          $a2, 0x32C($at)
    ctx->pc = 0x1b6d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
label_1b6d20:
    // 0x1b6d20: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b6d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6d24:
    // 0x1b6d24: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1b6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1b6d28:
    // 0x1b6d28: 0x8c230328  lw          $v1, 0x328($at)
    ctx->pc = 0x1b6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 808)));
label_1b6d2c:
    // 0x1b6d2c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1b6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b6d30:
    // 0x1b6d30: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1b6d30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1b6d34:
    // 0x1b6d34: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1b6d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b6d38:
    // 0x1b6d38: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b6d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6d3c:
    // 0x1b6d3c: 0xac24032c  sw          $a0, 0x32C($at)
    ctx->pc = 0x1b6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 4));
label_1b6d40:
    // 0x1b6d40: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b6d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6d44:
    // 0x1b6d44: 0x8c24032c  lw          $a0, 0x32C($at)
    ctx->pc = 0x1b6d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
label_1b6d48:
    // 0x1b6d48: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b6d48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b6d4c:
    // 0x1b6d4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b6d50:
    if (ctx->pc == 0x1B6D50u) {
        ctx->pc = 0x1B6D50u;
            // 0x1b6d50: 0xe58021  addu        $s0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->pc = 0x1B6D54u;
        goto label_1b6d54;
    }
    ctx->pc = 0x1B6D4Cu;
    {
        const bool branch_taken_0x1b6d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D4Cu;
            // 0x1b6d50: 0xe58021  addu        $s0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d4c) {
            ctx->pc = 0x1B6D5Cu;
            goto label_1b6d5c;
        }
    }
    ctx->pc = 0x1B6D54u;
label_1b6d54:
    // 0x1b6d54: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b6d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b6d58:
    // 0x1b6d58: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x1b6d58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
label_1b6d5c:
    // 0x1b6d5c: 0x0  nop
    ctx->pc = 0x1b6d5cu;
    // NOP
label_1b6d60:
    // 0x1b6d60: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_1b6d64:
    if (ctx->pc == 0x1B6D64u) {
        ctx->pc = 0x1B6D68u;
        goto label_1b6d68;
    }
    ctx->pc = 0x1B6D60u;
    {
        const bool branch_taken_0x1b6d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d60) {
            ctx->pc = 0x1B6E08u;
            goto label_1b6e08;
        }
    }
    ctx->pc = 0x1B6D68u;
label_1b6d68:
    // 0x1b6d68: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b6d6c:
    // 0x1b6d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d70:
    // 0x1b6d70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b6d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6d74:
    // 0x1b6d74: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b6d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b6d78:
    // 0x1b6d78: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b6d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b6d7c:
    // 0x1b6d7c: 0x27a628e0  addiu       $a2, $sp, 0x28E0
    ctx->pc = 0x1b6d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10464));
label_1b6d80:
    // 0x1b6d80: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1b6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1b6d84:
    // 0x1b6d84: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1b6d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b6d88:
    // 0x1b6d88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b6d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b6d8c:
    // 0x1b6d8c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b6d90:
    // 0x1b6d90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b6d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b6d94:
    // 0x1b6d94: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b6d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1b6d98:
    // 0x1b6d98: 0xc07098c  jal         func_1C2630
label_1b6d9c:
    if (ctx->pc == 0x1B6D9Cu) {
        ctx->pc = 0x1B6D9Cu;
            // 0x1b6d9c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1B6DA0u;
        goto label_1b6da0;
    }
    ctx->pc = 0x1B6D98u;
    SET_GPR_U32(ctx, 31, 0x1B6DA0u);
    ctx->pc = 0x1B6D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D98u;
            // 0x1b6d9c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DA0u; }
        if (ctx->pc != 0x1B6DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DA0u; }
        if (ctx->pc != 0x1B6DA0u) { return; }
    }
    ctx->pc = 0x1B6DA0u;
label_1b6da0:
    // 0x1b6da0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6da4:
    // 0x1b6da4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b6da8:
    if (ctx->pc == 0x1B6DA8u) {
        ctx->pc = 0x1B6DA8u;
            // 0x1b6da8: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x1B6DACu;
        goto label_1b6dac;
    }
    ctx->pc = 0x1B6DA4u;
    {
        const bool branch_taken_0x1b6da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DA4u;
            // 0x1b6da8: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6da4) {
            ctx->pc = 0x1B6E08u;
            goto label_1b6e08;
        }
    }
    ctx->pc = 0x1B6DACu;
label_1b6dac:
    // 0x1b6dac: 0x0  nop
    ctx->pc = 0x1b6dacu;
    // NOP
label_1b6db0:
    // 0x1b6db0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1b6db4:
    if (ctx->pc == 0x1B6DB4u) {
        ctx->pc = 0x1B6DB8u;
        goto label_1b6db8;
    }
    ctx->pc = 0x1B6DB0u;
    {
        const bool branch_taken_0x1b6db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6db0) {
            ctx->pc = 0x1B6DD8u;
            goto label_1b6dd8;
        }
    }
    ctx->pc = 0x1B6DB8u;
label_1b6db8:
    // 0x1b6db8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1b6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1b6dbc:
    // 0x1b6dbc: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_1b6dc0:
    if (ctx->pc == 0x1B6DC0u) {
        ctx->pc = 0x1B6DC0u;
            // 0x1b6dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DC4u;
        goto label_1b6dc4;
    }
    ctx->pc = 0x1B6DBCu;
    {
        const bool branch_taken_0x1b6dbc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B6DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DBCu;
            // 0x1b6dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dbc) {
            ctx->pc = 0x1B6DD8u;
            goto label_1b6dd8;
        }
    }
    ctx->pc = 0x1B6DC4u;
label_1b6dc4:
    // 0x1b6dc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6dc8:
    // 0x1b6dc8: 0xc06e9a0  jal         func_1BA680
label_1b6dcc:
    if (ctx->pc == 0x1B6DCCu) {
        ctx->pc = 0x1B6DCCu;
            // 0x1b6dcc: 0xa6600000  sh          $zero, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DD0u;
        goto label_1b6dd0;
    }
    ctx->pc = 0x1B6DC8u;
    SET_GPR_U32(ctx, 31, 0x1B6DD0u);
    ctx->pc = 0x1B6DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DC8u;
            // 0x1b6dcc: 0xa6600000  sh          $zero, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DD0u; }
        if (ctx->pc != 0x1B6DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6DD0u; }
        if (ctx->pc != 0x1B6DD0u) { return; }
    }
    ctx->pc = 0x1B6DD0u;
label_1b6dd0:
    // 0x1b6dd0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1b6dd4:
    if (ctx->pc == 0x1B6DD4u) {
        ctx->pc = 0x1B6DD8u;
        goto label_1b6dd8;
    }
    ctx->pc = 0x1B6DD0u;
    {
        const bool branch_taken_0x1b6dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6dd0) {
            ctx->pc = 0x1B6E08u;
            goto label_1b6e08;
        }
    }
    ctx->pc = 0x1B6DD8u;
label_1b6dd8:
    // 0x1b6dd8: 0x2952021  addu        $a0, $s4, $s5
    ctx->pc = 0x1b6dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1b6ddc:
    // 0x1b6ddc: 0x8c830340  lw          $v1, 0x340($a0)
    ctx->pc = 0x1b6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
label_1b6de0:
    // 0x1b6de0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b6de4:
    // 0x1b6de4: 0xac830340  sw          $v1, 0x340($a0)
    ctx->pc = 0x1b6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 3));
label_1b6de8:
    // 0x1b6de8: 0x8c830340  lw          $v1, 0x340($a0)
    ctx->pc = 0x1b6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
label_1b6dec:
    // 0x1b6dec: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_1b6df0:
    if (ctx->pc == 0x1B6DF0u) {
        ctx->pc = 0x1B6DF4u;
        goto label_1b6df4;
    }
    ctx->pc = 0x1B6DECu;
    {
        const bool branch_taken_0x1b6dec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b6dec) {
            ctx->pc = 0x1B6E08u;
            goto label_1b6e08;
        }
    }
    ctx->pc = 0x1B6DF4u;
label_1b6df4:
    // 0x1b6df4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1b6df8:
    if (ctx->pc == 0x1B6DF8u) {
        ctx->pc = 0x1B6DF8u;
            // 0x1b6df8: 0xa6600000  sh          $zero, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1B6DFCu;
        goto label_1b6dfc;
    }
    ctx->pc = 0x1B6DF4u;
    {
        const bool branch_taken_0x1b6df4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6DF4u;
            // 0x1b6df8: 0xa6600000  sh          $zero, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6df4) {
            ctx->pc = 0x1B6E08u;
            goto label_1b6e08;
        }
    }
    ctx->pc = 0x1B6DFCu;
label_1b6dfc:
    // 0x1b6dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e00:
    // 0x1b6e00: 0xc06e9a0  jal         func_1BA680
label_1b6e04:
    if (ctx->pc == 0x1B6E04u) {
        ctx->pc = 0x1B6E04u;
            // 0x1b6e04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B6E08u;
        goto label_1b6e08;
    }
    ctx->pc = 0x1B6E00u;
    SET_GPR_U32(ctx, 31, 0x1B6E08u);
    ctx->pc = 0x1B6E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E00u;
            // 0x1b6e04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E08u; }
        if (ctx->pc != 0x1B6E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E08u; }
        if (ctx->pc != 0x1B6E08u) { return; }
    }
    ctx->pc = 0x1B6E08u;
label_1b6e08:
    // 0x1b6e08: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b6e08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1b6e0c:
    // 0x1b6e0c: 0x2bc30010  slti        $v1, $fp, 0x10
    ctx->pc = 0x1b6e0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)16) ? 1 : 0);
label_1b6e10:
    // 0x1b6e10: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x1b6e10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
label_1b6e14:
    // 0x1b6e14: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b6e14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1b6e18:
    // 0x1b6e18: 0x1460ff61  bnez        $v1, . + 4 + (-0x9F << 2)
label_1b6e1c:
    if (ctx->pc == 0x1B6E1Cu) {
        ctx->pc = 0x1B6E1Cu;
            // 0x1b6e1c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x1B6E20u;
        goto label_1b6e20;
    }
    ctx->pc = 0x1B6E18u;
    {
        const bool branch_taken_0x1b6e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E18u;
            // 0x1b6e1c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e18) {
            ctx->pc = 0x1B6BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6ba0;
        }
    }
    ctx->pc = 0x1B6E20u;
label_1b6e20:
    // 0x1b6e20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b6e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b6e24:
    // 0x1b6e24: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b6e24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b6e28:
    // 0x1b6e28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b6e28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b6e2c:
    // 0x1b6e2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b6e2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b6e30:
    // 0x1b6e30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b6e30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b6e34:
    // 0x1b6e34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b6e34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b6e38:
    // 0x1b6e38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6e3c:
    // 0x1b6e3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6e3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6e40:
    // 0x1b6e40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6e44:
    // 0x1b6e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6e48:
    // 0x1b6e48: 0x3e00008  jr          $ra
label_1b6e4c:
    if (ctx->pc == 0x1B6E4Cu) {
        ctx->pc = 0x1B6E4Cu;
            // 0x1b6e4c: 0x27bd28f0  addiu       $sp, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->pc = 0x1B6E50u;
        goto label_fallthrough_0x1b6e48;
    }
    ctx->pc = 0x1B6E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E48u;
            // 0x1b6e4c: 0x27bd28f0  addiu       $sp, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b6e48:
    ctx->pc = 0x1B6E50u;
}
