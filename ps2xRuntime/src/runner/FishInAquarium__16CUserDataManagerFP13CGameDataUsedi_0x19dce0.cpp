#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FishInAquarium__16CUserDataManagerFP13CGameDataUsedi
// Address: 0x19dce0 - 0x19dd6c
void FishInAquarium__16CUserDataManagerFP13CGameDataUsedi_0x19dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FishInAquarium__16CUserDataManagerFP13CGameDataUsedi_0x19dce0");
#endif

    switch (ctx->pc) {
        case 0x19dd20u: goto label_19dd20;
        case 0x19dd48u: goto label_19dd48;
        case 0x19dd50u: goto label_19dd50;
        default: break;
    }

    ctx->pc = 0x19dce0u;

    // 0x19dce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19dce4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19dce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19dcec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19dcf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19dcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19dcf8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19dcf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcfc: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DCFCu;
    {
        const bool branch_taken_0x19dcfc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x19DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCFCu;
            // 0x19dd00: 0x24904958  addiu       $s0, $a0, 0x4958 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 18776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcfc) {
            ctx->pc = 0x19DD10u;
            goto label_19dd10;
        }
    }
    ctx->pc = 0x19DD04u;
    // 0x19dd04: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x19dd04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19dd08: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DD08u;
    {
        const bool branch_taken_0x19dd08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD08u;
            // 0x19dd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd08) {
            ctx->pc = 0x19DD18u;
            goto label_19dd18;
        }
    }
    ctx->pc = 0x19DD10u;
label_19dd10:
    // 0x19dd10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19DD10u;
    {
        const bool branch_taken_0x19dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD10u;
            // 0x19dd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd10) {
            ctx->pc = 0x19DD54u;
            goto label_19dd54;
        }
    }
    ctx->pc = 0x19DD18u;
label_19dd18:
    // 0x19dd18: 0xc066898  jal         func_19A260
    ctx->pc = 0x19DD18u;
    SET_GPR_U32(ctx, 31, 0x19DD20u);
    ctx->pc = 0x19DD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD18u;
            // 0x19dd1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A260u;
    if (runtime->hasFunction(0x19A260u)) {
        auto targetFn = runtime->lookupFunction(0x19A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD20u; }
        if (ctx->pc != 0x19DD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchAqua1NotUsed__13CFishAquariumFi_0x19a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD20u; }
        if (ctx->pc != 0x19DD20u) { return; }
    }
    ctx->pc = 0x19DD20u;
label_19dd20:
    // 0x19dd20: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DD20u;
    {
        const bool branch_taken_0x19dd20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19dd20) {
            ctx->pc = 0x19DD30u;
            goto label_19dd30;
        }
    }
    ctx->pc = 0x19DD28u;
    // 0x19dd28: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DD28u;
    {
        const bool branch_taken_0x19dd28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD28u;
            // 0x19dd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd28) {
            ctx->pc = 0x19DD38u;
            goto label_19dd38;
        }
    }
    ctx->pc = 0x19DD30u;
label_19dd30:
    // 0x19dd30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19DD30u;
    {
        const bool branch_taken_0x19dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD30u;
            // 0x19dd34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd30) {
            ctx->pc = 0x19DD54u;
            goto label_19dd54;
        }
    }
    ctx->pc = 0x19DD38u;
label_19dd38:
    // 0x19dd38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19dd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd40: 0xc0668b4  jal         func_19A2D0
    ctx->pc = 0x19DD40u;
    SET_GPR_U32(ctx, 31, 0x19DD48u);
    ctx->pc = 0x19DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD40u;
            // 0x19dd44: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A2D0u;
    if (runtime->hasFunction(0x19A2D0u)) {
        auto targetFn = runtime->lookupFunction(0x19A2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD48u; }
        if (ctx->pc != 0x19DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishIntoAquarium__13CFishAquariumFiiP13CGameDataUsed_0x19a2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD48u; }
        if (ctx->pc != 0x19DD48u) { return; }
    }
    ctx->pc = 0x19DD48u;
label_19dd48:
    // 0x19dd48: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19DD48u;
    SET_GPR_U32(ctx, 31, 0x19DD50u);
    ctx->pc = 0x19DD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD48u;
            // 0x19dd4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD50u; }
        if (ctx->pc != 0x19DD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD50u; }
        if (ctx->pc != 0x19DD50u) { return; }
    }
    ctx->pc = 0x19DD50u;
label_19dd50:
    // 0x19dd50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dd54:
    // 0x19dd54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19dd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dd58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19dd58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dd5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dd60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19dd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dd64: 0x3e00008  jr          $ra
    ctx->pc = 0x19DD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD64u;
            // 0x19dd68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DD6Cu;
}
