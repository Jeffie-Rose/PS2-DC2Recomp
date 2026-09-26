#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemAskMode_HowMuch__14CBaseMenuClassFii
// Address: 0x238ac0 - 0x238bb8
void MenuItemAskMode_HowMuch__14CBaseMenuClassFii_0x238ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemAskMode_HowMuch__14CBaseMenuClassFii_0x238ac0");
#endif

    switch (ctx->pc) {
        case 0x238ae8u: goto label_238ae8;
        case 0x238b4cu: goto label_238b4c;
        case 0x238b54u: goto label_238b54;
        case 0x238b68u: goto label_238b68;
        case 0x238b8cu: goto label_238b8c;
        case 0x238ba4u: goto label_238ba4;
        default: break;
    }

    ctx->pc = 0x238ac0u;

    // 0x238ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x238ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x238ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238acc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ad0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x238ad4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x238ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ad8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x238ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238adc: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x238adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x238ae0: 0xc08e254  jal         func_238950
    ctx->pc = 0x238AE0u;
    SET_GPR_U32(ctx, 31, 0x238AE8u);
    ctx->pc = 0x238AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238AE0u;
            // 0x238ae4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238950u;
    if (runtime->hasFunction(0x238950u)) {
        auto targetFn = runtime->lookupFunction(0x238950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238AE8u; }
        if (ctx->pc != 0x238AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuHowMuchNumSelect__FiP13CGameDataUsedi_0x238950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238AE8u; }
        if (ctx->pc != 0x238AE8u) { return; }
    }
    ctx->pc = 0x238AE8u;
label_238ae8:
    // 0x238ae8: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x238ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238aec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x238aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238af0: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x238AF0u;
    {
        const bool branch_taken_0x238af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x238AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238AF0u;
            // 0x238af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238af0) {
            ctx->pc = 0x238B60u;
            goto label_238b60;
        }
    }
    ctx->pc = 0x238AF8u;
    // 0x238af8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x238af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238afc: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238AFCu;
    {
        const bool branch_taken_0x238afc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x238B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238AFCu;
            // 0x238b00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238afc) {
            ctx->pc = 0x238B24u;
            goto label_238b24;
        }
    }
    ctx->pc = 0x238B04u;
    // 0x238b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238b08: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238B08u;
    {
        const bool branch_taken_0x238b08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x238B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B08u;
            // 0x238b0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b08) {
            ctx->pc = 0x238B20u;
            goto label_238b20;
        }
    }
    ctx->pc = 0x238B10u;
    // 0x238b10: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238B10u;
    {
        const bool branch_taken_0x238b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x238b10) {
            ctx->pc = 0x238B20u;
            goto label_238b20;
        }
    }
    ctx->pc = 0x238B18u;
    // 0x238b18: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x238B18u;
    {
        const bool branch_taken_0x238b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238b18) {
            ctx->pc = 0x238B6Cu;
            goto label_238b6c;
        }
    }
    ctx->pc = 0x238B20u;
label_238b20:
    // 0x238b20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x238b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238b24:
    // 0x238b24: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238B24u;
    {
        const bool branch_taken_0x238b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x238b24) {
            ctx->pc = 0x238B34u;
            goto label_238b34;
        }
    }
    ctx->pc = 0x238B2Cu;
    // 0x238b2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x238B2Cu;
    {
        const bool branch_taken_0x238b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B2Cu;
            // 0x238b30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b2c) {
            ctx->pc = 0x238B58u;
            goto label_238b58;
        }
    }
    ctx->pc = 0x238B34u;
label_238b34:
    // 0x238b34: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x238b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238b38: 0x262600ec  addiu       $a2, $s1, 0xEC
    ctx->pc = 0x238b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x238b3c: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x238b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x238b40: 0x8f879608  lw          $a3, -0x69F8($gp)
    ctx->pc = 0x238b40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x238b44: 0xc08f9ac  jal         func_23E6B0
    ctx->pc = 0x238B44u;
    SET_GPR_U32(ctx, 31, 0x238B4Cu);
    ctx->pc = 0x238B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B44u;
            // 0x238b48: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E6B0u;
    if (runtime->hasFunction(0x23E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B4Cu; }
        if (ctx->pc != 0x238B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib_0x23e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B4Cu; }
        if (ctx->pc != 0x238B4Cu) { return; }
    }
    ctx->pc = 0x238B4Cu;
label_238b4c:
    // 0x238b4c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x238B4Cu;
    SET_GPR_U32(ctx, 31, 0x238B54u);
    ctx->pc = 0x238B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B4Cu;
            // 0x238b50: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B54u; }
        if (ctx->pc != 0x238B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B54u; }
        if (ctx->pc != 0x238B54u) { return; }
    }
    ctx->pc = 0x238B54u;
label_238b54:
    // 0x238b54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238b58:
    // 0x238b58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238B58u;
    {
        const bool branch_taken_0x238b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B58u;
            // 0x238b5c: 0xaf849608  sw          $a0, -0x69F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940168), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b58) {
            ctx->pc = 0x238B6Cu;
            goto label_238b6c;
        }
    }
    ctx->pc = 0x238B60u;
label_238b60:
    // 0x238b60: 0xc094274  jal         func_2509D0
    ctx->pc = 0x238B60u;
    SET_GPR_U32(ctx, 31, 0x238B68u);
    ctx->pc = 0x238B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B60u;
            // 0x238b64: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B68u; }
        if (ctx->pc != 0x238B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B68u; }
        if (ctx->pc != 0x238B68u) { return; }
    }
    ctx->pc = 0x238B68u;
label_238b68:
    // 0x238b68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238b6c:
    // 0x238b6c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238B6Cu;
    {
        const bool branch_taken_0x238b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238b6c) {
            ctx->pc = 0x238B8Cu;
            goto label_238b8c;
        }
    }
    ctx->pc = 0x238B74u;
    // 0x238b74: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x238b74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x238b78: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x238b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238b7c: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x238b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x238b80: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x238b80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x238b84: 0xc08f014  jal         func_23C050
    ctx->pc = 0x238B84u;
    SET_GPR_U32(ctx, 31, 0x238B8Cu);
    ctx->pc = 0x238B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B84u;
            // 0x238b88: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C050u;
    if (runtime->hasFunction(0x23C050u)) {
        auto targetFn = runtime->lookupFunction(0x23C050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B8Cu; }
        if (ctx->pc != 0x238B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosPlay__12CMenuKeyFuncFv_0x23c050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B8Cu; }
        if (ctx->pc != 0x238B8Cu) { return; }
    }
    ctx->pc = 0x238B8Cu;
label_238b8c:
    // 0x238b8c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x238b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238b90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x238b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x238b94: 0x8f869608  lw          $a2, -0x69F8($gp)
    ctx->pc = 0x238b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x238b98: 0x8c440140  lw          $a0, 0x140($v0)
    ctx->pc = 0x238b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x238b9c: 0xc089728  jal         func_225CA0
    ctx->pc = 0x238B9Cu;
    SET_GPR_U32(ctx, 31, 0x238BA4u);
    ctx->pc = 0x238BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B9Cu;
            // 0x238ba0: 0x24a5abe0  addiu       $a1, $a1, -0x5420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BA4u; }
        if (ctx->pc != 0x238BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BA4u; }
        if (ctx->pc != 0x238BA4u) { return; }
    }
    ctx->pc = 0x238BA4u;
label_238ba4:
    // 0x238ba4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x238ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238ba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238bac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x238BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238BB0u;
            // 0x238bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238BB8u;
}
