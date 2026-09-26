#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_MAKEMSG__FP9SPI_STACKi
// Address: 0x254660 - 0x2546c4
void ps2__MENU_EXE_MAKEMSG__FP9SPI_STACKi_0x254660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_MAKEMSG__FP9SPI_STACKi_0x254660");
#endif

    switch (ctx->pc) {
        case 0x254688u: goto label_254688;
        case 0x254694u: goto label_254694;
        case 0x2546b0u: goto label_2546b0;
        default: break;
    }

    ctx->pc = 0x254660u;

    // 0x254660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25466c: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x25466cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254670: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254670u;
    {
        const bool branch_taken_0x254670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254670u;
            // 0x254674: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254670) {
            ctx->pc = 0x254680u;
            goto label_254680;
        }
    }
    ctx->pc = 0x254678u;
    // 0x254678: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x254678u;
    {
        const bool branch_taken_0x254678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254678u;
            // 0x25467c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254678) {
            ctx->pc = 0x2546B4u;
            goto label_2546b4;
        }
    }
    ctx->pc = 0x254680u;
label_254680:
    // 0x254680: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254680u;
    SET_GPR_U32(ctx, 31, 0x254688u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254688u; }
        if (ctx->pc != 0x254688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254688u; }
        if (ctx->pc != 0x254688u) { return; }
    }
    ctx->pc = 0x254688u;
label_254688:
    // 0x254688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25468c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25468Cu;
    SET_GPR_U32(ctx, 31, 0x254694u);
    ctx->pc = 0x254690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25468Cu;
            // 0x254690: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254694u; }
        if (ctx->pc != 0x254694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254694u; }
        if (ctx->pc != 0x254694u) { return; }
    }
    ctx->pc = 0x254694u;
label_254694:
    // 0x254694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254698: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x254698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25469c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x25469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2546a0: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x2546a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x2546a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2546a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2546a8: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2546A8u;
    SET_GPR_U32(ctx, 31, 0x2546B0u);
    ctx->pc = 0x2546ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2546A8u;
            // 0x2546ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2546B0u; }
        if (ctx->pc != 0x2546B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2546B0u; }
        if (ctx->pc != 0x2546B0u) { return; }
    }
    ctx->pc = 0x2546B0u;
label_2546b0:
    // 0x2546b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2546b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2546b4:
    // 0x2546b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2546b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2546b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2546b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2546bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2546BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2546C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2546BCu;
            // 0x2546c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2546C4u;
}
