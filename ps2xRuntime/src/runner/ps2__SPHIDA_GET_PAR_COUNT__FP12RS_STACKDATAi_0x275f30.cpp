#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_PAR_COUNT__FP12RS_STACKDATAi
// Address: 0x275f30 - 0x275f84
void ps2__SPHIDA_GET_PAR_COUNT__FP12RS_STACKDATAi_0x275f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_PAR_COUNT__FP12RS_STACKDATAi_0x275f30");
#endif

    switch (ctx->pc) {
        case 0x275f74u: goto label_275f74;
        default: break;
    }

    ctx->pc = 0x275f30u;

    // 0x275f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275f38: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x275f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275f3c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275F3Cu;
    {
        const bool branch_taken_0x275f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275F3Cu;
            // 0x275f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f3c) {
            ctx->pc = 0x275F4Cu;
            goto label_275f4c;
        }
    }
    ctx->pc = 0x275F44u;
    // 0x275f44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x275F44u;
    {
        const bool branch_taken_0x275f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275F44u;
            // 0x275f48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f44) {
            ctx->pc = 0x275F7Cu;
            goto label_275f7c;
        }
    }
    ctx->pc = 0x275F4Cu;
label_275f4c:
    // 0x275f4c: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x275f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x275f50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275F50u;
    {
        const bool branch_taken_0x275f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275f50) {
            ctx->pc = 0x275F64u;
            goto label_275f64;
        }
    }
    ctx->pc = 0x275F58u;
    // 0x275f58: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x275f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x275f5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275F5Cu;
    {
        const bool branch_taken_0x275f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275F5Cu;
            // 0x275f60: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f5c) {
            ctx->pc = 0x275F6Cu;
            goto label_275f6c;
        }
    }
    ctx->pc = 0x275F64u;
label_275f64:
    // 0x275f64: 0x8c6500b8  lw          $a1, 0xB8($v1)
    ctx->pc = 0x275f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x275f68: 0x0  nop
    ctx->pc = 0x275f68u;
    // NOP
label_275f6c:
    // 0x275f6c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x275F6Cu;
    SET_GPR_U32(ctx, 31, 0x275F74u);
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275F74u; }
        if (ctx->pc != 0x275F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275F74u; }
        if (ctx->pc != 0x275F74u) { return; }
    }
    ctx->pc = 0x275F74u;
label_275f74:
    // 0x275f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_275f7c:
    // 0x275f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x275F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275F7Cu;
            // 0x275f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275F84u;
}
