#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckCapacity__16CUserDataManagerFv
// Address: 0x19c570 - 0x19c5e8
void CheckCapacity__16CUserDataManagerFv_0x19c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckCapacity__16CUserDataManagerFv_0x19c570");
#endif

    switch (ctx->pc) {
        case 0x19c590u: goto label_19c590;
        case 0x19c5acu: goto label_19c5ac;
        default: break;
    }

    ctx->pc = 0x19c570u;

    // 0x19c570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19c574: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19c578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c57c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c580: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19c580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c588: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19c588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c58c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19c58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c590:
    // 0x19c590: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x19c590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x19c594: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x19c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19c598: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x19c598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19c59c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C59Cu;
    {
        const bool branch_taken_0x19c59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c59c) {
            ctx->pc = 0x19C5BCu;
            goto label_19c5bc;
        }
    }
    ctx->pc = 0x19C5A4u;
    // 0x19c5a4: 0xc06570c  jal         func_195C30
    ctx->pc = 0x19C5A4u;
    SET_GPR_U32(ctx, 31, 0x19C5ACu);
    ctx->pc = 0x19C5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5A4u;
            // 0x19c5a8: 0x84840002  lh          $a0, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C30u;
    if (runtime->hasFunction(0x195C30u)) {
        auto targetFn = runtime->lookupFunction(0x195C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5ACu; }
        if (ctx->pc != 0x19C5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemInfoData__Fi_0x195c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5ACu; }
        if (ctx->pc != 0x19C5ACu) { return; }
    }
    ctx->pc = 0x19C5ACu;
label_19c5ac:
    // 0x19c5ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C5ACu;
    {
        const bool branch_taken_0x19c5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c5ac) {
            ctx->pc = 0x19C5BCu;
            goto label_19c5bc;
        }
    }
    ctx->pc = 0x19C5B4u;
    // 0x19c5b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C5B4u;
    {
        const bool branch_taken_0x19c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5B4u;
            // 0x19c5b8: 0x8442000a  lh          $v0, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5b4) {
            ctx->pc = 0x19C5D0u;
            goto label_19c5d0;
        }
    }
    ctx->pc = 0x19C5BCu;
label_19c5bc:
    // 0x19c5bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19c5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19c5c0: 0x2a020096  slti        $v0, $s0, 0x96
    ctx->pc = 0x19c5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x19c5c4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19C5C4u;
    {
        const bool branch_taken_0x19c5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5C4u;
            // 0x19c5c8: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5c4) {
            ctx->pc = 0x19C590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19c590;
        }
    }
    ctx->pc = 0x19C5CCu;
    // 0x19c5cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c5ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c5d0:
    // 0x19c5d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19c5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c5d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c5d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c5d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c5dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5E0u;
            // 0x19c5e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C5E8u;
}
