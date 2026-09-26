#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMoveItemPos__FPiPii
// Address: 0x2429a0 - 0x242b6c
void MenuMoveItemPos__FPiPii_0x2429a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMoveItemPos__FPiPii_0x2429a0");
#endif

    switch (ctx->pc) {
        case 0x242a14u: goto label_242a14;
        case 0x242a28u: goto label_242a28;
        case 0x242a48u: goto label_242a48;
        case 0x242a5cu: goto label_242a5c;
        case 0x242a7cu: goto label_242a7c;
        case 0x242a94u: goto label_242a94;
        case 0x242ab0u: goto label_242ab0;
        case 0x242ad8u: goto label_242ad8;
        case 0x242af4u: goto label_242af4;
        case 0x242b0cu: goto label_242b0c;
        case 0x242b38u: goto label_242b38;
        case 0x242b54u: goto label_242b54;
        default: break;
    }

    ctx->pc = 0x2429a0u;

    // 0x2429a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2429a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2429a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2429a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2429a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2429a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2429ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2429acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2429b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2429b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2429b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2429b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2429b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429bc: 0x16000053  bnez        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2429BCu;
    {
        const bool branch_taken_0x2429bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2429C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429BCu;
            // 0x2429c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429bc) {
            ctx->pc = 0x242B0Cu;
            goto label_242b0c;
        }
    }
    ctx->pc = 0x2429C4u;
    // 0x2429c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2429c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2429c8: 0x14800026  bnez        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2429C8u;
    {
        const bool branch_taken_0x2429c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2429CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429C8u;
            // 0x2429cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429c8) {
            ctx->pc = 0x242A64u;
            goto label_242a64;
        }
    }
    ctx->pc = 0x2429D0u;
    // 0x2429d0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2429d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2429d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2429D4u;
    {
        const bool branch_taken_0x2429d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2429d4) {
            ctx->pc = 0x2429F4u;
            goto label_2429f4;
        }
    }
    ctx->pc = 0x2429DCu;
    // 0x2429dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2429dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2429e0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2429E0u;
    {
        const bool branch_taken_0x2429e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2429e0) {
            ctx->pc = 0x2429F4u;
            goto label_2429f4;
        }
    }
    ctx->pc = 0x2429E8u;
    // 0x2429e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2429e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2429ec: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2429ECu;
    {
        const bool branch_taken_0x2429ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2429F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429ECu;
            // 0x2429f0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429ec) {
            ctx->pc = 0x242A1Cu;
            goto label_242a1c;
        }
    }
    ctx->pc = 0x2429F4u;
label_2429f4:
    // 0x2429f4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2429f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2429f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2429f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2429fc: 0x24420fd8  addiu       $v0, $v0, 0xFD8
    ctx->pc = 0x2429fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
    // 0x242a00: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x242a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x242a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242a08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x242a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242a0c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x242A0Cu;
    SET_GPR_U32(ctx, 31, 0x242A14u);
    ctx->pc = 0x242A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242A0Cu;
            // 0x242a10: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A14u; }
        if (ctx->pc != 0x242A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A14u; }
        if (ctx->pc != 0x242A14u) { return; }
    }
    ctx->pc = 0x242A14u;
label_242a14:
    // 0x242a14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x242A14u;
    {
        const bool branch_taken_0x242a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A14u;
            // 0x242a18: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a14) {
            ctx->pc = 0x242A2Cu;
            goto label_242a2c;
        }
    }
    ctx->pc = 0x242A1Cu;
label_242a1c:
    // 0x242a1c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x242a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x242a20: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x242A20u;
    SET_GPR_U32(ctx, 31, 0x242A28u);
    ctx->pc = 0x242A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242A20u;
            // 0x242a24: 0x24a5b070  addiu       $a1, $a1, -0x4F90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A28u; }
        if (ctx->pc != 0x242A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A28u; }
        if (ctx->pc != 0x242A28u) { return; }
    }
    ctx->pc = 0x242A28u;
label_242a28:
    // 0x242a28: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x242a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_242a2c:
    // 0x242a2c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x242a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x242a30: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x242a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x242a34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242a3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x242a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242a40: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x242A40u;
    SET_GPR_U32(ctx, 31, 0x242A48u);
    ctx->pc = 0x242A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242A40u;
            // 0x242a44: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A48u; }
        if (ctx->pc != 0x242A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A48u; }
        if (ctx->pc != 0x242A48u) { return; }
    }
    ctx->pc = 0x242A48u;
