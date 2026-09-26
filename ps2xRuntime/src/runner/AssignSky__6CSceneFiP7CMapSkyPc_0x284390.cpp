#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignSky__6CSceneFiP7CMapSkyPc
// Address: 0x284390 - 0x284460
void AssignSky__6CSceneFiP7CMapSkyPc_0x284390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignSky__6CSceneFiP7CMapSkyPc_0x284390");
#endif

    switch (ctx->pc) {
        case 0x2843c4u: goto label_2843c4;
        case 0x2843ccu: goto label_2843cc;
        case 0x284410u: goto label_284410;
        case 0x284438u: goto label_284438;
        default: break;
    }

    ctx->pc = 0x284390u;

    // 0x284390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x284390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x284394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x284394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x284398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x284398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28439c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2843a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2843a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2843a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2843a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2843a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2843acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2843b0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2843b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843b4: 0x6610014  bgez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2843B4u;
    {
        const bool branch_taken_0x2843b4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2843B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2843B4u;
            // 0x2843b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843b4) {
            ctx->pc = 0x284408u;
            goto label_284408;
        }
    }
    ctx->pc = 0x2843BCu;
    // 0x2843bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2843BCu;
    {
        const bool branch_taken_0x2843bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2843C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2843BCu;
            // 0x2843c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843bc) {
            ctx->pc = 0x2843ECu;
            goto label_2843ec;
        }
    }
    ctx->pc = 0x2843C4u;
label_2843c4:
    // 0x2843c4: 0xc0a0d10  jal         func_283440
    ctx->pc = 0x2843C4u;
    SET_GPR_U32(ctx, 31, 0x2843CCu);
    ctx->pc = 0x2843C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2843C4u;
            // 0x2843c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283440u;
    if (runtime->hasFunction(0x283440u)) {
        auto targetFn = runtime->lookupFunction(0x283440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2843CCu; }
        if (ctx->pc != 0x2843CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneSky__6CSceneFi_0x283440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2843CCu; }
        if (ctx->pc != 0x2843CCu) { return; }
    }
    ctx->pc = 0x2843CCu;
label_2843cc:
    // 0x2843cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2843CCu;
    {
        const bool branch_taken_0x2843cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2843cc) {
            ctx->pc = 0x2843E8u;
            goto label_2843e8;
        }
    }
    ctx->pc = 0x2843D4u;
    // 0x2843d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2843d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2843d8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2843d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2843dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2843dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2843e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2843E0u;
    {
        const bool branch_taken_0x2843e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2843e0) {
            ctx->pc = 0x284400u;
            goto label_284400;
        }
    }
    ctx->pc = 0x2843E8u;
label_2843e8:
    // 0x2843e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2843e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2843ec:
    // 0x2843ec: 0x0  nop
    ctx->pc = 0x2843ecu;
    // NOP
    // 0x2843f0: 0x8e0228c4  lw          $v0, 0x28C4($s0)
    ctx->pc = 0x2843f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x2843f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2843f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2843f8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2843F8u;
    {
        const bool branch_taken_0x2843f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2843FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2843F8u;
            // 0x2843fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843f8) {
            ctx->pc = 0x2843C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2843c4;
        }
    }
    ctx->pc = 0x284400u;
label_284400:
    // 0x284400: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x284400u;
    {
        const bool branch_taken_0x284400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284400u;
            // 0x284404: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284400) {
            ctx->pc = 0x284444u;
            goto label_284444;
        }
    }
    ctx->pc = 0x284408u;
label_284408:
    // 0x284408: 0xc0a0d10  jal         func_283440
    ctx->pc = 0x284408u;
    SET_GPR_U32(ctx, 31, 0x284410u);
    ctx->pc = 0x283440u;
    if (runtime->hasFunction(0x283440u)) {
        auto targetFn = runtime->lookupFunction(0x283440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284410u; }
        if (ctx->pc != 0x284410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneSky__6CSceneFi_0x283440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284410u; }
        if (ctx->pc != 0x284410u) { return; }
    }
    ctx->pc = 0x284410u;
label_284410:
    // 0x284410: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284410u;
    {
        const bool branch_taken_0x284410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284410) {
            ctx->pc = 0x284420u;
            goto label_284420;
        }
    }
    ctx->pc = 0x284418u;
    // 0x284418: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x284418u;
    {
        const bool branch_taken_0x284418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28441Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284418u;
            // 0x28441c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284418) {
            ctx->pc = 0x284444u;
            goto label_284444;
        }
    }
    ctx->pc = 0x284420u;
label_284420:
    // 0x284420: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x284420u;
    {
        const bool branch_taken_0x284420 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x284424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284420u;
            // 0x284424: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284420) {
            ctx->pc = 0x28442Cu;
            goto label_28442c;
        }
    }
    ctx->pc = 0x284428u;
    // 0x284428: 0x27918418  addiu       $s1, $gp, -0x7BE8
    ctx->pc = 0x284428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935576));
label_28442c:
    // 0x28442c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28442cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284430: 0xc0a0b44  jal         func_282D10
    ctx->pc = 0x284430u;
    SET_GPR_U32(ctx, 31, 0x284438u);
    ctx->pc = 0x284434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284430u;
            // 0x284434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282D10u;
    if (runtime->hasFunction(0x282D10u)) {
        auto targetFn = runtime->lookupFunction(0x282D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284438u; }
        if (ctx->pc != 0x284438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignData__9CSceneSkyFP7CMapSkyPc_0x282d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284438u; }
        if (ctx->pc != 0x284438u) { return; }
    }
    ctx->pc = 0x284438u;
label_284438:
    // 0x284438: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284438u;
    {
        const bool branch_taken_0x284438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28443Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284438u;
            // 0x28443c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284438) {
            ctx->pc = 0x284444u;
            goto label_284444;
        }
    }
    ctx->pc = 0x284440u;
    // 0x284440: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x284440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_284444:
    // 0x284444: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x284444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x284448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28444c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28444cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x284450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284458: 0x3e00008  jr          $ra
    ctx->pc = 0x284458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284458u;
            // 0x28445c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284460u;
}
