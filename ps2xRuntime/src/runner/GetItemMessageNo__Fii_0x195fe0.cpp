#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemMessageNo__Fii
// Address: 0x195fe0 - 0x19603c
void GetItemMessageNo__Fii_0x195fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemMessageNo__Fii_0x195fe0");
#endif

    switch (ctx->pc) {
        case 0x196004u: goto label_196004;
        default: break;
    }

    ctx->pc = 0x195fe0u;

    // 0x195fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195fe4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x195fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195fec: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195ff4: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x195ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x195ff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x195ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ffc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x195FFCu;
    SET_GPR_U32(ctx, 31, 0x196004u);
    ctx->pc = 0x196000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195FFCu;
            // 0x196000: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196004u; }
        if (ctx->pc != 0x196004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196004u; }
        if (ctx->pc != 0x196004u) { return; }
    }
    ctx->pc = 0x196004u;
label_196004:
    // 0x196004: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196004u;
    {
        const bool branch_taken_0x196004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196004) {
            ctx->pc = 0x196014u;
            goto label_196014;
        }
    }
    ctx->pc = 0x19600Cu;
    // 0x19600c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19600Cu;
    {
        const bool branch_taken_0x19600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19600Cu;
            // 0x196010: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19600c) {
            ctx->pc = 0x19602Cu;
            goto label_19602c;
        }
    }
    ctx->pc = 0x196014u;
label_196014:
    // 0x196014: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x196014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x196018: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x196018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19601c: 0x27828088  addiu       $v0, $gp, -0x7F78
    ctx->pc = 0x19601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934664));
    // 0x196020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196024: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x196024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196028: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x196028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19602c:
    // 0x19602c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19602cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196034: 0x3e00008  jr          $ra
    ctx->pc = 0x196034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196034u;
            // 0x196038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19603Cu;
}