label_242a48:
    // 0x242a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x242a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a4c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x242a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x242a50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x242a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a54: 0xc08974c  jal         func_225D30
    ctx->pc = 0x242A54u;
    SET_GPR_U32(ctx, 31, 0x242A5Cu);
    ctx->pc = 0x242A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242A54u;
            // 0x242a58: 0x26270004  addiu       $a3, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A5Cu; }
        if (ctx->pc != 0x242A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A5Cu; }
        if (ctx->pc != 0x242A5Cu) { return; }
    }
    ctx->pc = 0x242A5Cu;
label_242a5c:
    // 0x242a5c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x242A5Cu;
    {
        const bool branch_taken_0x242a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A5Cu;
            // 0x242a60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a5c) {
            ctx->pc = 0x242B10u;
            goto label_242b10;
        }
    }
    ctx->pc = 0x242A64u;
label_242a64:
    // 0x242a64: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x242A64u;
    {
        const bool branch_taken_0x242a64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x242A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A64u;
            // 0x242a68: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a64) {
            ctx->pc = 0x242A84u;
            goto label_242a84;
        }
    }
    ctx->pc = 0x242A6Cu;
    // 0x242a6c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x242a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x242a70: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x242a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x242a74: 0xc08b0e0  jal         func_22C380
    ctx->pc = 0x242A74u;
    SET_GPR_U32(ctx, 31, 0x242A7Cu);
    ctx->pc = 0x242A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242A74u;
            // 0x242a78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A7Cu; }
        if (ctx->pc != 0x242A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A7Cu; }
        if (ctx->pc != 0x242A7Cu) { return; }
    }
    ctx->pc = 0x242A7Cu;
label_242a7c:
    // 0x242a7c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x242A7Cu;
    {
        const bool branch_taken_0x242a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242a7c) {
            ctx->pc = 0x242B0Cu;
            goto label_242b0c;
        }
    }
    ctx->pc = 0x242A84u;
label_242a84:
    // 0x242a84: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x242A84u;
    {
        const bool branch_taken_0x242a84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x242A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A84u;
            // 0x242a88: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a84) {
            ctx->pc = 0x242A9Cu;
            goto label_242a9c;
        }
    }
    ctx->pc = 0x242A8Cu;
    // 0x242a8c: 0xc08f024  jal         func_23C090
    ctx->pc = 0x242A8Cu;
    SET_GPR_U32(ctx, 31, 0x242A94u);
    ctx->pc = 0x242A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242A8Cu;
            // 0x242a90: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C090u;
    if (runtime->hasFunction(0x23C090u)) {
        auto targetFn = runtime->lookupFunction(0x23C090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A94u; }
        if (ctx->pc != 0x242A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos__12CMenuKeyFuncFPi_0x23c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242A94u; }
        if (ctx->pc != 0x242A94u) { return; }
    }
    ctx->pc = 0x242A94u;
label_242a94:
    // 0x242a94: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x242A94u;
    {
        const bool branch_taken_0x242a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242a94) {
            ctx->pc = 0x242B0Cu;
            goto label_242b0c;
        }
    }
    ctx->pc = 0x242A9Cu;
label_242a9c:
    // 0x242a9c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x242A9Cu;
    {
        const bool branch_taken_0x242a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x242AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A9Cu;
            // 0x242aa0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a9c) {
            ctx->pc = 0x242AE0u;
            goto label_242ae0;
        }
    }
    ctx->pc = 0x242AA4u;
    // 0x242aa4: 0x8f8583a8  lw          $a1, -0x7C58($gp)
    ctx->pc = 0x242aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x242aa8: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x242AA8u;
    SET_GPR_U32(ctx, 31, 0x242AB0u);
    ctx->pc = 0x242AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242AA8u;
            // 0x242aac: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AB0u; }
        if (ctx->pc != 0x242AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AB0u; }
        if (ctx->pc != 0x242AB0u) { return; }
    }
    ctx->pc = 0x242AB0u;
label_242ab0:
    // 0x242ab0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x242ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x242ab4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x242ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x242ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x242ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242abc: 0x24630fb8  addiu       $v1, $v1, 0xFB8
    ctx->pc = 0x242abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4024));
    // 0x242ac0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x242ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ac4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x242ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x242ac8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242acc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x242accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242ad0: 0xc08974c  jal         func_225D30
    ctx->pc = 0x242AD0u;
    SET_GPR_U32(ctx, 31, 0x242AD8u);
    ctx->pc = 0x242AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242AD0u;
            // 0x242ad4: 0x26270004  addiu       $a3, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AD8u; }
        if (ctx->pc != 0x242AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AD8u; }
        if (ctx->pc != 0x242AD8u) { return; }
    }
    ctx->pc = 0x242AD8u;
