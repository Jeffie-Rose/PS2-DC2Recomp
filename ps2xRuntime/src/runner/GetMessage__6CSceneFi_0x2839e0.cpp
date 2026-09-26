#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMessage__6CSceneFi
// Address: 0x2839e0 - 0x283a30
void GetMessage__6CSceneFi_0x2839e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMessage__6CSceneFi_0x2839e0");
#endif

    switch (ctx->pc) {
        case 0x2839f0u: goto label_2839f0;
        default: break;
    }

    ctx->pc = 0x2839e0u;

    // 0x2839e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2839e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2839e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2839e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2839e8: 0xc0a0cf0  jal         func_2833C0
    ctx->pc = 0x2839E8u;
    SET_GPR_U32(ctx, 31, 0x2839F0u);
    ctx->pc = 0x2833C0u;
    if (runtime->hasFunction(0x2833C0u)) {
        auto targetFn = runtime->lookupFunction(0x2833C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2839F0u; }
        if (ctx->pc != 0x2839F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMessage__6CSceneFi_0x2833c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2839F0u; }
        if (ctx->pc != 0x2839F0u) { return; }
    }
    ctx->pc = 0x2839F0u;
label_2839f0:
    // 0x2839f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2839F0u;
    {
        const bool branch_taken_0x2839f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2839f0) {
            ctx->pc = 0x283A00u;
            goto label_283a00;
        }
    }
    ctx->pc = 0x2839F8u;
    // 0x2839f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2839F8u;
    {
        const bool branch_taken_0x2839f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2839F8u;
            // 0x2839fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839f8) {
            ctx->pc = 0x283A24u;
            goto label_283a24;
        }
    }
    ctx->pc = 0x283A00u;
label_283a00:
    // 0x283a00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x283a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283a04: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x283a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x283a08: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x283a08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283a0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283A0Cu;
    {
        const bool branch_taken_0x283a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a0c) {
            ctx->pc = 0x283A1Cu;
            goto label_283a1c;
        }
    }
    ctx->pc = 0x283A14u;
    // 0x283a14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283A14u;
    {
        const bool branch_taken_0x283a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A14u;
            // 0x283a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a14) {
            ctx->pc = 0x283A24u;
            goto label_283a24;
        }
    }
    ctx->pc = 0x283A1Cu;
label_283a1c:
    // 0x283a1c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x283a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x283a20: 0x0  nop
    ctx->pc = 0x283a20u;
    // NOP
label_283a24:
    // 0x283a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283a28: 0x3e00008  jr          $ra
    ctx->pc = 0x283A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A28u;
            // 0x283a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283A30u;
}
