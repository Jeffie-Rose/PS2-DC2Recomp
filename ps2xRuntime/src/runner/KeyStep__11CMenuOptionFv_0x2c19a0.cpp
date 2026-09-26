#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__11CMenuOptionFv
// Address: 0x2c19a0 - 0x2c1fd8
void KeyStep__11CMenuOptionFv_0x2c19a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__11CMenuOptionFv_0x2c19a0");
#endif

    switch (ctx->pc) {
        case 0x2c19f8u: goto label_2c19f8;
        case 0x2c1a0cu: goto label_2c1a0c;
        case 0x2c1a14u: goto label_2c1a14;
        case 0x2c1a54u: goto label_2c1a54;
        case 0x2c1a70u: goto label_2c1a70;
        case 0x2c1a7cu: goto label_2c1a7c;
        case 0x2c1a88u: goto label_2c1a88;
        case 0x2c1aa4u: goto label_2c1aa4;
        case 0x2c1ac4u: goto label_2c1ac4;
        case 0x2c1ae8u: goto label_2c1ae8;
        case 0x2c1b14u: goto label_2c1b14;
        case 0x2c1b38u: goto label_2c1b38;
        case 0x2c1b54u: goto label_2c1b54;
        case 0x2c1b68u: goto label_2c1b68;
        case 0x2c1b84u: goto label_2c1b84;
        case 0x2c1b94u: goto label_2c1b94;
        case 0x2c1ba0u: goto label_2c1ba0;
        case 0x2c1bb4u: goto label_2c1bb4;
        case 0x2c1bbcu: goto label_2c1bbc;
        case 0x2c1bc8u: goto label_2c1bc8;
        case 0x2c1bd8u: goto label_2c1bd8;
        case 0x2c1be4u: goto label_2c1be4;
        case 0x2c1c04u: goto label_2c1c04;
        case 0x2c1c90u: goto label_2c1c90;
        case 0x2c1c9cu: goto label_2c1c9c;
        case 0x2c1d74u: goto label_2c1d74;
        case 0x2c1d7cu: goto label_2c1d7c;
        case 0x2c1d8cu: goto label_2c1d8c;
        case 0x2c1d94u: goto label_2c1d94;
        case 0x2c1d9cu: goto label_2c1d9c;
        case 0x2c1db8u: goto label_2c1db8;
        case 0x2c1dc4u: goto label_2c1dc4;
        case 0x2c1dd0u: goto label_2c1dd0;
        case 0x2c1df4u: goto label_2c1df4;
        case 0x2c1e04u: goto label_2c1e04;
        case 0x2c1e0cu: goto label_2c1e0c;
        case 0x2c1e18u: goto label_2c1e18;
        case 0x2c1e28u: goto label_2c1e28;
        case 0x2c1e34u: goto label_2c1e34;
        case 0x2c1e3cu: goto label_2c1e3c;
        case 0x2c1eacu: goto label_2c1eac;
        case 0x2c1ec4u: goto label_2c1ec4;
        case 0x2c1edcu: goto label_2c1edc;
        case 0x2c1f08u: goto label_2c1f08;
        case 0x2c1f20u: goto label_2c1f20;
        case 0x2c1f34u: goto label_2c1f34;
        case 0x2c1f50u: goto label_2c1f50;
        case 0x2c1f90u: goto label_2c1f90;
        case 0x2c1facu: goto label_2c1fac;
        default: break;
    }

    ctx->pc = 0x2c19a0u;

    // 0x2c19a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c19a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c19a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c19a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c19a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c19ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c19acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c19b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c19b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c19b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c19b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c19b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c19bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c19bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c19c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c19c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c19c4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2c19c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c19c8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2c19c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c19cc: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C19CCu;
    {
        const bool branch_taken_0x2c19cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2C19D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C19CCu;
            // 0x2c19d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19cc) {
            ctx->pc = 0x2C19D8u;
            goto label_2c19d8;
        }
    }
    ctx->pc = 0x2C19D4u;
    // 0x2c19d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c19d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c19d8:
    // 0x2c19d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c19d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c19dc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c19e0: 0x8c23d618  lw          $v1, -0x29E8($at)
    ctx->pc = 0x2c19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956568)));
    // 0x2c19e4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C19E4u;
    {
        const bool branch_taken_0x2c19e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c19e4) {
            ctx->pc = 0x2C19F0u;
            goto label_2c19f0;
        }
    }
    ctx->pc = 0x2C19ECu;
    // 0x2c19ec: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2c19ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c19f0:
    // 0x2c19f0: 0xc08d208  jal         func_234820
    ctx->pc = 0x2C19F0u;
    SET_GPR_U32(ctx, 31, 0x2C19F8u);
    ctx->pc = 0x234820u;
    if (runtime->hasFunction(0x234820u)) {
        auto targetFn = runtime->lookupFunction(0x234820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19F8u; }
        if (ctx->pc != 0x2C19F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonMenuModeID__Fv_0x234820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19F8u; }
        if (ctx->pc != 0x2C19F8u) { return; }
    }
    ctx->pc = 0x2C19F8u;
label_2c19f8:
    // 0x2c19f8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c19f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c19fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c19fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c1a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a04: 0xc08ad64  jal         func_22B590
    ctx->pc = 0x2C1A04u;
    SET_GPR_U32(ctx, 31, 0x2C1A0Cu);
    ctx->pc = 0x2C1A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A04u;
            // 0x2c1a08: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B590u;
    if (runtime->hasFunction(0x22B590u)) {
        auto targetFn = runtime->lookupFunction(0x22B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A0Cu; }
        if (ctx->pc != 0x2C1A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMainMenuIconMove__18CMenuPosDataManageFPiii_0x22b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A0Cu; }
        if (ctx->pc != 0x2C1A0Cu) { return; }
    }
    ctx->pc = 0x2C1A0Cu;
label_2c1a0c:
    // 0x2c1a0c: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x2C1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1A14u);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A14u; }
        if (ctx->pc != 0x2C1A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A14u; }
        if (ctx->pc != 0x2C1A14u) { return; }
    }
    ctx->pc = 0x2C1A14u;
label_2c1a14:
    // 0x2c1a14: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2c1a14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1a18: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2C1A18u;
    {
        const bool branch_taken_0x2c1a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A18u;
            // 0x2c1a1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a18) {
            ctx->pc = 0x2C1BA8u;
            goto label_2c1ba8;
        }
    }
    ctx->pc = 0x2C1A20u;
    // 0x2c1a20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1a24: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C1A24u;
    {
        const bool branch_taken_0x2c1a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A24u;
            // 0x2c1a28: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a24) {
            ctx->pc = 0x2C1AFCu;
            goto label_2c1afc;
        }
    }
    ctx->pc = 0x2C1A2Cu;
    // 0x2c1a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1a30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1A30u;
    {
        const bool branch_taken_0x2c1a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c1a30) {
            ctx->pc = 0x2C1A40u;
            goto label_2c1a40;
        }
    }
    ctx->pc = 0x2C1A38u;
    // 0x2c1a38: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x2C1A38u;
    {
        const bool branch_taken_0x2c1a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A38u;
            // 0x2c1a3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a38) {
            ctx->pc = 0x2C1E2Cu;
            goto label_2c1e2c;
        }
    }
    ctx->pc = 0x2C1A40u;
