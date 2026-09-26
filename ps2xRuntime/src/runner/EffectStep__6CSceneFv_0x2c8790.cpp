#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EffectStep__6CSceneFv
// Address: 0x2c8790 - 0x2c8814
void EffectStep__6CSceneFv_0x2c8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectStep__6CSceneFv_0x2c8790");
#endif

    switch (ctx->pc) {
        case 0x2c87b8u: goto label_2c87b8;
        case 0x2c87ccu: goto label_2c87cc;
        case 0x2c87d8u: goto label_2c87d8;
        case 0x2c87f8u: goto label_2c87f8;
        default: break;
    }

    ctx->pc = 0x2c8790u;

    // 0x2c8790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c8790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c8794: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c8794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c8798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c879c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2c879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c87a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c87a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c87a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c87a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c87a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c87a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c87acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c87b0: 0xc0a1214  jal         func_284850
    ctx->pc = 0x2C87B0u;
    SET_GPR_U32(ctx, 31, 0x2C87B8u);
    ctx->pc = 0x2C87B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C87B0u;
            // 0x2c87b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C87B8u; }
        if (ctx->pc != 0x2C87B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C87B8u; }
        if (ctx->pc != 0x2C87B8u) { return; }
    }
    ctx->pc = 0x2C87B8u;
label_2c87b8:
    // 0x2c87b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c87b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c87bc: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2c87bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c87c0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2C87C0u;
    {
        const bool branch_taken_0x2c87c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C87C0u;
            // 0x2c87c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87c0) {
            ctx->pc = 0x2C87ECu;
            goto label_2c87ec;
        }
    }
    ctx->pc = 0x2C87C8u;
    // 0x2c87c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c87c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c87cc:
    // 0x2c87cc: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2c87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2c87d0: 0xc057f68  jal         func_15FDA0
    ctx->pc = 0x2C87D0u;
    SET_GPR_U32(ctx, 31, 0x2C87D8u);
    ctx->pc = 0x2C87D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C87D0u;
            // 0x2c87d4: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FDA0u;
    if (runtime->hasFunction(0x15FDA0u)) {
        auto targetFn = runtime->lookupFunction(0x15FDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C87D8u; }
        if (ctx->pc != 0x2C87D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EffectStep__4CMapFv_0x15fda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C87D8u; }
        if (ctx->pc != 0x2C87D8u) { return; }
    }
    ctx->pc = 0x2C87D8u;
label_2c87d8:
    // 0x2c87d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c87d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c87dc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2c87dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2c87e0: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2c87e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c87e4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C87E4u;
    {
        const bool branch_taken_0x2c87e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c87e4) {
            ctx->pc = 0x2C87CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c87cc;
        }
    }
    ctx->pc = 0x2C87ECu;
label_2c87ec:
    // 0x2c87ec: 0x0  nop
    ctx->pc = 0x2c87ecu;
    // NOP
    // 0x2c87f0: 0xc061058  jal         func_184160
    ctx->pc = 0x2C87F0u;
    SET_GPR_U32(ctx, 31, 0x2C87F8u);
    ctx->pc = 0x2C87F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C87F0u;
            // 0x2c87f4: 0x266424f0  addiu       $a0, $s3, 0x24F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 9456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184160u;
    if (runtime->hasFunction(0x184160u)) {
        auto targetFn = runtime->lookupFunction(0x184160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C87F8u; }
        if (ctx->pc != 0x2C87F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CFireRasterFv_0x184160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C87F8u; }
        if (ctx->pc != 0x2C87F8u) { return; }
    }
    ctx->pc = 0x2C87F8u;
label_2c87f8:
    // 0x2c87f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c87f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c87fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c87fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8800: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c880c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C880Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C880Cu;
            // 0x2c8810: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8814u;
}
