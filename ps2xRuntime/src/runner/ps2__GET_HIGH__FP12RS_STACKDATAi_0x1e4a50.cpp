#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_HIGH__FP12RS_STACKDATAi
// Address: 0x1e4a50 - 0x1e4aa4
void ps2__GET_HIGH__FP12RS_STACKDATAi_0x1e4a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_HIGH__FP12RS_STACKDATAi_0x1e4a50");
#endif

    switch (ctx->pc) {
        case 0x1e4a94u: goto label_1e4a94;
        default: break;
    }

    ctx->pc = 0x1e4a50u;

    // 0x1e4a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4a58: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4A58u;
    {
        const bool branch_taken_0x1e4a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A58u;
            // 0x1e4a5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a58) {
            ctx->pc = 0x1E4A68u;
            goto label_1e4a68;
        }
    }
    ctx->pc = 0x1E4A60u;
    // 0x1e4a60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E4A60u;
    {
        const bool branch_taken_0x1e4a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A60u;
            // 0x1e4a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a60) {
            ctx->pc = 0x1E4A98u;
            goto label_1e4a98;
        }
    }
    ctx->pc = 0x1E4A68u;
label_1e4a68:
    // 0x1e4a68: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e4a6c: 0x8c621368  lw          $v0, 0x1368($v1)
    ctx->pc = 0x1e4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4968)));
    // 0x1e4a70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4A70u;
    {
        const bool branch_taken_0x1e4a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a70) {
            ctx->pc = 0x1E4A84u;
            goto label_1e4a84;
        }
    }
    ctx->pc = 0x1E4A78u;
    // 0x1e4a78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e4a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e4a7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4A7Cu;
    {
        const bool branch_taken_0x1e4a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a7c) {
            ctx->pc = 0x1E4A8Cu;
            goto label_1e4a8c;
        }
    }
    ctx->pc = 0x1E4A84u;
label_1e4a84:
    // 0x1e4a84: 0xc46c130c  lwc1        $f12, 0x130C($v1)
    ctx->pc = 0x1e4a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e4a88: 0x0  nop
    ctx->pc = 0x1e4a88u;
    // NOP
label_1e4a8c:
    // 0x1e4a8c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E4A8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A94u);
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A94u; }
        if (ctx->pc != 0x1E4A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A94u; }
        if (ctx->pc != 0x1E4A94u) { return; }
    }
    ctx->pc = 0x1E4A94u;
label_1e4a94:
    // 0x1e4a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4a98:
    // 0x1e4a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A9Cu;
            // 0x1e4aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4AA4u;
}
