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
// Address: 0x25f860 - 0x25f89c
void GetStackInt__FP12RS_STACKDATA_0x25f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackInt__FP12RS_STACKDATA_0x25f860");
#endif

    switch (ctx->pc) {
        case 0x25f880u: goto label_25f880;
        default: break;
    }

    ctx->pc = 0x25f860u;

    // 0x25f860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25f864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f86c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25f870: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F870u;
    {
        const bool branch_taken_0x25f870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f870) {
            ctx->pc = 0x25F888u;
            goto label_25f888;
        }
    }
    ctx->pc = 0x25F878u;
    // 0x25f878: 0xc0a248c  jal         func_289230
    ctx->pc = 0x25F878u;
    SET_GPR_U32(ctx, 31, 0x25F880u);
    ctx->pc = 0x25F87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F878u;
            // 0x25f87c: 0xc48c0004  lwc1        $f12, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F880u; }
        if (ctx->pc != 0x25F880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F880u; }
        if (ctx->pc != 0x25F880u) { return; }
    }
    ctx->pc = 0x25F880u;
label_25f880:
    // 0x25f880: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25F880u;
    {
        const bool branch_taken_0x25f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F880u;
            // 0x25f884: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f880) {
            ctx->pc = 0x25F894u;
            goto label_25f894;
        }
    }
    ctx->pc = 0x25F888u;
label_25f888:
    // 0x25f888: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25f88c: 0x0  nop
    ctx->pc = 0x25f88cu;
    // NOP
    // 0x25f890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f894:
    // 0x25f894: 0x3e00008  jr          $ra
    ctx->pc = 0x25F894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F894u;
            // 0x25f898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F89Cu;
}
