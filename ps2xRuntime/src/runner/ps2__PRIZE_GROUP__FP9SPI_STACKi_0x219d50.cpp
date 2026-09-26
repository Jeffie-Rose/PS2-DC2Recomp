#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PRIZE_GROUP__FP9SPI_STACKi
// Address: 0x219d50 - 0x219e3c
void ps2__PRIZE_GROUP__FP9SPI_STACKi_0x219d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PRIZE_GROUP__FP9SPI_STACKi_0x219d50");
#endif

    switch (ctx->pc) {
        case 0x219d94u: goto label_219d94;
        case 0x219da8u: goto label_219da8;
        case 0x219db4u: goto label_219db4;
        case 0x219dfcu: goto label_219dfc;
        case 0x219e08u: goto label_219e08;
        default: break;
    }

    ctx->pc = 0x219d50u;

    // 0x219d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x219d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x219d54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x219d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x219d58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x219d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x219d5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x219d60: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x219d60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x219d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219d6c: 0x87869278  lh          $a2, -0x6D88($gp)
    ctx->pc = 0x219d6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939256)));
    // 0x219d70: 0x8f839274  lw          $v1, -0x6D8C($gp)
    ctx->pc = 0x219d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939252)));
    // 0x219d74: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x219d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x219d78: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x219d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x219d7c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x219d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x219d80: 0xa7829278  sh          $v0, -0x6D88($gp)
    ctx->pc = 0x219d80u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939256), (uint16_t)GPR_U32(ctx, 2));
    // 0x219d84: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x219d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x219d88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219d8c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219D8Cu;
    SET_GPR_U32(ctx, 31, 0x219D94u);
    ctx->pc = 0x219D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219D8Cu;
            // 0x219d90: 0xaf829280  sw          $v0, -0x6D80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D94u; }
        if (ctx->pc != 0x219D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D94u; }
        if (ctx->pc != 0x219D94u) { return; }
    }
    ctx->pc = 0x219D94u;
label_219d94:
    // 0x219d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d9c: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x219d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x219da0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x219da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219da4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x219da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_219da8:
    // 0x219da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x219da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219dac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219DACu;
    SET_GPR_U32(ctx, 31, 0x219DB4u);
    ctx->pc = 0x219DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219DACu;
            // 0x219db0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219DB4u; }
        if (ctx->pc != 0x219DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219DB4u; }
        if (ctx->pc != 0x219DB4u) { return; }
    }
    ctx->pc = 0x219DB4u;
label_219db4:
    // 0x219db4: 0x8f849280  lw          $a0, -0x6D80($gp)
    ctx->pc = 0x219db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x219db8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x219db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219dbc: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x219dbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x219dc0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x219dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x219dc4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x219dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x219dc8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x219DC8u;
    {
        const bool branch_taken_0x219dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219DC8u;
            // 0x219dcc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dc8) {
            ctx->pc = 0x219DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219da8;
        }
    }
    ctx->pc = 0x219DD0u;
    // 0x219dd0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x219dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x219dd4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x219dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x219dd8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x219dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x219ddc: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x219ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x219de0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219DE0u;
    {
        const bool branch_taken_0x219de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219DE0u;
            // 0x219de4: 0x101102  srl         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219de0) {
            ctx->pc = 0x219DF0u;
            goto label_219df0;
        }
    }
    ctx->pc = 0x219DE8u;
    // 0x219de8: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x219de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x219dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_219df0:
    // 0x219df0: 0x8f849270  lw          $a0, -0x6D90($gp)
    ctx->pc = 0x219df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939248)));
    // 0x219df4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x219DF4u;
    SET_GPR_U32(ctx, 31, 0x219DFCu);
    ctx->pc = 0x219DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219DF4u;
            // 0x219df8: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219DFCu; }
        if (ctx->pc != 0x219DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219DFCu; }
        if (ctx->pc != 0x219DFCu) { return; }
    }
    ctx->pc = 0x219DFCu;
label_219dfc:
    // 0x219dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e00: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x219E00u;
    SET_GPR_U32(ctx, 31, 0x219E08u);
    ctx->pc = 0x219E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219E00u;
            // 0x219e04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E08u; }
        if (ctx->pc != 0x219E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E08u; }
        if (ctx->pc != 0x219E08u) { return; }
    }
    ctx->pc = 0x219E08u;
label_219e08:
    // 0x219e08: 0x8f839280  lw          $v1, -0x6D80($gp)
    ctx->pc = 0x219e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x219e0c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x219e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x219e10: 0x8f839280  lw          $v1, -0x6D80($gp)
    ctx->pc = 0x219e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x219e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219e18: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x219e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x219e1c: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x219e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
    // 0x219e20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x219e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219e24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x219e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x219e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219e34: 0x3e00008  jr          $ra
    ctx->pc = 0x219E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219E34u;
            // 0x219e38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219E3Cu;
}
