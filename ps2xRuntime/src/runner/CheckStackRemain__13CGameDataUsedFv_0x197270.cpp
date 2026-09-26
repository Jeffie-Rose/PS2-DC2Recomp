#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckStackRemain__13CGameDataUsedFv
// Address: 0x197270 - 0x1972d4
void CheckStackRemain__13CGameDataUsedFv_0x197270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckStackRemain__13CGameDataUsedFv_0x197270");
#endif

    switch (ctx->pc) {
        case 0x197288u: goto label_197288;
        case 0x1972a0u: goto label_1972a0;
        case 0x1972b4u: goto label_1972b4;
        default: break;
    }

    ctx->pc = 0x197270u;

    // 0x197270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19727c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19727cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197280: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x197280u;
    SET_GPR_U32(ctx, 31, 0x197288u);
    ctx->pc = 0x197284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197280u;
            // 0x197284: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197288u; }
        if (ctx->pc != 0x197288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197288u; }
        if (ctx->pc != 0x197288u) { return; }
    }
    ctx->pc = 0x197288u;
label_197288:
    // 0x197288: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197288u;
    {
        const bool branch_taken_0x197288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197288u;
            // 0x19728c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197288) {
            ctx->pc = 0x197298u;
            goto label_197298;
        }
    }
    ctx->pc = 0x197290u;
    // 0x197290: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x197290u;
    {
        const bool branch_taken_0x197290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197290u;
            // 0x197294: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197290) {
            ctx->pc = 0x1972C4u;
            goto label_1972c4;
        }
    }
    ctx->pc = 0x197298u;
label_197298:
    // 0x197298: 0xc065708  jal         func_195C20
    ctx->pc = 0x197298u;
    SET_GPR_U32(ctx, 31, 0x1972A0u);
    ctx->pc = 0x19729Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197298u;
            // 0x19729c: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972A0u; }
        if (ctx->pc != 0x1972A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972A0u; }
        if (ctx->pc != 0x1972A0u) { return; }
    }
    ctx->pc = 0x1972A0u;
label_1972a0:
    // 0x1972a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1972a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1972A4u;
    {
        const bool branch_taken_0x1972a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1972A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972A4u;
            // 0x1972a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972a4) {
            ctx->pc = 0x1972C0u;
            goto label_1972c0;
        }
    }
    ctx->pc = 0x1972ACu;
    // 0x1972ac: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x1972ACu;
    SET_GPR_U32(ctx, 31, 0x1972B4u);
    ctx->pc = 0x1972B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1972ACu;
            // 0x1972b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972B4u; }
        if (ctx->pc != 0x1972B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972B4u; }
        if (ctx->pc != 0x1972B4u) { return; }
    }
    ctx->pc = 0x1972B4u;
label_1972b4:
    // 0x1972b4: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x1972b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1972b8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1972B8u;
    {
        const bool branch_taken_0x1972b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1972BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972B8u;
            // 0x1972bc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972b8) {
            ctx->pc = 0x1972C0u;
            goto label_1972c0;
        }
    }
    ctx->pc = 0x1972C0u;
label_1972c0:
    // 0x1972c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1972c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1972c4:
    // 0x1972c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1972c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1972c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1972c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1972cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1972CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1972D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972CCu;
            // 0x1972d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1972D4u;
}
