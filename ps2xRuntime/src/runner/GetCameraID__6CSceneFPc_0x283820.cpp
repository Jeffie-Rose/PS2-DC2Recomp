#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraID__6CSceneFPc
// Address: 0x283820 - 0x2838bc
void GetCameraID__6CSceneFPc_0x283820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraID__6CSceneFPc_0x283820");
#endif

    switch (ctx->pc) {
        case 0x283850u: goto label_283850;
        case 0x283858u: goto label_283858;
        case 0x28387cu: goto label_28387c;
        default: break;
    }

    ctx->pc = 0x283820u;

    // 0x283820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x283824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x283828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x283828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28382c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x283830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283834: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x283834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283838: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283838u;
    {
        const bool branch_taken_0x283838 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28383Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283838u;
            // 0x28383c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283838) {
            ctx->pc = 0x283848u;
            goto label_283848;
        }
    }
    ctx->pc = 0x283840u;
    // 0x283840: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x283840u;
    {
        const bool branch_taken_0x283840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283840u;
            // 0x283844: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283840) {
            ctx->pc = 0x2838A4u;
            goto label_2838a4;
        }
    }
    ctx->pc = 0x283848u;
label_283848:
    // 0x283848: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x283848u;
    {
        const bool branch_taken_0x283848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283848u;
            // 0x28384c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283848) {
            ctx->pc = 0x283890u;
            goto label_283890;
        }
    }
    ctx->pc = 0x283850u;
label_283850:
    // 0x283850: 0xc0a0d00  jal         func_283400
    ctx->pc = 0x283850u;
    SET_GPR_U32(ctx, 31, 0x283858u);
    ctx->pc = 0x283854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283850u;
            // 0x283854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283400u;
    if (runtime->hasFunction(0x283400u)) {
        auto targetFn = runtime->lookupFunction(0x283400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283858u; }
        if (ctx->pc != 0x283858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCamera__6CSceneFi_0x283400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283858u; }
        if (ctx->pc != 0x283858u) { return; }
    }
    ctx->pc = 0x283858u;
label_283858:
    // 0x283858: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x283858u;
    {
        const bool branch_taken_0x283858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283858) {
            ctx->pc = 0x28388Cu;
            goto label_28388c;
        }
    }
    ctx->pc = 0x283860u;
    // 0x283860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x283860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283864: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x283864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x283868: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x283868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28386c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28386Cu;
    {
        const bool branch_taken_0x28386c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28386Cu;
            // 0x283870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28386c) {
            ctx->pc = 0x28388Cu;
            goto label_28388c;
        }
    }
    ctx->pc = 0x283874u;
    // 0x283874: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x283874u;
    SET_GPR_U32(ctx, 31, 0x28387Cu);
    ctx->pc = 0x283878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283874u;
            // 0x283878: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28387Cu; }
        if (ctx->pc != 0x28387Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28387Cu; }
        if (ctx->pc != 0x28387Cu) { return; }
    }
    ctx->pc = 0x28387Cu;
label_28387c:
    // 0x28387c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28387Cu;
    {
        const bool branch_taken_0x28387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28387Cu;
            // 0x283880: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28387c) {
            ctx->pc = 0x28388Cu;
            goto label_28388c;
        }
    }
    ctx->pc = 0x283884u;
    // 0x283884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283884u;
    {
        const bool branch_taken_0x283884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283884u;
            // 0x283888: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283884) {
            ctx->pc = 0x2838A8u;
            goto label_2838a8;
        }
    }
    ctx->pc = 0x28388Cu;
label_28388c:
    // 0x28388c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28388cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_283890:
    // 0x283890: 0x8e422044  lw          $v0, 0x2044($s2)
    ctx->pc = 0x283890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8260)));
    // 0x283894: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x283894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283898: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x283898u;
    {
        const bool branch_taken_0x283898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283898u;
            // 0x28389c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283898) {
            ctx->pc = 0x283850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283850;
        }
    }
    ctx->pc = 0x2838A0u;
    // 0x2838a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2838a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2838a4:
    // 0x2838a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2838a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2838a8:
    // 0x2838a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2838a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2838ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2838acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2838b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2838b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2838b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2838B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2838B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2838B4u;
            // 0x2838b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2838BCu;
}
