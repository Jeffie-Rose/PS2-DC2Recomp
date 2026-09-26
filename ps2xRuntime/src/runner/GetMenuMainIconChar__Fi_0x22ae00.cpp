#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuMainIconChar__Fi
// Address: 0x22ae00 - 0x22ae34
void GetMenuMainIconChar__Fi_0x22ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuMainIconChar__Fi_0x22ae00");
#endif

    switch (ctx->pc) {
        case 0x22ae20u: goto label_22ae20;
        default: break;
    }

    ctx->pc = 0x22ae00u;

    // 0x22ae00: 0x2486fffe  addiu       $a2, $a0, -0x2
    ctx->pc = 0x22ae00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x22ae04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ae04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ae08: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x22ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x22ae0c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22ae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22ae10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ae10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ae14: 0x2484cfb0  addiu       $a0, $a0, -0x3050
    ctx->pc = 0x22ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954928));
    // 0x22ae18: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x22AE18u;
    SET_GPR_U32(ctx, 31, 0x22AE20u);
    ctx->pc = 0x22AE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE18u;
            // 0x22ae1c: 0x24a5a688  addiu       $a1, $a1, -0x5978 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE20u; }
        if (ctx->pc != 0x22AE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE20u; }
        if (ctx->pc != 0x22AE20u) { return; }
    }
    ctx->pc = 0x22AE20u;
label_22ae20:
    // 0x22ae20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ae20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ae24: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22ae28: 0x2442cfb0  addiu       $v0, $v0, -0x3050
    ctx->pc = 0x22ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x22ae2c: 0x3e00008  jr          $ra
    ctx->pc = 0x22AE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE2Cu;
            // 0x22ae30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AE34u;
}
