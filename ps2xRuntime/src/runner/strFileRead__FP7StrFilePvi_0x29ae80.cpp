#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: strFileRead__FP7StrFilePvi
// Address: 0x29ae80 - 0x29aec0
void strFileRead__FP7StrFilePvi_0x29ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strFileRead__FP7StrFilePvi_0x29ae80");
#endif

    switch (ctx->pc) {
        case 0x29aea4u: goto label_29aea4;
        case 0x29aeb4u: goto label_29aeb4;
        default: break;
    }

    ctx->pc = 0x29ae80u;

    // 0x29ae80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ae84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ae88: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x29ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x29ae8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AE8Cu;
    {
        const bool branch_taken_0x29ae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ae8c) {
            ctx->pc = 0x29AEACu;
            goto label_29aeac;
        }
    }
    ctx->pc = 0x29AE94u;
    // 0x29ae94: 0x622c3  sra         $a0, $a2, 11
    ctx->pc = 0x29ae94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 11));
    // 0x29ae98: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x29ae98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x29ae9c: 0xc04830c  jal         func_120C30
    ctx->pc = 0x29AE9Cu;
    SET_GPR_U32(ctx, 31, 0x29AEA4u);
    ctx->pc = 0x29AEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE9Cu;
            // 0x29aea0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120C30u;
    if (runtime->hasFunction(0x120C30u)) {
        auto targetFn = runtime->lookupFunction(0x120C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEA4u; }
        if (ctx->pc != 0x29AEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdStRead_0x120c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEA4u; }
        if (ctx->pc != 0x29AEA4u) { return; }
    }
    ctx->pc = 0x29AEA4u;
label_29aea4:
    // 0x29aea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29AEA4u;
    {
        const bool branch_taken_0x29aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEA4u;
            // 0x29aea8: 0x212c0  sll         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aea4) {
            ctx->pc = 0x29AEB4u;
            goto label_29aeb4;
        }
    }
    ctx->pc = 0x29AEACu;
label_29aeac:
    // 0x29aeac: 0xc045236  jal         func_1148D8
    ctx->pc = 0x29AEACu;
    SET_GPR_U32(ctx, 31, 0x29AEB4u);
    ctx->pc = 0x29AEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEACu;
            // 0x29aeb0: 0x8c840024  lw          $a0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1148D8u;
    if (runtime->hasFunction(0x1148D8u)) {
        auto targetFn = runtime->lookupFunction(0x1148D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEB4u; }
        if (ctx->pc != 0x29AEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1148d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEB4u; }
        if (ctx->pc != 0x29AEB4u) { return; }
    }
    ctx->pc = 0x29AEB4u;
label_29aeb4:
    // 0x29aeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29aeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29aeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x29AEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEB8u;
            // 0x29aebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AEC0u;
}
