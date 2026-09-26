#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__11CManualMenuFv
// Address: 0x2c09a0 - 0x2c1444
void KeyStep__11CManualMenuFv_0x2c09a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__11CManualMenuFv_0x2c09a0");
#endif

    switch (ctx->pc) {
        case 0x2c09ccu: goto label_2c09cc;
        case 0x2c09f4u: goto label_2c09f4;
        case 0x2c09fcu: goto label_2c09fc;
        case 0x2c0a2cu: goto label_2c0a2c;
        case 0x2c0a60u: goto label_2c0a60;
        case 0x2c0a74u: goto label_2c0a74;
        case 0x2c0a80u: goto label_2c0a80;
        case 0x2c0aa8u: goto label_2c0aa8;
        case 0x2c0ab4u: goto label_2c0ab4;
        case 0x2c0ad8u: goto label_2c0ad8;
        case 0x2c0ae0u: goto label_2c0ae0;
        case 0x2c0aecu: goto label_2c0aec;
        case 0x2c0b2cu: goto label_2c0b2c;
        case 0x2c0b4cu: goto label_2c0b4c;
        case 0x2c0b60u: goto label_2c0b60;
        case 0x2c0b6cu: goto label_2c0b6c;
        case 0x2c0b94u: goto label_2c0b94;
        case 0x2c0ba4u: goto label_2c0ba4;
        case 0x2c0be0u: goto label_2c0be0;
        case 0x2c0be8u: goto label_2c0be8;
        case 0x2c0c00u: goto label_2c0c00;
        case 0x2c0c18u: goto label_2c0c18;
        case 0x2c0c24u: goto label_2c0c24;
        case 0x2c0c30u: goto label_2c0c30;
        case 0x2c0c40u: goto label_2c0c40;
        case 0x2c0c6cu: goto label_2c0c6c;
        case 0x2c0c74u: goto label_2c0c74;
        case 0x2c0c84u: goto label_2c0c84;
        case 0x2c0cbcu: goto label_2c0cbc;
        case 0x2c0cccu: goto label_2c0ccc;
        case 0x2c0cfcu: goto label_2c0cfc;
        case 0x2c0d30u: goto label_2c0d30;
        case 0x2c0d3cu: goto label_2c0d3c;
        case 0x2c0d44u: goto label_2c0d44;
        case 0x2c0d60u: goto label_2c0d60;
        case 0x2c0d9cu: goto label_2c0d9c;
        case 0x2c0dc8u: goto label_2c0dc8;
        case 0x2c0dd8u: goto label_2c0dd8;
        case 0x2c0df0u: goto label_2c0df0;
        case 0x2c0e50u: goto label_2c0e50;
        case 0x2c0e70u: goto label_2c0e70;
        case 0x2c0e90u: goto label_2c0e90;
        case 0x2c0ea4u: goto label_2c0ea4;
        case 0x2c0eb4u: goto label_2c0eb4;
        case 0x2c0eccu: goto label_2c0ecc;
        case 0x2c0f04u: goto label_2c0f04;
        case 0x2c0f20u: goto label_2c0f20;
        case 0x2c0f3cu: goto label_2c0f3c;
        case 0x2c0f58u: goto label_2c0f58;
        case 0x2c0f74u: goto label_2c0f74;
        case 0x2c0f90u: goto label_2c0f90;
        case 0x2c0fc8u: goto label_2c0fc8;
        case 0x2c0fd8u: goto label_2c0fd8;
        case 0x2c0ff8u: goto label_2c0ff8;
        case 0x2c102cu: goto label_2c102c;
        case 0x2c1064u: goto label_2c1064;
        case 0x2c10c0u: goto label_2c10c0;
        case 0x2c10dcu: goto label_2c10dc;
        case 0x2c1100u: goto label_2c1100;
        case 0x2c1110u: goto label_2c1110;
        case 0x2c1118u: goto label_2c1118;
        case 0x2c1120u: goto label_2c1120;
        case 0x2c1128u: goto label_2c1128;
        case 0x2c1130u: goto label_2c1130;
        case 0x2c1140u: goto label_2c1140;
        case 0x2c1184u: goto label_2c1184;
        case 0x2c1238u: goto label_2c1238;
        case 0x2c1240u: goto label_2c1240;
        case 0x2c125cu: goto label_2c125c;
        case 0x2c126cu: goto label_2c126c;
        case 0x2c1280u: goto label_2c1280;
        case 0x2c12b4u: goto label_2c12b4;
        case 0x2c12c8u: goto label_2c12c8;
        case 0x2c12f4u: goto label_2c12f4;
        case 0x2c12fcu: goto label_2c12fc;
        case 0x2c1304u: goto label_2c1304;
        case 0x2c1398u: goto label_2c1398;
        case 0x2c13bcu: goto label_2c13bc;
        case 0x2c13d0u: goto label_2c13d0;
        case 0x2c13f0u: goto label_2c13f0;
        case 0x2c1404u: goto label_2c1404;
        case 0x2c1420u: goto label_2c1420;
        default: break;
    }

    ctx->pc = 0x2c09a0u;

    // 0x2c09a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c09a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c09a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c09a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c09a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c09a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c09ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c09acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c09b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c09b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c09b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c09b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c09b8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2c09b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c09bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c09bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c09c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c09c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c09c4: 0xc08d208  jal         func_234820
    ctx->pc = 0x2C09C4u;
    SET_GPR_U32(ctx, 31, 0x2C09CCu);
    ctx->pc = 0x2C09C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C09C4u;
            // 0x2c09c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234820u;
    if (runtime->hasFunction(0x234820u)) {
        auto targetFn = runtime->lookupFunction(0x234820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C09CCu; }
        if (ctx->pc != 0x2C09CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonMenuModeID__Fv_0x234820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C09CCu; }
        if (ctx->pc != 0x2C09CCu) { return; }
    }
    ctx->pc = 0x2C09CCu;
label_2c09cc:
    // 0x2c09cc: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x2c09ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c09d0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2c09d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c09d4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C09D4u;
    {
        const bool branch_taken_0x2c09d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c09d4) {
            ctx->pc = 0x2C09E0u;
            goto label_2c09e0;
        }
    }
    ctx->pc = 0x2C09DCu;
    // 0x2c09dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c09dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c09e0:
    // 0x2c09e0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c09e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c09e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c09e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c09e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c09e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c09ec: 0xc08ad64  jal         func_22B590
    ctx->pc = 0x2C09ECu;
    SET_GPR_U32(ctx, 31, 0x2C09F4u);
    ctx->pc = 0x2C09F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C09ECu;
            // 0x2c09f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B590u;
    if (runtime->hasFunction(0x22B590u)) {
        auto targetFn = runtime->lookupFunction(0x22B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C09F4u; }
        if (ctx->pc != 0x2C09F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMainMenuIconMove__18CMenuPosDataManageFPiii_0x22b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C09F4u; }
        if (ctx->pc != 0x2C09F4u) { return; }
    }
    ctx->pc = 0x2C09F4u;
label_2c09f4:
    // 0x2c09f4: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x2C09F4u;
    SET_GPR_U32(ctx, 31, 0x2C09FCu);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C09FCu; }
        if (ctx->pc != 0x2C09FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C09FCu; }
        if (ctx->pc != 0x2C09FCu) { return; }
    }
    ctx->pc = 0x2C09FCu;
label_2c09fc:
    // 0x2c09fc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x2c09fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c0a00: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C0A00u;
    {
        const bool branch_taken_0x2c0a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A00u;
            // 0x2c0a04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a00) {
            ctx->pc = 0x2C0ABCu;
            goto label_2c0abc;
        }
    }
    ctx->pc = 0x2C0A08u;
    // 0x2c0a08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0a0c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C0A0Cu;
    {
        const bool branch_taken_0x2c0a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A0Cu;
            // 0x2c0a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a0c) {
            ctx->pc = 0x2C0A94u;
            goto label_2c0a94;
        }
    }
    ctx->pc = 0x2C0A14u;
    // 0x2c0a14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0A14u;
    {
        const bool branch_taken_0x2c0a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c0a14) {
            ctx->pc = 0x2C0A24u;
            goto label_2c0a24;
        }
    }
    ctx->pc = 0x2C0A1Cu;
    // 0x2c0a1c: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x2C0A1Cu;
    {
        const bool branch_taken_0x2c0a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A1Cu;
            // 0x2c0a20: 0x86030014  lh          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a1c) {
            ctx->pc = 0x2C12E0u;
            goto label_2c12e0;
        }
    }
    ctx->pc = 0x2C0A24u;
label_2c0a24:
    // 0x2c0a24: 0xc05239c  jal         func_148E70
    ctx->pc = 0x2C0A24u;
    SET_GPR_U32(ctx, 31, 0x2C0A2Cu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A2Cu; }
        if (ctx->pc != 0x2C0A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A2Cu; }
        if (ctx->pc != 0x2C0A2Cu) { return; }
    }
    ctx->pc = 0x2C0A2Cu;
label_2c0a2c:
    // 0x2c0a2c: 0x1440022b  bnez        $v0, . + 4 + (0x22B << 2)
    ctx->pc = 0x2C0A2Cu;
    {
        const bool branch_taken_0x2c0a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a2c) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0A34u;
    // 0x2c0a34: 0x12400229  beqz        $s2, . + 4 + (0x229 << 2)
    ctx->pc = 0x2C0A34u;
    {
        const bool branch_taken_0x2c0a34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a34) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0A3Cu;
    // 0x2c0a3c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2c0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c0a40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c0a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0a44: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x2c0a44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c0a48: 0x8f9294f8  lw          $s2, -0x6B08($gp)
    ctx->pc = 0x2c0a48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c0a4c: 0x8e440138  lw          $a0, 0x138($s2)
    ctx->pc = 0x2c0a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x2c0a50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0A50u;
    {
        const bool branch_taken_0x2c0a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A50u;
            // 0x2c0a54: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a50) {
            ctx->pc = 0x2C0A60u;
            goto label_2c0a60;
        }
    }
    ctx->pc = 0x2C0A58u;
    // 0x2c0a58: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x2C0A58u;
    SET_GPR_U32(ctx, 31, 0x2C0A60u);
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A60u; }
        if (ctx->pc != 0x2C0A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A60u; }
        if (ctx->pc != 0x2C0A60u) { return; }
    }
    ctx->pc = 0x2C0A60u;
