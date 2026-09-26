#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_PARTVIBECNT__FP9SPI_STACKi
// Address: 0x252bc0 - 0x252c00
void ps2__MENU_PARTVIBECNT__FP9SPI_STACKi_0x252bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_PARTVIBECNT__FP9SPI_STACKi_0x252bc0");
#endif

    switch (ctx->pc) {
        case 0x252bd4u: goto label_252bd4;
        case 0x252be4u: goto label_252be4;
        default: break;
    }

    ctx->pc = 0x252bc0u;

    // 0x252bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252bcc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252BCCu;
    SET_GPR_U32(ctx, 31, 0x252BD4u);
    ctx->pc = 0x252BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252BCCu;
            // 0x252bd0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252BD4u; }
        if (ctx->pc != 0x252BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252BD4u; }
        if (ctx->pc != 0x252BD4u) { return; }
    }
    ctx->pc = 0x252BD4u;
label_252bd4:
    // 0x252bd4: 0x8f8397c0  lw          $v1, -0x6840($gp)
    ctx->pc = 0x252bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252bdc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252BDCu;
    SET_GPR_U32(ctx, 31, 0x252BE4u);
    ctx->pc = 0x252BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252BDCu;
            // 0x252be0: 0xa462000e  sh          $v0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252BE4u; }
        if (ctx->pc != 0x252BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252BE4u; }
        if (ctx->pc != 0x252BE4u) { return; }
    }
    ctx->pc = 0x252BE4u;
label_252be4:
    // 0x252be4: 0x8f8397c0  lw          $v1, -0x6840($gp)
    ctx->pc = 0x252be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252be8: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x252be8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x252bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x252BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252BF8u;
            // 0x252bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252C00u;
}
