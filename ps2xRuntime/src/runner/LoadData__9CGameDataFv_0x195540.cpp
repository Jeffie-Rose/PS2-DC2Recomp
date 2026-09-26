#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadData__9CGameDataFv
// Address: 0x195540 - 0x195624
void LoadData__9CGameDataFv_0x195540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadData__9CGameDataFv_0x195540");
#endif

    switch (ctx->pc) {
        case 0x195554u: goto label_195554;
        case 0x195574u: goto label_195574;
        case 0x195580u: goto label_195580;
        case 0x19558cu: goto label_19558c;
        case 0x195598u: goto label_195598;
        case 0x1955a4u: goto label_1955a4;
        case 0x1955b0u: goto label_1955b0;
        case 0x1955bcu: goto label_1955bc;
        case 0x1955c8u: goto label_1955c8;
        case 0x1955e4u: goto label_1955e4;
        default: break;
    }

    ctx->pc = 0x195540u;

    // 0x195540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19554c: 0xc0651b4  jal         func_1946D0
    ctx->pc = 0x19554Cu;
    SET_GPR_U32(ctx, 31, 0x195554u);
    ctx->pc = 0x195550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19554Cu;
            // 0x195550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1946D0u;
    if (runtime->hasFunction(0x1946D0u)) {
        auto targetFn = runtime->lookupFunction(0x1946D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195554u; }
        if (ctx->pc != 0x195554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CGameDataFv_0x1946d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195554u; }
        if (ctx->pc != 0x195554u) { return; }
    }
    ctx->pc = 0x195554u;
label_195554:
    // 0x195554: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x195554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195558: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x19555c: 0x24841b70  addiu       $a0, $a0, 0x1B70
    ctx->pc = 0x19555cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7024));
    // 0x195560: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x195560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195564: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x195564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x195568: 0xaf828b5c  sw          $v0, -0x74A4($gp)
    ctx->pc = 0x195568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937436), GPR_U32(ctx, 2));
    // 0x19556c: 0xc049c86  jal         func_127218
    ctx->pc = 0x19556Cu;
    SET_GPR_U32(ctx, 31, 0x195574u);
    ctx->pc = 0x195570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19556Cu;
            // 0x195570: 0xaf808b60  sw          $zero, -0x74A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195574u; }
        if (ctx->pc != 0x195574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195574u; }
        if (ctx->pc != 0x195574u) { return; }
    }
    ctx->pc = 0x195574u;
label_195574:
    // 0x195574: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x195574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x195578: 0xc06551c  jal         func_195470
    ctx->pc = 0x195578u;
    SET_GPR_U32(ctx, 31, 0x195580u);
    ctx->pc = 0x19557Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195578u;
            // 0x19557c: 0x248453b8  addiu       $a0, $a0, 0x53B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195470u;
    if (runtime->hasFunction(0x195470u)) {
        auto targetFn = runtime->lookupFunction(0x195470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195580u; }
        if (ctx->pc != 0x195580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameDataAnalyze__FPc_0x195470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195580u; }
        if (ctx->pc != 0x195580u) { return; }
    }
    ctx->pc = 0x195580u;
label_195580:
    // 0x195580: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x195580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x195584: 0xc06551c  jal         func_195470
    ctx->pc = 0x195584u;
    SET_GPR_U32(ctx, 31, 0x19558Cu);
    ctx->pc = 0x195588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195584u;
            // 0x195588: 0x248453c8  addiu       $a0, $a0, 0x53C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195470u;
    if (runtime->hasFunction(0x195470u)) {
        auto targetFn = runtime->lookupFunction(0x195470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19558Cu; }
        if (ctx->pc != 0x19558Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameDataAnalyze__FPc_0x195470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19558Cu; }
        if (ctx->pc != 0x19558Cu) { return; }
    }
    ctx->pc = 0x19558Cu;
label_19558c:
    // 0x19558c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x195590: 0xc06551c  jal         func_195470
    ctx->pc = 0x195590u;
    SET_GPR_U32(ctx, 31, 0x195598u);
    ctx->pc = 0x195594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195590u;
            // 0x195594: 0x248453d8  addiu       $a0, $a0, 0x53D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195470u;
    if (runtime->hasFunction(0x195470u)) {
        auto targetFn = runtime->lookupFunction(0x195470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195598u; }
        if (ctx->pc != 0x195598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameDataAnalyze__FPc_0x195470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195598u; }
        if (ctx->pc != 0x195598u) { return; }
    }
    ctx->pc = 0x195598u;
