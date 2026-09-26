#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eaPERCENT__FP9SPI_STACKi
// Address: 0x2aa8b0 - 0x2aa8ec
void eaPERCENT__FP9SPI_STACKi_0x2aa8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eaPERCENT__FP9SPI_STACKi_0x2aa8b0");
#endif

    switch (ctx->pc) {
        case 0x2aa8d4u: goto label_2aa8d4;
        default: break;
    }

    ctx->pc = 0x2aa8b0u;

    // 0x2aa8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa8b8: 0x8f829a88  lw          $v0, -0x6578($gp)
    ctx->pc = 0x2aa8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa8bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA8BCu;
    {
        const bool branch_taken_0x2aa8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA8BCu;
            // 0x2aa8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8bc) {
            ctx->pc = 0x2AA8CCu;
            goto label_2aa8cc;
        }
    }
    ctx->pc = 0x2AA8C4u;
    // 0x2aa8c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA8C4u;
    {
        const bool branch_taken_0x2aa8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA8C4u;
            // 0x2aa8c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8c4) {
            ctx->pc = 0x2AA8E4u;
            goto label_2aa8e4;
        }
    }
    ctx->pc = 0x2AA8CCu;
label_2aa8cc:
    // 0x2aa8cc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AA8CCu;
    SET_GPR_U32(ctx, 31, 0x2AA8D4u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA8D4u; }
        if (ctx->pc != 0x2AA8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA8D4u; }
        if (ctx->pc != 0x2AA8D4u) { return; }
    }
    ctx->pc = 0x2AA8D4u;
label_2aa8d4:
    // 0x2aa8d4: 0x8f839a88  lw          $v1, -0x6578($gp)
    ctx->pc = 0x2aa8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa8d8: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2aa8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aa8dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa8e4:
    // 0x2aa8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA8E4u;
            // 0x2aa8e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA8ECu;
}
