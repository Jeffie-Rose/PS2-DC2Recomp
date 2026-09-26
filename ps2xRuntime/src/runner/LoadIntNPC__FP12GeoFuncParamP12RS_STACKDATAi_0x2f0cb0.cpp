#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadIntNPC__FP12GeoFuncParamP12RS_STACKDATAi
// Address: 0x2f0cb0 - 0x2f0e98
void LoadIntNPC__FP12GeoFuncParamP12RS_STACKDATAi_0x2f0cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadIntNPC__FP12GeoFuncParamP12RS_STACKDATAi_0x2f0cb0");
#endif

    switch (ctx->pc) {
        case 0x2f0cb0u: goto label_2f0cb0;
        case 0x2f0cb4u: goto label_2f0cb4;
        case 0x2f0cb8u: goto label_2f0cb8;
        case 0x2f0cbcu: goto label_2f0cbc;
        case 0x2f0cc0u: goto label_2f0cc0;
        case 0x2f0cc4u: goto label_2f0cc4;
        case 0x2f0cc8u: goto label_2f0cc8;
        case 0x2f0cccu: goto label_2f0ccc;
        case 0x2f0cd0u: goto label_2f0cd0;
        case 0x2f0cd4u: goto label_2f0cd4;
        case 0x2f0cd8u: goto label_2f0cd8;
        case 0x2f0cdcu: goto label_2f0cdc;
        case 0x2f0ce0u: goto label_2f0ce0;
        case 0x2f0ce4u: goto label_2f0ce4;
        case 0x2f0ce8u: goto label_2f0ce8;
        case 0x2f0cecu: goto label_2f0cec;
        case 0x2f0cf0u: goto label_2f0cf0;
        case 0x2f0cf4u: goto label_2f0cf4;
        case 0x2f0cf8u: goto label_2f0cf8;
        case 0x2f0cfcu: goto label_2f0cfc;
        case 0x2f0d00u: goto label_2f0d00;
        case 0x2f0d04u: goto label_2f0d04;
        case 0x2f0d08u: goto label_2f0d08;
        case 0x2f0d0cu: goto label_2f0d0c;
        case 0x2f0d10u: goto label_2f0d10;
        case 0x2f0d14u: goto label_2f0d14;
        case 0x2f0d18u: goto label_2f0d18;
        case 0x2f0d1cu: goto label_2f0d1c;
        case 0x2f0d20u: goto label_2f0d20;
        case 0x2f0d24u: goto label_2f0d24;
        case 0x2f0d28u: goto label_2f0d28;
        case 0x2f0d2cu: goto label_2f0d2c;
        case 0x2f0d30u: goto label_2f0d30;
        case 0x2f0d34u: goto label_2f0d34;
        case 0x2f0d38u: goto label_2f0d38;
        case 0x2f0d3cu: goto label_2f0d3c;
        case 0x2f0d40u: goto label_2f0d40;
        case 0x2f0d44u: goto label_2f0d44;
        case 0x2f0d48u: goto label_2f0d48;
        case 0x2f0d4cu: goto label_2f0d4c;
        case 0x2f0d50u: goto label_2f0d50;
        case 0x2f0d54u: goto label_2f0d54;
        case 0x2f0d58u: goto label_2f0d58;
        case 0x2f0d5cu: goto label_2f0d5c;
        case 0x2f0d60u: goto label_2f0d60;
        case 0x2f0d64u: goto label_2f0d64;
        case 0x2f0d68u: goto label_2f0d68;
        case 0x2f0d6cu: goto label_2f0d6c;
        case 0x2f0d70u: goto label_2f0d70;
        case 0x2f0d74u: goto label_2f0d74;
        case 0x2f0d78u: goto label_2f0d78;
        case 0x2f0d7cu: goto label_2f0d7c;
        case 0x2f0d80u: goto label_2f0d80;
        case 0x2f0d84u: goto label_2f0d84;
        case 0x2f0d88u: goto label_2f0d88;
        case 0x2f0d8cu: goto label_2f0d8c;
        case 0x2f0d90u: goto label_2f0d90;
        case 0x2f0d94u: goto label_2f0d94;
        case 0x2f0d98u: goto label_2f0d98;
        case 0x2f0d9cu: goto label_2f0d9c;
        case 0x2f0da0u: goto label_2f0da0;
        case 0x2f0da4u: goto label_2f0da4;
        case 0x2f0da8u: goto label_2f0da8;
        case 0x2f0dacu: goto label_2f0dac;
        case 0x2f0db0u: goto label_2f0db0;
        case 0x2f0db4u: goto label_2f0db4;
        case 0x2f0db8u: goto label_2f0db8;
        case 0x2f0dbcu: goto label_2f0dbc;
        case 0x2f0dc0u: goto label_2f0dc0;
        case 0x2f0dc4u: goto label_2f0dc4;
        case 0x2f0dc8u: goto label_2f0dc8;
        case 0x2f0dccu: goto label_2f0dcc;
        case 0x2f0dd0u: goto label_2f0dd0;
        case 0x2f0dd4u: goto label_2f0dd4;
        case 0x2f0dd8u: goto label_2f0dd8;
        case 0x2f0ddcu: goto label_2f0ddc;
        case 0x2f0de0u: goto label_2f0de0;
        case 0x2f0de4u: goto label_2f0de4;
        case 0x2f0de8u: goto label_2f0de8;
        case 0x2f0decu: goto label_2f0dec;
        case 0x2f0df0u: goto label_2f0df0;
        case 0x2f0df4u: goto label_2f0df4;
        case 0x2f0df8u: goto label_2f0df8;
        case 0x2f0dfcu: goto label_2f0dfc;
        case 0x2f0e00u: goto label_2f0e00;
        case 0x2f0e04u: goto label_2f0e04;
        case 0x2f0e08u: goto label_2f0e08;
        case 0x2f0e0cu: goto label_2f0e0c;
        case 0x2f0e10u: goto label_2f0e10;
        case 0x2f0e14u: goto label_2f0e14;
        case 0x2f0e18u: goto label_2f0e18;
        case 0x2f0e1cu: goto label_2f0e1c;
        case 0x2f0e20u: goto label_2f0e20;
        case 0x2f0e24u: goto label_2f0e24;
        case 0x2f0e28u: goto label_2f0e28;
        case 0x2f0e2cu: goto label_2f0e2c;
        case 0x2f0e30u: goto label_2f0e30;
        case 0x2f0e34u: goto label_2f0e34;
        case 0x2f0e38u: goto label_2f0e38;
        case 0x2f0e3cu: goto label_2f0e3c;
        case 0x2f0e40u: goto label_2f0e40;
        case 0x2f0e44u: goto label_2f0e44;
        case 0x2f0e48u: goto label_2f0e48;
        case 0x2f0e4cu: goto label_2f0e4c;
        case 0x2f0e50u: goto label_2f0e50;
        case 0x2f0e54u: goto label_2f0e54;
        case 0x2f0e58u: goto label_2f0e58;
        case 0x2f0e5cu: goto label_2f0e5c;
        case 0x2f0e60u: goto label_2f0e60;
        case 0x2f0e64u: goto label_2f0e64;
        case 0x2f0e68u: goto label_2f0e68;
        case 0x2f0e6cu: goto label_2f0e6c;
        case 0x2f0e70u: goto label_2f0e70;
        case 0x2f0e74u: goto label_2f0e74;
        case 0x2f0e78u: goto label_2f0e78;
        case 0x2f0e7cu: goto label_2f0e7c;
        case 0x2f0e80u: goto label_2f0e80;
        case 0x2f0e84u: goto label_2f0e84;
        case 0x2f0e88u: goto label_2f0e88;
        case 0x2f0e8cu: goto label_2f0e8c;
        case 0x2f0e90u: goto label_2f0e90;
        case 0x2f0e94u: goto label_2f0e94;
        default: break;
    }

    ctx->pc = 0x2f0cb0u;

