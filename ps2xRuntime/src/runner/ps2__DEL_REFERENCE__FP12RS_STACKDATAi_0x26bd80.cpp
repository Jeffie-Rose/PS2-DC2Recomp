#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DEL_REFERENCE__FP12RS_STACKDATAi
// Address: 0x26bd80 - 0x26bdd4
void ps2__DEL_REFERENCE__FP12RS_STACKDATAi_0x26bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DEL_REFERENCE__FP12RS_STACKDATAi_0x26bd80");
#endif

    switch (ctx->pc) {
        case 0x26bd90u: goto label_26bd90;
        case 0x26bd98u: goto label_26bd98;
        case 0x26bdc4u: goto label_26bdc4;
        default: break;
    }

    ctx->pc = 0x26bd80u;

    // 0x26bd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bd84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bd88: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26BD88u;
    SET_GPR_U32(ctx, 31, 0x26BD90u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD90u; }
        if (ctx->pc != 0x26BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD90u; }
        if (ctx->pc != 0x26BD90u) { return; }
    }
    ctx->pc = 0x26BD90u;
label_26bd90:
    // 0x26bd90: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26BD90u;
    SET_GPR_U32(ctx, 31, 0x26BD98u);
    ctx->pc = 0x26BD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD90u;
            // 0x26bd94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD98u; }
        if (ctx->pc != 0x26BD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD98u; }
        if (ctx->pc != 0x26BD98u) { return; }
    }
    ctx->pc = 0x26BD98u;
label_26bd98:
    // 0x26bd98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BD98u;
    {
        const bool branch_taken_0x26bd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bd98) {
            ctx->pc = 0x26BDA8u;
            goto label_26bda8;
        }
    }
    ctx->pc = 0x26BDA0u;
    // 0x26bda0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26BDA0u;
    {
        const bool branch_taken_0x26bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDA0u;
            // 0x26bda4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bda0) {
            ctx->pc = 0x26BDC8u;
            goto label_26bdc8;
        }
    }
    ctx->pc = 0x26BDA8u;
label_26bda8:
    // 0x26bda8: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x26bda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x26bdac: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BDACu;
    {
        const bool branch_taken_0x26bdac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDACu;
            // 0x26bdb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdac) {
            ctx->pc = 0x26BDBCu;
            goto label_26bdbc;
        }
    }
    ctx->pc = 0x26BDB4u;
    // 0x26bdb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26BDB4u;
    {
        const bool branch_taken_0x26bdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDB4u;
            // 0x26bdb8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdb4) {
            ctx->pc = 0x26BDCCu;
            goto label_26bdcc;
        }
    }
    ctx->pc = 0x26BDBCu;
label_26bdbc:
    // 0x26bdbc: 0xc04db18  jal         func_136C60
    ctx->pc = 0x26BDBCu;
    SET_GPR_U32(ctx, 31, 0x26BDC4u);
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BDC4u; }
        if (ctx->pc != 0x26BDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BDC4u; }
        if (ctx->pc != 0x26BDC4u) { return; }
    }
    ctx->pc = 0x26BDC4u;
label_26bdc4:
    // 0x26bdc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bdc8:
    // 0x26bdc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26bdcc:
    // 0x26bdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x26BDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDCCu;
            // 0x26bdd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BDD4u;
}
