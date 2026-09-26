#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStackInt__FP12RS_STACKDATA
// Address: 0x2cde30 - 0x2cde6c
void GetStackInt__FP12RS_STACKDATA_0x2cde30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackInt__FP12RS_STACKDATA_0x2cde30");
#endif

    switch (ctx->pc) {
        case 0x2cde50u: goto label_2cde50;
        default: break;
    }

    ctx->pc = 0x2cde30u;

    // 0x2cde30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cde30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cde34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cde34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cde38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cde38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cde3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cde3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cde40: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDE40u;
    {
        const bool branch_taken_0x2cde40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cde40) {
            ctx->pc = 0x2CDE58u;
            goto label_2cde58;
        }
    }
    ctx->pc = 0x2CDE48u;
    // 0x2cde48: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2CDE48u;
    SET_GPR_U32(ctx, 31, 0x2CDE50u);
    ctx->pc = 0x2CDE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDE48u;
            // 0x2cde4c: 0xc48c0004  lwc1        $f12, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDE50u; }
        if (ctx->pc != 0x2CDE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDE50u; }
        if (ctx->pc != 0x2CDE50u) { return; }
    }
    ctx->pc = 0x2CDE50u;
label_2cde50:
    // 0x2cde50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDE50u;
    {
        const bool branch_taken_0x2cde50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDE50u;
            // 0x2cde54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde50) {
            ctx->pc = 0x2CDE64u;
            goto label_2cde64;
        }
    }
    ctx->pc = 0x2CDE58u;
label_2cde58:
    // 0x2cde58: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cde58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cde5c: 0x0  nop
    ctx->pc = 0x2cde5cu;
    // NOP
    // 0x2cde60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cde60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cde64:
    // 0x2cde64: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDE64u;
            // 0x2cde68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDE6Cu;
}