label_2c0a60:
    // 0x2c0a60: 0x8e44013c  lw          $a0, 0x13C($s2)
    ctx->pc = 0x2c0a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x2c0a64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0A64u;
    {
        const bool branch_taken_0x2c0a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A64u;
            // 0x2c0a68: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a64) {
            ctx->pc = 0x2C0A74u;
            goto label_2c0a74;
        }
    }
    ctx->pc = 0x2C0A6Cu;
    // 0x2c0a6c: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x2C0A6Cu;
    SET_GPR_U32(ctx, 31, 0x2C0A74u);
    ctx->pc = 0x2C0A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A6Cu;
            // 0x2c0a70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A74u; }
        if (ctx->pc != 0x2C0A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A74u; }
        if (ctx->pc != 0x2C0A74u) { return; }
    }
    ctx->pc = 0x2C0A74u;
label_2c0a74:
    // 0x2c0a74: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c0a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c0a78: 0xc08f01c  jal         func_23C070
    ctx->pc = 0x2C0A78u;
    SET_GPR_U32(ctx, 31, 0x2C0A80u);
    ctx->pc = 0x2C0A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A78u;
            // 0x2c0a7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C070u;
    if (runtime->hasFunction(0x23C070u)) {
        auto targetFn = runtime->lookupFunction(0x23C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A80u; }
        if (ctx->pc != 0x2C0A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveMethod__12CMenuKeyFuncFi_0x23c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A80u; }
        if (ctx->pc != 0x2C0A80u) { return; }
    }
    ctx->pc = 0x2C0A80u;
label_2c0a80:
    // 0x2c0a80: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x2c0a80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c0a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0a88: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x2c0a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x2c0a8c: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x2C0A8Cu;
    {
        const bool branch_taken_0x2c0a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A8Cu;
            // 0x2c0a90: 0xa3829c80  sb          $v0, -0x6380($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941824), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a8c) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0A94u;
label_2c0a94:
    // 0x2c0a94: 0x12400211  beqz        $s2, . + 4 + (0x211 << 2)
    ctx->pc = 0x2C0A94u;
    {
        const bool branch_taken_0x2c0a94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A94u;
            // 0x2c0a98: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a94) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0A9Cu;
    // 0x2c0a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0aa0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C0AA0u;
    SET_GPR_U32(ctx, 31, 0x2C0AA8u);
    ctx->pc = 0x2C0AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AA0u;
            // 0x2c0aa4: 0x24a5f938  addiu       $a1, $a1, -0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AA8u; }
        if (ctx->pc != 0x2C0AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AA8u; }
        if (ctx->pc != 0x2C0AA8u) { return; }
    }
    ctx->pc = 0x2C0AA8u;
label_2c0aa8:
    // 0x2c0aa8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c0aac: 0xc08f01c  jal         func_23C070
    ctx->pc = 0x2C0AACu;
    SET_GPR_U32(ctx, 31, 0x2C0AB4u);
    ctx->pc = 0x2C0AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AACu;
            // 0x2c0ab0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C070u;
    if (runtime->hasFunction(0x23C070u)) {
        auto targetFn = runtime->lookupFunction(0x23C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AB4u; }
        if (ctx->pc != 0x2C0AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveMethod__12CMenuKeyFuncFi_0x23c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AB4u; }
        if (ctx->pc != 0x2C0AB4u) { return; }
    }
    ctx->pc = 0x2C0AB4u;
label_2c0ab4:
    // 0x2c0ab4: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x2C0AB4u;
    {
        const bool branch_taken_0x2c0ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AB4u;
            // 0x2c0ab8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ab4) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0ABCu;
label_2c0abc:
    // 0x2c0abc: 0x83829c88  lb          $v0, -0x6378($gp)
    ctx->pc = 0x2c0abcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941832)));
    // 0x2c0ac0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0AC0u;
    {
        const bool branch_taken_0x2c0ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AC0u;
            // 0x2c0ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ac0) {
            ctx->pc = 0x2C0AD0u;
            goto label_2c0ad0;
        }
    }
    ctx->pc = 0x2C0AC8u;
    // 0x2c0ac8: 0xa7809c84  sh          $zero, -0x637C($gp)
    ctx->pc = 0x2c0ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941828), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c0acc: 0xa3829c88  sb          $v0, -0x6378($gp)
    ctx->pc = 0x2c0accu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941832), (uint8_t)GPR_U32(ctx, 2));
label_2c0ad0:
    // 0x2c0ad0: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x2C0AD0u;
    SET_GPR_U32(ctx, 31, 0x2C0AD8u);
    ctx->pc = 0x2C0AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AD0u;
            // 0x2c0ad4: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AD8u; }
        if (ctx->pc != 0x2C0AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AD8u; }
        if (ctx->pc != 0x2C0AD8u) { return; }
    }
    ctx->pc = 0x2C0AD8u;
label_2c0ad8:
    // 0x2c0ad8: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x2C0AD8u;
    SET_GPR_U32(ctx, 31, 0x2C0AE0u);
    ctx->pc = 0x2C0ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AD8u;
            // 0x2c0adc: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AE0u; }
        if (ctx->pc != 0x2C0AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AE0u; }
        if (ctx->pc != 0x2C0AE0u) { return; }
    }
    ctx->pc = 0x2C0AE0u;
label_2c0ae0:
    // 0x2c0ae0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c0ae4: 0xc08f840  jal         func_23E100
    ctx->pc = 0x2C0AE4u;
    SET_GPR_U32(ctx, 31, 0x2C0AECu);
    ctx->pc = 0x2C0AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AE4u;
            // 0x2c0ae8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AECu; }
        if (ctx->pc != 0x2C0AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AECu; }
        if (ctx->pc != 0x2C0AECu) { return; }
    }
    ctx->pc = 0x2C0AECu;
label_2c0aec:
    // 0x2c0aec: 0x86050014  lh          $a1, 0x14($s0)
    ctx->pc = 0x2c0aecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c0af0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c0af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0af4: 0x10a401f2  beq         $a1, $a0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x2C0AF4u;
    {
        const bool branch_taken_0x2c0af4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C0AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AF4u;
            // 0x2c0af8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0af4) {
            ctx->pc = 0x2C12C0u;
            goto label_2c12c0;
        }
    }
    ctx->pc = 0x2C0AFCu;
    // 0x2c0afc: 0x10a30194  beq         $a1, $v1, . + 4 + (0x194 << 2)
    ctx->pc = 0x2C0AFCu;
    {
        const bool branch_taken_0x2c0afc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C0B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AFCu;
            // 0x2c0b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0afc) {
            ctx->pc = 0x2C1150u;
            goto label_2c1150;
        }
    }
    ctx->pc = 0x2C0B04u;
    // 0x2c0b04: 0x10a3006b  beq         $a1, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2C0B04u;
    {
        const bool branch_taken_0x2c0b04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C0B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B04u;
            // 0x2c0b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b04) {
            ctx->pc = 0x2C0CB4u;
            goto label_2c0cb4;
        }
    }
    ctx->pc = 0x2C0B0Cu;
    // 0x2c0b0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0B0Cu;
    {
        const bool branch_taken_0x2c0b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b0c) {
            ctx->pc = 0x2C0B1Cu;
            goto label_2c0b1c;
        }
    }
    ctx->pc = 0x2C0B14u;
    // 0x2c0b14: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x2C0B14u;
    {
        const bool branch_taken_0x2c0b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b14) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0B1Cu;
label_2c0b1c:
    // 0x2c0b1c: 0x8e130110  lw          $s3, 0x110($s0)
    ctx->pc = 0x2c0b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2c0b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b24: 0xc08edcc  jal         func_23B730
    ctx->pc = 0x2C0B24u;
    SET_GPR_U32(ctx, 31, 0x2C0B2Cu);
    ctx->pc = 0x2C0B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B24u;
            // 0x2c0b28: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B730u;
    if (runtime->hasFunction(0x23B730u)) {
        auto targetFn = runtime->lookupFunction(0x23B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B2Cu; }
        if (ctx->pc != 0x2C0B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuListSelectKeyCheck__Fii_0x23b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B2Cu; }
        if (ctx->pc != 0x2C0B2Cu) { return; }
    }
    ctx->pc = 0x2C0B2Cu;
label_2c0b2c:
    // 0x2c0b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b30: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x2c0b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2c0b34: 0x26060114  addiu       $a2, $s0, 0x114
    ctx->pc = 0x2c0b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    // 0x2c0b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b3c: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x2c0b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2c0b40: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2c0b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c0b44: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x2C0B44u;
    SET_GPR_U32(ctx, 31, 0x2C0B4Cu);
    ctx->pc = 0x2C0B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B44u;
            // 0x2c0b48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B4Cu; }
        if (ctx->pc != 0x2C0B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B4Cu; }
        if (ctx->pc != 0x2C0B4Cu) { return; }
    }
    ctx->pc = 0x2C0B4Cu;
label_2c0b4c:
    // 0x2c0b4c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2c0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2c0b50: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0B50u;
    {
        const bool branch_taken_0x2c0b50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B50u;
            // 0x2c0b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b50) {
            ctx->pc = 0x2C0B64u;
            goto label_2c0b64;
        }
    }
    ctx->pc = 0x2C0B58u;
    // 0x2c0b58: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C0B58u;
    SET_GPR_U32(ctx, 31, 0x2C0B60u);
    ctx->pc = 0x2C0B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B58u;
            // 0x2c0b5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B60u; }
        if (ctx->pc != 0x2C0B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B60u; }
        if (ctx->pc != 0x2C0B60u) { return; }
    }
    ctx->pc = 0x2C0B60u;
label_2c0b60:
    // 0x2c0b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b64:
    // 0x2c0b64: 0xc08f8b8  jal         func_23E2E0
    ctx->pc = 0x2C0B64u;
    SET_GPR_U32(ctx, 31, 0x2C0B6Cu);
    ctx->pc = 0x23E2E0u;
    if (runtime->hasFunction(0x23E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B6Cu; }
        if (ctx->pc != 0x2C0B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCheckPushButton__Fi_0x23e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B6Cu; }
        if (ctx->pc != 0x2C0B6Cu) { return; }
    }
    ctx->pc = 0x2C0B6Cu;
label_2c0b6c:
    // 0x2c0b6c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2c0b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0b70: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C0B70u;
    {
        const bool branch_taken_0x2c0b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B70u;
            // 0x2c0b74: 0x30430002  andi        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b70) {
            ctx->pc = 0x2C0C08u;
            goto label_2c0c08;
        }
    }
    ctx->pc = 0x2C0B78u;
    // 0x2c0b78: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2c0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2c0b7c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2c0b80: 0x24425110  addiu       $v0, $v0, 0x5110
    ctx->pc = 0x2c0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20752));
    // 0x2c0b84: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c0b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0b8c: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2C0B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C0B94u);
    ctx->pc = 0x2C0B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B8Cu;
            // 0x2c0b90: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B94u; }
        if (ctx->pc != 0x2C0B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B94u; }
        if (ctx->pc != 0x2C0B94u) { return; }
    }
    ctx->pc = 0x2C0B94u;
