#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextAnmSeq__12CSceneObjSeqFv
// Address: 0x25c520 - 0x25c57c
void SearchNextAnmSeq__12CSceneObjSeqFv_0x25c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextAnmSeq__12CSceneObjSeqFv_0x25c520");
#endif

    switch (ctx->pc) {
        case 0x25c534u: goto label_25c534;
        default: break;
    }

    ctx->pc = 0x25c520u;

    // 0x25c520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c52c: 0xc0970dc  jal         func_25C370
    ctx->pc = 0x25C52Cu;
    SET_GPR_U32(ctx, 31, 0x25C534u);
    ctx->pc = 0x25C530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C52Cu;
            // 0x25c530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C370u;
    if (runtime->hasFunction(0x25C370u)) {
        auto targetFn = runtime->lookupFunction(0x25C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C534u; }
        if (ctx->pc != 0x25C534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneObjSeqFv_0x25c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C534u; }
        if (ctx->pc != 0x25C534u) { return; }
    }
    ctx->pc = 0x25C534u;
label_25c534:
    // 0x25c534: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C534u;
    {
        const bool branch_taken_0x25c534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c534) {
            ctx->pc = 0x25C544u;
            goto label_25c544;
        }
    }
    ctx->pc = 0x25C53Cu;
    // 0x25c53c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25C53Cu;
    {
        const bool branch_taken_0x25c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C53Cu;
            // 0x25c540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c53c) {
            ctx->pc = 0x25C56Cu;
            goto label_25c56c;
        }
    }
    ctx->pc = 0x25C544u;
label_25c544:
    // 0x25c544: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x25c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x25c548: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C548u;
    {
        const bool branch_taken_0x25c548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c548) {
            ctx->pc = 0x25C554u;
            goto label_25c554;
        }
    }
    ctx->pc = 0x25C550u;
    // 0x25c550: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x25c550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_25c554:
    // 0x25c554: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x25c554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x25c558: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x25c558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x25c55c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x25c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25c560: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C560u;
    {
        const bool branch_taken_0x25c560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c560) {
            ctx->pc = 0x25C56Cu;
            goto label_25c56c;
        }
    }
    ctx->pc = 0x25C568u;
    // 0x25c568: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x25c568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_25c56c:
    // 0x25c56c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c574: 0x3e00008  jr          $ra
    ctx->pc = 0x25C574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C574u;
            // 0x25c578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C57Cu;
}