label_2c1a40:
    // 0x2c1a40: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2c1a40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2c1a44: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C1A44u;
    {
        const bool branch_taken_0x2c1a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a44) {
            ctx->pc = 0x2C1AD0u;
            goto label_2c1ad0;
        }
    }
    ctx->pc = 0x2C1A4Cu;
    // 0x2c1a4c: 0xc05239c  jal         func_148E70
    ctx->pc = 0x2C1A4Cu;
    SET_GPR_U32(ctx, 31, 0x2C1A54u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A54u; }
        if (ctx->pc != 0x2C1A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A54u; }
        if (ctx->pc != 0x2C1A54u) { return; }
    }
    ctx->pc = 0x2C1A54u;
label_2c1a54:
    // 0x2c1a54: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C1A54u;
    {
        const bool branch_taken_0x2c1a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a54) {
            ctx->pc = 0x2C1AD0u;
            goto label_2c1ad0;
        }
    }
    ctx->pc = 0x2C1A5Cu;
    // 0x2c1a5c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C1A5Cu;
    {
        const bool branch_taken_0x2c1a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A5Cu;
            // 0x2c1a60: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a5c) {
            ctx->pc = 0x2C1AD0u;
            goto label_2c1ad0;
        }
    }
    ctx->pc = 0x2C1A64u;
    // 0x2c1a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c1a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a68: 0xc052c70  jal         func_14B1C0
    ctx->pc = 0x2C1A68u;
    SET_GPR_U32(ctx, 31, 0x2C1A70u);
    ctx->pc = 0x2C1A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A68u;
            // 0x2c1a6c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B1C0u;
    if (runtime->hasFunction(0x14B1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A70u; }
        if (ctx->pc != 0x2C1A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyLock__8CGamePadFi_0x14b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A70u; }
        if (ctx->pc != 0x2C1A70u) { return; }
    }
    ctx->pc = 0x2C1A70u;
label_2c1a70:
    // 0x2c1a70: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1a74: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x2C1A74u;
    SET_GPR_U32(ctx, 31, 0x2C1A7Cu);
    ctx->pc = 0x2C1A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A74u;
            // 0x2c1a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A7Cu; }
        if (ctx->pc != 0x2C1A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A7Cu; }
        if (ctx->pc != 0x2C1A7Cu) { return; }
    }
    ctx->pc = 0x2C1A7Cu;
label_2c1a7c:
    // 0x2c1a7c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1a80: 0xc08f01c  jal         func_23C070
    ctx->pc = 0x2C1A80u;
    SET_GPR_U32(ctx, 31, 0x2C1A88u);
    ctx->pc = 0x2C1A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A80u;
            // 0x2c1a84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C070u;
    if (runtime->hasFunction(0x23C070u)) {
        auto targetFn = runtime->lookupFunction(0x23C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A88u; }
        if (ctx->pc != 0x2C1A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveMethod__12CMenuKeyFuncFi_0x23c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A88u; }
        if (ctx->pc != 0x2C1A88u) { return; }
    }
    ctx->pc = 0x2C1A88u;
label_2c1a88:
    // 0x2c1a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1a8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1a90: 0xae820380  sw          $v0, 0x380($s4)
    ctx->pc = 0x2c1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 896), GPR_U32(ctx, 2));
    // 0x2c1a94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a98: 0x24a5fa50  addiu       $a1, $a1, -0x5B0
    ctx->pc = 0x2c1a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965840));
    // 0x2c1a9c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C1A9Cu;
    SET_GPR_U32(ctx, 31, 0x2C1AA4u);
    ctx->pc = 0x2C1AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A9Cu;
            // 0x2c1aa0: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AA4u; }
        if (ctx->pc != 0x2C1AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AA4u; }
        if (ctx->pc != 0x2C1AA4u) { return; }
    }
    ctx->pc = 0x2C1AA4u;
label_2c1aa4:
    // 0x2c1aa4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c1aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c1aa8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c1aac: 0x8c23d618  lw          $v1, -0x29E8($at)
    ctx->pc = 0x2c1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956568)));
    // 0x2c1ab0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1AB0u;
    {
        const bool branch_taken_0x2c1ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1AB0u;
            // 0x2c1ab4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ab0) {
            ctx->pc = 0x2C1AD0u;
            goto label_2c1ad0;
        }
    }
    ctx->pc = 0x2C1AB8u;
    // 0x2c1ab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1abc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C1ABCu;
    SET_GPR_U32(ctx, 31, 0x2C1AC4u);
    ctx->pc = 0x2C1AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1ABCu;
            // 0x2c1ac0: 0x24a5fa58  addiu       $a1, $a1, -0x5A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AC4u; }
        if (ctx->pc != 0x2C1AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AC4u; }
        if (ctx->pc != 0x2C1AC4u) { return; }
    }
    ctx->pc = 0x2C1AC4u;
label_2c1ac4:
    // 0x2c1ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1ac8: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2c1ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c1acc: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2c1accu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2c1ad0:
    // 0x2c1ad0: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x2c1ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2c1ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1ad8: 0x146200d3  bne         $v1, $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2C1AD8u;
    {
        const bool branch_taken_0x2c1ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1AD8u;
            // 0x2c1adc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ad8) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1AE0u;
    // 0x2c1ae0: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2C1AE0u;
    SET_GPR_U32(ctx, 31, 0x2C1AE8u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AE8u; }
        if (ctx->pc != 0x2C1AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AE8u; }
        if (ctx->pc != 0x2C1AE8u) { return; }
    }
    ctx->pc = 0x2C1AE8u;
label_2c1ae8:
    // 0x2c1ae8: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x2C1AE8u;
    {
        const bool branch_taken_0x2c1ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ae8) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1AF0u;
    // 0x2c1af0: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x2c1af0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1af4: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x2C1AF4u;
    {
        const bool branch_taken_0x2c1af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1AF4u;
            // 0x2c1af8: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1af4) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1AFCu;
label_2c1afc:
    // 0x2c1afc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c1b00: 0x8c23d618  lw          $v1, -0x29E8($at)
    ctx->pc = 0x2c1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956568)));
    // 0x2c1b04: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1B04u;
    {
        const bool branch_taken_0x2c1b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B04u;
            // 0x2c1b08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b04) {
            ctx->pc = 0x2C1B24u;
            goto label_2c1b24;
        }
    }
    ctx->pc = 0x2C1B0Cu;
    // 0x2c1b0c: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2C1B0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1B14u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B14u; }
        if (ctx->pc != 0x2C1B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B14u; }
        if (ctx->pc != 0x2C1B14u) { return; }
    }
    ctx->pc = 0x2C1B14u;
