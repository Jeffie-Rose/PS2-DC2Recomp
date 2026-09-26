#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __TEX_NAME__FP9SPI_STACKi
// Address: 0x1829a0 - 0x1829e8
void ps2___TEX_NAME__FP9SPI_STACKi_0x1829a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___TEX_NAME__FP9SPI_STACKi_0x1829a0");
#endif

    switch (ctx->pc) {
        case 0x1829b0u: goto label_1829b0;
        case 0x1829d0u: goto label_1829d0;
        default: break;
    }

    ctx->pc = 0x1829a0u;

    // 0x1829a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1829a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1829a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1829a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1829a8: 0xc05191c  jal         func_146470
    ctx->pc = 0x1829A8u;
    SET_GPR_U32(ctx, 31, 0x1829B0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829B0u; }
        if (ctx->pc != 0x1829B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829B0u; }
        if (ctx->pc != 0x1829B0u) { return; }
    }
    ctx->pc = 0x1829B0u;
label_1829b0:
    // 0x1829b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1829B0u;
    {
        const bool branch_taken_0x1829b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1829B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1829B0u;
            // 0x1829b4: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829b0) {
            ctx->pc = 0x1829C0u;
            goto label_1829c0;
        }
    }
    ctx->pc = 0x1829B8u;
    // 0x1829b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1829B8u;
    {
        const bool branch_taken_0x1829b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1829BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1829B8u;
            // 0x1829bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829b8) {
            ctx->pc = 0x1829DCu;
            goto label_1829dc;
        }
    }
    ctx->pc = 0x1829C0u;
label_1829c0:
    // 0x1829c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1829c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829c4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1829c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1829c8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1829C8u;
    SET_GPR_U32(ctx, 31, 0x1829D0u);
    ctx->pc = 0x1829CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829C8u;
            // 0x1829cc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829D0u; }
        if (ctx->pc != 0x1829D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829D0u; }
        if (ctx->pc != 0x1829D0u) { return; }
    }
    ctx->pc = 0x1829D0u;
label_1829d0:
    // 0x1829d0: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1829d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1829d4: 0xac6202dc  sw          $v0, 0x2DC($v1)
    ctx->pc = 0x1829d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 2));
    // 0x1829d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1829d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1829dc:
    // 0x1829dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1829dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1829e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1829E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1829E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1829E0u;
            // 0x1829e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1829E8u;
}
