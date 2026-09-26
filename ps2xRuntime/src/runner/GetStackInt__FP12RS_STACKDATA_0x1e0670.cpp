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
// Address: 0x1e0670 - 0x1e06ac
void GetStackInt__FP12RS_STACKDATA_0x1e0670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackInt__FP12RS_STACKDATA_0x1e0670");
#endif

    switch (ctx->pc) {
        case 0x1e0690u: goto label_1e0690;
        default: break;
    }

    ctx->pc = 0x1e0670u;

    // 0x1e0670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e067c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0680: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0680u;
    {
        const bool branch_taken_0x1e0680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0680) {
            ctx->pc = 0x1E0698u;
            goto label_1e0698;
        }
    }
    ctx->pc = 0x1E0688u;
    // 0x1e0688: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E0688u;
    SET_GPR_U32(ctx, 31, 0x1E0690u);
    ctx->pc = 0x1E068Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0688u;
            // 0x1e068c: 0xc48c0004  lwc1        $f12, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0690u; }
        if (ctx->pc != 0x1E0690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0690u; }
        if (ctx->pc != 0x1E0690u) { return; }
    }
    ctx->pc = 0x1E0690u;
label_1e0690:
    // 0x1e0690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0690u;
    {
        const bool branch_taken_0x1e0690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0690u;
            // 0x1e0694: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0690) {
            ctx->pc = 0x1E06A4u;
            goto label_1e06a4;
        }
    }
    ctx->pc = 0x1E0698u;
label_1e0698:
    // 0x1e0698: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e069c: 0x0  nop
    ctx->pc = 0x1e069cu;
    // NOP
    // 0x1e06a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e06a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e06a4:
    // 0x1e06a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E06A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E06A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06A4u;
            // 0x1e06a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E06ACu;
}