label_2f0cb0:
    // 0x2f0cb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f0cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2f0cb4:
    // 0x2f0cb4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f0cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f0cb8:
    // 0x2f0cb8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2f0cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2f0cbc:
    // 0x2f0cbc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f0cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f0cc0:
    // 0x2f0cc0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f0cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f0cc4:
    // 0x2f0cc4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f0cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f0cc8:
    // 0x2f0cc8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f0cc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ccc:
    // 0x2f0ccc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f0cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f0cd0:
    // 0x2f0cd0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2f0cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f0cd4:
    // 0x2f0cd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f0cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f0cd8:
    // 0x2f0cd8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2f0cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0cdc:
    // 0x2f0cdc: 0x8e112f5c  lw          $s1, 0x2F5C($s0)
    ctx->pc = 0x2f0cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12124)));
label_2f0ce0:
    // 0x2f0ce0: 0x8e14003c  lw          $s4, 0x3C($s0)
    ctx->pc = 0x2f0ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2f0ce4:
    // 0x2f0ce4: 0xc0c65f4  jal         func_3197D0
label_2f0ce8:
    if (ctx->pc == 0x2F0CE8u) {
        ctx->pc = 0x2F0CE8u;
            // 0x2f0ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0CECu;
        goto label_2f0cec;
    }
    ctx->pc = 0x2F0CE4u;
    SET_GPR_U32(ctx, 31, 0x2F0CECu);
    ctx->pc = 0x2F0CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0CE4u;
            // 0x2f0ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3197D0u;
    if (runtime->hasFunction(0x3197D0u)) {
        auto targetFn = runtime->lookupFunction(0x3197D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0CECu; }
        if (ctx->pc != 0x2F0CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerModelName__FiPc_0x3197d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0CECu; }
        if (ctx->pc != 0x2F0CECu) { return; }
    }
    ctx->pc = 0x2F0CECu;
