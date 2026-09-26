#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SystemMesStep__FP6CScene
// Address: 0x2d8ad0 - 0x2d8b14
void SystemMesStep__FP6CScene_0x2d8ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SystemMesStep__FP6CScene_0x2d8ad0");
#endif

    switch (ctx->pc) {
        case 0x2d8af8u: goto label_2d8af8;
        default: break;
    }

    ctx->pc = 0x2d8ad0u;

    // 0x2d8ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8ad8: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x2d8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x2d8adc: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8ADCu;
    {
        const bool branch_taken_0x2d8adc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2d8adc) {
            ctx->pc = 0x2D8B08u;
            goto label_2d8b08;
        }
    }
    ctx->pc = 0x2D8AE4u;
    // 0x2d8ae4: 0x8f839e98  lw          $v1, -0x6168($gp)
    ctx->pc = 0x2d8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942360)));
    // 0x2d8ae8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8AE8u;
    {
        const bool branch_taken_0x2d8ae8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d8ae8) {
            ctx->pc = 0x2D8AFCu;
            goto label_2d8afc;
        }
    }
    ctx->pc = 0x2D8AF0u;
    // 0x2d8af0: 0xc0b6298  jal         func_2D8A60
    ctx->pc = 0x2D8AF0u;
    SET_GPR_U32(ctx, 31, 0x2D8AF8u);
    ctx->pc = 0x2D8A60u;
    if (runtime->hasFunction(0x2D8A60u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8AF8u; }
        if (ctx->pc != 0x2D8AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SystemMesClose__FP6CScene_0x2d8a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8AF8u; }
        if (ctx->pc != 0x2D8AF8u) { return; }
    }
    ctx->pc = 0x2D8AF8u;
label_2d8af8:
    // 0x2d8af8: 0xaf809e98  sw          $zero, -0x6168($gp)
    ctx->pc = 0x2d8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942360), GPR_U32(ctx, 0));
label_2d8afc:
    // 0x2d8afc: 0x8f839e98  lw          $v1, -0x6168($gp)
    ctx->pc = 0x2d8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942360)));
    // 0x2d8b00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d8b04: 0xaf839e98  sw          $v1, -0x6168($gp)
    ctx->pc = 0x2d8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942360), GPR_U32(ctx, 3));
label_2d8b08:
    // 0x2d8b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B0Cu;
            // 0x2d8b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8B14u;
}
