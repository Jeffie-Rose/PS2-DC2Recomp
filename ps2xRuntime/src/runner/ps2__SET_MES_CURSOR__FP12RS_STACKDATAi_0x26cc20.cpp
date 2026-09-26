#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_CURSOR__FP12RS_STACKDATAi
// Address: 0x26cc20 - 0x26cc88
void ps2__SET_MES_CURSOR__FP12RS_STACKDATAi_0x26cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_CURSOR__FP12RS_STACKDATAi_0x26cc20");
#endif

    switch (ctx->pc) {
        case 0x26cc38u: goto label_26cc38;
        case 0x26cc40u: goto label_26cc40;
        case 0x26cc5cu: goto label_26cc5c;
        default: break;
    }

    ctx->pc = 0x26cc20u;

    // 0x26cc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26cc24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26cc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26cc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26cc2c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26cc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26cc30: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CC30u;
    SET_GPR_U32(ctx, 31, 0x26CC38u);
    ctx->pc = 0x26CC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC30u;
            // 0x26cc34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC38u; }
        if (ctx->pc != 0x26CC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC38u; }
        if (ctx->pc != 0x26CC38u) { return; }
    }
    ctx->pc = 0x26CC38u;
label_26cc38:
    // 0x26cc38: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CC38u;
    SET_GPR_U32(ctx, 31, 0x26CC40u);
    ctx->pc = 0x26CC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC38u;
            // 0x26cc3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC40u; }
        if (ctx->pc != 0x26CC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC40u; }
        if (ctx->pc != 0x26CC40u) { return; }
    }
    ctx->pc = 0x26CC40u;
label_26cc40:
    // 0x26cc40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cc44: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CC44u;
    {
        const bool branch_taken_0x26cc44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC44u;
            // 0x26cc48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc44) {
            ctx->pc = 0x26CC54u;
            goto label_26cc54;
        }
    }
    ctx->pc = 0x26CC4Cu;
    // 0x26cc4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26CC4Cu;
    {
        const bool branch_taken_0x26cc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC4Cu;
            // 0x26cc50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc4c) {
            ctx->pc = 0x26CC74u;
            goto label_26cc74;
        }
    }
    ctx->pc = 0x26CC54u;
label_26cc54:
    // 0x26cc54: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CC54u;
    SET_GPR_U32(ctx, 31, 0x26CC5Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC5Cu; }
        if (ctx->pc != 0x26CC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC5Cu; }
        if (ctx->pc != 0x26CC5Cu) { return; }
    }
    ctx->pc = 0x26CC5Cu;
label_26cc5c:
    // 0x26cc5c: 0x8e031ae4  lw          $v1, 0x1AE4($s0)
    ctx->pc = 0x26cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
    // 0x26cc60: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26CC60u;
    {
        const bool branch_taken_0x26cc60 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26cc60) {
            ctx->pc = 0x26CC6Cu;
            goto label_26cc6c;
        }
    }
    ctx->pc = 0x26CC68u;
    // 0x26cc68: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x26cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
label_26cc6c:
    // 0x26cc6c: 0xae021ae4  sw          $v0, 0x1AE4($s0)
    ctx->pc = 0x26cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
    // 0x26cc70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cc74:
    // 0x26cc74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26cc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cc78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cc7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cc80: 0x3e00008  jr          $ra
    ctx->pc = 0x26CC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CC80u;
            // 0x26cc84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CC88u;
}
