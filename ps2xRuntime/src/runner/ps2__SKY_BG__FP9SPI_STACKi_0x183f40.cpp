#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SKY_BG__FP9SPI_STACKi
// Address: 0x183f40 - 0x183f74
void ps2__SKY_BG__FP9SPI_STACKi_0x183f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SKY_BG__FP9SPI_STACKi_0x183f40");
#endif

    switch (ctx->pc) {
        case 0x183f50u: goto label_183f50;
        case 0x183f64u: goto label_183f64;
        default: break;
    }

    ctx->pc = 0x183f40u;

    // 0x183f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183f48: 0xc05191c  jal         func_146470
    ctx->pc = 0x183F48u;
    SET_GPR_U32(ctx, 31, 0x183F50u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F50u; }
        if (ctx->pc != 0x183F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F50u; }
        if (ctx->pc != 0x183F50u) { return; }
    }
    ctx->pc = 0x183F50u;
label_183f50:
    // 0x183f50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183F50u;
    {
        const bool branch_taken_0x183f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F50u;
            // 0x183f54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f50) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183F58u;
    // 0x183f58: 0x8f828a64  lw          $v0, -0x759C($gp)
    ctx->pc = 0x183f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x183f5c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x183F5Cu;
    SET_GPR_U32(ctx, 31, 0x183F64u);
    ctx->pc = 0x183F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183F5Cu;
            // 0x183f60: 0x24440220  addiu       $a0, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F64u; }
        if (ctx->pc != 0x183F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F64u; }
        if (ctx->pc != 0x183F64u) { return; }
    }
    ctx->pc = 0x183F64u;
label_183f64:
    // 0x183f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x183F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F6Cu;
            // 0x183f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183F74u;
}
