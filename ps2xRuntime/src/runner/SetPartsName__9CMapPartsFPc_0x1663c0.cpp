#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPartsName__9CMapPartsFPc
// Address: 0x1663c0 - 0x166418
void SetPartsName__9CMapPartsFPc_0x1663c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPartsName__9CMapPartsFPc_0x1663c0");
#endif

    switch (ctx->pc) {
        case 0x1663e4u: goto label_1663e4;
        case 0x166404u: goto label_166404;
        default: break;
    }

    ctx->pc = 0x1663c0u;

    // 0x1663c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1663c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1663c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1663c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1663c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1663c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1663cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1663ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1663d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1663d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663d4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1663D4u;
    {
        const bool branch_taken_0x1663d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663D4u;
            // 0x1663d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663d4) {
            ctx->pc = 0x166404u;
            goto label_166404;
        }
    }
    ctx->pc = 0x1663DCu;
    // 0x1663dc: 0xc04a422  jal         func_129088
    ctx->pc = 0x1663DCu;
    SET_GPR_U32(ctx, 31, 0x1663E4u);
    ctx->pc = 0x1663E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1663DCu;
            // 0x1663e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663E4u; }
        if (ctx->pc != 0x1663E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663E4u; }
        if (ctx->pc != 0x1663E4u) { return; }
    }
    ctx->pc = 0x1663E4u;
label_1663e4:
    // 0x1663e4: 0x2c410020  sltiu       $at, $v0, 0x20
    ctx->pc = 0x1663e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1663e8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1663E8u;
    {
        const bool branch_taken_0x1663e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1663ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663E8u;
            // 0x1663ec: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663e8) {
            ctx->pc = 0x1663FCu;
            goto label_1663fc;
        }
    }
    ctx->pc = 0x1663F0u;
    // 0x1663f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1663F0u;
    {
        const bool branch_taken_0x1663f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663F0u;
            // 0x1663f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663f0) {
            ctx->pc = 0x166408u;
            goto label_166408;
        }
    }
    ctx->pc = 0x1663F8u;
    // 0x1663f8: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x1663f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1663fc:
    // 0x1663fc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1663FCu;
    SET_GPR_U32(ctx, 31, 0x166404u);
    ctx->pc = 0x166400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1663FCu;
            // 0x166400: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166404u; }
        if (ctx->pc != 0x166404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166404u; }
        if (ctx->pc != 0x166404u) { return; }
    }
    ctx->pc = 0x166404u;
label_166404:
    // 0x166404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_166408:
    // 0x166408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16640c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16640cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166410: 0x3e00008  jr          $ra
    ctx->pc = 0x166410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166410u;
            // 0x166414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166418u;
}
