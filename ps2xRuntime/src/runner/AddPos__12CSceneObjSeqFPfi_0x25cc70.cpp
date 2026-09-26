#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPos__12CSceneObjSeqFPfi
// Address: 0x25cc70 - 0x25cccc
void AddPos__12CSceneObjSeqFPfi_0x25cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPos__12CSceneObjSeqFPfi_0x25cc70");
#endif

    switch (ctx->pc) {
        case 0x25cc90u: goto label_25cc90;
        case 0x25ccb0u: goto label_25ccb0;
        default: break;
    }

    ctx->pc = 0x25cc70u;

    // 0x25cc70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25cc74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25cc78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25cc7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25cc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25cc80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25cc80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25cc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc88: 0xc097100  jal         func_25C400
    ctx->pc = 0x25CC88u;
    SET_GPR_U32(ctx, 31, 0x25CC90u);
    ctx->pc = 0x25CC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CC88u;
            // 0x25cc8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC90u; }
        if (ctx->pc != 0x25CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC90u; }
        if (ctx->pc != 0x25CC90u) { return; }
    }
    ctx->pc = 0x25CC90u;
label_25cc90:
    // 0x25cc90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc94: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CC94u;
    {
        const bool branch_taken_0x25cc94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc94) {
            ctx->pc = 0x25CCB4u;
            goto label_25ccb4;
        }
    }
    ctx->pc = 0x25CC9Cu;
    // 0x25cc9c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x25cca0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25cca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cca4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25cca8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25CCA8u;
    SET_GPR_U32(ctx, 31, 0x25CCB0u);
    ctx->pc = 0x25CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CCA8u;
            // 0x25ccac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CCB0u; }
        if (ctx->pc != 0x25CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CCB0u; }
        if (ctx->pc != 0x25CCB0u) { return; }
    }
    ctx->pc = 0x25CCB0u;
label_25ccb0:
    // 0x25ccb0: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x25ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_25ccb4:
    // 0x25ccb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25ccb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ccb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25ccb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ccbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ccbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ccc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ccc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ccc4: 0x3e00008  jr          $ra
    ctx->pc = 0x25CCC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CCC4u;
            // 0x25ccc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CCCCu;
}
