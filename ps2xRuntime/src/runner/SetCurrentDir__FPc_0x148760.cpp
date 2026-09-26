#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCurrentDir__FPc
// Address: 0x148760 - 0x1487b4
void SetCurrentDir__FPc_0x148760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCurrentDir__FPc_0x148760");
#endif

    switch (ctx->pc) {
        case 0x14878cu: goto label_14878c;
        case 0x1487a8u: goto label_1487a8;
        default: break;
    }

    ctx->pc = 0x148760u;

    // 0x148760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x148764: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x148764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148768: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x148768u;
    {
        const bool branch_taken_0x148768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14876Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148768u;
            // 0x14876c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148768) {
            ctx->pc = 0x148794u;
            goto label_148794;
        }
    }
    ctx->pc = 0x148770u;
    // 0x148770: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x148770u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148774: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x148774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x148778: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x148778u;
    {
        const bool branch_taken_0x148778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14877Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148778u;
            // 0x14877c: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148778) {
            ctx->pc = 0x148784u;
            goto label_148784;
        }
    }
    ctx->pc = 0x148780u;
    // 0x148780: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x148780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_148784:
    // 0x148784: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x148784u;
    SET_GPR_U32(ctx, 31, 0x14878Cu);
    ctx->pc = 0x148788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148784u;
            // 0x148788: 0x24844390  addiu       $a0, $a0, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14878Cu; }
        if (ctx->pc != 0x14878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14878Cu; }
        if (ctx->pc != 0x14878Cu) { return; }
    }
    ctx->pc = 0x14878Cu;
label_14878c:
    // 0x14878c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14878Cu;
    {
        const bool branch_taken_0x14878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14878Cu;
            // 0x148790: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14878c) {
            ctx->pc = 0x1487ACu;
            goto label_1487ac;
        }
    }
    ctx->pc = 0x148794u;
label_148794:
    // 0x148794: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x148794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x148798: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x148798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x14879c: 0x24844390  addiu       $a0, $a0, 0x4390
    ctx->pc = 0x14879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    // 0x1487a0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1487A0u;
    SET_GPR_U32(ctx, 31, 0x1487A8u);
    ctx->pc = 0x1487A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487A0u;
            // 0x1487a4: 0x24a54290  addiu       $a1, $a1, 0x4290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487A8u; }
        if (ctx->pc != 0x1487A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487A8u; }
        if (ctx->pc != 0x1487A8u) { return; }
    }
    ctx->pc = 0x1487A8u;
label_1487a8:
    // 0x1487a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1487a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1487ac:
    // 0x1487ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1487ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1487B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1487ACu;
            // 0x1487b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1487B4u;
}
