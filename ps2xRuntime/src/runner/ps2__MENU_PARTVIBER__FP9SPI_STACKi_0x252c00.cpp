#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_PARTVIBER__FP9SPI_STACKi
// Address: 0x252c00 - 0x252c40
void ps2__MENU_PARTVIBER__FP9SPI_STACKi_0x252c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_PARTVIBER__FP9SPI_STACKi_0x252c00");
#endif

    switch (ctx->pc) {
        case 0x252c14u: goto label_252c14;
        case 0x252c24u: goto label_252c24;
        default: break;
    }

    ctx->pc = 0x252c00u;

    // 0x252c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252c0c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252C0Cu;
    SET_GPR_U32(ctx, 31, 0x252C14u);
    ctx->pc = 0x252C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252C0Cu;
            // 0x252c10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C14u; }
        if (ctx->pc != 0x252C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C14u; }
        if (ctx->pc != 0x252C14u) { return; }
    }
    ctx->pc = 0x252C14u;
label_252c14:
    // 0x252c14: 0x8f8397c0  lw          $v1, -0x6840($gp)
    ctx->pc = 0x252c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c1c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252C1Cu;
    SET_GPR_U32(ctx, 31, 0x252C24u);
    ctx->pc = 0x252C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252C1Cu;
            // 0x252c20: 0xa062000b  sb          $v0, 0xB($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C24u; }
        if (ctx->pc != 0x252C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C24u; }
        if (ctx->pc != 0x252C24u) { return; }
    }
    ctx->pc = 0x252C24u;
label_252c24:
    // 0x252c24: 0x8f8397c0  lw          $v1, -0x6840($gp)
    ctx->pc = 0x252c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252c28: 0xa062000c  sb          $v0, 0xC($v1)
    ctx->pc = 0x252c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x252c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c38: 0x3e00008  jr          $ra
    ctx->pc = 0x252C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252C38u;
            // 0x252c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252C40u;
}
