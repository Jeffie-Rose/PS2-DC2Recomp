#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_SET_OPENSPEED__FP9SPI_STACKi
// Address: 0x254980 - 0x2549e8
void ps2__MENU_SET_OPENSPEED__FP9SPI_STACKi_0x254980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_SET_OPENSPEED__FP9SPI_STACKi_0x254980");
#endif

    switch (ctx->pc) {
        case 0x2549acu: goto label_2549ac;
        case 0x2549b8u: goto label_2549b8;
        default: break;
    }

    ctx->pc = 0x254980u;

    // 0x254980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25498c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25498cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254990: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254990u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254994: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254994u;
    {
        const bool branch_taken_0x254994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254994u;
            // 0x254998: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254994) {
            ctx->pc = 0x2549A4u;
            goto label_2549a4;
        }
    }
    ctx->pc = 0x25499Cu;
    // 0x25499c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25499Cu;
    {
        const bool branch_taken_0x25499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2549A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25499Cu;
            // 0x2549a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25499c) {
            ctx->pc = 0x2549D4u;
            goto label_2549d4;
        }
    }
    ctx->pc = 0x2549A4u;
label_2549a4:
    // 0x2549a4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2549A4u;
    SET_GPR_U32(ctx, 31, 0x2549ACu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2549ACu; }
        if (ctx->pc != 0x2549ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2549ACu; }
        if (ctx->pc != 0x2549ACu) { return; }
    }
    ctx->pc = 0x2549ACu;
label_2549ac:
    // 0x2549ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2549acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549b0: 0xc05190c  jal         func_146430
    ctx->pc = 0x2549B0u;
    SET_GPR_U32(ctx, 31, 0x2549B8u);
    ctx->pc = 0x2549B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2549B0u;
            // 0x2549b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2549B8u; }
        if (ctx->pc != 0x2549B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2549B8u; }
        if (ctx->pc != 0x2549B8u) { return; }
    }
    ctx->pc = 0x2549B8u;
label_2549b8:
    // 0x2549b8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2549b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2549bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2549bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2549c0: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x2549c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x2549c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2549c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2549c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2549c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2549cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2549ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2549d0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2549d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_2549d4:
    // 0x2549d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2549d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2549d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2549d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2549dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2549dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2549e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2549E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2549E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2549E0u;
            // 0x2549e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2549E8u;
}
