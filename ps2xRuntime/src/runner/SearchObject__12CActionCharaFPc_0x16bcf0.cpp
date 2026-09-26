#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchObject__12CActionCharaFPc
// Address: 0x16bcf0 - 0x16bd60
void SearchObject__12CActionCharaFPc_0x16bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchObject__12CActionCharaFPc_0x16bcf0");
#endif

    switch (ctx->pc) {
        case 0x16bd0cu: goto label_16bd0c;
        case 0x16bd28u: goto label_16bd28;
        default: break;
    }

    ctx->pc = 0x16bcf0u;

    // 0x16bcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bcf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16bcf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bcfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bd00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16bd00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd04: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16BD04u;
    {
        const bool branch_taken_0x16bd04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD04u;
            // 0x16bd08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd04) {
            ctx->pc = 0x16BD48u;
            goto label_16bd48;
        }
    }
    ctx->pc = 0x16BD0Cu;
label_16bd0c:
    // 0x16bd0c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x16bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x16bd10: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BD10u;
    {
        const bool branch_taken_0x16bd10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bd10) {
            ctx->pc = 0x16BD20u;
            goto label_16bd20;
        }
    }
    ctx->pc = 0x16BD18u;
    // 0x16bd18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16BD18u;
    {
        const bool branch_taken_0x16bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD18u;
            // 0x16bd1c: 0x8e100678  lw          $s0, 0x678($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd18) {
            ctx->pc = 0x16BD40u;
            goto label_16bd40;
        }
    }
    ctx->pc = 0x16BD20u;
label_16bd20:
    // 0x16bd20: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x16BD20u;
    SET_GPR_U32(ctx, 31, 0x16BD28u);
    ctx->pc = 0x16BD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD20u;
            // 0x16bd24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD28u; }
        if (ctx->pc != 0x16BD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD28u; }
        if (ctx->pc != 0x16BD28u) { return; }
    }
    ctx->pc = 0x16BD28u;
label_16bd28:
    // 0x16bd28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BD28u;
    {
        const bool branch_taken_0x16bd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd28) {
            ctx->pc = 0x16BD38u;
            goto label_16bd38;
        }
    }
    ctx->pc = 0x16BD30u;
    // 0x16bd30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16BD30u;
    {
        const bool branch_taken_0x16bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD30u;
            // 0x16bd34: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd30) {
            ctx->pc = 0x16BD50u;
            goto label_16bd50;
        }
    }
    ctx->pc = 0x16BD38u;
label_16bd38:
    // 0x16bd38: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16bd38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16bd3c: 0x0  nop
    ctx->pc = 0x16bd3cu;
    // NOP
label_16bd40:
    // 0x16bd40: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x16BD40u;
    {
        const bool branch_taken_0x16bd40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bd40) {
            ctx->pc = 0x16BD0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16bd0c;
        }
    }
    ctx->pc = 0x16BD48u;
label_16bd48:
    // 0x16bd48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16bd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16bd50:
    // 0x16bd50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bd54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd58: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD58u;
            // 0x16bd5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BD60u;
}
