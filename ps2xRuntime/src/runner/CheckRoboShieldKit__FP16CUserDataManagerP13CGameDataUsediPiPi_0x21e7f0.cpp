#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckRoboShieldKit__FP16CUserDataManagerP13CGameDataUsediPiPi
// Address: 0x21e7f0 - 0x21e8b4
void CheckRoboShieldKit__FP16CUserDataManagerP13CGameDataUsediPiPi_0x21e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckRoboShieldKit__FP16CUserDataManagerP13CGameDataUsediPiPi_0x21e7f0");
#endif

    switch (ctx->pc) {
        case 0x21e82cu: goto label_21e82c;
        default: break;
    }

    ctx->pc = 0x21e7f0u;

    // 0x21e7f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21e7f4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x21e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21e7f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21e7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21e7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21e800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e804: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21e804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e80c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21e80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e814: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x21e814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e818: 0x80a30004  lb          $v1, 0x4($a1)
    ctx->pc = 0x21e818u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21e81c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x21E81Cu;
    {
        const bool branch_taken_0x21e81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E81Cu;
            // 0x21e820: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e81c) {
            ctx->pc = 0x21E894u;
            goto label_21e894;
        }
    }
    ctx->pc = 0x21E824u;
    // 0x21e824: 0xc066a00  jal         func_19A800
    ctx->pc = 0x21E824u;
    SET_GPR_U32(ctx, 31, 0x21E82Cu);
    ctx->pc = 0x21E828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E824u;
            // 0x21e828: 0x84a40002  lh          $a0, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A800u;
    if (runtime->hasFunction(0x19A800u)) {
        auto targetFn = runtime->lookupFunction(0x19A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E82Cu; }
        if (ctx->pc != 0x21E82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShiledKitLimmit__Fi_0x19a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E82Cu; }
        if (ctx->pc != 0x21E82Cu) { return; }
    }
    ctx->pc = 0x21E82Cu;
label_21e82c:
    // 0x21e82c: 0x26644660  addiu       $a0, $s3, 0x4660
    ctx->pc = 0x21e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 18016));
    // 0x21e830: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E830u;
    {
        const bool branch_taken_0x21e830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e830) {
            ctx->pc = 0x21E840u;
            goto label_21e840;
        }
    }
    ctx->pc = 0x21E838u;
    // 0x21e838: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21E838u;
    {
        const bool branch_taken_0x21e838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E838u;
            // 0x21e83c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e838) {
            ctx->pc = 0x21E898u;
            goto label_21e898;
        }
    }
    ctx->pc = 0x21E840u;
label_21e840:
    // 0x21e840: 0x948301e8  lhu         $v1, 0x1E8($a0)
    ctx->pc = 0x21e840u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x21e844: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x21e844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21e848: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E848u;
    {
        const bool branch_taken_0x21e848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e848) {
            ctx->pc = 0x21E894u;
            goto label_21e894;
        }
    }
    ctx->pc = 0x21E850u;
    // 0x21e850: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21e854: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21e854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21e858: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x21E858u;
    {
        const bool branch_taken_0x21e858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E858u;
            // 0x21e85c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e858) {
            ctx->pc = 0x21E894u;
            goto label_21e894;
        }
    }
    ctx->pc = 0x21E860u;
    // 0x21e860: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21e864: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21e864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21e868: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x21e868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x21e86c: 0x948301e8  lhu         $v1, 0x1E8($a0)
    ctx->pc = 0x21e86cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x21e870: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21e874: 0xa48301e8  sh          $v1, 0x1E8($a0)
    ctx->pc = 0x21e874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 488), (uint16_t)GPR_U32(ctx, 3));
    // 0x21e878: 0x948301e8  lhu         $v1, 0x1E8($a0)
    ctx->pc = 0x21e878u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x21e87c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x21e87cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21e880: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E880u;
    {
        const bool branch_taken_0x21e880 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e880) {
            ctx->pc = 0x21E88Cu;
            goto label_21e88c;
        }
    }
    ctx->pc = 0x21E888u;
    // 0x21e888: 0xa48201e8  sh          $v0, 0x1E8($a0)
    ctx->pc = 0x21e888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 488), (uint16_t)GPR_U32(ctx, 2));
label_21e88c:
    // 0x21e88c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21E88Cu;
    {
        const bool branch_taken_0x21e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E88Cu;
            // 0x21e890: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e88c) {
            ctx->pc = 0x21E898u;
            goto label_21e898;
        }
    }
    ctx->pc = 0x21E894u;
label_21e894:
    // 0x21e894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21e894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21e898:
    // 0x21e898: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21e898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e89c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e89cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e8a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e8a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e8a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21E8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E8ACu;
            // 0x21e8b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E8B4u;
}
