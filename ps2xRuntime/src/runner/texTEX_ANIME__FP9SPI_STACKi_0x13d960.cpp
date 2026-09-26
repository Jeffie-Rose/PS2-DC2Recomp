#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texTEX_ANIME__FP9SPI_STACKi
// Address: 0x13d960 - 0x13d9f8
void texTEX_ANIME__FP9SPI_STACKi_0x13d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texTEX_ANIME__FP9SPI_STACKi_0x13d960");
#endif

    switch (ctx->pc) {
        case 0x13d980u: goto label_13d980;
        case 0x13d998u: goto label_13d998;
        case 0x13d9b0u: goto label_13d9b0;
        case 0x13d9c4u: goto label_13d9c4;
        case 0x13d9d4u: goto label_13d9d4;
        default: break;
    }

    ctx->pc = 0x13d960u;

    // 0x13d960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13d968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d974: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x13d974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13d978: 0xc05191c  jal         func_146470
    ctx->pc = 0x13D978u;
    SET_GPR_U32(ctx, 31, 0x13D980u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D980u; }
        if (ctx->pc != 0x13D980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D980u; }
        if (ctx->pc != 0x13D980u) { return; }
    }
    ctx->pc = 0x13D980u;
label_13d980:
    // 0x13d980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d984: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13D984u;
    {
        const bool branch_taken_0x13d984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d984) {
            ctx->pc = 0x13D9C8u;
            goto label_13d9c8;
        }
    }
    ctx->pc = 0x13D98Cu;
    // 0x13d98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d990: 0xc04a422  jal         func_129088
    ctx->pc = 0x13D990u;
    SET_GPR_U32(ctx, 31, 0x13D998u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D998u; }
        if (ctx->pc != 0x13D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D998u; }
        if (ctx->pc != 0x13D998u) { return; }
    }
    ctx->pc = 0x13D998u;
label_13d998:
    // 0x13d998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13d99c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13d9a0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x13d9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13d9a4: 0x8f84873c  lw          $a0, -0x78C4($gp)
    ctx->pc = 0x13d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x13d9a8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13D9A8u;
    SET_GPR_U32(ctx, 31, 0x13D9B0u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9B0u; }
        if (ctx->pc != 0x13D9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9B0u; }
        if (ctx->pc != 0x13D9B0u) { return; }
    }
    ctx->pc = 0x13D9B0u;
label_13d9b0:
    // 0x13d9b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13d9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9bc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x13D9BCu;
    SET_GPR_U32(ctx, 31, 0x13D9C4u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9C4u; }
        if (ctx->pc != 0x13D9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9C4u; }
        if (ctx->pc != 0x13D9C4u) { return; }
    }
    ctx->pc = 0x13D9C4u;
label_13d9c4:
    // 0x13d9c4: 0xaf918740  sw          $s1, -0x78C0($gp)
    ctx->pc = 0x13d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936384), GPR_U32(ctx, 17));
label_13d9c8:
    // 0x13d9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13d9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9cc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13D9CCu;
    SET_GPR_U32(ctx, 31, 0x13D9D4u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9D4u; }
        if (ctx->pc != 0x13D9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9D4u; }
        if (ctx->pc != 0x13D9D4u) { return; }
    }
    ctx->pc = 0x13D9D4u;
label_13d9d4:
    // 0x13d9d4: 0xaf828744  sw          $v0, -0x78BC($gp)
    ctx->pc = 0x13d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936388), GPR_U32(ctx, 2));
    // 0x13d9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d9dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13d9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d9e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d9e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d9e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d9ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13d9ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13d9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D9F8u;
}