label_2f0cec:
    // 0x2f0cec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f0cf0:
    if (ctx->pc == 0x2F0CF0u) {
        ctx->pc = 0x2F0CF0u;
            // 0x2f0cf0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2F0CF4u;
        goto label_2f0cf4;
    }
    ctx->pc = 0x2F0CECu;
    {
        const bool branch_taken_0x2f0cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0CECu;
            // 0x2f0cf0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0cec) {
            ctx->pc = 0x2F0CFCu;
            goto label_2f0cfc;
        }
    }
    ctx->pc = 0x2F0CF4u;
label_2f0cf4:
    // 0x2f0cf4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2f0cf8:
    if (ctx->pc == 0x2F0CF8u) {
        ctx->pc = 0x2F0CF8u;
            // 0x2f0cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0CFCu;
        goto label_2f0cfc;
    }
    ctx->pc = 0x2F0CF4u;
    {
        const bool branch_taken_0x2f0cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0CF4u;
            // 0x2f0cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0cf4) {
            ctx->pc = 0x2F0E74u;
            goto label_2f0e74;
        }
    }
    ctx->pc = 0x2F0CFCu;
label_2f0cfc:
    // 0x2f0cfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f0cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d00:
    // 0x2f0d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d04:
    // 0x2f0d04: 0xc0524dc  jal         func_149370
label_2f0d08:
    if (ctx->pc == 0x2F0D08u) {
        ctx->pc = 0x2F0D08u;
            // 0x2f0d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D0Cu;
        goto label_2f0d0c;
    }
    ctx->pc = 0x2F0D04u;
    SET_GPR_U32(ctx, 31, 0x2F0D0Cu);
    ctx->pc = 0x2F0D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D04u;
            // 0x2f0d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D0Cu; }
        if (ctx->pc != 0x2F0D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D0Cu; }
        if (ctx->pc != 0x2F0D0Cu) { return; }
    }
    ctx->pc = 0x2F0D0Cu;
label_2f0d0c:
    // 0x2f0d0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f0d10:
    if (ctx->pc == 0x2F0D10u) {
        ctx->pc = 0x2F0D10u;
            // 0x2f0d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D14u;
        goto label_2f0d14;
    }
    ctx->pc = 0x2F0D0Cu;
    {
        const bool branch_taken_0x2f0d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D0Cu;
            // 0x2f0d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d0c) {
            ctx->pc = 0x2F0D1Cu;
            goto label_2f0d1c;
        }
    }
    ctx->pc = 0x2F0D14u;
label_2f0d14:
    // 0x2f0d14: 0x10000057  b           . + 4 + (0x57 << 2)
label_2f0d18:
    if (ctx->pc == 0x2F0D18u) {
        ctx->pc = 0x2F0D18u;
            // 0x2f0d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D1Cu;
        goto label_2f0d1c;
    }
    ctx->pc = 0x2F0D14u;
    {
        const bool branch_taken_0x2f0d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D14u;
            // 0x2f0d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d14) {
            ctx->pc = 0x2F0E74u;
            goto label_2f0e74;
        }
    }
    ctx->pc = 0x2F0D1Cu;
label_2f0d1c:
    // 0x2f0d1c: 0xc0a0c9c  jal         func_283270
