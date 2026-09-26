#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignData__12CSceneCameraFP9mgCCameraPc
// Address: 0x282c80 - 0x282cfc
void AssignData__12CSceneCameraFP9mgCCameraPc_0x282c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignData__12CSceneCameraFP9mgCCameraPc_0x282c80");
#endif

    switch (ctx->pc) {
        case 0x282cb4u: goto label_282cb4;
        case 0x282cd4u: goto label_282cd4;
        default: break;
    }

    ctx->pc = 0x282c80u;

    // 0x282c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282c84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x282c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282c90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282c98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x282c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c9c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282C9Cu;
    {
        const bool branch_taken_0x282c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x282CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C9Cu;
            // 0x282ca0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c9c) {
            ctx->pc = 0x282CACu;
            goto label_282cac;
        }
    }
    ctx->pc = 0x282CA4u;
    // 0x282ca4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x282CA4u;
    {
        const bool branch_taken_0x282ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CA4u;
            // 0x282ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ca4) {
            ctx->pc = 0x282CE4u;
            goto label_282ce4;
        }
    }
    ctx->pc = 0x282CACu;
label_282cac:
    // 0x282cac: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x282CACu;
    SET_GPR_U32(ctx, 31, 0x282CB4u);
    ctx->pc = 0x282D00u;
    if (runtime->hasFunction(0x282D00u)) {
        auto targetFn = runtime->lookupFunction(0x282D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CB4u; }
        if (ctx->pc != 0x282CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneCameraFv_0x282d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CB4u; }
        if (ctx->pc != 0x282CB4u) { return; }
    }
    ctx->pc = 0x282CB4u;
label_282cb4:
    // 0x282cb4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x282cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x282cb8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282CB8u;
    {
        const bool branch_taken_0x282cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x282CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CB8u;
            // 0x282cbc: 0xae510034  sw          $s1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282cb8) {
            ctx->pc = 0x282CC8u;
            goto label_282cc8;
        }
    }
    ctx->pc = 0x282CC0u;
    // 0x282cc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282CC0u;
    {
        const bool branch_taken_0x282cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CC0u;
            // 0x282cc4: 0xa2400008  sb          $zero, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282cc0) {
            ctx->pc = 0x282CD4u;
            goto label_282cd4;
        }
    }
    ctx->pc = 0x282CC8u;
label_282cc8:
    // 0x282cc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ccc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x282CCCu;
    SET_GPR_U32(ctx, 31, 0x282CD4u);
    ctx->pc = 0x282CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282CCCu;
            // 0x282cd0: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CD4u; }
        if (ctx->pc != 0x282CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CD4u; }
        if (ctx->pc != 0x282CD4u) { return; }
    }
    ctx->pc = 0x282CD4u;
label_282cd4:
    // 0x282cd4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x282cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282cdc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x282cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x282ce0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x282ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_282ce4:
    // 0x282ce4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x282ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282ce8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x282CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CF4u;
            // 0x282cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282CFCu;
}