label_2c0b94:
    // 0x2c0b94: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2c0b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2c0b98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c0b98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b9c: 0xc0aff6c  jal         func_2BFDB0
    ctx->pc = 0x2C0B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C0BA4u);
    ctx->pc = 0x2C0BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B9Cu;
            // 0x2c0ba0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFDB0u;
    if (runtime->hasFunction(0x2BFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2BFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BA4u; }
        if (ctx->pc != 0x2C0BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckOmakeVtuto__Fi_0x2bfdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BA4u; }
        if (ctx->pc != 0x2C0BA4u) { return; }
    }
    ctx->pc = 0x2C0BA4u;
label_2c0ba4:
    // 0x2c0ba4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0BA4u;
    {
        const bool branch_taken_0x2c0ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ba4) {
            ctx->pc = 0x2C0BB0u;
            goto label_2c0bb0;
        }
    }
    ctx->pc = 0x2C0BACu;
    // 0x2c0bac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c0bacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0bb0:
    // 0x2c0bb0: 0x83829c80  lb          $v0, -0x6380($gp)
    ctx->pc = 0x2c0bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941824)));
    // 0x2c0bb4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C0BB4u;
    {
        const bool branch_taken_0x2c0bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0BB4u;
            // 0x2c0bb8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bb4) {
            ctx->pc = 0x2C0BF8u;
            goto label_2c0bf8;
        }
    }
    ctx->pc = 0x2C0BBCu;
    // 0x2c0bbc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0BBCu;
    {
        const bool branch_taken_0x2c0bbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0BBCu;
            // 0x2c0bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bbc) {
            ctx->pc = 0x2C0BCCu;
            goto label_2c0bcc;
        }
    }
    ctx->pc = 0x2C0BC4u;
    // 0x2c0bc4: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2C0BC4u;
    {
        const bool branch_taken_0x2c0bc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0bc4) {
            ctx->pc = 0x2C0BF4u;
            goto label_2c0bf4;
        }
    }
    ctx->pc = 0x2C0BCCu;
label_2c0bcc:
    // 0x2c0bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0bd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c0bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c0bd4: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x2c0bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c0bd8: 0xc08e898  jal         func_23A260
    ctx->pc = 0x2C0BD8u;
    SET_GPR_U32(ctx, 31, 0x2C0BE0u);
    ctx->pc = 0x2C0BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0BD8u;
            // 0x2c0bdc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BE0u; }
        if (ctx->pc != 0x2C0BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BE0u; }
        if (ctx->pc != 0x2C0BE0u) { return; }
    }
    ctx->pc = 0x2C0BE0u;
label_2c0be0:
    // 0x2c0be0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C0BE0u;
    SET_GPR_U32(ctx, 31, 0x2C0BE8u);
    ctx->pc = 0x2C0BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0BE0u;
            // 0x2c0be4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BE8u; }
        if (ctx->pc != 0x2C0BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BE8u; }
        if (ctx->pc != 0x2C0BE8u) { return; }
    }
    ctx->pc = 0x2C0BE8u;
label_2c0be8:
    // 0x2c0be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0bec: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x2C0BECu;
    {
        const bool branch_taken_0x2c0bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0BECu;
            // 0x2c0bf0: 0xa3829c64  sb          $v0, -0x639C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941796), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bec) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0BF4u;
label_2c0bf4:
    // 0x2c0bf4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c0bf8:
    // 0x2c0bf8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C0BF8u;
    SET_GPR_U32(ctx, 31, 0x2C0C00u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C00u; }
        if (ctx->pc != 0x2C0C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C00u; }
        if (ctx->pc != 0x2C0C00u) { return; }
    }
    ctx->pc = 0x2C0C00u;
label_2c0c00:
    // 0x2c0c00: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x2C0C00u;
    {
        const bool branch_taken_0x2c0c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c00) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0C08u;
label_2c0c08:
    // 0x2c0c08: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C0C08u;
    {
        const bool branch_taken_0x2c0c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C08u;
            // 0x2c0c0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c08) {
            ctx->pc = 0x2C0C4Cu;
            goto label_2c0c4c;
        }
    }
    ctx->pc = 0x2C0C10u;
    // 0x2c0c10: 0xc08d220  jal         func_234880
    ctx->pc = 0x2C0C10u;
    SET_GPR_U32(ctx, 31, 0x2C0C18u);
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C18u; }
        if (ctx->pc != 0x2C0C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C18u; }
        if (ctx->pc != 0x2C0C18u) { return; }
    }
    ctx->pc = 0x2C0C18u;
label_2c0c18:
    // 0x2c0c18: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2c0c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c0c1c: 0xc08900c  jal         func_224030
    ctx->pc = 0x2C0C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C0C24u);
    ctx->pc = 0x2C0C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C1Cu;
            // 0x2c0c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C24u; }
        if (ctx->pc != 0x2C0C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C24u; }
        if (ctx->pc != 0x2C0C24u) { return; }
    }
    ctx->pc = 0x2C0C24u;
label_2c0c24:
    // 0x2c0c24: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c0c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c0c28: 0xc08f01c  jal         func_23C070
    ctx->pc = 0x2C0C28u;
    SET_GPR_U32(ctx, 31, 0x2C0C30u);
    ctx->pc = 0x2C0C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C28u;
            // 0x2c0c2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C070u;
    if (runtime->hasFunction(0x23C070u)) {
        auto targetFn = runtime->lookupFunction(0x23C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C30u; }
        if (ctx->pc != 0x2C0C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveMethod__12CMenuKeyFuncFi_0x23c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C30u; }
        if (ctx->pc != 0x2C0C30u) { return; }
    }
    ctx->pc = 0x2C0C30u;
label_2c0c30:
    // 0x2c0c30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c38: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C0C38u;
    SET_GPR_U32(ctx, 31, 0x2C0C40u);
    ctx->pc = 0x2C0C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C38u;
            // 0x2c0c3c: 0x24a5f948  addiu       $a1, $a1, -0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C40u; }
        if (ctx->pc != 0x2C0C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C40u; }
        if (ctx->pc != 0x2C0C40u) { return; }
    }
    ctx->pc = 0x2C0C40u;
label_2c0c40:
    // 0x2c0c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0c44: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x2C0C44u;
    {
        const bool branch_taken_0x2c0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C44u;
            // 0x2c0c48: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c44) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0C4Cu;
label_2c0c4c:
    // 0x2c0c4c: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2c0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2c0c50: 0x106001a2  beqz        $v1, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x2C0C50u;
    {
        const bool branch_taken_0x2c0c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c50) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0C58u;
    // 0x2c0c58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2c0c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2c0c5c: 0x1040019f  beqz        $v0, . + 4 + (0x19F << 2)
    ctx->pc = 0x2C0C5Cu;
    {
        const bool branch_taken_0x2c0c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C5Cu;
            // 0x2c0c60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c5c) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0C64u;
    // 0x2c0c64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C0C64u;
    {
        const bool branch_taken_0x2c0c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C64u;
            // 0x2c0c68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c64) {
            ctx->pc = 0x2C0C8Cu;
            goto label_2c0c8c;
        }
    }
    ctx->pc = 0x2C0C6Cu;
label_2c0c6c:
    // 0x2c0c6c: 0xc064220  jal         func_190880
    ctx->pc = 0x2C0C6Cu;
    SET_GPR_U32(ctx, 31, 0x2C0C74u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C74u; }
        if (ctx->pc != 0x2C0C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C74u; }
        if (ctx->pc != 0x2C0C74u) { return; }
    }
    ctx->pc = 0x2C0C74u;
label_2c0c74:
    // 0x2c0c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c0c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c7c: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x2C0C7Cu;
    SET_GPR_U32(ctx, 31, 0x2C0C84u);
    ctx->pc = 0x2C0C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0C7Cu;
            // 0x2c0c80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C84u; }
        if (ctx->pc != 0x2C0C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C84u; }
        if (ctx->pc != 0x2C0C84u) { return; }
    }
    ctx->pc = 0x2C0C84u;
label_2c0c84:
    // 0x2c0c84: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x2c0c84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2c0c88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c0c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c0c8c:
    // 0x2c0c8c: 0x0  nop
    ctx->pc = 0x2c0c8cu;
    // NOP
    // 0x2c0c90: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2c0c94: 0x24425110  addiu       $v0, $v0, 0x5110
    ctx->pc = 0x2c0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20752));
    // 0x2c0c98: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2c0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c0c9c: 0x84540000  lh          $s4, 0x0($v0)
    ctx->pc = 0x2c0c9cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0ca0: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x2c0ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2c0ca4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C0CA4u;
    {
        const bool branch_taken_0x2c0ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ca4) {
            ctx->pc = 0x2C0C6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0c6c;
        }
    }
    ctx->pc = 0x2C0CACu;
    // 0x2c0cac: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x2C0CACu;
    {
        const bool branch_taken_0x2c0cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0cac) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0CB4u;
label_2c0cb4:
    // 0x2c0cb4: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2C0CB4u;
    SET_GPR_U32(ctx, 31, 0x2C0CBCu);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CBCu; }
        if (ctx->pc != 0x2C0CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CBCu; }
        if (ctx->pc != 0x2C0CBCu) { return; }
    }
    ctx->pc = 0x2C0CBCu;
