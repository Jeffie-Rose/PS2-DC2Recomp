#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LevelUpWeapon__16CBattleCharaInfoFP13CGameDataUsed
// Address: 0x1a0030 - 0x1a0098
void LevelUpWeapon__16CBattleCharaInfoFP13CGameDataUsed_0x1a0030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LevelUpWeapon__16CBattleCharaInfoFP13CGameDataUsed_0x1a0030");
#endif

    switch (ctx->pc) {
        case 0x1a0058u: goto label_1a0058;
        case 0x1a0070u: goto label_1a0070;
        case 0x1a0078u: goto label_1a0078;
        default: break;
    }

    ctx->pc = 0x1a0030u;

    // 0x1a0030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a003c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0044: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1a0048: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0048u;
    {
        const bool branch_taken_0x1a0048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0048u;
            // 0x1a004c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0048) {
            ctx->pc = 0x1A0080u;
            goto label_1a0080;
        }
    }
    ctx->pc = 0x1A0050u;
    // 0x1a0050: 0xc066168  jal         func_1985A0
    ctx->pc = 0x1A0050u;
    SET_GPR_U32(ctx, 31, 0x1A0058u);
    ctx->pc = 0x1A0054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0050u;
            // 0x1a0054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0058u; }
        if (ctx->pc != 0x1A0058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsLevelUp__13CGameDataUsedFv_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0058u; }
        if (ctx->pc != 0x1A0058u) { return; }
    }
    ctx->pc = 0x1A0058u;
label_1a0058:
    // 0x1a0058: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0058u;
    {
        const bool branch_taken_0x1a0058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0058u;
            // 0x1a005c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0058) {
            ctx->pc = 0x1A0068u;
            goto label_1a0068;
        }
    }
    ctx->pc = 0x1A0060u;
    // 0x1a0060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0060u;
    {
        const bool branch_taken_0x1a0060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0060u;
            // 0x1a0064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0060) {
            ctx->pc = 0x1A0084u;
            goto label_1a0084;
        }
    }
    ctx->pc = 0x1A0068u;
label_1a0068:
    // 0x1a0068: 0xc066188  jal         func_198620
    ctx->pc = 0x1A0068u;
    SET_GPR_U32(ctx, 31, 0x1A0070u);
    ctx->pc = 0x198620u;
    if (runtime->hasFunction(0x198620u)) {
        auto targetFn = runtime->lookupFunction(0x198620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0070u; }
        if (ctx->pc != 0x1A0070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelUp__13CGameDataUsedFv_0x198620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0070u; }
        if (ctx->pc != 0x1A0070u) { return; }
    }
    ctx->pc = 0x1A0070u;
label_1a0070:
    // 0x1a0070: 0xc067d48  jal         func_19F520
    ctx->pc = 0x1A0070u;
    SET_GPR_U32(ctx, 31, 0x1A0078u);
    ctx->pc = 0x1A0074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0070u;
            // 0x1a0074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F520u;
    if (runtime->hasFunction(0x19F520u)) {
        auto targetFn = runtime->lookupFunction(0x19F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0078u; }
        if (ctx->pc != 0x1A0078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshParamater__16CBattleCharaInfoFv_0x19f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0078u; }
        if (ctx->pc != 0x1A0078u) { return; }
    }
    ctx->pc = 0x1A0078u;
label_1a0078:
    // 0x1a0078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0078u;
    {
        const bool branch_taken_0x1a0078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A007Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0078u;
            // 0x1a007c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0078) {
            ctx->pc = 0x1A0084u;
            goto label_1a0084;
        }
    }
    ctx->pc = 0x1A0080u;
label_1a0080:
    // 0x1a0080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0084:
    // 0x1a0084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a008c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a008cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0090: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0090u;
            // 0x1a0094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0098u;
}
