#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MES_SYS__FP9SPI_STACKi
// Address: 0x194920 - 0x19498c
void ps2__MES_SYS__FP9SPI_STACKi_0x194920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MES_SYS__FP9SPI_STACKi_0x194920");
#endif

    switch (ctx->pc) {
        case 0x194938u: goto label_194938;
        case 0x194944u: goto label_194944;
        case 0x194958u: goto label_194958;
        case 0x194970u: goto label_194970;
        default: break;
    }

    ctx->pc = 0x194920u;

    // 0x194920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19492c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194930: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194930u;
    SET_GPR_U32(ctx, 31, 0x194938u);
    ctx->pc = 0x194934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194930u;
            // 0x194934: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194938u; }
        if (ctx->pc != 0x194938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194938u; }
        if (ctx->pc != 0x194938u) { return; }
    }
    ctx->pc = 0x194938u;
label_194938:
    // 0x194938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19493c: 0xc05191c  jal         func_146470
    ctx->pc = 0x19493Cu;
    SET_GPR_U32(ctx, 31, 0x194944u);
    ctx->pc = 0x194940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19493Cu;
            // 0x194940: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194944u; }
        if (ctx->pc != 0x194944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194944u; }
        if (ctx->pc != 0x194944u) { return; }
    }
    ctx->pc = 0x194944u;
label_194944:
    // 0x194944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194948: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x194948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x19494c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19494cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194950: 0xc0655dc  jal         func_195770
    ctx->pc = 0x194950u;
    SET_GPR_U32(ctx, 31, 0x194958u);
    ctx->pc = 0x194954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194950u;
            // 0x194954: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194958u; }
        if (ctx->pc != 0x194958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194958u; }
        if (ctx->pc != 0x194958u) { return; }
    }
    ctx->pc = 0x194958u;
label_194958:
    // 0x194958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x194958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19495c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19495Cu;
    {
        const bool branch_taken_0x19495c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19495c) {
            ctx->pc = 0x194974u;
            goto label_194974;
        }
    }
    ctx->pc = 0x194964u;
    // 0x194964: 0x8f858b58  lw          $a1, -0x74A8($gp)
    ctx->pc = 0x194964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
    // 0x194968: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x194968u;
    SET_GPR_U32(ctx, 31, 0x194970u);
    ctx->pc = 0x19496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194968u;
            // 0x19496c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194970u; }
        if (ctx->pc != 0x194970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194970u; }
        if (ctx->pc != 0x194970u) { return; }
    }
    ctx->pc = 0x194970u;
label_194970:
    // 0x194970: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x194970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_194974:
    // 0x194974: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19497c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19497cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194984: 0x3e00008  jr          $ra
    ctx->pc = 0x194984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194984u;
            // 0x194988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19498Cu;
}
