#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAWEP_BUILDUP__FP9SPI_STACKi
// Address: 0x194d10 - 0x194dc0
void ps2__DATAWEP_BUILDUP__FP9SPI_STACKi_0x194d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAWEP_BUILDUP__FP9SPI_STACKi_0x194d10");
#endif

    switch (ctx->pc) {
        case 0x194d2cu: goto label_194d2c;
        case 0x194d40u: goto label_194d40;
        case 0x194d54u: goto label_194d54;
        case 0x194d70u: goto label_194d70;
        case 0x194d84u: goto label_194d84;
        case 0x194d94u: goto label_194d94;
        default: break;
    }

    ctx->pc = 0x194d10u;

    // 0x194d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194d20: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x194d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194d24: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194D24u;
    SET_GPR_U32(ctx, 31, 0x194D2Cu);
    ctx->pc = 0x194D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194D24u;
            // 0x194d28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D2Cu; }
        if (ctx->pc != 0x194D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D2Cu; }
        if (ctx->pc != 0x194D2Cu) { return; }
    }
    ctx->pc = 0x194D2Cu;
label_194d2c:
    // 0x194d2c: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d34: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x194d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194d38: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194D38u;
    SET_GPR_U32(ctx, 31, 0x194D40u);
    ctx->pc = 0x194D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194D38u;
            // 0x194d3c: 0xa462003a  sh          $v0, 0x3A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D40u; }
        if (ctx->pc != 0x194D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D40u; }
        if (ctx->pc != 0x194D40u) { return; }
    }
    ctx->pc = 0x194D40u;
label_194d40:
    // 0x194d40: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d48: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x194d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194d4c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194D4Cu;
    SET_GPR_U32(ctx, 31, 0x194D54u);
    ctx->pc = 0x194D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194D4Cu;
            // 0x194d50: 0xa462003c  sh          $v0, 0x3C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D54u; }
        if (ctx->pc != 0x194D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D54u; }
        if (ctx->pc != 0x194D54u) { return; }
    }
    ctx->pc = 0x194D54u;
label_194d54:
    // 0x194d54: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194d58: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x194d58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x194d5c: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x194D5Cu;
    {
        const bool branch_taken_0x194d5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x194D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D5Cu;
            // 0x194d60: 0xa462003e  sh          $v0, 0x3E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d5c) {
            ctx->pc = 0x194D9Cu;
            goto label_194d9c;
        }
    }
    ctx->pc = 0x194D64u;
    // 0x194d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d68: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194D68u;
    SET_GPR_U32(ctx, 31, 0x194D70u);
    ctx->pc = 0x194D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194D68u;
            // 0x194d6c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D70u; }
        if (ctx->pc != 0x194D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D70u; }
        if (ctx->pc != 0x194D70u) { return; }
    }
    ctx->pc = 0x194D70u;
label_194d70:
    // 0x194d70: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d78: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x194d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194d7c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194D7Cu;
    SET_GPR_U32(ctx, 31, 0x194D84u);
    ctx->pc = 0x194D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194D7Cu;
            // 0x194d80: 0xa4620040  sh          $v0, 0x40($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D84u; }
        if (ctx->pc != 0x194D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D84u; }
        if (ctx->pc != 0x194D84u) { return; }
    }
    ctx->pc = 0x194D84u;
label_194d84:
    // 0x194d84: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d8c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194D8Cu;
    SET_GPR_U32(ctx, 31, 0x194D94u);
    ctx->pc = 0x194D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194D8Cu;
            // 0x194d90: 0xa4620042  sh          $v0, 0x42($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D94u; }
        if (ctx->pc != 0x194D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D94u; }
        if (ctx->pc != 0x194D94u) { return; }
    }
    ctx->pc = 0x194D94u;
label_194d94:
    // 0x194d94: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194d98: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x194d98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
label_194d9c:
    // 0x194d9c: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194da4: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x194da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x194da8: 0xaf838b64  sw          $v1, -0x749C($gp)
    ctx->pc = 0x194da8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 3));
    // 0x194dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194db8: 0x3e00008  jr          $ra
    ctx->pc = 0x194DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194DB8u;
            // 0x194dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194DC0u;
}
