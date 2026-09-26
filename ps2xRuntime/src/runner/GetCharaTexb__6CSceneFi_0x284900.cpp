#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaTexb__6CSceneFi
// Address: 0x284900 - 0x28498c
void GetCharaTexb__6CSceneFi_0x284900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaTexb__6CSceneFi_0x284900");
#endif

    switch (ctx->pc) {
        case 0x28491cu: goto label_28491c;
        default: break;
    }

    ctx->pc = 0x284900u;

    // 0x284900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28490c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x284910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284914: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x284914u;
    SET_GPR_U32(ctx, 31, 0x28491Cu);
    ctx->pc = 0x284918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284914u;
            // 0x284918: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28491Cu; }
        if (ctx->pc != 0x28491Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28491Cu; }
        if (ctx->pc != 0x28491Cu) { return; }
    }
    ctx->pc = 0x28491Cu;
label_28491c:
    // 0x28491c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28491Cu;
    {
        const bool branch_taken_0x28491c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28491c) {
            ctx->pc = 0x28492Cu;
            goto label_28492c;
        }
    }
    ctx->pc = 0x284924u;
    // 0x284924: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x284924u;
    {
        const bool branch_taken_0x284924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284924u;
            // 0x284928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284924) {
            ctx->pc = 0x284978u;
            goto label_284978;
        }
    }
    ctx->pc = 0x28492Cu;
label_28492c:
    // 0x28492c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x28492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x284930: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284930u;
    {
        const bool branch_taken_0x284930 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x284934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284930u;
            // 0x284934: 0x2a010008  slti        $at, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284930) {
            ctx->pc = 0x284940u;
            goto label_284940;
        }
    }
    ctx->pc = 0x284938u;
    // 0x284938: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x284938u;
    {
        const bool branch_taken_0x284938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284938u;
            // 0x28493c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284938) {
            ctx->pc = 0x28497Cu;
            goto label_28497c;
        }
    }
    ctx->pc = 0x284940u;
label_284940:
    // 0x284940: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x284940u;
    {
        const bool branch_taken_0x284940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x284940) {
            ctx->pc = 0x284950u;
            goto label_284950;
        }
    }
    ctx->pc = 0x284948u;
    // 0x284948: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x284948u;
    {
        const bool branch_taken_0x284948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284948u;
            // 0x28494c: 0x8e222e70  lw          $v0, 0x2E70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284948) {
            ctx->pc = 0x284978u;
            goto label_284978;
        }
    }
    ctx->pc = 0x284950u;
label_284950:
    // 0x284950: 0x8e222e78  lw          $v0, 0x2E78($s1)
    ctx->pc = 0x284950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11896)));
    // 0x284954: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x284954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x284958: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x284958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28495c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28495Cu;
    {
        const bool branch_taken_0x28495c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28495Cu;
            // 0x284960: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28495c) {
            ctx->pc = 0x28496Cu;
            goto label_28496c;
        }
    }
    ctx->pc = 0x284964u;
    // 0x284964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x284964u;
    {
        const bool branch_taken_0x284964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284964) {
            ctx->pc = 0x284978u;
            goto label_284978;
        }
    }
    ctx->pc = 0x28496Cu;
label_28496c:
    // 0x28496c: 0x8e222e74  lw          $v0, 0x2E74($s1)
    ctx->pc = 0x28496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11892)));
    // 0x284970: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x284970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x284974: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x284974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_284978:
    // 0x284978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x284978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28497c:
    // 0x28497c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28497cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284984: 0x3e00008  jr          $ra
    ctx->pc = 0x284984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284984u;
            // 0x284988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28498Cu;
}
