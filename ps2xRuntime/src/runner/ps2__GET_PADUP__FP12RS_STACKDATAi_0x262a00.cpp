#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PADUP__FP12RS_STACKDATAi
// Address: 0x262a00 - 0x262a48
void ps2__GET_PADUP__FP12RS_STACKDATAi_0x262a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PADUP__FP12RS_STACKDATAi_0x262a00");
#endif

    switch (ctx->pc) {
        case 0x262a28u: goto label_262a28;
        case 0x262a34u: goto label_262a34;
        default: break;
    }

    ctx->pc = 0x262a00u;

    // 0x262a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262a0c: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262A0Cu;
    {
        const bool branch_taken_0x262a0c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x262A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A0Cu;
            // 0x262a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a0c) {
            ctx->pc = 0x262A1Cu;
            goto label_262a1c;
        }
    }
    ctx->pc = 0x262A14u;
    // 0x262a14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262A14u;
    {
        const bool branch_taken_0x262a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A14u;
            // 0x262a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a14) {
            ctx->pc = 0x262A38u;
            goto label_262a38;
        }
    }
    ctx->pc = 0x262A1Cu;
label_262a1c:
    // 0x262a1c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x262a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x262a20: 0xc052c94  jal         func_14B250
    ctx->pc = 0x262A20u;
    SET_GPR_U32(ctx, 31, 0x262A28u);
    ctx->pc = 0x262A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262A20u;
            // 0x262a24: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B250u;
    if (runtime->hasFunction(0x14B250u)) {
        auto targetFn = runtime->lookupFunction(0x14B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A28u; }
        if (ctx->pc != 0x262A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPadUp__8CGamePadFv_0x14b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A28u; }
        if (ctx->pc != 0x262A28u) { return; }
    }
    ctx->pc = 0x262A28u;
label_262a28:
    // 0x262a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a2c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x262A2Cu;
    SET_GPR_U32(ctx, 31, 0x262A34u);
    ctx->pc = 0x262A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262A2Cu;
            // 0x262a30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A34u; }
        if (ctx->pc != 0x262A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A34u; }
        if (ctx->pc != 0x262A34u) { return; }
    }
    ctx->pc = 0x262A34u;
label_262a34:
    // 0x262a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262a38:
    // 0x262a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262a3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262a40: 0x3e00008  jr          $ra
    ctx->pc = 0x262A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A40u;
            // 0x262a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262A48u;
}
