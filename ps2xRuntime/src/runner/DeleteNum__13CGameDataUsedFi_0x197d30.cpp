#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteNum__13CGameDataUsedFi
// Address: 0x197d30 - 0x197dc0
void DeleteNum__13CGameDataUsedFi_0x197d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteNum__13CGameDataUsedFi_0x197d30");
#endif

    switch (ctx->pc) {
        case 0x197d60u: goto label_197d60;
        case 0x197d94u: goto label_197d94;
        case 0x197da4u: goto label_197da4;
        default: break;
    }

    ctx->pc = 0x197d30u;

    // 0x197d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x197d34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x197d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x197d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197d40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x197d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d48: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197D48u;
    {
        const bool branch_taken_0x197d48 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x197D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D48u;
            // 0x197d4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d48) {
            ctx->pc = 0x197D58u;
            goto label_197d58;
        }
    }
    ctx->pc = 0x197D50u;
    // 0x197d50: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x197D50u;
    {
        const bool branch_taken_0x197d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D50u;
            // 0x197d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d50) {
            ctx->pc = 0x197DA8u;
            goto label_197da8;
        }
    }
    ctx->pc = 0x197D58u;
label_197d58:
    // 0x197d58: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x197D58u;
    SET_GPR_U32(ctx, 31, 0x197D60u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D60u; }
        if (ctx->pc != 0x197D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D60u; }
        if (ctx->pc != 0x197D60u) { return; }
    }
    ctx->pc = 0x197D60u;
label_197d60:
    // 0x197d60: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x197d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x197d64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197d6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197D6Cu;
    {
        const bool branch_taken_0x197d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D6Cu;
            // 0x197d70: 0x112823  negu        $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d6c) {
            ctx->pc = 0x197D88u;
            goto label_197d88;
        }
    }
    ctx->pc = 0x197D74u;
    // 0x197d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197d78: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197D78u;
    {
        const bool branch_taken_0x197d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D78u;
            // 0x197d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d78) {
            ctx->pc = 0x197D8Cu;
            goto label_197d8c;
        }
    }
    ctx->pc = 0x197D80u;
    // 0x197d80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x197D80u;
    {
        const bool branch_taken_0x197d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D80u;
            // 0x197d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d80) {
            ctx->pc = 0x197D9Cu;
            goto label_197d9c;
        }
    }
    ctx->pc = 0x197D88u;
label_197d88:
    // 0x197d88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_197d8c:
    // 0x197d8c: 0xc065cdc  jal         func_197370
    ctx->pc = 0x197D8Cu;
    SET_GPR_U32(ctx, 31, 0x197D94u);
    ctx->pc = 0x197D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D8Cu;
            // 0x197d90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D94u; }
        if (ctx->pc != 0x197D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D94u; }
        if (ctx->pc != 0x197D94u) { return; }
    }
    ctx->pc = 0x197D94u;
label_197d94:
    // 0x197d94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x197D94u;
    {
        const bool branch_taken_0x197d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D94u;
            // 0x197d98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d94) {
            ctx->pc = 0x197DA4u;
            goto label_197da4;
        }
    }
    ctx->pc = 0x197D9Cu;
label_197d9c:
    // 0x197d9c: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x197D9Cu;
    SET_GPR_U32(ctx, 31, 0x197DA4u);
    ctx->pc = 0x197DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D9Cu;
            // 0x197da0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DA4u; }
        if (ctx->pc != 0x197DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DA4u; }
        if (ctx->pc != 0x197DA4u) { return; }
    }
    ctx->pc = 0x197DA4u;
label_197da4:
    // 0x197da4: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x197da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_197da8:
    // 0x197da8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x197da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197dac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197db8: 0x3e00008  jr          $ra
    ctx->pc = 0x197DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197DB8u;
            // 0x197dbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197DC0u;
}