label_2c1b14:
    // 0x2c1b14: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2C1B14u;
    {
        const bool branch_taken_0x2c1b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B14u;
            // 0x2c1b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b14) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1B1Cu;
    // 0x2c1b1c: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x2C1B1Cu;
    {
        const bool branch_taken_0x2c1b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B1Cu;
            // 0x2c1b20: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b1c) {
            ctx->pc = 0x2C1FB8u;
            goto label_2c1fb8;
        }
    }
    ctx->pc = 0x2C1B24u;
label_2c1b24:
    // 0x2c1b24: 0x122000c0  beqz        $s1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2C1B24u;
    {
        const bool branch_taken_0x2c1b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B24u;
            // 0x2c1b28: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b24) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1B2Cu;
    // 0x2c1b2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b30: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C1B30u;
    SET_GPR_U32(ctx, 31, 0x2C1B38u);
    ctx->pc = 0x2C1B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B30u;
            // 0x2c1b34: 0x24a5f938  addiu       $a1, $a1, -0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B38u; }
        if (ctx->pc != 0x2C1B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B38u; }
        if (ctx->pc != 0x2C1B38u) { return; }
    }
    ctx->pc = 0x2C1B38u;
label_2c1b38:
    // 0x2c1b38: 0x8f8294b4  lw          $v0, -0x6B4C($gp)
    ctx->pc = 0x2c1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939828)));
    // 0x2c1b3c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C1B3Cu;
    {
        const bool branch_taken_0x2c1b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1b3c) {
            ctx->pc = 0x2C1B94u;
            goto label_2c1b94;
        }
    }
    ctx->pc = 0x2C1B44u;
    // 0x2c1b44: 0x80450036  lb          $a1, 0x36($v0)
    ctx->pc = 0x2c1b44u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x2c1b48: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c1b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c1b4c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2C1B4Cu;
    SET_GPR_U32(ctx, 31, 0x2C1B54u);
    ctx->pc = 0x2C1B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B4Cu;
            // 0x2c1b50: 0x2484fa70  addiu       $a0, $a0, -0x590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B54u; }
        if (ctx->pc != 0x2C1B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B54u; }
        if (ctx->pc != 0x2C1B54u) { return; }
    }
    ctx->pc = 0x2C1B54u;
label_2c1b54:
    // 0x2c1b54: 0x8f8294b4  lw          $v0, -0x6B4C($gp)
    ctx->pc = 0x2c1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939828)));
    // 0x2c1b58: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c1b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c1b5c: 0x80450037  lb          $a1, 0x37($v0)
    ctx->pc = 0x2c1b5cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 55)));
    // 0x2c1b60: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2C1B60u;
    SET_GPR_U32(ctx, 31, 0x2C1B68u);
    ctx->pc = 0x2C1B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B60u;
            // 0x2c1b64: 0x2484fa90  addiu       $a0, $a0, -0x570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B68u; }
        if (ctx->pc != 0x2C1B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B68u; }
        if (ctx->pc != 0x2C1B68u) { return; }
    }
    ctx->pc = 0x2C1B68u;
label_2c1b68:
    // 0x2c1b68: 0x8f8294b4  lw          $v0, -0x6B4C($gp)
    ctx->pc = 0x2c1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939828)));
    // 0x2c1b6c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2c1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c1b70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1B70u;
    {
        const bool branch_taken_0x2c1b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B70u;
            // 0x2c1b74: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b70) {
            ctx->pc = 0x2C1B8Cu;
            goto label_2c1b8c;
        }
    }
    ctx->pc = 0x2C1B78u;
    // 0x2c1b78: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2c1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2c1b7c: 0xc0628c8  jal         func_18A320
    ctx->pc = 0x2C1B7Cu;
    SET_GPR_U32(ctx, 31, 0x2C1B84u);
    ctx->pc = 0x2C1B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B7Cu;
            // 0x2c1b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A320u;
    if (runtime->hasFunction(0x18A320u)) {
        auto targetFn = runtime->lookupFunction(0x18A320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B84u; }
        if (ctx->pc != 0x2C1B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStereoMode__6CSoundFi_0x18a320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B84u; }
        if (ctx->pc != 0x2C1B84u) { return; }
    }
    ctx->pc = 0x2C1B84u;
label_2c1b84:
    // 0x2c1b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1B84u;
    {
        const bool branch_taken_0x2c1b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B84u;
            // 0x2c1b88: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b84) {
            ctx->pc = 0x2C1B98u;
            goto label_2c1b98;
        }
    }
    ctx->pc = 0x2C1B8Cu;
label_2c1b8c:
    // 0x2c1b8c: 0xc0628c8  jal         func_18A320
    ctx->pc = 0x2C1B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C1B94u);
    ctx->pc = 0x2C1B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B8Cu;
            // 0x2c1b90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A320u;
    if (runtime->hasFunction(0x18A320u)) {
        auto targetFn = runtime->lookupFunction(0x18A320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B94u; }
        if (ctx->pc != 0x2C1B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStereoMode__6CSoundFi_0x18a320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B94u; }
        if (ctx->pc != 0x2C1B94u) { return; }
    }
    ctx->pc = 0x2C1B94u;
label_2c1b94:
    // 0x2c1b94: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2c1b98:
    // 0x2c1b98: 0xc08f01c  jal         func_23C070
    ctx->pc = 0x2C1B98u;
    SET_GPR_U32(ctx, 31, 0x2C1BA0u);
    ctx->pc = 0x2C1B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B98u;
            // 0x2c1b9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C070u;
    if (runtime->hasFunction(0x23C070u)) {
        auto targetFn = runtime->lookupFunction(0x23C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BA0u; }
        if (ctx->pc != 0x2C1BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveMethod__12CMenuKeyFuncFi_0x23c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BA0u; }
        if (ctx->pc != 0x2C1BA0u) { return; }
    }
    ctx->pc = 0x2C1BA0u;
label_2c1ba0:
    // 0x2c1ba0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2C1BA0u;
    {
        const bool branch_taken_0x2c1ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BA0u;
            // 0x2c1ba4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ba0) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1BA8u;
label_2c1ba8:
    // 0x2c1ba8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1bac: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x2C1BACu;
    SET_GPR_U32(ctx, 31, 0x2C1BB4u);
    ctx->pc = 0x2C1BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BACu;
            // 0x2c1bb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BB4u; }
        if (ctx->pc != 0x2C1BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BB4u; }
        if (ctx->pc != 0x2C1BB4u) { return; }
    }
    ctx->pc = 0x2C1BB4u;
