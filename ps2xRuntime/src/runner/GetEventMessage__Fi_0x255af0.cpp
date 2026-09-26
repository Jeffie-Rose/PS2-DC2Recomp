#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEventMessage__Fi
// Address: 0x255af0 - 0x255b1c
void GetEventMessage__Fi_0x255af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEventMessage__Fi_0x255af0");
#endif

    switch (ctx->pc) {
        case 0x255b10u: goto label_255b10;
        default: break;
    }

    ctx->pc = 0x255af0u;

    // 0x255af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255af4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x255af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255afc: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x255afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x255b00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255B00u;
    {
        const bool branch_taken_0x255b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255B00u;
            // 0x255b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b00) {
            ctx->pc = 0x255B10u;
            goto label_255b10;
        }
    }
    ctx->pc = 0x255B08u;
    // 0x255b08: 0xc0a0e78  jal         func_2839E0
    ctx->pc = 0x255B08u;
    SET_GPR_U32(ctx, 31, 0x255B10u);
    ctx->pc = 0x2839E0u;
    if (runtime->hasFunction(0x2839E0u)) {
        auto targetFn = runtime->lookupFunction(0x2839E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255B10u; }
        if (ctx->pc != 0x255B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMessage__6CSceneFi_0x2839e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255B10u; }
        if (ctx->pc != 0x255B10u) { return; }
    }
    ctx->pc = 0x255B10u;
label_255b10:
    // 0x255b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255b14: 0x3e00008  jr          $ra
    ctx->pc = 0x255B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255B14u;
            // 0x255b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255B1Cu;
}
