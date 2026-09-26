#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapMAP_FAR_CLIP__FP9SPI_STACKi
// Address: 0x162bc0 - 0x162bf8
void mapMAP_FAR_CLIP__FP9SPI_STACKi_0x162bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapMAP_FAR_CLIP__FP9SPI_STACKi_0x162bc0");
#endif

    switch (ctx->pc) {
        case 0x162bd4u: goto label_162bd4;
        case 0x162be0u: goto label_162be0;
        default: break;
    }

    ctx->pc = 0x162bc0u;

    // 0x162bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162bcc: 0xc05190c  jal         func_146430
    ctx->pc = 0x162BCCu;
    SET_GPR_U32(ctx, 31, 0x162BD4u);
    ctx->pc = 0x162BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162BCCu;
            // 0x162bd0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BD4u; }
        if (ctx->pc != 0x162BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BD4u; }
        if (ctx->pc != 0x162BD4u) { return; }
    }
    ctx->pc = 0x162BD4u;
label_162bd4:
    // 0x162bd4: 0xe7808924  swc1        $f0, -0x76DC($gp)
    ctx->pc = 0x162bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), bits); }
    // 0x162bd8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x162BD8u;
    SET_GPR_U32(ctx, 31, 0x162BE0u);
    ctx->pc = 0x162BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162BD8u;
            // 0x162bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BE0u; }
        if (ctx->pc != 0x162BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BE0u; }
        if (ctx->pc != 0x162BE0u) { return; }
    }
    ctx->pc = 0x162BE0u;
label_162be0:
    // 0x162be0: 0xaf828928  sw          $v0, -0x76D8($gp)
    ctx->pc = 0x162be0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 2));
    // 0x162be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x162BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162BF0u;
            // 0x162bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162BF8u;
}