label_2c0cbc:
    // 0x2c0cbc: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x2C0CBCu;
    {
        const bool branch_taken_0x2c0cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0CBCu;
            // 0x2c0cc0: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0cbc) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C0CC4u;
    // 0x2c0cc4: 0xc062234  jal         func_1888D0
    ctx->pc = 0x2C0CC4u;
    SET_GPR_U32(ctx, 31, 0x2C0CCCu);
    ctx->pc = 0x2C0CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0CC4u;
            // 0x2c0cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1888D0u;
    if (runtime->hasFunction(0x1888D0u)) {
        auto targetFn = runtime->lookupFunction(0x1888D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CCCu; }
        if (ctx->pc != 0x2C0CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SndInReverb__6CSoundFb_0x1888d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CCCu; }
        if (ctx->pc != 0x2C0CCCu) { return; }
    }
    ctx->pc = 0x2C0CCCu;
label_2c0ccc:
    // 0x2c0ccc: 0x87829c70  lh          $v0, -0x6390($gp)
    ctx->pc = 0x2c0cccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941808)));
    // 0x2c0cd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0CD0u;
    {
        const bool branch_taken_0x2c0cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0CD0u;
            // 0x2c0cd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0cd0) {
            ctx->pc = 0x2C0CF4u;
            goto label_2c0cf4;
        }
    }
    ctx->pc = 0x2C0CD8u;
    // 0x2c0cd8: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x2c0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x2c0cdc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0CDCu;
    {
        const bool branch_taken_0x2c0cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0cdc) {
            ctx->pc = 0x2C0CF4u;
            goto label_2c0cf4;
        }
    }
    ctx->pc = 0x2C0CE4u;
    // 0x2c0ce4: 0x87829c74  lh          $v0, -0x638C($gp)
    ctx->pc = 0x2c0ce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941812)));
    // 0x2c0ce8: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0CE8u;
    {
        const bool branch_taken_0x2c0ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c0ce8) {
            ctx->pc = 0x2C0CF4u;
            goto label_2c0cf4;
        }
    }
    ctx->pc = 0x2C0CF0u;
    // 0x2c0cf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c0cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0cf4:
    // 0x2c0cf4: 0xc0942ac  jal         func_250AB0
    ctx->pc = 0x2C0CF4u;
    SET_GPR_U32(ctx, 31, 0x2C0CFCu);
    ctx->pc = 0x250AB0u;
    if (runtime->hasFunction(0x250AB0u)) {
        auto targetFn = runtime->lookupFunction(0x250AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CFCu; }
        if (ctx->pc != 0x2C0CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvSoundMenu__Fi_0x250ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CFCu; }
        if (ctx->pc != 0x2C0CFCu) { return; }
    }
    ctx->pc = 0x2C0CFCu;
label_2c0cfc:
    // 0x2c0cfc: 0x87829c70  lh          $v0, -0x6390($gp)
    ctx->pc = 0x2c0cfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941808)));
    // 0x2c0d00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0D00u;
    {
        const bool branch_taken_0x2c0d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D00u;
            // 0x2c0d04: 0xa7809c78  sh          $zero, -0x6388($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941816), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d00) {
            ctx->pc = 0x2C0D24u;
            goto label_2c0d24;
        }
    }
    ctx->pc = 0x2C0D08u;
    // 0x2c0d08: 0x8f8394a4  lw          $v1, -0x6B5C($gp)
    ctx->pc = 0x2c0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c0d0c: 0x8c622f98  lw          $v0, 0x2F98($v1)
    ctx->pc = 0x2c0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12184)));
    // 0x2c0d10: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2c0d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2c0d14: 0xa7829c78  sh          $v0, -0x6388($gp)
    ctx->pc = 0x2c0d14u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941816), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c0d18: 0x8c622f98  lw          $v0, 0x2F98($v1)
    ctx->pc = 0x2c0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12184)));
    // 0x2c0d1c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2c0d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2c0d20: 0xac622f98  sw          $v0, 0x2F98($v1)
    ctx->pc = 0x2c0d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12184), GPR_U32(ctx, 2));
label_2c0d24:
    // 0x2c0d24: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c0d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c0d28: 0xc0a9944  jal         func_2A6510
    ctx->pc = 0x2C0D28u;
    SET_GPR_U32(ctx, 31, 0x2C0D30u);
    ctx->pc = 0x2C0D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D28u;
            // 0x2c0d2c: 0x26050118  addiu       $a1, $s0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6510u;
    if (runtime->hasFunction(0x2A6510u)) {
        auto targetFn = runtime->lookupFunction(0x2A6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D30u; }
        if (ctx->pc != 0x2C0D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D30u; }
        if (ctx->pc != 0x2C0D30u) { return; }
    }
    ctx->pc = 0x2C0D30u;
label_2c0d30:
    // 0x2c0d30: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c0d34: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2C0D34u;
    SET_GPR_U32(ctx, 31, 0x2C0D3Cu);
    ctx->pc = 0x2C0D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D34u;
            // 0x2c0d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D3Cu; }
        if (ctx->pc != 0x2C0D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D3Cu; }
        if (ctx->pc != 0x2C0D3Cu) { return; }
    }
    ctx->pc = 0x2C0D3Cu;
label_2c0d3c:
    // 0x2c0d3c: 0xc040cc0  jal         func_103300
    ctx->pc = 0x2C0D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C0D44u);
    ctx->pc = 0x2C0D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D3Cu;
            // 0x2c0d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D44u; }
        if (ctx->pc != 0x2C0D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D44u; }
        if (ctx->pc != 0x2C0D44u) { return; }
    }
    ctx->pc = 0x2C0D44u;
label_2c0d44:
    // 0x2c0d44: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0d48: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2c0d4c: 0xac20d254  sw          $zero, -0x2DAC($at)
    ctx->pc = 0x2c0d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955604), GPR_U32(ctx, 0));
    // 0x2c0d50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c0d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c0d54: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0d58: 0xc063594  jal         func_18D650
    ctx->pc = 0x2C0D58u;
    SET_GPR_U32(ctx, 31, 0x2C0D60u);
    ctx->pc = 0x2C0D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D58u;
            // 0x2c0d5c: 0xac20d24c  sw          $zero, -0x2DB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D60u; }
        if (ctx->pc != 0x2C0D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D60u; }
        if (ctx->pc != 0x2C0D60u) { return; }
    }
    ctx->pc = 0x2C0D60u;
label_2c0d60:
    // 0x2c0d60: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2c0d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2c0d64: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2c0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c0d68: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0D68u;
    {
        const bool branch_taken_0x2c0d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D68u;
            // 0x2c0d6c: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d68) {
            ctx->pc = 0x2C0D7Cu;
            goto label_2c0d7c;
        }
    }
    ctx->pc = 0x2C0D70u;
    // 0x2c0d70: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2c0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c0d74: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C0D74u;
    {
        const bool branch_taken_0x2c0d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0d74) {
            ctx->pc = 0x2C0DA4u;
            goto label_2c0da4;
        }
    }
    ctx->pc = 0x2C0D7Cu;
label_2c0d7c:
    // 0x2c0d7c: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c0d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c0d80: 0x8c23d254  lw          $v1, -0x2DAC($at)
    ctx->pc = 0x2c0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955604)));
    // 0x2c0d84: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x2c0d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x2c0d88: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0d8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c0d90: 0x8c22d250  lw          $v0, -0x2DB0($at)
    ctx->pc = 0x2c0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955600)));
    // 0x2c0d94: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2C0D94u;
    SET_GPR_U32(ctx, 31, 0x2C0D9Cu);
    ctx->pc = 0x2C0D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D94u;
            // 0x2c0d98: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D9Cu; }
        if (ctx->pc != 0x2C0D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D9Cu; }
        if (ctx->pc != 0x2C0D9Cu) { return; }
    }
    ctx->pc = 0x2C0D9Cu;
label_2c0d9c:
    // 0x2c0d9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C0D9Cu;
    {
        const bool branch_taken_0x2c0d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D9Cu;
            // 0x2c0da0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d9c) {
            ctx->pc = 0x2C0DCCu;
            goto label_2c0dcc;
        }
    }
    ctx->pc = 0x2C0DA4u;
label_2c0da4:
    // 0x2c0da4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0da8: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c0dac: 0x8c23d254  lw          $v1, -0x2DAC($at)
    ctx->pc = 0x2c0dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955604)));
    // 0x2c0db0: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2c0db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2c0db4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0db8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c0dbc: 0x8c22d250  lw          $v0, -0x2DB0($at)
    ctx->pc = 0x2c0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955600)));
    // 0x2c0dc0: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2C0DC0u;
    SET_GPR_U32(ctx, 31, 0x2C0DC8u);
    ctx->pc = 0x2C0DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0DC0u;
            // 0x2c0dc4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DC8u; }
        if (ctx->pc != 0x2C0DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DC8u; }
        if (ctx->pc != 0x2C0DC8u) { return; }
    }
    ctx->pc = 0x2C0DC8u;
label_2c0dc8:
    // 0x2c0dc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2c0dcc:
    // 0x2c0dcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c0dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c0dd0: 0xc063594  jal         func_18D650
    ctx->pc = 0x2C0DD0u;
    SET_GPR_U32(ctx, 31, 0x2C0DD8u);
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DD8u; }
        if (ctx->pc != 0x2C0DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DD8u; }
        if (ctx->pc != 0x2C0DD8u) { return; }
    }
    ctx->pc = 0x2C0DD8u;
label_2c0dd8:
    // 0x2c0dd8: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c0ddc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c0de0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c0de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c0de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0de8: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x2C0DE8u;
    SET_GPR_U32(ctx, 31, 0x2C0DF0u);
    ctx->pc = 0x2C0DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0DE8u;
            // 0x2c0dec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DF0u; }
        if (ctx->pc != 0x2C0DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DF0u; }
        if (ctx->pc != 0x2C0DF0u) { return; }
    }
    ctx->pc = 0x2C0DF0u;
label_2c0df0:
    // 0x2c0df0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x2c0df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x2c0df4: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2c0df4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x2c0df8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2c0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2c0dfc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2c0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c0e00: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x2c0e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c0e04: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0E04u;
    {
        const bool branch_taken_0x2c0e04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E04u;
            // 0x2c0e08: 0x26521ef0  addiu       $s2, $s2, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e04) {
            ctx->pc = 0x2C0E18u;
            goto label_2c0e18;
        }
    }
    ctx->pc = 0x2C0E0Cu;
    // 0x2c0e0c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2c0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2c0e10: 0x1662006f  bne         $s3, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C0E10u;
    {
        const bool branch_taken_0x2c0e10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c0e10) {
            ctx->pc = 0x2C0FD0u;
            goto label_2c0fd0;
        }
    }
    ctx->pc = 0x2C0E18u;
label_2c0e18:
    // 0x2c0e18: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0e1c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2c0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c0e20: 0x8c25d254  lw          $a1, -0x2DAC($at)
    ctx->pc = 0x2c0e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955604)));
    // 0x2c0e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e28: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0e2c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2c0e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c0e30: 0x8c24d250  lw          $a0, -0x2DB0($at)
    ctx->pc = 0x2c0e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955600)));
    // 0x2c0e34: 0x16630006  bne         $s3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0E34u;
    {
        const bool branch_taken_0x2c0e34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C0E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E34u;
            // 0x2c0e38: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e34) {
            ctx->pc = 0x2C0E50u;
            goto label_2c0e50;
        }
    }
    ctx->pc = 0x2C0E3Cu;
    // 0x2c0e3c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c0e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c0e40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c0e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e44: 0x2484f950  addiu       $a0, $a0, -0x6B0
    ctx->pc = 0x2c0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965584));
    // 0x2c0e48: 0xc094440  jal         func_251100
    ctx->pc = 0x2C0E48u;
    SET_GPR_U32(ctx, 31, 0x2C0E50u);
    ctx->pc = 0x2C0E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E48u;
            // 0x2c0e4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E50u; }
        if (ctx->pc != 0x2C0E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E50u; }
        if (ctx->pc != 0x2C0E50u) { return; }
    }
    ctx->pc = 0x2C0E50u;
