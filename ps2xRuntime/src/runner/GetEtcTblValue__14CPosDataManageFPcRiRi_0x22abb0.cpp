#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEtcTblValue__14CPosDataManageFPcRiRi
// Address: 0x22abb0 - 0x22ac28
void GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0");
#endif

    switch (ctx->pc) {
        case 0x22abccu: goto label_22abcc;
        default: break;
    }

    ctx->pc = 0x22abb0u;

    // 0x22abb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22abb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22abb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22abb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22abbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22abc0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22abc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abc4: 0xc08aac8  jal         func_22AB20
    ctx->pc = 0x22ABC4u;
    SET_GPR_U32(ctx, 31, 0x22ABCCu);
    ctx->pc = 0x22ABC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABC4u;
            // 0x22abc8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AB20u;
    if (runtime->hasFunction(0x22AB20u)) {
        auto targetFn = runtime->lookupFunction(0x22AB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ABCCu; }
        if (ctx->pc != 0x22ABCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl__14CPosDataManageFPc_0x22ab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ABCCu; }
        if (ctx->pc != 0x22ABCCu) { return; }
    }
    ctx->pc = 0x22ABCCu;
label_22abcc:
    // 0x22abcc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22ABCCu;
    {
        const bool branch_taken_0x22abcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22abcc) {
            ctx->pc = 0x22ABF4u;
            goto label_22abf4;
        }
    }
    ctx->pc = 0x22ABD4u;
    // 0x22abd4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22ABD4u;
    {
        const bool branch_taken_0x22abd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abd4) {
            ctx->pc = 0x22ABE0u;
            goto label_22abe0;
        }
    }
    ctx->pc = 0x22ABDCu;
    // 0x22abdc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22abe0:
    // 0x22abe0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x22ABE0u;
    {
        const bool branch_taken_0x22abe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abe0) {
            ctx->pc = 0x22AC14u;
            goto label_22ac14;
        }
    }
    ctx->pc = 0x22ABE8u;
    // 0x22abe8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x22abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x22abec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22ABECu;
    {
        const bool branch_taken_0x22abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABECu;
            // 0x22abf0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abec) {
            ctx->pc = 0x22AC18u;
            goto label_22ac18;
        }
    }
    ctx->pc = 0x22ABF4u;
label_22abf4:
    // 0x22abf4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ABF4u;
    {
        const bool branch_taken_0x22abf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abf4) {
            ctx->pc = 0x22AC04u;
            goto label_22ac04;
        }
    }
    ctx->pc = 0x22ABFCu;
    // 0x22abfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22ac00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x22ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_22ac04:
    // 0x22ac04: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AC04u;
    {
        const bool branch_taken_0x22ac04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ac04) {
            ctx->pc = 0x22AC14u;
            goto label_22ac14;
        }
    }
    ctx->pc = 0x22AC0Cu;
    // 0x22ac0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22ac10: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_22ac14:
    // 0x22ac14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ac18:
    // 0x22ac18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ac18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ac1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ac1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ac20: 0x3e00008  jr          $ra
    ctx->pc = 0x22AC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC20u;
            // 0x22ac24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AC28u;
}
