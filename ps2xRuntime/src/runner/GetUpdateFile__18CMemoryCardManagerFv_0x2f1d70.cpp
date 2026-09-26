#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUpdateFile__18CMemoryCardManagerFv
// Address: 0x2f1d70 - 0x2f1dcc
void GetUpdateFile__18CMemoryCardManagerFv_0x2f1d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUpdateFile__18CMemoryCardManagerFv_0x2f1d70");
#endif

    switch (ctx->pc) {
        case 0x2f1d84u: goto label_2f1d84;
        case 0x2f1d90u: goto label_2f1d90;
        default: break;
    }

    ctx->pc = 0x2f1d70u;

    // 0x2f1d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1d7c: 0xc0bc74c  jal         func_2F1D30
    ctx->pc = 0x2F1D7Cu;
    SET_GPR_U32(ctx, 31, 0x2F1D84u);
    ctx->pc = 0x2F1D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D7Cu;
            // 0x2f1d80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D30u;
    if (runtime->hasFunction(0x2F1D30u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D84u; }
        if (ctx->pc != 0x2F1D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMaxUniqueCounter__18CMemoryCardManagerFv_0x2f1d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D84u; }
        if (ctx->pc != 0x2F1D84u) { return; }
    }
    ctx->pc = 0x2F1D84u;
label_2f1d84:
    // 0x2f1d84: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f1d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f1d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d90:
    // 0x2f1d90: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x2f1d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2f1d94: 0xdc630dd0  ld          $v1, 0xDD0($v1)
    ctx->pc = 0x2f1d94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 3536)));
    // 0x2f1d98: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1D98u;
    {
        const bool branch_taken_0x2f1d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f1d98) {
            ctx->pc = 0x2F1DA8u;
            goto label_2f1da8;
        }
    }
    ctx->pc = 0x2F1DA0u;
    // 0x2f1da0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1DA0u;
    {
        const bool branch_taken_0x2f1da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1DA0u;
            // 0x2f1da4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1da0) {
            ctx->pc = 0x2F1DB8u;
            goto label_2f1db8;
        }
    }
    ctx->pc = 0x2F1DA8u;
label_2f1da8:
    // 0x2f1da8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f1da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f1dac: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x2f1dacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f1db0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F1DB0u;
    {
        const bool branch_taken_0x2f1db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1DB0u;
            // 0x2f1db4: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1db0) {
            ctx->pc = 0x2F1D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1d90;
        }
    }
    ctx->pc = 0x2F1DB8u;
label_2f1db8:
    // 0x2f1db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1dc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f1dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1DC4u;
            // 0x2f1dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1DCCu;
}
