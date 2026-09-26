#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckAmuletAvoid__Fi
// Address: 0x1705e0 - 0x170698
void CheckAmuletAvoid__Fi_0x1705e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckAmuletAvoid__Fi_0x1705e0");
#endif

    switch (ctx->pc) {
        case 0x1705f8u: goto label_1705f8;
        case 0x170620u: goto label_170620;
        case 0x170628u: goto label_170628;
        case 0x17063cu: goto label_17063c;
        case 0x170664u: goto label_170664;
        default: break;
    }

    ctx->pc = 0x1705e0u;

    // 0x1705e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1705e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1705e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1705e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1705e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1705e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1705ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1705ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705f0: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1705F0u;
    SET_GPR_U32(ctx, 31, 0x1705F8u);
    ctx->pc = 0x1705F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1705F0u;
            // 0x1705f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1705F8u; }
        if (ctx->pc != 0x1705F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1705F8u; }
        if (ctx->pc != 0x1705F8u) { return; }
    }
    ctx->pc = 0x1705F8u;
label_1705f8:
    // 0x1705f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1705fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1705FCu;
    {
        const bool branch_taken_0x1705fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x170600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1705FCu;
            // 0x170600: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705fc) {
            ctx->pc = 0x170614u;
            goto label_170614;
        }
    }
    ctx->pc = 0x170604u;
    // 0x170604: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x170604u;
    {
        const bool branch_taken_0x170604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x170608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170604u;
            // 0x170608: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170604) {
            ctx->pc = 0x170618u;
            goto label_170618;
        }
    }
    ctx->pc = 0x17060Cu;
    // 0x17060c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17060Cu;
    {
        const bool branch_taken_0x17060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17060Cu;
            // 0x170610: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17060c) {
            ctx->pc = 0x170684u;
            goto label_170684;
        }
    }
    ctx->pc = 0x170614u;
label_170614:
    // 0x170614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170618:
    // 0x170618: 0xc067ce0  jal         func_19F380
    ctx->pc = 0x170618u;
    SET_GPR_U32(ctx, 31, 0x170620u);
    ctx->pc = 0x17061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170618u;
            // 0x17061c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170620u; }
        if (ctx->pc != 0x170620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveItemInfo__16CBattleCharaInfoFi_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170620u; }
        if (ctx->pc != 0x170620u) { return; }
    }
    ctx->pc = 0x170620u;
label_170620:
    // 0x170620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170624: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x170624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170628:
    // 0x170628: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x170628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17062c: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17062Cu;
    {
        const bool branch_taken_0x17062c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x170630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17062Cu;
            // 0x170630: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17062c) {
            ctx->pc = 0x170670u;
            goto label_170670;
        }
    }
    ctx->pc = 0x170634u;
    // 0x170634: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x170634u;
    SET_GPR_U32(ctx, 31, 0x17063Cu);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17063Cu; }
        if (ctx->pc != 0x17063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17063Cu; }
        if (ctx->pc != 0x17063Cu) { return; }
    }
    ctx->pc = 0x17063Cu;
label_17063c:
    // 0x17063c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x170640: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x170640u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x170644: 0x0  nop
    ctx->pc = 0x170644u;
    // NOP
    // 0x170648: 0x0  nop
    ctx->pc = 0x170648u;
    // NOP
    // 0x17064c: 0x1010  mfhi        $v0
    ctx->pc = 0x17064cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x170650: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170650u;
    {
        const bool branch_taken_0x170650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170650u;
            // 0x170654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170650) {
            ctx->pc = 0x170668u;
            goto label_170668;
        }
    }
    ctx->pc = 0x170658u;
    // 0x170658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17065c: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x17065Cu;
    SET_GPR_U32(ctx, 31, 0x170664u);
    ctx->pc = 0x170660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17065Cu;
            // 0x170660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170664u; }
        if (ctx->pc != 0x170664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170664u; }
        if (ctx->pc != 0x170664u) { return; }
    }
    ctx->pc = 0x170664u;
label_170664:
    // 0x170664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170668:
    // 0x170668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x170668u;
    {
        const bool branch_taken_0x170668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17066Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170668u;
            // 0x17066c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170668) {
            ctx->pc = 0x170688u;
            goto label_170688;
        }
    }
    ctx->pc = 0x170670u;
label_170670:
    // 0x170670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x170670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x170674: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x170674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x170678: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x170678u;
    {
        const bool branch_taken_0x170678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17067Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170678u;
            // 0x17067c: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170678) {
            ctx->pc = 0x170628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_170628;
        }
    }
    ctx->pc = 0x170680u;
    // 0x170680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170684:
    // 0x170684: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x170684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_170688:
    // 0x170688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17068c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17068cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170690: 0x3e00008  jr          $ra
    ctx->pc = 0x170690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170690u;
            // 0x170694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170698u;
}
