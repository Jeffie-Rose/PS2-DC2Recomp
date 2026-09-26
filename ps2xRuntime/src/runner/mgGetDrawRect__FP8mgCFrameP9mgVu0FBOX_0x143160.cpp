#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetDrawRect__FP8mgCFrameP9mgVu0FBOX
// Address: 0x143160 - 0x14318c
void mgGetDrawRect__FP8mgCFrameP9mgVu0FBOX_0x143160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetDrawRect__FP8mgCFrameP9mgVu0FBOX_0x143160");
#endif

    switch (ctx->pc) {
        case 0x143174u: goto label_143174;
        default: break;
    }

    ctx->pc = 0x143160u;

    // 0x143160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143164: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143164u;
    {
        const bool branch_taken_0x143164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x143168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143164u;
            // 0x143168: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143164) {
            ctx->pc = 0x14317Cu;
            goto label_14317c;
        }
    }
    ctx->pc = 0x14316Cu;
    // 0x14316c: 0xc04e070  jal         func_1381C0
    ctx->pc = 0x14316Cu;
    SET_GPR_U32(ctx, 31, 0x143174u);
    ctx->pc = 0x143170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14316Cu;
            // 0x143170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1381C0u;
    if (runtime->hasFunction(0x1381C0u)) {
        auto targetFn = runtime->lookupFunction(0x1381C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143174u; }
        if (ctx->pc != 0x143174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawRect__8mgCFrameFP9mgVu0FBOXP14mgCDrawManager_0x1381c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143174u; }
        if (ctx->pc != 0x143174u) { return; }
    }
    ctx->pc = 0x143174u;
label_143174:
    // 0x143174: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143174u;
    {
        const bool branch_taken_0x143174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143174u;
            // 0x143178: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143174) {
            ctx->pc = 0x143184u;
            goto label_143184;
        }
    }
    ctx->pc = 0x14317Cu;
label_14317c:
    // 0x14317c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14317cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143184:
    // 0x143184: 0x3e00008  jr          $ra
    ctx->pc = 0x143184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143184u;
            // 0x143188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14318Cu;
}
