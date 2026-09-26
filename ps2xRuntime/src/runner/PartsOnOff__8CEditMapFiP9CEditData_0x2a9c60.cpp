#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PartsOnOff__8CEditMapFiP9CEditData
// Address: 0x2a9c60 - 0x2a9e38
void PartsOnOff__8CEditMapFiP9CEditData_0x2a9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsOnOff__8CEditMapFiP9CEditData_0x2a9c60");
#endif

    switch (ctx->pc) {
        case 0x2a9c60u: goto label_2a9c60;
        case 0x2a9c64u: goto label_2a9c64;
        case 0x2a9c68u: goto label_2a9c68;
        case 0x2a9c6cu: goto label_2a9c6c;
        case 0x2a9c70u: goto label_2a9c70;
        case 0x2a9c74u: goto label_2a9c74;
        case 0x2a9c78u: goto label_2a9c78;
        case 0x2a9c7cu: goto label_2a9c7c;
        case 0x2a9c80u: goto label_2a9c80;
        case 0x2a9c84u: goto label_2a9c84;
        case 0x2a9c88u: goto label_2a9c88;
        case 0x2a9c8cu: goto label_2a9c8c;
        case 0x2a9c90u: goto label_2a9c90;
        case 0x2a9c94u: goto label_2a9c94;
        case 0x2a9c98u: goto label_2a9c98;
        case 0x2a9c9cu: goto label_2a9c9c;
        case 0x2a9ca0u: goto label_2a9ca0;
        case 0x2a9ca4u: goto label_2a9ca4;
        case 0x2a9ca8u: goto label_2a9ca8;
        case 0x2a9cacu: goto label_2a9cac;
        case 0x2a9cb0u: goto label_2a9cb0;
        case 0x2a9cb4u: goto label_2a9cb4;
        case 0x2a9cb8u: goto label_2a9cb8;
        case 0x2a9cbcu: goto label_2a9cbc;
        case 0x2a9cc0u: goto label_2a9cc0;
        case 0x2a9cc4u: goto label_2a9cc4;
        case 0x2a9cc8u: goto label_2a9cc8;
        case 0x2a9cccu: goto label_2a9ccc;
        case 0x2a9cd0u: goto label_2a9cd0;
        case 0x2a9cd4u: goto label_2a9cd4;
        case 0x2a9cd8u: goto label_2a9cd8;
        case 0x2a9cdcu: goto label_2a9cdc;
        case 0x2a9ce0u: goto label_2a9ce0;
        case 0x2a9ce4u: goto label_2a9ce4;
        case 0x2a9ce8u: goto label_2a9ce8;
        case 0x2a9cecu: goto label_2a9cec;
        case 0x2a9cf0u: goto label_2a9cf0;
        case 0x2a9cf4u: goto label_2a9cf4;
        case 0x2a9cf8u: goto label_2a9cf8;
        case 0x2a9cfcu: goto label_2a9cfc;
        case 0x2a9d00u: goto label_2a9d00;
        case 0x2a9d04u: goto label_2a9d04;
        case 0x2a9d08u: goto label_2a9d08;
        case 0x2a9d0cu: goto label_2a9d0c;
        case 0x2a9d10u: goto label_2a9d10;
        case 0x2a9d14u: goto label_2a9d14;
        case 0x2a9d18u: goto label_2a9d18;
        case 0x2a9d1cu: goto label_2a9d1c;
        case 0x2a9d20u: goto label_2a9d20;
        case 0x2a9d24u: goto label_2a9d24;
        case 0x2a9d28u: goto label_2a9d28;
        case 0x2a9d2cu: goto label_2a9d2c;
        case 0x2a9d30u: goto label_2a9d30;
        case 0x2a9d34u: goto label_2a9d34;
        case 0x2a9d38u: goto label_2a9d38;
        case 0x2a9d3cu: goto label_2a9d3c;
        case 0x2a9d40u: goto label_2a9d40;
        case 0x2a9d44u: goto label_2a9d44;
        case 0x2a9d48u: goto label_2a9d48;
        case 0x2a9d4cu: goto label_2a9d4c;
        case 0x2a9d50u: goto label_2a9d50;
        case 0x2a9d54u: goto label_2a9d54;
        case 0x2a9d58u: goto label_2a9d58;
        case 0x2a9d5cu: goto label_2a9d5c;
        case 0x2a9d60u: goto label_2a9d60;
        case 0x2a9d64u: goto label_2a9d64;
        case 0x2a9d68u: goto label_2a9d68;
        case 0x2a9d6cu: goto label_2a9d6c;
        case 0x2a9d70u: goto label_2a9d70;
        case 0x2a9d74u: goto label_2a9d74;
        case 0x2a9d78u: goto label_2a9d78;
        case 0x2a9d7cu: goto label_2a9d7c;
        case 0x2a9d80u: goto label_2a9d80;
        case 0x2a9d84u: goto label_2a9d84;
        case 0x2a9d88u: goto label_2a9d88;
        case 0x2a9d8cu: goto label_2a9d8c;
        case 0x2a9d90u: goto label_2a9d90;
        case 0x2a9d94u: goto label_2a9d94;
        case 0x2a9d98u: goto label_2a9d98;
        case 0x2a9d9cu: goto label_2a9d9c;
        case 0x2a9da0u: goto label_2a9da0;
        case 0x2a9da4u: goto label_2a9da4;
        case 0x2a9da8u: goto label_2a9da8;
        case 0x2a9dacu: goto label_2a9dac;
        case 0x2a9db0u: goto label_2a9db0;
        case 0x2a9db4u: goto label_2a9db4;
        case 0x2a9db8u: goto label_2a9db8;
        case 0x2a9dbcu: goto label_2a9dbc;
        case 0x2a9dc0u: goto label_2a9dc0;
        case 0x2a9dc4u: goto label_2a9dc4;
        case 0x2a9dc8u: goto label_2a9dc8;
        case 0x2a9dccu: goto label_2a9dcc;
        case 0x2a9dd0u: goto label_2a9dd0;
        case 0x2a9dd4u: goto label_2a9dd4;
        case 0x2a9dd8u: goto label_2a9dd8;
        case 0x2a9ddcu: goto label_2a9ddc;
        case 0x2a9de0u: goto label_2a9de0;
        case 0x2a9de4u: goto label_2a9de4;
        case 0x2a9de8u: goto label_2a9de8;
        case 0x2a9decu: goto label_2a9dec;
        case 0x2a9df0u: goto label_2a9df0;
        case 0x2a9df4u: goto label_2a9df4;
        case 0x2a9df8u: goto label_2a9df8;
        case 0x2a9dfcu: goto label_2a9dfc;
        case 0x2a9e00u: goto label_2a9e00;
        case 0x2a9e04u: goto label_2a9e04;
        case 0x2a9e08u: goto label_2a9e08;
        case 0x2a9e0cu: goto label_2a9e0c;
        case 0x2a9e10u: goto label_2a9e10;
        case 0x2a9e14u: goto label_2a9e14;
        case 0x2a9e18u: goto label_2a9e18;
        case 0x2a9e1cu: goto label_2a9e1c;
        case 0x2a9e20u: goto label_2a9e20;
        case 0x2a9e24u: goto label_2a9e24;
        case 0x2a9e28u: goto label_2a9e28;
        case 0x2a9e2cu: goto label_2a9e2c;
        case 0x2a9e30u: goto label_2a9e30;
        case 0x2a9e34u: goto label_2a9e34;
        default: break;
    }

    ctx->pc = 0x2a9c60u;

