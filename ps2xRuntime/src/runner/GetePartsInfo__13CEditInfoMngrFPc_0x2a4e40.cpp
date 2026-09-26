#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePartsInfo__13CEditInfoMngrFPc
// Address: 0x2a4e40 - 0x2a4ec4
void GetePartsInfo__13CEditInfoMngrFPc_0x2a4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePartsInfo__13CEditInfoMngrFPc_0x2a4e40");
#endif

    switch (ctx->pc) {
        case 0x2a4e6cu: goto label_2a4e6c;
        case 0x2a4e80u: goto label_2a4e80;
        default: break;
    }

    ctx->pc = 0x2a4e40u;

    // 0x2a4e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a4e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a4e44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a4e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a4e48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a4e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a4e4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a4e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a4e50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a4e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a4e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a4e58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a4e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a4e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a4e60: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x2a4e60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4e64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A4E64u;
    {
        const bool branch_taken_0x2a4e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E64u;
            // 0x2a4e68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e64) {
            ctx->pc = 0x2A4E98u;
            goto label_2a4e98;
        }
    }
    ctx->pc = 0x2A4E6Cu;
label_2a4e6c:
    // 0x2a4e6c: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x2a4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2a4e70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4E70u;
    {
        const bool branch_taken_0x2a4e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E70u;
            // 0x2a4e74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e70) {
            ctx->pc = 0x2A4E90u;
            goto label_2a4e90;
        }
    }
    ctx->pc = 0x2A4E78u;
    // 0x2a4e78: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2A4E78u;
    SET_GPR_U32(ctx, 31, 0x2A4E80u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4E80u; }
        if (ctx->pc != 0x2A4E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4E80u; }
        if (ctx->pc != 0x2A4E80u) { return; }
    }
    ctx->pc = 0x2A4E80u;
label_2a4e80:
    // 0x2a4e80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4E80u;
    {
        const bool branch_taken_0x2a4e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E80u;
            // 0x2a4e84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e80) {
            ctx->pc = 0x2A4E90u;
            goto label_2a4e90;
        }
    }
    ctx->pc = 0x2A4E88u;
    // 0x2a4e88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4E88u;
    {
        const bool branch_taken_0x2a4e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E88u;
            // 0x2a4e8c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e88) {
            ctx->pc = 0x2A4EACu;
            goto label_2a4eac;
        }
    }
    ctx->pc = 0x2A4E90u;
label_2a4e90:
    // 0x2a4e90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a4e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a4e94: 0x26310280  addiu       $s1, $s1, 0x280
    ctx->pc = 0x2a4e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
label_2a4e98:
    // 0x2a4e98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a4e9c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2a4e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4ea0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A4EA0u;
    {
        const bool branch_taken_0x2a4ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4EA0u;
            // 0x2a4ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ea0) {
            ctx->pc = 0x2A4E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4e6c;
        }
    }
    ctx->pc = 0x2A4EA8u;
    // 0x2a4ea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a4ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4eac:
    // 0x2a4eac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a4eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4eb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a4eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4eb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a4eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a4eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4EBCu;
            // 0x2a4ec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4EC4u;
}