label_2f0d20:
    if (ctx->pc == 0x2F0D20u) {
        ctx->pc = 0x2F0D20u;
            // 0x2f0d20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F0D24u;
        goto label_2f0d24;
    }
    ctx->pc = 0x2F0D1Cu;
    SET_GPR_U32(ctx, 31, 0x2F0D24u);
    ctx->pc = 0x2F0D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D1Cu;
            // 0x2f0d20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D24u; }
        if (ctx->pc != 0x2F0D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D24u; }
        if (ctx->pc != 0x2F0D24u) { return; }
    }
    ctx->pc = 0x2F0D24u;
label_2f0d24:
    // 0x2f0d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d28:
    // 0x2f0d28: 0xc0a0c64  jal         func_283190
label_2f0d2c:
    if (ctx->pc == 0x2F0D2Cu) {
        ctx->pc = 0x2F0D2Cu;
            // 0x2f0d2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F0D30u;
        goto label_2f0d30;
    }
    ctx->pc = 0x2F0D28u;
    SET_GPR_U32(ctx, 31, 0x2F0D30u);
    ctx->pc = 0x2F0D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D28u;
            // 0x2f0d2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D30u; }
        if (ctx->pc != 0x2F0D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D30u; }
        if (ctx->pc != 0x2F0D30u) { return; }
    }
    ctx->pc = 0x2F0D30u;
label_2f0d30:
    // 0x2f0d30: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2f0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2f0d34:
    // 0x2f0d34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f0d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d38:
    // 0x2f0d38: 0x3401c800  ori         $at, $zero, 0xC800
    ctx->pc = 0x2f0d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51200);
label_2f0d3c:
    // 0x2f0d3c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2f0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2f0d40:
    // 0x2f0d40: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f0d44:
    // 0x2f0d44: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x2f0d44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2f0d48:
    // 0x2f0d48: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2f0d4c:
    if (ctx->pc == 0x2F0D4Cu) {
        ctx->pc = 0x2F0D4Cu;
            // 0x2f0d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D50u;
        goto label_2f0d50;
    }
    ctx->pc = 0x2F0D48u;
    {
        const bool branch_taken_0x2f0d48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D48u;
            // 0x2f0d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d48) {
            ctx->pc = 0x2F0D64u;
            goto label_2f0d64;
        }
    }
    ctx->pc = 0x2F0D50u;
label_2f0d50:
    // 0x2f0d50: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2f0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2f0d54:
    // 0x2f0d54: 0xc04a0d2  jal         func_128348
label_2f0d58:
    if (ctx->pc == 0x2F0D58u) {
        ctx->pc = 0x2F0D58u;
            // 0x2f0d58: 0x24841650  addiu       $a0, $a0, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5712));
        ctx->pc = 0x2F0D5Cu;
        goto label_2f0d5c;
    }
    ctx->pc = 0x2F0D54u;
    SET_GPR_U32(ctx, 31, 0x2F0D5Cu);
    ctx->pc = 0x2F0D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D54u;
            // 0x2f0d58: 0x24841650  addiu       $a0, $a0, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D5Cu; }
        if (ctx->pc != 0x2F0D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D5Cu; }
        if (ctx->pc != 0x2F0D5Cu) { return; }
    }
    ctx->pc = 0x2F0D5Cu;
label_2f0d5c:
    // 0x2f0d5c: 0x10000045  b           . + 4 + (0x45 << 2)
label_2f0d60:
    if (ctx->pc == 0x2F0D60u) {
        ctx->pc = 0x2F0D60u;
            // 0x2f0d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D64u;
        goto label_2f0d64;
    }
    ctx->pc = 0x2F0D5Cu;
    {
        const bool branch_taken_0x2f0d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D5Cu;
            // 0x2f0d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d5c) {
            ctx->pc = 0x2F0E74u;
            goto label_2f0e74;
        }
    }
    ctx->pc = 0x2F0D64u;
label_2f0d64:
    // 0x2f0d64: 0xc062208  jal         func_188820
label_2f0d68:
    if (ctx->pc == 0x2F0D68u) {
        ctx->pc = 0x2F0D6Cu;
        goto label_2f0d6c;
    }
    ctx->pc = 0x2F0D64u;
    SET_GPR_U32(ctx, 31, 0x2F0D6Cu);
    ctx->pc = 0x188820u;
    if (runtime->hasFunction(0x188820u)) {
        auto targetFn = runtime->lookupFunction(0x188820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D6Cu; }
        if (ctx->pc != 0x2F0D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rsGetStackInt__FP12RS_STACKDATA_0x188820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D6Cu; }
        if (ctx->pc != 0x2F0D6Cu) { return; }
    }
    ctx->pc = 0x2F0D6Cu;