label_2a9c60:
    // 0x2a9c60: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2a9c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2a9c64:
    // 0x2a9c64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a9c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2a9c68:
    // 0x2a9c68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a9c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2a9c6c:
    // 0x2a9c6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a9c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2a9c70:
    // 0x2a9c70: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2a9c70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c74:
    // 0x2a9c74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a9c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a9c78:
    // 0x2a9c78: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2a9c78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c7c:
    // 0x2a9c7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a9c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a9c80:
    // 0x2a9c80: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a9c80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c84:
    // 0x2a9c84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a9c88:
    // 0x2a9c88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a9c8c:
    // 0x2a9c8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a9c90:
    // 0x2a9c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a9c94:
    // 0x2a9c94: 0x12e0005c  beqz        $s7, . + 4 + (0x5C << 2)
label_2a9c98:
    if (ctx->pc == 0x2A9C98u) {
        ctx->pc = 0x2A9C98u;
            // 0x2a9c98: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2A9C9Cu;
        goto label_2a9c9c;
    }
    ctx->pc = 0x2A9C94u;
    {
        const bool branch_taken_0x2a9c94 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9C94u;
            // 0x2a9c98: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c94) {
            ctx->pc = 0x2A9E08u;
            goto label_2a9e08;
        }
    }
    ctx->pc = 0x2A9C9Cu;
