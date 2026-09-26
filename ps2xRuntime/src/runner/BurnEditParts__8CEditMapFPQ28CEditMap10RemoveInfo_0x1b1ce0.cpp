#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BurnEditParts__8CEditMapFPQ28CEditMap10RemoveInfo
// Address: 0x1b1ce0 - 0x1b1f50
void BurnEditParts__8CEditMapFPQ28CEditMap10RemoveInfo_0x1b1ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BurnEditParts__8CEditMapFPQ28CEditMap10RemoveInfo_0x1b1ce0");
#endif

    switch (ctx->pc) {
        case 0x1b1ce0u: goto label_1b1ce0;
        case 0x1b1ce4u: goto label_1b1ce4;
        case 0x1b1ce8u: goto label_1b1ce8;
        case 0x1b1cecu: goto label_1b1cec;
        case 0x1b1cf0u: goto label_1b1cf0;
        case 0x1b1cf4u: goto label_1b1cf4;
        case 0x1b1cf8u: goto label_1b1cf8;
        case 0x1b1cfcu: goto label_1b1cfc;
        case 0x1b1d00u: goto label_1b1d00;
        case 0x1b1d04u: goto label_1b1d04;
        case 0x1b1d08u: goto label_1b1d08;
        case 0x1b1d0cu: goto label_1b1d0c;
        case 0x1b1d10u: goto label_1b1d10;
        case 0x1b1d14u: goto label_1b1d14;
        case 0x1b1d18u: goto label_1b1d18;
        case 0x1b1d1cu: goto label_1b1d1c;
        case 0x1b1d20u: goto label_1b1d20;
        case 0x1b1d24u: goto label_1b1d24;
        case 0x1b1d28u: goto label_1b1d28;
        case 0x1b1d2cu: goto label_1b1d2c;
        case 0x1b1d30u: goto label_1b1d30;
        case 0x1b1d34u: goto label_1b1d34;
        case 0x1b1d38u: goto label_1b1d38;
        case 0x1b1d3cu: goto label_1b1d3c;
        case 0x1b1d40u: goto label_1b1d40;
        case 0x1b1d44u: goto label_1b1d44;
        case 0x1b1d48u: goto label_1b1d48;
        case 0x1b1d4cu: goto label_1b1d4c;
        case 0x1b1d50u: goto label_1b1d50;
        case 0x1b1d54u: goto label_1b1d54;
        case 0x1b1d58u: goto label_1b1d58;
        case 0x1b1d5cu: goto label_1b1d5c;
        case 0x1b1d60u: goto label_1b1d60;
        case 0x1b1d64u: goto label_1b1d64;
        case 0x1b1d68u: goto label_1b1d68;
        case 0x1b1d6cu: goto label_1b1d6c;
        case 0x1b1d70u: goto label_1b1d70;
        case 0x1b1d74u: goto label_1b1d74;
        case 0x1b1d78u: goto label_1b1d78;
        case 0x1b1d7cu: goto label_1b1d7c;
        case 0x1b1d80u: goto label_1b1d80;
        case 0x1b1d84u: goto label_1b1d84;
        case 0x1b1d88u: goto label_1b1d88;
        case 0x1b1d8cu: goto label_1b1d8c;
        case 0x1b1d90u: goto label_1b1d90;
        case 0x1b1d94u: goto label_1b1d94;
        case 0x1b1d98u: goto label_1b1d98;
        case 0x1b1d9cu: goto label_1b1d9c;
        case 0x1b1da0u: goto label_1b1da0;
        case 0x1b1da4u: goto label_1b1da4;
        case 0x1b1da8u: goto label_1b1da8;
        case 0x1b1dacu: goto label_1b1dac;
        case 0x1b1db0u: goto label_1b1db0;
        case 0x1b1db4u: goto label_1b1db4;
        case 0x1b1db8u: goto label_1b1db8;
        case 0x1b1dbcu: goto label_1b1dbc;
        case 0x1b1dc0u: goto label_1b1dc0;
        case 0x1b1dc4u: goto label_1b1dc4;
        case 0x1b1dc8u: goto label_1b1dc8;
        case 0x1b1dccu: goto label_1b1dcc;
        case 0x1b1dd0u: goto label_1b1dd0;
        case 0x1b1dd4u: goto label_1b1dd4;
        case 0x1b1dd8u: goto label_1b1dd8;
        case 0x1b1ddcu: goto label_1b1ddc;
        case 0x1b1de0u: goto label_1b1de0;
        case 0x1b1de4u: goto label_1b1de4;
        case 0x1b1de8u: goto label_1b1de8;
        case 0x1b1decu: goto label_1b1dec;
        case 0x1b1df0u: goto label_1b1df0;
        case 0x1b1df4u: goto label_1b1df4;
        case 0x1b1df8u: goto label_1b1df8;
        case 0x1b1dfcu: goto label_1b1dfc;
        case 0x1b1e00u: goto label_1b1e00;
        case 0x1b1e04u: goto label_1b1e04;
        case 0x1b1e08u: goto label_1b1e08;
        case 0x1b1e0cu: goto label_1b1e0c;
        case 0x1b1e10u: goto label_1b1e10;
        case 0x1b1e14u: goto label_1b1e14;
        case 0x1b1e18u: goto label_1b1e18;
        case 0x1b1e1cu: goto label_1b1e1c;
        case 0x1b1e20u: goto label_1b1e20;
        case 0x1b1e24u: goto label_1b1e24;
        case 0x1b1e28u: goto label_1b1e28;
        case 0x1b1e2cu: goto label_1b1e2c;
        case 0x1b1e30u: goto label_1b1e30;
        case 0x1b1e34u: goto label_1b1e34;
        case 0x1b1e38u: goto label_1b1e38;
        case 0x1b1e3cu: goto label_1b1e3c;
        case 0x1b1e40u: goto label_1b1e40;
        case 0x1b1e44u: goto label_1b1e44;
        case 0x1b1e48u: goto label_1b1e48;
        case 0x1b1e4cu: goto label_1b1e4c;
        case 0x1b1e50u: goto label_1b1e50;
        case 0x1b1e54u: goto label_1b1e54;
        case 0x1b1e58u: goto label_1b1e58;
        case 0x1b1e5cu: goto label_1b1e5c;
        case 0x1b1e60u: goto label_1b1e60;
        case 0x1b1e64u: goto label_1b1e64;
        case 0x1b1e68u: goto label_1b1e68;
        case 0x1b1e6cu: goto label_1b1e6c;
        case 0x1b1e70u: goto label_1b1e70;
        case 0x1b1e74u: goto label_1b1e74;
        case 0x1b1e78u: goto label_1b1e78;
        case 0x1b1e7cu: goto label_1b1e7c;
        case 0x1b1e80u: goto label_1b1e80;
        case 0x1b1e84u: goto label_1b1e84;
        case 0x1b1e88u: goto label_1b1e88;
        case 0x1b1e8cu: goto label_1b1e8c;
        case 0x1b1e90u: goto label_1b1e90;
        case 0x1b1e94u: goto label_1b1e94;
        case 0x1b1e98u: goto label_1b1e98;
        case 0x1b1e9cu: goto label_1b1e9c;
        case 0x1b1ea0u: goto label_1b1ea0;
        case 0x1b1ea4u: goto label_1b1ea4;
        case 0x1b1ea8u: goto label_1b1ea8;
        case 0x1b1eacu: goto label_1b1eac;
        case 0x1b1eb0u: goto label_1b1eb0;
        case 0x1b1eb4u: goto label_1b1eb4;
        case 0x1b1eb8u: goto label_1b1eb8;
        case 0x1b1ebcu: goto label_1b1ebc;
        case 0x1b1ec0u: goto label_1b1ec0;
        case 0x1b1ec4u: goto label_1b1ec4;
        case 0x1b1ec8u: goto label_1b1ec8;
        case 0x1b1eccu: goto label_1b1ecc;
        case 0x1b1ed0u: goto label_1b1ed0;
        case 0x1b1ed4u: goto label_1b1ed4;
        case 0x1b1ed8u: goto label_1b1ed8;
        case 0x1b1edcu: goto label_1b1edc;
        case 0x1b1ee0u: goto label_1b1ee0;
        case 0x1b1ee4u: goto label_1b1ee4;
        case 0x1b1ee8u: goto label_1b1ee8;
        case 0x1b1eecu: goto label_1b1eec;
        case 0x1b1ef0u: goto label_1b1ef0;
        case 0x1b1ef4u: goto label_1b1ef4;
        case 0x1b1ef8u: goto label_1b1ef8;
        case 0x1b1efcu: goto label_1b1efc;
        case 0x1b1f00u: goto label_1b1f00;
        case 0x1b1f04u: goto label_1b1f04;
        case 0x1b1f08u: goto label_1b1f08;
        case 0x1b1f0cu: goto label_1b1f0c;
        case 0x1b1f10u: goto label_1b1f10;
        case 0x1b1f14u: goto label_1b1f14;
        case 0x1b1f18u: goto label_1b1f18;
        case 0x1b1f1cu: goto label_1b1f1c;
        case 0x1b1f20u: goto label_1b1f20;
        case 0x1b1f24u: goto label_1b1f24;
        case 0x1b1f28u: goto label_1b1f28;
        case 0x1b1f2cu: goto label_1b1f2c;
        case 0x1b1f30u: goto label_1b1f30;
        case 0x1b1f34u: goto label_1b1f34;
        case 0x1b1f38u: goto label_1b1f38;
        case 0x1b1f3cu: goto label_1b1f3c;
        case 0x1b1f40u: goto label_1b1f40;
        case 0x1b1f44u: goto label_1b1f44;
        case 0x1b1f48u: goto label_1b1f48;
        case 0x1b1f4cu: goto label_1b1f4c;
        default: break;
    }

    ctx->pc = 0x1b1ce0u;

