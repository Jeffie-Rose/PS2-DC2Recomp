#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHAPTER__FP12RS_STACKDATAi
// Address: 0x26ab00 - 0x26ab4c
void ps2__GET_CHAPTER__FP12RS_STACKDATAi_0x26ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHAPTER__FP12RS_STACKDATAi_0x26ab00");
#endif

    switch (ctx->pc) {
        case 0x26ab14u: goto label_26ab14;
        case 0x26ab2cu: goto label_26ab2c;
        case 0x26ab38u: goto label_26ab38;
        default: break;
    }

    ctx->pc = 0x26ab00u;

    // 0x26ab00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ab04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ab08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ab0c: 0xc064220  jal         func_190880
    ctx->pc = 0x26AB0Cu;
    SET_GPR_U32(ctx, 31, 0x26AB14u);
    ctx->pc = 0x26AB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB0Cu;
            // 0x26ab10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB14u; }
        if (ctx->pc != 0x26AB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB14u; }
        if (ctx->pc != 0x26AB14u) { return; }
    }
    ctx->pc = 0x26AB14u;
label_26ab14:
    // 0x26ab14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AB14u;
    {
        const bool branch_taken_0x26ab14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB14u;
            // 0x26ab18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab14) {
            ctx->pc = 0x26AB24u;
            goto label_26ab24;
        }
    }
    ctx->pc = 0x26AB1Cu;
    // 0x26ab1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26AB1Cu;
    {
        const bool branch_taken_0x26ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB1Cu;
            // 0x26ab20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab1c) {
            ctx->pc = 0x26AB3Cu;
            goto label_26ab3c;
        }
    }
    ctx->pc = 0x26AB24u;
label_26ab24:
    // 0x26ab24: 0xc094414  jal         func_251050
    ctx->pc = 0x26AB24u;
    SET_GPR_U32(ctx, 31, 0x26AB2Cu);
    ctx->pc = 0x251050u;
    if (runtime->hasFunction(0x251050u)) {
        auto targetFn = runtime->lookupFunction(0x251050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB2Cu; }
        if (ctx->pc != 0x26AB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowChapter__FP9CSaveData_0x251050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB2Cu; }
        if (ctx->pc != 0x26AB2Cu) { return; }
    }
    ctx->pc = 0x26AB2Cu;
label_26ab2c:
    // 0x26ab2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab30: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26AB30u;
    SET_GPR_U32(ctx, 31, 0x26AB38u);
    ctx->pc = 0x26AB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB30u;
            // 0x26ab34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB38u; }
        if (ctx->pc != 0x26AB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB38u; }
        if (ctx->pc != 0x26AB38u) { return; }
    }
    ctx->pc = 0x26AB38u;
label_26ab38:
    // 0x26ab38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ab3c:
    // 0x26ab3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ab3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ab40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ab40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ab44: 0x3e00008  jr          $ra
    ctx->pc = 0x26AB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB44u;
            // 0x26ab48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AB4Cu;
}