label_2c0e50:
    // 0x2c0e50: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2c0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2c0e54: 0x16630007  bne         $s3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0E54u;
    {
        const bool branch_taken_0x2c0e54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C0E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E54u;
            // 0x2c0e58: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e54) {
            ctx->pc = 0x2C0E74u;
            goto label_2c0e74;
        }
    }
    ctx->pc = 0x2C0E5Cu;
    // 0x2c0e5c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c0e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c0e60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c0e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e64: 0x2484f960  addiu       $a0, $a0, -0x6A0
    ctx->pc = 0x2c0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965600));
    // 0x2c0e68: 0xc094440  jal         func_251100
    ctx->pc = 0x2C0E68u;
    SET_GPR_U32(ctx, 31, 0x2C0E70u);
    ctx->pc = 0x2C0E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E68u;
            // 0x2c0e6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E70u; }
        if (ctx->pc != 0x2C0E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E70u; }
        if (ctx->pc != 0x2C0E70u) { return; }
    }
    ctx->pc = 0x2C0E70u;
label_2c0e70:
    // 0x2c0e70: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c0e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2c0e74:
    // 0x2c0e74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0E74u;
    {
        const bool branch_taken_0x2c0e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E74u;
            // 0x2c0e78: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e74) {
            ctx->pc = 0x2C0E84u;
            goto label_2c0e84;
        }
    }
    ctx->pc = 0x2C0E7Cu;
    // 0x2c0e7c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2c0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2c0e80: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2c0e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c0e84:
    // 0x2c0e84: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c0e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c0e88: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C0E88u;
    SET_GPR_U32(ctx, 31, 0x2C0E90u);
    ctx->pc = 0x2C0E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E88u;
            // 0x2c0e8c: 0x2484d230  addiu       $a0, $a0, -0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E90u; }
        if (ctx->pc != 0x2C0E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E90u; }
        if (ctx->pc != 0x2C0E90u) { return; }
    }
    ctx->pc = 0x2C0E90u;
label_2c0e90:
    // 0x2c0e90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0e94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c0e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e98: 0x24a5f970  addiu       $a1, $a1, -0x690
    ctx->pc = 0x2c0e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965616));
    // 0x2c0e9c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C0E9Cu;
    SET_GPR_U32(ctx, 31, 0x2C0EA4u);
    ctx->pc = 0x2C0EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E9Cu;
            // 0x2c0ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0EA4u; }
        if (ctx->pc != 0x2C0EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0EA4u; }
        if (ctx->pc != 0x2C0EA4u) { return; }
    }
    ctx->pc = 0x2C0EA4u;
label_2c0ea4:
    // 0x2c0ea4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2c0ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c0ea8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c0ea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0eac: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2C0EACu;
    SET_GPR_U32(ctx, 31, 0x2C0EB4u);
    ctx->pc = 0x2C0EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EACu;
            // 0x2c0eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0EB4u; }
        if (ctx->pc != 0x2C0EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0EB4u; }
        if (ctx->pc != 0x2C0EB4u) { return; }
    }
    ctx->pc = 0x2C0EB4u;
label_2c0eb4:
    // 0x2c0eb4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2c0eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c0eb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c0eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ec4: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2C0EC4u;
    SET_GPR_U32(ctx, 31, 0x2C0ECCu);
    ctx->pc = 0x2C0EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EC4u;
            // 0x2c0ec8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0ECCu; }
        if (ctx->pc != 0x2C0ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0ECCu; }
        if (ctx->pc != 0x2C0ECCu) { return; }
    }
    ctx->pc = 0x2C0ECCu;
label_2c0ecc:
    // 0x2c0ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0ed0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c0ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0ed4: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x2c0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x2c0ed8: 0xae030138  sw          $v1, 0x138($s0)
    ctx->pc = 0x2c0ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
    // 0x2c0edc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2c0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2c0ee0: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0EE0u;
    {
        const bool branch_taken_0x2c0ee0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EE0u;
            // 0x2c0ee4: 0xae00013c  sw          $zero, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ee0) {
            ctx->pc = 0x2C0EF0u;
            goto label_2c0ef0;
        }
    }
    ctx->pc = 0x2C0EE8u;
    // 0x2c0ee8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0eec: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x2c0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_2c0ef0:
    // 0x2c0ef0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0ef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ef8: 0x24a5f980  addiu       $a1, $a1, -0x680
    ctx->pc = 0x2c0ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
    // 0x2c0efc: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2C0EFCu;
    SET_GPR_U32(ctx, 31, 0x2C0F04u);
    ctx->pc = 0x2C0F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EFCu;
            // 0x2c0f00: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F04u; }
        if (ctx->pc != 0x2C0F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F04u; }
        if (ctx->pc != 0x2C0F04u) { return; }
    }
    ctx->pc = 0x2C0F04u;
label_2c0f04:
    // 0x2c0f04: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0f08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0f0c: 0xac22d1c0  sw          $v0, -0x2E40($at)
    ctx->pc = 0x2c0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955456), GPR_U32(ctx, 2));
    // 0x2c0f10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f14: 0x24a5f988  addiu       $a1, $a1, -0x678
    ctx->pc = 0x2c0f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965640));
    // 0x2c0f18: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2C0F18u;
    SET_GPR_U32(ctx, 31, 0x2C0F20u);
    ctx->pc = 0x2C0F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F18u;
            // 0x2c0f1c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F20u; }
        if (ctx->pc != 0x2C0F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F20u; }
        if (ctx->pc != 0x2C0F20u) { return; }
    }
    ctx->pc = 0x2C0F20u;
label_2c0f20:
    // 0x2c0f20: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0f24: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0f28: 0xac22d1c4  sw          $v0, -0x2E3C($at)
    ctx->pc = 0x2c0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955460), GPR_U32(ctx, 2));
    // 0x2c0f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f30: 0x24a5f990  addiu       $a1, $a1, -0x670
    ctx->pc = 0x2c0f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965648));
    // 0x2c0f34: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2C0F34u;
    SET_GPR_U32(ctx, 31, 0x2C0F3Cu);
    ctx->pc = 0x2C0F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F34u;
            // 0x2c0f38: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F3Cu; }
        if (ctx->pc != 0x2C0F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F3Cu; }
        if (ctx->pc != 0x2C0F3Cu) { return; }
    }
    ctx->pc = 0x2C0F3Cu;
label_2c0f3c:
    // 0x2c0f3c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0f40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0f44: 0xac22d1c8  sw          $v0, -0x2E38($at)
    ctx->pc = 0x2c0f44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955464), GPR_U32(ctx, 2));
    // 0x2c0f48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f4c: 0x24a5f998  addiu       $a1, $a1, -0x668
    ctx->pc = 0x2c0f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965656));
    // 0x2c0f50: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2C0F50u;
    SET_GPR_U32(ctx, 31, 0x2C0F58u);
    ctx->pc = 0x2C0F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F50u;
            // 0x2c0f54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F58u; }
        if (ctx->pc != 0x2C0F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F58u; }
        if (ctx->pc != 0x2C0F58u) { return; }
    }
    ctx->pc = 0x2C0F58u;
label_2c0f58:
    // 0x2c0f58: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0f5c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0f60: 0xac22d1cc  sw          $v0, -0x2E34($at)
    ctx->pc = 0x2c0f60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955468), GPR_U32(ctx, 2));
    // 0x2c0f64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f68: 0x24a5f9a0  addiu       $a1, $a1, -0x660
    ctx->pc = 0x2c0f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965664));
    // 0x2c0f6c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2C0F6Cu;
    SET_GPR_U32(ctx, 31, 0x2C0F74u);
    ctx->pc = 0x2C0F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F6Cu;
            // 0x2c0f70: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F74u; }
        if (ctx->pc != 0x2C0F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F74u; }
        if (ctx->pc != 0x2C0F74u) { return; }
    }
    ctx->pc = 0x2C0F74u;
label_2c0f74:
    // 0x2c0f74: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0f78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c0f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c0f7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f80: 0xac22d1d0  sw          $v0, -0x2E30($at)
    ctx->pc = 0x2c0f80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955472), GPR_U32(ctx, 2));
    // 0x2c0f84: 0x24a5f9a8  addiu       $a1, $a1, -0x658
    ctx->pc = 0x2c0f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965672));
    // 0x2c0f88: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2C0F88u;
    SET_GPR_U32(ctx, 31, 0x2C0F90u);
    ctx->pc = 0x2C0F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F88u;
            // 0x2c0f8c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F90u; }
        if (ctx->pc != 0x2C0F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F90u; }
        if (ctx->pc != 0x2C0F90u) { return; }
    }
    ctx->pc = 0x2C0F90u;
label_2c0f90:
    // 0x2c0f90: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c0f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c0f94: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2c0f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c0f98: 0xac22d1d4  sw          $v0, -0x2E2C($at)
    ctx->pc = 0x2c0f98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955476), GPR_U32(ctx, 2));
    // 0x2c0f9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c0f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0fa0: 0xdf829c90  ld          $v0, -0x6370($gp)
    ctx->pc = 0x2c0fa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941840)));
    // 0x2c0fa4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c0fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c0fa8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2c0fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2c0fac: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x2c0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2c0fb0: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2c0fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x2c0fb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c0fb8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2c0fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2c0fbc: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x2c0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x2c0fc0: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x2C0FC0u;
    SET_GPR_U32(ctx, 31, 0x2C0FC8u);
    ctx->pc = 0x2C0FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FC0u;
            // 0x2c0fc4: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FC8u; }
        if (ctx->pc != 0x2C0FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FC8u; }
        if (ctx->pc != 0x2C0FC8u) { return; }
    }
    ctx->pc = 0x2C0FC8u;
label_2c0fc8:
    // 0x2c0fc8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2C0FC8u;
    {
        const bool branch_taken_0x2c0fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FC8u;
            // 0x2c0fcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fc8) {
            ctx->pc = 0x2C1144u;
            goto label_2c1144;
        }
    }
    ctx->pc = 0x2C0FD0u;
