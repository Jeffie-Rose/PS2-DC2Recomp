#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: runerror__FPCc
// Address: 0x186ae0 - 0x186b18
void runerror__FPCc_0x186ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("runerror__FPCc_0x186ae0");
#endif

    switch (ctx->pc) {
        case 0x186b04u: goto label_186b04;
        case 0x186b0cu: goto label_186b0c;
        default: break;
    }

    ctx->pc = 0x186ae0u;

    // 0x186ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186ae4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x186ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x186ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186aec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x186aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x186af0: 0x8c223b84  lw          $v0, 0x3B84($at)
    ctx->pc = 0x186af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x186af4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x186af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186af8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x186af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x186afc: 0xc049612  jal         func_125848
    ctx->pc = 0x186AFCu;
    SET_GPR_U32(ctx, 31, 0x186B04u);
    ctx->pc = 0x186B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AFCu;
            // 0x186b00: 0x24a54010  addiu       $a1, $a1, 0x4010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B04u; }
        if (ctx->pc != 0x186B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B04u; }
        if (ctx->pc != 0x186B04u) { return; }
    }
    ctx->pc = 0x186B04u;
label_186b04:
    // 0x186b04: 0xc04950e  jal         func_125438
    ctx->pc = 0x186B04u;
    SET_GPR_U32(ctx, 31, 0x186B0Cu);
    ctx->pc = 0x186B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B04u;
            // 0x186b08: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B0Cu; }
        if (ctx->pc != 0x186B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B0Cu; }
        if (ctx->pc != 0x186B0Cu) { return; }
    }
    ctx->pc = 0x186B0Cu;
label_186b0c:
    // 0x186b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186b10: 0x3e00008  jr          $ra
    ctx->pc = 0x186B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B10u;
            // 0x186b14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186B18u;
}