label_1b1ce0:
    // 0x1b1ce0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1b1ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1b1ce4:
    // 0x1b1ce4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1b1ce8:
    // 0x1b1ce8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b1ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1b1cec:
    // 0x1b1cec: 0x244269b0  addiu       $v0, $v0, 0x69B0
    ctx->pc = 0x1b1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27056));
label_1b1cf0:
    // 0x1b1cf0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b1cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b1cf4:
    // 0x1b1cf4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1b1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1b1cf8:
    // 0x1b1cf8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b1cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b1cfc:
    // 0x1b1cfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b1cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b1d00:
    // 0x1b1d00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b1d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b1d04:
    // 0x1b1d04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b1d04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d08:
    // 0x1b1d08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b1d0c:
    // 0x1b1d0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b1d0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d10:
    // 0x1b1d10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b1d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b1d14:
    // 0x1b1d14: 0x26a40f94  addiu       $a0, $s5, 0xF94
    ctx->pc = 0x1b1d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3988));
label_1b1d18:
    // 0x1b1d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b1d1c:
    // 0x1b1d1c: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x1b1d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1b1d20:
    // 0x1b1d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b1d24:
    // 0x1b1d24: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b1d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1d28:
    // 0x1b1d28: 0xc0a93b4  jal         func_2A4ED0
