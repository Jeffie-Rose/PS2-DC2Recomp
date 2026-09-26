#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_SHOT_POW__FP12RS_STACKDATAi
// Address: 0x276110 - 0x276144
void ps2__SPHIDA_GET_SHOT_POW__FP12RS_STACKDATAi_0x276110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_SHOT_POW__FP12RS_STACKDATAi_0x276110");
#endif

    switch (ctx->pc) {
        case 0x276134u: goto label_276134;
        default: break;
    }

    ctx->pc = 0x276110u;

    // 0x276110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276118: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x276118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x27611c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27611Cu;
    {
        const bool branch_taken_0x27611c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27611c) {
            ctx->pc = 0x27612Cu;
            goto label_27612c;
        }
    }
    ctx->pc = 0x276124u;
    // 0x276124: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x276124u;
    {
        const bool branch_taken_0x276124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276124u;
            // 0x276128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276124) {
            ctx->pc = 0x276138u;
            goto label_276138;
        }
    }
    ctx->pc = 0x27612Cu;
label_27612c:
    // 0x27612c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27612Cu;
    SET_GPR_U32(ctx, 31, 0x276134u);
    ctx->pc = 0x276130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27612Cu;
            // 0x276130: 0xc44c000c  lwc1        $f12, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276134u; }
        if (ctx->pc != 0x276134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276134u; }
        if (ctx->pc != 0x276134u) { return; }
    }
    ctx->pc = 0x276134u;
label_276134:
    // 0x276134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276138:
    // 0x276138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27613c: 0x3e00008  jr          $ra
    ctx->pc = 0x27613Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27613Cu;
            // 0x276140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276144u;
}
