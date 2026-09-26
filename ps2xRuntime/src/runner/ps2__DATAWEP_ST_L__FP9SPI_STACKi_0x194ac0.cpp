#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAWEP_ST_L__FP9SPI_STACKi
// Address: 0x194ac0 - 0x194b14
void ps2__DATAWEP_ST_L__FP9SPI_STACKi_0x194ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAWEP_ST_L__FP9SPI_STACKi_0x194ac0");
#endif

    switch (ctx->pc) {
        case 0x194ae8u: goto label_194ae8;
        case 0x194af8u: goto label_194af8;
        default: break;
    }

    ctx->pc = 0x194ac0u;

    // 0x194ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194acc: 0x8f828b64  lw          $v0, -0x749C($gp)
    ctx->pc = 0x194accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194ad0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194AD0u;
    {
        const bool branch_taken_0x194ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194AD0u;
            // 0x194ad4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ad0) {
            ctx->pc = 0x194AE0u;
            goto label_194ae0;
        }
    }
    ctx->pc = 0x194AD8u;
    // 0x194ad8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x194AD8u;
    {
        const bool branch_taken_0x194ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194AD8u;
            // 0x194adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ad8) {
            ctx->pc = 0x194B04u;
            goto label_194b04;
        }
    }
    ctx->pc = 0x194AE0u;
label_194ae0:
    // 0x194ae0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194AE0u;
    SET_GPR_U32(ctx, 31, 0x194AE8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AE8u; }
        if (ctx->pc != 0x194AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AE8u; }
        if (ctx->pc != 0x194AE8u) { return; }
    }
    ctx->pc = 0x194AE8u;
label_194ae8:
    // 0x194ae8: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194af0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194AF0u;
    SET_GPR_U32(ctx, 31, 0x194AF8u);
    ctx->pc = 0x194AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194AF0u;
            // 0x194af4: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AF8u; }
        if (ctx->pc != 0x194AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AF8u; }
        if (ctx->pc != 0x194AF8u) { return; }
    }
    ctx->pc = 0x194AF8u;
label_194af8:
    // 0x194af8: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194afc: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x194afcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x194b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194b04:
    // 0x194b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x194B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B0Cu;
            // 0x194b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194B14u;
}
