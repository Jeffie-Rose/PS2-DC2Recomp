#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SKIN_MODEL__FP9SPI_STACKi
// Address: 0x177f90 - 0x178008
void ps2__SKIN_MODEL__FP9SPI_STACKi_0x177f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SKIN_MODEL__FP9SPI_STACKi_0x177f90");
#endif

    switch (ctx->pc) {
        case 0x177fb4u: goto label_177fb4;
        case 0x177fc8u: goto label_177fc8;
        case 0x177fe0u: goto label_177fe0;
        case 0x177ff4u: goto label_177ff4;
        default: break;
    }

    ctx->pc = 0x177f90u;

    // 0x177f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177f9c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177F9Cu;
    {
        const bool branch_taken_0x177f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x177FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177F9Cu;
            // 0x177fa0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f9c) {
            ctx->pc = 0x177FACu;
            goto label_177fac;
        }
    }
    ctx->pc = 0x177FA4u;
    // 0x177fa4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x177FA4u;
    {
        const bool branch_taken_0x177fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177FA4u;
            // 0x177fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fa4) {
            ctx->pc = 0x177FF8u;
            goto label_177ff8;
        }
    }
    ctx->pc = 0x177FACu;
label_177fac:
    // 0x177fac: 0xc05191c  jal         func_146470
    ctx->pc = 0x177FACu;
    SET_GPR_U32(ctx, 31, 0x177FB4u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FB4u; }
        if (ctx->pc != 0x177FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FB4u; }
        if (ctx->pc != 0x177FB4u) { return; }
    }
    ctx->pc = 0x177FB4u;
label_177fb4:
    // 0x177fb4: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x177fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x177fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fc0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x177FC0u;
    SET_GPR_U32(ctx, 31, 0x177FC8u);
    ctx->pc = 0x177FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FC0u;
            // 0x177fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FC8u; }
        if (ctx->pc != 0x177FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FC8u; }
        if (ctx->pc != 0x177FC8u) { return; }
    }
    ctx->pc = 0x177FC8u;
label_177fc8:
    // 0x177fc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x177FC8u;
    {
        const bool branch_taken_0x177fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177FC8u;
            // 0x177fcc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fc8) {
            ctx->pc = 0x177FE8u;
            goto label_177fe8;
        }
    }
    ctx->pc = 0x177FD0u;
    // 0x177fd0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x177fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x177fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fd8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x177FD8u;
    SET_GPR_U32(ctx, 31, 0x177FE0u);
    ctx->pc = 0x177FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FD8u;
            // 0x177fdc: 0x24843960  addiu       $a0, $a0, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FE0u; }
        if (ctx->pc != 0x177FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FE0u; }
        if (ctx->pc != 0x177FE0u) { return; }
    }
    ctx->pc = 0x177FE0u;
label_177fe0:
    // 0x177fe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177FE0u;
    {
        const bool branch_taken_0x177fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177FE0u;
            // 0x177fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fe0) {
            ctx->pc = 0x177FF8u;
            goto label_177ff8;
        }
    }
    ctx->pc = 0x177FE8u;
label_177fe8:
    // 0x177fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fec: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x177FECu;
    SET_GPR_U32(ctx, 31, 0x177FF4u);
    ctx->pc = 0x177FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FECu;
            // 0x177ff0: 0x24840690  addiu       $a0, $a0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FF4u; }
        if (ctx->pc != 0x177FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FF4u; }
        if (ctx->pc != 0x177FF4u) { return; }
    }
    ctx->pc = 0x177FF4u;
label_177ff4:
    // 0x177ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177ff8:
    // 0x177ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178000: 0x3e00008  jr          $ra
    ctx->pc = 0x178000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178000u;
            // 0x178004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178008u;
}
