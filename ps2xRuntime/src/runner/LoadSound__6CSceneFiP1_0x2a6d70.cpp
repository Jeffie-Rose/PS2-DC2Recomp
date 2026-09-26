#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSound__6CSceneFiP1
// Address: 0x2a6d70 - 0x2a6f88
void LoadSound__6CSceneFiP1_0x2a6d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSound__6CSceneFiP1_0x2a6d70");
#endif

    switch (ctx->pc) {
        case 0x2a6dccu: goto label_2a6dcc;
        case 0x2a6dd8u: goto label_2a6dd8;
        case 0x2a6e00u: goto label_2a6e00;
        case 0x2a6e18u: goto label_2a6e18;
        case 0x2a6e2cu: goto label_2a6e2c;
        case 0x2a6e44u: goto label_2a6e44;
        case 0x2a6e58u: goto label_2a6e58;
        case 0x2a6e70u: goto label_2a6e70;
        case 0x2a6e90u: goto label_2a6e90;
        case 0x2a6ea4u: goto label_2a6ea4;
        case 0x2a6ef4u: goto label_2a6ef4;
        case 0x2a6efcu: goto label_2a6efc;
        case 0x2a6f14u: goto label_2a6f14;
        case 0x2a6f38u: goto label_2a6f38;
        case 0x2a6f4cu: goto label_2a6f4c;
        case 0x2a6f60u: goto label_2a6f60;
        default: break;
    }

    ctx->pc = 0x2a6d70u;

    // 0x2a6d70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a6d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a6d74: 0x34029070  ori         $v0, $zero, 0x9070
    ctx->pc = 0x2a6d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36976);
    // 0x2a6d78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a6d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a6d7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a6d80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a6d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a6d84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a6d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a6d88: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a6d88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a6d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a6d90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a6d90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a6d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a6d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a6d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6da0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6da4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6DA4u;
    {
        const bool branch_taken_0x2a6da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DA4u;
            // 0x2a6da8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6da4) {
            ctx->pc = 0x2A6DC0u;
            goto label_2a6dc0;
        }
    }
    ctx->pc = 0x2A6DACu;
    // 0x2a6dac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a6db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6db4: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a6db4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a6db8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2A6DB8u;
    {
        const bool branch_taken_0x2a6db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DB8u;
            // 0x2a6dbc: 0xac209070  sw          $zero, -0x6F90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6db8) {
            ctx->pc = 0x2A6F64u;
            goto label_2a6f64;
        }
    }
    ctx->pc = 0x2A6DC0u;
label_2a6dc0:
    // 0x2a6dc0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a6dc4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2A6DC4u;
    SET_GPR_U32(ctx, 31, 0x2A6DCCu);
    ctx->pc = 0x2A6DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DC4u;
            // 0x2a6dc8: 0x2484e5d8  addiu       $a0, $a0, -0x1A28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DCCu; }
        if (ctx->pc != 0x2A6DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DCCu; }
        if (ctx->pc != 0x2A6DCCu) { return; }
    }
    ctx->pc = 0x2A6DCCu;
label_2a6dcc:
    // 0x2a6dcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a6dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6dd0: 0xc0a9b0c  jal         func_2A6C30
    ctx->pc = 0x2A6DD0u;
    SET_GPR_U32(ctx, 31, 0x2A6DD8u);
    ctx->pc = 0x2A6DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DD0u;
            // 0x2a6dd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C30u;
    if (runtime->hasFunction(0x2A6C30u)) {
        auto targetFn = runtime->lookupFunction(0x2A6C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DD8u; }
        if (ctx->pc != 0x2A6DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSndDataID__6CSceneFi_0x2a6c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DD8u; }
        if (ctx->pc != 0x2A6DD8u) { return; }
    }
    ctx->pc = 0x2A6DD8u;
