#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: rsGetStackInt__FP12RS_STACKDATA
// Address: 0x188820 - 0x18885c
void rsGetStackInt__FP12RS_STACKDATA_0x188820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rsGetStackInt__FP12RS_STACKDATA_0x188820");
#endif

    switch (ctx->pc) {
        case 0x188840u: goto label_188840;
        default: break;
    }

    ctx->pc = 0x188820u;

    // 0x188820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18882c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188830: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188830u;
    {
        const bool branch_taken_0x188830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188830) {
            ctx->pc = 0x188848u;
            goto label_188848;
        }
    }
    ctx->pc = 0x188838u;
    // 0x188838: 0xc0a248c  jal         func_289230
    ctx->pc = 0x188838u;
    SET_GPR_U32(ctx, 31, 0x188840u);
    ctx->pc = 0x18883Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188838u;
            // 0x18883c: 0xc48c0004  lwc1        $f12, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188840u; }
        if (ctx->pc != 0x188840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188840u; }
        if (ctx->pc != 0x188840u) { return; }
    }
    ctx->pc = 0x188840u;
label_188840:
    // 0x188840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188840u;
    {
        const bool branch_taken_0x188840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188840u;
            // 0x188844: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188840) {
            ctx->pc = 0x188854u;
            goto label_188854;
        }
    }
    ctx->pc = 0x188848u;
label_188848:
    // 0x188848: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x188848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18884c: 0x0  nop
    ctx->pc = 0x18884cu;
    // NOP
    // 0x188850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188854:
    // 0x188854: 0x3e00008  jr          $ra
    ctx->pc = 0x188854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188854u;
            // 0x188858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18885Cu;
}
