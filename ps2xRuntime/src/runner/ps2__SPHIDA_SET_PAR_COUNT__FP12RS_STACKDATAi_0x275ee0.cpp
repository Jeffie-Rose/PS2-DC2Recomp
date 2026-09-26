#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_PAR_COUNT__FP12RS_STACKDATAi
// Address: 0x275ee0 - 0x275f24
void ps2__SPHIDA_SET_PAR_COUNT__FP12RS_STACKDATAi_0x275ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_PAR_COUNT__FP12RS_STACKDATAi_0x275ee0");
#endif

    switch (ctx->pc) {
        case 0x275ef0u: goto label_275ef0;
        default: break;
    }

    ctx->pc = 0x275ee0u;

    // 0x275ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275ee8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275EE8u;
    SET_GPR_U32(ctx, 31, 0x275EF0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EF0u; }
        if (ctx->pc != 0x275EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EF0u; }
        if (ctx->pc != 0x275EF0u) { return; }
    }
    ctx->pc = 0x275EF0u;
label_275ef0:
    // 0x275ef0: 0x8f849ed4  lw          $a0, -0x612C($gp)
    ctx->pc = 0x275ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275ef4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275EF4u;
    {
        const bool branch_taken_0x275ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x275ef4) {
            ctx->pc = 0x275F04u;
            goto label_275f04;
        }
    }
    ctx->pc = 0x275EFCu;
    // 0x275efc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x275EFCu;
    {
        const bool branch_taken_0x275efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275EFCu;
            // 0x275f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275efc) {
            ctx->pc = 0x275F18u;
            goto label_275f18;
        }
    }
    ctx->pc = 0x275F04u;
label_275f04:
    // 0x275f04: 0x8f838ac8  lw          $v1, -0x7538($gp)
    ctx->pc = 0x275f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x275f08: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275F08u;
    {
        const bool branch_taken_0x275f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275f08) {
            ctx->pc = 0x275F14u;
            goto label_275f14;
        }
    }
    ctx->pc = 0x275F10u;
    // 0x275f10: 0xac8200b8  sw          $v0, 0xB8($a0)
    ctx->pc = 0x275f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 2));
label_275f14:
    // 0x275f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275f18:
    // 0x275f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x275F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275F1Cu;
            // 0x275f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275F24u;
}
