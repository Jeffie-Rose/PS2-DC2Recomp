#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCOOP_STR__FP9SPI_STACKi
// Address: 0x1ff3d0 - 0x1ff42c
void ps2__SCOOP_STR__FP9SPI_STACKi_0x1ff3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCOOP_STR__FP9SPI_STACKi_0x1ff3d0");
#endif

    switch (ctx->pc) {
        case 0x1ff3e8u: goto label_1ff3e8;
        case 0x1ff3f0u: goto label_1ff3f0;
        case 0x1ff404u: goto label_1ff404;
        case 0x1ff410u: goto label_1ff410;
        default: break;
    }

    ctx->pc = 0x1ff3d0u;

    // 0x1ff3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff3d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ff3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ff3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff3dc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1ff3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1ff3e0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1FF3E0u;
    SET_GPR_U32(ctx, 31, 0x1FF3E8u);
    ctx->pc = 0x1FF3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF3E0u;
            // 0x1ff3e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3E8u; }
        if (ctx->pc != 0x1FF3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3E8u; }
        if (ctx->pc != 0x1FF3E8u) { return; }
    }
    ctx->pc = 0x1FF3E8u;
label_1ff3e8:
    // 0x1ff3e8: 0xc07fc9c  jal         func_1FF270
    ctx->pc = 0x1FF3E8u;
    SET_GPR_U32(ctx, 31, 0x1FF3F0u);
    ctx->pc = 0x1FF3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF3E8u;
            // 0x1ff3ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF270u;
    if (runtime->hasFunction(0x1FF270u)) {
        auto targetFn = runtime->lookupFunction(0x1FF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3F0u; }
        if (ctx->pc != 0x1FF3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopDataTable__Fi_0x1ff270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3F0u; }
        if (ctx->pc != 0x1FF3F0u) { return; }
    }
    ctx->pc = 0x1FF3F0u;
label_1ff3f0:
    // 0x1ff3f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3f4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF3F4u;
    {
        const bool branch_taken_0x1ff3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF3F4u;
            // 0x1ff3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3f4) {
            ctx->pc = 0x1FF414u;
            goto label_1ff414;
        }
    }
    ctx->pc = 0x1FF3FCu;
    // 0x1ff3fc: 0xc05191c  jal         func_146470
    ctx->pc = 0x1FF3FCu;
    SET_GPR_U32(ctx, 31, 0x1FF404u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF404u; }
        if (ctx->pc != 0x1FF404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF404u; }
        if (ctx->pc != 0x1FF404u) { return; }
    }
    ctx->pc = 0x1FF404u;
label_1ff404:
    // 0x1ff404: 0x8f8590e8  lw          $a1, -0x6F18($gp)
    ctx->pc = 0x1ff404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x1ff408: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x1FF408u;
    SET_GPR_U32(ctx, 31, 0x1FF410u);
    ctx->pc = 0x1FF40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF408u;
            // 0x1ff40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF410u; }
        if (ctx->pc != 0x1FF410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF410u; }
        if (ctx->pc != 0x1FF410u) { return; }
    }
    ctx->pc = 0x1FF410u;
label_1ff410:
    // 0x1ff410: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ff410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1ff414:
    // 0x1ff414: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ff414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff41c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff424: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF424u;
            // 0x1ff428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF42Cu;
}
