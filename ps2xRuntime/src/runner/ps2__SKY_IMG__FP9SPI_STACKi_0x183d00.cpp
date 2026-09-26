#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SKY_IMG__FP9SPI_STACKi
// Address: 0x183d00 - 0x183d6c
void ps2__SKY_IMG__FP9SPI_STACKi_0x183d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SKY_IMG__FP9SPI_STACKi_0x183d00");
#endif

    switch (ctx->pc) {
        case 0x183d18u: goto label_183d18;
        case 0x183d24u: goto label_183d24;
        case 0x183d3cu: goto label_183d3c;
        case 0x183d54u: goto label_183d54;
        default: break;
    }

    ctx->pc = 0x183d00u;

    // 0x183d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x183d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x183d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183d0c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x183d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x183d10: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x183D10u;
    SET_GPR_U32(ctx, 31, 0x183D18u);
    ctx->pc = 0x183D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D10u;
            // 0x183d14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D18u; }
        if (ctx->pc != 0x183D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D18u; }
        if (ctx->pc != 0x183D18u) { return; }
    }
    ctx->pc = 0x183D18u;
label_183d18:
    // 0x183d18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d1c: 0xc060f38  jal         func_183CE0
    ctx->pc = 0x183D1Cu;
    SET_GPR_U32(ctx, 31, 0x183D24u);
    ctx->pc = 0x183D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D1Cu;
            // 0x183d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CE0u;
    if (runtime->hasFunction(0x183CE0u)) {
        auto targetFn = runtime->lookupFunction(0x183CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D24u; }
        if (ctx->pc != 0x183D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSkyID__Fi_0x183ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D24u; }
        if (ctx->pc != 0x183D24u) { return; }
    }
    ctx->pc = 0x183D24u;
label_183d24:
    // 0x183d24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183D24u;
    {
        const bool branch_taken_0x183d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D24u;
            // 0x183d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d24) {
            ctx->pc = 0x183D34u;
            goto label_183d34;
        }
    }
    ctx->pc = 0x183D2Cu;
    // 0x183d2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x183D2Cu;
    {
        const bool branch_taken_0x183d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D2Cu;
            // 0x183d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d2c) {
            ctx->pc = 0x183D58u;
            goto label_183d58;
        }
    }
    ctx->pc = 0x183D34u;
label_183d34:
    // 0x183d34: 0xc05191c  jal         func_146470
    ctx->pc = 0x183D34u;
    SET_GPR_U32(ctx, 31, 0x183D3Cu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D3Cu; }
        if (ctx->pc != 0x183D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D3Cu; }
        if (ctx->pc != 0x183D3Cu) { return; }
    }
    ctx->pc = 0x183D3Cu;
label_183d3c:
    // 0x183d3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x183D3Cu;
    {
        const bool branch_taken_0x183d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D3Cu;
            // 0x183d40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d3c) {
            ctx->pc = 0x183D54u;
            goto label_183d54;
        }
    }
    ctx->pc = 0x183D44u;
    // 0x183d44: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x183d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x183d48: 0x8f828a64  lw          $v0, -0x759C($gp)
    ctx->pc = 0x183d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x183d4c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x183D4Cu;
    SET_GPR_U32(ctx, 31, 0x183D54u);
    ctx->pc = 0x183D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D4Cu;
            // 0x183d50: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D54u; }
        if (ctx->pc != 0x183D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D54u; }
        if (ctx->pc != 0x183D54u) { return; }
    }
    ctx->pc = 0x183D54u;
label_183d54:
    // 0x183d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183d58:
    // 0x183d58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183d64: 0x3e00008  jr          $ra
    ctx->pc = 0x183D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D64u;
            // 0x183d68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183D6Cu;
}
