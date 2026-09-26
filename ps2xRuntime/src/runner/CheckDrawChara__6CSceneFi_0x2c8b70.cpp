#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDrawChara__6CSceneFi
// Address: 0x2c8b70 - 0x2c8be4
void CheckDrawChara__6CSceneFi_0x2c8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDrawChara__6CSceneFi_0x2c8b70");
#endif

    switch (ctx->pc) {
        case 0x2c8b94u: goto label_2c8b94;
        case 0x2c8bb0u: goto label_2c8bb0;
        default: break;
    }

    ctx->pc = 0x2c8b70u;

    // 0x2c8b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c8b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c8b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b8c: 0xc0a11a4  jal         func_284690
    ctx->pc = 0x2C8B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C8B94u);
    ctx->pc = 0x2C8B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B8Cu;
            // 0x2c8b90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B94u; }
        if (ctx->pc != 0x2C8B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B94u; }
        if (ctx->pc != 0x2C8B94u) { return; }
    }
    ctx->pc = 0x2C8B94u;
label_2c8b94:
    // 0x2c8b94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8B94u;
    {
        const bool branch_taken_0x2c8b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B94u;
            // 0x2c8b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b94) {
            ctx->pc = 0x2C8BA4u;
            goto label_2c8ba4;
        }
    }
    ctx->pc = 0x2C8B9Cu;
    // 0x2c8b9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C8B9Cu;
    {
        const bool branch_taken_0x2c8b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B9Cu;
            // 0x2c8ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b9c) {
            ctx->pc = 0x2C8BD0u;
            goto label_2c8bd0;
        }
    }
    ctx->pc = 0x2C8BA4u;
label_2c8ba4:
    // 0x2c8ba4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c8ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ba8: 0xc0a11f0  jal         func_2847C0
    ctx->pc = 0x2C8BA8u;
    SET_GPR_U32(ctx, 31, 0x2C8BB0u);
    ctx->pc = 0x2C8BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8BA8u;
            // 0x2c8bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847C0u;
    if (runtime->hasFunction(0x2847C0u)) {
        auto targetFn = runtime->lookupFunction(0x2847C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8BB0u; }
        if (ctx->pc != 0x2C8BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatus__6CSceneFii_0x2847c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8BB0u; }
        if (ctx->pc != 0x2C8BB0u) { return; }
    }
    ctx->pc = 0x2C8BB0u;
label_2c8bb0:
    // 0x2c8bb0: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x2c8bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2c8bb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8BB4u;
    {
        const bool branch_taken_0x2c8bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bb4) {
            ctx->pc = 0x2C8BC4u;
            goto label_2c8bc4;
        }
    }
    ctx->pc = 0x2C8BBCu;
    // 0x2c8bbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8BBCu;
    {
        const bool branch_taken_0x2c8bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8BBCu;
            // 0x2c8bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bbc) {
            ctx->pc = 0x2C8BD0u;
            goto label_2c8bd0;
        }
    }
    ctx->pc = 0x2C8BC4u;
label_2c8bc4:
    // 0x2c8bc4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2c8bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2c8bc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c8bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8bcc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c8bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c8bd0:
    // 0x2c8bd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8BDCu;
            // 0x2c8be0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8BE4u;
}
