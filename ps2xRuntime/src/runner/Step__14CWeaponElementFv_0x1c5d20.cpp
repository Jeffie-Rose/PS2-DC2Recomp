#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CWeaponElementFv
// Address: 0x1c5d20 - 0x1c5da0
void Step__14CWeaponElementFv_0x1c5d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CWeaponElementFv_0x1c5d20");
#endif

    switch (ctx->pc) {
        case 0x1c5d64u: goto label_1c5d64;
        case 0x1c5d74u: goto label_1c5d74;
        case 0x1c5d84u: goto label_1c5d84;
        case 0x1c5d94u: goto label_1c5d94;
        default: break;
    }

    ctx->pc = 0x1c5d20u;

    // 0x1c5d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5d28: 0x848305ac  lh          $v1, 0x5AC($a0)
    ctx->pc = 0x1c5d28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1452)));
    // 0x1c5d2c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C5D2Cu;
    {
        const bool branch_taken_0x1c5d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d2c) {
            ctx->pc = 0x1C5D94u;
            goto label_1c5d94;
        }
    }
    ctx->pc = 0x1C5D34u;
    // 0x1c5d34: 0x848305a4  lh          $v1, 0x5A4($a0)
    ctx->pc = 0x1c5d34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1444)));
    // 0x1c5d38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5d3c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5D3Cu;
    {
        const bool branch_taken_0x1c5d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5d3c) {
            ctx->pc = 0x1C5D8Cu;
            goto label_1c5d8c;
        }
    }
    ctx->pc = 0x1C5D44u;
    // 0x1c5d44: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C5D44u;
    {
        const bool branch_taken_0x1c5d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d44) {
            ctx->pc = 0x1C5D7Cu;
            goto label_1c5d7c;
        }
    }
    ctx->pc = 0x1C5D4Cu;
    // 0x1c5d4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5d50: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5D50u;
    {
        const bool branch_taken_0x1c5d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5d50) {
            ctx->pc = 0x1C5D6Cu;
            goto label_1c5d6c;
        }
    }
    ctx->pc = 0x1C5D58u;
    // 0x1c5d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5d5c: 0xc071868  jal         func_1C61A0
    ctx->pc = 0x1C5D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D64u);
    ctx->pc = 0x1C61A0u;
    if (runtime->hasFunction(0x1C61A0u)) {
        auto targetFn = runtime->lookupFunction(0x1C61A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D64u; }
        if (ctx->pc != 0x1C5D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step_Cold__14CWeaponElementFv_0x1c61a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D64u; }
        if (ctx->pc != 0x1C5D64u) { return; }
    }
    ctx->pc = 0x1C5D64u;
label_1c5d64:
    // 0x1c5d64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C5D64u;
    {
        const bool branch_taken_0x1c5d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D64u;
            // 0x1c5d68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d64) {
            ctx->pc = 0x1C5D98u;
            goto label_1c5d98;
        }
    }
    ctx->pc = 0x1C5D6Cu;
label_1c5d6c:
    // 0x1c5d6c: 0xc071b40  jal         func_1C6D00
    ctx->pc = 0x1C5D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D74u);
    ctx->pc = 0x1C6D00u;
    if (runtime->hasFunction(0x1C6D00u)) {
        auto targetFn = runtime->lookupFunction(0x1C6D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D74u; }
        if (ctx->pc != 0x1C5D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step_Wind__14CWeaponElementFv_0x1c6d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D74u; }
        if (ctx->pc != 0x1C5D74u) { return; }
    }
    ctx->pc = 0x1C5D74u;
label_1c5d74:
    // 0x1c5d74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5D74u;
    {
        const bool branch_taken_0x1c5d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d74) {
            ctx->pc = 0x1C5D94u;
            goto label_1c5d94;
        }
    }
    ctx->pc = 0x1C5D7Cu;
label_1c5d7c:
    // 0x1c5d7c: 0xc071e24  jal         func_1C7890
    ctx->pc = 0x1C5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D84u);
    ctx->pc = 0x1C7890u;
    if (runtime->hasFunction(0x1C7890u)) {
        auto targetFn = runtime->lookupFunction(0x1C7890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D84u; }
        if (ctx->pc != 0x1C5D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step_Fire__14CWeaponElementFv_0x1c7890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D84u; }
        if (ctx->pc != 0x1C5D84u) { return; }
    }
    ctx->pc = 0x1C5D84u;
label_1c5d84:
    // 0x1c5d84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5D84u;
    {
        const bool branch_taken_0x1c5d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d84) {
            ctx->pc = 0x1C5D94u;
            goto label_1c5d94;
        }
    }
    ctx->pc = 0x1C5D8Cu;
label_1c5d8c:
    // 0x1c5d8c: 0xc072124  jal         func_1C8490
    ctx->pc = 0x1C5D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D94u);
    ctx->pc = 0x1C8490u;
    if (runtime->hasFunction(0x1C8490u)) {
        auto targetFn = runtime->lookupFunction(0x1C8490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D94u; }
        if (ctx->pc != 0x1C5D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step_Thunder__14CWeaponElementFv_0x1c8490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D94u; }
        if (ctx->pc != 0x1C5D94u) { return; }
    }
    ctx->pc = 0x1C5D94u;
label_1c5d94:
    // 0x1c5d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5d98:
    // 0x1c5d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D98u;
            // 0x1c5d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5DA0u;
}
