#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9C3DSplineFv
// Address: 0x255bf0 - 0x255c40
void Initialize__9C3DSplineFv_0x255bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9C3DSplineFv_0x255bf0");
#endif

    switch (ctx->pc) {
        case 0x255c04u: goto label_255c04;
        case 0x255c0cu: goto label_255c0c;
        default: break;
    }

    ctx->pc = 0x255bf0u;

    // 0x255bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255bf4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x255bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255c04:
    // 0x255c04: 0xc0956e0  jal         func_255B80
    ctx->pc = 0x255C04u;
    SET_GPR_U32(ctx, 31, 0x255C0Cu);
    ctx->pc = 0x255C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255C04u;
            // 0x255c08: 0xe62021  addu        $a0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B80u;
    if (runtime->hasFunction(0x255B80u)) {
        auto targetFn = runtime->lookupFunction(0x255B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255C0Cu; }
        if (ctx->pc != 0x255C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSplineKey__FP10SPLINE_KEY_0x255b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255C0Cu; }
        if (ctx->pc != 0x255C0Cu) { return; }
    }
    ctx->pc = 0x255C0Cu;
label_255c0c:
    // 0x255c0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x255c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x255c10: 0x24c60038  addiu       $a2, $a2, 0x38
    ctx->pc = 0x255c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
    // 0x255c14: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x255c14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x255c18: 0x0  nop
    ctx->pc = 0x255c18u;
    // NOP
    // 0x255c1c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x255C1Cu;
    {
        const bool branch_taken_0x255c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255c1c) {
            ctx->pc = 0x255C04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255c04;
        }
    }
    ctx->pc = 0x255C24u;
    // 0x255c24: 0xace00380  sw          $zero, 0x380($a3)
    ctx->pc = 0x255c24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 896), GPR_U32(ctx, 0));
    // 0x255c28: 0xace00384  sw          $zero, 0x384($a3)
    ctx->pc = 0x255c28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 900), GPR_U32(ctx, 0));
    // 0x255c2c: 0xace00388  sw          $zero, 0x388($a3)
    ctx->pc = 0x255c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 904), GPR_U32(ctx, 0));
    // 0x255c30: 0xace00398  sw          $zero, 0x398($a3)
    ctx->pc = 0x255c30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 920), GPR_U32(ctx, 0));
    // 0x255c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255c38: 0x3e00008  jr          $ra
    ctx->pc = 0x255C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255C38u;
            // 0x255c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255C40u;
}