label_2c1bb4:
    // 0x2c1bb4: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x2C1BB4u;
    SET_GPR_U32(ctx, 31, 0x2C1BBCu);
    ctx->pc = 0x2C1BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BB4u;
            // 0x2c1bb8: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BBCu; }
        if (ctx->pc != 0x2C1BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BBCu; }
        if (ctx->pc != 0x2C1BBCu) { return; }
    }
    ctx->pc = 0x2C1BBCu;
label_2c1bbc:
    // 0x2c1bbc: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1bc0: 0xc08f840  jal         func_23E100
    ctx->pc = 0x2C1BC0u;
    SET_GPR_U32(ctx, 31, 0x2C1BC8u);
    ctx->pc = 0x2C1BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BC0u;
            // 0x2c1bc4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BC8u; }
        if (ctx->pc != 0x2C1BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BC8u; }
        if (ctx->pc != 0x2C1BC8u) { return; }
    }
    ctx->pc = 0x2C1BC8u;
label_2c1bc8:
    // 0x2c1bc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c1bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1bcc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c1bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c1bd0: 0xc08edcc  jal         func_23B730
    ctx->pc = 0x2C1BD0u;
    SET_GPR_U32(ctx, 31, 0x2C1BD8u);
    ctx->pc = 0x2C1BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BD0u;
            // 0x2c1bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B730u;
    if (runtime->hasFunction(0x23B730u)) {
        auto targetFn = runtime->lookupFunction(0x23B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BD8u; }
        if (ctx->pc != 0x2C1BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuListSelectKeyCheck__Fii_0x23b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BD8u; }
        if (ctx->pc != 0x2C1BD8u) { return; }
    }
    ctx->pc = 0x2C1BD8u;
label_2c1bd8:
    // 0x2c1bd8: 0xc78c8508  lwc1        $f12, -0x7AF8($gp)
    ctx->pc = 0x2c1bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c1bdc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2C1BDCu;
    SET_GPR_U32(ctx, 31, 0x2C1BE4u);
    ctx->pc = 0x2C1BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BDCu;
            // 0x2c1be0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BE4u; }
        if (ctx->pc != 0x2C1BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BE4u; }
        if (ctx->pc != 0x2C1BE4u) { return; }
    }
    ctx->pc = 0x2C1BE4u;
label_2c1be4:
    // 0x2c1be4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c1be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1be8: 0x26850374  addiu       $a1, $s4, 0x374
    ctx->pc = 0x2c1be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 884));
    // 0x2c1bec: 0x26860378  addiu       $a2, $s4, 0x378
    ctx->pc = 0x2c1becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 888));
    // 0x2c1bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1bf4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c1bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1bf8: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x2c1bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c1bfc: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x2C1BFCu;
    SET_GPR_U32(ctx, 31, 0x2C1C04u);
    ctx->pc = 0x2C1C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BFCu;
            // 0x2c1c00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C04u; }
        if (ctx->pc != 0x2C1C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C04u; }
        if (ctx->pc != 0x2C1C04u) { return; }
    }
    ctx->pc = 0x2C1C04u;
label_2c1c04:
    // 0x2c1c04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1C04u;
    {
        const bool branch_taken_0x2c1c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c04) {
            ctx->pc = 0x2C1C10u;
            goto label_2c1c10;
        }
    }
    ctx->pc = 0x2C1C0Cu;
    // 0x2c1c0c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c1c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1c10:
    // 0x2c1c10: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x2c1c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x2c1c14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1C14u;
    {
        const bool branch_taken_0x2c1c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C14u;
            // 0x2c1c18: 0x8e84037c  lw          $a0, 0x37C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c14) {
            ctx->pc = 0x2C1C24u;
            goto label_2c1c24;
        }
    }
    ctx->pc = 0x2C1C1Cu;
    // 0x2c1c1c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2c1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c1c20: 0xae82037c  sw          $v0, 0x37C($s4)
    ctx->pc = 0x2c1c20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 892), GPR_U32(ctx, 2));
label_2c1c24:
    // 0x2c1c24: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x2c1c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x2c1c28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1C28u;
    {
        const bool branch_taken_0x2c1c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c28) {
            ctx->pc = 0x2C1C3Cu;
            goto label_2c1c3c;
        }
    }
    ctx->pc = 0x2C1C30u;
    // 0x2c1c30: 0x8e82037c  lw          $v0, 0x37C($s4)
    ctx->pc = 0x2c1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1c34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c1c38: 0xae82037c  sw          $v0, 0x37C($s4)
    ctx->pc = 0x2c1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 892), GPR_U32(ctx, 2));
label_2c1c3c:
    // 0x2c1c3c: 0x8e82037c  lw          $v0, 0x37C($s4)
    ctx->pc = 0x2c1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1c40: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1C40u;
    {
        const bool branch_taken_0x2c1c40 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c1c40) {
            ctx->pc = 0x2C1C4Cu;
            goto label_2c1c4c;
        }
    }
    ctx->pc = 0x2C1C48u;
    // 0x2c1c48: 0xae80037c  sw          $zero, 0x37C($s4)
    ctx->pc = 0x2c1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 892), GPR_U32(ctx, 0));
label_2c1c4c:
    // 0x2c1c4c: 0x8e830374  lw          $v1, 0x374($s4)
    ctx->pc = 0x2c1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
    // 0x2c1c50: 0x8e82037c  lw          $v0, 0x37C($s4)
    ctx->pc = 0x2c1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1c54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c1c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c1c58: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2c1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2c1c5c: 0x8c630114  lw          $v1, 0x114($v1)
    ctx->pc = 0x2c1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x2c1c60: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c1c60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c1c64: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1C64u;
    {
        const bool branch_taken_0x2c1c64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C64u;
            // 0x2c1c68: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c64) {
            ctx->pc = 0x2C1C70u;
            goto label_2c1c70;
        }
    }
    ctx->pc = 0x2C1C6Cu;
    // 0x2c1c6c: 0xae82037c  sw          $v0, 0x37C($s4)
    ctx->pc = 0x2c1c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 892), GPR_U32(ctx, 2));
label_2c1c70:
    // 0x2c1c70: 0x8e82037c  lw          $v0, 0x37C($s4)
    ctx->pc = 0x2c1c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1c74: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1C74u;
    {
        const bool branch_taken_0x2c1c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c1c74) {
            ctx->pc = 0x2C1C80u;
            goto label_2c1c80;
        }
    }
    ctx->pc = 0x2C1C7Cu;
    // 0x2c1c7c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c1c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1c80:
    // 0x2c1c80: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1C80u;
    {
        const bool branch_taken_0x2c1c80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C80u;
            // 0x2c1c84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c80) {
            ctx->pc = 0x2C1C94u;
            goto label_2c1c94;
        }
    }
    ctx->pc = 0x2C1C88u;
    // 0x2c1c88: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C1C88u;
    SET_GPR_U32(ctx, 31, 0x2C1C90u);
    ctx->pc = 0x2C1C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C88u;
            // 0x2c1c8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C90u; }
        if (ctx->pc != 0x2C1C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C90u; }
        if (ctx->pc != 0x2C1C90u) { return; }
    }
    ctx->pc = 0x2C1C90u;
