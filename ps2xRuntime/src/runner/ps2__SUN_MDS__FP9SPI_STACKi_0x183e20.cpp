#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SUN_MDS__FP9SPI_STACKi
// Address: 0x183e20 - 0x183e90
void ps2__SUN_MDS__FP9SPI_STACKi_0x183e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SUN_MDS__FP9SPI_STACKi_0x183e20");
#endif

    switch (ctx->pc) {
        case 0x183e38u: goto label_183e38;
        case 0x183e44u: goto label_183e44;
        case 0x183e5cu: goto label_183e5c;
        case 0x183e78u: goto label_183e78;
        default: break;
    }

    ctx->pc = 0x183e20u;

    // 0x183e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x183e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x183e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183e2c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x183e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x183e30: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x183E30u;
    SET_GPR_U32(ctx, 31, 0x183E38u);
    ctx->pc = 0x183E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183E30u;
            // 0x183e34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E38u; }
        if (ctx->pc != 0x183E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E38u; }
        if (ctx->pc != 0x183E38u) { return; }
    }
    ctx->pc = 0x183E38u;
label_183e38:
    // 0x183e38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e3c: 0xc060f38  jal         func_183CE0
    ctx->pc = 0x183E3Cu;
    SET_GPR_U32(ctx, 31, 0x183E44u);
    ctx->pc = 0x183E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183E3Cu;
            // 0x183e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CE0u;
    if (runtime->hasFunction(0x183CE0u)) {
        auto targetFn = runtime->lookupFunction(0x183CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E44u; }
        if (ctx->pc != 0x183E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSkyID__Fi_0x183ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E44u; }
        if (ctx->pc != 0x183E44u) { return; }
    }
    ctx->pc = 0x183E44u;
label_183e44:
    // 0x183e44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183E44u;
    {
        const bool branch_taken_0x183e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E44u;
            // 0x183e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e44) {
            ctx->pc = 0x183E54u;
            goto label_183e54;
        }
    }
    ctx->pc = 0x183E4Cu;
    // 0x183e4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x183E4Cu;
    {
        const bool branch_taken_0x183e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E4Cu;
            // 0x183e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e4c) {
            ctx->pc = 0x183E7Cu;
            goto label_183e7c;
        }
    }
    ctx->pc = 0x183E54u;
label_183e54:
    // 0x183e54: 0xc05191c  jal         func_146470
    ctx->pc = 0x183E54u;
    SET_GPR_U32(ctx, 31, 0x183E5Cu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E5Cu; }
        if (ctx->pc != 0x183E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E5Cu; }
        if (ctx->pc != 0x183E5Cu) { return; }
    }
    ctx->pc = 0x183E5Cu;
label_183e5c:
    // 0x183e5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x183E5Cu;
    {
        const bool branch_taken_0x183e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E5Cu;
            // 0x183e60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e5c) {
            ctx->pc = 0x183E78u;
            goto label_183e78;
        }
    }
    ctx->pc = 0x183E64u;
    // 0x183e64: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x183e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x183e68: 0x8f828a64  lw          $v0, -0x759C($gp)
    ctx->pc = 0x183e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x183e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183e70: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x183E70u;
    SET_GPR_U32(ctx, 31, 0x183E78u);
    ctx->pc = 0x183E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183E70u;
            // 0x183e74: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E78u; }
        if (ctx->pc != 0x183E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E78u; }
        if (ctx->pc != 0x183E78u) { return; }
    }
    ctx->pc = 0x183E78u;
label_183e78:
    // 0x183e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183e7c:
    // 0x183e7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183e80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183e88: 0x3e00008  jr          $ra
    ctx->pc = 0x183E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E88u;
            // 0x183e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183E90u;
}
