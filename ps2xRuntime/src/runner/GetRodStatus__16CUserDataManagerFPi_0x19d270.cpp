#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRodStatus__16CUserDataManagerFPi
// Address: 0x19d270 - 0x19d2d8
void GetRodStatus__16CUserDataManagerFPi_0x19d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRodStatus__16CUserDataManagerFPi_0x19d270");
#endif

    switch (ctx->pc) {
        case 0x19d294u: goto label_19d294;
        default: break;
    }

    ctx->pc = 0x19d270u;

    // 0x19d270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d27c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d280: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19d280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d284: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x19D284u;
    {
        const bool branch_taken_0x19d284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D284u;
            // 0x19d288: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d284) {
            ctx->pc = 0x19D2C4u;
            goto label_19d2c4;
        }
    }
    ctx->pc = 0x19D28Cu;
    // 0x19d28c: 0xc0673a8  jal         func_19CEA0
    ctx->pc = 0x19D28Cu;
    SET_GPR_U32(ctx, 31, 0x19D294u);
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D294u; }
        if (ctx->pc != 0x19D294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D294u; }
        if (ctx->pc != 0x19D294u) { return; }
    }
    ctx->pc = 0x19D294u;
label_19d294:
    // 0x19d294: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19D294u;
    {
        const bool branch_taken_0x19d294 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19d294) {
            ctx->pc = 0x19D2C4u;
            goto label_19d2c4;
        }
    }
    ctx->pc = 0x19D29Cu;
    // 0x19d29c: 0x862340de  lh          $v1, 0x40DE($s1)
    ctx->pc = 0x19d29cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16606)));
    // 0x19d2a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x19d2a4: 0x862340e0  lh          $v1, 0x40E0($s1)
    ctx->pc = 0x19d2a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16608)));
    // 0x19d2a8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x19d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x19d2ac: 0x862340e2  lh          $v1, 0x40E2($s1)
    ctx->pc = 0x19d2acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16610)));
    // 0x19d2b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x19d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x19d2b4: 0x862340e4  lh          $v1, 0x40E4($s1)
    ctx->pc = 0x19d2b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16612)));
    // 0x19d2b8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x19d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x19d2bc: 0x862340e6  lh          $v1, 0x40E6($s1)
    ctx->pc = 0x19d2bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16614)));
    // 0x19d2c0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x19d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_19d2c4:
    // 0x19d2c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2D0u;
            // 0x19d2d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D2D8u;
}
