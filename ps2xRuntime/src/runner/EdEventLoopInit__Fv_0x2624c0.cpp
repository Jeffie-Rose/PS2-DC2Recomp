#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventLoopInit__Fv
// Address: 0x2624c0 - 0x26258c
void EdEventLoopInit__Fv_0x2624c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventLoopInit__Fv_0x2624c0");
#endif

    switch (ctx->pc) {
        case 0x2624d8u: goto label_2624d8;
        case 0x262520u: goto label_262520;
        case 0x26255cu: goto label_26255c;
        case 0x26256cu: goto label_26256c;
        case 0x262574u: goto label_262574;
        case 0x262580u: goto label_262580;
        default: break;
    }

    ctx->pc = 0x2624c0u;

    // 0x2624c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2624c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2624c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2624c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2624c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2624c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2624cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2624ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2624d0: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2624d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2624d4: 0x2463e430  addiu       $v1, $v1, -0x1BD0
    ctx->pc = 0x2624d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960176));
label_2624d8:
    // 0x2624d8: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2624d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2624dc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2624dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2624e0: 0xacc000f4  sw          $zero, 0xF4($a2)
    ctx->pc = 0x2624e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 244), GPR_U32(ctx, 0));
    // 0x2624e4: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2624e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2624e8: 0xacc000f8  sw          $zero, 0xF8($a2)
    ctx->pc = 0x2624e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 0));
    // 0x2624ec: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2624ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2624f0: 0xacc000fc  sw          $zero, 0xFC($a2)
    ctx->pc = 0x2624f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 0));
    // 0x2624f4: 0xacc00100  sw          $zero, 0x100($a2)
    ctx->pc = 0x2624f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 0));
    // 0x2624f8: 0xacc00104  sw          $zero, 0x104($a2)
    ctx->pc = 0x2624f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 0));
    // 0x2624fc: 0xacc00108  sw          $zero, 0x108($a2)
    ctx->pc = 0x2624fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 264), GPR_U32(ctx, 0));
    // 0x262500: 0xacc0010c  sw          $zero, 0x10C($a2)
    ctx->pc = 0x262500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 268), GPR_U32(ctx, 0));
    // 0x262504: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x262504u;
    {
        const bool branch_taken_0x262504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262504u;
            // 0x262508: 0xacc00110  sw          $zero, 0x110($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262504) {
            ctx->pc = 0x2624D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2624d8;
        }
    }
    ctx->pc = 0x26250Cu;
    // 0x26250c: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x26250cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x262510: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x262510u;
    {
        const bool branch_taken_0x262510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x262514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262510u;
            // 0x262514: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262510) {
            ctx->pc = 0x262540u;
            goto label_262540;
        }
    }
    ctx->pc = 0x262518u;
    // 0x262518: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x262518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x26251c: 0x2463e430  addiu       $v1, $v1, -0x1BD0
    ctx->pc = 0x26251cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960176));
label_262520:
    // 0x262520: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x262520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x262524: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x262524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x262528: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x262528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x26252c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x26252cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x262530: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x262530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x262534: 0x0  nop
    ctx->pc = 0x262534u;
    // NOP
    // 0x262538: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x262538u;
    {
        const bool branch_taken_0x262538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262538) {
            ctx->pc = 0x262520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262520;
        }
    }
    ctx->pc = 0x262540u;
label_262540:
    // 0x262540: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x262540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x262544: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262548: 0x2484e4bc  addiu       $a0, $a0, -0x1B44
    ctx->pc = 0x262548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960316));
    // 0x26254c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26254cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262550: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x262550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x262554: 0xc049c86  jal         func_127218
    ctx->pc = 0x262554u;
    SET_GPR_U32(ctx, 31, 0x26255Cu);
    ctx->pc = 0x262558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262554u;
            // 0x262558: 0xac20e554  sw          $zero, -0x1AAC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26255Cu; }
        if (ctx->pc != 0x26255Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26255Cu; }
        if (ctx->pc != 0x26255Cu) { return; }
    }
    ctx->pc = 0x26255Cu;
label_26255c:
    // 0x26255c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262560: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262564: 0xc0983dc  jal         func_260F70
    ctx->pc = 0x262564u;
    SET_GPR_U32(ctx, 31, 0x26256Cu);
    ctx->pc = 0x262568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262564u;
            // 0x262568: 0xac22e628  sw          $v0, -0x19D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260F70u;
    if (runtime->hasFunction(0x260F70u)) {
        auto targetFn = runtime->lookupFunction(0x260F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26256Cu; }
        if (ctx->pc != 0x26256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitWorldCoord__Fv_0x260f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26256Cu; }
        if (ctx->pc != 0x26256Cu) { return; }
    }
    ctx->pc = 0x26256Cu;
label_26256c:
    // 0x26256c: 0xc09847c  jal         func_2611F0
    ctx->pc = 0x26256Cu;
    SET_GPR_U32(ctx, 31, 0x262574u);
    ctx->pc = 0x2611F0u;
    if (runtime->hasFunction(0x2611F0u)) {
        auto targetFn = runtime->lookupFunction(0x2611F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262574u; }
        if (ctx->pc != 0x262574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventInfoCommandInitialize__Fv_0x2611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262574u; }
        if (ctx->pc != 0x262574u) { return; }
    }
    ctx->pc = 0x262574u;
label_262574:
    // 0x262574: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x262574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x262578: 0xc098178  jal         func_2605E0
    ctx->pc = 0x262578u;
    SET_GPR_U32(ctx, 31, 0x262580u);
    ctx->pc = 0x26257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262578u;
            // 0x26257c: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2605E0u;
    if (runtime->hasFunction(0x2605E0u)) {
        auto targetFn = runtime->lookupFunction(0x2605E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262580u; }
        if (ctx->pc != 0x262580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CScreenEffectFv_0x2605e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262580u; }
        if (ctx->pc != 0x262580u) { return; }
    }
    ctx->pc = 0x262580u;
label_262580:
    // 0x262580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262584: 0x3e00008  jr          $ra
    ctx->pc = 0x262584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262584u;
            // 0x262588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26258Cu;
}
