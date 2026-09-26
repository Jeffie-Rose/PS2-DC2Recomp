#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMotionID__FPc
// Address: 0x2ca770 - 0x2ca7f0
void GetMotionID__FPc_0x2ca770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMotionID__FPc_0x2ca770");
#endif

    switch (ctx->pc) {
        case 0x2ca7a0u: goto label_2ca7a0;
        case 0x2ca7a8u: goto label_2ca7a8;
        default: break;
    }

    ctx->pc = 0x2ca770u;

    // 0x2ca770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ca770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ca774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ca774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ca778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ca778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ca77c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca780: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ca780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca784: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA784u;
    {
        const bool branch_taken_0x2ca784 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA784u;
            // 0x2ca788: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca784) {
            ctx->pc = 0x2CA794u;
            goto label_2ca794;
        }
    }
    ctx->pc = 0x2CA78Cu;
    // 0x2ca78c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2CA78Cu;
    {
        const bool branch_taken_0x2ca78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA78Cu;
            // 0x2ca790: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca78c) {
            ctx->pc = 0x2CA7D8u;
            goto label_2ca7d8;
        }
    }
    ctx->pc = 0x2CA794u;
label_2ca794:
    // 0x2ca794: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ca794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca798: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA798u;
    {
        const bool branch_taken_0x2ca798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA798u;
            // 0x2ca79c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca798) {
            ctx->pc = 0x2CA7C0u;
            goto label_2ca7c0;
        }
    }
    ctx->pc = 0x2CA7A0u;
label_2ca7a0:
    // 0x2ca7a0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2CA7A0u;
    SET_GPR_U32(ctx, 31, 0x2CA7A8u);
    ctx->pc = 0x2CA7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7A0u;
            // 0x2ca7a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7A8u; }
        if (ctx->pc != 0x2CA7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA7A8u; }
        if (ctx->pc != 0x2CA7A8u) { return; }
    }
    ctx->pc = 0x2CA7A8u;
label_2ca7a8:
    // 0x2ca7a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA7A8u;
    {
        const bool branch_taken_0x2ca7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7A8u;
            // 0x2ca7ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7a8) {
            ctx->pc = 0x2CA7B8u;
            goto label_2ca7b8;
        }
    }
    ctx->pc = 0x2CA7B0u;
    // 0x2ca7b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CA7B0u;
    {
        const bool branch_taken_0x2ca7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7B0u;
            // 0x2ca7b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7b0) {
            ctx->pc = 0x2CA7DCu;
            goto label_2ca7dc;
        }
    }
    ctx->pc = 0x2CA7B8u;
label_2ca7b8:
    // 0x2ca7b8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2ca7b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2ca7bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ca7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ca7c0:
    // 0x2ca7c0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2ca7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2ca7c4: 0x24425360  addiu       $v0, $v0, 0x5360
    ctx->pc = 0x2ca7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21344));
    // 0x2ca7c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ca7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ca7cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ca7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca7d0: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CA7D0u;
    {
        const bool branch_taken_0x2ca7d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7D0u;
            // 0x2ca7d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7d0) {
            ctx->pc = 0x2CA7A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca7a0;
        }
    }
    ctx->pc = 0x2CA7D8u;
label_2ca7d8:
    // 0x2ca7d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ca7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ca7dc:
    // 0x2ca7dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca7e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA7E8u;
            // 0x2ca7ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA7F0u;
}