label_2a9c9c:
    // 0x2a9c9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a9c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ca0:
    // 0x2a9ca0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a9ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ca4:
    // 0x2a9ca4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2a9ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ca8:
    // 0x2a9ca8: 0xc0aa828  jal         func_2AA0A0
label_2a9cac:
    if (ctx->pc == 0x2A9CACu) {
        ctx->pc = 0x2A9CACu;
            // 0x2a9cac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CB0u;
        goto label_2a9cb0;
    }
    ctx->pc = 0x2A9CA8u;
    SET_GPR_U32(ctx, 31, 0x2A9CB0u);
    ctx->pc = 0x2A9CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CA8u;
            // 0x2a9cac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A0u;
    if (runtime->hasFunction(0x2AA0A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9CB0u; }
        if (ctx->pc != 0x2A9CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeData__9CEditDataFii_0x2aa0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9CB0u; }
        if (ctx->pc != 0x2A9CB0u) { return; }
    }
    ctx->pc = 0x2A9CB0u;
label_2a9cb0:
    // 0x2a9cb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a9cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9cb4:
    // 0x2a9cb4: 0x12200050  beqz        $s1, . + 4 + (0x50 << 2)
label_2a9cb8:
    if (ctx->pc == 0x2A9CB8u) {
        ctx->pc = 0x2A9CBCu;
        goto label_2a9cbc;
    }
    ctx->pc = 0x2A9CB4u;
    {
        const bool branch_taken_0x2a9cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9cb4) {
            ctx->pc = 0x2A9DF8u;
            goto label_2a9df8;
        }
    }
    ctx->pc = 0x2A9CBCu;
label_2a9cbc:
    // 0x2a9cbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9cc0:
    // 0x2a9cc0: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
label_2a9cc4:
    if (ctx->pc == 0x2A9CC4u) {
        ctx->pc = 0x2A9CC4u;
            // 0x2a9cc4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CC8u;
        goto label_2a9cc8;
    }
    ctx->pc = 0x2A9CC0u;
    {
        const bool branch_taken_0x2a9cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CC0u;
            // 0x2a9cc4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cc0) {
            ctx->pc = 0x2A9DF8u;
            goto label_2a9df8;
        }
    }
    ctx->pc = 0x2A9CC8u;
label_2a9cc8:
    // 0x2a9cc8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2a9cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ccc:
    // 0x2a9ccc: 0xc0aa894  jal         func_2AA250
label_2a9cd0:
    if (ctx->pc == 0x2A9CD0u) {
        ctx->pc = 0x2A9CD0u;
            // 0x2a9cd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CD4u;
        goto label_2a9cd4;
    }
    ctx->pc = 0x2A9CCCu;
    SET_GPR_U32(ctx, 31, 0x2A9CD4u);
    ctx->pc = 0x2A9CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CCCu;
            // 0x2a9cd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9CD4u; }
        if (ctx->pc != 0x2A9CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9CD4u; }
        if (ctx->pc != 0x2A9CD4u) { return; }
    }
    ctx->pc = 0x2A9CD4u;
label_2a9cd4:
    // 0x2a9cd4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2a9cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a9cd8:
    // 0x2a9cd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a9cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9cdc:
    // 0x2a9cdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a9cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ce0:
    // 0x2a9ce0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a9ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a9ce4:
    // 0x2a9ce4: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x2a9ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a9ce8:
    // 0x2a9ce8: 0xc0aa6ac  jal         func_2A9AB0
label_2a9cec:
    if (ctx->pc == 0x2A9CECu) {
        ctx->pc = 0x2A9CECu;
            // 0x2a9cec: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2A9CF0u;
        goto label_2a9cf0;
    }
    ctx->pc = 0x2A9CE8u;
    SET_GPR_U32(ctx, 31, 0x2A9CF0u);
    ctx->pc = 0x2A9CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CE8u;
            // 0x2a9cec: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9AB0u;
    if (runtime->hasFunction(0x2A9AB0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9CF0u; }
        if (ctx->pc != 0x2A9CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOnOffParts__8CEditMapFPcPP9CMapPartsPP9CMapPiecei_0x2a9ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9CF0u; }
        if (ctx->pc != 0x2A9CF0u) { return; }
    }
    ctx->pc = 0x2A9CF0u;
