#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteEffSpt__16CEffectScriptManFii
// Address: 0x2e14f0 - 0x2e1548
void DeleteEffSpt__16CEffectScriptManFii_0x2e14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteEffSpt__16CEffectScriptManFii_0x2e14f0");
#endif

    switch (ctx->pc) {
        case 0x2e1538u: goto label_2e1538;
        default: break;
    }

    ctx->pc = 0x2e14f0u;

    // 0x2e14f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e14f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e14f4: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E14F4u;
    {
        const bool branch_taken_0x2e14f4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2E14F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14F4u;
            // 0x2e14f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14f4) {
            ctx->pc = 0x2E1518u;
            goto label_2e1518;
        }
    }
    ctx->pc = 0x2E14FCu;
    // 0x2e14fc: 0x28a10080  slti        $at, $a1, 0x80
    ctx->pc = 0x2e14fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e1500: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1500u;
    {
        const bool branch_taken_0x2e1500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1500u;
            // 0x2e1504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1500) {
            ctx->pc = 0x2E151Cu;
            goto label_2e151c;
        }
    }
    ctx->pc = 0x2E1508u;
    // 0x2e1508: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1508u;
    {
        const bool branch_taken_0x2e1508 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1508u;
            // 0x2e150c: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1508) {
            ctx->pc = 0x2E1518u;
            goto label_2e1518;
        }
    }
    ctx->pc = 0x2E1510u;
    // 0x2e1510: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1510u;
    {
        const bool branch_taken_0x2e1510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1510u;
            // 0x2e1514: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1510) {
            ctx->pc = 0x2E1524u;
            goto label_2e1524;
        }
    }
    ctx->pc = 0x2E1518u;
label_2e1518:
    // 0x2e1518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e151c:
    // 0x2e151c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E151Cu;
    {
        const bool branch_taken_0x2e151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E151Cu;
            // 0x2e1520: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e151c) {
            ctx->pc = 0x2E1540u;
            goto label_2e1540;
        }
    }
    ctx->pc = 0x2E1524u;
label_2e1524:
    // 0x2e1524: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2e1524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e1528: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e1528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e152c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1530: 0xc0b84ec  jal         func_2E13B0
    ctx->pc = 0x2E1530u;
    SET_GPR_U32(ctx, 31, 0x2E1538u);
    ctx->pc = 0x2E1534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1530u;
            // 0x2e1534: 0x8c450184  lw          $a1, 0x184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E13B0u;
    if (runtime->hasFunction(0x2E13B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1538u; }
        if (ctx->pc != 0x2E1538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1538u; }
        if (ctx->pc != 0x2E1538u) { return; }
    }
    ctx->pc = 0x2E1538u;
label_2e1538:
    // 0x2e1538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e153c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e153cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1540:
    // 0x2e1540: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1540u;
            // 0x2e1544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1548u;
}
