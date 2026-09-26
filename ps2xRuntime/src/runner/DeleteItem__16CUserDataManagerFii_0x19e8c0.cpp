#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteItem__16CUserDataManagerFii
// Address: 0x19e8c0 - 0x19e9d4
void DeleteItem__16CUserDataManagerFii_0x19e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteItem__16CUserDataManagerFii_0x19e8c0");
#endif

    switch (ctx->pc) {
        case 0x19e8f8u: goto label_19e8f8;
        case 0x19e904u: goto label_19e904;
        case 0x19e914u: goto label_19e914;
        case 0x19e948u: goto label_19e948;
        case 0x19e950u: goto label_19e950;
        case 0x19e968u: goto label_19e968;
        default: break;
    }

    ctx->pc = 0x19e8c0u;

    // 0x19e8c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19e8c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19e8c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19e8cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19e8d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19e8d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19e8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e8d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19e8d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e8e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19e8e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e8f0: 0xc066d14  jal         func_19B450
    ctx->pc = 0x19E8F0u;
    SET_GPR_U32(ctx, 31, 0x19E8F8u);
    ctx->pc = 0x19E8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E8F0u;
            // 0x19e8f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8F8u; }
        if (ctx->pc != 0x19E8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8F8u; }
        if (ctx->pc != 0x19E8F8u) { return; }
    }
    ctx->pc = 0x19E8F8u;
label_19e8f8:
    // 0x19e8f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8fc: 0x24110095  addiu       $s1, $zero, 0x95
    ctx->pc = 0x19e8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x19e900: 0x24123edc  addiu       $s2, $zero, 0x3EDC
    ctx->pc = 0x19e900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16092));
label_19e904:
    // 0x19e904: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x19e904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x19e908: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19e908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e90c: 0xc0679fc  jal         func_19E7F0
    ctx->pc = 0x19E90Cu;
    SET_GPR_U32(ctx, 31, 0x19E914u);
    ctx->pc = 0x19E910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E90Cu;
            // 0x19e910: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E7F0u;
    if (runtime->hasFunction(0x19E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x19E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E914u; }
        if (ctx->pc != 0x19E914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_Local__FP13CGameDataUsedii_0x19e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E914u; }
        if (ctx->pc != 0x19E914u) { return; }
    }
    ctx->pc = 0x19E914u;
label_19e914:
    // 0x19e914: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19e914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e918: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E918u;
    {
        const bool branch_taken_0x19e918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e918) {
            ctx->pc = 0x19E924u;
            goto label_19e924;
        }
    }
    ctx->pc = 0x19E920u;
    // 0x19e920: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x19e920u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_19e924:
    // 0x19e924: 0x0  nop
    ctx->pc = 0x19e924u;
    // NOP
    // 0x19e928: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x19e928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x19e92c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E92Cu;
    {
        const bool branch_taken_0x19e92c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e92c) {
            ctx->pc = 0x19E940u;
            goto label_19e940;
        }
    }
    ctx->pc = 0x19E934u;
    // 0x19e934: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19e934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x19e938: 0x621fff2  bgez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x19E938u;
    {
        const bool branch_taken_0x19e938 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x19E93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E938u;
            // 0x19e93c: 0x2652ff94  addiu       $s2, $s2, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e938) {
            ctx->pc = 0x19E904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e904;
        }
    }
    ctx->pc = 0x19E940u;
label_19e940:
    // 0x19e940: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19e940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e944: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19e944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e948:
    // 0x19e948: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19e948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e94c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19e94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e950:
    // 0x19e950: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x19e950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x19e954: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19e958: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19e958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e95c: 0x24443f74  addiu       $a0, $v0, 0x3F74
    ctx->pc = 0x19e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16244));
    // 0x19e960: 0xc0679fc  jal         func_19E7F0
    ctx->pc = 0x19E960u;
    SET_GPR_U32(ctx, 31, 0x19E968u);
    ctx->pc = 0x19E964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E960u;
            // 0x19e964: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E7F0u;
    if (runtime->hasFunction(0x19E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x19E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E968u; }
        if (ctx->pc != 0x19E968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem_Local__FP13CGameDataUsedii_0x19e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E968u; }
        if (ctx->pc != 0x19E968u) { return; }
    }
    ctx->pc = 0x19E968u;
label_19e968:
    // 0x19e968: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19e968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e96c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E96Cu;
    {
        const bool branch_taken_0x19e96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e96c) {
            ctx->pc = 0x19E978u;
            goto label_19e978;
        }
    }
    ctx->pc = 0x19E974u;
    // 0x19e974: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x19e974u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_19e978:
    // 0x19e978: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x19e978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x19e97c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E97Cu;
    {
        const bool branch_taken_0x19e97c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e97c) {
            ctx->pc = 0x19E994u;
            goto label_19e994;
        }
    }
    ctx->pc = 0x19E984u;
    // 0x19e984: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19e984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19e988: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x19e988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19e98c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19E98Cu;
    {
        const bool branch_taken_0x19e98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E98Cu;
            // 0x19e990: 0x2652006c  addiu       $s2, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e98c) {
            ctx->pc = 0x19E950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e950;
        }
    }
    ctx->pc = 0x19E994u;
label_19e994:
    // 0x19e994: 0x0  nop
    ctx->pc = 0x19e994u;
    // NOP
    // 0x19e998: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19e998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19e99c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x19e99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19e9a0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19E9A0u;
    {
        const bool branch_taken_0x19e9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E9A0u;
            // 0x19e9a4: 0x2673038c  addiu       $s3, $s3, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9a0) {
            ctx->pc = 0x19E948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e948;
        }
    }
    ctx->pc = 0x19E9A8u;
    // 0x19e9a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19e9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e9b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19e9b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e9b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19e9b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e9b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19e9b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e9bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19e9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e9c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e9c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e9c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x19E9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E9CCu;
            // 0x19e9d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E9D4u;
}
