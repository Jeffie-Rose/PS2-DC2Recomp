#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_MSGSETCURSOR__FP9SPI_STACKi
// Address: 0x2548b0 - 0x254914
void ps2__MENU_EXE_MSGSETCURSOR__FP9SPI_STACKi_0x2548b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_MSGSETCURSOR__FP9SPI_STACKi_0x2548b0");
#endif

    switch (ctx->pc) {
        case 0x2548d8u: goto label_2548d8;
        case 0x2548e4u: goto label_2548e4;
        case 0x254900u: goto label_254900;
        default: break;
    }

    ctx->pc = 0x2548b0u;

    // 0x2548b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2548b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2548b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2548b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2548b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2548b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2548bc: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x2548bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x2548c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2548C0u;
    {
        const bool branch_taken_0x2548c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2548C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2548C0u;
            // 0x2548c4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548c0) {
            ctx->pc = 0x2548D0u;
            goto label_2548d0;
        }
    }
    ctx->pc = 0x2548C8u;
    // 0x2548c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2548C8u;
    {
        const bool branch_taken_0x2548c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2548C8u;
            // 0x2548cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548c8) {
            ctx->pc = 0x254904u;
            goto label_254904;
        }
    }
    ctx->pc = 0x2548D0u;
label_2548d0:
    // 0x2548d0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2548D0u;
    SET_GPR_U32(ctx, 31, 0x2548D8u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2548D8u; }
        if (ctx->pc != 0x2548D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2548D8u; }
        if (ctx->pc != 0x2548D8u) { return; }
    }
    ctx->pc = 0x2548D8u;
label_2548d8:
    // 0x2548d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2548d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548dc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2548DCu;
    SET_GPR_U32(ctx, 31, 0x2548E4u);
    ctx->pc = 0x2548E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2548DCu;
            // 0x2548e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2548E4u; }
        if (ctx->pc != 0x2548E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2548E4u; }
        if (ctx->pc != 0x2548E4u) { return; }
    }
    ctx->pc = 0x2548E4u;
label_2548e4:
    // 0x2548e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2548e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2548e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2548ec: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2548ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2548f0: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x2548f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x2548f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2548f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2548f8: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2548F8u;
    SET_GPR_U32(ctx, 31, 0x254900u);
    ctx->pc = 0x2548FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2548F8u;
            // 0x2548fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254900u; }
        if (ctx->pc != 0x254900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254900u; }
        if (ctx->pc != 0x254900u) { return; }
    }
    ctx->pc = 0x254900u;
label_254900:
    // 0x254900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254904:
    // 0x254904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25490c: 0x3e00008  jr          $ra
    ctx->pc = 0x25490Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25490Cu;
            // 0x254910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254914u;
}
