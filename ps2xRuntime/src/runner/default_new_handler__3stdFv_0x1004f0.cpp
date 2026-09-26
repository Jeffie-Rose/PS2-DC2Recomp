#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: default_new_handler__3stdFv
// Address: 0x1004f0 - 0x100554
void default_new_handler__3stdFv_0x1004f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("default_new_handler__3stdFv_0x1004f0");
#endif

    switch (ctx->pc) {
        case 0x100524u: goto label_100524;
        case 0x100534u: goto label_100534;
        default: break;
    }

    ctx->pc = 0x1004f0u;

    // 0x1004f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1004f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1004f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1004f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1004f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1004f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1004fc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1004fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x100500: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x100500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x100504: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x100504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x100508: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x100508u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x10050c: 0x24424e50  addiu       $v0, $v0, 0x4E50
    ctx->pc = 0x10050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20048));
    // 0x100510: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x100510u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x100514: 0x2484edb0  addiu       $a0, $a0, -0x1250
    ctx->pc = 0x100514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962608));
    // 0x100518: 0x27c5003c  addiu       $a1, $fp, 0x3C
    ctx->pc = 0x100518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 60));
    // 0x10051c: 0xc040880  jal         func_102200
    ctx->pc = 0x10051Cu;
    SET_GPR_U32(ctx, 31, 0x100524u);
    ctx->pc = 0x100520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10051Cu;
            // 0x100520: 0x24c60560  addiu       $a2, $a2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100524u; }
        if (ctx->pc != 0x100524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___throw_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100524u; }
        if (ctx->pc != 0x100524u) { return; }
    }
    ctx->pc = 0x100524u;
label_100524:
    // 0x100524: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x100524u;
    {
        const bool branch_taken_0x100524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100524) {
            ctx->pc = 0x10053Cu;
            goto label_10053c;
        }
    }
    ctx->pc = 0x10052Cu;
    // 0x10052c: 0xc04041c  jal         func_101070
    ctx->pc = 0x10052Cu;
    SET_GPR_U32(ctx, 31, 0x100534u);
    ctx->pc = 0x100530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10052Cu;
            // 0x100530: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101070u;
    if (runtime->hasFunction(0x101070u)) {
        auto targetFn = runtime->lookupFunction(0x101070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100534u; }
        if (ctx->pc != 0x100534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x101070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100534u; }
        if (ctx->pc != 0x100534u) { return; }
    }
    ctx->pc = 0x100534u;
label_100534:
    // 0x100534: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x100534u;
    {
        const bool branch_taken_0x100534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100534) {
            ctx->pc = 0x100534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100534;
        }
    }
    ctx->pc = 0x10053Cu;
label_10053c:
    // 0x10053c: 0x0  nop
    ctx->pc = 0x10053cu;
    // NOP
    // 0x100540: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x100540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x100544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100548: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x100548u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10054c: 0x3e00008  jr          $ra
    ctx->pc = 0x10054Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10054Cu;
            // 0x100550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100554u;
}
