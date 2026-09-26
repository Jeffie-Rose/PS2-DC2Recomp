#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__14CWeaponElementFv
// Address: 0x1c5da0 - 0x1c5e20
void Draw__14CWeaponElementFv_0x1c5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__14CWeaponElementFv_0x1c5da0");
#endif

    switch (ctx->pc) {
        case 0x1c5de4u: goto label_1c5de4;
        case 0x1c5df4u: goto label_1c5df4;
        case 0x1c5e04u: goto label_1c5e04;
        case 0x1c5e14u: goto label_1c5e14;
        default: break;
    }

    ctx->pc = 0x1c5da0u;

    // 0x1c5da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5da8: 0x848305ac  lh          $v1, 0x5AC($a0)
    ctx->pc = 0x1c5da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1452)));
    // 0x1c5dac: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C5DACu;
    {
        const bool branch_taken_0x1c5dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5dac) {
            ctx->pc = 0x1C5E14u;
            goto label_1c5e14;
        }
    }
    ctx->pc = 0x1C5DB4u;
    // 0x1c5db4: 0x848305a4  lh          $v1, 0x5A4($a0)
    ctx->pc = 0x1c5db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1444)));
    // 0x1c5db8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5dbc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5DBCu;
    {
        const bool branch_taken_0x1c5dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5dbc) {
            ctx->pc = 0x1C5E0Cu;
            goto label_1c5e0c;
        }
    }
    ctx->pc = 0x1C5DC4u;
    // 0x1c5dc4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C5DC4u;
    {
        const bool branch_taken_0x1c5dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5dc4) {
            ctx->pc = 0x1C5DFCu;
            goto label_1c5dfc;
        }
    }
    ctx->pc = 0x1C5DCCu;
    // 0x1c5dcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5dd0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5DD0u;
    {
        const bool branch_taken_0x1c5dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5dd0) {
            ctx->pc = 0x1C5DECu;
            goto label_1c5dec;
        }
    }
    ctx->pc = 0x1C5DD8u;
    // 0x1c5dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ddc: 0xc071998  jal         func_1C6660
    ctx->pc = 0x1C5DDCu;
    SET_GPR_U32(ctx, 31, 0x1C5DE4u);
    ctx->pc = 0x1C6660u;
    if (runtime->hasFunction(0x1C6660u)) {
        auto targetFn = runtime->lookupFunction(0x1C6660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DE4u; }
        if (ctx->pc != 0x1C5DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw_Cold__14CWeaponElementFv_0x1c6660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DE4u; }
        if (ctx->pc != 0x1C5DE4u) { return; }
    }
    ctx->pc = 0x1C5DE4u;
label_1c5de4:
    // 0x1c5de4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C5DE4u;
    {
        const bool branch_taken_0x1c5de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DE4u;
            // 0x1c5de8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5de4) {
            ctx->pc = 0x1C5E18u;
            goto label_1c5e18;
        }
    }
    ctx->pc = 0x1C5DECu;
label_1c5dec:
    // 0x1c5dec: 0xc071ca8  jal         func_1C72A0
    ctx->pc = 0x1C5DECu;
    SET_GPR_U32(ctx, 31, 0x1C5DF4u);
    ctx->pc = 0x1C72A0u;
    if (runtime->hasFunction(0x1C72A0u)) {
        auto targetFn = runtime->lookupFunction(0x1C72A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DF4u; }
        if (ctx->pc != 0x1C5DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw_Wind__14CWeaponElementFv_0x1c72a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DF4u; }
        if (ctx->pc != 0x1C5DF4u) { return; }
    }
    ctx->pc = 0x1C5DF4u;
label_1c5df4:
    // 0x1c5df4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5DF4u;
    {
        const bool branch_taken_0x1c5df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5df4) {
            ctx->pc = 0x1C5E14u;
            goto label_1c5e14;
        }
    }
    ctx->pc = 0x1C5DFCu;
label_1c5dfc:
    // 0x1c5dfc: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x1C5DFCu;
    SET_GPR_U32(ctx, 31, 0x1C5E04u);
    ctx->pc = 0x1C7D50u;
    if (runtime->hasFunction(0x1C7D50u)) {
        auto targetFn = runtime->lookupFunction(0x1C7D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E04u; }
        if (ctx->pc != 0x1C5E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw_Fire__14CWeaponElementFv_0x1c7d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E04u; }
        if (ctx->pc != 0x1C5E04u) { return; }
    }
    ctx->pc = 0x1C5E04u;
label_1c5e04:
    // 0x1c5e04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5E04u;
    {
        const bool branch_taken_0x1c5e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e04) {
            ctx->pc = 0x1C5E14u;
            goto label_1c5e14;
        }
    }
    ctx->pc = 0x1C5E0Cu;
label_1c5e0c:
    // 0x1c5e0c: 0xc0721d4  jal         func_1C8750
    ctx->pc = 0x1C5E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E14u);
    ctx->pc = 0x1C8750u;
    if (runtime->hasFunction(0x1C8750u)) {
        auto targetFn = runtime->lookupFunction(0x1C8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E14u; }
        if (ctx->pc != 0x1C5E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw_Thunder__14CWeaponElementFv_0x1c8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E14u; }
        if (ctx->pc != 0x1C5E14u) { return; }
    }
    ctx->pc = 0x1C5E14u;
label_1c5e14:
    // 0x1c5e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5e18:
    // 0x1c5e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E18u;
            // 0x1c5e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5E20u;
}
