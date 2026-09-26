#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_NOW_HP_RATE__FP12RS_STACKDATAi
// Address: 0x2d1540 - 0x2d15bc
void ps2__GET_NOW_HP_RATE__FP12RS_STACKDATAi_0x2d1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_NOW_HP_RATE__FP12RS_STACKDATAi_0x2d1540");
#endif

    switch (ctx->pc) {
        case 0x2d156cu: goto label_2d156c;
        case 0x2d1578u: goto label_2d1578;
        case 0x2d1584u: goto label_2d1584;
        case 0x2d15a4u: goto label_2d15a4;
        default: break;
    }

    ctx->pc = 0x2d1540u;

    // 0x2d1540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1548: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d154c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d1550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1554: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1554u;
    {
        const bool branch_taken_0x2d1554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1554u;
            // 0x2d1558: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1554) {
            ctx->pc = 0x2D1564u;
            goto label_2d1564;
        }
    }
    ctx->pc = 0x2D155Cu;
    // 0x2d155c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D155Cu;
    {
        const bool branch_taken_0x2d155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D155Cu;
            // 0x2d1560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d155c) {
            ctx->pc = 0x2D15A8u;
            goto label_2d15a8;
        }
    }
    ctx->pc = 0x2D1564u;
label_2d1564:
    // 0x2d1564: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2D1564u;
    SET_GPR_U32(ctx, 31, 0x2D156Cu);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D156Cu; }
        if (ctx->pc != 0x2D156Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D156Cu; }
        if (ctx->pc != 0x2D156Cu) { return; }
    }
    ctx->pc = 0x2D156Cu;
label_2d156c:
    // 0x2d156c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d156cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1570: 0xc0680f8  jal         func_1A03E0
    ctx->pc = 0x2D1570u;
    SET_GPR_U32(ctx, 31, 0x2D1578u);
    ctx->pc = 0x2D1574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1570u;
            // 0x2d1574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1578u; }
        if (ctx->pc != 0x2D1578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1578u; }
        if (ctx->pc != 0x2D1578u) { return; }
    }
    ctx->pc = 0x2D1578u;
label_2d1578:
    // 0x2d1578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d157c: 0xc0680e8  jal         func_1A03A0
    ctx->pc = 0x2D157Cu;
    SET_GPR_U32(ctx, 31, 0x2D1584u);
    ctx->pc = 0x2D1580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D157Cu;
            // 0x2d1580: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03A0u;
    if (runtime->hasFunction(0x1A03A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1584u; }
        if (ctx->pc != 0x2D1584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1584u; }
        if (ctx->pc != 0x2D1584u) { return; }
    }
    ctx->pc = 0x2D1584u;
label_2d1584:
    // 0x2d1584: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1584u;
    {
        const bool branch_taken_0x2d1584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1584u;
            // 0x2d1588: 0x202001a  div         $zero, $s0, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1584) {
            ctx->pc = 0x2D1590u;
            goto label_2d1590;
        }
    }
    ctx->pc = 0x2D158Cu;
    // 0x2d158c: 0x1cd  break       0, 7
    ctx->pc = 0x2d158cu;
    runtime->handleBreak(rdram, ctx);
label_2d1590:
    // 0x2d1590: 0x1012  mflo        $v0
    ctx->pc = 0x2d1590u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d1594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d1598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d159c: 0xc0b37b4  jal         func_2CDED0
    ctx->pc = 0x2D159Cu;
    SET_GPR_U32(ctx, 31, 0x2D15A4u);
    ctx->pc = 0x2D15A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D159Cu;
            // 0x2d15a0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D15A4u; }
        if (ctx->pc != 0x2D15A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D15A4u; }
        if (ctx->pc != 0x2D15A4u) { return; }
    }
    ctx->pc = 0x2D15A4u;
label_2d15a4:
    // 0x2d15a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d15a8:
    // 0x2d15a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d15a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d15ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d15acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d15b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d15b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d15b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D15B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D15B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D15B4u;
            // 0x2d15b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D15BCu;
}
