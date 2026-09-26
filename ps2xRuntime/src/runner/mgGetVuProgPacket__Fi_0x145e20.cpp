#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetVuProgPacket__Fi
// Address: 0x145e20 - 0x145e7c
void mgGetVuProgPacket__Fi_0x145e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetVuProgPacket__Fi_0x145e20");
#endif

    switch (ctx->pc) {
        case 0x145e30u: goto label_145e30;
        default: break;
    }

    ctx->pc = 0x145e20u;

    // 0x145e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145e28: 0xc051760  jal         func_145D80
    ctx->pc = 0x145E28u;
    SET_GPR_U32(ctx, 31, 0x145E30u);
    ctx->pc = 0x145D80u;
    if (runtime->hasFunction(0x145D80u)) {
        auto targetFn = runtime->lookupFunction(0x145D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E30u; }
        if (ctx->pc != 0x145E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVuProgID__Fi_0x145d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E30u; }
        if (ctx->pc != 0x145E30u) { return; }
    }
    ctx->pc = 0x145E30u;
label_145e30:
    // 0x145e30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145E30u;
    {
        const bool branch_taken_0x145e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145E30u;
            // 0x145e34: 0x28810100  slti        $at, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e30) {
            ctx->pc = 0x145E40u;
            goto label_145e40;
        }
    }
    ctx->pc = 0x145E38u;
    // 0x145e38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x145E38u;
    {
        const bool branch_taken_0x145e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145E38u;
            // 0x145e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e38) {
            ctx->pc = 0x145E70u;
            goto label_145e70;
        }
    }
    ctx->pc = 0x145E40u;
label_145e40:
    // 0x145e40: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x145E40u;
    {
        const bool branch_taken_0x145e40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145E40u;
            // 0x145e44: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e40) {
            ctx->pc = 0x145E5Cu;
            goto label_145e5c;
        }
    }
    ctx->pc = 0x145E48u;
    // 0x145e48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x145e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x145e4c: 0x24424260  addiu       $v0, $v0, 0x4260
    ctx->pc = 0x145e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16992));
    // 0x145e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145e54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145E54u;
    {
        const bool branch_taken_0x145e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145E54u;
            // 0x145e58: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e54) {
            ctx->pc = 0x145E70u;
            goto label_145e70;
        }
    }
    ctx->pc = 0x145E5Cu;
label_145e5c:
    // 0x145e5c: 0x8f83888c  lw          $v1, -0x7774($gp)
    ctx->pc = 0x145e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936716)));
    // 0x145e60: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x145e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x145e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145e68: 0x8c42fc00  lw          $v0, -0x400($v0)
    ctx->pc = 0x145e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966272)));
    // 0x145e6c: 0x0  nop
    ctx->pc = 0x145e6cu;
    // NOP
label_145e70:
    // 0x145e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145e74: 0x3e00008  jr          $ra
    ctx->pc = 0x145E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145E74u;
            // 0x145e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145E7Cu;
}
