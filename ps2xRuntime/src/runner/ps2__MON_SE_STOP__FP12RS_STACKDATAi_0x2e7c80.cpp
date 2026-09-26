#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MON_SE_STOP__FP12RS_STACKDATAi
// Address: 0x2e7c80 - 0x2e7cec
void ps2__MON_SE_STOP__FP12RS_STACKDATAi_0x2e7c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MON_SE_STOP__FP12RS_STACKDATAi_0x2e7c80");
#endif

    switch (ctx->pc) {
        case 0x2e7cb0u: goto label_2e7cb0;
        case 0x2e7cc8u: goto label_2e7cc8;
        case 0x2e7cd8u: goto label_2e7cd8;
        default: break;
    }

    ctx->pc = 0x2e7c80u;

    // 0x2e7c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7c8c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e7c90: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x2e7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e7c94: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x2e7c94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2e7c98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7C98u;
    {
        const bool branch_taken_0x2e7c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C98u;
            // 0x2e7c9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c98) {
            ctx->pc = 0x2E7CA8u;
            goto label_2e7ca8;
        }
    }
    ctx->pc = 0x2E7CA0u;
    // 0x2e7ca0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E7CA0u;
    {
        const bool branch_taken_0x2e7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CA0u;
            // 0x2e7ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ca0) {
            ctx->pc = 0x2E7CDCu;
            goto label_2e7cdc;
        }
    }
    ctx->pc = 0x2E7CA8u;
label_2e7ca8:
    // 0x2e7ca8: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2E7CA8u;
    SET_GPR_U32(ctx, 31, 0x2E7CB0u);
    ctx->pc = 0x2E7CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CA8u;
            // 0x2e7cac: 0x8f849ec8  lw          $a0, -0x6138($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CB0u; }
        if (ctx->pc != 0x2E7CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CB0u; }
        if (ctx->pc != 0x2E7CB0u) { return; }
    }
    ctx->pc = 0x2E7CB0u;
label_2e7cb0:
    // 0x2e7cb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7CB0u;
    {
        const bool branch_taken_0x2e7cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CB0u;
            // 0x2e7cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cb0) {
            ctx->pc = 0x2E7CC0u;
            goto label_2e7cc0;
        }
    }
    ctx->pc = 0x2E7CB8u;
    // 0x2e7cb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7CB8u;
    {
        const bool branch_taken_0x2e7cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CB8u;
            // 0x2e7cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cb8) {
            ctx->pc = 0x2E7CDCu;
            goto label_2e7cdc;
        }
    }
    ctx->pc = 0x2E7CC0u;
label_2e7cc0:
    // 0x2e7cc0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7CC0u;
    SET_GPR_U32(ctx, 31, 0x2E7CC8u);
    ctx->pc = 0x2E7CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CC0u;
            // 0x2e7cc4: 0x8c500588  lw          $s0, 0x588($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CC8u; }
        if (ctx->pc != 0x2E7CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CC8u; }
        if (ctx->pc != 0x2E7CC8u) { return; }
    }
    ctx->pc = 0x2E7CC8u;
label_2e7cc8:
    // 0x2e7cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7cd0: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x2E7CD0u;
    SET_GPR_U32(ctx, 31, 0x2E7CD8u);
    ctx->pc = 0x2E7CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CD0u;
            // 0x2e7cd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CD8u; }
        if (ctx->pc != 0x2E7CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CD8u; }
        if (ctx->pc != 0x2E7CD8u) { return; }
    }
    ctx->pc = 0x2E7CD8u;
label_2e7cd8:
    // 0x2e7cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7cdc:
    // 0x2e7cdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CE4u;
            // 0x2e7ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7CECu;
}
