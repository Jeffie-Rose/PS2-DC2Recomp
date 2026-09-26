#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA
// Address: 0x1e9d40 - 0x1e9e40
void SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40");
#endif

    switch (ctx->pc) {
        case 0x1e9d90u: goto label_1e9d90;
        case 0x1e9da0u: goto label_1e9da0;
        case 0x1e9db0u: goto label_1e9db0;
        case 0x1e9dc0u: goto label_1e9dc0;
        case 0x1e9dccu: goto label_1e9dcc;
        case 0x1e9df8u: goto label_1e9df8;
        case 0x1e9e0cu: goto label_1e9e0c;
        case 0x1e9e14u: goto label_1e9e14;
        case 0x1e9e2cu: goto label_1e9e2c;
        default: break;
    }

    ctx->pc = 0x1e9d40u;

    // 0x1e9d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9d44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9d48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e9d4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9d54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e9d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d58: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E9D58u;
    {
        const bool branch_taken_0x1e9d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D58u;
            // 0x1e9d5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d58) {
            ctx->pc = 0x1E9DB8u;
            goto label_1e9db8;
        }
    }
    ctx->pc = 0x1E9D60u;
    // 0x1e9d60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9d64: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E9D64u;
    {
        const bool branch_taken_0x1e9d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D64u;
            // 0x1e9d68: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d64) {
            ctx->pc = 0x1E9DA8u;
            goto label_1e9da8;
        }
    }
    ctx->pc = 0x1E9D6Cu;
    // 0x1e9d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9d70: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9D70u;
    {
        const bool branch_taken_0x1e9d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9d70) {
            ctx->pc = 0x1E9D98u;
            goto label_1e9d98;
        }
    }
    ctx->pc = 0x1E9D78u;
    // 0x1e9d78: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9D78u;
    {
        const bool branch_taken_0x1e9d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d78) {
            ctx->pc = 0x1E9D88u;
            goto label_1e9d88;
        }
    }
    ctx->pc = 0x1E9D80u;
    // 0x1e9d80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E9D80u;
    {
        const bool branch_taken_0x1e9d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D80u;
            // 0x1e9d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d80) {
            ctx->pc = 0x1E9DC4u;
            goto label_1e9dc4;
        }
    }
    ctx->pc = 0x1E9D88u;
label_1e9d88:
    // 0x1e9d88: 0xc07a790  jal         func_1E9E40
    ctx->pc = 0x1E9D88u;
    SET_GPR_U32(ctx, 31, 0x1E9D90u);
    ctx->pc = 0x1E9E40u;
    if (runtime->hasFunction(0x1E9E40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D90u; }
        if (ctx->pc != 0x1E9D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupMints__FP6CSceneP16CUserDataManager_0x1e9e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D90u; }
        if (ctx->pc != 0x1E9D90u) { return; }
    }
    ctx->pc = 0x1E9D90u;
label_1e9d90:
    // 0x1e9d90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E9D90u;
    {
        const bool branch_taken_0x1e9d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d90) {
            ctx->pc = 0x1E9DC0u;
            goto label_1e9dc0;
        }
    }
    ctx->pc = 0x1E9D98u;
label_1e9d98:
    // 0x1e9d98: 0xc07a7f4  jal         func_1E9FD0
    ctx->pc = 0x1E9D98u;
    SET_GPR_U32(ctx, 31, 0x1E9DA0u);
    ctx->pc = 0x1E9FD0u;
    if (runtime->hasFunction(0x1E9FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DA0u; }
        if (ctx->pc != 0x1E9DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupMonica__FP6CSceneP16CUserDataManager_0x1e9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DA0u; }
        if (ctx->pc != 0x1E9DA0u) { return; }
    }
    ctx->pc = 0x1E9DA0u;
label_1e9da0:
    // 0x1e9da0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9DA0u;
    {
        const bool branch_taken_0x1e9da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9da0) {
            ctx->pc = 0x1E9DC0u;
            goto label_1e9dc0;
        }
    }
    ctx->pc = 0x1E9DA8u;
label_1e9da8:
    // 0x1e9da8: 0xc07a858  jal         func_1EA160
    ctx->pc = 0x1E9DA8u;
    SET_GPR_U32(ctx, 31, 0x1E9DB0u);
    ctx->pc = 0x1EA160u;
    if (runtime->hasFunction(0x1EA160u)) {
        auto targetFn = runtime->lookupFunction(0x1EA160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DB0u; }
        if (ctx->pc != 0x1E9DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupRobo__FP6CSceneP16CUserDataManagerP14ROBO_INFO_DATA_0x1ea160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DB0u; }
        if (ctx->pc != 0x1E9DB0u) { return; }
    }
    ctx->pc = 0x1E9DB0u;
label_1e9db0:
    // 0x1e9db0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9DB0u;
    {
        const bool branch_taken_0x1e9db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9db0) {
            ctx->pc = 0x1E9DC0u;
            goto label_1e9dc0;
        }
    }
    ctx->pc = 0x1E9DB8u;
