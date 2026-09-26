#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MOVE_INTERIOR__FP12RS_STACKDATAi
// Address: 0x267040 - 0x2670cc
void ps2__MOVE_INTERIOR__FP12RS_STACKDATAi_0x267040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MOVE_INTERIOR__FP12RS_STACKDATAi_0x267040");
#endif

    switch (ctx->pc) {
        case 0x26705cu: goto label_26705c;
        case 0x267070u: goto label_267070;
        case 0x267080u: goto label_267080;
        case 0x267094u: goto label_267094;
        default: break;
    }

    ctx->pc = 0x267040u;

    // 0x267040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x267040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x267044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x267044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x267048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26704c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267050: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x267050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x267054: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267054u;
    SET_GPR_U32(ctx, 31, 0x26705Cu);
    ctx->pc = 0x267058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267054u;
            // 0x267058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26705Cu; }
        if (ctx->pc != 0x26705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26705Cu; }
        if (ctx->pc != 0x26705Cu) { return; }
    }
    ctx->pc = 0x26705Cu;
label_26705c:
    // 0x26705c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26705cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x267060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267064: 0xac22e494  sw          $v0, -0x1B6C($at)
    ctx->pc = 0x267064u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960276), GPR_U32(ctx, 2));
    // 0x267068: 0xc097e48  jal         func_25F920
    ctx->pc = 0x267068u;
    SET_GPR_U32(ctx, 31, 0x267070u);
    ctx->pc = 0x26706Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267068u;
            // 0x26706c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267070u; }
        if (ctx->pc != 0x267070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267070u; }
        if (ctx->pc != 0x267070u) { return; }
    }
    ctx->pc = 0x267070u;
label_267070:
    // 0x267070: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x267070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x267074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x267074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267078: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x267078u;
    SET_GPR_U32(ctx, 31, 0x267080u);
    ctx->pc = 0x26707Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267078u;
            // 0x26707c: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267080u; }
        if (ctx->pc != 0x267080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267080u; }
        if (ctx->pc != 0x267080u) { return; }
    }
    ctx->pc = 0x267080u;
label_267080:
    // 0x267080: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x267080u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x267084: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x267084u;
    {
        const bool branch_taken_0x267084 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x267088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267084u;
            // 0x267088: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267084) {
            ctx->pc = 0x2670A0u;
            goto label_2670a0;
        }
    }
    ctx->pc = 0x26708Cu;
    // 0x26708c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26708Cu;
    SET_GPR_U32(ctx, 31, 0x267094u);
    ctx->pc = 0x267090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26708Cu;
            // 0x267090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267094u; }
        if (ctx->pc != 0x267094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267094u; }
        if (ctx->pc != 0x267094u) { return; }
    }
    ctx->pc = 0x267094u;
label_267094:
    // 0x267094: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x267094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x267098: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267098u;
    {
        const bool branch_taken_0x267098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26709Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267098u;
            // 0x26709c: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267098) {
            ctx->pc = 0x2670A8u;
            goto label_2670a8;
        }
    }
    ctx->pc = 0x2670A0u;
label_2670a0:
    // 0x2670a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2670a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2670a4: 0xac22e4b8  sw          $v0, -0x1B48($at)
    ctx->pc = 0x2670a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
label_2670a8:
    // 0x2670a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2670a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2670ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2670acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2670b0: 0xac23e4fc  sw          $v1, -0x1B04($at)
    ctx->pc = 0x2670b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 3));
    // 0x2670b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2670b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2670b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2670b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2670bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2670bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2670c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2670c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2670c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2670C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2670C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2670C4u;
            // 0x2670c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2670CCu;
}