label_2c1c90:
    // 0x2c1c90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c94:
    // 0x2c1c94: 0xc08f8b8  jal         func_23E2E0
    ctx->pc = 0x2C1C94u;
    SET_GPR_U32(ctx, 31, 0x2C1C9Cu);
    ctx->pc = 0x23E2E0u;
    if (runtime->hasFunction(0x23E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C9Cu; }
        if (ctx->pc != 0x2C1C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCheckPushButton__Fi_0x23e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C9Cu; }
        if (ctx->pc != 0x2C1C9Cu) { return; }
    }
    ctx->pc = 0x2C1C9Cu;
label_2c1c9c:
    // 0x2c1c9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1ca0: 0x10430040  beq         $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2C1CA0u;
    {
        const bool branch_taken_0x2c1ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C1CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CA0u;
            // 0x2c1ca4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ca0) {
            ctx->pc = 0x2C1DA4u;
            goto label_2c1da4;
        }
    }
    ctx->pc = 0x2C1CA8u;
    // 0x2c1ca8: 0x10440036  beq         $v0, $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C1CA8u;
    {
        const bool branch_taken_0x2c1ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C1CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CA8u;
            // 0x2c1cac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ca8) {
            ctx->pc = 0x2C1D84u;
            goto label_2c1d84;
        }
    }
    ctx->pc = 0x2C1CB0u;
    // 0x2c1cb0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1CB0u;
    {
        const bool branch_taken_0x2c1cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c1cb0) {
            ctx->pc = 0x2C1CC0u;
            goto label_2c1cc0;
        }
    }
    ctx->pc = 0x2C1CB8u;
    // 0x2c1cb8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2C1CB8u;
    {
        const bool branch_taken_0x2c1cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1cb8) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1CC0u;
label_2c1cc0:
    // 0x2c1cc0: 0x8e850374  lw          $a1, 0x374($s4)
    ctx->pc = 0x2c1cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
    // 0x2c1cc4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2c1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c1cc8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1CC8u;
    {
        const bool branch_taken_0x2c1cc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CC8u;
            // 0x2c1ccc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cc8) {
            ctx->pc = 0x2C1CDCu;
            goto label_2c1cdc;
        }
    }
    ctx->pc = 0x2C1CD0u;
    // 0x2c1cd0: 0x8282037c  lb          $v0, 0x37C($s4)
    ctx->pc = 0x2c1cd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1cd4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C1CD4u;
    {
        const bool branch_taken_0x2c1cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CD4u;
            // 0x2c1cd8: 0xa2820328  sb          $v0, 0x328($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 808), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cd4) {
            ctx->pc = 0x2C1D68u;
            goto label_2c1d68;
        }
    }
    ctx->pc = 0x2C1CDCu;
label_2c1cdc:
    // 0x2c1cdc: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1CDCu;
    {
        const bool branch_taken_0x2c1cdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CDCu;
            // 0x2c1ce0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cdc) {
            ctx->pc = 0x2C1CF0u;
            goto label_2c1cf0;
        }
    }
    ctx->pc = 0x2C1CE4u;
    // 0x2c1ce4: 0x8282037c  lb          $v0, 0x37C($s4)
    ctx->pc = 0x2c1ce4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1ce8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C1CE8u;
    {
        const bool branch_taken_0x2c1ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CE8u;
            // 0x2c1cec: 0xa2820329  sb          $v0, 0x329($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 809), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ce8) {
            ctx->pc = 0x2C1D68u;
            goto label_2c1d68;
        }
    }
    ctx->pc = 0x2C1CF0u;
label_2c1cf0:
    // 0x2c1cf0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1CF0u;
    {
        const bool branch_taken_0x2c1cf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CF0u;
            // 0x2c1cf4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cf0) {
            ctx->pc = 0x2C1D04u;
            goto label_2c1d04;
        }
    }
    ctx->pc = 0x2C1CF8u;
    // 0x2c1cf8: 0x8282037c  lb          $v0, 0x37C($s4)
    ctx->pc = 0x2c1cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1cfc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C1CFCu;
    {
        const bool branch_taken_0x2c1cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CFCu;
            // 0x2c1d00: 0xa282032a  sb          $v0, 0x32A($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 810), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1cfc) {
            ctx->pc = 0x2C1D68u;
            goto label_2c1d68;
        }
    }
    ctx->pc = 0x2C1D04u;
label_2c1d04:
    // 0x2c1d04: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1D04u;
    {
        const bool branch_taken_0x2c1d04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1d04) {
            ctx->pc = 0x2C1D18u;
            goto label_2c1d18;
        }
    }
    ctx->pc = 0x2C1D0Cu;
    // 0x2c1d0c: 0x8282037c  lb          $v0, 0x37C($s4)
    ctx->pc = 0x2c1d0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1d10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C1D10u;
    {
        const bool branch_taken_0x2c1d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D10u;
            // 0x2c1d14: 0xa282032b  sb          $v0, 0x32B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 811), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d10) {
            ctx->pc = 0x2C1D68u;
            goto label_2c1d68;
        }
    }
    ctx->pc = 0x2C1D18u;
label_2c1d18:
    // 0x2c1d18: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1D18u;
    {
        const bool branch_taken_0x2c1d18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C1D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D18u;
            // 0x2c1d1c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d18) {
            ctx->pc = 0x2C1D30u;
            goto label_2c1d30;
        }
    }
    ctx->pc = 0x2C1D20u;
    // 0x2c1d20: 0x8e820310  lw          $v0, 0x310($s4)
    ctx->pc = 0x2c1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
    // 0x2c1d24: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C1D24u;
    {
        const bool branch_taken_0x2c1d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C1D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D24u;
            // 0x2c1d28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d24) {
            ctx->pc = 0x2C1D6Cu;
            goto label_2c1d6c;
        }
    }
    ctx->pc = 0x2C1D2Cu;
    // 0x2c1d2c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2c1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2c1d30:
    // 0x2c1d30: 0x8e84037c  lw          $a0, 0x37C($s4)
    ctx->pc = 0x2c1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1d34: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2c1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c1d38: 0x8c630254  lw          $v1, 0x254($v1)
    ctx->pc = 0x2c1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 596)));
    // 0x2c1d3c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1d40: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2c1d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2c1d44: 0x8e830374  lw          $v1, 0x374($s4)
    ctx->pc = 0x2c1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
    // 0x2c1d48: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1D48u;
    {
        const bool branch_taken_0x2c1d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1d48) {
            ctx->pc = 0x2C1D68u;
            goto label_2c1d68;
        }
    }
    ctx->pc = 0x2C1D50u;
    // 0x2c1d50: 0x8e82037c  lw          $v0, 0x37C($s4)
    ctx->pc = 0x2c1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
    // 0x2c1d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1d58: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1D58u;
    {
        const bool branch_taken_0x2c1d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c1d58) {
            ctx->pc = 0x2C1D68u;
            goto label_2c1d68;
        }
    }
    ctx->pc = 0x2C1D60u;
    // 0x2c1d60: 0x8e820274  lw          $v0, 0x274($s4)
    ctx->pc = 0x2c1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 628)));
    // 0x2c1d64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c1d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2c1d68:
    // 0x2c1d68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c1d6c:
    // 0x2c1d6c: 0xc0b0928  jal         func_2C24A0
    ctx->pc = 0x2C1D6Cu;
    SET_GPR_U32(ctx, 31, 0x2C1D74u);
    ctx->pc = 0x2C24A0u;
    if (runtime->hasFunction(0x2C24A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C24A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D74u; }
        if (ctx->pc != 0x2C1D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateOptionForm__11CMenuOptionFv_0x2c24a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D74u; }
        if (ctx->pc != 0x2C1D74u) { return; }
    }
    ctx->pc = 0x2C1D74u;
