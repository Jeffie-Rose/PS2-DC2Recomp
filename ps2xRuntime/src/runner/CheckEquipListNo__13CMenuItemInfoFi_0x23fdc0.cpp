#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEquipListNo__13CMenuItemInfoFi
// Address: 0x23fdc0 - 0x23ffb0
void CheckEquipListNo__13CMenuItemInfoFi_0x23fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEquipListNo__13CMenuItemInfoFi_0x23fdc0");
#endif

    switch (ctx->pc) {
        case 0x23fde0u: goto label_23fde0;
        case 0x23fe10u: goto label_23fe10;
        case 0x23fe6cu: goto label_23fe6c;
        case 0x23fed0u: goto label_23fed0;
        case 0x23fee0u: goto label_23fee0;
        case 0x23ff04u: goto label_23ff04;
        default: break;
    }

    ctx->pc = 0x23fdc0u;

    // 0x23fdc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23fdc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23fdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23fdc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23fdcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fdd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23fdd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fdd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23fdd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fdd8: 0xc090c40  jal         func_243100
    ctx->pc = 0x23FDD8u;
    SET_GPR_U32(ctx, 31, 0x23FDE0u);
    ctx->pc = 0x23FDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FDD8u;
            // 0x23fddc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDE0u; }
        if (ctx->pc != 0x23FDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDE0u; }
        if (ctx->pc != 0x23FDE0u) { return; }
    }
    ctx->pc = 0x23FDE0u;
label_23fde0:
    // 0x23fde0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x23fde0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23fde4: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x23FDE4u;
    {
        const bool branch_taken_0x23fde4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FDE4u;
            // 0x23fde8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fde4) {
            ctx->pc = 0x23FEE8u;
            goto label_23fee8;
        }
    }
    ctx->pc = 0x23FDECu;
    // 0x23fdec: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x23fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x23fdf0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x23fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23fdf4: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x23fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x23fdf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23fdfc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fe00: 0x16200016  bnez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23FE00u;
    {
        const bool branch_taken_0x23fe00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE00u;
            // 0x23fe04: 0x24650170  addiu       $a1, $v1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe00) {
            ctx->pc = 0x23FE5Cu;
            goto label_23fe5c;
        }
    }
    ctx->pc = 0x23FE08u;
    // 0x23fe08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23fe08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23fe0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fe10:
    // 0x23fe10: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x23fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x23fe14: 0x24680130  addiu       $t0, $v1, 0x130
    ctx->pc = 0x23fe14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x23fe18: 0x90630130  lbu         $v1, 0x130($v1)
    ctx->pc = 0x23fe18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x23fe1c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FE1Cu;
    {
        const bool branch_taken_0x23fe1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE1Cu;
            // 0x23fe20: 0x2472021  addu        $a0, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe1c) {
            ctx->pc = 0x23FE34u;
            goto label_23fe34;
        }
    }
    ctx->pc = 0x23FE24u;
    // 0x23fe24: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x23fe24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x23fe28: 0x84840120  lh          $a0, 0x120($a0)
    ctx->pc = 0x23fe28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x23fe2c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FE2Cu;
    {
        const bool branch_taken_0x23fe2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23fe2c) {
            ctx->pc = 0x23FE40u;
            goto label_23fe40;
        }
    }
    ctx->pc = 0x23FE34u;
label_23fe34:
    // 0x23fe34: 0x0  nop
    ctx->pc = 0x23fe34u;
    // NOP
    // 0x23fe38: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23fe38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fe3c: 0xa1100000  sb          $s0, 0x0($t0)
    ctx->pc = 0x23fe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 16));
label_23fe40:
    // 0x23fe40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23fe44: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x23fe44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23fe48: 0x24a5006c  addiu       $a1, $a1, 0x6C
    ctx->pc = 0x23fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
    // 0x23fe4c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23FE4Cu;
    {
        const bool branch_taken_0x23fe4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE4Cu;
            // 0x23fe50: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe4c) {
            ctx->pc = 0x23FE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fe10;
        }
    }
    ctx->pc = 0x23FE54u;
    // 0x23fe54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23FE54u;
    {
        const bool branch_taken_0x23fe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe54) {
            ctx->pc = 0x23FEACu;
            goto label_23feac;
        }
    }
    ctx->pc = 0x23FE5Cu;