label_2f0d6c:
    // 0x2f0d6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f0d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d70:
    // 0x2f0d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d74:
    // 0x2f0d74: 0xc0a1240  jal         func_284900
label_2f0d78:
    if (ctx->pc == 0x2F0D78u) {
        ctx->pc = 0x2F0D78u;
            // 0x2f0d78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D7Cu;
        goto label_2f0d7c;
    }
    ctx->pc = 0x2F0D74u;
    SET_GPR_U32(ctx, 31, 0x2F0D7Cu);
    ctx->pc = 0x2F0D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D74u;
            // 0x2f0d78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D7Cu; }
        if (ctx->pc != 0x2F0D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D7Cu; }
        if (ctx->pc != 0x2F0D7Cu) { return; }
    }
    ctx->pc = 0x2F0D7Cu;
label_2f0d7c:
    // 0x2f0d7c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f0d7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d80:
    // 0x2f0d80: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2f0d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2f0d84:
    // 0x2f0d84: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2f0d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2f0d88:
    // 0x2f0d88: 0xc04b950  jal         func_12E540
label_2f0d8c:
    if (ctx->pc == 0x2F0D8Cu) {
        ctx->pc = 0x2F0D8Cu;
            // 0x2f0d8c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D90u;
        goto label_2f0d90;
    }
    ctx->pc = 0x2F0D88u;
    SET_GPR_U32(ctx, 31, 0x2F0D90u);
    ctx->pc = 0x2F0D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0D88u;
            // 0x2f0d8c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D90u; }
        if (ctx->pc != 0x2F0D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0D90u; }
        if (ctx->pc != 0x2F0D90u) { return; }
    }
    ctx->pc = 0x2F0D90u;
label_2f0d90:
    // 0x2f0d90: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2f0d90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2f0d94:
    // 0x2f0d94: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f0d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d98:
    // 0x2f0d98: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x2f0d98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d9c:
    // 0x2f0d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0da0:
    // 0x2f0da0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f0da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0da4:
    // 0x2f0da4: 0x24e71670  addiu       $a3, $a3, 0x1670
    ctx->pc = 0x2f0da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5744));
label_2f0da8:
    // 0x2f0da8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f0da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0dac:
    // 0x2f0dac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2f0dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0db0:
    // 0x2f0db0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2f0db0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0db4:
    // 0x2f0db4: 0xc0a1458  jal         func_285160
label_2f0db8:
    if (ctx->pc == 0x2F0DB8u) {
        ctx->pc = 0x2F0DB8u;
            // 0x2f0db8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DBCu;
        goto label_2f0dbc;
    }
    ctx->pc = 0x2F0DB4u;
    SET_GPR_U32(ctx, 31, 0x2F0DBCu);
    ctx->pc = 0x2F0DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DB4u;
            // 0x2f0db8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DBCu; }
        if (ctx->pc != 0x2F0DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DBCu; }
        if (ctx->pc != 0x2F0DBCu) { return; }
    }
    ctx->pc = 0x2F0DBCu;
label_2f0dbc:
    // 0x2f0dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0dc0:
    // 0x2f0dc0: 0xc0a0ed8  jal         func_283B60
label_2f0dc4:
    if (ctx->pc == 0x2F0DC4u) {
        ctx->pc = 0x2F0DC4u;
            // 0x2f0dc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DC8u;
        goto label_2f0dc8;
    }
    ctx->pc = 0x2F0DC0u;
    SET_GPR_U32(ctx, 31, 0x2F0DC8u);
    ctx->pc = 0x2F0DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DC0u;
            // 0x2f0dc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DC8u; }
        if (ctx->pc != 0x2F0DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DC8u; }
        if (ctx->pc != 0x2F0DC8u) { return; }
    }
    ctx->pc = 0x2F0DC8u;
label_2f0dc8:
    // 0x2f0dc8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f0dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0dcc:
    // 0x2f0dcc: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_2f0dd0:
    if (ctx->pc == 0x2F0DD0u) {
        ctx->pc = 0x2F0DD0u;
            // 0x2f0dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DD4u;
        goto label_2f0dd4;
    }
    ctx->pc = 0x2F0DCCu;
    {
        const bool branch_taken_0x2f0dcc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DCCu;
            // 0x2f0dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0dcc) {
            ctx->pc = 0x2F0DDCu;
            goto label_2f0ddc;
        }
    }
    ctx->pc = 0x2F0DD4u;