label_2c1d74:
    // 0x2c1d74: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C1D74u;
    SET_GPR_U32(ctx, 31, 0x2C1D7Cu);
    ctx->pc = 0x2C1D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D74u;
            // 0x2c1d78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D7Cu; }
        if (ctx->pc != 0x2C1D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D7Cu; }
        if (ctx->pc != 0x2C1D7Cu) { return; }
    }
    ctx->pc = 0x2C1D7Cu;
label_2c1d7c:
    // 0x2c1d7c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C1D7Cu;
    {
        const bool branch_taken_0x2c1d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d7c) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1D84u;
label_2c1d84:
    // 0x2c1d84: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C1D84u;
    SET_GPR_U32(ctx, 31, 0x2C1D8Cu);
    ctx->pc = 0x2C1D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D84u;
            // 0x2c1d88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D8Cu; }
        if (ctx->pc != 0x2C1D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D8Cu; }
        if (ctx->pc != 0x2C1D8Cu) { return; }
    }
    ctx->pc = 0x2C1D8Cu;
label_2c1d8c:
    // 0x2c1d8c: 0xc0bd86c  jal         func_2F61B0
    ctx->pc = 0x2C1D8Cu;
    SET_GPR_U32(ctx, 31, 0x2C1D94u);
    ctx->pc = 0x2C1D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D8Cu;
            // 0x2c1d90: 0x268402f4  addiu       $a0, $s4, 0x2F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 756));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F61B0u;
    if (runtime->hasFunction(0x2F61B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F61B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D94u; }
        if (ctx->pc != 0x2C1D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSV_CONFIG_OPTION__FP16SV_CONFIG_OPTION_0x2f61b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D94u; }
        if (ctx->pc != 0x2C1D94u) { return; }
    }
    ctx->pc = 0x2C1D94u;
label_2c1d94:
    // 0x2c1d94: 0xc0b0928  jal         func_2C24A0
    ctx->pc = 0x2C1D94u;
    SET_GPR_U32(ctx, 31, 0x2C1D9Cu);
    ctx->pc = 0x2C1D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D94u;
            // 0x2c1d98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C24A0u;
    if (runtime->hasFunction(0x2C24A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C24A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D9Cu; }
        if (ctx->pc != 0x2C1D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateOptionForm__11CMenuOptionFv_0x2c24a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D9Cu; }
        if (ctx->pc != 0x2C1D9Cu) { return; }
    }
    ctx->pc = 0x2C1D9Cu;
label_2c1d9c:
    // 0x2c1d9c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C1D9Cu;
    {
        const bool branch_taken_0x2c1d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d9c) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1DA4u;
label_2c1da4:
    // 0x2c1da4: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x2c1da4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c1da8: 0x268502f4  addiu       $a1, $s4, 0x2F4
    ctx->pc = 0x2c1da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 756));
    // 0x2c1dac: 0x8f8494b4  lw          $a0, -0x6B4C($gp)
    ctx->pc = 0x2c1dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939828)));
    // 0x2c1db0: 0xc049c18  jal         func_127060
    ctx->pc = 0x2C1DB0u;
    SET_GPR_U32(ctx, 31, 0x2C1DB8u);
    ctx->pc = 0x2C1DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DB0u;
            // 0x2c1db4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DB8u; }
        if (ctx->pc != 0x2C1DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DB8u; }
        if (ctx->pc != 0x2C1DB8u) { return; }
    }
    ctx->pc = 0x2C1DB8u;
label_2c1db8:
    // 0x2c1db8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1dbc: 0xc08f01c  jal         func_23C070
    ctx->pc = 0x2C1DBCu;
    SET_GPR_U32(ctx, 31, 0x2C1DC4u);
    ctx->pc = 0x2C1DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DBCu;
            // 0x2c1dc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C070u;
    if (runtime->hasFunction(0x23C070u)) {
        auto targetFn = runtime->lookupFunction(0x23C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DC4u; }
        if (ctx->pc != 0x2C1DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveMethod__12CMenuKeyFuncFi_0x23c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DC4u; }
        if (ctx->pc != 0x2C1DC4u) { return; }
    }
    ctx->pc = 0x2C1DC4u;
label_2c1dc4:
    // 0x2c1dc4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1dc8: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x2C1DC8u;
    SET_GPR_U32(ctx, 31, 0x2C1DD0u);
    ctx->pc = 0x2C1DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DC8u;
            // 0x2c1dcc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DD0u; }
        if (ctx->pc != 0x2C1DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DD0u; }
        if (ctx->pc != 0x2C1DD0u) { return; }
    }
    ctx->pc = 0x2C1DD0u;
label_2c1dd0:
    // 0x2c1dd0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c1dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c1dd4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c1dd8: 0x8c23d618  lw          $v1, -0x29E8($at)
    ctx->pc = 0x2c1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956568)));
    // 0x2c1ddc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1DDCu;
    {
        const bool branch_taken_0x2c1ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DDCu;
            // 0x2c1de0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ddc) {
            ctx->pc = 0x2C1DFCu;
            goto label_2c1dfc;
        }
    }
    ctx->pc = 0x2C1DE4u;
    // 0x2c1de4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1de8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1dec: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C1DECu;
    SET_GPR_U32(ctx, 31, 0x2C1DF4u);
    ctx->pc = 0x2C1DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DECu;
            // 0x2c1df0: 0x24a5faa8  addiu       $a1, $a1, -0x558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DF4u; }
        if (ctx->pc != 0x2C1DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DF4u; }
        if (ctx->pc != 0x2C1DF4u) { return; }
    }
    ctx->pc = 0x2C1DF4u;
