#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadVillager__6CSceneFii
// Address: 0x2c9d40 - 0x2ca088
void LoadVillager__6CSceneFii_0x2c9d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadVillager__6CSceneFii_0x2c9d40");
#endif

    switch (ctx->pc) {
        case 0x2c9d7cu: goto label_2c9d7c;
        case 0x2c9d84u: goto label_2c9d84;
        case 0x2c9d8cu: goto label_2c9d8c;
        case 0x2c9dc0u: goto label_2c9dc0;
        case 0x2c9dd0u: goto label_2c9dd0;
        case 0x2c9ddcu: goto label_2c9ddc;
        case 0x2c9df8u: goto label_2c9df8;
        case 0x2c9e0cu: goto label_2c9e0c;
        case 0x2c9e30u: goto label_2c9e30;
        case 0x2c9e3cu: goto label_2c9e3c;
        case 0x2c9e6cu: goto label_2c9e6c;
        case 0x2c9e84u: goto label_2c9e84;
        case 0x2c9ea4u: goto label_2c9ea4;
        case 0x2c9eb8u: goto label_2c9eb8;
        case 0x2c9ef8u: goto label_2c9ef8;
        case 0x2c9f14u: goto label_2c9f14;
        case 0x2c9f20u: goto label_2c9f20;
        case 0x2c9f4cu: goto label_2c9f4c;
        case 0x2c9f98u: goto label_2c9f98;
        case 0x2c9fa8u: goto label_2c9fa8;
        case 0x2c9fb8u: goto label_2c9fb8;
        case 0x2c9fc4u: goto label_2c9fc4;
        case 0x2c9fe0u: goto label_2c9fe0;
        case 0x2c9ff4u: goto label_2c9ff4;
        case 0x2ca020u: goto label_2ca020;
        case 0x2ca050u: goto label_2ca050;
        default: break;
    }

    ctx->pc = 0x2c9d40u;

    // 0x2c9d40: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x2c9d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x2c9d44: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c9d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c9d48: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2c9d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2c9d4c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2c9d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2c9d50: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c9d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2c9d54: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c9d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c9d58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c9d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c9d5c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c9d5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c9d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c9d64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c9d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c9d68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c9d6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c9d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c9d70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c9d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d74: 0xc0b25c4  jal         func_2C9710
    ctx->pc = 0x2C9D74u;
    SET_GPR_U32(ctx, 31, 0x2C9D7Cu);
    ctx->pc = 0x2C9D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D74u;
            // 0x2c9d78: 0xafa600fc  sw          $a2, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9710u;
    if (runtime->hasFunction(0x2C9710u)) {
        auto targetFn = runtime->lookupFunction(0x2C9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D7Cu; }
        if (ctx->pc != 0x2C9D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteVillager__6CSceneFv_0x2c9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D7Cu; }
        if (ctx->pc != 0x2C9D7Cu) { return; }
    }
    ctx->pc = 0x2C9D7Cu;
label_2c9d7c:
    // 0x2c9d7c: 0xc0b2598  jal         func_2C9660
    ctx->pc = 0x2C9D7Cu;
    SET_GPR_U32(ctx, 31, 0x2C9D84u);
    ctx->pc = 0x2C9D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D7Cu;
            // 0x2c9d80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9660u;
    if (runtime->hasFunction(0x2C9660u)) {
        auto targetFn = runtime->lookupFunction(0x2C9660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D84u; }
        if (ctx->pc != 0x2C9D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSubVillager__6CSceneFv_0x2c9660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D84u; }
        if (ctx->pc != 0x2C9D84u) { return; }
    }
    ctx->pc = 0x2C9D84u;
