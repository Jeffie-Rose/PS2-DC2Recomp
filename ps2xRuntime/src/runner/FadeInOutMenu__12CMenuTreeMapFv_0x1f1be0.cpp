#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeInOutMenu__12CMenuTreeMapFv
// Address: 0x1f1be0 - 0x1f1c74
void FadeInOutMenu__12CMenuTreeMapFv_0x1f1be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeInOutMenu__12CMenuTreeMapFv_0x1f1be0");
#endif

    switch (ctx->pc) {
        case 0x1f1c20u: goto label_1f1c20;
        case 0x1f1c3cu: goto label_1f1c3c;
        case 0x1f1c58u: goto label_1f1c58;
        default: break;
    }

    ctx->pc = 0x1f1be0u;

    // 0x1f1be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1be4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1be8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f1be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f1bec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f1becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f1bf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f1bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f1bf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1bf8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1f1bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f1bfc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1BFCu;
    {
        const bool branch_taken_0x1f1bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BFCu;
            // 0x1f1c00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bfc) {
            ctx->pc = 0x1F1C44u;
            goto label_1f1c44;
        }
    }
    ctx->pc = 0x1F1C04u;
    // 0x1f1c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1c08: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1C08u;
    {
        const bool branch_taken_0x1f1c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1c08) {
            ctx->pc = 0x1F1C18u;
            goto label_1f1c18;
        }
    }
    ctx->pc = 0x1F1C10u;
    // 0x1f1c10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1C10u;
    {
        const bool branch_taken_0x1f1c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C10u;
            // 0x1f1c14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c10) {
            ctx->pc = 0x1F1C60u;
            goto label_1f1c60;
        }
    }
    ctx->pc = 0x1F1C18u;
label_1f1c18:
    // 0x1f1c18: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x1F1C18u;
    SET_GPR_U32(ctx, 31, 0x1F1C20u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C20u; }
        if (ctx->pc != 0x1F1C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C20u; }
        if (ctx->pc != 0x1F1C20u) { return; }
    }
    ctx->pc = 0x1F1C20u;
label_1f1c20:
    // 0x1f1c20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c24: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1C24u;
    {
        const bool branch_taken_0x1f1c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c24) {
            ctx->pc = 0x1F1C5Cu;
            goto label_1f1c5c;
        }
    }
    ctx->pc = 0x1F1C2Cu;
    // 0x1f1c2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f1c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c34: 0xc08e898  jal         func_23A260
    ctx->pc = 0x1F1C34u;
    SET_GPR_U32(ctx, 31, 0x1F1C3Cu);
    ctx->pc = 0x1F1C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C34u;
            // 0x1f1c38: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C3Cu; }
        if (ctx->pc != 0x1F1C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C3Cu; }
        if (ctx->pc != 0x1F1C3Cu) { return; }
    }
    ctx->pc = 0x1F1C3Cu;
label_1f1c3c:
    // 0x1f1c3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1C3Cu;
    {
        const bool branch_taken_0x1f1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c3c) {
            ctx->pc = 0x1F1C5Cu;
            goto label_1f1c5c;
        }
    }
    ctx->pc = 0x1F1C44u;
label_1f1c44:
    // 0x1f1c44: 0x8622011a  lh          $v0, 0x11A($s1)
    ctx->pc = 0x1f1c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 282)));
    // 0x1f1c48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1C48u;
    {
        const bool branch_taken_0x1f1c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c48) {
            ctx->pc = 0x1F1C5Cu;
            goto label_1f1c5c;
        }
    }
    ctx->pc = 0x1F1C50u;
    // 0x1f1c50: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x1F1C50u;
    SET_GPR_U32(ctx, 31, 0x1F1C58u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C58u; }
        if (ctx->pc != 0x1F1C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C58u; }
        if (ctx->pc != 0x1F1C58u) { return; }
    }
    ctx->pc = 0x1F1C58u;
label_1f1c58:
    // 0x1f1c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1c5c:
    // 0x1f1c5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f1c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1c60:
    // 0x1f1c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f1c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C6Cu;
            // 0x1f1c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1C74u;
}
