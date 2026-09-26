#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAGAURD__FP9SPI_STACKi
// Address: 0x1953d0 - 0x195468
void ps2__DATAGAURD__FP9SPI_STACKi_0x1953d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAGAURD__FP9SPI_STACKi_0x1953d0");
#endif

    switch (ctx->pc) {
        case 0x1953e8u: goto label_1953e8;
        case 0x1953f8u: goto label_1953f8;
        case 0x195414u: goto label_195414;
        case 0x195424u: goto label_195424;
        case 0x195430u: goto label_195430;
        case 0x19543cu: goto label_19543c;
        case 0x195448u: goto label_195448;
        case 0x195450u: goto label_195450;
        default: break;
    }

    ctx->pc = 0x1953d0u;

    // 0x1953d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1953d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1953d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1953d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1953d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1953d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1953dc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1953dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1953e0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1953E0u;
    SET_GPR_U32(ctx, 31, 0x1953E8u);
    ctx->pc = 0x1953E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1953E0u;
            // 0x1953e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953E8u; }
        if (ctx->pc != 0x1953E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953E8u; }
        if (ctx->pc != 0x1953E8u) { return; }
    }
    ctx->pc = 0x1953E8u;
label_1953e8:
    // 0x1953e8: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x1953e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x1953ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1953ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953f0: 0xc0656c4  jal         func_195B10
    ctx->pc = 0x1953F0u;
    SET_GPR_U32(ctx, 31, 0x1953F8u);
    ctx->pc = 0x1953F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1953F0u;
            // 0x1953f4: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B10u;
    if (runtime->hasFunction(0x195B10u)) {
        auto targetFn = runtime->lookupFunction(0x195B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953F8u; }
        if (ctx->pc != 0x1953F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGuardData__9CGameDataFi_0x195b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953F8u; }
        if (ctx->pc != 0x1953F8u) { return; }
    }
    ctx->pc = 0x1953F8u;
label_1953f8:
    // 0x1953f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1953f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953fc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1953FCu;
    {
        const bool branch_taken_0x1953fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x195400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1953FCu;
            // 0x195400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953fc) {
            ctx->pc = 0x19540Cu;
            goto label_19540c;
        }
    }
    ctx->pc = 0x195404u;
    // 0x195404: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x195404u;
    {
        const bool branch_taken_0x195404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195404u;
            // 0x195408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195404) {
            ctx->pc = 0x195454u;
            goto label_195454;
        }
    }
    ctx->pc = 0x19540Cu;
label_19540c:
    // 0x19540c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x19540Cu;
    SET_GPR_U32(ctx, 31, 0x195414u);
    ctx->pc = 0x195410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19540Cu;
            // 0x195410: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195414u; }
        if (ctx->pc != 0x195414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195414u; }
        if (ctx->pc != 0x195414u) { return; }
    }
    ctx->pc = 0x195414u;
label_195414:
    // 0x195414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195418: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x195418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19541c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x19541Cu;
    SET_GPR_U32(ctx, 31, 0x195424u);
    ctx->pc = 0x195420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19541Cu;
            // 0x195420: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195424u; }
        if (ctx->pc != 0x195424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195424u; }
        if (ctx->pc != 0x195424u) { return; }
    }
    ctx->pc = 0x195424u;
label_195424:
    // 0x195424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195428: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195428u;
    SET_GPR_U32(ctx, 31, 0x195430u);
    ctx->pc = 0x19542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195428u;
            // 0x19542c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195430u; }
        if (ctx->pc != 0x195430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195430u; }
        if (ctx->pc != 0x195430u) { return; }
    }
    ctx->pc = 0x195430u;
label_195430:
    // 0x195430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195434: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195434u;
    SET_GPR_U32(ctx, 31, 0x19543Cu);
    ctx->pc = 0x195438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195434u;
            // 0x195438: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19543Cu; }
        if (ctx->pc != 0x19543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19543Cu; }
        if (ctx->pc != 0x19543Cu) { return; }
    }
    ctx->pc = 0x19543Cu;
label_19543c:
    // 0x19543c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195440: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195440u;
    SET_GPR_U32(ctx, 31, 0x195448u);
    ctx->pc = 0x195444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195440u;
            // 0x195444: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195448u; }
        if (ctx->pc != 0x195448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195448u; }
        if (ctx->pc != 0x195448u) { return; }
    }
    ctx->pc = 0x195448u;
label_195448:
    // 0x195448: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195448u;
    SET_GPR_U32(ctx, 31, 0x195450u);
    ctx->pc = 0x19544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195448u;
            // 0x19544c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195450u; }
        if (ctx->pc != 0x195450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195450u; }
        if (ctx->pc != 0x195450u) { return; }
    }
    ctx->pc = 0x195450u;
label_195450:
    // 0x195450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195454:
    // 0x195454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19545c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19545cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195460: 0x3e00008  jr          $ra
    ctx->pc = 0x195460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195460u;
            // 0x195464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195468u;
}
