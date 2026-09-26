#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPLACE_RECT__FP9SPI_STACKi
// Address: 0x2a57e0 - 0x2a581c
void emapPLACE_RECT__FP9SPI_STACKi_0x2a57e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPLACE_RECT__FP9SPI_STACKi_0x2a57e0");
#endif

    switch (ctx->pc) {
        case 0x2a5804u: goto label_2a5804;
        default: break;
    }

    ctx->pc = 0x2a57e0u;

    // 0x2a57e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a57e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a57e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a57e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a57e8: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a57ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A57ECu;
    {
        const bool branch_taken_0x2a57ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A57F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A57ECu;
            // 0x2a57f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57ec) {
            ctx->pc = 0x2A57FCu;
            goto label_2a57fc;
        }
    }
    ctx->pc = 0x2A57F4u;
    // 0x2a57f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A57F4u;
    {
        const bool branch_taken_0x2a57f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A57F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A57F4u;
            // 0x2a57f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57f4) {
            ctx->pc = 0x2A5814u;
            goto label_2a5814;
        }
    }
    ctx->pc = 0x2A57FCu;
label_2a57fc:
    // 0x2a57fc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A57FCu;
    SET_GPR_U32(ctx, 31, 0x2A5804u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5804u; }
        if (ctx->pc != 0x2A5804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5804u; }
        if (ctx->pc != 0x2A5804u) { return; }
    }
    ctx->pc = 0x2A5804u;
label_2a5804:
    // 0x2a5804: 0xaf829a70  sw          $v0, -0x6590($gp)
    ctx->pc = 0x2a5804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 2));
    // 0x2a5808: 0xaf809a74  sw          $zero, -0x658C($gp)
    ctx->pc = 0x2a5808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 0));
    // 0x2a580c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5814:
    // 0x2a5814: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5814u;
            // 0x2a5818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A581Cu;
}