label_2c9d84:
    // 0x2c9d84: 0xc0b3488  jal         func_2CD220
    ctx->pc = 0x2C9D84u;
    SET_GPR_U32(ctx, 31, 0x2C9D8Cu);
    ctx->pc = 0x2C9D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D84u;
            // 0x2c9d88: 0x26a43050  addiu       $a0, $s5, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD220u;
    if (runtime->hasFunction(0x2CD220u)) {
        auto targetFn = runtime->lookupFunction(0x2CD220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D8Cu; }
        if (ctx->pc != 0x2C9D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CVillagerMngrFv_0x2cd220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D8Cu; }
        if (ctx->pc != 0x2C9D8Cu) { return; }
    }
    ctx->pc = 0x2C9D8Cu;
label_2c9d8c:
    // 0x2c9d8c: 0x8ea23038  lw          $v0, 0x3038($s5)
    ctx->pc = 0x2c9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12344)));
    // 0x2c9d90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9D90u;
    {
        const bool branch_taken_0x2c9d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D90u;
            // 0x2c9d94: 0x3c1e0038  lui         $fp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d90) {
            ctx->pc = 0x2C9DA4u;
            goto label_2c9da4;
        }
    }
    ctx->pc = 0x2C9D98u;
    // 0x2c9d98: 0xaea03038  sw          $zero, 0x3038($s5)
    ctx->pc = 0x2c9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12344), GPR_U32(ctx, 0));
    // 0x2c9d9c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2C9D9Cu;
    {
        const bool branch_taken_0x2c9d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D9Cu;
            // 0x2c9da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d9c) {
            ctx->pc = 0x2CA058u;
            goto label_2ca058;
        }
    }
    ctx->pc = 0x2C9DA4u;
label_2c9da4:
    // 0x2c9da4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9da8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dac: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2c9dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c9db0: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x2c9db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2c9db4: 0xaea0303c  sw          $zero, 0x303C($s5)
    ctx->pc = 0x2c9db4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12348), GPR_U32(ctx, 0));
    // 0x2c9db8: 0xc0b2620  jal         func_2C9880
    ctx->pc = 0x2C9DB8u;
    SET_GPR_U32(ctx, 31, 0x2C9DC0u);
    ctx->pc = 0x2C9DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9DB8u;
            // 0x2c9dbc: 0x27de1ef0  addiu       $fp, $fp, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9880u;
    if (runtime->hasFunction(0x2C9880u)) {
        auto targetFn = runtime->lookupFunction(0x2C9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9DC0u; }
        if (ctx->pc != 0x2C9DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadVillagerList__6CSceneFiPiPP18CVillagerPlaceInfo_0x2c9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9DC0u; }
        if (ctx->pc != 0x2C9DC0u) { return; }
    }
    ctx->pc = 0x2C9DC0u;
label_2c9dc0:
    // 0x2c9dc0: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2c9dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2c9dc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dc8: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x2C9DC8u;
    SET_GPR_U32(ctx, 31, 0x2C9DD0u);
    ctx->pc = 0x2C9DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9DC8u;
            // 0x2c9dcc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9DD0u; }
        if (ctx->pc != 0x2C9DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9DD0u; }
        if (ctx->pc != 0x2C9DD0u) { return; }
    }
    ctx->pc = 0x2C9DD0u;
label_2c9dd0:
    // 0x2c9dd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dd4: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x2C9DD4u;
    SET_GPR_U32(ctx, 31, 0x2C9DDCu);
    ctx->pc = 0x2C9DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9DD4u;
            // 0x2c9dd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9DDCu; }
        if (ctx->pc != 0x2C9DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9DDCu; }
        if (ctx->pc != 0x2C9DDCu) { return; }
    }
    ctx->pc = 0x2C9DDCu;
