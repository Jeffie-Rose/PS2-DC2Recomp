#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRoboSoundFileName__13CGameDataUsedFPc
// Address: 0x1984b0 - 0x198548
void GetRoboSoundFileName__13CGameDataUsedFPc_0x1984b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRoboSoundFileName__13CGameDataUsedFPc_0x1984b0");
#endif

    switch (ctx->pc) {
        case 0x1984d0u: goto label_1984d0;
        case 0x198504u: goto label_198504;
        case 0x198534u: goto label_198534;
        default: break;
    }

    ctx->pc = 0x1984b0u;

    // 0x1984b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1984b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1984b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1984b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1984b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1984b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1984bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1984bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1984c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1984c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984c4: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x1984c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1984c8: 0xc065714  jal         func_195C50
    ctx->pc = 0x1984C8u;
    SET_GPR_U32(ctx, 31, 0x1984D0u);
    ctx->pc = 0x1984CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1984C8u;
            // 0x1984cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C50u;
    if (runtime->hasFunction(0x195C50u)) {
        auto targetFn = runtime->lookupFunction(0x195C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984D0u; }
        if (ctx->pc != 0x1984D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboPartInfoData__Fi_0x195c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984D0u; }
        if (ctx->pc != 0x1984D0u) { return; }
    }
    ctx->pc = 0x1984D0u;
label_1984d0:
    // 0x1984d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1984d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984d4: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1984D4u;
    {
        const bool branch_taken_0x1984d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1984d4) {
            ctx->pc = 0x198534u;
            goto label_198534;
        }
    }
    ctx->pc = 0x1984DCu;
    // 0x1984dc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1984DCu;
    {
        const bool branch_taken_0x1984dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1984dc) {
            ctx->pc = 0x1984ECu;
            goto label_1984ec;
        }
    }
    ctx->pc = 0x1984E4u;
    // 0x1984e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1984E4u;
    {
        const bool branch_taken_0x1984e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1984E4u;
            // 0x1984e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984e4) {
            ctx->pc = 0x198538u;
            goto label_198538;
        }
    }
    ctx->pc = 0x1984ECu;
label_1984ec:
    // 0x1984ec: 0x82250004  lb          $a1, 0x4($s1)
    ctx->pc = 0x1984ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1984f0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1984f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1984f4: 0x14a3000f  bne         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1984F4u;
    {
        const bool branch_taken_0x1984f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1984f4) {
            ctx->pc = 0x198534u;
            goto label_198534;
        }
    }
    ctx->pc = 0x1984FCu;
    // 0x1984fc: 0xc0651a4  jal         func_194690
    ctx->pc = 0x1984FCu;
    SET_GPR_U32(ctx, 31, 0x198504u);
    ctx->pc = 0x194690u;
    if (runtime->hasFunction(0x194690u)) {
        auto targetFn = runtime->lookupFunction(0x194690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198504u; }
        if (ctx->pc != 0x198504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOffsetNo__13CDataRoboPartFv_0x194690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198504u; }
        if (ctx->pc != 0x198504u) { return; }
    }
    ctx->pc = 0x198504u;
label_198504:
    // 0x198504: 0x24460027  addiu       $a2, $v0, 0x27
    ctx->pc = 0x198504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x198508: 0x28c20028  slti        $v0, $a2, 0x28
    ctx->pc = 0x198508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x19850c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19850Cu;
    {
        const bool branch_taken_0x19850c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19850c) {
            ctx->pc = 0x198520u;
            goto label_198520;
        }
    }
    ctx->pc = 0x198514u;
    // 0x198514: 0x28c10033  slti        $at, $a2, 0x33
    ctx->pc = 0x198514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x198518: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x198518u;
    {
        const bool branch_taken_0x198518 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x198518) {
            ctx->pc = 0x198524u;
            goto label_198524;
        }
    }
    ctx->pc = 0x198520u;
label_198520:
    // 0x198520: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x198520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_198524:
    // 0x198524: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x198524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x198528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19852c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x19852Cu;
    SET_GPR_U32(ctx, 31, 0x198534u);
    ctx->pc = 0x198530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19852Cu;
            // 0x198530: 0x24a55948  addiu       $a1, $a1, 0x5948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198534u; }
        if (ctx->pc != 0x198534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198534u; }
        if (ctx->pc != 0x198534u) { return; }
    }
    ctx->pc = 0x198534u;
label_198534:
    // 0x198534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198538:
    // 0x198538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19853c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19853cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198540: 0x3e00008  jr          $ra
    ctx->pc = 0x198540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198540u;
            // 0x198544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198548u;
}