label_195598:
    // 0x195598: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19559c: 0xc06551c  jal         func_195470
    ctx->pc = 0x19559Cu;
    SET_GPR_U32(ctx, 31, 0x1955A4u);
    ctx->pc = 0x1955A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19559Cu;
            // 0x1955a0: 0x248453e8  addiu       $a0, $a0, 0x53E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195470u;
    if (runtime->hasFunction(0x195470u)) {
        auto targetFn = runtime->lookupFunction(0x195470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955A4u; }
        if (ctx->pc != 0x1955A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameDataAnalyze__FPc_0x195470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955A4u; }
        if (ctx->pc != 0x1955A4u) { return; }
    }
    ctx->pc = 0x1955A4u;
label_1955a4:
    // 0x1955a4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1955a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1955a8: 0xc06551c  jal         func_195470
    ctx->pc = 0x1955A8u;
    SET_GPR_U32(ctx, 31, 0x1955B0u);
    ctx->pc = 0x1955ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1955A8u;
            // 0x1955ac: 0x248453f8  addiu       $a0, $a0, 0x53F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195470u;
    if (runtime->hasFunction(0x195470u)) {
        auto targetFn = runtime->lookupFunction(0x195470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955B0u; }
        if (ctx->pc != 0x1955B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameDataAnalyze__FPc_0x195470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955B0u; }
        if (ctx->pc != 0x1955B0u) { return; }
    }
    ctx->pc = 0x1955B0u;
label_1955b0:
    // 0x1955b0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1955b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1955b4: 0xc06551c  jal         func_195470
    ctx->pc = 0x1955B4u;
    SET_GPR_U32(ctx, 31, 0x1955BCu);
    ctx->pc = 0x1955B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1955B4u;
            // 0x1955b8: 0x24845408  addiu       $a0, $a0, 0x5408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195470u;
    if (runtime->hasFunction(0x195470u)) {
        auto targetFn = runtime->lookupFunction(0x195470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955BCu; }
        if (ctx->pc != 0x1955BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameDataAnalyze__FPc_0x195470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955BCu; }
        if (ctx->pc != 0x1955BCu) { return; }
    }
    ctx->pc = 0x1955BCu;
label_1955bc:
    // 0x1955bc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1955bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1955c0: 0xc06551c  jal         func_195470
    ctx->pc = 0x1955C0u;
    SET_GPR_U32(ctx, 31, 0x1955C8u);
    ctx->pc = 0x1955C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1955C0u;
            // 0x1955c4: 0x24845418  addiu       $a0, $a0, 0x5418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195470u;
    if (runtime->hasFunction(0x195470u)) {
        auto targetFn = runtime->lookupFunction(0x195470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955C8u; }
        if (ctx->pc != 0x1955C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameDataAnalyze__FPc_0x195470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955C8u; }
        if (ctx->pc != 0x1955C8u) { return; }
    }
    ctx->pc = 0x1955C8u;
label_1955c8:
    // 0x1955c8: 0x87828b60  lh          $v0, -0x74A0($gp)
    ctx->pc = 0x1955c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937440)));
    // 0x1955cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1955ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1955d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955d4: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x1955d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x1955d8: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x1955d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1955dc: 0x3c0301e7  lui         $v1, 0x1E7
    ctx->pc = 0x1955dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)487 << 16));
    // 0x1955e0: 0x24631b70  addiu       $v1, $v1, 0x1B70
    ctx->pc = 0x1955e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7024));
label_1955e4:
    // 0x1955e4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1955e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1955e8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1955e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1955ec: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x1955ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1955f0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1955F0u;
    {
        const bool branch_taken_0x1955f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1955f0) {
            ctx->pc = 0x1955FCu;
            goto label_1955fc;
        }
    }
    ctx->pc = 0x1955F8u;
    // 0x1955f8: 0xa6040020  sh          $a0, 0x20($s0)
    ctx->pc = 0x1955f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
label_1955fc:
    // 0x1955fc: 0x0  nop
    ctx->pc = 0x1955fcu;
    // NOP
    // 0x195600: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x195600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x195604: 0x28820200  slti        $v0, $a0, 0x200
    ctx->pc = 0x195604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x195608: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x195608u;
    {
        const bool branch_taken_0x195608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195608u;
            // 0x19560c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195608) {
            ctx->pc = 0x1955E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1955e4;
        }
    }
    ctx->pc = 0x195610u;
    // 0x195610: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x195610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x195614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19561c: 0x3e00008  jr          $ra
    ctx->pc = 0x19561Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19561Cu;
            // 0x195620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195624u;
}