label_2c9ddc:
    // 0x2c9ddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9de0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c9de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9de4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2c9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2c9de8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2c9de8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c9dec: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x2C9DECu;
    {
        const bool branch_taken_0x2c9dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9DECu;
            // 0x2c9df0: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9dec) {
            ctx->pc = 0x2CA018u;
            goto label_2ca018;
        }
    }
    ctx->pc = 0x2C9DF4u;
    // 0x2c9df4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c9df4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9df8:
    // 0x2c9df8: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x2c9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x2c9dfc: 0x24540100  addiu       $s4, $v0, 0x100
    ctx->pc = 0x2c9dfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2c9e00: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2c9e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c9e04: 0xc0c65f4  jal         func_3197D0
    ctx->pc = 0x2C9E04u;
    SET_GPR_U32(ctx, 31, 0x2C9E0Cu);
    ctx->pc = 0x2C9E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E04u;
            // 0x2c9e08: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3197D0u;
    if (runtime->hasFunction(0x3197D0u)) {
        auto targetFn = runtime->lookupFunction(0x3197D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E0Cu; }
        if (ctx->pc != 0x2C9E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerModelName__FiPc_0x3197d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E0Cu; }
        if (ctx->pc != 0x2C9E0Cu) { return; }
    }
    ctx->pc = 0x2C9E0Cu;
label_2c9e0c:
    // 0x2c9e0c: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2C9E0Cu;
    {
        const bool branch_taken_0x2c9e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9e0c) {
            ctx->pc = 0x2C9FF8u;
            goto label_2c9ff8;
        }
    }
    ctx->pc = 0x2C9E14u;
    // 0x2c9e14: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x2c9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2c9e18: 0x8eb7003c  lw          $s7, 0x3C($s5)
    ctx->pc = 0x2c9e18u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x2c9e1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c9e20: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2c9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2c9e24: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2c9e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c9e28: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2C9E28u;
    SET_GPR_U32(ctx, 31, 0x2C9E30u);
    ctx->pc = 0x2C9E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E28u;
            // 0x2c9e2c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E30u; }
        if (ctx->pc != 0x2C9E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E30u; }
        if (ctx->pc != 0x2C9E30u) { return; }
    }
    ctx->pc = 0x2C9E30u;
label_2c9e30:
    // 0x2c9e30: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2c9e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c9e34: 0xc0b2660  jal         func_2C9980
    ctx->pc = 0x2C9E34u;
    SET_GPR_U32(ctx, 31, 0x2C9E3Cu);
    ctx->pc = 0x2C9E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E34u;
            // 0x2c9e38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9980u;
    if (runtime->hasFunction(0x2C9980u)) {
        auto targetFn = runtime->lookupFunction(0x2C9980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E3Cu; }
        if (ctx->pc != 0x2C9E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCopyModel__6CSceneFi_0x2c9980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E3Cu; }
        if (ctx->pc != 0x2C9E3Cu) { return; }
    }
    ctx->pc = 0x2C9E3Cu;
label_2c9e3c:
    // 0x2c9e3c: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C9E3Cu;
    {
        const bool branch_taken_0x2c9e3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C9E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E3Cu;
            // 0x2c9e40: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e3c) {
            ctx->pc = 0x2C9E8Cu;
            goto label_2c9e8c;
        }
    }
    ctx->pc = 0x2C9E44u;
    // 0x2c9e44: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2c9e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c9e48: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2c9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2c9e4c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2c9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c9e50: 0x28631900  slti        $v1, $v1, 0x1900
    ctx->pc = 0x2c9e50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6400) ? 1 : 0);
    // 0x2c9e54: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9E54u;
    {
        const bool branch_taken_0x2c9e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E54u;
            // 0x2c9e58: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e54) {
            ctx->pc = 0x2C9E74u;
            goto label_2c9e74;
        }
    }
    ctx->pc = 0x2C9E5Cu;
    // 0x2c9e5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c9e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e64: 0xc0a14f8  jal         func_2853E0
    ctx->pc = 0x2C9E64u;
    SET_GPR_U32(ctx, 31, 0x2C9E6Cu);
    ctx->pc = 0x2C9E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E64u;
            // 0x2c9e68: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853E0u;
    if (runtime->hasFunction(0x2853E0u)) {
        auto targetFn = runtime->lookupFunction(0x2853E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E6Cu; }
        if (ctx->pc != 0x2C9E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyChara__6CSceneFiiP9mgCMemory_0x2853e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E6Cu; }
        if (ctx->pc != 0x2C9E6Cu) { return; }
    }
    ctx->pc = 0x2C9E6Cu;
