#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDrawCharaShadow__6CSceneFi
// Address: 0x2c8bf0 - 0x2c8c64
void CheckDrawCharaShadow__6CSceneFi_0x2c8bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDrawCharaShadow__6CSceneFi_0x2c8bf0");
#endif

    switch (ctx->pc) {
        case 0x2c8c14u: goto label_2c8c14;
        case 0x2c8c30u: goto label_2c8c30;
        default: break;
    }

    ctx->pc = 0x2c8bf0u;

    // 0x2c8bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c8bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c8c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8c0c: 0xc0a11a4  jal         func_284690
    ctx->pc = 0x2C8C0Cu;
    SET_GPR_U32(ctx, 31, 0x2C8C14u);
    ctx->pc = 0x2C8C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C0Cu;
            // 0x2c8c10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C14u; }
        if (ctx->pc != 0x2C8C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C14u; }
        if (ctx->pc != 0x2C8C14u) { return; }
    }
    ctx->pc = 0x2C8C14u;
label_2c8c14:
    // 0x2c8c14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8C14u;
    {
        const bool branch_taken_0x2c8c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C14u;
            // 0x2c8c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c14) {
            ctx->pc = 0x2C8C24u;
            goto label_2c8c24;
        }
    }
    ctx->pc = 0x2C8C1Cu;
    // 0x2c8c1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C8C1Cu;
    {
        const bool branch_taken_0x2c8c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C1Cu;
            // 0x2c8c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c1c) {
            ctx->pc = 0x2C8C50u;
            goto label_2c8c50;
        }
    }
    ctx->pc = 0x2C8C24u;
label_2c8c24:
    // 0x2c8c24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c8c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c28: 0xc0a11f0  jal         func_2847C0
    ctx->pc = 0x2C8C28u;
    SET_GPR_U32(ctx, 31, 0x2C8C30u);
    ctx->pc = 0x2C8C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C28u;
            // 0x2c8c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847C0u;
    if (runtime->hasFunction(0x2847C0u)) {
        auto targetFn = runtime->lookupFunction(0x2847C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C30u; }
        if (ctx->pc != 0x2C8C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatus__6CSceneFii_0x2847c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C30u; }
        if (ctx->pc != 0x2C8C30u) { return; }
    }
    ctx->pc = 0x2C8C30u;
label_2c8c30:
    // 0x2c8c30: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x2c8c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2c8c34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8C34u;
    {
        const bool branch_taken_0x2c8c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c34) {
            ctx->pc = 0x2C8C44u;
            goto label_2c8c44;
        }
    }
    ctx->pc = 0x2C8C3Cu;
    // 0x2c8c3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8C3Cu;
    {
        const bool branch_taken_0x2c8c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C3Cu;
            // 0x2c8c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c3c) {
            ctx->pc = 0x2C8C50u;
            goto label_2c8c50;
        }
    }
    ctx->pc = 0x2C8C44u;
label_2c8c44:
    // 0x2c8c44: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2c8c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2c8c48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c8c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8c4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c8c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c8c50:
    // 0x2c8c50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8c54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C5Cu;
            // 0x2c8c60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8C64u;
}
