#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapFIX_EPARTS__FP9SPI_STACKi
// Address: 0x1b48b0 - 0x1b494c
void emapFIX_EPARTS__FP9SPI_STACKi_0x1b48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapFIX_EPARTS__FP9SPI_STACKi_0x1b48b0");
#endif

    switch (ctx->pc) {
        case 0x1b4908u: goto label_1b4908;
        case 0x1b4918u: goto label_1b4918;
        case 0x1b4924u: goto label_1b4924;
        default: break;
    }

    ctx->pc = 0x1b48b0u;

    // 0x1b48b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b48b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b48b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b48b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b48b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b48b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b48bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b48bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b48c0: 0x8f838d40  lw          $v1, -0x72C0($gp)
    ctx->pc = 0x1b48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x1b48c4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B48C4u;
    {
        const bool branch_taken_0x1b48c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B48C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48C4u;
            // 0x1b48c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48c4) {
            ctx->pc = 0x1B48E0u;
            goto label_1b48e0;
        }
    }
    ctx->pc = 0x1B48CCu;
    // 0x1b48cc: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1b48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x1b48d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b48d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b48d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B48D4u;
    {
        const bool branch_taken_0x1b48d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b48d4) {
            ctx->pc = 0x1B48E8u;
            goto label_1b48e8;
        }
    }
    ctx->pc = 0x1B48DCu;
    // 0x1b48dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b48dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b48e0:
    // 0x1b48e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B48E0u;
    {
        const bool branch_taken_0x1b48e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48E0u;
            // 0x1b48e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48e0) {
            ctx->pc = 0x1B493Cu;
            goto label_1b493c;
        }
    }
    ctx->pc = 0x1B48E8u;
label_1b48e8:
    // 0x1b48e8: 0x8f858d48  lw          $a1, -0x72B8($gp)
    ctx->pc = 0x1b48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x1b48ec: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B48ECu;
    {
        const bool branch_taken_0x1b48ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B48F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48ECu;
            // 0x1b48f0: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48ec) {
            ctx->pc = 0x1B48FCu;
            goto label_1b48fc;
        }
    }
    ctx->pc = 0x1B48F4u;
    // 0x1b48f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B48F4u;
    {
        const bool branch_taken_0x1b48f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48F4u;
            // 0x1b48f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48f4) {
            ctx->pc = 0x1B4938u;
            goto label_1b4938;
        }
    }
    ctx->pc = 0x1B48FCu;
label_1b48fc:
    // 0x1b48fc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1b48fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b4900: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1B4900u;
    SET_GPR_U32(ctx, 31, 0x1B4908u);
    ctx->pc = 0x1B4904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4900u;
            // 0x1b4904: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4908u; }
        if (ctx->pc != 0x1B4908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4908u; }
        if (ctx->pc != 0x1B4908u) { return; }
    }
    ctx->pc = 0x1B4908u;
label_1b4908:
    // 0x1b4908: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b4908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b490c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b4910: 0xc051928  jal         func_1464A0
    ctx->pc = 0x1B4910u;
    SET_GPR_U32(ctx, 31, 0x1B4918u);
    ctx->pc = 0x1B4914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4910u;
            // 0x1b4914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4918u; }
        if (ctx->pc != 0x1B4918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4918u; }
        if (ctx->pc != 0x1B4918u) { return; }
    }
    ctx->pc = 0x1B4918u;
label_1b4918:
    // 0x1b4918: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x1b4918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1b491c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1B491Cu;
    SET_GPR_U32(ctx, 31, 0x1B4924u);
    ctx->pc = 0x1B4920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B491Cu;
            // 0x1b4920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4924u; }
        if (ctx->pc != 0x1B4924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4924u; }
        if (ctx->pc != 0x1B4924u) { return; }
    }
    ctx->pc = 0x1B4924u;
label_1b4924:
    // 0x1b4924: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b4924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1b4928: 0x8f838d40  lw          $v1, -0x72C0($gp)
    ctx->pc = 0x1b4928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x1b492c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4930: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b4930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b4934: 0xaf838d40  sw          $v1, -0x72C0($gp)
    ctx->pc = 0x1b4934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937920), GPR_U32(ctx, 3));
label_1b4938:
    // 0x1b4938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b493c:
    // 0x1b493c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b493cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4944: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4944u;
            // 0x1b4948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B494Cu;
}
