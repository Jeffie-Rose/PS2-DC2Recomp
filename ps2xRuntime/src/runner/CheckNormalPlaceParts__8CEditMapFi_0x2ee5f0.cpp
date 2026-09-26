#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckNormalPlaceParts__8CEditMapFi
// Address: 0x2ee5f0 - 0x2ee620
void CheckNormalPlaceParts__8CEditMapFi_0x2ee5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckNormalPlaceParts__8CEditMapFi_0x2ee5f0");
#endif

    switch (ctx->pc) {
        case 0x2ee604u: goto label_2ee604;
        case 0x2ee610u: goto label_2ee610;
        default: break;
    }

    ctx->pc = 0x2ee5f0u;

    // 0x2ee5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee5f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ee5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ee5f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ee5fc: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2EE5FCu;
    SET_GPR_U32(ctx, 31, 0x2EE604u);
    ctx->pc = 0x2EE600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE5FCu;
            // 0x2ee600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE604u; }
        if (ctx->pc != 0x2EE604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE604u; }
        if (ctx->pc != 0x2EE604u) { return; }
    }
    ctx->pc = 0x2EE604u;
label_2ee604:
    // 0x2ee604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee608: 0xc0bb988  jal         func_2EE620
    ctx->pc = 0x2EE608u;
    SET_GPR_U32(ctx, 31, 0x2EE610u);
    ctx->pc = 0x2EE60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE608u;
            // 0x2ee60c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE610u; }
        if (ctx->pc != 0x2EE610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE610u; }
        if (ctx->pc != 0x2EE610u) { return; }
    }
    ctx->pc = 0x2EE610u;
label_2ee610:
    // 0x2ee610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ee610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee618: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE618u;
            // 0x2ee61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE620u;
}
