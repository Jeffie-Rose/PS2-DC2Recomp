#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UseItem__12CMenuItemUseFP13CGameDataUsedP14CItemUseTarget
// Address: 0x21f530 - 0x21f580
void UseItem__12CMenuItemUseFP13CGameDataUsedP14CItemUseTarget_0x21f530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UseItem__12CMenuItemUseFP13CGameDataUsedP14CItemUseTarget_0x21f530");
#endif

    switch (ctx->pc) {
        case 0x21f574u: goto label_21f574;
        default: break;
    }

    ctx->pc = 0x21f530u;

    // 0x21f530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f534: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F534u;
    {
        const bool branch_taken_0x21f534 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F534u;
            // 0x21f538: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f534) {
            ctx->pc = 0x21F544u;
            goto label_21f544;
        }
    }
    ctx->pc = 0x21F53Cu;
    // 0x21f53c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21F53Cu;
    {
        const bool branch_taken_0x21f53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F53Cu;
            // 0x21f540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f53c) {
            ctx->pc = 0x21F574u;
            goto label_21f574;
        }
    }
    ctx->pc = 0x21F544u;
label_21f544:
    // 0x21f544: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x21f544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x21f548: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21f548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21f54c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21f550: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x21f550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x21f554: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21f558: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x21f558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f55c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21f55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f560: 0xaf829338  sw          $v0, -0x6CC8($gp)
    ctx->pc = 0x21f560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939448), GPR_U32(ctx, 2));
    // 0x21f564: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x21f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21f568: 0xaf82933c  sw          $v0, -0x6CC4($gp)
    ctx->pc = 0x21f568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939452), GPR_U32(ctx, 2));
    // 0x21f56c: 0xc087a30  jal         func_21E8C0
    ctx->pc = 0x21F56Cu;
    SET_GPR_U32(ctx, 31, 0x21F574u);
    ctx->pc = 0x21F570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F56Cu;
            // 0x21f570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E8C0u;
    if (runtime->hasFunction(0x21E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F574u; }
        if (ctx->pc != 0x21F574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuUseItemCheckFunc__FP13CGameDataUsedP14CItemUseTargeti_0x21e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F574u; }
        if (ctx->pc != 0x21F574u) { return; }
    }
    ctx->pc = 0x21F574u;
label_21f574:
    // 0x21f574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f578: 0x3e00008  jr          $ra
    ctx->pc = 0x21F578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F578u;
            // 0x21f57c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F580u;
}
