#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SKIN_IMG__FP9SPI_STACKi
// Address: 0x177f20 - 0x177f7c
void ps2__SKIN_IMG__FP9SPI_STACKi_0x177f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SKIN_IMG__FP9SPI_STACKi_0x177f20");
#endif

    switch (ctx->pc) {
        case 0x177f48u: goto label_177f48;
        case 0x177f50u: goto label_177f50;
        case 0x177f60u: goto label_177f60;
        default: break;
    }

    ctx->pc = 0x177f20u;

    // 0x177f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177f2c: 0x8f8289dc  lw          $v0, -0x7624($gp)
    ctx->pc = 0x177f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x177f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177F30u;
    {
        const bool branch_taken_0x177f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177F30u;
            // 0x177f34: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f30) {
            ctx->pc = 0x177F40u;
            goto label_177f40;
        }
    }
    ctx->pc = 0x177F38u;
    // 0x177f38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x177F38u;
    {
        const bool branch_taken_0x177f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177F38u;
            // 0x177f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f38) {
            ctx->pc = 0x177F6Cu;
            goto label_177f6c;
        }
    }
    ctx->pc = 0x177F40u;
label_177f40:
    // 0x177f40: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x177F40u;
    SET_GPR_U32(ctx, 31, 0x177F48u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F48u; }
        if (ctx->pc != 0x177F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F48u; }
        if (ctx->pc != 0x177F48u) { return; }
    }
    ctx->pc = 0x177F48u;
label_177f48:
    // 0x177f48: 0xc05191c  jal         func_146470
    ctx->pc = 0x177F48u;
    SET_GPR_U32(ctx, 31, 0x177F50u);
    ctx->pc = 0x177F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F48u;
            // 0x177f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F50u; }
        if (ctx->pc != 0x177F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F50u; }
        if (ctx->pc != 0x177F50u) { return; }
    }
    ctx->pc = 0x177F50u;
label_177f50:
    // 0x177f50: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x177f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x177f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f58: 0xc052734  jal         func_149CD0
    ctx->pc = 0x177F58u;
    SET_GPR_U32(ctx, 31, 0x177F60u);
    ctx->pc = 0x177F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F58u;
            // 0x177f5c: 0x27868a0c  addiu       $a2, $gp, -0x75F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F60u; }
        if (ctx->pc != 0x177F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F60u; }
        if (ctx->pc != 0x177F60u) { return; }
    }
    ctx->pc = 0x177F60u;
label_177f60:
    // 0x177f60: 0xaf828a08  sw          $v0, -0x75F8($gp)
    ctx->pc = 0x177f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 2));
    // 0x177f64: 0x8f828a08  lw          $v0, -0x75F8($gp)
    ctx->pc = 0x177f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937096)));
    // 0x177f68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x177f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_177f6c:
    // 0x177f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f74: 0x3e00008  jr          $ra
    ctx->pc = 0x177F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177F74u;
            // 0x177f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177F7Cu;
}
