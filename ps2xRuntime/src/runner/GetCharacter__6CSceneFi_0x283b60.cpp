#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharacter__6CSceneFi
// Address: 0x283b60 - 0x283bb0
void GetCharacter__6CSceneFi_0x283b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharacter__6CSceneFi_0x283b60");
#endif

    switch (ctx->pc) {
        case 0x283b70u: goto label_283b70;
        default: break;
    }

    ctx->pc = 0x283b60u;

    // 0x283b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283b68: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x283B68u;
    SET_GPR_U32(ctx, 31, 0x283B70u);
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B70u; }
        if (ctx->pc != 0x283B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B70u; }
        if (ctx->pc != 0x283B70u) { return; }
    }
    ctx->pc = 0x283B70u;
label_283b70:
    // 0x283b70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283B70u;
    {
        const bool branch_taken_0x283b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283b70) {
            ctx->pc = 0x283B80u;
            goto label_283b80;
        }
    }
    ctx->pc = 0x283B78u;
    // 0x283b78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x283B78u;
    {
        const bool branch_taken_0x283b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B78u;
            // 0x283b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b78) {
            ctx->pc = 0x283BA4u;
            goto label_283ba4;
        }
    }
    ctx->pc = 0x283B80u;
label_283b80:
    // 0x283b80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x283b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283b84: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x283b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x283b88: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x283b88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283b8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283B8Cu;
    {
        const bool branch_taken_0x283b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b8c) {
            ctx->pc = 0x283B9Cu;
            goto label_283b9c;
        }
    }
    ctx->pc = 0x283B94u;
    // 0x283b94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283B94u;
    {
        const bool branch_taken_0x283b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B94u;
            // 0x283b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b94) {
            ctx->pc = 0x283BA4u;
            goto label_283ba4;
        }
    }
    ctx->pc = 0x283B9Cu;
label_283b9c:
    // 0x283b9c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x283b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x283ba0: 0x0  nop
    ctx->pc = 0x283ba0u;
    // NOP
label_283ba4:
    // 0x283ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x283BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283BA8u;
            // 0x283bac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283BB0u;
}