label_2c0fd0:
    // 0x2c0fd0: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2C0FD0u;
    SET_GPR_U32(ctx, 31, 0x2C0FD8u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FD8u; }
        if (ctx->pc != 0x2C0FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FD8u; }
        if (ctx->pc != 0x2C0FD8u) { return; }
    }
    ctx->pc = 0x2C0FD8u;
label_2c0fd8:
    // 0x2c0fd8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2c0fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2c0fdc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2c0fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2c0fe0: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x2c0fe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x2c0fe4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0fe8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0FE8u;
    {
        const bool branch_taken_0x2c0fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FE8u;
            // 0x2c0fec: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fe8) {
            ctx->pc = 0x2C0FFCu;
            goto label_2c0ffc;
        }
    }
    ctx->pc = 0x2C0FF0u;
    // 0x2c0ff0: 0xc0ac064  jal         func_2B0190
    ctx->pc = 0x2C0FF0u;
    SET_GPR_U32(ctx, 31, 0x2C0FF8u);
    ctx->pc = 0x2B0190u;
    if (runtime->hasFunction(0x2B0190u)) {
        auto targetFn = runtime->lookupFunction(0x2B0190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FF8u; }
        if (ctx->pc != 0x2C0FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMonsterEffect__Fv_0x2b0190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FF8u; }
        if (ctx->pc != 0x2C0FF8u) { return; }
    }
    ctx->pc = 0x2C0FF8u;
label_2c0ff8:
    // 0x2c0ff8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2c0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2c0ffc:
    // 0x2c0ffc: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0FFCu;
    {
        const bool branch_taken_0x2c0ffc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FFCu;
            // 0x2c1000: 0x2a620018  slti        $v0, $s3, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ffc) {
            ctx->pc = 0x2C100Cu;
            goto label_2c100c;
        }
    }
    ctx->pc = 0x2C1004u;
    // 0x2c1004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1004u;
    {
        const bool branch_taken_0x2c1004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1004u;
            // 0x2c1008: 0x2413002c  addiu       $s3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1004) {
            ctx->pc = 0x2C101Cu;
            goto label_2c101c;
        }
    }
    ctx->pc = 0x2C100Cu;
label_2c100c:
    // 0x2c100c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C100Cu;
    {
        const bool branch_taken_0x2c100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c100c) {
            ctx->pc = 0x2C101Cu;
            goto label_2c101c;
        }
    }
    ctx->pc = 0x2C1014u;
    // 0x2c1014: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2c1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2c1018: 0x2453fffe  addiu       $s3, $v0, -0x2
    ctx->pc = 0x2c1018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2c101c:
    // 0x2c101c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2c101cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c1020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1024: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2C1024u;
    SET_GPR_U32(ctx, 31, 0x2C102Cu);
    ctx->pc = 0x2C1028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1024u;
            // 0x2c1028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C102Cu; }
        if (ctx->pc != 0x2C102Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C102Cu; }
        if (ctx->pc != 0x2C102Cu) { return; }
    }
    ctx->pc = 0x2C102Cu;
label_2c102c:
    // 0x2c102c: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x2c102cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x2c1030: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c1030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c1034: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x2c1034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x2c1038: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x2c1038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2c103c: 0x8c22d5f4  lw          $v0, -0x2A0C($at)
    ctx->pc = 0x2c103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956532)));
    // 0x2c1040: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2c1040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2c1044: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2c1044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2c1048: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2c1048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2c104c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2c104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c1050: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2c1050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2c1054: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2c1054u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c1058: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2c1058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c105c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2C105Cu;
    SET_GPR_U32(ctx, 31, 0x2C1064u);
    ctx->pc = 0x2C1060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C105Cu;
            // 0x2c1060: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1064u; }
        if (ctx->pc != 0x2C1064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1064u; }
        if (ctx->pc != 0x2C1064u) { return; }
    }
    ctx->pc = 0x2C1064u;
label_2c1064:
    // 0x2c1064: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c1064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c1068: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2c1068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2c106c: 0xac20d5b4  sw          $zero, -0x2A4C($at)
    ctx->pc = 0x2c106cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956468), GPR_U32(ctx, 0));
    // 0x2c1070: 0x246351e0  addiu       $v1, $v1, 0x51E0
    ctx->pc = 0x2c1070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20960));
    // 0x2c1074: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c1074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c1078: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2c1078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c107c: 0xac20d5ac  sw          $zero, -0x2A54($at)
    ctx->pc = 0x2c107cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956460), GPR_U32(ctx, 0));
    // 0x2c1080: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2c1080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2c1084: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2c1084u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1088: 0x2a610017  slti        $at, $s3, 0x17
    ctx->pc = 0x2c1088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x2c108c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x2c108cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c1090: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2c1090u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2c1094: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x2c1094u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x2c1098: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2c1098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2c109c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x2c109cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x2c10a0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2c10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2c10a4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C10A4u;
    {
        const bool branch_taken_0x2c10a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C10A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10A4u;
            // 0x2c10a8: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10a4) {
            ctx->pc = 0x2C10C8u;
            goto label_2c10c8;
        }
    }
    ctx->pc = 0x2C10ACu;
    // 0x2c10ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c10acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c10b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2c10b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c10b8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C10B8u;
    SET_GPR_U32(ctx, 31, 0x2C10C0u);
    ctx->pc = 0x2C10BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10B8u;
            // 0x2c10bc: 0x24a5f9b0  addiu       $a1, $a1, -0x650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10C0u; }
        if (ctx->pc != 0x2C10C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10C0u; }
        if (ctx->pc != 0x2C10C0u) { return; }
    }
    ctx->pc = 0x2C10C0u;
label_2c10c0:
    // 0x2c10c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C10C0u;
    {
        const bool branch_taken_0x2c10c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C10C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10C0u;
            // 0x2c10c4: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10c0) {
            ctx->pc = 0x2C10E0u;
            goto label_2c10e0;
        }
    }
    ctx->pc = 0x2C10C8u;
label_2c10c8:
    // 0x2c10c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c10c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c10cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2c10ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c10d4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C10D4u;
    SET_GPR_U32(ctx, 31, 0x2C10DCu);
    ctx->pc = 0x2C10D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10D4u;
            // 0x2c10d8: 0x24a5f9d0  addiu       $a1, $a1, -0x630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10DCu; }
        if (ctx->pc != 0x2C10DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10DCu; }
        if (ctx->pc != 0x2C10DCu) { return; }
    }
    ctx->pc = 0x2C10DCu;
label_2c10dc:
    // 0x2c10dc: 0x8f849c4c  lw          $a0, -0x63B4($gp)
    ctx->pc = 0x2c10dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
label_2c10e0:
    // 0x2c10e0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2c10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c10e4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2c10e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c10e8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2c10e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2c10ec: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2c10ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2c10f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c10f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c10f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c10f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10f8: 0xc0a6194  jal         func_298650
    ctx->pc = 0x2C10F8u;
    SET_GPR_U32(ctx, 31, 0x2C1100u);
    ctx->pc = 0x2C10FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10F8u;
            // 0x2c10fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298650u;
    if (runtime->hasFunction(0x298650u)) {
        auto targetFn = runtime->lookupFunction(0x298650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1100u; }
        if (ctx->pc != 0x2C1100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcPP9mgCMemoryiibbb_0x298650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1100u; }
        if (ctx->pc != 0x2C1100u) { return; }
    }
    ctx->pc = 0x2C1100u;
label_2c1100:
    // 0x2c1100: 0x8f849c4c  lw          $a0, -0x63B4($gp)
    ctx->pc = 0x2c1100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
    // 0x2c1104: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c1108: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2C1108u;
    SET_GPR_U32(ctx, 31, 0x2C1110u);
    ctx->pc = 0x2C110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1108u;
            // 0x2c110c: 0x24a5f8d0  addiu       $a1, $a1, -0x730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298B80u;
    if (runtime->hasFunction(0x298B80u)) {
        auto targetFn = runtime->lookupFunction(0x298B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1110u; }
        if (ctx->pc != 0x2C1110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__6CMovieFPc_0x298b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1110u; }
        if (ctx->pc != 0x2C1110u) { return; }
    }
    ctx->pc = 0x2C1110u;
label_2c1110:
    // 0x2c1110: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C1110u;
    SET_GPR_U32(ctx, 31, 0x2C1118u);
    ctx->pc = 0x2C1114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1110u;
            // 0x2c1114: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1118u; }
        if (ctx->pc != 0x2C1118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1118u; }
        if (ctx->pc != 0x2C1118u) { return; }
    }
    ctx->pc = 0x2C1118u;
label_2c1118:
    // 0x2c1118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1118u;
    {
        const bool branch_taken_0x2c1118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1118) {
            ctx->pc = 0x2C1128u;
            goto label_2c1128;
        }
    }
    ctx->pc = 0x2C1120u;
label_2c1120:
    // 0x2c1120: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2C1120u;
    SET_GPR_U32(ctx, 31, 0x2C1128u);
    ctx->pc = 0x2C1124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1120u;
            // 0x2c1124: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1128u; }
        if (ctx->pc != 0x2C1128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1128u; }
        if (ctx->pc != 0x2C1128u) { return; }
    }
    ctx->pc = 0x2C1128u;
label_2c1128:
    // 0x2c1128: 0xc0a63dc  jal         func_298F70
    ctx->pc = 0x2C1128u;
    SET_GPR_U32(ctx, 31, 0x2C1130u);
    ctx->pc = 0x2C112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1128u;
            // 0x2c112c: 0x8f849c4c  lw          $a0, -0x63B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F70u;
    if (runtime->hasFunction(0x298F70u)) {
        auto targetFn = runtime->lookupFunction(0x298F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1130u; }
        if (ctx->pc != 0x2C1130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsStarted__6CMovieFv_0x298f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1130u; }
        if (ctx->pc != 0x2C1130u) { return; }
    }
    ctx->pc = 0x2C1130u;
label_2c1130:
    // 0x2c1130: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C1130u;
    {
        const bool branch_taken_0x2c1130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1130u;
            // 0x2c1134: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1130) {
            ctx->pc = 0x2C1120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c1120;
        }
    }
    ctx->pc = 0x2C1138u;
    // 0x2c1138: 0xc08cb30  jal         func_232CC0
    ctx->pc = 0x2C1138u;
    SET_GPR_U32(ctx, 31, 0x2C1140u);
    ctx->pc = 0x232CC0u;
    if (runtime->hasFunction(0x232CC0u)) {
        auto targetFn = runtime->lookupFunction(0x232CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1140u; }
        if (ctx->pc != 0x2C1140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuFrameRate__Fi_0x232cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1140u; }
        if (ctx->pc != 0x2C1140u) { return; }
    }
    ctx->pc = 0x2C1140u;