label_1b1d2c:
    if (ctx->pc == 0x1B1D2Cu) {
        ctx->pc = 0x1B1D2Cu;
            // 0x1b1d2c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1B1D30u;
        goto label_1b1d30;
    }
    ctx->pc = 0x1B1D28u;
    SET_GPR_U32(ctx, 31, 0x1B1D30u);
    ctx->pc = 0x1B1D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D28u;
            // 0x1b1d2c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4ED0u;
    if (runtime->hasFunction(0x2A4ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2A4ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D30u; }
        if (ctx->pc != 0x1B1D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__13CEditInfoMngrFi_0x2a4ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D30u; }
        if (ctx->pc != 0x1B1D30u) { return; }
    }
    ctx->pc = 0x1B1D30u;
label_1b1d30:
    // 0x1b1d30: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1b1d30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d34:
    // 0x1b1d34: 0x26a40f94  addiu       $a0, $s5, 0xF94
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3988));
label_1b1d38:
    // 0x1b1d38: 0xc0a93b4  jal         func_2A4ED0
label_1b1d3c:
    if (ctx->pc == 0x1B1D3Cu) {
        ctx->pc = 0x1B1D3Cu;
            // 0x1b1d3c: 0x24050056  addiu       $a1, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->pc = 0x1B1D40u;
        goto label_1b1d40;
    }
    ctx->pc = 0x1B1D38u;
    SET_GPR_U32(ctx, 31, 0x1B1D40u);
    ctx->pc = 0x1B1D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D38u;
            // 0x1b1d3c: 0x24050056  addiu       $a1, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4ED0u;
    if (runtime->hasFunction(0x2A4ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2A4ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D40u; }
        if (ctx->pc != 0x1B1D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__13CEditInfoMngrFi_0x2a4ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D40u; }
        if (ctx->pc != 0x1B1D40u) { return; }
    }
    ctx->pc = 0x1B1D40u;
label_1b1d40:
    // 0x1b1d40: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_1b1d44:
    if (ctx->pc == 0x1B1D44u) {
        ctx->pc = 0x1B1D44u;
            // 0x1b1d44: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D48u;
        goto label_1b1d48;
    }
    ctx->pc = 0x1B1D40u;
    {
        const bool branch_taken_0x1b1d40 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D40u;
            // 0x1b1d44: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d40) {
            ctx->pc = 0x1B1D50u;
            goto label_1b1d50;
        }
    }
    ctx->pc = 0x1B1D48u;
label_1b1d48:
    // 0x1b1d48: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_1b1d4c:
    if (ctx->pc == 0x1B1D4Cu) {
        ctx->pc = 0x1B1D4Cu;
            // 0x1b1d4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D50u;
        goto label_1b1d50;
    }
    ctx->pc = 0x1B1D48u;
    {
        const bool branch_taken_0x1b1d48 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D48u;
            // 0x1b1d4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d48) {
            ctx->pc = 0x1B1D58u;
            goto label_1b1d58;
        }
    }
    ctx->pc = 0x1B1D50u;