label_1e9db8:
    // 0x1e9db8: 0xc07a9ac  jal         func_1EA6B0
    ctx->pc = 0x1E9DB8u;
    SET_GPR_U32(ctx, 31, 0x1E9DC0u);
    ctx->pc = 0x1EA6B0u;
    if (runtime->hasFunction(0x1EA6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DC0u; }
        if (ctx->pc != 0x1E9DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupMonster__FP6CSceneP16CUserDataManager_0x1ea6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DC0u; }
        if (ctx->pc != 0x1E9DC0u) { return; }
    }
    ctx->pc = 0x1E9DC0u;
label_1e9dc0:
    // 0x1e9dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9dc4:
    // 0x1e9dc4: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1E9DC4u;
    SET_GPR_U32(ctx, 31, 0x1E9DCCu);
    ctx->pc = 0x1E9DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DC4u;
            // 0x1e9dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DCCu; }
        if (ctx->pc != 0x1E9DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DCCu; }
        if (ctx->pc != 0x1E9DCCu) { return; }
    }
    ctx->pc = 0x1E9DCCu;
label_1e9dcc:
    // 0x1e9dcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9DCCu;
    {
        const bool branch_taken_0x1e9dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DCCu;
            // 0x1e9dd0: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9dcc) {
            ctx->pc = 0x1E9DE0u;
            goto label_1e9de0;
        }
    }
    ctx->pc = 0x1E9DD4u;
    // 0x1e9dd4: 0x34210540  ori         $at, $at, 0x540
    ctx->pc = 0x1e9dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1344);
    // 0x1e9dd8: 0x2211821  addu        $v1, $s1, $at
    ctx->pc = 0x1e9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x1e9ddc: 0xac4305a0  sw          $v1, 0x5A0($v0)
    ctx->pc = 0x1e9ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1440), GPR_U32(ctx, 3));
label_1e9de0:
    // 0x1e9de0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9de4: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9DE4u;
    {
        const bool branch_taken_0x1e9de4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DE4u;
            // 0x1e9de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9de4) {
            ctx->pc = 0x1E9DF0u;
            goto label_1e9df0;
        }
    }
    ctx->pc = 0x1E9DECu;
    // 0x1e9dec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e9decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e9df0:
    // 0x1e9df0: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1E9DF0u;
    SET_GPR_U32(ctx, 31, 0x1E9DF8u);
    ctx->pc = 0x1E9DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9DF0u;
            // 0x1e9df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DF8u; }
        if (ctx->pc != 0x1E9DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9DF8u; }
        if (ctx->pc != 0x1E9DF8u) { return; }
    }
    ctx->pc = 0x1E9DF8u;
label_1e9df8:
    // 0x1e9df8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e9df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9dfc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9DFCu;
    {
        const bool branch_taken_0x1e9dfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9dfc) {
            ctx->pc = 0x1E9E2Cu;
            goto label_1e9e2c;
        }
    }
    ctx->pc = 0x1E9E04u;
    // 0x1e9e04: 0xc064220  jal         func_190880
    ctx->pc = 0x1E9E04u;
    SET_GPR_U32(ctx, 31, 0x1E9E0Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E0Cu; }
        if (ctx->pc != 0x1E9E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E0Cu; }
        if (ctx->pc != 0x1E9E0Cu) { return; }
    }
    ctx->pc = 0x1E9E0Cu;
label_1e9e0c:
    // 0x1e9e0c: 0xc0bda00  jal         func_2F6800
    ctx->pc = 0x1E9E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E9E14u);
    ctx->pc = 0x1E9E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E0Cu;
            // 0x1e9e10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E14u; }
        if (ctx->pc != 0x1E9E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E14u; }
        if (ctx->pc != 0x1E9E14u) { return; }
    }
    ctx->pc = 0x1E9E14u;
label_1e9e14:
    // 0x1e9e14: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x1e9e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e9e18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9E18u;
    {
        const bool branch_taken_0x1e9e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E18u;
            // 0x1e9e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e18) {
            ctx->pc = 0x1E9E2Cu;
            goto label_1e9e2c;
        }
    }
    ctx->pc = 0x1E9E20u;
    // 0x1e9e20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e24: 0xc0b4ff0  jal         func_2D3FC0
    ctx->pc = 0x1E9E24u;
    SET_GPR_U32(ctx, 31, 0x1E9E2Cu);
    ctx->pc = 0x1E9E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E24u;
            // 0x1e9e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3FC0u;
    if (runtime->hasFunction(0x2D3FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D3FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E2Cu; }
        if (ctx->pc != 0x1E9E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AtraMiriaOnOff__FiP11CCharacter2i_0x2d3fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E2Cu; }
        if (ctx->pc != 0x1E9E2Cu) { return; }
    }
    ctx->pc = 0x1E9E2Cu;
label_1e9e2c:
    // 0x1e9e2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E38u;
            // 0x1e9e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9E40u;
}