label_2c1df4:
    // 0x2c1df4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C1DF4u;
    {
        const bool branch_taken_0x2c1df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1df4) {
            ctx->pc = 0x2C1E28u;
            goto label_2c1e28;
        }
    }
    ctx->pc = 0x2C1DFCu;
label_2c1dfc:
    // 0x2c1dfc: 0xc08900c  jal         func_224030
    ctx->pc = 0x2C1DFCu;
    SET_GPR_U32(ctx, 31, 0x2C1E04u);
    ctx->pc = 0x2C1E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DFCu;
            // 0x2c1e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E04u; }
        if (ctx->pc != 0x2C1E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E04u; }
        if (ctx->pc != 0x2C1E04u) { return; }
    }
    ctx->pc = 0x2C1E04u;
label_2c1e04:
    // 0x2c1e04: 0xc08d220  jal         func_234880
    ctx->pc = 0x2C1E04u;
    SET_GPR_U32(ctx, 31, 0x2C1E0Cu);
    ctx->pc = 0x2C1E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E04u;
            // 0x2c1e08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E0Cu; }
        if (ctx->pc != 0x2C1E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E0Cu; }
        if (ctx->pc != 0x2C1E0Cu) { return; }
    }
    ctx->pc = 0x2C1E0Cu;
label_2c1e0c:
    // 0x2c1e0c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1e10: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x2C1E10u;
    SET_GPR_U32(ctx, 31, 0x2C1E18u);
    ctx->pc = 0x2C1E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E10u;
            // 0x2c1e14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E18u; }
        if (ctx->pc != 0x2C1E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E18u; }
        if (ctx->pc != 0x2C1E18u) { return; }
    }
    ctx->pc = 0x2C1E18u;
label_2c1e18:
    // 0x2c1e18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1e1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e20: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C1E20u;
    SET_GPR_U32(ctx, 31, 0x2C1E28u);
    ctx->pc = 0x2C1E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E20u;
            // 0x2c1e24: 0x24a5f948  addiu       $a1, $a1, -0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E28u; }
        if (ctx->pc != 0x2C1E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E28u; }
        if (ctx->pc != 0x2C1E28u) { return; }
    }
    ctx->pc = 0x2C1E28u;
label_2c1e28:
    // 0x2c1e28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c1e2c:
    // 0x2c1e2c: 0xc0b07f8  jal         func_2C1FE0
    ctx->pc = 0x2C1E2Cu;
    SET_GPR_U32(ctx, 31, 0x2C1E34u);
    ctx->pc = 0x2C1FE0u;
    if (runtime->hasFunction(0x2C1FE0u)) {
        auto targetFn = runtime->lookupFunction(0x2C1FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E34u; }
        if (ctx->pc != 0x2C1E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__11CMenuOptionFv_0x2c1fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E34u; }
        if (ctx->pc != 0x2C1E34u) { return; }
    }
    ctx->pc = 0x2C1E34u;
label_2c1e34:
    // 0x2c1e34: 0xc08acc8  jal         func_22B320
    ctx->pc = 0x2C1E34u;
    SET_GPR_U32(ctx, 31, 0x2C1E3Cu);
    ctx->pc = 0x2C1E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E34u;
            // 0x2c1e38: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E3Cu; }
        if (ctx->pc != 0x2C1E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E3Cu; }
        if (ctx->pc != 0x2C1E3Cu) { return; }
    }
    ctx->pc = 0x2C1E3Cu;
label_2c1e3c:
    // 0x2c1e3c: 0xdf829cb0  ld          $v0, -0x6350($gp)
    ctx->pc = 0x2c1e3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941872)));
    // 0x2c1e40: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2c1e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c1e44: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2c1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2c1e48: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2c1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c1e4c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2c1e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2c1e50: 0xdf829cb8  ld          $v0, -0x6348($gp)
    ctx->pc = 0x2c1e50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941880)));
    // 0x2c1e54: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2c1e54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2c1e58: 0xdf828510  ld          $v0, -0x7AF0($gp)
    ctx->pc = 0x2c1e58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x2c1e5c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2c1e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2c1e60: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2c1e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1e64: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1E64u;
    {
        const bool branch_taken_0x2c1e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E64u;
            // 0x2c1e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e64) {
            ctx->pc = 0x2C1E8Cu;
            goto label_2c1e8c;
        }
    }
    ctx->pc = 0x2C1E6Cu;
    // 0x2c1e6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1E6Cu;
    {
        const bool branch_taken_0x2c1e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E6Cu;
            // 0x2c1e70: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e6c) {
            ctx->pc = 0x2C1E7Cu;
            goto label_2c1e7c;
        }
    }
    ctx->pc = 0x2C1E74u;
    // 0x2c1e74: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2C1E74u;
    {
        const bool branch_taken_0x2c1e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E74u;
            // 0x2c1e78: 0x8e820380  lw          $v0, 0x380($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e74) {
            ctx->pc = 0x2C1F94u;
            goto label_2c1f94;
        }
    }
    ctx->pc = 0x2C1E7Cu;
label_2c1e7c:
    // 0x2c1e7c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c1e80: 0x8c23d618  lw          $v1, -0x29E8($at)
    ctx->pc = 0x2c1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956568)));
    // 0x2c1e84: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C1E84u;
    {
        const bool branch_taken_0x2c1e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1e84) {
            ctx->pc = 0x2C1F90u;
            goto label_2c1f90;
        }
    }
    ctx->pc = 0x2C1E8Cu;
label_2c1e8c:
    // 0x2c1e8c: 0x8e860374  lw          $a2, 0x374($s4)
    ctx->pc = 0x2c1e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
    // 0x2c1e90: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x2c1e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c1e94: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1E94u;
    {
        const bool branch_taken_0x2c1e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E94u;
            // 0x2c1e98: 0x8e87037c  lw          $a3, 0x37C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e94) {
            ctx->pc = 0x2C1EB4u;
            goto label_2c1eb4;
        }
    }
    ctx->pc = 0x2C1E9Cu;
    // 0x2c1e9c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1ea0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c1ea4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C1EA4u;
    SET_GPR_U32(ctx, 31, 0x2C1EACu);
    ctx->pc = 0x2C1EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1EA4u;
            // 0x2c1ea8: 0x24a5fab8  addiu       $a1, $a1, -0x548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EACu; }
        if (ctx->pc != 0x2C1EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EACu; }
        if (ctx->pc != 0x2C1EACu) { return; }
    }
    ctx->pc = 0x2C1EACu;
label_2c1eac:
    // 0x2c1eac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1EACu;
    {
        const bool branch_taken_0x2c1eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1EACu;
            // 0x2c1eb0: 0x8f849ca8  lw          $a0, -0x6358($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1eac) {
            ctx->pc = 0x2C1EC8u;
            goto label_2c1ec8;
        }
    }
    ctx->pc = 0x2C1EB4u;
