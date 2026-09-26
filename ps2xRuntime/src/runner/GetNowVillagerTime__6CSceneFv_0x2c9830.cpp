#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowVillagerTime__6CSceneFv
// Address: 0x2c9830 - 0x2c9878
void GetNowVillagerTime__6CSceneFv_0x2c9830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowVillagerTime__6CSceneFv_0x2c9830");
#endif

    switch (ctx->pc) {
        case 0x2c9858u: goto label_2c9858;
        default: break;
    }

    ctx->pc = 0x2c9830u;

    // 0x2c9830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9834: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2c9834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2c9838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c9838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c983c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2c983cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c9840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9844: 0xc48c2f6c  lwc1        $f12, 0x2F6C($a0)
    ctx->pc = 0x2c9844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c9848: 0x3c0241a8  lui         $v0, 0x41A8
    ctx->pc = 0x2c9848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16808 << 16));
    // 0x2c984c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c984cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c9850: 0xc0a7124  jal         func_29C490
    ctx->pc = 0x2C9850u;
    SET_GPR_U32(ctx, 31, 0x2C9858u);
    ctx->pc = 0x2C9854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9850u;
            // 0x2c9854: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C490u;
    if (runtime->hasFunction(0x29C490u)) {
        auto targetFn = runtime->lookupFunction(0x29C490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9858u; }
        if (ctx->pc != 0x2C9858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTime__Ffff_0x29c490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9858u; }
        if (ctx->pc != 0x2C9858u) { return; }
    }
    ctx->pc = 0x2C9858u;
label_2c9858:
    // 0x2c9858: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9858u;
    {
        const bool branch_taken_0x2c9858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C985Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9858u;
            // 0x2c985c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9858) {
            ctx->pc = 0x2C9868u;
            goto label_2c9868;
        }
    }
    ctx->pc = 0x2C9860u;
    // 0x2c9860: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2c9860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9868:
    // 0x2c9868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c9868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c986c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c986cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9870: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9870u;
            // 0x2c9874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9878u;
}