label_2a9cf0:
    // 0x2a9cf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a9cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9cf4:
    // 0x2a9cf4: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x2a9cf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2a9cf8:
    // 0x2a9cf8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_2a9cfc:
    if (ctx->pc == 0x2A9CFCu) {
        ctx->pc = 0x2A9CFCu;
            // 0x2a9cfc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D00u;
        goto label_2a9d00;
    }
    ctx->pc = 0x2A9CF8u;
    {
        const bool branch_taken_0x2a9cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CF8u;
            // 0x2a9cfc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cf8) {
            ctx->pc = 0x2A9D60u;
            goto label_2a9d60;
        }
    }
    ctx->pc = 0x2A9D00u;
label_2a9d00:
    // 0x2a9d00: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a9d00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d04:
    // 0x2a9d04: 0x0  nop
    ctx->pc = 0x2a9d04u;
    // NOP
label_2a9d08:
    // 0x2a9d08: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x2a9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_2a9d0c:
    // 0x2a9d0c: 0x8c4400e0  lw          $a0, 0xE0($v0)
    ctx->pc = 0x2a9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_2a9d10:
    // 0x2a9d10: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2a9d14:
    if (ctx->pc == 0x2A9D14u) {
        ctx->pc = 0x2A9D18u;
        goto label_2a9d18;
    }
    ctx->pc = 0x2A9D10u;
    {
        const bool branch_taken_0x2a9d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9d10) {
            ctx->pc = 0x2A9D30u;
            goto label_2a9d30;
        }
    }
    ctx->pc = 0x2A9D18u;
label_2a9d18:
    // 0x2a9d18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a9d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9d1c:
    // 0x2a9d1c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2a9d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2a9d20:
    // 0x2a9d20: 0x320f809  jalr        $t9
label_2a9d24:
    if (ctx->pc == 0x2A9D24u) {
        ctx->pc = 0x2A9D24u;
            // 0x2a9d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D28u;
        goto label_2a9d28;
    }
    ctx->pc = 0x2A9D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9D28u);
        ctx->pc = 0x2A9D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D20u;
            // 0x2a9d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9D28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9D28u; }
            if (ctx->pc != 0x2A9D28u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9D28u;
label_2a9d28:
    // 0x2a9d28: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a9d2c:
    if (ctx->pc == 0x2A9D2Cu) {
        ctx->pc = 0x2A9D30u;
        goto label_2a9d30;
    }
    ctx->pc = 0x2A9D28u;
    {
        const bool branch_taken_0x2a9d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9d28) {
            ctx->pc = 0x2A9D4Cu;
            goto label_2a9d4c;
        }
    }
    ctx->pc = 0x2A9D30u;
label_2a9d30:
    // 0x2a9d30: 0x8c4400a0  lw          $a0, 0xA0($v0)
    ctx->pc = 0x2a9d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_2a9d34:
    // 0x2a9d34: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a9d38:
    if (ctx->pc == 0x2A9D38u) {
        ctx->pc = 0x2A9D3Cu;
        goto label_2a9d3c;
    }
    ctx->pc = 0x2A9D34u;
    {
        const bool branch_taken_0x2a9d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9d34) {
            ctx->pc = 0x2A9D4Cu;
            goto label_2a9d4c;
        }
    }
    ctx->pc = 0x2A9D3Cu;
label_2a9d3c:
    // 0x2a9d3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a9d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9d40:
    // 0x2a9d40: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2a9d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2a9d44:
    // 0x2a9d44: 0x320f809  jalr        $t9
