#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_QUESTION_GYOU__FP12RS_STACKDATAi
// Address: 0x26d340 - 0x26d398
void ps2__SET_MES_QUESTION_GYOU__FP12RS_STACKDATAi_0x26d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_QUESTION_GYOU__FP12RS_STACKDATAi_0x26d340");
#endif

    switch (ctx->pc) {
        case 0x26d358u: goto label_26d358;
        case 0x26d360u: goto label_26d360;
        case 0x26d37cu: goto label_26d37c;
        default: break;
    }

    ctx->pc = 0x26d340u;

    // 0x26d340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26d348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d34c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26d34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d350: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D350u;
    SET_GPR_U32(ctx, 31, 0x26D358u);
    ctx->pc = 0x26D354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D350u;
            // 0x26d354: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D358u; }
        if (ctx->pc != 0x26D358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D358u; }
        if (ctx->pc != 0x26D358u) { return; }
    }
    ctx->pc = 0x26D358u;
label_26d358:
    // 0x26d358: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D358u;
    SET_GPR_U32(ctx, 31, 0x26D360u);
    ctx->pc = 0x26D35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D358u;
            // 0x26d35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D360u; }
        if (ctx->pc != 0x26D360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D360u; }
        if (ctx->pc != 0x26D360u) { return; }
    }
    ctx->pc = 0x26D360u;
label_26d360:
    // 0x26d360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d364: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D364u;
    {
        const bool branch_taken_0x26d364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D364u;
            // 0x26d368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d364) {
            ctx->pc = 0x26D374u;
            goto label_26d374;
        }
    }
    ctx->pc = 0x26D36Cu;
    // 0x26d36c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26D36Cu;
    {
        const bool branch_taken_0x26d36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D36Cu;
            // 0x26d370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d36c) {
            ctx->pc = 0x26D384u;
            goto label_26d384;
        }
    }
    ctx->pc = 0x26D374u;
label_26d374:
    // 0x26d374: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D374u;
    SET_GPR_U32(ctx, 31, 0x26D37Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D37Cu; }
        if (ctx->pc != 0x26D37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D37Cu; }
        if (ctx->pc != 0x26D37Cu) { return; }
    }
    ctx->pc = 0x26D37Cu;
label_26d37c:
    // 0x26d37c: 0xae021b14  sw          $v0, 0x1B14($s0)
    ctx->pc = 0x26d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6932), GPR_U32(ctx, 2));
    // 0x26d380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d384:
    // 0x26d384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26d384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d390: 0x3e00008  jr          $ra
    ctx->pc = 0x26D390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D390u;
            // 0x26d394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D398u;
}
