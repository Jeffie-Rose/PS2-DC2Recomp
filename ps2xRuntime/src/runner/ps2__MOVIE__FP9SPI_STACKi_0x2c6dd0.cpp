#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MOVIE__FP9SPI_STACKi
// Address: 0x2c6dd0 - 0x2c6ea8
void ps2__MOVIE__FP9SPI_STACKi_0x2c6dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MOVIE__FP9SPI_STACKi_0x2c6dd0");
#endif

    switch (ctx->pc) {
        case 0x2c6e20u: goto label_2c6e20;
        case 0x2c6e30u: goto label_2c6e30;
        case 0x2c6e48u: goto label_2c6e48;
        case 0x2c6e60u: goto label_2c6e60;
        case 0x2c6e70u: goto label_2c6e70;
        default: break;
    }

    ctx->pc = 0x2c6dd0u;

    // 0x2c6dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c6dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c6dd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c6dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c6dd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c6dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c6ddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c6ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c6de0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c6de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c6de4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c6de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6dec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c6decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6df0: 0x8f829d74  lw          $v0, -0x628C($gp)
    ctx->pc = 0x2c6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942068)));
    // 0x2c6df4: 0x8f859d70  lw          $a1, -0x6290($gp)
    ctx->pc = 0x2c6df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x2c6df8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2c6df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c6dfc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c6dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c6e00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c6e04: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2c6e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6e08: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6E08u;
    {
        const bool branch_taken_0x2c6e08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E08u;
            // 0x2c6e0c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e08) {
            ctx->pc = 0x2C6E18u;
            goto label_2c6e18;
        }
    }
    ctx->pc = 0x2C6E10u;
    // 0x2c6e10: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C6E10u;
    {
        const bool branch_taken_0x2c6e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E10u;
            // 0x2c6e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e10) {
            ctx->pc = 0x2C6E88u;
            goto label_2c6e88;
        }
    }
    ctx->pc = 0x2C6E18u;
label_2c6e18:
    // 0x2c6e18: 0xc05191c  jal         func_146470
    ctx->pc = 0x2C6E18u;
    SET_GPR_U32(ctx, 31, 0x2C6E20u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E20u; }
        if (ctx->pc != 0x2C6E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E20u; }
        if (ctx->pc != 0x2C6E20u) { return; }
    }
    ctx->pc = 0x2C6E20u;
label_2c6e20:
    // 0x2c6e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c6e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e28: 0xc05191c  jal         func_146470
    ctx->pc = 0x2C6E28u;
    SET_GPR_U32(ctx, 31, 0x2C6E30u);
    ctx->pc = 0x2C6E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E28u;
            // 0x2c6e2c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E30u; }
        if (ctx->pc != 0x2C6E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E30u; }
        if (ctx->pc != 0x2C6E30u) { return; }
    }
    ctx->pc = 0x2C6E30u;
label_2c6e30:
    // 0x2c6e30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c6e30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e34: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2c6e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c6e38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6E38u;
    {
        const bool branch_taken_0x2c6e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E38u;
            // 0x2c6e3c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e38) {
            ctx->pc = 0x2C6E4Cu;
            goto label_2c6e4c;
        }
    }
    ctx->pc = 0x2C6E40u;
    // 0x2c6e40: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2C6E40u;
    SET_GPR_U32(ctx, 31, 0x2C6E48u);
    ctx->pc = 0x2C6E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E40u;
            // 0x2c6e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E48u; }
        if (ctx->pc != 0x2C6E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E48u; }
        if (ctx->pc != 0x2C6E48u) { return; }
    }
    ctx->pc = 0x2C6E48u;
label_2c6e48:
    // 0x2c6e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e4c:
    // 0x2c6e4c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2C6E4Cu;
    {
        const bool branch_taken_0x2c6e4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e4c) {
            ctx->pc = 0x2C6E78u;
            goto label_2c6e78;
        }
    }
    ctx->pc = 0x2C6E54u;
    // 0x2c6e54: 0x8f859d80  lw          $a1, -0x6280($gp)
    ctx->pc = 0x2c6e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942080)));
    // 0x2c6e58: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2C6E58u;
    SET_GPR_U32(ctx, 31, 0x2C6E60u);
    ctx->pc = 0x2C6E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E58u;
            // 0x2c6e5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E60u; }
        if (ctx->pc != 0x2C6E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E60u; }
        if (ctx->pc != 0x2C6E60u) { return; }
    }
    ctx->pc = 0x2C6E60u;
label_2c6e60:
    // 0x2c6e60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2c6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2c6e64: 0x8f859d80  lw          $a1, -0x6280($gp)
    ctx->pc = 0x2c6e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942080)));
    // 0x2c6e68: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2C6E68u;
    SET_GPR_U32(ctx, 31, 0x2C6E70u);
    ctx->pc = 0x2C6E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E68u;
            // 0x2c6e6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E70u; }
        if (ctx->pc != 0x2C6E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E70u; }
        if (ctx->pc != 0x2C6E70u) { return; }
    }
    ctx->pc = 0x2C6E70u;
label_2c6e70:
    // 0x2c6e70: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2c6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2c6e74: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x2c6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_2c6e78:
    // 0x2c6e78: 0x8f839d70  lw          $v1, -0x6290($gp)
    ctx->pc = 0x2c6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x2c6e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6e80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c6e84: 0xaf839d70  sw          $v1, -0x6290($gp)
    ctx->pc = 0x2c6e84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942064), GPR_U32(ctx, 3));
label_2c6e88:
    // 0x2c6e88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c6e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6e8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c6e8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6e90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c6e90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6e94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c6e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6EA0u;
            // 0x2c6ea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6EA8u;
}
