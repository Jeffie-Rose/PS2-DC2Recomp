#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePartsInfoAtType__13CEditInfoMngrFi
// Address: 0x2a4f40 - 0x2a4fbc
void GetePartsInfoAtType__13CEditInfoMngrFi_0x2a4f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePartsInfoAtType__13CEditInfoMngrFi_0x2a4f40");
#endif

    switch (ctx->pc) {
        case 0x2a4f6cu: goto label_2a4f6c;
        case 0x2a4f74u: goto label_2a4f74;
        default: break;
    }

    ctx->pc = 0x2a4f40u;

    // 0x2a4f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a4f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a4f44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a4f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a4f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a4f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a4f4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a4f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a4f50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a4f50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a4f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a4f58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a4f58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a4f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a4f60: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x2a4f60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4f64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4F64u;
    {
        const bool branch_taken_0x2a4f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4F64u;
            // 0x2a4f68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f64) {
            ctx->pc = 0x2A4F8Cu;
            goto label_2a4f8c;
        }
    }
    ctx->pc = 0x2A4F6Cu;
label_2a4f6c:
    // 0x2a4f6c: 0xc06d58c  jal         func_1B5630
    ctx->pc = 0x2A4F6Cu;
    SET_GPR_U32(ctx, 31, 0x2A4F74u);
    ctx->pc = 0x2A4F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4F6Cu;
            // 0x2a4f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5630u;
    if (runtime->hasFunction(0x1B5630u)) {
        auto targetFn = runtime->lookupFunction(0x1B5630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4F74u; }
        if (ctx->pc != 0x2A4F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsType__14CEditPartsInfoFv_0x1b5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4F74u; }
        if (ctx->pc != 0x2A4F74u) { return; }
    }
    ctx->pc = 0x2A4F74u;
label_2a4f74:
    // 0x2a4f74: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4F74u;
    {
        const bool branch_taken_0x2a4f74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4F74u;
            // 0x2a4f78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f74) {
            ctx->pc = 0x2A4F84u;
            goto label_2a4f84;
        }
    }
    ctx->pc = 0x2A4F7Cu;
    // 0x2a4f7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4F7Cu;
    {
        const bool branch_taken_0x2a4f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4F7Cu;
            // 0x2a4f80: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f7c) {
            ctx->pc = 0x2A4FA4u;
            goto label_2a4fa4;
        }
    }
    ctx->pc = 0x2A4F84u;
label_2a4f84:
    // 0x2a4f84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a4f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a4f88: 0x26310280  addiu       $s1, $s1, 0x280
    ctx->pc = 0x2a4f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
label_2a4f8c:
    // 0x2a4f8c: 0x0  nop
    ctx->pc = 0x2a4f8cu;
    // NOP
    // 0x2a4f90: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a4f94: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2a4f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4f98: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A4F98u;
    {
        const bool branch_taken_0x2a4f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4F98u;
            // 0x2a4f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f98) {
            ctx->pc = 0x2A4F6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4f6c;
        }
    }
    ctx->pc = 0x2A4FA0u;
    // 0x2a4fa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a4fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4fa4:
    // 0x2a4fa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a4fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4fa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a4fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4fac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a4facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a4fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4FB4u;
            // 0x2a4fb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4FBCu;
}
