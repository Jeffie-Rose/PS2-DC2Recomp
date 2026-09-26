#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveFloorInfo__16CDngFloorManagerFv
// Address: 0x2f9df0 - 0x2f9e3c
void GetActiveFloorInfo__16CDngFloorManagerFv_0x2f9df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveFloorInfo__16CDngFloorManagerFv_0x2f9df0");
#endif

    switch (ctx->pc) {
        case 0x2f9e04u: goto label_2f9e04;
        case 0x2f9e2cu: goto label_2f9e2c;
        default: break;
    }

    ctx->pc = 0x2f9df0u;

    // 0x2f9df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f9df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f9df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f9df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f9df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f9dfc: 0xc08ca98  jal         func_232A60
    ctx->pc = 0x2F9DFCu;
    SET_GPR_U32(ctx, 31, 0x2F9E04u);
    ctx->pc = 0x2F9E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9DFCu;
            // 0x2f9e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A60u;
    if (runtime->hasFunction(0x232A60u)) {
        auto targetFn = runtime->lookupFunction(0x232A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E04u; }
        if (ctx->pc != 0x2F9E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetSaveDataDungeon__Fv_0x232a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E04u; }
        if (ctx->pc != 0x2F9E04u) { return; }
    }
    ctx->pc = 0x2F9E04u;
label_2f9e04:
    // 0x2f9e04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9E04u;
    {
        const bool branch_taken_0x2f9e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9e04) {
            ctx->pc = 0x2F9E14u;
            goto label_2f9e14;
        }
    }
    ctx->pc = 0x2F9E0Cu;
    // 0x2f9e0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9E0Cu;
    {
        const bool branch_taken_0x2f9e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E0Cu;
            // 0x2f9e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e0c) {
            ctx->pc = 0x2F9E2Cu;
            goto label_2f9e2c;
        }
    }
    ctx->pc = 0x2F9E14u;
label_2f9e14:
    // 0x2f9e14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f9e1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9e20: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2f9e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f9e24: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F9E24u;
    SET_GPR_U32(ctx, 31, 0x2F9E2Cu);
    ctx->pc = 0x2F9E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E24u;
            // 0x2f9e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E2Cu; }
        if (ctx->pc != 0x2F9E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E2Cu; }
        if (ctx->pc != 0x2F9E2Cu) { return; }
    }
    ctx->pc = 0x2F9E2Cu;
label_2f9e2c:
    // 0x2f9e2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9e34: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E34u;
            // 0x2f9e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9E3Cu;
}
