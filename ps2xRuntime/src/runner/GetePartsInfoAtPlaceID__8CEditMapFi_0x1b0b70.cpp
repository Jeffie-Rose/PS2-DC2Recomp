#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePartsInfoAtPlaceID__8CEditMapFi
// Address: 0x1b0b70 - 0x1b0ba0
void GetePartsInfoAtPlaceID__8CEditMapFi_0x1b0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePartsInfoAtPlaceID__8CEditMapFi_0x1b0b70");
#endif

    switch (ctx->pc) {
        case 0x1b0b80u: goto label_1b0b80;
        default: break;
    }

    ctx->pc = 0x1b0b70u;

    // 0x1b0b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0b78: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x1B0B78u;
    SET_GPR_U32(ctx, 31, 0x1B0B80u);
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B80u; }
        if (ctx->pc != 0x1B0B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B80u; }
        if (ctx->pc != 0x1B0B80u) { return; }
    }
    ctx->pc = 0x1B0B80u;
label_1b0b80:
    // 0x1b0b80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0B80u;
    {
        const bool branch_taken_0x1b0b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b80) {
            ctx->pc = 0x1B0B90u;
            goto label_1b0b90;
        }
    }
    ctx->pc = 0x1B0B88u;
    // 0x1b0b88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0B88u;
    {
        const bool branch_taken_0x1b0b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B88u;
            // 0x1b0b8c: 0x8c420324  lw          $v0, 0x324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b88) {
            ctx->pc = 0x1B0B94u;
            goto label_1b0b94;
        }
    }
    ctx->pc = 0x1B0B90u;
label_1b0b90:
    // 0x1b0b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b94:
    // 0x1b0b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B98u;
            // 0x1b0b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0BA0u;
}
