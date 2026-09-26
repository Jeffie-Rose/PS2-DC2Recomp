#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: quest_NUM__FP9SPI_STACKi
// Address: 0x31a850 - 0x31a8c8
void quest_NUM__FP9SPI_STACKi_0x31a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quest_NUM__FP9SPI_STACKi_0x31a850");
#endif

    switch (ctx->pc) {
        case 0x31a860u: goto label_31a860;
        case 0x31a894u: goto label_31a894;
        case 0x31a8a0u: goto label_31a8a0;
        default: break;
    }

    ctx->pc = 0x31a850u;

    // 0x31a850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a858: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x31A858u;
    SET_GPR_U32(ctx, 31, 0x31A860u);
    ctx->pc = 0x31A85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A858u;
            // 0x31a85c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A860u; }
        if (ctx->pc != 0x31A860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A860u; }
        if (ctx->pc != 0x31A860u) { return; }
    }
    ctx->pc = 0x31A860u;
label_31a860:
    // 0x31a860: 0x8f84a380  lw          $a0, -0x5C80($gp)
    ctx->pc = 0x31a860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943616)));
    // 0x31a864: 0x24030394  addiu       $v1, $zero, 0x394
    ctx->pc = 0x31a864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 916));
    // 0x31a868: 0x438018  mult        $s0, $v0, $v1
    ctx->pc = 0x31a868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x31a86c: 0x3203000f  andi        $v1, $s0, 0xF
    ctx->pc = 0x31a86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x31a870: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A870u;
    {
        const bool branch_taken_0x31a870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A870u;
            // 0x31a874: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a870) {
            ctx->pc = 0x31A884u;
            goto label_31a884;
        }
    }
    ctx->pc = 0x31A878u;
    // 0x31a878: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x31a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x31a87c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31A87Cu;
    {
        const bool branch_taken_0x31a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A87Cu;
            // 0x31a880: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a87c) {
            ctx->pc = 0x31A888u;
            goto label_31a888;
        }
    }
    ctx->pc = 0x31A884u;
label_31a884:
    // 0x31a884: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x31a884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
label_31a888:
    // 0x31a888: 0x8f84a384  lw          $a0, -0x5C7C($gp)
    ctx->pc = 0x31a888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943620)));
    // 0x31a88c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x31A88Cu;
    SET_GPR_U32(ctx, 31, 0x31A894u);
    ctx->pc = 0x31A890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A88Cu;
            // 0x31a890: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A894u; }
        if (ctx->pc != 0x31A894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A894u; }
        if (ctx->pc != 0x31A894u) { return; }
    }
    ctx->pc = 0x31A894u;
label_31a894:
    // 0x31a894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a898: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x31A898u;
    SET_GPR_U32(ctx, 31, 0x31A8A0u);
    ctx->pc = 0x31A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A898u;
            // 0x31a89c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A8A0u; }
        if (ctx->pc != 0x31A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A8A0u; }
        if (ctx->pc != 0x31A8A0u) { return; }
    }
    ctx->pc = 0x31A8A0u;
label_31a8a0:
    // 0x31a8a0: 0x8f83a380  lw          $v1, -0x5C80($gp)
    ctx->pc = 0x31a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943616)));
    // 0x31a8a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x31a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x31a8a8: 0x8f83a380  lw          $v1, -0x5C80($gp)
    ctx->pc = 0x31a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943616)));
    // 0x31a8ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a8b0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x31a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31a8b4: 0xaf83a388  sw          $v1, -0x5C78($gp)
    ctx->pc = 0x31a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943624), GPR_U32(ctx, 3));
    // 0x31a8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x31A8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A8C0u;
            // 0x31a8c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A8C8u;
}