label_2c9e6c:
    // 0x2c9e6c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2C9E6Cu;
    {
        const bool branch_taken_0x2c9e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E6Cu;
            // 0x2c9e70: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e6c) {
            ctx->pc = 0x2C9F98u;
            goto label_2c9f98;
        }
    }
    ctx->pc = 0x2C9E74u;
label_2c9e74:
    // 0x2c9e74: 0x0  nop
    ctx->pc = 0x2c9e74u;
    // NOP
    // 0x2c9e78: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c9e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c9e7c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2C9E7Cu;
    SET_GPR_U32(ctx, 31, 0x2C9E84u);
    ctx->pc = 0x2C9E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E7Cu;
            // 0x2c9e80: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E84u; }
        if (ctx->pc != 0x2C9E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E84u; }
        if (ctx->pc != 0x2C9E84u) { return; }
    }
    ctx->pc = 0x2C9E84u;
label_2c9e84:
    // 0x2c9e84: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2C9E84u;
    {
        const bool branch_taken_0x2c9e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9e84) {
            ctx->pc = 0x2C9F98u;
            goto label_2c9f98;
        }
    }
    ctx->pc = 0x2C9E8Cu;
label_2c9e8c:
    // 0x2c9e8c: 0x0  nop
    ctx->pc = 0x2c9e8cu;
    // NOP
    // 0x2c9e90: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c9e94: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c9e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e98: 0x27a60308  addiu       $a2, $sp, 0x308
    ctx->pc = 0x2c9e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
    // 0x2c9e9c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2C9E9Cu;
    SET_GPR_U32(ctx, 31, 0x2C9EA4u);
    ctx->pc = 0x2C9EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E9Cu;
            // 0x2c9ea0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9EA4u; }
        if (ctx->pc != 0x2C9EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9EA4u; }
        if (ctx->pc != 0x2C9EA4u) { return; }
    }
    ctx->pc = 0x2C9EA4u;
label_2c9ea4:
    // 0x2c9ea4: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2C9EA4u;
    {
        const bool branch_taken_0x2c9ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ea4) {
            ctx->pc = 0x2C9FF8u;
            goto label_2c9ff8;
        }
    }
    ctx->pc = 0x2C9EACu;
    // 0x2c9eac: 0x8fa50308  lw          $a1, 0x308($sp)
    ctx->pc = 0x2c9eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x2c9eb0: 0xc0b2288  jal         func_2C8A20
    ctx->pc = 0x2C9EB0u;
    SET_GPR_U32(ctx, 31, 0x2C9EB8u);
    ctx->pc = 0x2C9EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EB0u;
            // 0x2c9eb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A20u;
    if (runtime->hasFunction(0x2C8A20u)) {
        auto targetFn = runtime->lookupFunction(0x2C8A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9EB8u; }
        if (ctx->pc != 0x2C9EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChrFileSize__FPUii_0x2c8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9EB8u; }
        if (ctx->pc != 0x2C9EB8u) { return; }
    }
    ctx->pc = 0x2C9EB8u;