label_2a6dd8:
    // 0x2a6dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ddc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6DDCu;
    {
        const bool branch_taken_0x2a6ddc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DDCu;
            // 0x2a6de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ddc) {
            ctx->pc = 0x2A6DECu;
            goto label_2a6dec;
        }
    }
    ctx->pc = 0x2A6DE4u;
    // 0x2a6de4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2A6DE4u;
    {
        const bool branch_taken_0x2a6de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DE4u;
            // 0x2a6de8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6de4) {
            ctx->pc = 0x2A6F68u;
            goto label_2a6f68;
        }
    }
    ctx->pc = 0x2A6DECu;
label_2a6dec:
    // 0x2a6dec: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x2a6decu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a6df0: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6DF0u;
    {
        const bool branch_taken_0x2a6df0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A6DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DF0u;
            // 0x2a6df4: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6df0) {
            ctx->pc = 0x2A6E08u;
            goto label_2a6e08;
        }
    }
    ctx->pc = 0x2A6DF8u;
    // 0x2a6df8: 0xc0a97d8  jal         func_2A5F60
    ctx->pc = 0x2A6DF8u;
    SET_GPR_U32(ctx, 31, 0x2A6E00u);
    ctx->pc = 0x2A6DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DF8u;
            // 0x2a6dfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5F60u;
    if (runtime->hasFunction(0x2A5F60u)) {
        auto targetFn = runtime->lookupFunction(0x2A5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E00u; }
        if (ctx->pc != 0x2A6E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeBas__6CSceneFv_0x2a5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E00u; }
        if (ctx->pc != 0x2A6E00u) { return; }
    }
    ctx->pc = 0x2A6E00u;
label_2a6e00:
    // 0x2a6e00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6E00u;
    {
        const bool branch_taken_0x2a6e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E00u;
            // 0x2a6e04: 0x86050006  lh          $a1, 0x6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e00) {
            ctx->pc = 0x2A6E1Cu;
            goto label_2a6e1c;
        }
    }
    ctx->pc = 0x2A6E08u;
label_2a6e08:
    // 0x2a6e08: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6E08u;
    {
        const bool branch_taken_0x2a6e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E08u;
            // 0x2a6e0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e08) {
            ctx->pc = 0x2A6E18u;
            goto label_2a6e18;
        }
    }
    ctx->pc = 0x2A6E10u;
    // 0x2a6e10: 0xc0a9c80  jal         func_2A7200
    ctx->pc = 0x2A6E10u;
    SET_GPR_U32(ctx, 31, 0x2A6E18u);
    ctx->pc = 0x2A6E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E10u;
            // 0x2a6e14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7200u;
    if (runtime->hasFunction(0x2A7200u)) {
        auto targetFn = runtime->lookupFunction(0x2A7200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E18u; }
        if (ctx->pc != 0x2A6E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeBase__6CSceneFiP1_0x2a7200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E18u; }
        if (ctx->pc != 0x2A6E18u) { return; }
    }
    ctx->pc = 0x2A6E18u;
label_2a6e18:
    // 0x2a6e18: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x2a6e18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_2a6e1c:
    // 0x2a6e1c: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6E1Cu;
    {
        const bool branch_taken_0x2a6e1c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A6E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E1Cu;
            // 0x2a6e20: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e1c) {
            ctx->pc = 0x2A6E34u;
            goto label_2a6e34;
        }
    }
    ctx->pc = 0x2A6E24u;
    // 0x2a6e24: 0xc0a97b8  jal         func_2A5EE0
    ctx->pc = 0x2A6E24u;
    SET_GPR_U32(ctx, 31, 0x2A6E2Cu);
    ctx->pc = 0x2A6E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E24u;
            // 0x2a6e28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5EE0u;
    if (runtime->hasFunction(0x2A5EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2A5EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E2Cu; }
        if (ctx->pc != 0x2A6E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeBattle__6CSceneFv_0x2a5ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E2Cu; }
        if (ctx->pc != 0x2A6E2Cu) { return; }
    }
    ctx->pc = 0x2A6E2Cu;
