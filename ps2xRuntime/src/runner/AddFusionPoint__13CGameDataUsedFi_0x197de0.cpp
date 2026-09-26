#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddFusionPoint__13CGameDataUsedFi
// Address: 0x197de0 - 0x197e68
void AddFusionPoint__13CGameDataUsedFi_0x197de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddFusionPoint__13CGameDataUsedFi_0x197de0");
#endif

    switch (ctx->pc) {
        case 0x197e1cu: goto label_197e1c;
        default: break;
    }

    ctx->pc = 0x197de0u;

    // 0x197de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197de4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197de8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197dec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197df4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x197df4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197df8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x197DF8u;
    {
        const bool branch_taken_0x197df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197DF8u;
            // 0x197dfc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197df8) {
            ctx->pc = 0x197E50u;
            goto label_197e50;
        }
    }
    ctx->pc = 0x197E00u;
    // 0x197e00: 0x8622003c  lh          $v0, 0x3C($s1)
    ctx->pc = 0x197e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x197e04: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x197e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x197e08: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x197E08u;
    {
        const bool branch_taken_0x197e08 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x197E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197E08u;
            // 0x197e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e08) {
            ctx->pc = 0x197E14u;
            goto label_197e14;
        }
    }
    ctx->pc = 0x197E10u;
    // 0x197e10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197e14:
    // 0x197e14: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x197E14u;
    SET_GPR_U32(ctx, 31, 0x197E1Cu);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E1Cu; }
        if (ctx->pc != 0x197E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E1Cu; }
        if (ctx->pc != 0x197E1Cu) { return; }
    }
    ctx->pc = 0x197E1Cu;
label_197e1c:
    // 0x197e1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197E1Cu;
    {
        const bool branch_taken_0x197e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197E1Cu;
            // 0x197e20: 0x2a0203e7  slti        $v0, $s0, 0x3E7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)999) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e1c) {
            ctx->pc = 0x197E38u;
            goto label_197e38;
        }
    }
    ctx->pc = 0x197E24u;
    // 0x197e24: 0x2a02270f  slti        $v0, $s0, 0x270F
    ctx->pc = 0x197e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x197e28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197E28u;
    {
        const bool branch_taken_0x197e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197e28) {
            ctx->pc = 0x197E44u;
            goto label_197e44;
        }
    }
    ctx->pc = 0x197E30u;
    // 0x197e30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x197E30u;
    {
        const bool branch_taken_0x197e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197E30u;
            // 0x197e34: 0x2410270f  addiu       $s0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e30) {
            ctx->pc = 0x197E44u;
            goto label_197e44;
        }
    }
    ctx->pc = 0x197E38u;
label_197e38:
    // 0x197e38: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x197E38u;
    {
        const bool branch_taken_0x197e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197e38) {
            ctx->pc = 0x197E44u;
            goto label_197e44;
        }
    }
    ctx->pc = 0x197E40u;
    // 0x197e40: 0x241003e7  addiu       $s0, $zero, 0x3E7
    ctx->pc = 0x197e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_197e44:
    // 0x197e44: 0xa630003c  sh          $s0, 0x3C($s1)
    ctx->pc = 0x197e44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 16));
    // 0x197e48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197E48u;
    {
        const bool branch_taken_0x197e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197E48u;
            // 0x197e4c: 0x8622003c  lh          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e48) {
            ctx->pc = 0x197E54u;
            goto label_197e54;
        }
    }
    ctx->pc = 0x197E50u;
label_197e50:
    // 0x197e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197e54:
    // 0x197e54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197e60: 0x3e00008  jr          $ra
    ctx->pc = 0x197E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197E60u;
            // 0x197e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197E68u;
}
