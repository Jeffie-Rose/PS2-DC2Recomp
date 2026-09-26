#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiPLACE_POS__FP9SPI_STACKi
// Address: 0x31a040 - 0x31a094
void vpiPLACE_POS__FP9SPI_STACKi_0x31a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiPLACE_POS__FP9SPI_STACKi_0x31a040");
#endif

    switch (ctx->pc) {
        case 0x31a06cu: goto label_31a06c;
        case 0x31a078u: goto label_31a078;
        default: break;
    }

    ctx->pc = 0x31a040u;

    // 0x31a040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a050: 0x8f84a374  lw          $a0, -0x5C8C($gp)
    ctx->pc = 0x31a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a054: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A054u;
    {
        const bool branch_taken_0x31a054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A054u;
            // 0x31a058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a054) {
            ctx->pc = 0x31A064u;
            goto label_31a064;
        }
    }
    ctx->pc = 0x31A05Cu;
    // 0x31a05c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31A05Cu;
    {
        const bool branch_taken_0x31a05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A05Cu;
            // 0x31a060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a05c) {
            ctx->pc = 0x31A084u;
            goto label_31a084;
        }
    }
    ctx->pc = 0x31A064u;
label_31a064:
    // 0x31a064: 0xc051928  jal         func_1464A0
    ctx->pc = 0x31A064u;
    SET_GPR_U32(ctx, 31, 0x31A06Cu);
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A06Cu; }
        if (ctx->pc != 0x31A06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A06Cu; }
        if (ctx->pc != 0x31A06Cu) { return; }
    }
    ctx->pc = 0x31A06Cu;
label_31a06c:
    // 0x31a06c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x31a06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x31a070: 0xc05190c  jal         func_146430
    ctx->pc = 0x31A070u;
    SET_GPR_U32(ctx, 31, 0x31A078u);
    ctx->pc = 0x31A074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A070u;
            // 0x31a074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A078u; }
        if (ctx->pc != 0x31A078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A078u; }
        if (ctx->pc != 0x31A078u) { return; }
    }
    ctx->pc = 0x31A078u;
label_31a078:
    // 0x31a078: 0x8f83a374  lw          $v1, -0x5C8C($gp)
    ctx->pc = 0x31a078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a080: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x31a080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_31a084:
    // 0x31a084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a08c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A08Cu;
            // 0x31a090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A094u;
}