label_1b1d50:
    // 0x1b1d50: 0x10000074  b           . + 4 + (0x74 << 2)
label_1b1d54:
    if (ctx->pc == 0x1B1D54u) {
        ctx->pc = 0x1B1D54u;
            // 0x1b1d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D58u;
        goto label_1b1d58;
    }
    ctx->pc = 0x1B1D50u;
    {
        const bool branch_taken_0x1b1d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D50u;
            // 0x1b1d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d50) {
            ctx->pc = 0x1B1F24u;
            goto label_1b1f24;
        }
    }
    ctx->pc = 0x1B1D58u;
label_1b1d58:
    // 0x1b1d58: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x1b1d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1b1d5c:
    // 0x1b1d5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d60:
    // 0x1b1d60: 0xc0bb9dc  jal         func_2EE770
label_1b1d64:
    if (ctx->pc == 0x1B1D64u) {
        ctx->pc = 0x1B1D64u;
            // 0x1b1d64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D68u;
        goto label_1b1d68;
    }
    ctx->pc = 0x1B1D60u;
    SET_GPR_U32(ctx, 31, 0x1B1D68u);
    ctx->pc = 0x1B1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D60u;
            // 0x1b1d64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D68u; }
        if (ctx->pc != 0x1B1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D68u; }
        if (ctx->pc != 0x1B1D68u) { return; }
    }
    ctx->pc = 0x1B1D68u;
label_1b1d68:
    // 0x1b1d68: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1b1d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_1b1d6c:
    // 0x1b1d6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d70:
    // 0x1b1d70: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x1b1d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1b1d74:
    // 0x1b1d74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d78:
    // 0x1b1d78: 0xc0bb9dc  jal         func_2EE770
label_1b1d7c:
    if (ctx->pc == 0x1B1D7Cu) {
        ctx->pc = 0x1B1D7Cu;
            // 0x1b1d7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D80u;
        goto label_1b1d80;
    }
    ctx->pc = 0x1B1D78u;
    SET_GPR_U32(ctx, 31, 0x1B1D80u);
    ctx->pc = 0x1B1D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D78u;
            // 0x1b1d7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D80u; }
        if (ctx->pc != 0x1B1D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D80u; }
        if (ctx->pc != 0x1B1D80u) { return; }
    }
    ctx->pc = 0x1B1D80u;
label_1b1d80:
    // 0x1b1d80: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x1b1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_1b1d84:
    // 0x1b1d84: 0x8eb00d44  lw          $s0, 0xD44($s5)
    ctx->pc = 0x1b1d84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3396)));
label_1b1d88:
    // 0x1b1d88: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1b1d8c:
    if (ctx->pc == 0x1B1D8Cu) {
        ctx->pc = 0x1B1D8Cu;
            // 0x1b1d8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D90u;
        goto label_1b1d90;
    }
    ctx->pc = 0x1B1D88u;
    {
        const bool branch_taken_0x1b1d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D88u;
            // 0x1b1d8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d88) {
            ctx->pc = 0x1B1DF8u;
            goto label_1b1df8;
        }
    }
    ctx->pc = 0x1B1D90u;
label_1b1d90:
    // 0x1b1d90: 0xc0bb988  jal         func_2EE620
label_1b1d94:
    if (ctx->pc == 0x1B1D94u) {
        ctx->pc = 0x1B1D94u;
            // 0x1b1d94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D98u;
        goto label_1b1d98;
    }
    ctx->pc = 0x1B1D90u;
    SET_GPR_U32(ctx, 31, 0x1B1D98u);
    ctx->pc = 0x1B1D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D90u;
            // 0x1b1d94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D98u; }
        if (ctx->pc != 0x1B1D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D98u; }
        if (ctx->pc != 0x1B1D98u) { return; }
    }
    ctx->pc = 0x1B1D98u;
label_1b1d98:
    // 0x1b1d98: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1b1d9c:
    if (ctx->pc == 0x1B1D9Cu) {
        ctx->pc = 0x1B1DA0u;
        goto label_1b1da0;
    }
    ctx->pc = 0x1B1D98u;
    {
        const bool branch_taken_0x1b1d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d98) {
            ctx->pc = 0x1B1DECu;
            goto label_1b1dec;
        }
    }
    ctx->pc = 0x1B1DA0u;
label_1b1da0:
    // 0x1b1da0: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1b1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1b1da4:
    // 0x1b1da4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1b1da8:
    if (ctx->pc == 0x1B1DA8u) {
        ctx->pc = 0x1B1DA8u;
            // 0x1b1da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DACu;
        goto label_1b1dac;
    }
    ctx->pc = 0x1B1DA4u;
    {
        const bool branch_taken_0x1b1da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DA4u;
            // 0x1b1da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1da4) {
            ctx->pc = 0x1B1DECu;
            goto label_1b1dec;
        }
    }
    ctx->pc = 0x1B1DACu;
