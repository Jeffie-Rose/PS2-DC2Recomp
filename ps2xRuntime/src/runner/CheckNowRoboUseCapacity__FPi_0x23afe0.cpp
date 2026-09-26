#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckNowRoboUseCapacity__FPi
// Address: 0x23afe0 - 0x23b048
void CheckNowRoboUseCapacity__FPi_0x23afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckNowRoboUseCapacity__FPi_0x23afe0");
#endif

    switch (ctx->pc) {
        case 0x23b004u: goto label_23b004;
        case 0x23b020u: goto label_23b020;
        default: break;
    }

    ctx->pc = 0x23afe0u;

    // 0x23afe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23afe4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23afe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23afe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23afe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23afec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23afecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23aff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23aff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aff4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23aff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23aff8: 0x8c24d8c8  lw          $a0, -0x2738($at)
    ctx->pc = 0x23aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23affc: 0xc065c00  jal         func_197000
    ctx->pc = 0x23AFFCu;
    SET_GPR_U32(ctx, 31, 0x23B004u);
    ctx->pc = 0x23B000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFFCu;
            // 0x23b000: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197000u;
    if (runtime->hasFunction(0x197000u)) {
        auto targetFn = runtime->lookupFunction(0x197000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B004u; }
        if (ctx->pc != 0x23B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowRoboUseCapacity__FP9ROBO_DATAPi_0x197000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B004u; }
        if (ctx->pc != 0x23B004u) { return; }
    }
    ctx->pc = 0x23B004u;
label_23b004:
    // 0x23b004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23b004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b008: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23b008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b00c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B00Cu;
    {
        const bool branch_taken_0x23b00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B00Cu;
            // 0x23b010: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b00c) {
            ctx->pc = 0x23B034u;
            goto label_23b034;
        }
    }
    ctx->pc = 0x23B014u;
    // 0x23b014: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23b018: 0xc06570c  jal         func_195C30
    ctx->pc = 0x23B018u;
    SET_GPR_U32(ctx, 31, 0x23B020u);
    ctx->pc = 0x23B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B018u;
            // 0x23b01c: 0x844400c2  lh          $a0, 0xC2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C30u;
    if (runtime->hasFunction(0x195C30u)) {
        auto targetFn = runtime->lookupFunction(0x195C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B020u; }
        if (ctx->pc != 0x23B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemInfoData__Fi_0x195c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B020u; }
        if (ctx->pc != 0x23B020u) { return; }
    }
    ctx->pc = 0x23B020u;
label_23b020:
    // 0x23b020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B020u;
    {
        const bool branch_taken_0x23b020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b020) {
            ctx->pc = 0x23B030u;
            goto label_23b030;
        }
    }
    ctx->pc = 0x23B028u;
    // 0x23b028: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x23b028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x23b02c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23b030:
    // 0x23b030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b034:
    // 0x23b034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b040: 0x3e00008  jr          $ra
    ctx->pc = 0x23B040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B040u;
            // 0x23b044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B048u;
}
