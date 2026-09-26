#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_MSGSETSYSTEMBUFF__FP9SPI_STACKi
// Address: 0x254730 - 0x2547b8
void ps2__MENU_EXE_MSGSETSYSTEMBUFF__FP9SPI_STACKi_0x254730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_MSGSETSYSTEMBUFF__FP9SPI_STACKi_0x254730");
#endif

    switch (ctx->pc) {
        case 0x254758u: goto label_254758;
        case 0x254764u: goto label_254764;
        case 0x254788u: goto label_254788;
        case 0x2547a4u: goto label_2547a4;
        default: break;
    }

    ctx->pc = 0x254730u;

    // 0x254730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25473c: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x25473cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254740: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254740u;
    {
        const bool branch_taken_0x254740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254740u;
            // 0x254744: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254740) {
            ctx->pc = 0x254750u;
            goto label_254750;
        }
    }
    ctx->pc = 0x254748u;
    // 0x254748: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x254748u;
    {
        const bool branch_taken_0x254748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254748u;
            // 0x25474c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254748) {
            ctx->pc = 0x2547A8u;
            goto label_2547a8;
        }
    }
    ctx->pc = 0x254750u;
label_254750:
    // 0x254750: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254750u;
    SET_GPR_U32(ctx, 31, 0x254758u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254758u; }
        if (ctx->pc != 0x254758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254758u; }
        if (ctx->pc != 0x254758u) { return; }
    }
    ctx->pc = 0x254758u;
label_254758:
    // 0x254758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25475c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25475Cu;
    SET_GPR_U32(ctx, 31, 0x254764u);
    ctx->pc = 0x254760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25475Cu;
            // 0x254760: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254764u; }
        if (ctx->pc != 0x254764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254764u; }
        if (ctx->pc != 0x254764u) { return; }
    }
    ctx->pc = 0x254764u;
label_254764:
    // 0x254764: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x254764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x254768: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x254768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x25476c: 0x2442e3a8  addiu       $v0, $v0, -0x1C58
    ctx->pc = 0x25476cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960040));
    // 0x254770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254774: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x254774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254778: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254778u;
    {
        const bool branch_taken_0x254778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254778u;
            // 0x25477c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254778) {
            ctx->pc = 0x25478Cu;
            goto label_25478c;
        }
    }
    ctx->pc = 0x254780u;
    // 0x254780: 0xc065a18  jal         func_196860
    ctx->pc = 0x254780u;
    SET_GPR_U32(ctx, 31, 0x254788u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254788u; }
        if (ctx->pc != 0x254788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254788u; }
        if (ctx->pc != 0x254788u) { return; }
    }
    ctx->pc = 0x254788u;
label_254788:
    // 0x254788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25478c:
    // 0x25478c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25478cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x254790: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x254790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x254794: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x254794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x254798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25479c: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x25479Cu;
    SET_GPR_U32(ctx, 31, 0x2547A4u);
    ctx->pc = 0x2547A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25479Cu;
            // 0x2547a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2547A4u; }
        if (ctx->pc != 0x2547A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2547A4u; }
        if (ctx->pc != 0x2547A4u) { return; }
    }
    ctx->pc = 0x2547A4u;
label_2547a4:
    // 0x2547a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2547a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2547a8:
    // 0x2547a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2547a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2547ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2547acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2547b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2547B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2547B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2547B0u;
            // 0x2547b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2547B8u;
}
