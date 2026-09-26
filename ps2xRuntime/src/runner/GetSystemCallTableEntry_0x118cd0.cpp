#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSystemCallTableEntry
// Address: 0x118cd0 - 0x118d0c
void GetSystemCallTableEntry_0x118cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSystemCallTableEntry_0x118cd0");
#endif

    switch (ctx->pc) {
        case 0x118cf0u: goto label_118cf0;
        case 0x118cfcu: goto label_118cfc;
        default: break;
    }

    ctx->pc = 0x118cd0u;

    // 0x118cd0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x118cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x118cd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118cd8: 0x24431588  addiu       $v1, $v0, 0x1588
    ctx->pc = 0x118cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5512));
    // 0x118cdc: 0x8c441588  lw          $a0, 0x1588($v0)
    ctx->pc = 0x118cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5512)));
    // 0x118ce0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x118ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x118ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118ce8: 0xc046344  jal         func_118D10
    ctx->pc = 0x118CE8u;
    SET_GPR_U32(ctx, 31, 0x118CF0u);
    ctx->pc = 0x118D10u;
    if (runtime->hasFunction(0x118D10u)) {
        auto targetFn = runtime->lookupFunction(0x118D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CF0u; }
        if (ctx->pc != 0x118CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x118d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CF0u; }
        if (ctx->pc != 0x118CF0u) { return; }
    }
    ctx->pc = 0x118CF0u;
label_118cf0:
    // 0x118cf0: 0x3c040012  lui         $a0, 0x12
    ctx->pc = 0x118cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18 << 16));
    // 0x118cf4: 0xc046330  jal         func_118CC0
    ctx->pc = 0x118CF4u;
    SET_GPR_U32(ctx, 31, 0x118CFCu);
    ctx->pc = 0x118CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118CF4u;
            // 0x118cf8: 0x24848c88  addiu       $a0, $a0, -0x7378 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (runtime->hasFunction(0x118CC0u)) {
        auto targetFn = runtime->lookupFunction(0x118CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CFCu; }
        if (ctx->pc != 0x118CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindAddress_0x118cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CFCu; }
        if (ctx->pc != 0x118CFCu) { return; }
    }
    ctx->pc = 0x118CFCu;
label_118cfc:
    // 0x118cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118d00: 0x2442fdf4  addiu       $v0, $v0, -0x20C
    ctx->pc = 0x118d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966772));
    // 0x118d04: 0x3e00008  jr          $ra
    ctx->pc = 0x118D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D04u;
            // 0x118d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118D0Cu;
}
