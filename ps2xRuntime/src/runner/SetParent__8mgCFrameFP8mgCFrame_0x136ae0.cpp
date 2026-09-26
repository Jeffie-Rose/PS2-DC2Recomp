#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetParent__8mgCFrameFP8mgCFrame
// Address: 0x136ae0 - 0x136b14
void SetParent__8mgCFrameFP8mgCFrame_0x136ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetParent__8mgCFrameFP8mgCFrame_0x136ae0");
#endif

    switch (ctx->pc) {
        case 0x136b08u: goto label_136b08;
        default: break;
    }

    ctx->pc = 0x136ae0u;

    // 0x136ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136ae8: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x136ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x136aec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x136AECu;
    {
        const bool branch_taken_0x136aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136AECu;
            // 0x136af0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136aec) {
            ctx->pc = 0x136B08u;
            goto label_136b08;
        }
    }
    ctx->pc = 0x136AF4u;
    // 0x136af4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136AF4u;
    {
        const bool branch_taken_0x136af4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x136AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136AF4u;
            // 0x136af8: 0xacc50054  sw          $a1, 0x54($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136af4) {
            ctx->pc = 0x136B08u;
            goto label_136b08;
        }
    }
    ctx->pc = 0x136AFCu;
    // 0x136afc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x136afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b00: 0xc04dad8  jal         func_136B60
    ctx->pc = 0x136B00u;
    SET_GPR_U32(ctx, 31, 0x136B08u);
    ctx->pc = 0x136B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136B00u;
            // 0x136b04: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136B60u;
    if (runtime->hasFunction(0x136B60u)) {
        auto targetFn = runtime->lookupFunction(0x136B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B08u; }
        if (ctx->pc != 0x136B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChild__8mgCFrameFP8mgCFrame_0x136b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B08u; }
        if (ctx->pc != 0x136B08u) { return; }
    }
    ctx->pc = 0x136B08u;
label_136b08:
    // 0x136b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x136B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B0Cu;
            // 0x136b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136B14u;
}
