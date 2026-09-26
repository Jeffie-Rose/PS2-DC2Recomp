#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AllSeStop__11CLoopSeMngrFv
// Address: 0x18c900 - 0x18c9a4
void AllSeStop__11CLoopSeMngrFv_0x18c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllSeStop__11CLoopSeMngrFv_0x18c900");
#endif

    switch (ctx->pc) {
        case 0x18c930u: goto label_18c930;
        case 0x18c94cu: goto label_18c94c;
        case 0x18c95cu: goto label_18c95c;
        default: break;
    }

    ctx->pc = 0x18c900u;

    // 0x18c900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18c904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18c908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18c90c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c918: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18c918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c91c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18C91Cu;
    {
        const bool branch_taken_0x18c91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C91Cu;
            // 0x18c920: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c91c) {
            ctx->pc = 0x18C988u;
            goto label_18c988;
        }
    }
    ctx->pc = 0x18C924u;
    // 0x18c924: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18c924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c928: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18C928u;
    {
        const bool branch_taken_0x18c928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C928u;
            // 0x18c92c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c928) {
            ctx->pc = 0x18C978u;
            goto label_18c978;
        }
    }
    ctx->pc = 0x18C930u;
label_18c930:
    // 0x18c930: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x18c930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18c934: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x18c934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18c938: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18c938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c93c: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x18C93Cu;
    {
        const bool branch_taken_0x18c93c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18c93c) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C944u;
    // 0x18c944: 0xc063284  jal         func_18CA10
    ctx->pc = 0x18C944u;
    SET_GPR_U32(ctx, 31, 0x18C94Cu);
    ctx->pc = 0x18CA10u;
    if (runtime->hasFunction(0x18CA10u)) {
        auto targetFn = runtime->lookupFunction(0x18CA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C94Cu; }
        if (ctx->pc != 0x18C94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeNo__FUi_0x18ca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C94Cu; }
        if (ctx->pc != 0x18C94Cu) { return; }
    }
    ctx->pc = 0x18C94Cu;
label_18c94c:
    // 0x18c94c: 0x86660008  lh          $a2, 0x8($s3)
    ctx->pc = 0x18c94cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18c950: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c954: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x18C954u;
    SET_GPR_U32(ctx, 31, 0x18C95Cu);
    ctx->pc = 0x18C958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C954u;
            // 0x18c958: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C95Cu; }
        if (ctx->pc != 0x18C95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C95Cu; }
        if (ctx->pc != 0x18C95Cu) { return; }
    }
    ctx->pc = 0x18C95Cu;
label_18c95c:
    // 0x18c95c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x18c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18c960: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x18c960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x18c964: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x18c964u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x18c968: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x18c968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x18c96c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x18c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_18c970:
    // 0x18c970: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x18c970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x18c974: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18c974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18c978:
    // 0x18c978: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18c978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18c97c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x18c97cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c980: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18C980u;
    {
        const bool branch_taken_0x18c980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c980) {
            ctx->pc = 0x18C930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c930;
        }
    }
    ctx->pc = 0x18C988u;
label_18c988:
    // 0x18c988: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18c988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c98c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c98cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c990: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c994: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c99c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C99Cu;
            // 0x18c9a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C9A4u;
}
