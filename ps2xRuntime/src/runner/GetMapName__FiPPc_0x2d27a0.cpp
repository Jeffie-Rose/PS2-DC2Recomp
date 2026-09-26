#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMapName__FiPPc
// Address: 0x2d27a0 - 0x2d27f0
void GetMapName__FiPPc_0x2d27a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMapName__FiPPc_0x2d27a0");
#endif

    switch (ctx->pc) {
        case 0x2d27b8u: goto label_2d27b8;
        default: break;
    }

    ctx->pc = 0x2d27a0u;

    // 0x2d27a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d27a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d27a4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D27A4u;
    {
        const bool branch_taken_0x2d27a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D27A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27A4u;
            // 0x2d27a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27a4) {
            ctx->pc = 0x2D27B0u;
            goto label_2d27b0;
        }
    }
    ctx->pc = 0x2D27ACu;
    // 0x2d27ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2d27acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2d27b0:
    // 0x2d27b0: 0xc0b496c  jal         func_2D25B0
    ctx->pc = 0x2D27B0u;
    SET_GPR_U32(ctx, 31, 0x2D27B8u);
    ctx->pc = 0x2D25B0u;
    if (runtime->hasFunction(0x2D25B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D25B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D27B8u; }
        if (ctx->pc != 0x2D27B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapNameInfo__Fi_0x2d25b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D27B8u; }
        if (ctx->pc != 0x2D27B8u) { return; }
    }
    ctx->pc = 0x2D27B8u;
label_2d27b8:
    // 0x2d27b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D27B8u;
    {
        const bool branch_taken_0x2d27b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d27b8) {
            ctx->pc = 0x2D27CCu;
            goto label_2d27cc;
        }
    }
    ctx->pc = 0x2D27C0u;
    // 0x2d27c0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d27c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D27C4u;
    {
        const bool branch_taken_0x2d27c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D27C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27C4u;
            // 0x2d27c8: 0x24426400  addiu       $v0, $v0, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27c4) {
            ctx->pc = 0x2D27E4u;
            goto label_2d27e4;
        }
    }
    ctx->pc = 0x2D27CCu;
label_2d27cc:
    // 0x2d27cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D27CCu;
    {
        const bool branch_taken_0x2d27cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27cc) {
            ctx->pc = 0x2D27DCu;
            goto label_2d27dc;
        }
    }
    ctx->pc = 0x2D27D4u;
    // 0x2d27d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d27d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2d27dc:
    // 0x2d27dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d27e0: 0x0  nop
    ctx->pc = 0x2d27e0u;
    // NOP
label_2d27e4:
    // 0x2d27e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d27e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d27e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D27E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D27ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27E8u;
            // 0x2d27ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D27F0u;
}
