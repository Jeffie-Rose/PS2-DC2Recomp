#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_SETABSPOS__FP9SPI_STACKi
// Address: 0x2546d0 - 0x254730
void ps2__MENU_EXE_SETABSPOS__FP9SPI_STACKi_0x2546d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_SETABSPOS__FP9SPI_STACKi_0x2546d0");
#endif

    switch (ctx->pc) {
        case 0x2546f8u: goto label_2546f8;
        case 0x254704u: goto label_254704;
        default: break;
    }

    ctx->pc = 0x2546d0u;

    // 0x2546d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2546d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2546d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2546d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2546d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2546d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2546dc: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x2546dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x2546e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2546E0u;
    {
        const bool branch_taken_0x2546e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2546E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2546E0u;
            // 0x2546e4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546e0) {
            ctx->pc = 0x2546F0u;
            goto label_2546f0;
        }
    }
    ctx->pc = 0x2546E8u;
    // 0x2546e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2546E8u;
    {
        const bool branch_taken_0x2546e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2546E8u;
            // 0x2546ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546e8) {
            ctx->pc = 0x254720u;
            goto label_254720;
        }
    }
    ctx->pc = 0x2546F0u;
label_2546f0:
    // 0x2546f0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2546F0u;
    SET_GPR_U32(ctx, 31, 0x2546F8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2546F8u; }
        if (ctx->pc != 0x2546F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2546F8u; }
        if (ctx->pc != 0x2546F8u) { return; }
    }
    ctx->pc = 0x2546F8u;
label_2546f8:
    // 0x2546f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2546f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2546fc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2546FCu;
    SET_GPR_U32(ctx, 31, 0x254704u);
    ctx->pc = 0x254700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2546FCu;
            // 0x254700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254704u; }
        if (ctx->pc != 0x254704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254704u; }
        if (ctx->pc != 0x254704u) { return; }
    }
    ctx->pc = 0x254704u;
label_254704:
    // 0x254704: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x254704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x254708: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x254708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25470c: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x25470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
    // 0x254710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254714: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x254714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254718: 0xac62014c  sw          $v0, 0x14C($v1)
    ctx->pc = 0x254718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
    // 0x25471c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254720:
    // 0x254720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254728: 0x3e00008  jr          $ra
    ctx->pc = 0x254728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254728u;
            // 0x25472c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254730u;
}