label_2a9d48:
    if (ctx->pc == 0x2A9D48u) {
        ctx->pc = 0x2A9D48u;
            // 0x2a9d48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D4Cu;
        goto label_2a9d4c;
    }
    ctx->pc = 0x2A9D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9D4Cu);
        ctx->pc = 0x2A9D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D44u;
            // 0x2a9d48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9D4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9D4Cu; }
            if (ctx->pc != 0x2A9D4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A9D4Cu;
label_2a9d4c:
    // 0x2a9d4c: 0x0  nop
    ctx->pc = 0x2a9d4cu;
    // NOP
label_2a9d50:
    // 0x2a9d50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a9d50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2a9d54:
    // 0x2a9d54: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x2a9d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2a9d58:
    // 0x2a9d58: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_2a9d5c:
    if (ctx->pc == 0x2A9D5Cu) {
        ctx->pc = 0x2A9D5Cu;
            // 0x2a9d5c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x2A9D60u;
        goto label_2a9d60;
    }
    ctx->pc = 0x2A9D58u;
    {
        const bool branch_taken_0x2a9d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D58u;
            // 0x2a9d5c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d58) {
            ctx->pc = 0x2A9D04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9d04;
        }
    }
    ctx->pc = 0x2A9D60u;
label_2a9d60:
    // 0x2a9d60: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2a9d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2a9d64:
    // 0x2a9d64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a9d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d68:
    // 0x2a9d68: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a9d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a9d6c:
    // 0x2a9d6c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x2a9d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a9d70:
    // 0x2a9d70: 0xc0aa6ac  jal         func_2A9AB0
label_2a9d74:
    if (ctx->pc == 0x2A9D74u) {
        ctx->pc = 0x2A9D74u;
            // 0x2a9d74: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2A9D78u;
        goto label_2a9d78;
    }
    ctx->pc = 0x2A9D70u;
    SET_GPR_U32(ctx, 31, 0x2A9D78u);
    ctx->pc = 0x2A9D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D70u;
            // 0x2a9d74: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9AB0u;
    if (runtime->hasFunction(0x2A9AB0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9D78u; }
        if (ctx->pc != 0x2A9D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOnOffParts__8CEditMapFPcPP9CMapPartsPP9CMapPiecei_0x2a9ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9D78u; }
        if (ctx->pc != 0x2A9D78u) { return; }
    }
    ctx->pc = 0x2A9D78u;
label_2a9d78:
    // 0x2a9d78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a9d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d7c:
    // 0x2a9d7c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x2a9d7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2a9d80:
    // 0x2a9d80: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_2a9d84:
    if (ctx->pc == 0x2A9D84u) {
        ctx->pc = 0x2A9D84u;
            // 0x2a9d84: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D88u;
        goto label_2a9d88;
    }
    ctx->pc = 0x2A9D80u;
    {
        const bool branch_taken_0x2a9d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D80u;
            // 0x2a9d84: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d80) {
            ctx->pc = 0x2A9DF8u;
            goto label_2a9df8;
        }
    }
    ctx->pc = 0x2A9D88u;
label_2a9d88:
    // 0x2a9d88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a9d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d8c:
    // 0x2a9d8c: 0x0  nop
    ctx->pc = 0x2a9d8cu;
    // NOP
label_2a9d90:
    // 0x2a9d90: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x2a9d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_2a9d94:
    // 0x2a9d94: 0x8c6400e0  lw          $a0, 0xE0($v1)
    ctx->pc = 0x2a9d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
label_2a9d98:
    // 0x2a9d98: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2a9d9c:
    if (ctx->pc == 0x2A9D9Cu) {
        ctx->pc = 0x2A9DA0u;
        goto label_2a9da0;
    }
    ctx->pc = 0x2A9D98u;
    {
        const bool branch_taken_0x2a9d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9d98) {
            ctx->pc = 0x2A9DC0u;
            goto label_2a9dc0;
        }
    }
    ctx->pc = 0x2A9DA0u;
label_2a9da0:
    // 0x2a9da0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a9da0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9da4:
    // 0x2a9da4: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x2a9da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2a9da8:
    // 0x2a9da8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a9da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a9dac:
    // 0x2a9dac: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2a9dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2a9db0:
    // 0x2a9db0: 0x320f809  jalr        $t9
label_2a9db4:
    if (ctx->pc == 0x2A9DB4u) {
        ctx->pc = 0x2A9DB4u;
            // 0x2a9db4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2A9DB8u;
        goto label_2a9db8;
    }
    ctx->pc = 0x2A9DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9DB8u);
        ctx->pc = 0x2A9DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9DB0u;
            // 0x2a9db4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9DB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9DB8u; }
            if (ctx->pc != 0x2A9DB8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9DB8u;
label_2a9db8:
    // 0x2a9db8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a9dbc:
    if (ctx->pc == 0x2A9DBCu) {
        ctx->pc = 0x2A9DC0u;
        goto label_2a9dc0;
    }
    ctx->pc = 0x2A9DB8u;
    {
        const bool branch_taken_0x2a9db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9db8) {
            ctx->pc = 0x2A9DE4u;
            goto label_2a9de4;
        }
    }
    ctx->pc = 0x2A9DC0u;
