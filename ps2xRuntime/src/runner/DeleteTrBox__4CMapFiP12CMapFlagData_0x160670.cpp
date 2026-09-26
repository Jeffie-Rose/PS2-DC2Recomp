#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteTrBox__4CMapFiP12CMapFlagData
// Address: 0x160670 - 0x1606d8
void DeleteTrBox__4CMapFiP12CMapFlagData_0x160670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteTrBox__4CMapFiP12CMapFlagData_0x160670");
#endif

    switch (ctx->pc) {
        case 0x160688u: goto label_160688;
        case 0x1606b4u: goto label_1606b4;
        default: break;
    }

    ctx->pc = 0x160670u;

    // 0x160670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x160670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x160674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x160674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x160678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16067c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16067cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160680: 0xc058188  jal         func_160620
    ctx->pc = 0x160680u;
    SET_GPR_U32(ctx, 31, 0x160688u);
    ctx->pc = 0x160684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160680u;
            // 0x160684: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160620u;
    if (runtime->hasFunction(0x160620u)) {
        auto targetFn = runtime->lookupFunction(0x160620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160688u; }
        if (ctx->pc != 0x160688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTrBox__4CMapFi_0x160620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160688u; }
        if (ctx->pc != 0x160688u) { return; }
    }
    ctx->pc = 0x160688u;
label_160688:
    // 0x160688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16068c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x16068Cu;
    {
        const bool branch_taken_0x16068c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16068c) {
            ctx->pc = 0x1606C4u;
            goto label_1606c4;
        }
    }
    ctx->pc = 0x160694u;
    // 0x160694: 0xae000660  sw          $zero, 0x660($s0)
    ctx->pc = 0x160694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 0));
    // 0x160698: 0x8e050664  lw          $a1, 0x664($s0)
    ctx->pc = 0x160698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x16069c: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16069Cu;
    {
        const bool branch_taken_0x16069c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x16069c) {
            ctx->pc = 0x1606C4u;
            goto label_1606c4;
        }
    }
    ctx->pc = 0x1606A4u;
    // 0x1606a4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1606A4u;
    {
        const bool branch_taken_0x1606a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1606A4u;
            // 0x1606a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606a4) {
            ctx->pc = 0x1606B4u;
            goto label_1606b4;
        }
    }
    ctx->pc = 0x1606ACu;
    // 0x1606ac: 0xc057108  jal         func_15C420
    ctx->pc = 0x1606ACu;
    SET_GPR_U32(ctx, 31, 0x1606B4u);
    ctx->pc = 0x1606B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606ACu;
            // 0x1606b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C420u;
    if (runtime->hasFunction(0x15C420u)) {
        auto targetFn = runtime->lookupFunction(0x15C420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606B4u; }
        if (ctx->pc != 0x1606B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFlag__12CMapFlagDataFii_0x15c420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606B4u; }
        if (ctx->pc != 0x1606B4u) { return; }
    }
    ctx->pc = 0x1606B4u;
label_1606b4:
    // 0x1606b4: 0x8e030674  lw          $v1, 0x674($s0)
    ctx->pc = 0x1606b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1652)));
    // 0x1606b8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1606B8u;
    {
        const bool branch_taken_0x1606b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606b8) {
            ctx->pc = 0x1606C4u;
            goto label_1606c4;
        }
    }
    ctx->pc = 0x1606C0u;
    // 0x1606c0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1606c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_1606c4:
    // 0x1606c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1606c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1606c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1606c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1606cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1606ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1606d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1606D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1606D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1606D0u;
            // 0x1606d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1606D8u;
}
