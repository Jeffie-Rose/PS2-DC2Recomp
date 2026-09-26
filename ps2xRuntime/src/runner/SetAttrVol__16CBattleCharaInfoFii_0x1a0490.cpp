#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAttrVol__16CBattleCharaInfoFii
// Address: 0x1a0490 - 0x1a0500
void SetAttrVol__16CBattleCharaInfoFii_0x1a0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAttrVol__16CBattleCharaInfoFii_0x1a0490");
#endif

    switch (ctx->pc) {
        case 0x1a04b8u: goto label_1a04b8;
        case 0x1a04d8u: goto label_1a04d8;
        case 0x1a04e4u: goto label_1a04e4;
        default: break;
    }

    ctx->pc = 0x1a0490u;

    // 0x1a0490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0494: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a049c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a04a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a04a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a04a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a04a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a04a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a04acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04b0: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A04B0u;
    SET_GPR_U32(ctx, 31, 0x1A04B8u);
    ctx->pc = 0x1A04B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04B0u;
            // 0x1a04b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04B8u; }
        if (ctx->pc != 0x1A04B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04B8u; }
        if (ctx->pc != 0x1A04B8u) { return; }
    }
    ctx->pc = 0x1A04B8u;
label_1a04b8:
    // 0x1a04b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a04b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04bc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A04BCu;
    {
        const bool branch_taken_0x1a04bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04BCu;
            // 0x1a04c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04bc) {
            ctx->pc = 0x1A04E4u;
            goto label_1a04e4;
        }
    }
    ctx->pc = 0x1A04C4u;
    // 0x1a04c4: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x1a04c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a04c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a04c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a04ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04d0: 0xc067064  jal         func_19C190
    ctx->pc = 0x1A04D0u;
    SET_GPR_U32(ctx, 31, 0x1A04D8u);
    ctx->pc = 0x1A04D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04D0u;
            // 0x1a04d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C190u;
    if (runtime->hasFunction(0x19C190u)) {
        auto targetFn = runtime->lookupFunction(0x19C190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04D8u; }
        if (ctx->pc != 0x1A04D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbuteVol__16CUserDataManagerFiUii_0x19c190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04D8u; }
        if (ctx->pc != 0x1A04D8u) { return; }
    }
    ctx->pc = 0x1A04D8u;
label_1a04d8:
    // 0x1a04d8: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x1a04d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a04dc: 0xc0670b0  jal         func_19C2C0
    ctx->pc = 0x1A04DCu;
    SET_GPR_U32(ctx, 31, 0x1A04E4u);
    ctx->pc = 0x1A04E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04DCu;
            // 0x1a04e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04E4u; }
        if (ctx->pc != 0x1A04E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04E4u; }
        if (ctx->pc != 0x1A04E4u) { return; }
    }
    ctx->pc = 0x1A04E4u;
label_1a04e4:
    // 0x1a04e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a04e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a04e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a04e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a04ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a04ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a04f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a04f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a04f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a04f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a04f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A04F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A04FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04F8u;
            // 0x1a04fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0500u;
}
