#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckItemOver__Fv
// Address: 0x1a13b0 - 0x1a144c
void CheckItemOver__Fv_0x1a13b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckItemOver__Fv_0x1a13b0");
#endif

    switch (ctx->pc) {
        case 0x1a13c8u: goto label_1a13c8;
        case 0x1a13e4u: goto label_1a13e4;
        case 0x1a13f0u: goto label_1a13f0;
        case 0x1a140cu: goto label_1a140c;
        default: break;
    }

    ctx->pc = 0x1a13b0u;

    // 0x1a13b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a13b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a13b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a13b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a13b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a13b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a13bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a13c0: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A13C0u;
    SET_GPR_U32(ctx, 31, 0x1A13C8u);
    ctx->pc = 0x1A13C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13C0u;
            // 0x1a13c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13C8u; }
        if (ctx->pc != 0x1A13C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13C8u; }
        if (ctx->pc != 0x1A13C8u) { return; }
    }
    ctx->pc = 0x1A13C8u;
label_1a13c8:
    // 0x1a13c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a13c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13cc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A13CCu;
    {
        const bool branch_taken_0x1a13cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A13D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13CCu;
            // 0x1a13d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13cc) {
            ctx->pc = 0x1A13DCu;
            goto label_1a13dc;
        }
    }
    ctx->pc = 0x1A13D4u;
    // 0x1a13d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A13D4u;
    {
        const bool branch_taken_0x1a13d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A13D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13D4u;
            // 0x1a13d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13d4) {
            ctx->pc = 0x1A1434u;
            goto label_1a1434;
        }
    }
    ctx->pc = 0x1A13DCu;
label_1a13dc:
    // 0x1a13dc: 0xc068644  jal         func_1A1910
    ctx->pc = 0x1A13DCu;
    SET_GPR_U32(ctx, 31, 0x1A13E4u);
    ctx->pc = 0x1A13E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13DCu;
            // 0x1a13e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13E4u; }
        if (ctx->pc != 0x1A13E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13E4u; }
        if (ctx->pc != 0x1A13E4u) { return; }
    }
    ctx->pc = 0x1A13E4u;
label_1a13e4:
    // 0x1a13e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a13e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13e8: 0xc068644  jal         func_1A1910
    ctx->pc = 0x1A13E8u;
    SET_GPR_U32(ctx, 31, 0x1A13F0u);
    ctx->pc = 0x1A13ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13E8u;
            // 0x1a13ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13F0u; }
        if (ctx->pc != 0x1A13F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13F0u; }
        if (ctx->pc != 0x1A13F0u) { return; }
    }
    ctx->pc = 0x1A13F0u;
label_1a13f0:
    // 0x1a13f0: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1a13f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a13f4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1A13F4u;
    {
        const bool branch_taken_0x1a13f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A13F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A13F4u;
            // 0x1a13f8: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13f4) {
            ctx->pc = 0x1A1430u;
            goto label_1a1430;
        }
    }
    ctx->pc = 0x1A13FCu;
    // 0x1a13fc: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1a13fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a1400: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a1400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a1404: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a1404u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a1408: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a1408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a140c:
    // 0x1a140c: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x1a140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1a1410: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x1a1410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a1414: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1414u;
    {
        const bool branch_taken_0x1a1414 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a1414) {
            ctx->pc = 0x1A1420u;
            goto label_1a1420;
        }
    }
    ctx->pc = 0x1A141Cu;
    // 0x1a141c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a141cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a1420:
    // 0x1a1420: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a1420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a1424: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x1a1424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1428: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A1428u;
    {
        const bool branch_taken_0x1a1428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A142Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1428u;
            // 0x1a142c: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1428) {
            ctx->pc = 0x1A140Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a140c;
        }
    }
    ctx->pc = 0x1A1430u;
label_1a1430:
    // 0x1a1430: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a1430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1434:
    // 0x1a1434: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a1434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1438: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a1438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a143c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a143cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1444: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1444u;
            // 0x1a1448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A144Cu;
}
