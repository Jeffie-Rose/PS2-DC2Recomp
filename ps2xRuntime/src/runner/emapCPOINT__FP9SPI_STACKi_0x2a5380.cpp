#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapCPOINT__FP9SPI_STACKi
// Address: 0x2a5380 - 0x2a53d4
void emapCPOINT__FP9SPI_STACKi_0x2a5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapCPOINT__FP9SPI_STACKi_0x2a5380");
#endif

    switch (ctx->pc) {
        case 0x2a53a8u: goto label_2a53a8;
        case 0x2a53b8u: goto label_2a53b8;
        default: break;
    }

    ctx->pc = 0x2a5380u;

    // 0x2a5380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a538c: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5390: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5390u;
    {
        const bool branch_taken_0x2a5390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5390u;
            // 0x2a5394: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5390) {
            ctx->pc = 0x2A53A0u;
            goto label_2a53a0;
        }
    }
    ctx->pc = 0x2A5398u;
    // 0x2a5398: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A5398u;
    {
        const bool branch_taken_0x2a5398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5398u;
            // 0x2a539c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5398) {
            ctx->pc = 0x2A53C4u;
            goto label_2a53c4;
        }
    }
    ctx->pc = 0x2A53A0u;
label_2a53a0:
    // 0x2a53a0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A53A0u;
    SET_GPR_U32(ctx, 31, 0x2A53A8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A53A8u; }
        if (ctx->pc != 0x2A53A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A53A8u; }
        if (ctx->pc != 0x2A53A8u) { return; }
    }
    ctx->pc = 0x2A53A8u;
label_2a53a8:
    // 0x2a53a8: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x2a53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a53ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a53acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53b0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A53B0u;
    SET_GPR_U32(ctx, 31, 0x2A53B8u);
    ctx->pc = 0x2A53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A53B0u;
            // 0x2a53b4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A53B8u; }
        if (ctx->pc != 0x2A53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A53B8u; }
        if (ctx->pc != 0x2A53B8u) { return; }
    }
    ctx->pc = 0x2A53B8u;
label_2a53b8:
    // 0x2a53b8: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x2a53b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a53bc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2a53bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2a53c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a53c4:
    // 0x2a53c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a53c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a53c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a53c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a53cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A53CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A53D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A53CCu;
            // 0x2a53d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A53D4u;
}