label_2f0dd4:
    // 0x2f0dd4: 0x10000028  b           . + 4 + (0x28 << 2)
label_2f0dd8:
    if (ctx->pc == 0x2F0DD8u) {
        ctx->pc = 0x2F0DD8u;
            // 0x2f0dd8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2F0DDCu;
        goto label_2f0ddc;
    }
    ctx->pc = 0x2F0DD4u;
    {
        const bool branch_taken_0x2f0dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DD4u;
            // 0x2f0dd8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0dd4) {
            ctx->pc = 0x2F0E78u;
            goto label_2f0e78;
        }
    }
    ctx->pc = 0x2F0DDCu;
label_2f0ddc:
    // 0x2f0ddc: 0x8e052e5c  lw          $a1, 0x2E5C($s0)
    ctx->pc = 0x2f0ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
label_2f0de0:
    // 0x2f0de0: 0xc0a0f58  jal         func_283D60
label_2f0de4:
    if (ctx->pc == 0x2F0DE4u) {
        ctx->pc = 0x2F0DE4u;
            // 0x2f0de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DE8u;
        goto label_2f0de8;
    }
    ctx->pc = 0x2F0DE0u;
    SET_GPR_U32(ctx, 31, 0x2F0DE8u);
    ctx->pc = 0x2F0DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DE0u;
            // 0x2f0de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DE8u; }
        if (ctx->pc != 0x2F0DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0DE8u; }
        if (ctx->pc != 0x2F0DE8u) { return; }
    }
    ctx->pc = 0x2F0DE8u;
label_2f0de8:
    // 0x2f0de8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2f0dec:
    if (ctx->pc == 0x2F0DECu) {
        ctx->pc = 0x2F0DECu;
            // 0x2f0dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DF0u;
        goto label_2f0df0;
    }
    ctx->pc = 0x2F0DE8u;
    {
        const bool branch_taken_0x2f0de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DE8u;
            // 0x2f0dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0de8) {
            ctx->pc = 0x2F0E50u;
            goto label_2f0e50;
        }
    }
    ctx->pc = 0x2F0DF0u;
label_2f0df0:
    // 0x2f0df0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f0df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f0df4:
    // 0x2f0df4: 0x24440cb0  addiu       $a0, $v0, 0xCB0
    ctx->pc = 0x2f0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
label_2f0df8:
    // 0x2f0df8: 0xc0a763c  jal         func_29D8F0
label_2f0dfc:
    if (ctx->pc == 0x2F0DFCu) {
        ctx->pc = 0x2F0DFCu;
            // 0x2f0dfc: 0x24a51680  addiu       $a1, $a1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
        ctx->pc = 0x2F0E00u;
        goto label_2f0e00;
    }
    ctx->pc = 0x2F0DF8u;
    SET_GPR_U32(ctx, 31, 0x2F0E00u);
    ctx->pc = 0x2F0DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0DF8u;
            // 0x2f0dfc: 0x24a51680  addiu       $a1, $a1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E00u; }
        if (ctx->pc != 0x2F0E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E00u; }
        if (ctx->pc != 0x2F0E00u) { return; }
    }
    ctx->pc = 0x2F0E00u;
label_2f0e00:
    // 0x2f0e00: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2f0e04:
    if (ctx->pc == 0x2F0E04u) {
        ctx->pc = 0x2F0E08u;
        goto label_2f0e08;
    }
    ctx->pc = 0x2F0E00u;
    {
        const bool branch_taken_0x2f0e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0e00) {
            ctx->pc = 0x2F0E4Cu;
            goto label_2f0e4c;
        }
    }
    ctx->pc = 0x2F0E08u;
label_2f0e08:
    // 0x2f0e08: 0x78460180  lq          $a2, 0x180($v0)
    ctx->pc = 0x2f0e08u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 384)));
label_2f0e0c:
    // 0x2f0e0c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2f0e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f0e10:
    // 0x2f0e10: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2f0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f0e14:
    // 0x2f0e14: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2f0e14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_2f0e18:
    // 0x2f0e18: 0x78420190  lq          $v0, 0x190($v0)
    ctx->pc = 0x2f0e18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 400)));
