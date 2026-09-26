#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_CLEAR__FP12RS_STACKDATAi
// Address: 0x27a4b0 - 0x27a580
void ps2__ESM_CLEAR__FP12RS_STACKDATAi_0x27a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_CLEAR__FP12RS_STACKDATAi_0x27a4b0");
#endif

    switch (ctx->pc) {
        case 0x27a4e8u: goto label_27a4e8;
        case 0x27a4f0u: goto label_27a4f0;
        case 0x27a50cu: goto label_27a50c;
        case 0x27a520u: goto label_27a520;
        case 0x27a538u: goto label_27a538;
        case 0x27a550u: goto label_27a550;
        default: break;
    }

    ctx->pc = 0x27a4b0u;

    // 0x27a4b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x27a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x27a4b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27a4b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27a4bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27a4c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a4c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a4c8: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a4cc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A4CCu;
    {
        const bool branch_taken_0x27a4cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4CCu;
            // 0x27a4d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4cc) {
            ctx->pc = 0x27A4DCu;
            goto label_27a4dc;
        }
    }
    ctx->pc = 0x27A4D4u;
    // 0x27a4d4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x27A4D4u;
    {
        const bool branch_taken_0x27a4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4D4u;
            // 0x27a4d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4d4) {
            ctx->pc = 0x27A564u;
            goto label_27a564;
        }
    }
    ctx->pc = 0x27A4DCu;
label_27a4dc:
    // 0x27a4dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27a4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27a4e0: 0xc0b8054  jal         func_2E0150
    ctx->pc = 0x27A4E0u;
    SET_GPR_U32(ctx, 31, 0x27A4E8u);
    ctx->pc = 0x27A4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4E0u;
            // 0x27a4e4: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0150u;
    if (runtime->hasFunction(0x2E0150u)) {
        auto targetFn = runtime->lookupFunction(0x2E0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A4E8u; }
        if (ctx->pc != 0x27A4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearBaseFromLevel__16CEffectScriptManFiPii_0x2e0150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A4E8u; }
        if (ctx->pc != 0x27A4E8u) { return; }
    }
    ctx->pc = 0x27A4E8u;
label_27a4e8:
    // 0x27a4e8: 0xc0b8554  jal         func_2E1550
    ctx->pc = 0x27A4E8u;
    SET_GPR_U32(ctx, 31, 0x27A4F0u);
    ctx->pc = 0x27A4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A4E8u;
            // 0x27a4ec: 0x8f8497ec  lw          $a0, -0x6814($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1550u;
    if (runtime->hasFunction(0x2E1550u)) {
        auto targetFn = runtime->lookupFunction(0x2E1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A4F0u; }
        if (ctx->pc != 0x27A4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllClearEffSpt__16CEffectScriptManFv_0x2e1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A4F0u; }
        if (ctx->pc != 0x27A4F0u) { return; }
    }
    ctx->pc = 0x27A4F0u;
label_27a4f0:
    // 0x27a4f0: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a4f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a4f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A4F8u;
    {
        const bool branch_taken_0x27a4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a4f8) {
            ctx->pc = 0x27A50Cu;
            goto label_27a50c;
        }
    }
    ctx->pc = 0x27A500u;
    // 0x27a500: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x27a500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x27a504: 0xc04e674  jal         func_1399D0
    ctx->pc = 0x27A504u;
    SET_GPR_U32(ctx, 31, 0x27A50Cu);
    ctx->pc = 0x27A508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A504u;
            // 0x27a508: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1399D0u;
    if (runtime->hasFunction(0x1399D0u)) {
        auto targetFn = runtime->lookupFunction(0x1399D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A50Cu; }
        if (ctx->pc != 0x27A50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearHeapMem__9mgCMemoryFv_0x1399d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A50Cu; }
        if (ctx->pc != 0x27A50Cu) { return; }
    }
    ctx->pc = 0x27A50Cu;
label_27a50c:
    // 0x27a50c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x27a50cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x27a510: 0xaf8097ec  sw          $zero, -0x6814($gp)
    ctx->pc = 0x27a510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940652), GPR_U32(ctx, 0));
    // 0x27a514: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x27a514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x27a518: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27a518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a51c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27a51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a520:
    // 0x27a520: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x27a520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x27a524: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27a524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x27a528: 0x24530050  addiu       $s3, $v0, 0x50
    ctx->pc = 0x27a528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x27a52c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x27a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27a530: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x27A530u;
    SET_GPR_U32(ctx, 31, 0x27A538u);
    ctx->pc = 0x27A534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A530u;
            // 0x27a534: 0x2484cbf0  addiu       $a0, $a0, -0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A538u; }
        if (ctx->pc != 0x27A538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A538u; }
        if (ctx->pc != 0x27A538u) { return; }
    }
    ctx->pc = 0x27A538u;
label_27a538:
    // 0x27a538: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x27a538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27a53c: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x27a53cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x27a540: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A540u;
    {
        const bool branch_taken_0x27a540 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A540u;
            // 0x27a544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a540) {
            ctx->pc = 0x27A560u;
            goto label_27a560;
        }
    }
    ctx->pc = 0x27A548u;
    // 0x27a548: 0xc04b950  jal         func_12E540
    ctx->pc = 0x27A548u;
    SET_GPR_U32(ctx, 31, 0x27A550u);
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A550u; }
        if (ctx->pc != 0x27A550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A550u; }
        if (ctx->pc != 0x27A550u) { return; }
    }
    ctx->pc = 0x27A550u;
label_27a550:
    // 0x27a550: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27a550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27a554: 0x2a220040  slti        $v0, $s1, 0x40
    ctx->pc = 0x27a554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x27a558: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x27A558u;
    {
        const bool branch_taken_0x27a558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A558u;
            // 0x27a55c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a558) {
            ctx->pc = 0x27A520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27a520;
        }
    }
    ctx->pc = 0x27A560u;
label_27a560:
    // 0x27a560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a564:
    // 0x27a564: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a568: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27a568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a56c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27a56cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a578: 0x3e00008  jr          $ra
    ctx->pc = 0x27A578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A578u;
            // 0x27a57c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A580u;
}
