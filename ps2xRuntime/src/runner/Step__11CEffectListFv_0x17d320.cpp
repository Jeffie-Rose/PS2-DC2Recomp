#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CEffectListFv
// Address: 0x17d320 - 0x17d390
void Step__11CEffectListFv_0x17d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CEffectListFv_0x17d320");
#endif

    switch (ctx->pc) {
        case 0x17d344u: goto label_17d344;
        case 0x17d350u: goto label_17d350;
        case 0x17d360u: goto label_17d360;
        default: break;
    }

    ctx->pc = 0x17d320u;

    // 0x17d320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17d324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d330: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17d330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d338: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17d338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d33c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17D33Cu;
    {
        const bool branch_taken_0x17d33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D33Cu;
            // 0x17d340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d33c) {
            ctx->pc = 0x17D368u;
            goto label_17d368;
        }
    }
    ctx->pc = 0x17D344u;
label_17d344:
    // 0x17d344: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17d348: 0xc060af4  jal         func_182BD0
    ctx->pc = 0x17D348u;
    SET_GPR_U32(ctx, 31, 0x17D350u);
    ctx->pc = 0x17D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D348u;
            // 0x17d34c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD0u;
    if (runtime->hasFunction(0x182BD0u)) {
        auto targetFn = runtime->lookupFunction(0x182BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D350u; }
        if (ctx->pc != 0x17D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Ctrl__14CEffectManagerFv_0x182bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D350u; }
        if (ctx->pc != 0x17D350u) { return; }
    }
    ctx->pc = 0x17D350u;
label_17d350:
    // 0x17d350: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17d354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d358: 0xc060b3c  jal         func_182CF0
    ctx->pc = 0x17D358u;
    SET_GPR_U32(ctx, 31, 0x17D360u);
    ctx->pc = 0x17D35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D358u;
            // 0x17d35c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182CF0u;
    if (runtime->hasFunction(0x182CF0u)) {
        auto targetFn = runtime->lookupFunction(0x182CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D360u; }
        if (ctx->pc != 0x17D360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CEffectManagerFi_0x182cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D360u; }
        if (ctx->pc != 0x17D360u) { return; }
    }
    ctx->pc = 0x17D360u;
label_17d360:
    // 0x17d360: 0x26310184  addiu       $s1, $s1, 0x184
    ctx->pc = 0x17d360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
    // 0x17d364: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17d364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17d368:
    // 0x17d368: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x17d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17d36c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x17d36cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17d370: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x17D370u;
    {
        const bool branch_taken_0x17d370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d370) {
            ctx->pc = 0x17D344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d344;
        }
    }
    ctx->pc = 0x17D378u;
    // 0x17d378: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17d378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d37c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d388: 0x3e00008  jr          $ra
    ctx->pc = 0x17D388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D388u;
            // 0x17d38c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D390u;
}