label_2a6e2c:
    // 0x2a6e2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6E2Cu;
    {
        const bool branch_taken_0x2a6e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E2Cu;
            // 0x2a6e30: 0x86050008  lh          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e2c) {
            ctx->pc = 0x2A6E48u;
            goto label_2a6e48;
        }
    }
    ctx->pc = 0x2A6E34u;
label_2a6e34:
    // 0x2a6e34: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6E34u;
    {
        const bool branch_taken_0x2a6e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E34u;
            // 0x2a6e38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e34) {
            ctx->pc = 0x2A6E44u;
            goto label_2a6e44;
        }
    }
    ctx->pc = 0x2A6E3Cu;
    // 0x2a6e3c: 0xc0a9c5c  jal         func_2A7170
    ctx->pc = 0x2A6E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A6E44u);
    ctx->pc = 0x2A6E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E3Cu;
            // 0x2a6e40: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7170u;
    if (runtime->hasFunction(0x2A7170u)) {
        auto targetFn = runtime->lookupFunction(0x2A7170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E44u; }
        if (ctx->pc != 0x2A6E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeBattle__6CSceneFiP1_0x2a7170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E44u; }
        if (ctx->pc != 0x2A6E44u) { return; }
    }
    ctx->pc = 0x2A6E44u;
label_2a6e44:
    // 0x2a6e44: 0x86050008  lh          $a1, 0x8($s0)
    ctx->pc = 0x2a6e44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2a6e48:
    // 0x2a6e48: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6E48u;
    {
        const bool branch_taken_0x2a6e48 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A6E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E48u;
            // 0x2a6e4c: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e48) {
            ctx->pc = 0x2A6E60u;
            goto label_2a6e60;
        }
    }
    ctx->pc = 0x2A6E50u;
    // 0x2a6e50: 0xc0a9784  jal         func_2A5E10
    ctx->pc = 0x2A6E50u;
    SET_GPR_U32(ctx, 31, 0x2A6E58u);
    ctx->pc = 0x2A6E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E50u;
            // 0x2a6e54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5E10u;
    if (runtime->hasFunction(0x2A5E10u)) {
        auto targetFn = runtime->lookupFunction(0x2A5E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E58u; }
        if (ctx->pc != 0x2A6E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeEnv__6CSceneFv_0x2a5e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E58u; }
        if (ctx->pc != 0x2A6E58u) { return; }
    }
    ctx->pc = 0x2A6E58u;
label_2a6e58:
    // 0x2a6e58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6E58u;
    {
        const bool branch_taken_0x2a6e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E58u;
            // 0x2a6e5c: 0x8603000e  lh          $v1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e58) {
            ctx->pc = 0x2A6E74u;
            goto label_2a6e74;
        }
    }
    ctx->pc = 0x2A6E60u;
label_2a6e60:
    // 0x2a6e60: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6E60u;
    {
        const bool branch_taken_0x2a6e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E60u;
            // 0x2a6e64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e60) {
            ctx->pc = 0x2A6E70u;
            goto label_2a6e70;
        }
    }
    ctx->pc = 0x2A6E68u;
    // 0x2a6e68: 0xc0a9c38  jal         func_2A70E0
    ctx->pc = 0x2A6E68u;
    SET_GPR_U32(ctx, 31, 0x2A6E70u);
    ctx->pc = 0x2A6E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E68u;
            // 0x2a6e6c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A70E0u;
    if (runtime->hasFunction(0x2A70E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A70E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E70u; }
        if (ctx->pc != 0x2A6E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeEnv__6CSceneFiP1_0x2a70e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E70u; }
        if (ctx->pc != 0x2A6E70u) { return; }
    }
    ctx->pc = 0x2A6E70u;