label_2f0e1c:
    // 0x2f0e1c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f0e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2f0e20:
    // 0x2f0e20: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x2f0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_2f0e24:
    // 0x2f0e24: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2f0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_2f0e28:
    // 0x2f0e28: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2f0e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f0e2c:
    // 0x2f0e2c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f0e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f0e30:
    // 0x2f0e30: 0x320f809  jalr        $t9
label_2f0e34:
    if (ctx->pc == 0x2F0E34u) {
        ctx->pc = 0x2F0E34u;
            // 0x2f0e34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E38u;
        goto label_2f0e38;
    }
    ctx->pc = 0x2F0E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0E38u);
        ctx->pc = 0x2F0E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E30u;
            // 0x2f0e34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E38u; }
            if (ctx->pc != 0x2F0E38u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0E38u;
label_2f0e38:
    // 0x2f0e38: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2f0e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f0e3c:
    // 0x2f0e3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e40:
    // 0x2f0e40: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2f0e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2f0e44:
    // 0x2f0e44: 0x320f809  jalr        $t9
label_2f0e48:
    if (ctx->pc == 0x2F0E48u) {
        ctx->pc = 0x2F0E48u;
            // 0x2f0e48: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2F0E4Cu;
        goto label_2f0e4c;
    }
    ctx->pc = 0x2F0E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0E4Cu);
        ctx->pc = 0x2F0E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E44u;
            // 0x2f0e48: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0E4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E4Cu; }
            if (ctx->pc != 0x2F0E4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F0E4Cu;
label_2f0e4c:
    // 0x2f0e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e50:
    // 0x2f0e50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f0e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e54:
    // 0x2f0e54: 0xc0a0ec0  jal         func_283B00
label_2f0e58:
    if (ctx->pc == 0x2F0E58u) {
        ctx->pc = 0x2F0E58u;
            // 0x2f0e58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E5Cu;
        goto label_2f0e5c;
    }
    ctx->pc = 0x2F0E54u;
    SET_GPR_U32(ctx, 31, 0x2F0E5Cu);
    ctx->pc = 0x2F0E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E54u;
            // 0x2f0e58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B00u;
    if (runtime->hasFunction(0x283B00u)) {
        auto targetFn = runtime->lookupFunction(0x283B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E5Cu; }
        if (ctx->pc != 0x2F0E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaNo__6CSceneFii_0x283b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E5Cu; }
        if (ctx->pc != 0x2F0E5Cu) { return; }
    }
    ctx->pc = 0x2F0E5Cu;
label_2f0e5c:
    // 0x2f0e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e60:
    // 0x2f0e60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f0e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e64:
    // 0x2f0e64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f0e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e68:
    // 0x2f0e68: 0xc0b2914  jal         func_2CA450
label_2f0e6c:
    if (ctx->pc == 0x2F0E6Cu) {
        ctx->pc = 0x2F0E6Cu;
            // 0x2f0e6c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E70u;
        goto label_2f0e70;
    }
    ctx->pc = 0x2F0E68u;
    SET_GPR_U32(ctx, 31, 0x2F0E70u);
    ctx->pc = 0x2F0E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E68u;
            // 0x2f0e6c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA450u;
    if (runtime->hasFunction(0x2CA450u)) {
        auto targetFn = runtime->lookupFunction(0x2CA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E70u; }
        if (ctx->pc != 0x2F0E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterVillager__6CSceneFiiP9mgCMemory_0x2ca450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E70u; }
        if (ctx->pc != 0x2F0E70u) { return; }
    }
    ctx->pc = 0x2F0E70u;
label_2f0e70:
    // 0x2f0e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0e74:
    // 0x2f0e74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f0e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f0e78:
    // 0x2f0e78: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f0e78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f0e7c:
    // 0x2f0e7c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f0e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f0e80:
    // 0x2f0e80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f0e80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f0e84:
    // 0x2f0e84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f0e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0e88:
    // 0x2f0e88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f0e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0e8c:
    // 0x2f0e8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f0e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0e90:
    // 0x2f0e90: 0x3e00008  jr          $ra
label_2f0e94:
    if (ctx->pc == 0x2F0E94u) {
        ctx->pc = 0x2F0E94u;
            // 0x2f0e94: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2F0E98u;
        goto label_fallthrough_0x2f0e90;
    }
    ctx->pc = 0x2F0E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E90u;
            // 0x2f0e94: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f0e90:
    ctx->pc = 0x2F0E98u;
}