label_2c9eb8:
    // 0x2c9eb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c9eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ebc: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x2c9ebcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c9ec0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2c9ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c9ec4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2c9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2c9ec8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2c9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c9ecc: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9ECCu;
    {
        const bool branch_taken_0x2c9ecc = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2C9ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9ECCu;
            // 0x2c9ed0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ecc) {
            ctx->pc = 0x2C9EDCu;
            goto label_2c9edc;
        }
    }
    ctx->pc = 0x2C9ED4u;
    // 0x2c9ed4: 0x2662000f  addiu       $v0, $s3, 0xF
    ctx->pc = 0x2c9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x2c9ed8: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x2c9ed8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_2c9edc:
    // 0x2c9edc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2c9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c9ee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c9ee4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c9ee4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c9ee8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9EE8u;
    {
        const bool branch_taken_0x2c9ee8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EE8u;
            // 0x2c9eec: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ee8) {
            ctx->pc = 0x2C9F00u;
            goto label_2c9f00;
        }
    }
    ctx->pc = 0x2C9EF0u;
    // 0x2c9ef0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2C9EF0u;
    SET_GPR_U32(ctx, 31, 0x2C9EF8u);
    ctx->pc = 0x2C9EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EF0u;
            // 0x2c9ef4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9EF8u; }
        if (ctx->pc != 0x2C9EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9EF8u; }
        if (ctx->pc != 0x2C9EF8u) { return; }
    }
    ctx->pc = 0x2C9EF8u;
label_2c9ef8:
    // 0x2c9ef8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2C9EF8u;
    {
        const bool branch_taken_0x2c9ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ef8) {
            ctx->pc = 0x2C9FF8u;
            goto label_2c9ff8;
        }
    }
    ctx->pc = 0x2C9F00u;
label_2c9f00:
    // 0x2c9f00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c9f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c9f04: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x2c9f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2c9f08: 0x27a4030c  addiu       $a0, $sp, 0x30C
    ctx->pc = 0x2c9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
    // 0x2c9f0c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C9F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C9F14u);
    ctx->pc = 0x2C9F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F0Cu;
            // 0x2c9f10: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F14u; }
        if (ctx->pc != 0x2C9F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F14u; }
        if (ctx->pc != 0x2C9F14u) { return; }
    }
    ctx->pc = 0x2C9F14u;
label_2c9f14:
    // 0x2c9f14: 0x27c401d8  addiu       $a0, $fp, 0x1D8
    ctx->pc = 0x2c9f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 472));
    // 0x2c9f18: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2C9F18u;
    SET_GPR_U32(ctx, 31, 0x2C9F20u);
    ctx->pc = 0x2C9F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F18u;
            // 0x2c9f1c: 0x27a5030c  addiu       $a1, $sp, 0x30C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F20u; }
        if (ctx->pc != 0x2C9F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F20u; }
        if (ctx->pc != 0x2C9F20u) { return; }
    }
    ctx->pc = 0x2C9F20u;
label_2c9f20:
    // 0x2c9f20: 0x8fab00e0  lw          $t3, 0xE0($sp)
    ctx->pc = 0x2c9f20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c9f24: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2c9f24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x2c9f28: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2c9f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f2c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2c9f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2c9f30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f34: 0x24e70038  addiu       $a3, $a3, 0x38
    ctx->pc = 0x2c9f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x2c9f38: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2c9f38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f3c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2c9f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f40: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2c9f40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f44: 0xc0a1458  jal         func_285160
    ctx->pc = 0x2C9F44u;
    SET_GPR_U32(ctx, 31, 0x2C9F4Cu);
    ctx->pc = 0x2C9F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F44u;
            // 0x2c9f48: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F4Cu; }
        if (ctx->pc != 0x2C9F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F4Cu; }
        if (ctx->pc != 0x2C9F4Cu) { return; }
    }
    ctx->pc = 0x2C9F4Cu;
