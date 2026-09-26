#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleMCCheckInit__Fi
// Address: 0x2a29f0 - 0x2a2acc
void TitleMCCheckInit__Fi_0x2a29f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleMCCheckInit__Fi_0x2a29f0");
#endif

    switch (ctx->pc) {
        case 0x2a2a20u: goto label_2a2a20;
        case 0x2a2a38u: goto label_2a2a38;
        case 0x2a2a50u: goto label_2a2a50;
        case 0x2a2a6cu: goto label_2a2a6c;
        case 0x2a2a88u: goto label_2a2a88;
        case 0x2a2a94u: goto label_2a2a94;
        case 0x2a2ac0u: goto label_2a2ac0;
        default: break;
    }

    ctx->pc = 0x2a29f0u;

    // 0x2a29f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a29f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a29f4: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x2a29f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a29f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a29f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a29fc: 0xa3829a40  sb          $v0, -0x65C0($gp)
    ctx->pc = 0x2a29fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941248), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a2a00: 0x8f8299a0  lw          $v0, -0x6660($gp)
    ctx->pc = 0x2a2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2a04: 0xaf809980  sw          $zero, -0x6680($gp)
    ctx->pc = 0x2a2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941056), GPR_U32(ctx, 0));
    // 0x2a2a08: 0x24440d5c  addiu       $a0, $v0, 0xD5C
    ctx->pc = 0x2a2a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
    // 0x2a2a0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2A0Cu;
    {
        const bool branch_taken_0x2a2a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A0Cu;
            // 0x2a2a10: 0xff809988  sd          $zero, -0x6678($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294941064), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a0c) {
            ctx->pc = 0x2A2A20u;
            goto label_2a2a20;
        }
    }
    ctx->pc = 0x2A2A14u;
    // 0x2a2a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a18: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A2A18u;
    SET_GPR_U32(ctx, 31, 0x2A2A20u);
    ctx->pc = 0x2A2A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A18u;
            // 0x2a2a1c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A20u; }
        if (ctx->pc != 0x2A2A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A20u; }
        if (ctx->pc != 0x2A2A20u) { return; }
    }
    ctx->pc = 0x2A2A20u;
label_2a2a20:
    // 0x2a2a20: 0x8f8299a0  lw          $v0, -0x6660($gp)
    ctx->pc = 0x2a2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2a24: 0x24440d7c  addiu       $a0, $v0, 0xD7C
    ctx->pc = 0x2a2a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3452));
    // 0x2a2a28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2A28u;
    {
        const bool branch_taken_0x2a2a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A28u;
            // 0x2a2a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a28) {
            ctx->pc = 0x2A2A38u;
            goto label_2a2a38;
        }
    }
    ctx->pc = 0x2A2A30u;
    // 0x2a2a30: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A2A30u;
    SET_GPR_U32(ctx, 31, 0x2A2A38u);
    ctx->pc = 0x2A2A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A30u;
            // 0x2a2a34: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A38u; }
        if (ctx->pc != 0x2A2A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A38u; }
        if (ctx->pc != 0x2A2A38u) { return; }
    }
    ctx->pc = 0x2A2A38u;
label_2a2a38:
    // 0x2a2a38: 0x8f8299a0  lw          $v0, -0x6660($gp)
    ctx->pc = 0x2a2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2a3c: 0xa7809a44  sh          $zero, -0x65BC($gp)
    ctx->pc = 0x2a2a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941252), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a2a40: 0xac4004c8  sw          $zero, 0x4C8($v0)
    ctx->pc = 0x2a2a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 0));
    // 0x2a2a44: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2a48: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2A2A48u;
    SET_GPR_U32(ctx, 31, 0x2A2A50u);
    ctx->pc = 0x2A2A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A48u;
            // 0x2a2a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A50u; }
        if (ctx->pc != 0x2A2A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A50u; }
        if (ctx->pc != 0x2A2A50u) { return; }
    }
    ctx->pc = 0x2A2A50u;
