#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndInitSeSeq__Fi
// Address: 0x18cee0 - 0x18cf44
void sndInitSeSeq__Fi_0x18cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndInitSeSeq__Fi_0x18cee0");
#endif

    switch (ctx->pc) {
        case 0x18cef0u: goto label_18cef0;
        case 0x18cf00u: goto label_18cf00;
        default: break;
    }

    ctx->pc = 0x18cee0u;

    // 0x18cee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18cee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cee8: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18CEE8u;
    SET_GPR_U32(ctx, 31, 0x18CEF0u);
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEF0u; }
        if (ctx->pc != 0x18CEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEF0u; }
        if (ctx->pc != 0x18CEF0u) { return; }
    }
    ctx->pc = 0x18CEF0u;
label_18cef0:
    // 0x18cef0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18CEF0u;
    {
        const bool branch_taken_0x18cef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEF0u;
            // 0x18cef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cef0) {
            ctx->pc = 0x18CF34u;
            goto label_18cf34;
        }
    }
    ctx->pc = 0x18CEF8u;
    // 0x18cef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cefc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x18cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18cf00:
    // 0x18cf00: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x18cf00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18cf04: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x18cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x18cf08: 0xa4e4021c  sh          $a0, 0x21C($a3)
    ctx->pc = 0x18cf08u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 540), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cf0c: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x18cf0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18cf10: 0xa4e40224  sh          $a0, 0x224($a3)
    ctx->pc = 0x18cf10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 548), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cf14: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x18cf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x18cf18: 0xa4e4022c  sh          $a0, 0x22C($a3)
    ctx->pc = 0x18cf18u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 556), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cf1c: 0xa4e40234  sh          $a0, 0x234($a3)
    ctx->pc = 0x18cf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 564), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cf20: 0xa4e4023c  sh          $a0, 0x23C($a3)
    ctx->pc = 0x18cf20u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 572), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cf24: 0xa4e40244  sh          $a0, 0x244($a3)
    ctx->pc = 0x18cf24u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 580), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cf28: 0xa4e4024c  sh          $a0, 0x24C($a3)
    ctx->pc = 0x18cf28u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 588), (uint16_t)GPR_U32(ctx, 4));
    // 0x18cf2c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x18CF2Cu;
    {
        const bool branch_taken_0x18cf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF2Cu;
            // 0x18cf30: 0xa4e40254  sh          $a0, 0x254($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 596), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf2c) {
            ctx->pc = 0x18CF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18cf00;
        }
    }
    ctx->pc = 0x18CF34u;
label_18cf34:
    // 0x18cf34: 0x0  nop
    ctx->pc = 0x18cf34u;
    // NOP
    // 0x18cf38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cf38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF3Cu;
            // 0x18cf40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CF44u;
}
