#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDrawFrame__13CDynamicAnimeFi
// Address: 0x17aba0 - 0x17abe4
void GetDrawFrame__13CDynamicAnimeFi_0x17aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDrawFrame__13CDynamicAnimeFi_0x17aba0");
#endif

    switch (ctx->pc) {
        case 0x17abd8u: goto label_17abd8;
        default: break;
    }

    ctx->pc = 0x17aba0u;

    // 0x17aba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17aba4: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17ABA4u;
    {
        const bool branch_taken_0x17aba4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17ABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABA4u;
            // 0x17aba8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aba4) {
            ctx->pc = 0x17ABBCu;
            goto label_17abbc;
        }
    }
    ctx->pc = 0x17ABACu;
    // 0x17abac: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17abacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17abb0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17abb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17abb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17ABB4u;
    {
        const bool branch_taken_0x17abb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17abb4) {
            ctx->pc = 0x17ABC4u;
            goto label_17abc4;
        }
    }
    ctx->pc = 0x17ABBCu;
label_17abbc:
    // 0x17abbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17ABBCu;
    {
        const bool branch_taken_0x17abbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ABC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABBCu;
            // 0x17abc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abbc) {
            ctx->pc = 0x17ABD8u;
            goto label_17abd8;
        }
    }
    ctx->pc = 0x17ABC4u;
label_17abc4:
    // 0x17abc4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x17abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17abc8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17abcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17abd0: 0xc05ea3c  jal         func_17A8F0
    ctx->pc = 0x17ABD0u;
    SET_GPR_U32(ctx, 31, 0x17ABD8u);
    ctx->pc = 0x17ABD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABD0u;
            // 0x17abd4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    if (runtime->hasFunction(0x17A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABD8u; }
        if (ctx->pc != 0x17ABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__13CDynamicAnimeFi_0x17a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABD8u; }
        if (ctx->pc != 0x17ABD8u) { return; }
    }
    ctx->pc = 0x17ABD8u;
label_17abd8:
    // 0x17abd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17abd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17abdc: 0x3e00008  jr          $ra
    ctx->pc = 0x17ABDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABDCu;
            // 0x17abe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17ABE4u;
}
