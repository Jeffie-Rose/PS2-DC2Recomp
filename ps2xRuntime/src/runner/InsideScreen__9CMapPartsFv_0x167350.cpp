#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InsideScreen__9CMapPartsFv
// Address: 0x167350 - 0x16739c
void InsideScreen__9CMapPartsFv_0x167350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InsideScreen__9CMapPartsFv_0x167350");
#endif

    switch (ctx->pc) {
        case 0x167378u: goto label_167378;
        case 0x16738cu: goto label_16738c;
        default: break;
    }

    ctx->pc = 0x167350u;

    // 0x167350: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x167350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x167354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16735c: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x16735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x167360: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167360u;
    {
        const bool branch_taken_0x167360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167360u;
            // 0x167364: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167360) {
            ctx->pc = 0x167370u;
            goto label_167370;
        }
    }
    ctx->pc = 0x167368u;
    // 0x167368: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x167368u;
    {
        const bool branch_taken_0x167368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167368u;
            // 0x16736c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167368) {
            ctx->pc = 0x16738Cu;
            goto label_16738c;
        }
    }
    ctx->pc = 0x167370u;
label_167370:
    // 0x167370: 0xc059cc0  jal         func_167300
    ctx->pc = 0x167370u;
    SET_GPR_U32(ctx, 31, 0x167378u);
    ctx->pc = 0x167374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167370u;
            // 0x167374: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167378u; }
        if (ctx->pc != 0x167378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167378u; }
        if (ctx->pc != 0x167378u) { return; }
    }
    ctx->pc = 0x167378u;
label_167378:
    // 0x167378: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x167378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x16737c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16737cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167380: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x167380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167384: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x167384u;
    SET_GPR_U32(ctx, 31, 0x16738Cu);
    ctx->pc = 0x167388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167384u;
            // 0x167388: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16738Cu; }
        if (ctx->pc != 0x16738Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FP9mgVu0FBOXPA4_fPfPf_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16738Cu; }
        if (ctx->pc != 0x16738Cu) { return; }
    }
    ctx->pc = 0x16738Cu;
label_16738c:
    // 0x16738c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16738cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167394: 0x3e00008  jr          $ra
    ctx->pc = 0x167394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167394u;
            // 0x167398: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16739Cu;
}