label_2a9dc0:
    // 0x2a9dc0: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x2a9dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_2a9dc4:
    // 0x2a9dc4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2a9dc8:
    if (ctx->pc == 0x2A9DC8u) {
        ctx->pc = 0x2A9DCCu;
        goto label_2a9dcc;
    }
    ctx->pc = 0x2A9DC4u;
    {
        const bool branch_taken_0x2a9dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9dc4) {
            ctx->pc = 0x2A9DE4u;
            goto label_2a9de4;
        }
    }
    ctx->pc = 0x2A9DCCu;
label_2a9dcc:
    // 0x2a9dcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a9dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9dd0:
    // 0x2a9dd0: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x2a9dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2a9dd4:
    // 0x2a9dd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a9dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a9dd8:
    // 0x2a9dd8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2a9dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2a9ddc:
    // 0x2a9ddc: 0x320f809  jalr        $t9
label_2a9de0:
    if (ctx->pc == 0x2A9DE0u) {
        ctx->pc = 0x2A9DE0u;
            // 0x2a9de0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2A9DE4u;
        goto label_2a9de4;
    }
    ctx->pc = 0x2A9DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9DE4u);
        ctx->pc = 0x2A9DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9DDCu;
            // 0x2a9de0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9DE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9DE4u; }
            if (ctx->pc != 0x2A9DE4u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9DE4u;
label_2a9de4:
    // 0x2a9de4: 0x0  nop
    ctx->pc = 0x2a9de4u;
    // NOP
label_2a9de8:
    // 0x2a9de8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a9de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2a9dec:
    // 0x2a9dec: 0x293182a  slt         $v1, $s4, $s3
    ctx->pc = 0x2a9decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2a9df0:
    // 0x2a9df0: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_2a9df4:
    if (ctx->pc == 0x2A9DF4u) {
        ctx->pc = 0x2A9DF4u;
            // 0x2a9df4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2A9DF8u;
        goto label_2a9df8;
    }
    ctx->pc = 0x2A9DF0u;
    {
        const bool branch_taken_0x2a9df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9DF0u;
            // 0x2a9df4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9df0) {
            ctx->pc = 0x2A9D8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9d8c;
        }
    }
    ctx->pc = 0x2A9DF8u;
label_2a9df8:
    // 0x2a9df8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a9dfc:
    // 0x2a9dfc: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x2a9dfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_2a9e00:
    // 0x2a9e00: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
label_2a9e04:
    if (ctx->pc == 0x2A9E04u) {
        ctx->pc = 0x2A9E04u;
            // 0x2a9e04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E08u;
        goto label_2a9e08;
    }
    ctx->pc = 0x2A9E00u;
    {
        const bool branch_taken_0x2a9e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9E00u;
            // 0x2a9e04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e00) {
            ctx->pc = 0x2A9CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9ca4;
        }
    }
    ctx->pc = 0x2A9E08u;
label_2a9e08:
    // 0x2a9e08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a9e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a9e0c:
    // 0x2a9e0c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a9e0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a9e10:
    // 0x2a9e10: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a9e10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a9e14:
    // 0x2a9e14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a9e14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a9e18:
    // 0x2a9e18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a9e18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9e1c:
    // 0x2a9e1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a9e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9e20:
    // 0x2a9e20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9e24:
    // 0x2a9e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9e28:
    // 0x2a9e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9e2c:
    // 0x2a9e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9e30:
    // 0x2a9e30: 0x3e00008  jr          $ra
label_2a9e34:
    if (ctx->pc == 0x2A9E34u) {
        ctx->pc = 0x2A9E34u;
            // 0x2a9e34: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2A9E38u;
        goto label_fallthrough_0x2a9e30;
    }
    ctx->pc = 0x2A9E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9E30u;
            // 0x2a9e34: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a9e30:
    ctx->pc = 0x2A9E38u;
}
