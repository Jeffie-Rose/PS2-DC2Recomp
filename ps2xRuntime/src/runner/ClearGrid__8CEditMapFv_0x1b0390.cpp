#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearGrid__8CEditMapFv
// Address: 0x1b0390 - 0x1b03f8
void ClearGrid__8CEditMapFv_0x1b0390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearGrid__8CEditMapFv_0x1b0390");
#endif

    switch (ctx->pc) {
        case 0x1b03b4u: goto label_1b03b4;
        case 0x1b03c8u: goto label_1b03c8;
        default: break;
    }

    ctx->pc = 0x1b0390u;

    // 0x1b0390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b0394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b0394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b0398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b039c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b03a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b03a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b03a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b03a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b03a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B03ACu;
    {
        const bool branch_taken_0x1b03ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03ACu;
            // 0x1b03b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03ac) {
            ctx->pc = 0x1B03D0u;
            goto label_1b03d0;
        }
    }
    ctx->pc = 0x1B03B4u;
label_1b03b4:
    // 0x1b03b4: 0x8c640f54  lw          $a0, 0xF54($v1)
    ctx->pc = 0x1b03b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3924)));
    // 0x1b03b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B03B8u;
    {
        const bool branch_taken_0x1b03b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b03b8) {
            ctx->pc = 0x1B03C8u;
            goto label_1b03c8;
        }
    }
    ctx->pc = 0x1B03C0u;
    // 0x1b03c0: 0xc0a5e18  jal         func_297860
    ctx->pc = 0x1B03C0u;
    SET_GPR_U32(ctx, 31, 0x1B03C8u);
    ctx->pc = 0x297860u;
    if (runtime->hasFunction(0x297860u)) {
        auto targetFn = runtime->lookupFunction(0x297860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03C8u; }
        if (ctx->pc != 0x1B03C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__9CEditGridFv_0x297860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03C8u; }
        if (ctx->pc != 0x1B03C8u) { return; }
    }
    ctx->pc = 0x1B03C8u;
label_1b03c8:
    // 0x1b03c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b03c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b03cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b03ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b03d0:
    // 0x1b03d0: 0x8e430f50  lw          $v1, 0xF50($s2)
    ctx->pc = 0x1b03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3920)));
    // 0x1b03d4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1b03d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b03d8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B03D8u;
    {
        const bool branch_taken_0x1b03d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B03DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03D8u;
            // 0x1b03dc: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03d8) {
            ctx->pc = 0x1B03B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b03b4;
        }
    }
    ctx->pc = 0x1B03E0u;
    // 0x1b03e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b03e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b03e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b03e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b03e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b03e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b03ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b03ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b03f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B03F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B03F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03F0u;
            // 0x1b03f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B03F8u;
}