label_2a2a50:
    // 0x2a2a50: 0xa7808464  sh          $zero, -0x7B9C($gp)
    ctx->pc = 0x2a2a50u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935652), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a2a54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a2a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a58: 0xa3808468  sb          $zero, -0x7B98($gp)
    ctx->pc = 0x2a2a58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935656), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2a5c: 0xa7809a48  sh          $zero, -0x65B8($gp)
    ctx->pc = 0x2a2a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941256), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a2a60: 0xa7808466  sh          $zero, -0x7B9A($gp)
    ctx->pc = 0x2a2a60u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935654), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a2a64: 0xc0659e0  jal         func_196780
    ctx->pc = 0x2A2A64u;
    SET_GPR_U32(ctx, 31, 0x2A2A6Cu);
    ctx->pc = 0x2A2A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A64u;
            // 0x2a2a68: 0xa3808469  sb          $zero, -0x7B97($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935657), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A6Cu; }
        if (ctx->pc != 0x2A2A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A6Cu; }
        if (ctx->pc != 0x2A2A6Cu) { return; }
    }
    ctx->pc = 0x2A2A6Cu;
label_2a2a6c:
    // 0x2a2a6c: 0xaf8299a4  sw          $v0, -0x665C($gp)
    ctx->pc = 0x2a2a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941092), GPR_U32(ctx, 2));
    // 0x2a2a70: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x2a2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2a2a74: 0x8f8299a4  lw          $v0, -0x665C($gp)
    ctx->pc = 0x2a2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2a78: 0xac431b2c  sw          $v1, 0x1B2C($v0)
    ctx->pc = 0x2a2a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
    // 0x2a2a7c: 0x8f8499a4  lw          $a0, -0x665C($gp)
    ctx->pc = 0x2a2a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2a80: 0xc054bb4  jal         func_152ED0
    ctx->pc = 0x2A2A80u;
    SET_GPR_U32(ctx, 31, 0x2A2A88u);
    ctx->pc = 0x2A2A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A80u;
            // 0x2a2a84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A88u; }
        if (ctx->pc != 0x2A2A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A88u; }
        if (ctx->pc != 0x2A2A88u) { return; }
    }
    ctx->pc = 0x2A2A88u;
label_2a2a88:
    // 0x2a2a88: 0x8f8499a4  lw          $a0, -0x665C($gp)
    ctx->pc = 0x2a2a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2a8c: 0xc054cdc  jal         func_153370
    ctx->pc = 0x2A2A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A94u);
    ctx->pc = 0x2A2A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2A8Cu;
            // 0x2a2a90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A94u; }
        if (ctx->pc != 0x2A2A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A94u; }
        if (ctx->pc != 0x2A2A94u) { return; }
    }
    ctx->pc = 0x2A2A94u;
label_2a2a94:
    // 0x2a2a94: 0x8f8399a4  lw          $v1, -0x665C($gp)
    ctx->pc = 0x2a2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2a98: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a2a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a2a9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a2a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2aa0: 0xac65014c  sw          $a1, 0x14C($v1)
    ctx->pc = 0x2a2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 5));
    // 0x2a2aa4: 0x8f8399a4  lw          $v1, -0x665C($gp)
    ctx->pc = 0x2a2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2aa8: 0xac6417e4  sw          $a0, 0x17E4($v1)
    ctx->pc = 0x2a2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6116), GPR_U32(ctx, 4));
    // 0x2a2aac: 0x8f8499a4  lw          $a0, -0x665C($gp)
    ctx->pc = 0x2a2aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2ab0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2AB0u;
    {
        const bool branch_taken_0x2a2ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2AB0u;
            // 0x2a2ab4: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ab0) {
            ctx->pc = 0x2A2AC0u;
            goto label_2a2ac0;
        }
    }
    ctx->pc = 0x2A2AB8u;
    // 0x2a2ab8: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x2A2AB8u;
    SET_GPR_U32(ctx, 31, 0x2A2AC0u);
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AC0u; }
        if (ctx->pc != 0x2A2AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AC0u; }
        if (ctx->pc != 0x2A2AC0u) { return; }
    }
    ctx->pc = 0x2A2AC0u;
label_2a2ac0:
    // 0x2a2ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2AC4u;
            // 0x2a2ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2ACCu;
}
