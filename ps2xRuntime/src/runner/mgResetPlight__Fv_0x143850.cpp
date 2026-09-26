#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgResetPlight__Fv
// Address: 0x143850 - 0x14389c
void mgResetPlight__Fv_0x143850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgResetPlight__Fv_0x143850");
#endif

    switch (ctx->pc) {
        case 0x143868u: goto label_143868;
        case 0x14387cu: goto label_14387c;
        default: break;
    }

    ctx->pc = 0x143850u;

    // 0x143850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14385c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143860: 0xaf828820  sw          $v0, -0x77E0($gp)
    ctx->pc = 0x143860u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
    // 0x143864: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x143864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143868:
    // 0x143868: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x14386c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14386cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143870: 0x24840ec0  addiu       $a0, $a0, 0xEC0
    ctx->pc = 0x143870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
    // 0x143874: 0xc04e564  jal         func_139590
    ctx->pc = 0x143874u;
    SET_GPR_U32(ctx, 31, 0x14387Cu);
    ctx->pc = 0x143878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143874u;
            // 0x143878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139590u;
    if (runtime->hasFunction(0x139590u)) {
        auto targetFn = runtime->lookupFunction(0x139590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14387Cu; }
        if (ctx->pc != 0x14387Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT_0x139590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14387Cu; }
        if (ctx->pc != 0x14387Cu) { return; }
    }
    ctx->pc = 0x14387Cu;
label_14387c:
    // 0x14387c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14387cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x143880: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x143880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x143884: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x143884u;
    {
        const bool branch_taken_0x143884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143884) {
            ctx->pc = 0x143868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_143868;
        }
    }
    ctx->pc = 0x14388Cu;
    // 0x14388c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14388cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143894: 0x3e00008  jr          $ra
    ctx->pc = 0x143894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143894u;
            // 0x143898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14389Cu;
}