label_2c9f4c:
    // 0x2c9f4c: 0xa3c001d8  sb          $zero, 0x1D8($fp)
    ctx->pc = 0x2c9f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 472), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9f50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f54: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2c9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c9f58: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2c9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2c9f5c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2c9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9f60: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2c9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c9f64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9f68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c9f6c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9F6Cu;
    {
        const bool branch_taken_0x2c9f6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C9F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F6Cu;
            // 0x2c9f70: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f6c) {
            ctx->pc = 0x2C9F7Cu;
            goto label_2c9f7c;
        }
    }
    ctx->pc = 0x2C9F74u;
    // 0x2c9f74: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2c9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2c9f78: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x2c9f78u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_2c9f7c:
    // 0x2c9f7c: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9F7Cu;
    {
        const bool branch_taken_0x2c9f7c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2C9F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F7Cu;
            // 0x2c9f80: 0x133283  sra         $a2, $s3, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f7c) {
            ctx->pc = 0x2C9F8Cu;
            goto label_2c9f8c;
        }
    }
    ctx->pc = 0x2C9F84u;
    // 0x2c9f84: 0x266203ff  addiu       $v0, $s3, 0x3FF
    ctx->pc = 0x2c9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1023));
    // 0x2c9f88: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x2c9f88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_2c9f8c:
    // 0x2c9f8c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c9f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c9f90: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2C9F90u;
    SET_GPR_U32(ctx, 31, 0x2C9F98u);
    ctx->pc = 0x2C9F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F90u;
            // 0x2c9f94: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F98u; }
        if (ctx->pc != 0x2C9F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F98u; }
        if (ctx->pc != 0x2C9F98u) { return; }
    }
    ctx->pc = 0x2C9F98u;
label_2c9f98:
    // 0x2c9f98: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2c9f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c9f9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fa0: 0xc0a0ec0  jal         func_283B00
    ctx->pc = 0x2C9FA0u;
    SET_GPR_U32(ctx, 31, 0x2C9FA8u);
    ctx->pc = 0x2C9FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FA0u;
            // 0x2c9fa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B00u;
    if (runtime->hasFunction(0x283B00u)) {
        auto targetFn = runtime->lookupFunction(0x283B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FA8u; }
        if (ctx->pc != 0x2C9FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaNo__6CSceneFii_0x283b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FA8u; }
        if (ctx->pc != 0x2C9FA8u) { return; }
    }
    ctx->pc = 0x2C9FA8u;
label_2c9fa8:
    // 0x2c9fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c9facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fb0: 0xc0b26e0  jal         func_2C9B80
    ctx->pc = 0x2C9FB0u;
    SET_GPR_U32(ctx, 31, 0x2C9FB8u);
    ctx->pc = 0x2C9FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FB0u;
            // 0x2c9fb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9B80u;
    if (runtime->hasFunction(0x2C9B80u)) {
        auto targetFn = runtime->lookupFunction(0x2C9B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FB8u; }
        if (ctx->pc != 0x2C9FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaObjectOnOff__6CSceneFiP9mgCMemory_0x2c9b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FB8u; }
        if (ctx->pc != 0x2C9FB8u) { return; }
    }
    ctx->pc = 0x2C9FB8u;
label_2c9fb8:
    // 0x2c9fb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fbc: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2C9FBCu;
    SET_GPR_U32(ctx, 31, 0x2C9FC4u);
    ctx->pc = 0x2C9FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FBCu;
            // 0x2c9fc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FC4u; }
        if (ctx->pc != 0x2C9FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FC4u; }
        if (ctx->pc != 0x2C9FC4u) { return; }
    }
    ctx->pc = 0x2C9FC4u;
label_2c9fc4:
    // 0x2c9fc4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C9FC4u;
    {
        const bool branch_taken_0x2c9fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FC4u;
            // 0x2c9fc8: 0x2dd1021  addu        $v0, $s6, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fc4) {
            ctx->pc = 0x2C9FF8u;
            goto label_2c9ff8;
        }
    }
    ctx->pc = 0x2C9FCCu;
    // 0x2c9fcc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2c9fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c9fd0: 0x8c470180  lw          $a3, 0x180($v0)
    ctx->pc = 0x2c9fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2c9fd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fd8: 0xc0b290c  jal         func_2CA430
    ctx->pc = 0x2C9FD8u;
    SET_GPR_U32(ctx, 31, 0x2C9FE0u);
    ctx->pc = 0x2C9FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FD8u;
            // 0x2c9fdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA430u;
    if (runtime->hasFunction(0x2CA430u)) {
        auto targetFn = runtime->lookupFunction(0x2CA430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FE0u; }
        if (ctx->pc != 0x2C9FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterVillager__6CSceneFiiP18CVillagerPlaceInfo_0x2ca430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FE0u; }
        if (ctx->pc != 0x2C9FE0u) { return; }
    }
    ctx->pc = 0x2C9FE0u;
