#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteCharaID__13CVillagerMngrFi
// Address: 0x2cd470 - 0x2cd4e4
void DeleteCharaID__13CVillagerMngrFi_0x2cd470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteCharaID__13CVillagerMngrFi_0x2cd470");
#endif

    switch (ctx->pc) {
        case 0x2cd49cu: goto label_2cd49c;
        case 0x2cd4b0u: goto label_2cd4b0;
        default: break;
    }

    ctx->pc = 0x2cd470u;

    // 0x2cd470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cd470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cd474: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cd474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cd478: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cd478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cd47c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cd47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cd480: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cd480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd488: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cd488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd48c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd494: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD494u;
    {
        const bool branch_taken_0x2cd494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD494u;
            // 0x2cd498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd494) {
            ctx->pc = 0x2CD4B8u;
            goto label_2cd4b8;
        }
    }
    ctx->pc = 0x2CD49Cu;
label_2cd49c:
    // 0x2cd49c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2cd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cd4a0: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD4A0u;
    {
        const bool branch_taken_0x2cd4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2cd4a0) {
            ctx->pc = 0x2CD4B0u;
            goto label_2cd4b0;
        }
    }
    ctx->pc = 0x2CD4A8u;
    // 0x2cd4a8: 0xc0b3444  jal         func_2CD110
    ctx->pc = 0x2CD4A8u;
    SET_GPR_U32(ctx, 31, 0x2CD4B0u);
    ctx->pc = 0x2CD4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD4A8u;
            // 0x2cd4ac: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD110u;
    if (runtime->hasFunction(0x2CD110u)) {
        auto targetFn = runtime->lookupFunction(0x2CD110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD4B0u; }
        if (ctx->pc != 0x2CD4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CVillagerDataFv_0x2cd110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD4B0u; }
        if (ctx->pc != 0x2CD4B0u) { return; }
    }
    ctx->pc = 0x2CD4B0u;
label_2cd4b0:
    // 0x2cd4b0: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x2cd4b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x2cd4b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cd4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cd4b8:
    // 0x2cd4b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cd4bc: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2cd4bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cd4c0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2CD4C0u;
    {
        const bool branch_taken_0x2cd4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD4C0u;
            // 0x2cd4c4: 0x2332021  addu        $a0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4c0) {
            ctx->pc = 0x2CD49Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd49c;
        }
    }
    ctx->pc = 0x2CD4C8u;
    // 0x2cd4c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cd4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd4cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cd4ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd4d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cd4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD4DCu;
            // 0x2cd4e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD4E4u;
}
