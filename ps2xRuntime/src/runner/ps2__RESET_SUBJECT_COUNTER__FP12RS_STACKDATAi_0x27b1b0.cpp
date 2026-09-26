#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_SUBJECT_COUNTER__FP12RS_STACKDATAi
// Address: 0x27b1b0 - 0x27b208
void ps2__RESET_SUBJECT_COUNTER__FP12RS_STACKDATAi_0x27b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_SUBJECT_COUNTER__FP12RS_STACKDATAi_0x27b1b0");
#endif

    switch (ctx->pc) {
        case 0x27b1dcu: goto label_27b1dc;
        default: break;
    }

    ctx->pc = 0x27b1b0u;

    // 0x27b1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b1bc: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27b1c0: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x27b1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27b1c4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B1C4u;
    {
        const bool branch_taken_0x27b1c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B1C4u;
            // 0x27b1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1c4) {
            ctx->pc = 0x27B1D4u;
            goto label_27b1d4;
        }
    }
    ctx->pc = 0x27B1CCu;
    // 0x27b1cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27B1CCu;
    {
        const bool branch_taken_0x27b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B1CCu;
            // 0x27b1d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1cc) {
            ctx->pc = 0x27B1FCu;
            goto label_27b1fc;
        }
    }
    ctx->pc = 0x27B1D4u;
label_27b1d4:
    // 0x27b1d4: 0xc064220  jal         func_190880
    ctx->pc = 0x27B1D4u;
    SET_GPR_U32(ctx, 31, 0x27B1DCu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B1DCu; }
        if (ctx->pc != 0x27B1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B1DCu; }
        if (ctx->pc != 0x27B1DCu) { return; }
    }
    ctx->pc = 0x27B1DCu;
label_27b1dc:
    // 0x27b1dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B1DCu;
    {
        const bool branch_taken_0x27b1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b1dc) {
            ctx->pc = 0x27B1ECu;
            goto label_27b1ec;
        }
    }
    ctx->pc = 0x27B1E4u;
    // 0x27b1e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27B1E4u;
    {
        const bool branch_taken_0x27b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B1E4u;
            // 0x27b1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1e4) {
            ctx->pc = 0x27B1F8u;
            goto label_27b1f8;
        }
    }
    ctx->pc = 0x27B1ECu;
label_27b1ec:
    // 0x27b1ec: 0x9c421a00  lwu         $v0, 0x1A00($v0)
    ctx->pc = 0x27b1ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6656)));
    // 0x27b1f0: 0xfe020090  sd          $v0, 0x90($s0)
    ctx->pc = 0x27b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
    // 0x27b1f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b1f8:
    // 0x27b1f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27b1fc:
    // 0x27b1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b200: 0x3e00008  jr          $ra
    ctx->pc = 0x27B200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B200u;
            // 0x27b204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B208u;
}
