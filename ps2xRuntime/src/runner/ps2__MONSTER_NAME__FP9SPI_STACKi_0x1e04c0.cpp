#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MONSTER_NAME__FP9SPI_STACKi
// Address: 0x1e04c0 - 0x1e0540
void ps2__MONSTER_NAME__FP9SPI_STACKi_0x1e04c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MONSTER_NAME__FP9SPI_STACKi_0x1e04c0");
#endif

    switch (ctx->pc) {
        case 0x1e04d8u: goto label_1e04d8;
        case 0x1e04e4u: goto label_1e04e4;
        case 0x1e04f0u: goto label_1e04f0;
        case 0x1e050cu: goto label_1e050c;
        case 0x1e0528u: goto label_1e0528;
        default: break;
    }

    ctx->pc = 0x1e04c0u;

    // 0x1e04c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e04c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e04c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e04c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e04c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e04c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e04cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e04ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e04d0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1E04D0u;
    SET_GPR_U32(ctx, 31, 0x1E04D8u);
    ctx->pc = 0x1E04D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04D0u;
            // 0x1e04d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04D8u; }
        if (ctx->pc != 0x1E04D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04D8u; }
        if (ctx->pc != 0x1E04D8u) { return; }
    }
    ctx->pc = 0x1E04D8u;
label_1e04d8:
    // 0x1e04d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e04d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04dc: 0xc05191c  jal         func_146470
    ctx->pc = 0x1E04DCu;
    SET_GPR_U32(ctx, 31, 0x1E04E4u);
    ctx->pc = 0x1E04E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04DCu;
            // 0x1e04e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04E4u; }
        if (ctx->pc != 0x1E04E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04E4u; }
        if (ctx->pc != 0x1E04E4u) { return; }
    }
    ctx->pc = 0x1E04E4u;
label_1e04e4:
    // 0x1e04e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e04e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04e8: 0xc076b80  jal         func_1DAE00
    ctx->pc = 0x1E04E8u;
    SET_GPR_U32(ctx, 31, 0x1E04F0u);
    ctx->pc = 0x1E04ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04E8u;
            // 0x1e04ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAE00u;
    if (runtime->hasFunction(0x1DAE00u)) {
        auto targetFn = runtime->lookupFunction(0x1DAE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04F0u; }
        if (ctx->pc != 0x1E04F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterTable__Fi_0x1dae00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04F0u; }
        if (ctx->pc != 0x1E04F0u) { return; }
    }
    ctx->pc = 0x1E04F0u;
label_1e04f0:
    // 0x1e04f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e04f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04f4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E04F4u;
    {
        const bool branch_taken_0x1e04f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E04F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04F4u;
            // 0x1e04f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04f4) {
            ctx->pc = 0x1E0504u;
            goto label_1e0504;
        }
    }
    ctx->pc = 0x1E04FCu;
    // 0x1e04fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E04FCu;
    {
        const bool branch_taken_0x1e04fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04FCu;
            // 0x1e0500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04fc) {
            ctx->pc = 0x1E052Cu;
            goto label_1e052c;
        }
    }
    ctx->pc = 0x1E0504u;
label_1e0504:
    // 0x1e0504: 0xc04a422  jal         func_129088
    ctx->pc = 0x1E0504u;
    SET_GPR_U32(ctx, 31, 0x1E050Cu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E050Cu; }
        if (ctx->pc != 0x1E050Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E050Cu; }
        if (ctx->pc != 0x1E050Cu) { return; }
    }
    ctx->pc = 0x1E050Cu;
label_1e050c:
    // 0x1e050c: 0x2c410020  sltiu       $at, $v0, 0x20
    ctx->pc = 0x1e050cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1e0510: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0510u;
    {
        const bool branch_taken_0x1e0510 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0510u;
            // 0x1e0514: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0510) {
            ctx->pc = 0x1E0520u;
            goto label_1e0520;
        }
    }
    ctx->pc = 0x1E0518u;
    // 0x1e0518: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0518u;
    {
        const bool branch_taken_0x1e0518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E051Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0518u;
            // 0x1e051c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0518) {
            ctx->pc = 0x1E052Cu;
            goto label_1e052c;
        }
    }
    ctx->pc = 0x1E0520u;
label_1e0520:
    // 0x1e0520: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1E0520u;
    SET_GPR_U32(ctx, 31, 0x1E0528u);
    ctx->pc = 0x1E0524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0520u;
            // 0x1e0524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0528u; }
        if (ctx->pc != 0x1E0528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0528u; }
        if (ctx->pc != 0x1E0528u) { return; }
    }
    ctx->pc = 0x1E0528u;
label_1e0528:
    // 0x1e0528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e052c:
    // 0x1e052c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e052cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0538: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0538u;
            // 0x1e053c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0540u;
}
