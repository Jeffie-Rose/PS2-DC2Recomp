#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BIT_FLAG__FP12RS_STACKDATAi
// Address: 0x1e7350 - 0x1e73a4
void ps2__SET_BIT_FLAG__FP12RS_STACKDATAi_0x1e7350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BIT_FLAG__FP12RS_STACKDATAi_0x1e7350");
#endif

    switch (ctx->pc) {
        case 0x1e7374u: goto label_1e7374;
        case 0x1e7380u: goto label_1e7380;
        case 0x1e7390u: goto label_1e7390;
        default: break;
    }

    ctx->pc = 0x1e7350u;

    // 0x1e7350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e735c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E735Cu;
    {
        const bool branch_taken_0x1e735c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E735Cu;
            // 0x1e7360: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e735c) {
            ctx->pc = 0x1E736Cu;
            goto label_1e736c;
        }
    }
    ctx->pc = 0x1E7364u;
    // 0x1e7364: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E7364u;
    {
        const bool branch_taken_0x1e7364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7364u;
            // 0x1e7368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7364) {
            ctx->pc = 0x1E7394u;
            goto label_1e7394;
        }
    }
    ctx->pc = 0x1E736Cu;
label_1e736c:
    // 0x1e736c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E736Cu;
    SET_GPR_U32(ctx, 31, 0x1E7374u);
    ctx->pc = 0x1E7370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E736Cu;
            // 0x1e7370: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7374u; }
        if (ctx->pc != 0x1E7374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7374u; }
        if (ctx->pc != 0x1E7374u) { return; }
    }
    ctx->pc = 0x1E7374u;
label_1e7374:
    // 0x1e7374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7378: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7378u;
    SET_GPR_U32(ctx, 31, 0x1E7380u);
    ctx->pc = 0x1E737Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7378u;
            // 0x1e737c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7380u; }
        if (ctx->pc != 0x1E7380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7380u; }
        if (ctx->pc != 0x1E7380u) { return; }
    }
    ctx->pc = 0x1E7380u;
label_1e7380:
    // 0x1e7380: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1e7380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
    // 0x1e7384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7388: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x1E7388u;
    SET_GPR_U32(ctx, 31, 0x1E7390u);
    ctx->pc = 0x1E738Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7388u;
            // 0x1e738c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7390u; }
        if (ctx->pc != 0x1E7390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7390u; }
        if (ctx->pc != 0x1E7390u) { return; }
    }
    ctx->pc = 0x1E7390u;
label_1e7390:
    // 0x1e7390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7394:
    // 0x1e7394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e739c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E739Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E73A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E739Cu;
            // 0x1e73a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E73A4u;
}
