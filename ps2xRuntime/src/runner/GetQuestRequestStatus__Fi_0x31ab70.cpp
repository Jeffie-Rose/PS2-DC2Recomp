#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetQuestRequestStatus__Fi
// Address: 0x31ab70 - 0x31abd8
void GetQuestRequestStatus__Fi_0x31ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetQuestRequestStatus__Fi_0x31ab70");
#endif

    switch (ctx->pc) {
        case 0x31ab84u: goto label_31ab84;
        case 0x31ab9cu: goto label_31ab9c;
        default: break;
    }

    ctx->pc = 0x31ab70u;

    // 0x31ab70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ab74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31ab78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ab7c: 0xc0c69ec  jal         func_31A7B0
    ctx->pc = 0x31AB7Cu;
    SET_GPR_U32(ctx, 31, 0x31AB84u);
    ctx->pc = 0x31AB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB7Cu;
            // 0x31ab80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A7B0u;
    if (runtime->hasFunction(0x31A7B0u)) {
        auto targetFn = runtime->lookupFunction(0x31A7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB84u; }
        if (ctx->pc != 0x31AB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetQuestData__Fv_0x31a7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB84u; }
        if (ctx->pc != 0x31AB84u) { return; }
    }
    ctx->pc = 0x31AB84u;
label_31ab84:
    // 0x31ab84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AB84u;
    {
        const bool branch_taken_0x31ab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB84u;
            // 0x31ab88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab84) {
            ctx->pc = 0x31AB94u;
            goto label_31ab94;
        }
    }
    ctx->pc = 0x31AB8Cu;
    // 0x31ab8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31AB8Cu;
    {
        const bool branch_taken_0x31ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB8Cu;
            // 0x31ab90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab8c) {
            ctx->pc = 0x31ABC8u;
            goto label_31abc8;
        }
    }
    ctx->pc = 0x31AB94u;
label_31ab94:
    // 0x31ab94: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x31AB94u;
    SET_GPR_U32(ctx, 31, 0x31AB9Cu);
    ctx->pc = 0x31AB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB94u;
            // 0x31ab98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AAB0u;
    if (runtime->hasFunction(0x31AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x31AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB9Cu; }
        if (ctx->pc != 0x31AB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayQuestData__10CQuestDataFi_0x31aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB9Cu; }
        if (ctx->pc != 0x31AB9Cu) { return; }
    }
    ctx->pc = 0x31AB9Cu;
label_31ab9c:
    // 0x31ab9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AB9Cu;
    {
        const bool branch_taken_0x31ab9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ab9c) {
            ctx->pc = 0x31ABACu;
            goto label_31abac;
        }
    }
    ctx->pc = 0x31ABA4u;
    // 0x31aba4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31ABA4u;
    {
        const bool branch_taken_0x31aba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ABA4u;
            // 0x31aba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aba4) {
            ctx->pc = 0x31ABC8u;
            goto label_31abc8;
        }
    }
    ctx->pc = 0x31ABACu;
label_31abac:
    // 0x31abac: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x31abacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x31abb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ABB0u;
    {
        const bool branch_taken_0x31abb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31abb0) {
            ctx->pc = 0x31ABC0u;
            goto label_31abc0;
        }
    }
    ctx->pc = 0x31ABB8u;
    // 0x31abb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31ABB8u;
    {
        const bool branch_taken_0x31abb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ABB8u;
            // 0x31abbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abb8) {
            ctx->pc = 0x31ABC8u;
            goto label_31abc8;
        }
    }
    ctx->pc = 0x31ABC0u;
label_31abc0:
    // 0x31abc0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x31abc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31abc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31abc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31abc8:
    // 0x31abc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31abc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31abcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31abccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31abd0: 0x3e00008  jr          $ra
    ctx->pc = 0x31ABD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ABD0u;
            // 0x31abd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31ABD8u;
}