label_242ad8:
    // 0x242ad8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x242AD8u;
    {
        const bool branch_taken_0x242ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242ad8) {
            ctx->pc = 0x242B0Cu;
            goto label_242b0c;
        }
    }
    ctx->pc = 0x242AE0u;
label_242ae0:
    // 0x242ae0: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x242AE0u;
    {
        const bool branch_taken_0x242ae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x242AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242AE0u;
            // 0x242ae4: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ae0) {
            ctx->pc = 0x242B0Cu;
            goto label_242b0c;
        }
    }
    ctx->pc = 0x242AE8u;
    // 0x242ae8: 0x8c250fc8  lw          $a1, 0xFC8($at)
    ctx->pc = 0x242ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4040)));
    // 0x242aec: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x242AECu;
    SET_GPR_U32(ctx, 31, 0x242AF4u);
    ctx->pc = 0x242AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242AECu;
            // 0x242af0: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AF4u; }
        if (ctx->pc != 0x242AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AF4u; }
        if (ctx->pc != 0x242AF4u) { return; }
    }
    ctx->pc = 0x242AF4u;
label_242af4:
    // 0x242af4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x242af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x242af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x242af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242afc: 0x24a5b068  addiu       $a1, $a1, -0x4F98
    ctx->pc = 0x242afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946920));
    // 0x242b00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x242b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b04: 0xc08974c  jal         func_225D30
    ctx->pc = 0x242B04u;
    SET_GPR_U32(ctx, 31, 0x242B0Cu);
    ctx->pc = 0x242B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242B04u;
            // 0x242b08: 0x26270004  addiu       $a3, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B0Cu; }
        if (ctx->pc != 0x242B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B0Cu; }
        if (ctx->pc != 0x242B0Cu) { return; }
    }
    ctx->pc = 0x242B0Cu;
label_242b0c:
    // 0x242b0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x242b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242b10:
    // 0x242b10: 0x16030010  bne         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x242B10u;
    {
        const bool branch_taken_0x242b10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x242b10) {
            ctx->pc = 0x242B54u;
            goto label_242b54;
        }
    }
    ctx->pc = 0x242B18u;
    // 0x242b18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x242b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x242b1c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x242B1Cu;
    {
        const bool branch_taken_0x242b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x242B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B1Cu;
            // 0x242b20: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b1c) {
            ctx->pc = 0x242B40u;
            goto label_242b40;
        }
    }
    ctx->pc = 0x242B24u;
    // 0x242b24: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x242b28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x242b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b2c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x242b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x242b30: 0xc08b0e0  jal         func_22C380
    ctx->pc = 0x242B30u;
    SET_GPR_U32(ctx, 31, 0x242B38u);
    ctx->pc = 0x242B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242B30u;
            // 0x242b34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B38u; }
        if (ctx->pc != 0x242B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B38u; }
        if (ctx->pc != 0x242B38u) { return; }
    }
    ctx->pc = 0x242B38u;
label_242b38:
    // 0x242b38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242B38u;
    {
        const bool branch_taken_0x242b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B38u;
            // 0x242b3c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b38) {
            ctx->pc = 0x242B58u;
            goto label_242b58;
        }
    }
    ctx->pc = 0x242B40u;
label_242b40:
    // 0x242b40: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x242B40u;
    {
        const bool branch_taken_0x242b40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x242b40) {
            ctx->pc = 0x242B54u;
            goto label_242b54;
        }
    }
    ctx->pc = 0x242B48u;
    // 0x242b48: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x242b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x242b4c: 0xc08f024  jal         func_23C090
    ctx->pc = 0x242B4Cu;
    SET_GPR_U32(ctx, 31, 0x242B54u);
    ctx->pc = 0x242B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242B4Cu;
            // 0x242b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C090u;
    if (runtime->hasFunction(0x23C090u)) {
        auto targetFn = runtime->lookupFunction(0x23C090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B54u; }
        if (ctx->pc != 0x242B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos__12CMenuKeyFuncFPi_0x23c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B54u; }
        if (ctx->pc != 0x242B54u) { return; }
    }
    ctx->pc = 0x242B54u;
label_242b54:
    // 0x242b54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x242b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_242b58:
    // 0x242b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242b64: 0x3e00008  jr          $ra
    ctx->pc = 0x242B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B64u;
            // 0x242b68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242B6Cu;
}