label_1b1dac:
    // 0x1b1dac: 0xc06d694  jal         func_1B5A50
label_1b1db0:
    if (ctx->pc == 0x1B1DB0u) {
        ctx->pc = 0x1B1DB4u;
        goto label_1b1db4;
    }
    ctx->pc = 0x1B1DACu;
    SET_GPR_U32(ctx, 31, 0x1B1DB4u);
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DB4u; }
        if (ctx->pc != 0x1B1DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DB4u; }
        if (ctx->pc != 0x1B1DB4u) { return; }
    }
    ctx->pc = 0x1B1DB4u;
label_1b1db4:
    // 0x1b1db4: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x1b1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1b1db8:
    // 0x1b1db8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1b1dbc:
    if (ctx->pc == 0x1B1DBCu) {
        ctx->pc = 0x1B1DBCu;
            // 0x1b1dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DC0u;
        goto label_1b1dc0;
    }
    ctx->pc = 0x1B1DB8u;
    {
        const bool branch_taken_0x1b1db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DB8u;
            // 0x1b1dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1db8) {
            ctx->pc = 0x1B1DD4u;
            goto label_1b1dd4;
        }
    }
    ctx->pc = 0x1B1DC0u;
label_1b1dc0:
    // 0x1b1dc0: 0xc06d694  jal         func_1B5A50
label_1b1dc4:
    if (ctx->pc == 0x1B1DC4u) {
        ctx->pc = 0x1B1DC8u;
        goto label_1b1dc8;
    }
    ctx->pc = 0x1B1DC0u;
    SET_GPR_U32(ctx, 31, 0x1B1DC8u);
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DC8u; }
        if (ctx->pc != 0x1B1DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DC8u; }
        if (ctx->pc != 0x1B1DC8u) { return; }
    }
    ctx->pc = 0x1B1DC8u;
label_1b1dc8:
    // 0x1b1dc8: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1b1dcc:
    // 0x1b1dcc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_1b1dd0:
    if (ctx->pc == 0x1B1DD0u) {
        ctx->pc = 0x1B1DD4u;
        goto label_1b1dd4;
    }
    ctx->pc = 0x1B1DCCu;
    {
        const bool branch_taken_0x1b1dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1dcc) {
            ctx->pc = 0x1B1DECu;
            goto label_1b1dec;
        }
    }
    ctx->pc = 0x1B1DD4u;
label_1b1dd4:
    // 0x1b1dd4: 0x0  nop
    ctx->pc = 0x1b1dd4u;
    // NOP
label_1b1dd8:
    // 0x1b1dd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ddc:
    // 0x1b1ddc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b1ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1de0:
    // 0x1b1de0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1b1de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1b1de4:
    // 0x1b1de4: 0xc06c628  jal         func_1B18A0
label_1b1de8:
    if (ctx->pc == 0x1B1DE8u) {
        ctx->pc = 0x1B1DE8u;
            // 0x1b1de8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DECu;
        goto label_1b1dec;
    }
    ctx->pc = 0x1B1DE4u;
    SET_GPR_U32(ctx, 31, 0x1B1DECu);
    ctx->pc = 0x1B1DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DE4u;
            // 0x1b1de8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B18A0u;
    if (runtime->hasFunction(0x1B18A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B18A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DECu; }
        if (ctx->pc != 0x1B1DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveEditParts__8CEditMapFiPfPQ28CEditMap10RemoveInfo_0x1b18a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DECu; }
        if (ctx->pc != 0x1B1DECu) { return; }
    }
    ctx->pc = 0x1B1DECu;
label_1b1dec:
    // 0x1b1dec: 0x0  nop
    ctx->pc = 0x1b1decu;
    // NOP
label_1b1df0:
    // 0x1b1df0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b1df4:
    // 0x1b1df4: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1b1df8:
    // 0x1b1df8: 0x8ea20d40  lw          $v0, 0xD40($s5)
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3392)));
label_1b1dfc:
    // 0x1b1dfc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b1dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1e00:
    // 0x1b1e00: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1b1e04:
    if (ctx->pc == 0x1B1E04u) {
        ctx->pc = 0x1B1E04u;
            // 0x1b1e04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E08u;
        goto label_1b1e08;
    }
    ctx->pc = 0x1B1E00u;
    {
        const bool branch_taken_0x1b1e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E00u;
            // 0x1b1e04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e00) {
            ctx->pc = 0x1B1D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1d90;
        }
    }
    ctx->pc = 0x1B1E08u;
