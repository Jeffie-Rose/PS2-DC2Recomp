#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHK_PAD_CTRL__FP12RS_STACKDATAi
// Address: 0x279050 - 0x2790a4
void ps2__CHK_PAD_CTRL__FP12RS_STACKDATAi_0x279050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHK_PAD_CTRL__FP12RS_STACKDATAi_0x279050");
#endif

    switch (ctx->pc) {
        case 0x279074u: goto label_279074;
        case 0x279084u: goto label_279084;
        case 0x279090u: goto label_279090;
        default: break;
    }

    ctx->pc = 0x279050u;

    // 0x279050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279054: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27905c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27905Cu;
    {
        const bool branch_taken_0x27905c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27905Cu;
            // 0x279060: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27905c) {
            ctx->pc = 0x27906Cu;
            goto label_27906c;
        }
    }
    ctx->pc = 0x279064u;
    // 0x279064: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x279064u;
    {
        const bool branch_taken_0x279064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279064u;
            // 0x279068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279064) {
            ctx->pc = 0x279094u;
            goto label_279094;
        }
    }
    ctx->pc = 0x27906Cu;
label_27906c:
    // 0x27906c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27906Cu;
    SET_GPR_U32(ctx, 31, 0x279074u);
    ctx->pc = 0x279070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27906Cu;
            // 0x279070: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279074u; }
        if (ctx->pc != 0x279074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279074u; }
        if (ctx->pc != 0x279074u) { return; }
    }
    ctx->pc = 0x279074u;
label_279074:
    // 0x279074: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x279074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x279078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x279078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27907c: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x27907Cu;
    SET_GPR_U32(ctx, 31, 0x279084u);
    ctx->pc = 0x279080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27907Cu;
            // 0x279080: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279084u; }
        if (ctx->pc != 0x279084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279084u; }
        if (ctx->pc != 0x279084u) { return; }
    }
    ctx->pc = 0x279084u;
label_279084:
    // 0x279084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279088: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x279088u;
    SET_GPR_U32(ctx, 31, 0x279090u);
    ctx->pc = 0x27908Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279088u;
            // 0x27908c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279090u; }
        if (ctx->pc != 0x279090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279090u; }
        if (ctx->pc != 0x279090u) { return; }
    }
    ctx->pc = 0x279090u;
label_279090:
    // 0x279090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279094:
    // 0x279094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27909c: 0x3e00008  jr          $ra
    ctx->pc = 0x27909Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2790A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27909Cu;
            // 0x2790a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2790A4u;
}
