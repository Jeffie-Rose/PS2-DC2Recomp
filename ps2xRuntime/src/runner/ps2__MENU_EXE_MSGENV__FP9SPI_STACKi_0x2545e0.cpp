#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_MSGENV__FP9SPI_STACKi
// Address: 0x2545e0 - 0x254658
void ps2__MENU_EXE_MSGENV__FP9SPI_STACKi_0x2545e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_MSGENV__FP9SPI_STACKi_0x2545e0");
#endif

    switch (ctx->pc) {
        case 0x254608u: goto label_254608;
        case 0x254614u: goto label_254614;
        case 0x254624u: goto label_254624;
        case 0x254644u: goto label_254644;
        default: break;
    }

    ctx->pc = 0x2545e0u;

    // 0x2545e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2545e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2545e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2545e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2545e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2545e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2545ec: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x2545ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x2545f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2545F0u;
    {
        const bool branch_taken_0x2545f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2545F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2545F0u;
            // 0x2545f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545f0) {
            ctx->pc = 0x254600u;
            goto label_254600;
        }
    }
    ctx->pc = 0x2545F8u;
    // 0x2545f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2545F8u;
    {
        const bool branch_taken_0x2545f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2545F8u;
            // 0x2545fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545f8) {
            ctx->pc = 0x254648u;
            goto label_254648;
        }
    }
    ctx->pc = 0x254600u;
label_254600:
    // 0x254600: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254600u;
    SET_GPR_U32(ctx, 31, 0x254608u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254608u; }
        if (ctx->pc != 0x254608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254608u; }
        if (ctx->pc != 0x254608u) { return; }
    }
    ctx->pc = 0x254608u;
label_254608:
    // 0x254608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25460c: 0xc05191c  jal         func_146470
    ctx->pc = 0x25460Cu;
    SET_GPR_U32(ctx, 31, 0x254614u);
    ctx->pc = 0x254610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25460Cu;
            // 0x254610: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254614u; }
        if (ctx->pc != 0x254614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254614u; }
        if (ctx->pc != 0x254614u) { return; }
    }
    ctx->pc = 0x254614u;
label_254614:
    // 0x254614: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x254614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x254618: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25461c: 0xc0948d4  jal         func_252350
    ctx->pc = 0x25461Cu;
    SET_GPR_U32(ctx, 31, 0x254624u);
    ctx->pc = 0x254620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25461Cu;
            // 0x254620: 0x24841870  addiu       $a0, $a0, 0x1870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254624u; }
        if (ctx->pc != 0x254624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254624u; }
        if (ctx->pc != 0x254624u) { return; }
    }
    ctx->pc = 0x254624u;
label_254624:
    // 0x254624: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254628: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x254628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25462c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x25462cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x254630: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x254630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x254634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254638: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x254638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25463c: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x25463Cu;
    SET_GPR_U32(ctx, 31, 0x254644u);
    ctx->pc = 0x254640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25463Cu;
            // 0x254640: 0x8f868ad0  lw          $a2, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254644u; }
        if (ctx->pc != 0x254644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254644u; }
        if (ctx->pc != 0x254644u) { return; }
    }
    ctx->pc = 0x254644u;
label_254644:
    // 0x254644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254648:
    // 0x254648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25464c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25464cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254650: 0x3e00008  jr          $ra
    ctx->pc = 0x254650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254650u;
            // 0x254654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254658u;
}