label_2c1eb4:
    // 0x2c1eb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1eb8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c1ebc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C1EBCu;
    SET_GPR_U32(ctx, 31, 0x2C1EC4u);
    ctx->pc = 0x2C1EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1EBCu;
            // 0x2c1ec0: 0x24a5fac8  addiu       $a1, $a1, -0x538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EC4u; }
        if (ctx->pc != 0x2C1EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EC4u; }
        if (ctx->pc != 0x2C1EC4u) { return; }
    }
    ctx->pc = 0x2C1EC4u;
label_2c1ec4:
    // 0x2c1ec4: 0x8f849ca8  lw          $a0, -0x6358($gp)
    ctx->pc = 0x2c1ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941864)));
label_2c1ec8:
    // 0x2c1ec8: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x2c1ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2c1ecc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2c1eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c1ed0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2c1ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c1ed4: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C1ED4u;
    SET_GPR_U32(ctx, 31, 0x2C1EDCu);
    ctx->pc = 0x2C1ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1ED4u;
            // 0x2c1ed8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EDCu; }
        if (ctx->pc != 0x2C1EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EDCu; }
        if (ctx->pc != 0x2C1EDCu) { return; }
    }
    ctx->pc = 0x2C1EDCu;
label_2c1edc:
    // 0x2c1edc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c1ee0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1ee4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c1ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c1ee8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2c1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2c1eec: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2c1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x2c1ef0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1ef4: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x2c1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x2c1ef8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2c1efc: 0x8e860374  lw          $a2, 0x374($s4)
    ctx->pc = 0x2c1efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
    // 0x2c1f00: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C1F00u;
    SET_GPR_U32(ctx, 31, 0x2C1F08u);
    ctx->pc = 0x2C1F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F00u;
            // 0x2c1f04: 0x24a5fad8  addiu       $a1, $a1, -0x528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F08u; }
        if (ctx->pc != 0x2C1F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F08u; }
        if (ctx->pc != 0x2C1F08u) { return; }
    }
    ctx->pc = 0x2C1F08u;
label_2c1f08:
    // 0x2c1f08: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c1f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c1f0c: 0x27b2009c  addiu       $s2, $sp, 0x9C
    ctx->pc = 0x2c1f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2c1f10: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2c1f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c1f14: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x2c1f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2c1f18: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x2C1F18u;
    SET_GPR_U32(ctx, 31, 0x2C1F20u);
    ctx->pc = 0x2C1F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F18u;
            // 0x2c1f1c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F20u; }
        if (ctx->pc != 0x2C1F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F20u; }
        if (ctx->pc != 0x2C1F20u) { return; }
    }
    ctx->pc = 0x2C1F20u;
label_2c1f20:
    // 0x2c1f20: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2c1f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c1f24: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1f28: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2c1f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2c1f2c: 0xc08f058  jal         func_23C160
    ctx->pc = 0x2C1F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F34u);
    ctx->pc = 0x2C1F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F2Cu;
            // 0x2c1f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C160u;
    if (runtime->hasFunction(0x23C160u)) {
        auto targetFn = runtime->lookupFunction(0x23C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F34u; }
        if (ctx->pc != 0x2C1F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuWH__12CMenuKeyFuncFiii_0x23c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F34u; }
        if (ctx->pc != 0x2C1F34u) { return; }
    }
    ctx->pc = 0x2C1F34u;
label_2c1f34:
    // 0x2c1f34: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c1f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c1f38: 0x27b200ac  addiu       $s2, $sp, 0xAC
    ctx->pc = 0x2c1f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2c1f3c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1f40: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x2c1f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2c1f44: 0x24a5faf0  addiu       $a1, $a1, -0x510
    ctx->pc = 0x2c1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966000));
    // 0x2c1f48: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x2C1F48u;
    SET_GPR_U32(ctx, 31, 0x2C1F50u);
    ctx->pc = 0x2C1F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F48u;
            // 0x2c1f4c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F50u; }
        if (ctx->pc != 0x2C1F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F50u; }
        if (ctx->pc != 0x2C1F50u) { return; }
    }
    ctx->pc = 0x2C1F50u;
label_2c1f50:
    // 0x2c1f50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1f54: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2c1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c1f58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c1f58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c1f5c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1F5Cu;
    {
        const bool branch_taken_0x2c1f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f5c) {
            ctx->pc = 0x2C1F68u;
            goto label_2c1f68;
        }
    }
    ctx->pc = 0x2C1F64u;
    // 0x2c1f64: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c1f68:
    // 0x2c1f68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c1f6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1f70: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c1f70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c1f74: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1F74u;
    {
        const bool branch_taken_0x2c1f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f74) {
            ctx->pc = 0x2C1F80u;
            goto label_2c1f80;
        }
    }
    ctx->pc = 0x2C1F7Cu;
    // 0x2c1f7c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c1f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c1f80:
    // 0x2c1f80: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1f84: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2c1f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c1f88: 0xc08ef88  jal         func_23BE20
    ctx->pc = 0x2C1F88u;
    SET_GPR_U32(ctx, 31, 0x2C1F90u);
    ctx->pc = 0x2C1F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F88u;
            // 0x2c1f8c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F90u; }
        if (ctx->pc != 0x2C1F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F90u; }
        if (ctx->pc != 0x2C1F90u) { return; }
    }
    ctx->pc = 0x2C1F90u;
label_2c1f90:
    // 0x2c1f90: 0x8e820380  lw          $v0, 0x380($s4)
    ctx->pc = 0x2c1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
label_2c1f94:
    // 0x2c1f94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1F94u;
    {
        const bool branch_taken_0x2c1f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F94u;
            // 0x2c1f98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f94) {
            ctx->pc = 0x2C1FB4u;
            goto label_2c1fb4;
        }
    }
    ctx->pc = 0x2C1F9Cu;
    // 0x2c1f9c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2c1f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c1fa0: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x2c1fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2c1fa4: 0xc08f000  jal         func_23C000
    ctx->pc = 0x2C1FA4u;
    SET_GPR_U32(ctx, 31, 0x2C1FACu);
    ctx->pc = 0x2C1FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1FA4u;
            // 0x2c1fa8: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1FACu; }
        if (ctx->pc != 0x2C1FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1FACu; }
        if (ctx->pc != 0x2C1FACu) { return; }
    }
    ctx->pc = 0x2C1FACu;
label_2c1fac:
    // 0x2c1fac: 0xae800380  sw          $zero, 0x380($s4)
    ctx->pc = 0x2c1facu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 896), GPR_U32(ctx, 0));
    // 0x2c1fb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c1fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1fb4:
    // 0x2c1fb4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c1fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c1fb8:
    // 0x2c1fb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c1fb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1fbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c1fbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1fc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c1fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1fc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1FD0u;
            // 0x2c1fd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1FD8u;
}
