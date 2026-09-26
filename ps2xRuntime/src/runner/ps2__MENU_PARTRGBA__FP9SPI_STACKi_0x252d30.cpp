#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_PARTRGBA__FP9SPI_STACKi
// Address: 0x252d30 - 0x252e0c
void ps2__MENU_PARTRGBA__FP9SPI_STACKi_0x252d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_PARTRGBA__FP9SPI_STACKi_0x252d30");
#endif

    switch (ctx->pc) {
        case 0x252d6cu: goto label_252d6c;
        case 0x252d94u: goto label_252d94;
        case 0x252da4u: goto label_252da4;
        case 0x252db0u: goto label_252db0;
        case 0x252dccu: goto label_252dcc;
        case 0x252dd4u: goto label_252dd4;
        default: break;
    }

    ctx->pc = 0x252d30u;

    // 0x252d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x252d34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x252d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x252d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x252d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252d40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252d44: 0x8f9097c0  lw          $s0, -0x6840($gp)
    ctx->pc = 0x252d44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252d48: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252D48u;
    {
        const bool branch_taken_0x252d48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x252D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D48u;
            // 0x252d4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d48) {
            ctx->pc = 0x252D58u;
            goto label_252d58;
        }
    }
    ctx->pc = 0x252D50u;
    // 0x252d50: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x252D50u;
    {
        const bool branch_taken_0x252d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D50u;
            // 0x252d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d50) {
            ctx->pc = 0x252DF4u;
            goto label_252df4;
        }
    }
    ctx->pc = 0x252D58u;
label_252d58:
    // 0x252d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d5c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x252D5Cu;
    {
        const bool branch_taken_0x252d5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x252D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D5Cu;
            // 0x252d60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d5c) {
            ctx->pc = 0x252D84u;
            goto label_252d84;
        }
    }
    ctx->pc = 0x252D64u;
    // 0x252d64: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252D64u;
    SET_GPR_U32(ctx, 31, 0x252D6Cu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D6Cu; }
        if (ctx->pc != 0x252D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D6Cu; }
        if (ctx->pc != 0x252D6Cu) { return; }
    }
    ctx->pc = 0x252D6Cu;
label_252d6c:
    // 0x252d6c: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x252d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x252d70: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x252d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x252d74: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x252d74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x252d78: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x252d78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x252d7c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x252D7Cu;
    {
        const bool branch_taken_0x252d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D7Cu;
            // 0x252d80: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d7c) {
            ctx->pc = 0x252DECu;
            goto label_252dec;
        }
    }
    ctx->pc = 0x252D84u;
label_252d84:
    // 0x252d84: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x252D84u;
    {
        const bool branch_taken_0x252d84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x252D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D84u;
            // 0x252d88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d84) {
            ctx->pc = 0x252DC0u;
            goto label_252dc0;
        }
    }
    ctx->pc = 0x252D8Cu;
    // 0x252d8c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252D8Cu;
    SET_GPR_U32(ctx, 31, 0x252D94u);
    ctx->pc = 0x252D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252D8Cu;
            // 0x252d90: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D94u; }
        if (ctx->pc != 0x252D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D94u; }
        if (ctx->pc != 0x252D94u) { return; }
    }
    ctx->pc = 0x252D94u;
label_252d94:
    // 0x252d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d98: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x252d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x252d9c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252D9Cu;
    SET_GPR_U32(ctx, 31, 0x252DA4u);
    ctx->pc = 0x252DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252D9Cu;
            // 0x252da0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252DA4u; }
        if (ctx->pc != 0x252DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252DA4u; }
        if (ctx->pc != 0x252DA4u) { return; }
    }
    ctx->pc = 0x252DA4u;
label_252da4:
    // 0x252da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252da8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252DA8u;
    SET_GPR_U32(ctx, 31, 0x252DB0u);
    ctx->pc = 0x252DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252DA8u;
            // 0x252dac: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252DB0u; }
        if (ctx->pc != 0x252DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252DB0u; }
        if (ctx->pc != 0x252DB0u) { return; }
    }
    ctx->pc = 0x252DB0u;
label_252db0:
    // 0x252db0: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x252db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x252db4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x252db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x252db8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x252DB8u;
    {
        const bool branch_taken_0x252db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DB8u;
            // 0x252dbc: 0xa202000a  sb          $v0, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252db8) {
            ctx->pc = 0x252DECu;
            goto label_252dec;
        }
    }
    ctx->pc = 0x252DC0u;
label_252dc0:
    // 0x252dc0: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x252DC0u;
    {
        const bool branch_taken_0x252dc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x252DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DC0u;
            // 0x252dc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dc0) {
            ctx->pc = 0x252DECu;
            goto label_252dec;
        }
    }
    ctx->pc = 0x252DC8u;
    // 0x252dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252dcc:
    // 0x252dcc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252DCCu;
    SET_GPR_U32(ctx, 31, 0x252DD4u);
    ctx->pc = 0x252DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252DCCu;
            // 0x252dd0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252DD4u; }
        if (ctx->pc != 0x252DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252DD4u; }
        if (ctx->pc != 0x252DD4u) { return; }
    }
    ctx->pc = 0x252DD4u;
label_252dd4:
    // 0x252dd4: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x252dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x252dd8: 0xa0620007  sb          $v0, 0x7($v1)
    ctx->pc = 0x252dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x252ddc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x252ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x252de0: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x252de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x252de4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x252DE4u;
    {
        const bool branch_taken_0x252de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DE4u;
            // 0x252de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252de4) {
            ctx->pc = 0x252DCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252dcc;
        }
    }
    ctx->pc = 0x252DECu;
label_252dec:
    // 0x252dec: 0x0  nop
    ctx->pc = 0x252decu;
    // NOP
    // 0x252df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252df4:
    // 0x252df4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x252df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252df8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x252df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252e04: 0x3e00008  jr          $ra
    ctx->pc = 0x252E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E04u;
            // 0x252e08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252E0Cu;
}
