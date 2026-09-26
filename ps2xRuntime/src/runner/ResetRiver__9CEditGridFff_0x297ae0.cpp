#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetRiver__9CEditGridFff
// Address: 0x297ae0 - 0x297b20
void ResetRiver__9CEditGridFff_0x297ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetRiver__9CEditGridFff_0x297ae0");
#endif

    switch (ctx->pc) {
        case 0x297af8u: goto label_297af8;
        case 0x297b10u: goto label_297b10;
        default: break;
    }

    ctx->pc = 0x297ae0u;

    // 0x297ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x297ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297ae8: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x297ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x297aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297af0: 0xc0a5e64  jal         func_297990
    ctx->pc = 0x297AF0u;
    SET_GPR_U32(ctx, 31, 0x297AF8u);
    ctx->pc = 0x297AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297AF0u;
            // 0x297af4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297AF8u; }
        if (ctx->pc != 0x297AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297AF8u; }
        if (ctx->pc != 0x297AF8u) { return; }
    }
    ctx->pc = 0x297AF8u;
label_297af8:
    // 0x297af8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297AF8u;
    {
        const bool branch_taken_0x297af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297AF8u;
            // 0x297afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297af8) {
            ctx->pc = 0x297B10u;
            goto label_297b10;
        }
    }
    ctx->pc = 0x297B00u;
    // 0x297b00: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x297b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297b04: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x297b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x297b08: 0xc0a5f04  jal         func_297C10
    ctx->pc = 0x297B08u;
    SET_GPR_U32(ctx, 31, 0x297B10u);
    ctx->pc = 0x297B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297B08u;
            // 0x297b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297C10u;
    if (runtime->hasFunction(0x297C10u)) {
        auto targetFn = runtime->lookupFunction(0x297C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B10u; }
        if (ctx->pc != 0x297B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetRiver__9CEditGridFii_0x297c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B10u; }
        if (ctx->pc != 0x297B10u) { return; }
    }
    ctx->pc = 0x297B10u;
label_297b10:
    // 0x297b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297b18: 0x3e00008  jr          $ra
    ctx->pc = 0x297B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B18u;
            // 0x297b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297B20u;
}
