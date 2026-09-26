#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texWAIT__FP9SPI_STACKi
// Address: 0x13e120 - 0x13e1a0
void texWAIT__FP9SPI_STACKi_0x13e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texWAIT__FP9SPI_STACKi_0x13e120");
#endif

    switch (ctx->pc) {
        case 0x13e140u: goto label_13e140;
        case 0x13e158u: goto label_13e158;
        case 0x13e184u: goto label_13e184;
        default: break;
    }

    ctx->pc = 0x13e120u;

    // 0x13e120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13e128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e130: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13e130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e134: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13e134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13e138: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13E138u;
    SET_GPR_U32(ctx, 31, 0x13E140u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E140u; }
        if (ctx->pc != 0x13E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E140u; }
        if (ctx->pc != 0x13E140u) { return; }
    }
    ctx->pc = 0x13E140u;
label_13e140:
    // 0x13e140: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e144: 0xa4220e98  sh          $v0, 0xE98($at)
    ctx->pc = 0x13e144u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3736), (uint16_t)GPR_U32(ctx, 2));
    // 0x13e148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e14c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13e14cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13e150: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13E150u;
    SET_GPR_U32(ctx, 31, 0x13E158u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E158u; }
        if (ctx->pc != 0x13E158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E158u; }
        if (ctx->pc != 0x13E158u) { return; }
    }
    ctx->pc = 0x13E158u;
label_13e158:
    // 0x13e158: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E158u;
    {
        const bool branch_taken_0x13e158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e158) {
            ctx->pc = 0x13E16Cu;
            goto label_13e16c;
        }
    }
    ctx->pc = 0x13E160u;
    // 0x13e160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e164: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e168: 0xa4220e98  sh          $v0, 0xE98($at)
    ctx->pc = 0x13e168u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3736), (uint16_t)GPR_U32(ctx, 2));
label_13e16c:
    // 0x13e16c: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x13e16cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13e170: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E170u;
    {
        const bool branch_taken_0x13e170 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e170) {
            ctx->pc = 0x13E184u;
            goto label_13e184;
        }
    }
    ctx->pc = 0x13E178u;
    // 0x13e178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e17c: 0xc05191c  jal         func_146470
    ctx->pc = 0x13E17Cu;
    SET_GPR_U32(ctx, 31, 0x13E184u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E184u; }
        if (ctx->pc != 0x13E184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E184u; }
        if (ctx->pc != 0x13E184u) { return; }
    }
    ctx->pc = 0x13E184u;
label_13e184:
    // 0x13e184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e18c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e194: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13e194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13e198: 0x3e00008  jr          $ra
    ctx->pc = 0x13E198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E1A0u;
}
