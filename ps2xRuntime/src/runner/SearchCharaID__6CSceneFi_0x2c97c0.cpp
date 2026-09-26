#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchCharaID__6CSceneFi
// Address: 0x2c97c0 - 0x2c9828
void SearchCharaID__6CSceneFi_0x2c97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchCharaID__6CSceneFi_0x2c97c0");
#endif

    switch (ctx->pc) {
        case 0x2c97e4u: goto label_2c97e4;
        case 0x2c97ecu: goto label_2c97ec;
        default: break;
    }

    ctx->pc = 0x2c97c0u;

    // 0x2c97c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c97c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c97c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c97c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c97cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c97d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c97d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c97d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c97d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c97d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97dc: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x2c97dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c97e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c97e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c97e4:
    // 0x2c97e4: 0xc0a0ecc  jal         func_283B30
    ctx->pc = 0x2C97E4u;
    SET_GPR_U32(ctx, 31, 0x2C97ECu);
    ctx->pc = 0x2C97E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C97E4u;
            // 0x2c97e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B30u;
    if (runtime->hasFunction(0x283B30u)) {
        auto targetFn = runtime->lookupFunction(0x283B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C97ECu; }
        if (ctx->pc != 0x2C97ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaNo__6CSceneFi_0x283b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C97ECu; }
        if (ctx->pc != 0x2C97ECu) { return; }
    }
    ctx->pc = 0x2C97ECu;
label_2c97ec:
    // 0x2c97ec: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C97ECu;
    {
        const bool branch_taken_0x2c97ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2C97F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C97ECu;
            // 0x2c97f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97ec) {
            ctx->pc = 0x2C97FCu;
            goto label_2c97fc;
        }
    }
    ctx->pc = 0x2C97F4u;
    // 0x2c97f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C97F4u;
    {
        const bool branch_taken_0x2c97f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C97F4u;
            // 0x2c97f8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97f4) {
            ctx->pc = 0x2C9814u;
            goto label_2c9814;
        }
    }
    ctx->pc = 0x2C97FCu;
label_2c97fc:
    // 0x2c97fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c97fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c9800: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2c9800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2c9804: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C9804u;
    {
        const bool branch_taken_0x2c9804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9804u;
            // 0x2c9808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9804) {
            ctx->pc = 0x2C97E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c97e4;
        }
    }
    ctx->pc = 0x2C980Cu;
    // 0x2c980c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9810: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c9810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c9814:
    // 0x2c9814: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c981c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c981cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9820: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9820u;
            // 0x2c9824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9828u;
}
