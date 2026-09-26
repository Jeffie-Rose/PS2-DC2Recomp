#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PRIORITY_LIMMIT__FP12RS_STACKDATAi
// Address: 0x1e3990 - 0x1e39e8
void ps2__SET_PRIORITY_LIMMIT__FP12RS_STACKDATAi_0x1e3990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PRIORITY_LIMMIT__FP12RS_STACKDATAi_0x1e3990");
#endif

    switch (ctx->pc) {
        case 0x1e39b0u: goto label_1e39b0;
        default: break;
    }

    ctx->pc = 0x1e3990u;

    // 0x1e3990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3998: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3998u;
    {
        const bool branch_taken_0x1e3998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E399Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3998u;
            // 0x1e399c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3998) {
            ctx->pc = 0x1E39A8u;
            goto label_1e39a8;
        }
    }
    ctx->pc = 0x1E39A0u;
    // 0x1e39a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E39A0u;
    {
        const bool branch_taken_0x1e39a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39A0u;
            // 0x1e39a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39a0) {
            ctx->pc = 0x1E39DCu;
            goto label_1e39dc;
        }
    }
    ctx->pc = 0x1E39A8u;
label_1e39a8:
    // 0x1e39a8: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E39A8u;
    SET_GPR_U32(ctx, 31, 0x1E39B0u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E39B0u; }
        if (ctx->pc != 0x1E39B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E39B0u; }
        if (ctx->pc != 0x1E39B0u) { return; }
    }
    ctx->pc = 0x1E39B0u;
label_1e39b0:
    // 0x1e39b0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E39B0u;
    {
        const bool branch_taken_0x1e39b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E39B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39B0u;
            // 0x1e39b4: 0x28430018  slti        $v1, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39b0) {
            ctx->pc = 0x1E39C0u;
            goto label_1e39c0;
        }
    }
    ctx->pc = 0x1E39B8u;
    // 0x1e39b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E39B8u;
    {
        const bool branch_taken_0x1e39b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e39b8) {
            ctx->pc = 0x1E39C8u;
            goto label_1e39c8;
        }
    }
    ctx->pc = 0x1E39C0u;
label_1e39c0:
    // 0x1e39c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E39C0u;
    {
        const bool branch_taken_0x1e39c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39C0u;
            // 0x1e39c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39c0) {
            ctx->pc = 0x1E39DCu;
            goto label_1e39dc;
        }
    }
    ctx->pc = 0x1E39C8u;
label_1e39c8:
    // 0x1e39c8: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e39cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e39ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e39d0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e39d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e39d4: 0xa4220080  sh          $v0, 0x80($at)
    ctx->pc = 0x1e39d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e39d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e39dc:
    // 0x1e39dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e39dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e39e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E39E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E39E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39E0u;
            // 0x1e39e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E39E8u;
}
