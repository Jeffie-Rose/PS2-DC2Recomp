#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__11CWaterFrameFv
// Address: 0x185d00 - 0x185d3c
void CreatePacket__11CWaterFrameFv_0x185d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__11CWaterFrameFv_0x185d00");
#endif

    switch (ctx->pc) {
        case 0x185d00u: goto label_185d00;
        case 0x185d04u: goto label_185d04;
        case 0x185d08u: goto label_185d08;
        case 0x185d0cu: goto label_185d0c;
        case 0x185d10u: goto label_185d10;
        case 0x185d14u: goto label_185d14;
        case 0x185d18u: goto label_185d18;
        case 0x185d1cu: goto label_185d1c;
        case 0x185d20u: goto label_185d20;
        case 0x185d24u: goto label_185d24;
        case 0x185d28u: goto label_185d28;
        case 0x185d2cu: goto label_185d2c;
        case 0x185d30u: goto label_185d30;
        case 0x185d34u: goto label_185d34;
        case 0x185d38u: goto label_185d38;
        default: break;
    }

    ctx->pc = 0x185d00u;

label_185d00:
    // 0x185d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_185d04:
    // 0x185d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_185d08:
    // 0x185d08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_185d0c:
    // 0x185d0c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x185d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_185d10:
    // 0x185d10: 0x320f809  jalr        $t9
label_185d14:
    if (ctx->pc == 0x185D14u) {
        ctx->pc = 0x185D18u;
        goto label_185d18;
    }
    ctx->pc = 0x185D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185D18u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x185D18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185D18u; }
            if (ctx->pc != 0x185D18u) { return; }
        }
        }
    }
    ctx->pc = 0x185D18u;
label_185d18:
    // 0x185d18: 0x8c59001c  lw          $t9, 0x1C($v0)
    ctx->pc = 0x185d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_185d1c:
    // 0x185d1c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_185d20:
    // 0x185d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185d24:
    // 0x185d24: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x185d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_185d28:
    // 0x185d28: 0x320f809  jalr        $t9
label_185d2c:
    if (ctx->pc == 0x185D2Cu) {
        ctx->pc = 0x185D2Cu;
            // 0x185d2c: 0x24a520e0  addiu       $a1, $a1, 0x20E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8416));
        ctx->pc = 0x185D30u;
        goto label_185d30;
    }
    ctx->pc = 0x185D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185D30u);
        ctx->pc = 0x185D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D28u;
            // 0x185d2c: 0x24a520e0  addiu       $a1, $a1, 0x20E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185D30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185D30u; }
            if (ctx->pc != 0x185D30u) { return; }
        }
        }
    }
    ctx->pc = 0x185D30u;
label_185d30:
    // 0x185d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185d34:
    // 0x185d34: 0x3e00008  jr          $ra
label_185d38:
    if (ctx->pc == 0x185D38u) {
        ctx->pc = 0x185D38u;
            // 0x185d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185D3Cu;
        goto label_fallthrough_0x185d34;
    }
    ctx->pc = 0x185D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D34u;
            // 0x185d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x185d34:
    ctx->pc = 0x185D3Cu;
}
