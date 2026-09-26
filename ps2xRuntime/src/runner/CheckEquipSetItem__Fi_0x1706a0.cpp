#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEquipSetItem__Fi
// Address: 0x1706a0 - 0x170724
void CheckEquipSetItem__Fi_0x1706a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEquipSetItem__Fi_0x1706a0");
#endif

    switch (ctx->pc) {
        case 0x1706b4u: goto label_1706b4;
        case 0x1706dcu: goto label_1706dc;
        case 0x1706e0u: goto label_1706e0;
        case 0x1706f8u: goto label_1706f8;
        default: break;
    }

    ctx->pc = 0x1706a0u;

    // 0x1706a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1706a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1706a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1706a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1706a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1706a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1706ac: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1706ACu;
    SET_GPR_U32(ctx, 31, 0x1706B4u);
    ctx->pc = 0x1706B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1706ACu;
            // 0x1706b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1706B4u; }
        if (ctx->pc != 0x1706B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1706B4u; }
        if (ctx->pc != 0x1706B4u) { return; }
    }
    ctx->pc = 0x1706B4u;
label_1706b4:
    // 0x1706b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1706b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1706b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1706B8u;
    {
        const bool branch_taken_0x1706b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706B8u;
            // 0x1706bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706b8) {
            ctx->pc = 0x1706D0u;
            goto label_1706d0;
        }
    }
    ctx->pc = 0x1706C0u;
    // 0x1706c0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1706C0u;
    {
        const bool branch_taken_0x1706c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1706C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706C0u;
            // 0x1706c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706c0) {
            ctx->pc = 0x1706D4u;
            goto label_1706d4;
        }
    }
    ctx->pc = 0x1706C8u;
    // 0x1706c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1706C8u;
    {
        const bool branch_taken_0x1706c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706C8u;
            // 0x1706cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706c8) {
            ctx->pc = 0x170714u;
            goto label_170714;
        }
    }
    ctx->pc = 0x1706D0u;
label_1706d0:
    // 0x1706d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1706d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1706d4:
    // 0x1706d4: 0xc067ce0  jal         func_19F380
    ctx->pc = 0x1706D4u;
    SET_GPR_U32(ctx, 31, 0x1706DCu);
    ctx->pc = 0x1706D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1706D4u;
            // 0x1706d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1706DCu; }
        if (ctx->pc != 0x1706DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveItemInfo__16CBattleCharaInfoFi_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1706DCu; }
        if (ctx->pc != 0x1706DCu) { return; }
    }
    ctx->pc = 0x1706DCu;
label_1706dc:
    // 0x1706dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1706dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1706e0:
    // 0x1706e0: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x1706e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1706e4: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1706E4u;
    {
        const bool branch_taken_0x1706e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1706e4) {
            ctx->pc = 0x170700u;
            goto label_170700;
        }
    }
    ctx->pc = 0x1706ECu;
    // 0x1706ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1706ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706f0: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x1706F0u;
    SET_GPR_U32(ctx, 31, 0x1706F8u);
    ctx->pc = 0x1706F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1706F0u;
            // 0x1706f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1706F8u; }
        if (ctx->pc != 0x1706F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1706F8u; }
        if (ctx->pc != 0x1706F8u) { return; }
    }
    ctx->pc = 0x1706F8u;
label_1706f8:
    // 0x1706f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1706F8u;
    {
        const bool branch_taken_0x1706f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706F8u;
            // 0x1706fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706f8) {
            ctx->pc = 0x170714u;
            goto label_170714;
        }
    }
    ctx->pc = 0x170700u;
label_170700:
    // 0x170700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x170704: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x170704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x170708: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x170708u;
    {
        const bool branch_taken_0x170708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170708u;
            // 0x17070c: 0x2442006c  addiu       $v0, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170708) {
            ctx->pc = 0x1706E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1706e0;
        }
    }
    ctx->pc = 0x170710u;
    // 0x170710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170714:
    // 0x170714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17071c: 0x3e00008  jr          $ra
    ctx->pc = 0x17071Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17071Cu;
            // 0x170720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170724u;
}
