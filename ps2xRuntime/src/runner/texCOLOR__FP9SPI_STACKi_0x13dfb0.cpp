#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texCOLOR__FP9SPI_STACKi
// Address: 0x13dfb0 - 0x13e068
void texCOLOR__FP9SPI_STACKi_0x13dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texCOLOR__FP9SPI_STACKi_0x13dfb0");
#endif

    switch (ctx->pc) {
        case 0x13dfdcu: goto label_13dfdc;
        case 0x13e000u: goto label_13e000;
        case 0x13e024u: goto label_13e024;
        case 0x13e044u: goto label_13e044;
        default: break;
    }

    ctx->pc = 0x13dfb0u;

    // 0x13dfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13dfb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13dfb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13dfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13dfbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13dfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13dfc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13dfc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13dfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfc8: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DFC8u;
    {
        const bool branch_taken_0x13dfc8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x13dfc8) {
            ctx->pc = 0x13DFE4u;
            goto label_13dfe4;
        }
    }
    ctx->pc = 0x13DFD0u;
    // 0x13dfd0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13dfd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dfd4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DFD4u;
    SET_GPR_U32(ctx, 31, 0x13DFDCu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DFDCu; }
        if (ctx->pc != 0x13DFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DFDCu; }
        if (ctx->pc != 0x13DFDCu) { return; }
    }
    ctx->pc = 0x13DFDCu;
label_13dfdc:
    // 0x13dfdc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dfe0: 0xa0220ea0  sb          $v0, 0xEA0($at)
    ctx->pc = 0x13dfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3744), (uint8_t)GPR_U32(ctx, 2));
label_13dfe4:
    // 0x13dfe4: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x13dfe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13dfe8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DFE8u;
    {
        const bool branch_taken_0x13dfe8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dfe8) {
            ctx->pc = 0x13E008u;
            goto label_13e008;
        }
    }
    ctx->pc = 0x13DFF0u;
    // 0x13dff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dff4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13dff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dff8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DFF8u;
    SET_GPR_U32(ctx, 31, 0x13E000u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E000u; }
        if (ctx->pc != 0x13E000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E000u; }
        if (ctx->pc != 0x13E000u) { return; }
    }
    ctx->pc = 0x13E000u;
label_13e000:
    // 0x13e000: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e004: 0xa0220ea1  sb          $v0, 0xEA1($at)
    ctx->pc = 0x13e004u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3745), (uint8_t)GPR_U32(ctx, 2));
label_13e008:
    // 0x13e008: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x13e008u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13e00c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E00Cu;
    {
        const bool branch_taken_0x13e00c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e00c) {
            ctx->pc = 0x13E02Cu;
            goto label_13e02c;
        }
    }
    ctx->pc = 0x13E014u;
    // 0x13e014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e018: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13e018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13e01c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13E01Cu;
    SET_GPR_U32(ctx, 31, 0x13E024u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E024u; }
        if (ctx->pc != 0x13E024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E024u; }
        if (ctx->pc != 0x13E024u) { return; }
    }
    ctx->pc = 0x13E024u;
label_13e024:
    // 0x13e024: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e028: 0xa0220ea2  sb          $v0, 0xEA2($at)
    ctx->pc = 0x13e028u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3746), (uint8_t)GPR_U32(ctx, 2));
label_13e02c:
    // 0x13e02c: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x13e02cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13e030: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E030u;
    {
        const bool branch_taken_0x13e030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e030) {
            ctx->pc = 0x13E04Cu;
            goto label_13e04c;
        }
    }
    ctx->pc = 0x13E038u;
    // 0x13e038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e03c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13E03Cu;
    SET_GPR_U32(ctx, 31, 0x13E044u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E044u; }
        if (ctx->pc != 0x13E044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E044u; }
        if (ctx->pc != 0x13E044u) { return; }
    }
    ctx->pc = 0x13E044u;
label_13e044:
    // 0x13e044: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e048: 0xa0220ea3  sb          $v0, 0xEA3($at)
    ctx->pc = 0x13e048u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3747), (uint8_t)GPR_U32(ctx, 2));
label_13e04c:
    // 0x13e04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e05c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13e05cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13e060: 0x3e00008  jr          $ra
    ctx->pc = 0x13E060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E068u;
}
