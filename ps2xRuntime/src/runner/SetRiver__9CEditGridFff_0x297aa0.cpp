#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRiver__9CEditGridFff
// Address: 0x297aa0 - 0x297ae0
void SetRiver__9CEditGridFff_0x297aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRiver__9CEditGridFff_0x297aa0");
#endif

    switch (ctx->pc) {
        case 0x297ab8u: goto label_297ab8;
        case 0x297ad0u: goto label_297ad0;
        default: break;
    }

    ctx->pc = 0x297aa0u;

    // 0x297aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x297aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297aa8: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x297aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x297aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297ab0: 0xc0a5e64  jal         func_297990
    ctx->pc = 0x297AB0u;
    SET_GPR_U32(ctx, 31, 0x297AB8u);
    ctx->pc = 0x297AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297AB0u;
            // 0x297ab4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297AB8u; }
        if (ctx->pc != 0x297AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297AB8u; }
        if (ctx->pc != 0x297AB8u) { return; }
    }
    ctx->pc = 0x297AB8u;
label_297ab8:
    // 0x297ab8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297AB8u;
    {
        const bool branch_taken_0x297ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297AB8u;
            // 0x297abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ab8) {
            ctx->pc = 0x297AD0u;
            goto label_297ad0;
        }
    }
    ctx->pc = 0x297AC0u;
    // 0x297ac0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x297ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297ac4: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x297ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x297ac8: 0xc0a5ec8  jal         func_297B20
    ctx->pc = 0x297AC8u;
    SET_GPR_U32(ctx, 31, 0x297AD0u);
    ctx->pc = 0x297ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297AC8u;
            // 0x297acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297B20u;
    if (runtime->hasFunction(0x297B20u)) {
        auto targetFn = runtime->lookupFunction(0x297B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297AD0u; }
        if (ctx->pc != 0x297AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRiver__9CEditGridFii_0x297b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297AD0u; }
        if (ctx->pc != 0x297AD0u) { return; }
    }
    ctx->pc = 0x297AD0u;
label_297ad0:
    // 0x297ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x297AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297AD8u;
            // 0x297adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297AE0u;
}
