#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachMessageForm__Fv
// Address: 0x21f5a0 - 0x21f60c
void AttachMessageForm__Fv_0x21f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachMessageForm__Fv_0x21f5a0");
#endif

    switch (ctx->pc) {
        case 0x21f5b8u: goto label_21f5b8;
        case 0x21f5ccu: goto label_21f5cc;
        case 0x21f5d8u: goto label_21f5d8;
        default: break;
    }

    ctx->pc = 0x21f5a0u;

    // 0x21f5a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21f5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21f5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21f5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21f5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21f5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21f5b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21f5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21f5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f5b8:
    // 0x21f5b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21f5bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x21f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21f5c0: 0x24a5a578  addiu       $a1, $a1, -0x5A88
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944120));
    // 0x21f5c4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x21F5C4u;
    SET_GPR_U32(ctx, 31, 0x21F5CCu);
    ctx->pc = 0x21F5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F5C4u;
            // 0x21f5c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5CCu; }
        if (ctx->pc != 0x21F5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5CCu; }
        if (ctx->pc != 0x21F5CCu) { return; }
    }
    ctx->pc = 0x21F5CCu;
label_21f5cc:
    // 0x21f5cc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x21f5d0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x21F5D0u;
    SET_GPR_U32(ctx, 31, 0x21F5D8u);
    ctx->pc = 0x21F5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F5D0u;
            // 0x21f5d4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5D8u; }
        if (ctx->pc != 0x21F5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5D8u; }
        if (ctx->pc != 0x21F5D8u) { return; }
    }
    ctx->pc = 0x21F5D8u;
label_21f5d8:
    // 0x21f5d8: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x21f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x21f5dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21f5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21f5e0: 0x2463cb30  addiu       $v1, $v1, -0x34D0
    ctx->pc = 0x21f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953776));
    // 0x21f5e4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x21f5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21f5e8: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x21f5e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x21f5ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21f5f0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x21F5F0u;
    {
        const bool branch_taken_0x21f5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F5F0u;
            // 0x21f5f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5f0) {
            ctx->pc = 0x21F5B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21f5b8;
        }
    }
    ctx->pc = 0x21F5F8u;
    // 0x21f5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21f5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f604: 0x3e00008  jr          $ra
    ctx->pc = 0x21F604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F604u;
            // 0x21f608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F60Cu;
}
