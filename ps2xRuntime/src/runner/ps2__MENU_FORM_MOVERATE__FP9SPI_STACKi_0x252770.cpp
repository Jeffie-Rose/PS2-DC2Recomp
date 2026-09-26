#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_MOVERATE__FP9SPI_STACKi
// Address: 0x252770 - 0x2527c4
void ps2__MENU_FORM_MOVERATE__FP9SPI_STACKi_0x252770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_MOVERATE__FP9SPI_STACKi_0x252770");
#endif

    switch (ctx->pc) {
        case 0x252798u: goto label_252798;
        case 0x2527a8u: goto label_2527a8;
        default: break;
    }

    ctx->pc = 0x252770u;

    // 0x252770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25277c: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x25277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252780u;
    {
        const bool branch_taken_0x252780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252780u;
            // 0x252784: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252780) {
            ctx->pc = 0x252790u;
            goto label_252790;
        }
    }
    ctx->pc = 0x252788u;
    // 0x252788: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x252788u;
    {
        const bool branch_taken_0x252788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252788u;
            // 0x25278c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252788) {
            ctx->pc = 0x2527B4u;
            goto label_2527b4;
        }
    }
    ctx->pc = 0x252790u;
label_252790:
    // 0x252790: 0xc05190c  jal         func_146430
    ctx->pc = 0x252790u;
    SET_GPR_U32(ctx, 31, 0x252798u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252798u; }
        if (ctx->pc != 0x252798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252798u; }
        if (ctx->pc != 0x252798u) { return; }
    }
    ctx->pc = 0x252798u;
label_252798:
    // 0x252798: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x25279c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25279cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527a0: 0xc05190c  jal         func_146430
    ctx->pc = 0x2527A0u;
    SET_GPR_U32(ctx, 31, 0x2527A8u);
    ctx->pc = 0x2527A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2527A0u;
            // 0x2527a4: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2527A8u; }
        if (ctx->pc != 0x2527A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2527A8u; }
        if (ctx->pc != 0x2527A8u) { return; }
    }
    ctx->pc = 0x2527A8u;
label_2527a8:
    // 0x2527a8: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x2527a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2527ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2527acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2527b0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2527b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_2527b4:
    // 0x2527b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2527b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2527b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2527b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2527bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2527BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2527C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2527BCu;
            // 0x2527c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2527C4u;
}