label_1b1e08:
    // 0x1b1e08: 0x8eb30d44  lw          $s3, 0xD44($s5)
    ctx->pc = 0x1b1e08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3396)));
label_1b1e0c:
    // 0x1b1e0c: 0x10000040  b           . + 4 + (0x40 << 2)
label_1b1e10:
    if (ctx->pc == 0x1B1E10u) {
        ctx->pc = 0x1B1E10u;
            // 0x1b1e10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E14u;
        goto label_1b1e14;
    }
    ctx->pc = 0x1B1E0Cu;
    {
        const bool branch_taken_0x1b1e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E0Cu;
            // 0x1b1e10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e0c) {
            ctx->pc = 0x1B1F10u;
            goto label_1b1f10;
        }
    }
    ctx->pc = 0x1B1E14u;
label_1b1e14:
    // 0x1b1e14: 0xc0bb988  jal         func_2EE620
label_1b1e18:
    if (ctx->pc == 0x1B1E18u) {
        ctx->pc = 0x1B1E18u;
            // 0x1b1e18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E1Cu;
        goto label_1b1e1c;
    }
    ctx->pc = 0x1B1E14u;
    SET_GPR_U32(ctx, 31, 0x1B1E1Cu);
    ctx->pc = 0x1B1E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E14u;
            // 0x1b1e18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E1Cu; }
        if (ctx->pc != 0x1B1E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E1Cu; }
        if (ctx->pc != 0x1B1E1Cu) { return; }
    }
    ctx->pc = 0x1B1E1Cu;
label_1b1e1c:
    // 0x1b1e1c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1b1e20:
    if (ctx->pc == 0x1B1E20u) {
        ctx->pc = 0x1B1E24u;
        goto label_1b1e24;
    }
    ctx->pc = 0x1B1E1Cu;
    {
        const bool branch_taken_0x1b1e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e1c) {
            ctx->pc = 0x1B1F08u;
            goto label_1b1f08;
        }
    }
    ctx->pc = 0x1B1E24u;
label_1b1e24:
    // 0x1b1e24: 0x8e620324  lw          $v0, 0x324($s3)
    ctx->pc = 0x1b1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 804)));
label_1b1e28:
    // 0x1b1e28: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1b1e2c:
    if (ctx->pc == 0x1B1E2Cu) {
        ctx->pc = 0x1B1E30u;
        goto label_1b1e30;
    }
    ctx->pc = 0x1B1E28u;
    {
        const bool branch_taken_0x1b1e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e28) {
            ctx->pc = 0x1B1F08u;
            goto label_1b1f08;
        }
    }
    ctx->pc = 0x1B1E30u;
label_1b1e30:
    // 0x1b1e30: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b1e34:
    // 0x1b1e34: 0x32221000  andi        $v0, $s1, 0x1000
    ctx->pc = 0x1b1e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
label_1b1e38:
    // 0x1b1e38: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1b1e3c:
    if (ctx->pc == 0x1B1E3Cu) {
        ctx->pc = 0x1B1E40u;
        goto label_1b1e40;
    }
    ctx->pc = 0x1B1E38u;
    {
        const bool branch_taken_0x1b1e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e38) {
            ctx->pc = 0x1B1F08u;
            goto label_1b1f08;
        }
    }
    ctx->pc = 0x1B1E40u;
label_1b1e40:
    // 0x1b1e40: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1b1e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b1e44:
    // 0x1b1e44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b1e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e48:
    // 0x1b1e48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b1e4c:
    // 0x1b1e4c: 0x320f809  jalr        $t9