label_2c1140:
    // 0x2c1140: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c1140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c1144:
    // 0x2c1144: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x2c1144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c1148: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2C1148u;
    {
        const bool branch_taken_0x2c1148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1148u;
            // 0x2c114c: 0xa7809c84  sh          $zero, -0x637C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941828), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1148) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C1150u;
label_2c1150:
    // 0x2c1150: 0x87839c84  lh          $v1, -0x637C($gp)
    ctx->pc = 0x2c1150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941828)));
    // 0x2c1154: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2c1154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c1158: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2C1158u;
    {
        const bool branch_taken_0x2c1158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1158) {
            ctx->pc = 0x2C118Cu;
            goto label_2c118c;
        }
    }
    ctx->pc = 0x2C1160u;
    // 0x2c1160: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2c1160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c1164: 0xa7829c84  sh          $v0, -0x637C($gp)
    ctx->pc = 0x2c1164u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941828), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c1168: 0x87829c84  lh          $v0, -0x637C($gp)
    ctx->pc = 0x2c1168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941828)));
    // 0x2c116c: 0x1444005b  bne         $v0, $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2C116Cu;
    {
        const bool branch_taken_0x2c116c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c116c) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C1174u;
    // 0x2c1174: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2c1174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c1178: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c1178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c117c: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x2C117Cu;
    SET_GPR_U32(ctx, 31, 0x2C1184u);
    ctx->pc = 0x2C1180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C117Cu;
            // 0x2c1180: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1184u; }
        if (ctx->pc != 0x2C1184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1184u; }
        if (ctx->pc != 0x2C1184u) { return; }
    }
    ctx->pc = 0x2C1184u;
label_2c1184:
    // 0x2c1184: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2C1184u;
    {
        const bool branch_taken_0x2c1184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1184) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C118Cu;
label_2c118c:
    // 0x2c118c: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x2c118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x2c1190: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C1190u;
    {
        const bool branch_taken_0x2c1190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1190) {
            ctx->pc = 0x2C1274u;
            goto label_2c1274;
        }
    }
    ctx->pc = 0x2C1198u;
    // 0x2c1198: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x2c1198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c119c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C119Cu;
    {
        const bool branch_taken_0x2c119c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C11A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C119Cu;
            // 0x2c11a0: 0x8e04013c  lw          $a0, 0x13C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c119c) {
            ctx->pc = 0x2C11ACu;
            goto label_2c11ac;
        }
    }
    ctx->pc = 0x2C11A4u;
    // 0x2c11a4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c11a8: 0xae03013c  sw          $v1, 0x13C($s0)
    ctx->pc = 0x2c11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
label_2c11ac:
    // 0x2c11ac: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2c11acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2c11b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C11B0u;
    {
        const bool branch_taken_0x2c11b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C11B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C11B0u;
            // 0x2c11b4: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11b0) {
            ctx->pc = 0x2C11C0u;
            goto label_2c11c0;
        }
    }
    ctx->pc = 0x2C11B8u;
    // 0x2c11b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C11B8u;
    {
        const bool branch_taken_0x2c11b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c11b8) {
            ctx->pc = 0x2C11CCu;
            goto label_2c11cc;
        }
    }
    ctx->pc = 0x2C11C0u;
label_2c11c0:
    // 0x2c11c0: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x2c11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2c11c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c11c8: 0xae02013c  sw          $v0, 0x13C($s0)
    ctx->pc = 0x2c11c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
label_2c11cc:
    // 0x2c11cc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x2c11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2c11d0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C11D0u;
    {
        const bool branch_taken_0x2c11d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c11d0) {
            ctx->pc = 0x2C11E4u;
            goto label_2c11e4;
        }
    }
    ctx->pc = 0x2C11D8u;
    // 0x2c11d8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x2c11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x2c11dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c11e0: 0xae02013c  sw          $v0, 0x13C($s0)
    ctx->pc = 0x2c11e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
label_2c11e4:
    // 0x2c11e4: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x2c11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x2c11e8: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x2c11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2c11ec: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c11ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c11f0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C11F0u;
    {
        const bool branch_taken_0x2c11f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c11f0) {
            ctx->pc = 0x2C11FCu;
            goto label_2c11fc;
        }
    }
    ctx->pc = 0x2C11F8u;
    // 0x2c11f8: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x2c11f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
label_2c11fc:
    // 0x2c11fc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x2c11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2c1200: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C1200u;
    {
        const bool branch_taken_0x2c1200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1200u;
            // 0x2c1204: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1200) {
            ctx->pc = 0x2C1244u;
            goto label_2c1244;
        }
    }
    ctx->pc = 0x2C1208u;
    // 0x2c1208: 0xdf829c98  ld          $v0, -0x6368($gp)
    ctx->pc = 0x2c1208u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941848)));
    // 0x2c120c: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x2c120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2c1210: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c1210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c1214: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c1214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1218: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2c1218u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2c121c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x2c121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2c1220: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2c1220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x2c1224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c1224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c1228: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2c1228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2c122c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x2c122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x2c1230: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x2C1230u;
    SET_GPR_U32(ctx, 31, 0x2C1238u);
    ctx->pc = 0x2C1234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1230u;
            // 0x2c1234: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1238u; }
        if (ctx->pc != 0x2C1238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1238u; }
        if (ctx->pc != 0x2C1238u) { return; }
    }
    ctx->pc = 0x2C1238u;
label_2c1238:
    // 0x2c1238: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C1238u;
    SET_GPR_U32(ctx, 31, 0x2C1240u);
    ctx->pc = 0x2C123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1238u;
            // 0x2c123c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1240u; }
        if (ctx->pc != 0x2C1240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1240u; }
        if (ctx->pc != 0x2C1240u) { return; }
    }
    ctx->pc = 0x2C1240u;
label_2c1240:
    // 0x2c1240: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x2c1240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_2c1244:
    // 0x2c1244: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C1244u;
    {
        const bool branch_taken_0x2c1244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1244) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C124Cu;
    // 0x2c124c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c124cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c1250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1254: 0xc08e898  jal         func_23A260
    ctx->pc = 0x2C1254u;
    SET_GPR_U32(ctx, 31, 0x2C125Cu);
    ctx->pc = 0x2C1258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1254u;
            // 0x2c1258: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C125Cu; }
        if (ctx->pc != 0x2C125Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C125Cu; }
        if (ctx->pc != 0x2C125Cu) { return; }
    }
    ctx->pc = 0x2C125Cu;
label_2c125c:
    // 0x2c125c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1260: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c1260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c1264: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C1264u;
    SET_GPR_U32(ctx, 31, 0x2C126Cu);
    ctx->pc = 0x2C1268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1264u;
            // 0x2c1268: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C126Cu; }
        if (ctx->pc != 0x2C126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C126Cu; }
        if (ctx->pc != 0x2C126Cu) { return; }
    }
    ctx->pc = 0x2C126Cu;
label_2c126c:
    // 0x2c126c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C126Cu;
    {
        const bool branch_taken_0x2c126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c126c) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C1274u;
label_2c1274:
    // 0x2c1274: 0x8f849c4c  lw          $a0, -0x63B4($gp)
    ctx->pc = 0x2c1274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941772)));
    // 0x2c1278: 0xc0a63cc  jal         func_298F30
    ctx->pc = 0x2C1278u;
    SET_GPR_U32(ctx, 31, 0x2C1280u);
    ctx->pc = 0x2C127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1278u;
            // 0x2c127c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F30u;
    if (runtime->hasFunction(0x298F30u)) {
        auto targetFn = runtime->lookupFunction(0x298F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1280u; }
        if (ctx->pc != 0x2C1280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCheck__6CMovieFv_0x298f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1280u; }
        if (ctx->pc != 0x2C1280u) { return; }
    }
    ctx->pc = 0x2C1280u;
label_2c1280:
    // 0x2c1280: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1280u;
    {
        const bool branch_taken_0x2c1280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1280u;
            // 0x2c1284: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1280) {
            ctx->pc = 0x2C1298u;
            goto label_2c1298;
        }
    }
    ctx->pc = 0x2C1288u;
    // 0x2c1288: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1288u;
    {
        const bool branch_taken_0x2c1288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C128Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1288u;
            // 0x2c128c: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1288) {
            ctx->pc = 0x2C1298u;
            goto label_2c1298;
        }
    }
    ctx->pc = 0x2C1290u;
    // 0x2c1290: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1290u;
    {
        const bool branch_taken_0x2c1290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1290) {
            ctx->pc = 0x2C129Cu;
            goto label_2c129c;
        }
    }
    ctx->pc = 0x2C1298u;
label_2c1298:
    // 0x2c1298: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c1298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c129c:
    // 0x2c129c: 0x1a60000f  blez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2C129Cu;
    {
        const bool branch_taken_0x2c129c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2c129c) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C12A4u;
    // 0x2c12a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c12a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c12a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c12a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12ac: 0xc08e898  jal         func_23A260
    ctx->pc = 0x2C12ACu;
    SET_GPR_U32(ctx, 31, 0x2C12B4u);
    ctx->pc = 0x2C12B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12ACu;
            // 0x2c12b0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12B4u; }
        if (ctx->pc != 0x2C12B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12B4u; }
        if (ctx->pc != 0x2C12B4u) { return; }
    }
    ctx->pc = 0x2C12B4u;
label_2c12b4:
    // 0x2c12b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c12b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C12B8u;
    {
        const bool branch_taken_0x2c12b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C12BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12B8u;
            // 0x2c12bc: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12b8) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C12C0u;
label_2c12c0:
    // 0x2c12c0: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2C12C0u;
    SET_GPR_U32(ctx, 31, 0x2C12C8u);
    ctx->pc = 0x2C12C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12C0u;
            // 0x2c12c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12C8u; }
        if (ctx->pc != 0x2C12C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12C8u; }
        if (ctx->pc != 0x2C12C8u) { return; }
    }
    ctx->pc = 0x2C12C8u;
label_2c12c8:
    // 0x2c12c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C12C8u;
    {
        const bool branch_taken_0x2c12c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C12CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12C8u;
            // 0x2c12cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12c8) {
            ctx->pc = 0x2C12DCu;
            goto label_2c12dc;
        }
    }
    ctx->pc = 0x2C12D0u;
    // 0x2c12d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c12d4: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x2c12d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c12d8: 0xa3829c64  sb          $v0, -0x639C($gp)
    ctx->pc = 0x2c12d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941796), (uint8_t)GPR_U32(ctx, 2));