label_2c9fe0:
    // 0x2c9fe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9FE0u;
    {
        const bool branch_taken_0x2c9fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FE0u;
            // 0x2c9fe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fe0) {
            ctx->pc = 0x2C9FF8u;
            goto label_2c9ff8;
        }
    }
    ctx->pc = 0x2C9FE8u;
    // 0x2c9fe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fec: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2C9FECu;
    SET_GPR_U32(ctx, 31, 0x2C9FF4u);
    ctx->pc = 0x2C9FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FECu;
            // 0x2c9ff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FF4u; }
        if (ctx->pc != 0x2C9FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FF4u; }
        if (ctx->pc != 0x2C9FF4u) { return; }
    }
    ctx->pc = 0x2C9FF4u;
label_2c9ff4:
    // 0x2c9ff4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c9ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c9ff8:
    // 0x2c9ff8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2c9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c9ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca000: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2ca000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2ca004: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ca004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca008: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2ca008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2ca00c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2ca00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ca010: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x2CA010u;
    {
        const bool branch_taken_0x2ca010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA010u;
            // 0x2ca014: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca010) {
            ctx->pc = 0x2C9DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9df8;
        }
    }
    ctx->pc = 0x2CA018u;
label_2ca018:
    // 0x2ca018: 0xc0b260c  jal         func_2C9830
    ctx->pc = 0x2CA018u;
    SET_GPR_U32(ctx, 31, 0x2CA020u);
    ctx->pc = 0x2CA01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA018u;
            // 0x2ca01c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9830u;
    if (runtime->hasFunction(0x2C9830u)) {
        auto targetFn = runtime->lookupFunction(0x2C9830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA020u; }
        if (ctx->pc != 0x2CA020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowVillagerTime__6CSceneFv_0x2c9830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA020u; }
        if (ctx->pc != 0x2CA020u) { return; }
    }
    ctx->pc = 0x2CA020u;
label_2ca020:
    // 0x2ca020: 0xaea23e60  sw          $v0, 0x3E60($s5)
    ctx->pc = 0x2ca020u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 15968), GPR_U32(ctx, 2));
    // 0x2ca024: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2ca024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ca028: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2ca028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca02c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ca02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca030: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ca030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ca034: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA034u;
    {
        const bool branch_taken_0x2ca034 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CA038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA034u;
            // 0x2ca038: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca034) {
            ctx->pc = 0x2CA044u;
            goto label_2ca044;
        }
    }
    ctx->pc = 0x2CA03Cu;
    // 0x2ca03c: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2ca03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2ca040: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x2ca040u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_2ca044:
    // 0x2ca044: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2ca044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2ca048: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2CA048u;
    SET_GPR_U32(ctx, 31, 0x2CA050u);
    ctx->pc = 0x2CA04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA048u;
            // 0x2ca04c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA050u; }
        if (ctx->pc != 0x2CA050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA050u; }
        if (ctx->pc != 0x2CA050u) { return; }
    }
    ctx->pc = 0x2CA050u;
label_2ca050:
    // 0x2ca050: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2ca050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2ca054: 0x0  nop
    ctx->pc = 0x2ca054u;
    // NOP
label_2ca058:
    // 0x2ca058: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ca058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ca05c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2ca05cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ca060: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ca060u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ca064: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ca064u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca068: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ca068u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca06c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ca06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca070: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ca070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca074: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ca074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca078: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ca078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca07c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ca07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca080: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA080u;
            // 0x2ca084: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA088u;
}