label_1b1e50:
    if (ctx->pc == 0x1B1E50u) {
        ctx->pc = 0x1B1E50u;
            // 0x1b1e50: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1B1E54u;
        goto label_1b1e54;
    }
    ctx->pc = 0x1B1E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1E54u);
        ctx->pc = 0x1B1E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E4Cu;
            // 0x1b1e50: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1E54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E54u; }
            if (ctx->pc != 0x1B1E54u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1E54u;
label_1b1e54:
    // 0x1b1e54: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1b1e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b1e58:
    // 0x1b1e58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b1e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e5c:
    // 0x1b1e5c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b1e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b1e60:
    // 0x1b1e60: 0x320f809  jalr        $t9
label_1b1e64:
    if (ctx->pc == 0x1B1E64u) {
        ctx->pc = 0x1B1E64u;
            // 0x1b1e64: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B1E68u;
        goto label_1b1e68;
    }
    ctx->pc = 0x1B1E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1E68u);
        ctx->pc = 0x1B1E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E60u;
            // 0x1b1e64: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1E68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E68u; }
            if (ctx->pc != 0x1B1E68u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1E68u;
label_1b1e68:
    // 0x1b1e68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e6c:
    // 0x1b1e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e70:
    // 0x1b1e70: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1b1e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1b1e74:
    // 0x1b1e74: 0xc06c628  jal         func_1B18A0
label_1b1e78:
    if (ctx->pc == 0x1B1E78u) {
        ctx->pc = 0x1B1E78u;
            // 0x1b1e78: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E7Cu;
        goto label_1b1e7c;
    }
    ctx->pc = 0x1B1E74u;
    SET_GPR_U32(ctx, 31, 0x1B1E7Cu);
    ctx->pc = 0x1B1E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E74u;
            // 0x1b1e78: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B18A0u;
    if (runtime->hasFunction(0x1B18A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B18A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E7Cu; }
        if (ctx->pc != 0x1B1E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveEditParts__8CEditMapFiPfPQ28CEditMap10RemoveInfo_0x1b18a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E7Cu; }
        if (ctx->pc != 0x1B1E7Cu) { return; }
    }
    ctx->pc = 0x1B1E7Cu;
label_1b1e7c:
    // 0x1b1e7c: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x1b1e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
label_1b1e80:
    // 0x1b1e80: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1b1e84:
    if (ctx->pc == 0x1B1E84u) {
        ctx->pc = 0x1B1E84u;
            // 0x1b1e84: 0x32220040  andi        $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
        ctx->pc = 0x1B1E88u;
        goto label_1b1e88;
    }
    ctx->pc = 0x1B1E80u;
    {
        const bool branch_taken_0x1b1e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E80u;
            // 0x1b1e84: 0x32220040  andi        $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e80) {
            ctx->pc = 0x1B1F08u;
            goto label_1b1f08;
        }
    }
    ctx->pc = 0x1B1E88u;
label_1b1e88:
    // 0x1b1e88: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b1e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e8c:
    // 0x1b1e8c: 0x24110056  addiu       $s1, $zero, 0x56
    ctx->pc = 0x1b1e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1b1e90:
    // 0x1b1e90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b1e94:
    if (ctx->pc == 0x1B1E94u) {
        ctx->pc = 0x1B1E94u;
            // 0x1b1e94: 0x27b2010c  addiu       $s2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->pc = 0x1B1E98u;
        goto label_1b1e98;
    }
    ctx->pc = 0x1B1E90u;
    {
        const bool branch_taken_0x1b1e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E90u;
            // 0x1b1e94: 0x27b2010c  addiu       $s2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e90) {
            ctx->pc = 0x1B1EA4u;
            goto label_1b1ea4;
        }
    }
    ctx->pc = 0x1B1E98u;
label_1b1e98:
    // 0x1b1e98: 0x24110057  addiu       $s1, $zero, 0x57
    ctx->pc = 0x1b1e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1b1e9c:
    // 0x1b1e9c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b1e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ea0:
    // 0x1b1ea0: 0x27b20108  addiu       $s2, $sp, 0x108
    ctx->pc = 0x1b1ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1b1ea4:
    // 0x1b1ea4: 0x0  nop
    ctx->pc = 0x1b1ea4u;
    // NOP
label_1b1ea8:
    // 0x1b1ea8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b1eac:
    // 0x1b1eac: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1b1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1b1eb0:
    // 0x1b1eb0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b1eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1eb4:
    // 0x1b1eb4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1b1eb8:
    if (ctx->pc == 0x1B1EB8u) {
        ctx->pc = 0x1B1EBCu;
        goto label_1b1ebc;
    }
    ctx->pc = 0x1B1EB4u;
    {
        const bool branch_taken_0x1b1eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1eb4) {
            ctx->pc = 0x1B1F08u;
            goto label_1b1f08;
        }
    }
    ctx->pc = 0x1B1EBCu;
label_1b1ebc:
    // 0x1b1ebc: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x1b1ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b1ec0:
    // 0x1b1ec0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ec4:
    // 0x1b1ec4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1b1ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b1ec8:
    // 0x1b1ec8: 0xc06ca94  jal         func_1B2A50
label_1b1ecc:
    if (ctx->pc == 0x1B1ECCu) {
        ctx->pc = 0x1B1ECCu;
            // 0x1b1ecc: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1B1ED0u;
        goto label_1b1ed0;
    }
    ctx->pc = 0x1B1EC8u;
    SET_GPR_U32(ctx, 31, 0x1B1ED0u);
    ctx->pc = 0x1B1ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EC8u;
            // 0x1b1ecc: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A50u;
    if (runtime->hasFunction(0x1B2A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B2A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1ED0u; }
        if (ctx->pc != 0x1B1ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFO_0x1b2a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1ED0u; }
        if (ctx->pc != 0x1B1ED0u) { return; }
    }
    ctx->pc = 0x1B1ED0u;
