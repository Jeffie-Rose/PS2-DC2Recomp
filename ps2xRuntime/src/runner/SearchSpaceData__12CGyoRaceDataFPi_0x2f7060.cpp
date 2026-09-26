#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSpaceData__12CGyoRaceDataFPi
// Address: 0x2f7060 - 0x2f70bc
void SearchSpaceData__12CGyoRaceDataFPi_0x2f7060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSpaceData__12CGyoRaceDataFPi_0x2f7060");
#endif

    switch (ctx->pc) {
        case 0x2f707cu: goto label_2f707c;
        default: break;
    }

    ctx->pc = 0x2f7060u;

    // 0x2f7060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f7068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f706c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f7070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7074: 0xc0bdc08  jal         func_2F7020
    ctx->pc = 0x2F7074u;
    SET_GPR_U32(ctx, 31, 0x2F707Cu);
    ctx->pc = 0x2F7078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7074u;
            // 0x2f7078: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7020u;
    if (runtime->hasFunction(0x2F7020u)) {
        auto targetFn = runtime->lookupFunction(0x2F7020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F707Cu; }
        if (ctx->pc != 0x2F707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpace__12CGyoRaceDataFv_0x2f7020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F707Cu; }
        if (ctx->pc != 0x2F707Cu) { return; }
    }
    ctx->pc = 0x2F707Cu;
label_2f707c:
    // 0x2f707c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F707Cu;
    {
        const bool branch_taken_0x2f707c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f707c) {
            ctx->pc = 0x2F708Cu;
            goto label_2f708c;
        }
    }
    ctx->pc = 0x2F7084u;
    // 0x2f7084: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7084u;
    {
        const bool branch_taken_0x2f7084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7084u;
            // 0x2f7088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7084) {
            ctx->pc = 0x2F70A8u;
            goto label_2f70a8;
        }
    }
    ctx->pc = 0x2F708Cu;
label_2f708c:
    // 0x2f708c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F708Cu;
    {
        const bool branch_taken_0x2f708c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F708Cu;
            // 0x2f7090: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f708c) {
            ctx->pc = 0x2F7098u;
            goto label_2f7098;
        }
    }
    ctx->pc = 0x2F7094u;
    // 0x2f7094: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f7094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f7098:
    // 0x2f7098: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f7098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f709c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f709cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2f70a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f70a4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2f70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2f70a8:
    // 0x2f70a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f70a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f70ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f70acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f70b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f70b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f70b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F70B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F70B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F70B4u;
            // 0x2f70b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F70BCu;
}
