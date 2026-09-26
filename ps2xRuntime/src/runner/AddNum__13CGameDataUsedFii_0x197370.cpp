#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddNum__13CGameDataUsedFii
// Address: 0x197370 - 0x19747c
void AddNum__13CGameDataUsedFii_0x197370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddNum__13CGameDataUsedFii_0x197370");
#endif

    switch (ctx->pc) {
        case 0x1973acu: goto label_1973ac;
        case 0x19745cu: goto label_19745c;
        default: break;
    }

    ctx->pc = 0x197370u;

    // 0x197370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x197374: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x197374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x197378: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19737c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197384: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19738c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19738cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197390: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x197394: 0x1c800003  bgtz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197394u;
    {
        const bool branch_taken_0x197394 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x197398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197394u;
            // 0x197398: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197394) {
            ctx->pc = 0x1973A4u;
            goto label_1973a4;
        }
    }
    ctx->pc = 0x19739Cu;
    // 0x19739c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19739Cu;
    {
        const bool branch_taken_0x19739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19739Cu;
            // 0x1973a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19739c) {
            ctx->pc = 0x197460u;
            goto label_197460;
        }
    }
    ctx->pc = 0x1973A4u;
label_1973a4:
    // 0x1973a4: 0xc065708  jal         func_195C20
    ctx->pc = 0x1973A4u;
    SET_GPR_U32(ctx, 31, 0x1973ACu);
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973ACu; }
        if (ctx->pc != 0x1973ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1973ACu; }
        if (ctx->pc != 0x1973ACu) { return; }
    }
    ctx->pc = 0x1973ACu;
label_1973ac:
    // 0x1973ac: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x1973acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1973b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1973b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1973b4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1973B4u;
    {
        const bool branch_taken_0x1973b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1973B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1973B4u;
            // 0x1973b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973b4) {
            ctx->pc = 0x197408u;
            goto label_197408;
        }
    }
    ctx->pc = 0x1973BCu;
    // 0x1973bc: 0x10930003  beq         $a0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1973BCu;
    {
        const bool branch_taken_0x1973bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x1973bc) {
            ctx->pc = 0x1973CCu;
            goto label_1973cc;
        }
    }
    ctx->pc = 0x1973C4u;
    // 0x1973c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1973C4u;
    {
        const bool branch_taken_0x1973c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1973C4u;
            // 0x1973c8: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973c4) {
            ctx->pc = 0x197444u;
            goto label_197444;
        }
    }
    ctx->pc = 0x1973CCu;
label_1973cc:
    // 0x1973cc: 0x86430010  lh          $v1, 0x10($s2)
    ctx->pc = 0x1973ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1973d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1973d4: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x1973d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1973d8: 0x86430010  lh          $v1, 0x10($s2)
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1973dc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1973DCu;
    {
        const bool branch_taken_0x1973dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1973dc) {
            ctx->pc = 0x1973E8u;
            goto label_1973e8;
        }
    }
    ctx->pc = 0x1973E4u;
    // 0x1973e4: 0xa6400010  sh          $zero, 0x10($s2)
    ctx->pc = 0x1973e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 0));
label_1973e8:
    // 0x1973e8: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x1973e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1973ec: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x1973ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1973f0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1973f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1973f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1973F4u;
    {
        const bool branch_taken_0x1973f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1973f4) {
            ctx->pc = 0x197400u;
            goto label_197400;
        }
    }
    ctx->pc = 0x1973FCu;
    // 0x1973fc: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x1973fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
label_197400:
    // 0x197400: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x197400u;
    {
        const bool branch_taken_0x197400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197400u;
            // 0x197404: 0x86530010  lh          $s3, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197400) {
            ctx->pc = 0x197444u;
            goto label_197444;
        }
    }
    ctx->pc = 0x197408u;
label_197408:
    // 0x197408: 0x8643004a  lh          $v1, 0x4A($s2)
    ctx->pc = 0x197408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 74)));
    // 0x19740c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x19740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x197410: 0xa643004a  sh          $v1, 0x4A($s2)
    ctx->pc = 0x197410u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x197414: 0x8643004a  lh          $v1, 0x4A($s2)
    ctx->pc = 0x197414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 74)));
    // 0x197418: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197418u;
    {
        const bool branch_taken_0x197418 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x197418) {
            ctx->pc = 0x197424u;
            goto label_197424;
        }
    }
    ctx->pc = 0x197420u;
    // 0x197420: 0xa640004a  sh          $zero, 0x4A($s2)
    ctx->pc = 0x197420u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 74), (uint16_t)GPR_U32(ctx, 0));
label_197424:
    // 0x197424: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x197424u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x197428: 0x8642004a  lh          $v0, 0x4A($s2)
    ctx->pc = 0x197428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 74)));
    // 0x19742c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19742cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197430: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x197430u;
    {
        const bool branch_taken_0x197430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197430) {
            ctx->pc = 0x19743Cu;
            goto label_19743c;
        }
    }
    ctx->pc = 0x197438u;
    // 0x197438: 0xa643004a  sh          $v1, 0x4A($s2)
    ctx->pc = 0x197438u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 74), (uint16_t)GPR_U32(ctx, 3));
label_19743c:
    // 0x19743c: 0x8653004a  lh          $s3, 0x4A($s2)
    ctx->pc = 0x19743cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 74)));
    // 0x197440: 0x0  nop
    ctx->pc = 0x197440u;
    // NOP
label_197444:
    // 0x197444: 0x1e600006  bgtz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x197444u;
    {
        const bool branch_taken_0x197444 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x197448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197444u;
            // 0x197448: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197444) {
            ctx->pc = 0x197460u;
            goto label_197460;
        }
    }
    ctx->pc = 0x19744Cu;
    // 0x19744c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19744Cu;
    {
        const bool branch_taken_0x19744c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19744Cu;
            // 0x197450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19744c) {
            ctx->pc = 0x19745Cu;
            goto label_19745c;
        }
    }
    ctx->pc = 0x197454u;
    // 0x197454: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x197454u;
    SET_GPR_U32(ctx, 31, 0x19745Cu);
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19745Cu; }
        if (ctx->pc != 0x19745Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19745Cu; }
        if (ctx->pc != 0x19745Cu) { return; }
    }
    ctx->pc = 0x19745Cu;
label_19745c:
    // 0x19745c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x19745cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_197460:
    // 0x197460: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x197460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197464: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197468: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19746c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19746cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197474: 0x3e00008  jr          $ra
    ctx->pc = 0x197474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197474u;
            // 0x197478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19747Cu;
}