label_1b1ed0:
    // 0x1b1ed0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b1ed4:
    if (ctx->pc == 0x1B1ED4u) {
        ctx->pc = 0x1B1ED4u;
            // 0x1b1ed4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1ED8u;
        goto label_1b1ed8;
    }
    ctx->pc = 0x1B1ED0u;
    {
        const bool branch_taken_0x1b1ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1ED0u;
            // 0x1b1ed4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ed0) {
            ctx->pc = 0x1B1F08u;
            goto label_1b1f08;
        }
    }
    ctx->pc = 0x1B1ED8u;
label_1b1ed8:
    // 0x1b1ed8: 0xc06c528  jal         func_1B14A0
label_1b1edc:
    if (ctx->pc == 0x1B1EDCu) {
        ctx->pc = 0x1B1EDCu;
            // 0x1b1edc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EE0u;
        goto label_1b1ee0;
    }
    ctx->pc = 0x1B1ED8u;
    SET_GPR_U32(ctx, 31, 0x1B1EE0u);
    ctx->pc = 0x1B1EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1ED8u;
            // 0x1b1edc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14A0u;
    if (runtime->hasFunction(0x1B14A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EE0u; }
        if (ctx->pc != 0x1B1EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildEditParts__8CEditMapFi_0x1b14a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EE0u; }
        if (ctx->pc != 0x1B1EE0u) { return; }
    }
    ctx->pc = 0x1B1EE0u;
label_1b1ee0:
    // 0x1b1ee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b1ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ee4:
    // 0x1b1ee4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ee8:
    // 0x1b1ee8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1b1eec:
    // 0x1b1eec: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1b1eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b1ef0:
    // 0x1b1ef0: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x1b1ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b1ef4:
    // 0x1b1ef4: 0xc06c800  jal         func_1B2000
label_1b1ef8:
    if (ctx->pc == 0x1B1EF8u) {
        ctx->pc = 0x1B1EF8u;
            // 0x1b1ef8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EFCu;
        goto label_1b1efc;
    }
    ctx->pc = 0x1B1EF4u;
    SET_GPR_U32(ctx, 31, 0x1B1EFCu);
    ctx->pc = 0x1B1EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EF4u;
            // 0x1b1ef8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2000u;
    if (runtime->hasFunction(0x1B2000u)) {
        auto targetFn = runtime->lookupFunction(0x1B2000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EFCu; }
        if (ctx->pc != 0x1B1EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceEditParts__8CEditMapFiP13EP_PLACE_INFOPfPfPi_0x1b2000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EFCu; }
        if (ctx->pc != 0x1B1EFCu) { return; }
    }
    ctx->pc = 0x1B1EFCu;
label_1b1efc:
    // 0x1b1efc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b1f00:
    // 0x1b1f00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b1f04:
    // 0x1b1f04: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b1f04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b1f08:
    // 0x1b1f08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1f0c:
    // 0x1b1f0c: 0x26730330  addiu       $s3, $s3, 0x330
    ctx->pc = 0x1b1f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
label_1b1f10:
    // 0x1b1f10: 0x8ea20d40  lw          $v0, 0xD40($s5)
    ctx->pc = 0x1b1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3392)));
label_1b1f14:
    // 0x1b1f14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b1f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1f18:
    // 0x1b1f18: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1b1f1c:
    if (ctx->pc == 0x1B1F1Cu) {
        ctx->pc = 0x1B1F1Cu;
            // 0x1b1f1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F20u;
        goto label_1b1f20;
    }
    ctx->pc = 0x1B1F18u;
    {
        const bool branch_taken_0x1b1f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F18u;
            // 0x1b1f1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f18) {
            ctx->pc = 0x1B1E14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1e14;
        }
    }
    ctx->pc = 0x1B1F20u;
label_1b1f20:
    // 0x1b1f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1f24:
    // 0x1b1f24: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b1f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1f28:
    // 0x1b1f28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b1f28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b1f2c:
    // 0x1b1f2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b1f2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1f30:
    // 0x1b1f30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b1f30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1f34:
    // 0x1b1f34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b1f34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1f38:
    // 0x1b1f38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1f38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1f3c:
    // 0x1b1f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1f40:
    // 0x1b1f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1f44:
    // 0x1b1f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1f48:
    // 0x1b1f48: 0x3e00008  jr          $ra
label_1b1f4c:
    if (ctx->pc == 0x1B1F4Cu) {
        ctx->pc = 0x1B1F4Cu;
            // 0x1b1f4c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1B1F50u;
        goto label_fallthrough_0x1b1f48;
    }
    ctx->pc = 0x1B1F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F48u;
            // 0x1b1f4c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b1f48:
    ctx->pc = 0x1B1F50u;
}