label_23fe5c:
    // 0x23fe5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fe60: 0x16230012  bne         $s1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x23FE60u;
    {
        const bool branch_taken_0x23fe60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x23FE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE60u;
            // 0x23fe64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe60) {
            ctx->pc = 0x23FEACu;
            goto label_23feac;
        }
    }
    ctx->pc = 0x23FE68u;
    // 0x23fe68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23fe68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fe6c:
    // 0x23fe6c: 0x2481821  addu        $v1, $s2, $t0
    ctx->pc = 0x23fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x23fe70: 0x24670130  addiu       $a3, $v1, 0x130
    ctx->pc = 0x23fe70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x23fe74: 0x90630130  lbu         $v1, 0x130($v1)
    ctx->pc = 0x23fe74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x23fe78: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FE78u;
    {
        const bool branch_taken_0x23fe78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE78u;
            // 0x23fe7c: 0x2462021  addu        $a0, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe78) {
            ctx->pc = 0x23FE90u;
            goto label_23fe90;
        }
    }
    ctx->pc = 0x23FE80u;
    // 0x23fe80: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x23fe80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x23fe84: 0x84840120  lh          $a0, 0x120($a0)
    ctx->pc = 0x23fe84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x23fe88: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FE88u;
    {
        const bool branch_taken_0x23fe88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23fe88) {
            ctx->pc = 0x23FE98u;
            goto label_23fe98;
        }
    }
    ctx->pc = 0x23FE90u;
label_23fe90:
    // 0x23fe90: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23fe90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fe94: 0xa0f00000  sb          $s0, 0x0($a3)
    ctx->pc = 0x23fe94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 16));
label_23fe98:
    // 0x23fe98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23fe98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x23fe9c: 0x29030005  slti        $v1, $t0, 0x5
    ctx->pc = 0x23fe9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23fea0: 0x24a5006c  addiu       $a1, $a1, 0x6C
    ctx->pc = 0x23fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
    // 0x23fea4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x23FEA4u;
    {
        const bool branch_taken_0x23fea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEA4u;
            // 0x23fea8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fea4) {
            ctx->pc = 0x23FE6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23fe6c;
        }
    }
    ctx->pc = 0x23FEACu;
label_23feac:
    // 0x23feac: 0x0  nop
    ctx->pc = 0x23feacu;
    // NOP
    // 0x23feb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23feb4: 0x14430038  bne         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x23FEB4u;
    {
        const bool branch_taken_0x23feb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23FEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEB4u;
            // 0x23feb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23feb4) {
            ctx->pc = 0x23FF98u;
            goto label_23ff98;
        }
    }
    ctx->pc = 0x23FEBCu;
    // 0x23febc: 0x92420130  lbu         $v0, 0x130($s2)
    ctx->pc = 0x23febcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x23fec0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x23FEC0u;
    {
        const bool branch_taken_0x23fec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fec0) {
            ctx->pc = 0x23FF94u;
            goto label_23ff94;
        }
    }
    ctx->pc = 0x23FEC8u;
    // 0x23fec8: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x23FEC8u;
    SET_GPR_U32(ctx, 31, 0x23FED0u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FED0u; }
        if (ctx->pc != 0x23FED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FED0u; }
        if (ctx->pc != 0x23FED0u) { return; }
    }
    ctx->pc = 0x23FED0u;
label_23fed0:
    // 0x23fed0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x23FED0u;
    {
        const bool branch_taken_0x23fed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FED0u;
            // 0x23fed4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fed0) {
            ctx->pc = 0x23FF94u;
            goto label_23ff94;
        }
    }
    ctx->pc = 0x23FED8u;
    // 0x23fed8: 0xc067f40  jal         func_19FD00
    ctx->pc = 0x23FED8u;
    SET_GPR_U32(ctx, 31, 0x23FEE0u);
    ctx->pc = 0x19FD00u;
    if (runtime->hasFunction(0x19FD00u)) {
        auto targetFn = runtime->lookupFunction(0x19FD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEE0u; }
        if (ctx->pc != 0x23FEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearMagicSwordPow__16CBattleCharaInfoFv_0x19fd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEE0u; }
        if (ctx->pc != 0x23FEE0u) { return; }
    }
    ctx->pc = 0x23FEE0u;
label_23fee0:
    // 0x23fee0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x23FEE0u;
    {
        const bool branch_taken_0x23fee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fee0) {
            ctx->pc = 0x23FF94u;
            goto label_23ff94;
        }
    }
    ctx->pc = 0x23FEE8u;
