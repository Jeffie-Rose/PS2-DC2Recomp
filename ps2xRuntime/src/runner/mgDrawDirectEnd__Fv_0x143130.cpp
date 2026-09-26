#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgDrawDirectEnd__Fv
// Address: 0x143130 - 0x14315c
void mgDrawDirectEnd__Fv_0x143130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgDrawDirectEnd__Fv_0x143130");
#endif

    switch (ctx->pc) {
        case 0x143150u: goto label_143150;
        default: break;
    }

    ctx->pc = 0x143130u;

    // 0x143130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143138: 0x8f838888  lw          $v1, -0x7778($gp)
    ctx->pc = 0x143138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936712)));
    // 0x14313c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14313Cu;
    {
        const bool branch_taken_0x14313c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x14313c) {
            ctx->pc = 0x143150u;
            goto label_143150;
        }
    }
    ctx->pc = 0x143144u;
    // 0x143144: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x143144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x143148: 0xc041b7e  jal         func_106DF8
    ctx->pc = 0x143148u;
    SET_GPR_U32(ctx, 31, 0x143150u);
    ctx->pc = 0x14314Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143148u;
            // 0x14314c: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106DF8u;
    if (runtime->hasFunction(0x106DF8u)) {
        auto targetFn = runtime->lookupFunction(0x106DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143150u; }
        if (ctx->pc != 0x143150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReserve_0x106df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143150u; }
        if (ctx->pc != 0x143150u) { return; }
    }
    ctx->pc = 0x143150u;
label_143150:
    // 0x143150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143154: 0x3e00008  jr          $ra
    ctx->pc = 0x143154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143154u;
            // 0x143158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14315Cu;
}