label_2a6e70:
    // 0x2a6e70: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x2a6e70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_2a6e74:
    // 0x2a6e74: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x2a6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x2a6e78: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A6E78u;
    {
        const bool branch_taken_0x2a6e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a6e78) {
            ctx->pc = 0x2A6F28u;
            goto label_2a6f28;
        }
    }
    ctx->pc = 0x2A6E80u;
    // 0x2a6e80: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6E80u;
    {
        const bool branch_taken_0x2a6e80 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2A6E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E80u;
            // 0x2a6e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e80) {
            ctx->pc = 0x2A6E98u;
            goto label_2a6e98;
        }
    }
    ctx->pc = 0x2A6E88u;
    // 0x2a6e88: 0xc0a9714  jal         func_2A5C50
    ctx->pc = 0x2A6E88u;
    SET_GPR_U32(ctx, 31, 0x2A6E90u);
    ctx->pc = 0x2A6E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E88u;
            // 0x2a6e8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C50u;
    if (runtime->hasFunction(0x2A5C50u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E90u; }
        if (ctx->pc != 0x2A6E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeSrc__6CSceneFv_0x2a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6E90u; }
        if (ctx->pc != 0x2A6E90u) { return; }
    }
    ctx->pc = 0x2A6E90u;
label_2a6e90:
    // 0x2a6e90: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2A6E90u;
    {
        const bool branch_taken_0x2a6e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6e90) {
            ctx->pc = 0x2A6F28u;
            goto label_2a6f28;
        }
    }
    ctx->pc = 0x2A6E98u;
label_2a6e98:
    // 0x2a6e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a6ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6ea4:
    // 0x2a6ea4: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x2a6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2a6ea8: 0x8443000e  lh          $v1, 0xE($v0)
    ctx->pc = 0x2a6ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2a6eac: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6EACu;
    {
        const bool branch_taken_0x2a6eac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A6EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6EACu;
            // 0x2a6eb0: 0x2a71021  addu        $v0, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6eac) {
            ctx->pc = 0x2A6ECCu;
            goto label_2a6ecc;
        }
    }
    ctx->pc = 0x2A6EB4u;
    // 0x2a6eb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6eb8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a6eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a6ebc: 0x8c229984  lw          $v0, -0x667C($at)
    ctx->pc = 0x2a6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941060)));
    // 0x2a6ec0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6EC0u;
    {
        const bool branch_taken_0x2a6ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a6ec0) {
            ctx->pc = 0x2A6ECCu;
            goto label_2a6ecc;
        }
    }
    ctx->pc = 0x2A6EC8u;
    // 0x2a6ec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6ecc:
    // 0x2a6ecc: 0x0  nop
    ctx->pc = 0x2a6eccu;
    // NOP
    // 0x2a6ed0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a6ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a6ed4: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2a6ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a6ed8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2a6ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2a6edc: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A6EDCu;
    {
        const bool branch_taken_0x2a6edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6EDCu;
            // 0x2a6ee0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6edc) {
            ctx->pc = 0x2A6EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a6ea4;
        }
    }
    ctx->pc = 0x2A6EE4u;
    // 0x2a6ee4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A6EE4u;
    {
        const bool branch_taken_0x2a6ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6EE4u;
            // 0x2a6ee8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ee4) {
            ctx->pc = 0x2A6F28u;
            goto label_2a6f28;
        }
    }
    ctx->pc = 0x2A6EECu;
    // 0x2a6eec: 0xc0a9714  jal         func_2A5C50
    ctx->pc = 0x2A6EECu;
    SET_GPR_U32(ctx, 31, 0x2A6EF4u);
    ctx->pc = 0x2A5C50u;
    if (runtime->hasFunction(0x2A5C50u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6EF4u; }
        if (ctx->pc != 0x2A6EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeSrc__6CSceneFv_0x2a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6EF4u; }
        if (ctx->pc != 0x2A6EF4u) { return; }
    }
    ctx->pc = 0x2A6EF4u;
