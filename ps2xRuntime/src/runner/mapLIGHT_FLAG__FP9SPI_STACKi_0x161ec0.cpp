#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapLIGHT_FLAG__FP9SPI_STACKi
// Address: 0x161ec0 - 0x161f2c
void mapLIGHT_FLAG__FP9SPI_STACKi_0x161ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapLIGHT_FLAG__FP9SPI_STACKi_0x161ec0");
#endif

    switch (ctx->pc) {
        case 0x161eecu: goto label_161eec;
        case 0x161ef8u: goto label_161ef8;
        case 0x161f04u: goto label_161f04;
        case 0x161f10u: goto label_161f10;
        default: break;
    }

    ctx->pc = 0x161ec0u;

    // 0x161ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161ed0: 0x8f828918  lw          $v0, -0x76E8($gp)
    ctx->pc = 0x161ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x161ed4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161ED4u;
    {
        const bool branch_taken_0x161ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161ED4u;
            // 0x161ed8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ed4) {
            ctx->pc = 0x161EE4u;
            goto label_161ee4;
        }
    }
    ctx->pc = 0x161EDCu;
    // 0x161edc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x161EDCu;
    {
        const bool branch_taken_0x161edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161EDCu;
            // 0x161ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161edc) {
            ctx->pc = 0x161F18u;
            goto label_161f18;
        }
    }
    ctx->pc = 0x161EE4u;
label_161ee4:
    // 0x161ee4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x161EE4u;
    SET_GPR_U32(ctx, 31, 0x161EECu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EECu; }
        if (ctx->pc != 0x161EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EECu; }
        if (ctx->pc != 0x161EECu) { return; }
    }
    ctx->pc = 0x161EECu;
label_161eec:
    // 0x161eec: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x161eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x161ef0: 0xc05874c  jal         func_161D30
    ctx->pc = 0x161EF0u;
    SET_GPR_U32(ctx, 31, 0x161EF8u);
    ctx->pc = 0x161EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161EF0u;
            // 0x161ef4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EF8u; }
        if (ctx->pc != 0x161EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EF8u; }
        if (ctx->pc != 0x161EF8u) { return; }
    }
    ctx->pc = 0x161EF8u;
label_161ef8:
    // 0x161ef8: 0xac5002e4  sw          $s0, 0x2E4($v0)
    ctx->pc = 0x161ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 16));
    // 0x161efc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x161EFCu;
    SET_GPR_U32(ctx, 31, 0x161F04u);
    ctx->pc = 0x161F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161EFCu;
            // 0x161f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F04u; }
        if (ctx->pc != 0x161F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F04u; }
        if (ctx->pc != 0x161F04u) { return; }
    }
    ctx->pc = 0x161F04u;
label_161f04:
    // 0x161f04: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x161f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x161f08: 0xc05874c  jal         func_161D30
    ctx->pc = 0x161F08u;
    SET_GPR_U32(ctx, 31, 0x161F10u);
    ctx->pc = 0x161F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F08u;
            // 0x161f0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F10u; }
        if (ctx->pc != 0x161F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F10u; }
        if (ctx->pc != 0x161F10u) { return; }
    }
    ctx->pc = 0x161F10u;
label_161f10:
    // 0x161f10: 0xac5002e8  sw          $s0, 0x2E8($v0)
    ctx->pc = 0x161f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 744), GPR_U32(ctx, 16));
    // 0x161f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161f18:
    // 0x161f18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161f24: 0x3e00008  jr          $ra
    ctx->pc = 0x161F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F24u;
            // 0x161f28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161F2Cu;
}