label_2c12dc:
    // 0x2c12dc: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x2c12dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_2c12e0:
    // 0x2c12e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c12e4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C12E4u;
    {
        const bool branch_taken_0x2c12e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c12e4) {
            ctx->pc = 0x2C1304u;
            goto label_2c1304;
        }
    }
    ctx->pc = 0x2C12ECu;
    // 0x2c12ec: 0xc08acc8  jal         func_22B320
    ctx->pc = 0x2C12ECu;
    SET_GPR_U32(ctx, 31, 0x2C12F4u);
    ctx->pc = 0x2C12F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12ECu;
            // 0x2c12f0: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12F4u; }
        if (ctx->pc != 0x2C12F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12F4u; }
        if (ctx->pc != 0x2C12F4u) { return; }
    }
    ctx->pc = 0x2C12F4u;
label_2c12f4:
    // 0x2c12f4: 0xc0b0514  jal         func_2C1450
    ctx->pc = 0x2C12F4u;
    SET_GPR_U32(ctx, 31, 0x2C12FCu);
    ctx->pc = 0x2C12F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12F4u;
            // 0x2c12f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1450u;
    if (runtime->hasFunction(0x2C1450u)) {
        auto targetFn = runtime->lookupFunction(0x2C1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12FCu; }
        if (ctx->pc != 0x2C12FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__11CManualMenuFv_0x2c1450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12FCu; }
        if (ctx->pc != 0x2C12FCu) { return; }
    }
    ctx->pc = 0x2C12FCu;
label_2c12fc:
    // 0x2c12fc: 0xc0b0634  jal         func_2C18D0
    ctx->pc = 0x2C12FCu;
    SET_GPR_U32(ctx, 31, 0x2C1304u);
    ctx->pc = 0x2C1300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12FCu;
            // 0x2c1300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C18D0u;
    if (runtime->hasFunction(0x2C18D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C18D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1304u; }
        if (ctx->pc != 0x2C1304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCursorPosition__11CManualMenuFv_0x2c18d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1304u; }
        if (ctx->pc != 0x2C1304u) { return; }
    }
    ctx->pc = 0x2C1304u;
label_2c1304:
    // 0x2c1304: 0x87829c70  lh          $v0, -0x6390($gp)
    ctx->pc = 0x2c1304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941808)));
    // 0x2c1308: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2C1308u;
    {
        const bool branch_taken_0x2c1308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1308u;
            // 0x2c130c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1308) {
            ctx->pc = 0x2C1424u;
            goto label_2c1424;
        }
    }
    ctx->pc = 0x2C1310u;
    // 0x2c1310: 0x8f8394a4  lw          $v1, -0x6B5C($gp)
    ctx->pc = 0x2c1310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c1314: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x2c1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x2c1318: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2C1318u;
    {
        const bool branch_taken_0x2c1318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1318u;
            // 0x2c131c: 0x24652f90  addiu       $a1, $v1, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1318) {
            ctx->pc = 0x2C1420u;
            goto label_2c1420;
        }
    }
    ctx->pc = 0x2C1320u;
    // 0x2c1320: 0x87829c74  lh          $v0, -0x638C($gp)
    ctx->pc = 0x2c1320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941812)));
    // 0x2c1324: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1328: 0x1044003d  beq         $v0, $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C1328u;
    {
        const bool branch_taken_0x2c1328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c1328) {
            ctx->pc = 0x2C1420u;
            goto label_2c1420;
        }
    }
    ctx->pc = 0x2C1330u;
    // 0x2c1330: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2c1330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c1334: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2c1334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2c1338: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C1338u;
    {
        const bool branch_taken_0x2c1338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1338u;
            // 0x2c133c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1338) {
            ctx->pc = 0x2C1420u;
            goto label_2c1420;
        }
    }
    ctx->pc = 0x2C1340u;
    // 0x2c1340: 0x83839c64  lb          $v1, -0x639C($gp)
    ctx->pc = 0x2c1340u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941796)));
    // 0x2c1344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c1344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1348: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2C1348u;
    {
        const bool branch_taken_0x2c1348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1348u;
            // 0x2c134c: 0x8c30e534  lw          $s0, -0x1ACC($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1348) {
            ctx->pc = 0x2C140Cu;
            goto label_2c140c;
        }
    }
    ctx->pc = 0x2C1350u;
    // 0x2c1350: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c1350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1354: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C1354u;
    {
        const bool branch_taken_0x2c1354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1354u;
            // 0x2c1358: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1354) {
            ctx->pc = 0x2C13D8u;
            goto label_2c13d8;
        }
    }
    ctx->pc = 0x2C135Cu;
    // 0x2c135c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C135Cu;
    {
        const bool branch_taken_0x2c135c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C135Cu;
            // 0x2c1360: 0x3c02bccc  lui         $v0, 0xBCCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c135c) {
            ctx->pc = 0x2C13A8u;
            goto label_2c13a8;
        }
    }
    ctx->pc = 0x2C1364u;
    // 0x2c1364: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1364u;
    {
        const bool branch_taken_0x2c1364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c1364) {
            ctx->pc = 0x2C137Cu;
            goto label_2c137c;
        }
    }
    ctx->pc = 0x2C136Cu;
    // 0x2c136c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C136Cu;
    {
        const bool branch_taken_0x2c136c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c136c) {
            ctx->pc = 0x2C1420u;
            goto label_2c1420;
        }
    }
    ctx->pc = 0x2C1374u;
    // 0x2c1374: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C1374u;
    {
        const bool branch_taken_0x2c1374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1374) {
            ctx->pc = 0x2C1420u;
            goto label_2c1420;
        }
    }
    ctx->pc = 0x2C137Cu;
label_2c137c:
    // 0x2c137c: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x2c137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1384: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c1384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c1388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c138c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c138cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1390: 0xc063b38  jal         func_18ECE0
    ctx->pc = 0x2C1390u;
    SET_GPR_U32(ctx, 31, 0x2C1398u);
    ctx->pc = 0x2C1394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1390u;
            // 0x2c1394: 0xe7809c68  swc1        $f0, -0x6398($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294941800), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1398u; }
        if (ctx->pc != 0x2C1398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1398u; }
        if (ctx->pc != 0x2C1398u) { return; }
    }
    ctx->pc = 0x2C1398u;
label_2c1398:
    // 0x2c1398: 0x83829c64  lb          $v0, -0x639C($gp)
    ctx->pc = 0x2c1398u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941796)));
    // 0x2c139c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c13a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C13A0u;
    {
        const bool branch_taken_0x2c13a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13A0u;
            // 0x2c13a4: 0xa3829c64  sb          $v0, -0x639C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941796), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13a0) {
            ctx->pc = 0x2C1420u;
            goto label_2c1420;
        }
    }
    ctx->pc = 0x2C13A8u;
label_2c13a8:
    // 0x2c13a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c13a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c13ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c13acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c13b0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2c13b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c13b4: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2C13B4u;
    SET_GPR_U32(ctx, 31, 0x2C13BCu);
    ctx->pc = 0x2C13B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13B4u;
            // 0x2c13b8: 0x27849c6c  addiu       $a0, $gp, -0x6394 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941804));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13BCu; }
        if (ctx->pc != 0x2C13BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13BCu; }
        if (ctx->pc != 0x2C13BCu) { return; }
    }
    ctx->pc = 0x2C13BCu;
label_2c13bc:
    // 0x2c13bc: 0xc78c9c6c  lwc1        $f12, -0x6394($gp)
    ctx->pc = 0x2c13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c13c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c13c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c13c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13c8: 0xc063b38  jal         func_18ECE0
    ctx->pc = 0x2C13C8u;
    SET_GPR_U32(ctx, 31, 0x2C13D0u);
    ctx->pc = 0x2C13CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13C8u;
            // 0x2c13cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13D0u; }
        if (ctx->pc != 0x2C13D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13D0u; }
        if (ctx->pc != 0x2C13D0u) { return; }
    }
    ctx->pc = 0x2C13D0u;
label_2c13d0:
    // 0x2c13d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C13D0u;
    {
        const bool branch_taken_0x2c13d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c13d0) {
            ctx->pc = 0x2C1420u;
            goto label_2c1420;
        }
    }
    ctx->pc = 0x2C13D8u;
label_2c13d8:
    // 0x2c13d8: 0xc78d9c68  lwc1        $f13, -0x6398($gp)
    ctx->pc = 0x2c13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c13dc: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x2c13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
    // 0x2c13e0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x2c13e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c13e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c13e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c13e8: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2C13E8u;
    SET_GPR_U32(ctx, 31, 0x2C13F0u);
    ctx->pc = 0x2C13ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13E8u;
            // 0x2c13ec: 0x27849c6c  addiu       $a0, $gp, -0x6394 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941804));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13F0u; }
        if (ctx->pc != 0x2C13F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13F0u; }
        if (ctx->pc != 0x2C13F0u) { return; }
    }
    ctx->pc = 0x2C13F0u;
label_2c13f0:
    // 0x2c13f0: 0xc78c9c6c  lwc1        $f12, -0x6394($gp)
    ctx->pc = 0x2c13f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c13f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c13f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c13f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13fc: 0xc063b38  jal         func_18ECE0
    ctx->pc = 0x2C13FCu;
    SET_GPR_U32(ctx, 31, 0x2C1404u);
    ctx->pc = 0x2C1400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13FCu;
            // 0x2c1400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1404u; }
        if (ctx->pc != 0x2C1404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1404u; }
        if (ctx->pc != 0x2C1404u) { return; }
    }
    ctx->pc = 0x2C1404u;
label_2c1404:
    // 0x2c1404: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1404u;
    {
        const bool branch_taken_0x2c1404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1404) {
            ctx->pc = 0x2C1420u;
            goto label_2c1420;
        }
    }
    ctx->pc = 0x2C140Cu;
label_2c140c:
    // 0x2c140c: 0xc78c9c68  lwc1        $f12, -0x6398($gp)
    ctx->pc = 0x2c140cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c1410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c1414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1418: 0xc063b38  jal         func_18ECE0
    ctx->pc = 0x2C1418u;
    SET_GPR_U32(ctx, 31, 0x2C1420u);
    ctx->pc = 0x2C141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1418u;
            // 0x2c141c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1420u; }
        if (ctx->pc != 0x2C1420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1420u; }
        if (ctx->pc != 0x2C1420u) { return; }
    }
    ctx->pc = 0x2C1420u;
label_2c1420:
    // 0x2c1420: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c1420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1424:
    // 0x2c1424: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c1424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1428: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c1428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c142c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c142cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c143c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C143Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C143Cu;
            // 0x2c1440: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1444u;
}
