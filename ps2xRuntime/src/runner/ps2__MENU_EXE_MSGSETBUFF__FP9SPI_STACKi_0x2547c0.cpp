#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_MSGSETBUFF__FP9SPI_STACKi
// Address: 0x2547c0 - 0x254834
void ps2__MENU_EXE_MSGSETBUFF__FP9SPI_STACKi_0x2547c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_MSGSETBUFF__FP9SPI_STACKi_0x2547c0");
#endif

    switch (ctx->pc) {
        case 0x2547e8u: goto label_2547e8;
        case 0x2547f4u: goto label_2547f4;
        case 0x254820u: goto label_254820;
        default: break;
    }

    ctx->pc = 0x2547c0u;

    // 0x2547c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2547c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2547c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2547c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2547c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2547c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2547cc: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x2547ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x2547d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2547D0u;
    {
        const bool branch_taken_0x2547d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2547D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2547D0u;
            // 0x2547d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547d0) {
            ctx->pc = 0x2547E0u;
            goto label_2547e0;
        }
    }
    ctx->pc = 0x2547D8u;
    // 0x2547d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2547D8u;
    {
        const bool branch_taken_0x2547d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2547D8u;
            // 0x2547dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547d8) {
            ctx->pc = 0x254824u;
            goto label_254824;
        }
    }
    ctx->pc = 0x2547E0u;
label_2547e0:
    // 0x2547e0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2547E0u;
    SET_GPR_U32(ctx, 31, 0x2547E8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2547E8u; }
        if (ctx->pc != 0x2547E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2547E8u; }
        if (ctx->pc != 0x2547E8u) { return; }
    }
    ctx->pc = 0x2547E8u;
label_2547e8:
    // 0x2547e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2547e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547ec: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2547ECu;
    SET_GPR_U32(ctx, 31, 0x2547F4u);
    ctx->pc = 0x2547F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2547ECu;
            // 0x2547f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2547F4u; }
        if (ctx->pc != 0x2547F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2547F4u; }
        if (ctx->pc != 0x2547F4u) { return; }
    }
    ctx->pc = 0x2547F4u;
label_2547f4:
    // 0x2547f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2547f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2547f8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2547f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2547fc: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2547fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x254800: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x254800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x254804: 0x2484ca40  addiu       $a0, $a0, -0x35C0
    ctx->pc = 0x254804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953536));
    // 0x254808: 0x2442e3b8  addiu       $v0, $v0, -0x1C48
    ctx->pc = 0x254808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960056));
    // 0x25480c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x25480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x254810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254814: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x254814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254818: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x254818u;
    SET_GPR_U32(ctx, 31, 0x254820u);
    ctx->pc = 0x25481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254818u;
            // 0x25481c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254820u; }
        if (ctx->pc != 0x254820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254820u; }
        if (ctx->pc != 0x254820u) { return; }
    }
    ctx->pc = 0x254820u;
label_254820:
    // 0x254820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254824:
    // 0x254824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25482c: 0x3e00008  jr          $ra
    ctx->pc = 0x25482Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25482Cu;
            // 0x254830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254834u;
}
