#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_PACK_FILE__FP12RS_STACKDATAi
// Address: 0x279d60 - 0x279da0
void ps2__LOAD_PACK_FILE__FP12RS_STACKDATAi_0x279d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_PACK_FILE__FP12RS_STACKDATAi_0x279d60");
#endif

    switch (ctx->pc) {
        case 0x279d70u: goto label_279d70;
        case 0x279d7cu: goto label_279d7c;
        default: break;
    }

    ctx->pc = 0x279d60u;

    // 0x279d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279d68: 0xc097e48  jal         func_25F920
    ctx->pc = 0x279D68u;
    SET_GPR_U32(ctx, 31, 0x279D70u);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D70u; }
        if (ctx->pc != 0x279D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D70u; }
        if (ctx->pc != 0x279D70u) { return; }
    }
    ctx->pc = 0x279D70u;
label_279d70:
    // 0x279d70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x279d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d74: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x279D74u;
    SET_GPR_U32(ctx, 31, 0x279D7Cu);
    ctx->pc = 0x279D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279D74u;
            // 0x279d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D7Cu; }
        if (ctx->pc != 0x279D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279D7Cu; }
        if (ctx->pc != 0x279D7Cu) { return; }
    }
    ctx->pc = 0x279D7Cu;
label_279d7c:
    // 0x279d7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279D7Cu;
    {
        const bool branch_taken_0x279d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D7Cu;
            // 0x279d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d7c) {
            ctx->pc = 0x279D8Cu;
            goto label_279d8c;
        }
    }
    ctx->pc = 0x279D84u;
    // 0x279d84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279D84u;
    {
        const bool branch_taken_0x279d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D84u;
            // 0x279d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d84) {
            ctx->pc = 0x279D94u;
            goto label_279d94;
        }
    }
    ctx->pc = 0x279D8Cu;
label_279d8c:
    // 0x279d8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x279d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x279d90: 0xac22e624  sw          $v0, -0x19DC($at)
    ctx->pc = 0x279d90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960676), GPR_U32(ctx, 2));
label_279d94:
    // 0x279d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279d98: 0x3e00008  jr          $ra
    ctx->pc = 0x279D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D98u;
            // 0x279d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279DA0u;
}
