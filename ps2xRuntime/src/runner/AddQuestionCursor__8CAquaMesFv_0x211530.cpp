#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddQuestionCursor__8CAquaMesFv
// Address: 0x211530 - 0x211618
void AddQuestionCursor__8CAquaMesFv_0x211530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddQuestionCursor__8CAquaMesFv_0x211530");
#endif

    switch (ctx->pc) {
        case 0x211560u: goto label_211560;
        case 0x21157cu: goto label_21157c;
        default: break;
    }

    ctx->pc = 0x211530u;

    // 0x211530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x211534: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x211534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x211538: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x211538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21153c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x211540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x211544: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21154c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21154cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211550: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x211550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x211554: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x211554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x211558: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x211558u;
    SET_GPR_U32(ctx, 31, 0x211560u);
    ctx->pc = 0x21155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211558u;
            // 0x21155c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211560u; }
        if (ctx->pc != 0x211560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211560u; }
        if (ctx->pc != 0x211560u) { return; }
    }
    ctx->pc = 0x211560u;
label_211560:
    // 0x211560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211560u;
    {
        const bool branch_taken_0x211560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211560u;
            // 0x211564: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211560) {
            ctx->pc = 0x211570u;
            goto label_211570;
        }
    }
    ctx->pc = 0x211568u;
    // 0x211568: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x211568u;
    {
        const bool branch_taken_0x211568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21156Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211568u;
            // 0x21156c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211568) {
            ctx->pc = 0x211588u;
            goto label_211588;
        }
    }
    ctx->pc = 0x211570u;
label_211570:
    // 0x211570: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x211574: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x211574u;
    SET_GPR_U32(ctx, 31, 0x21157Cu);
    ctx->pc = 0x211578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211574u;
            // 0x211578: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21157Cu; }
        if (ctx->pc != 0x21157Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21157Cu; }
        if (ctx->pc != 0x21157Cu) { return; }
    }
    ctx->pc = 0x21157Cu;
label_21157c:
    // 0x21157c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21157Cu;
    {
        const bool branch_taken_0x21157c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21157c) {
            ctx->pc = 0x211588u;
            goto label_211588;
        }
    }
    ctx->pc = 0x211584u;
    // 0x211584: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x211584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_211588:
    // 0x211588: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x211588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21158c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x21158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x211590: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x211590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x211594: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x211598: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x211598u;
    {
        const bool branch_taken_0x211598 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x211598) {
            ctx->pc = 0x2115A4u;
            goto label_2115a4;
        }
    }
    ctx->pc = 0x2115A0u;
    // 0x2115a0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2115a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2115a4:
    // 0x2115a4: 0x86230036  lh          $v1, 0x36($s1)
    ctx->pc = 0x2115a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x2115a8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2115a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2115ac: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2115acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2115b0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2115B0u;
    {
        const bool branch_taken_0x2115b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2115B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2115B0u;
            // 0x2115b4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115b0) {
            ctx->pc = 0x2115BCu;
            goto label_2115bc;
        }
    }
    ctx->pc = 0x2115B8u;
    // 0x2115b8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2115b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2115bc:
    // 0x2115bc: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2115bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2115c0: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2115C0u;
    {
        const bool branch_taken_0x2115c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2115C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2115C0u;
            // 0x2115c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115c0) {
            ctx->pc = 0x2115D0u;
            goto label_2115d0;
        }
    }
    ctx->pc = 0x2115C8u;
    // 0x2115c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2115C8u;
    {
        const bool branch_taken_0x2115c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2115CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2115C8u;
            // 0x2115cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115c8) {
            ctx->pc = 0x211604u;
            goto label_211604;
        }
    }
    ctx->pc = 0x2115D0u;
label_2115d0:
    // 0x2115d0: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2115d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2115d4: 0x8c821b14  lw          $v0, 0x1B14($a0)
    ctx->pc = 0x2115d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6932)));
    // 0x2115d8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2115D8u;
    {
        const bool branch_taken_0x2115d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2115d8) {
            ctx->pc = 0x2115E4u;
            goto label_2115e4;
        }
    }
    ctx->pc = 0x2115E0u;
    // 0x2115e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2115e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2115e4:
    // 0x2115e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2115e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2115e8: 0x8c821ae4  lw          $v0, 0x1AE4($a0)
    ctx->pc = 0x2115e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6884)));
    // 0x2115ec: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2115ECu;
    {
        const bool branch_taken_0x2115ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2115ec) {
            ctx->pc = 0x2115F8u;
            goto label_2115f8;
        }
    }
    ctx->pc = 0x2115F4u;
    // 0x2115f4: 0xac801b00  sw          $zero, 0x1B00($a0)
    ctx->pc = 0x2115f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6912), GPR_U32(ctx, 0));
label_2115f8:
    // 0x2115f8: 0xac831ae4  sw          $v1, 0x1AE4($a0)
    ctx->pc = 0x2115f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6884), GPR_U32(ctx, 3));
    // 0x2115fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2115fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211600: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x211600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_211604:
    // 0x211604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x211604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x211608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21160c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21160cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211610: 0x3e00008  jr          $ra
    ctx->pc = 0x211610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211610u;
            // 0x211614: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211618u;
}
