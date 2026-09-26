#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetHouseParts__FP8CEditMapPii
// Address: 0x316d10 - 0x316dc0
void GetHouseParts__FP8CEditMapPii_0x316d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHouseParts__FP8CEditMapPii_0x316d10");
#endif

    switch (ctx->pc) {
        case 0x316d5cu: goto label_316d5c;
        case 0x316d74u: goto label_316d74;
        default: break;
    }

    ctx->pc = 0x316d10u;

    // 0x316d10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x316d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x316d14: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x316d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x316d18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x316d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x316d1c: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x316d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x316d20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x316d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x316d24: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x316d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x316d28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x316d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x316d2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x316d2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x316d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x316d34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x316d34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x316d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x316d3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x316d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x316d44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x316d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x316d4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x316d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d50: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x316d50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x316d54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x316d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d58: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x316d58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_316d5c:
    // 0x316d5c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x316d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x316d60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x316d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d64: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x316d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x316d68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x316d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d6c: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x316D6Cu;
    SET_GPR_U32(ctx, 31, 0x316D74u);
    ctx->pc = 0x316D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316D6Cu;
            // 0x316d70: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316D74u; }
        if (ctx->pc != 0x316D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316D74u; }
        if (ctx->pc != 0x316D74u) { return; }
    }
    ctx->pc = 0x316D74u;
label_316d74:
    // 0x316d74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x316d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316d78: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x316d78u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x316d7c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x316d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x316d80: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x316D80u;
    {
        const bool branch_taken_0x316d80 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x316D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316D80u;
            // 0x316d84: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d80) {
            ctx->pc = 0x316D98u;
            goto label_316d98;
        }
    }
    ctx->pc = 0x316D88u;
    // 0x316d88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x316d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x316d8c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x316d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x316d90: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x316D90u;
    {
        const bool branch_taken_0x316d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316D90u;
            // 0x316d94: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d90) {
            ctx->pc = 0x316D5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316d5c;
        }
    }
    ctx->pc = 0x316D98u;
label_316d98:
    // 0x316d98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x316d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x316d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316da0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x316da0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316da4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x316da4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316da8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x316da8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316dac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316db8: 0x3e00008  jr          $ra
    ctx->pc = 0x316DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316DB8u;
            // 0x316dbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316DC0u;
}
