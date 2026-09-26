#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAttr__16CBattleCharaInfoFii
// Address: 0x1a0420 - 0x1a0490
void SetAttr__16CBattleCharaInfoFii_0x1a0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAttr__16CBattleCharaInfoFii_0x1a0420");
#endif

    switch (ctx->pc) {
        case 0x1a0448u: goto label_1a0448;
        case 0x1a0468u: goto label_1a0468;
        case 0x1a0474u: goto label_1a0474;
        default: break;
    }

    ctx->pc = 0x1a0420u;

    // 0x1a0420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a0424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a042c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0430: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a0430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0438: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a0438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a043c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a043cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0440: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A0440u;
    SET_GPR_U32(ctx, 31, 0x1A0448u);
    ctx->pc = 0x1A0444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0440u;
            // 0x1a0444: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0448u; }
        if (ctx->pc != 0x1A0448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0448u; }
        if (ctx->pc != 0x1A0448u) { return; }
    }
    ctx->pc = 0x1A0448u;
label_1a0448:
    // 0x1a0448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a044c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A044Cu;
    {
        const bool branch_taken_0x1a044c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A044Cu;
            // 0x1a0450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a044c) {
            ctx->pc = 0x1A0474u;
            goto label_1a0474;
        }
    }
    ctx->pc = 0x1A0454u;
    // 0x1a0454: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x1a0454u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a0458: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a0458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a045c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a045cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0460: 0xc067030  jal         func_19C0C0
    ctx->pc = 0x1A0460u;
    SET_GPR_U32(ctx, 31, 0x1A0468u);
    ctx->pc = 0x1A0464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0460u;
            // 0x1a0464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C0C0u;
    if (runtime->hasFunction(0x19C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0468u; }
        if (ctx->pc != 0x1A0468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbute__16CUserDataManagerFiUii_0x19c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0468u; }
        if (ctx->pc != 0x1A0468u) { return; }
    }
    ctx->pc = 0x1A0468u;
label_1a0468:
    // 0x1a0468: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x1a0468u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a046c: 0xc0670b0  jal         func_19C2C0
    ctx->pc = 0x1A046Cu;
    SET_GPR_U32(ctx, 31, 0x1A0474u);
    ctx->pc = 0x1A0470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A046Cu;
            // 0x1a0470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0474u; }
        if (ctx->pc != 0x1A0474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0474u; }
        if (ctx->pc != 0x1A0474u) { return; }
    }
    ctx->pc = 0x1A0474u;
label_1a0474:
    // 0x1a0474: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a0474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0478: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a0478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a047c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a047cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0488: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0488u;
            // 0x1a048c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0490u;
}