label_2a6ef4:
    // 0x2a6ef4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a6ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ef8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a6ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6efc:
    // 0x2a6efc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2a6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2a6f00: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x2a6f00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2a6f04: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6F04u;
    {
        const bool branch_taken_0x2a6f04 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A6F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F04u;
            // 0x2a6f08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f04) {
            ctx->pc = 0x2A6F14u;
            goto label_2a6f14;
        }
    }
    ctx->pc = 0x2A6F0Cu;
    // 0x2a6f0c: 0xc0a9c14  jal         func_2A7050
    ctx->pc = 0x2A6F0Cu;
    SET_GPR_U32(ctx, 31, 0x2A6F14u);
    ctx->pc = 0x2A6F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F0Cu;
            // 0x2a6f10: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7050u;
    if (runtime->hasFunction(0x2A7050u)) {
        auto targetFn = runtime->lookupFunction(0x2A7050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F14u; }
        if (ctx->pc != 0x2A6F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeSrc__6CSceneFiP1_0x2a7050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F14u; }
        if (ctx->pc != 0x2A6F14u) { return; }
    }
    ctx->pc = 0x2A6F14u;
label_2a6f14:
    // 0x2a6f14: 0x0  nop
    ctx->pc = 0x2a6f14u;
    // NOP
    // 0x2a6f18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a6f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a6f1c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2a6f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a6f20: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A6F20u;
    {
        const bool branch_taken_0x2a6f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F20u;
            // 0x2a6f24: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f20) {
            ctx->pc = 0x2A6EFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a6efc;
        }
    }
    ctx->pc = 0x2A6F28u;
label_2a6f28:
    // 0x2a6f28: 0x92050022  lbu         $a1, 0x22($s0)
    ctx->pc = 0x2a6f28u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x2a6f2c: 0x92060023  lbu         $a2, 0x23($s0)
    ctx->pc = 0x2a6f2cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x2a6f30: 0xc0633d4  jal         func_18CF50
    ctx->pc = 0x2A6F30u;
    SET_GPR_U32(ctx, 31, 0x2A6F38u);
    ctx->pc = 0x2A6F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F30u;
            // 0x2a6f34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CF50u;
    if (runtime->hasFunction(0x18CF50u)) {
        auto targetFn = runtime->lookupFunction(0x18CF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F38u; }
        if (ctx->pc != 0x2A6F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetReverb__Fiii_0x18cf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F38u; }
        if (ctx->pc != 0x2A6F38u) { return; }
    }
    ctx->pc = 0x2A6F38u;
label_2a6f38:
    // 0x2a6f38: 0x92050022  lbu         $a1, 0x22($s0)
    ctx->pc = 0x2a6f38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x2a6f3c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a6f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a6f40: 0x92060023  lbu         $a2, 0x23($s0)
    ctx->pc = 0x2a6f40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x2a6f44: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2A6F44u;
    SET_GPR_U32(ctx, 31, 0x2A6F4Cu);
    ctx->pc = 0x2A6F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F44u;
            // 0x2a6f48: 0x2484e5e8  addiu       $a0, $a0, -0x1A18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F4Cu; }
        if (ctx->pc != 0x2A6F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F4Cu; }
        if (ctx->pc != 0x2A6F4Cu) { return; }
    }
    ctx->pc = 0x2A6F4Cu;
label_2a6f4c:
    // 0x2a6f4c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6f50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a6f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f54: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a6f54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a6f58: 0xc0a9a10  jal         func_2A6840
    ctx->pc = 0x2A6F58u;
    SET_GPR_U32(ctx, 31, 0x2A6F60u);
    ctx->pc = 0x2A6F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F58u;
            // 0x2a6f5c: 0xac349068  sw          $s4, -0x6F98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938728), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6840u;
    if (runtime->hasFunction(0x2A6840u)) {
        auto targetFn = runtime->lookupFunction(0x2A6840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F60u; }
        if (ctx->pc != 0x2A6F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnvBgm__6CSceneFv_0x2a6840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6F60u; }
        if (ctx->pc != 0x2A6F60u) { return; }
    }
    ctx->pc = 0x2A6F60u;
label_2a6f60:
    // 0x2a6f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6f64:
    // 0x2a6f64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a6f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a6f68:
    // 0x2a6f68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a6f68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a6f6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a6f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6f70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a6f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6f74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a6f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6f78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6f7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6f80: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F80u;
            // 0x2a6f84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6F88u;
}