label_23fee8:
    // 0x23fee8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23feec: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x23FEECu;
    {
        const bool branch_taken_0x23feec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23FEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FEECu;
            // 0x23fef0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23feec) {
            ctx->pc = 0x23FF94u;
            goto label_23ff94;
        }
    }
    ctx->pc = 0x23FEF4u;
    // 0x23fef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23fef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fef8: 0x8c22d8c8  lw          $v0, -0x2738($at)
    ctx->pc = 0x23fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23fefc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23fefcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff00: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x23ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_23ff04:
    // 0x23ff04: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x23ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x23ff08: 0x24470130  addiu       $a3, $v0, 0x130
    ctx->pc = 0x23ff08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x23ff0c: 0x90420130  lbu         $v0, 0x130($v0)
    ctx->pc = 0x23ff0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23ff10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FF10u;
    {
        const bool branch_taken_0x23ff10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF10u;
            // 0x23ff14: 0x2461821  addu        $v1, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff10) {
            ctx->pc = 0x23FF28u;
            goto label_23ff28;
        }
    }
    ctx->pc = 0x23FF18u;
    // 0x23ff18: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23ff1c: 0x84630120  lh          $v1, 0x120($v1)
    ctx->pc = 0x23ff1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x23ff20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FF20u;
    {
        const bool branch_taken_0x23ff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ff20) {
            ctx->pc = 0x23FF30u;
            goto label_23ff30;
        }
    }
    ctx->pc = 0x23FF28u;
label_23ff28:
    // 0x23ff28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23ff28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ff2c: 0xa0f00000  sb          $s0, 0x0($a3)
    ctx->pc = 0x23ff2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 16));
label_23ff30:
    // 0x23ff30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23ff34: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x23ff34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23ff38: 0x2484006c  addiu       $a0, $a0, 0x6C
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
    // 0x23ff3c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x23FF3Cu;
    {
        const bool branch_taken_0x23ff3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF3Cu;
            // 0x23ff40: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff3c) {
            ctx->pc = 0x23FF04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ff04;
        }
    }
    ctx->pc = 0x23FF44u;
    // 0x23ff44: 0x92420134  lbu         $v0, 0x134($s2)
    ctx->pc = 0x23ff44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x23ff48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FF48u;
    {
        const bool branch_taken_0x23ff48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF48u;
            // 0x23ff4c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff48) {
            ctx->pc = 0x23FF64u;
            goto label_23ff64;
        }
    }
    ctx->pc = 0x23FF50u;
    // 0x23ff50: 0x86420128  lh          $v0, 0x128($s2)
    ctx->pc = 0x23ff50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x23ff54: 0x8c23d8c0  lw          $v1, -0x2740($at)
    ctx->pc = 0x23ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x23ff58: 0x84630322  lh          $v1, 0x322($v1)
    ctx->pc = 0x23ff58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 802)));
    // 0x23ff5c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FF5Cu;
    {
        const bool branch_taken_0x23ff5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23ff5c) {
            ctx->pc = 0x23FF6Cu;
            goto label_23ff6c;
        }
    }
    ctx->pc = 0x23FF64u;
label_23ff64:
    // 0x23ff64: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23ff64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ff68: 0xa2500134  sb          $s0, 0x134($s2)
    ctx->pc = 0x23ff68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 308), (uint8_t)GPR_U32(ctx, 16));
label_23ff6c:
    // 0x23ff6c: 0x92420135  lbu         $v0, 0x135($s2)
    ctx->pc = 0x23ff6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 309)));
    // 0x23ff70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FF70u;
    {
        const bool branch_taken_0x23ff70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FF70u;
            // 0x23ff74: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff70) {
            ctx->pc = 0x23FF8Cu;
            goto label_23ff8c;
        }
    }
    ctx->pc = 0x23FF78u;
    // 0x23ff78: 0x8642012a  lh          $v0, 0x12A($s2)
    ctx->pc = 0x23ff78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 298)));
    // 0x23ff7c: 0x8c23d8c0  lw          $v1, -0x2740($at)
    ctx->pc = 0x23ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x23ff80: 0x8463024a  lh          $v1, 0x24A($v1)
    ctx->pc = 0x23ff80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 586)));
    // 0x23ff84: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FF84u;
    {
        const bool branch_taken_0x23ff84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23ff84) {
            ctx->pc = 0x23FF94u;
            goto label_23ff94;
        }
    }
    ctx->pc = 0x23FF8Cu;
label_23ff8c:
    // 0x23ff8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23ff8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ff90: 0xa2500135  sb          $s0, 0x135($s2)
    ctx->pc = 0x23ff90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 309), (uint8_t)GPR_U32(ctx, 16));
label_23ff94:
    // 0x23ff94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ff94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ff98:
    // 0x23ff98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23ff98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ff9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23ff9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ffa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ffa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ffa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ffa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x23FFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFA8u;
            // 0x23ffac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23FFB0u;
}
