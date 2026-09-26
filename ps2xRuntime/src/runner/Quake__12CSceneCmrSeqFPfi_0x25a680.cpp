#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Quake__12CSceneCmrSeqFPfi
// Address: 0x25a680 - 0x25a6dc
void Quake__12CSceneCmrSeqFPfi_0x25a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quake__12CSceneCmrSeqFPfi_0x25a680");
#endif

    switch (ctx->pc) {
        case 0x25a6a0u: goto label_25a6a0;
        case 0x25a6c0u: goto label_25a6c0;
        default: break;
    }

    ctx->pc = 0x25a680u;

    // 0x25a680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a684: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25a688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25a688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25a68c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a690: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25a690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a694: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25a694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a698: 0xc0966c8  jal         func_259B20
    ctx->pc = 0x25A698u;
    SET_GPR_U32(ctx, 31, 0x25A6A0u);
    ctx->pc = 0x25A69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A698u;
            // 0x25a69c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259B20u;
    if (runtime->hasFunction(0x259B20u)) {
        auto targetFn = runtime->lookupFunction(0x259B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A6A0u; }
        if (ctx->pc != 0x25A6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextQuakeSeq__12CSceneCmrSeqFv_0x259b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A6A0u; }
        if (ctx->pc != 0x25A6A0u) { return; }
    }
    ctx->pc = 0x25A6A0u;
label_25a6a0:
    // 0x25a6a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a6a4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25A6A4u;
    {
        const bool branch_taken_0x25a6a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a6a4) {
            ctx->pc = 0x25A6C4u;
            goto label_25a6c4;
        }
    }
    ctx->pc = 0x25A6ACu;
    // 0x25a6ac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x25a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x25a6b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a6b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25a6b8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25A6B8u;
    SET_GPR_U32(ctx, 31, 0x25A6C0u);
    ctx->pc = 0x25A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A6B8u;
            // 0x25a6bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A6C0u; }
        if (ctx->pc != 0x25A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A6C0u; }
        if (ctx->pc != 0x25A6C0u) { return; }
    }
    ctx->pc = 0x25A6C0u;
label_25a6c0:
    // 0x25a6c0: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x25a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_25a6c4:
    // 0x25a6c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25a6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a6c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25a6c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a6cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a6d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A6D4u;
            // 0x25a6d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A6DCu;
}
