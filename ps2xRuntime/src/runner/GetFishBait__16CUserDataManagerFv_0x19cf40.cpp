#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishBait__16CUserDataManagerFv
// Address: 0x19cf40 - 0x19cf88
void GetFishBait__16CUserDataManagerFv_0x19cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishBait__16CUserDataManagerFv_0x19cf40");
#endif

    switch (ctx->pc) {
        case 0x19cf54u: goto label_19cf54;
        default: break;
    }

    ctx->pc = 0x19cf40u;

    // 0x19cf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cf44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cf48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cf4c: 0xc0673a8  jal         func_19CEA0
    ctx->pc = 0x19CF4Cu;
    SET_GPR_U32(ctx, 31, 0x19CF54u);
    ctx->pc = 0x19CF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF4Cu;
            // 0x19cf50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF54u; }
        if (ctx->pc != 0x19CF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF54u; }
        if (ctx->pc != 0x19CF54u) { return; }
    }
    ctx->pc = 0x19CF54u;
label_19cf54:
    // 0x19cf54: 0x2403012e  addiu       $v1, $zero, 0x12E
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x19cf58: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CF58u;
    {
        const bool branch_taken_0x19cf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19CF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF58u;
            // 0x19cf5c: 0x2403012f  addiu       $v1, $zero, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf58) {
            ctx->pc = 0x19CF68u;
            goto label_19cf68;
        }
    }
    ctx->pc = 0x19CF60u;
    // 0x19cf60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19CF60u;
    {
        const bool branch_taken_0x19cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF60u;
            // 0x19cf64: 0x86024882  lh          $v0, 0x4882($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18562)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf60) {
            ctx->pc = 0x19CF78u;
            goto label_19cf78;
        }
    }
    ctx->pc = 0x19CF68u;
label_19cf68:
    // 0x19cf68: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CF68u;
    {
        const bool branch_taken_0x19cf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19CF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF68u;
            // 0x19cf6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf68) {
            ctx->pc = 0x19CF78u;
            goto label_19cf78;
        }
    }
    ctx->pc = 0x19CF70u;
    // 0x19cf70: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19CF70u;
    {
        const bool branch_taken_0x19cf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF70u;
            // 0x19cf74: 0x860248ee  lh          $v0, 0x48EE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18670)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf70) {
            ctx->pc = 0x19CF78u;
            goto label_19cf78;
        }
    }
    ctx->pc = 0x19CF78u;
label_19cf78:
    // 0x19cf78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cf7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf80: 0x3e00008  jr          $ra
    ctx->pc = 0x19CF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF80u;
            // 0x19cf84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CF88u;
}
