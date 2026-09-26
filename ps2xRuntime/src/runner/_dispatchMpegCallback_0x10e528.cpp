#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dispatchMpegCallback
// Address: 0x10e528 - 0x10e578
void _dispatchMpegCallback_0x10e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispatchMpegCallback_0x10e528");
#endif

    switch (ctx->pc) {
        case 0x10e528u: goto label_10e528;
        case 0x10e52cu: goto label_10e52c;
        case 0x10e530u: goto label_10e530;
        case 0x10e534u: goto label_10e534;
        case 0x10e538u: goto label_10e538;
        case 0x10e53cu: goto label_10e53c;
        case 0x10e540u: goto label_10e540;
        case 0x10e544u: goto label_10e544;
        case 0x10e548u: goto label_10e548;
        case 0x10e54cu: goto label_10e54c;
        case 0x10e550u: goto label_10e550;
        case 0x10e554u: goto label_10e554;
        case 0x10e558u: goto label_10e558;
        case 0x10e55cu: goto label_10e55c;
        case 0x10e560u: goto label_10e560;
        case 0x10e564u: goto label_10e564;
        case 0x10e568u: goto label_10e568;
        case 0x10e56cu: goto label_10e56c;
        case 0x10e570u: goto label_10e570;
        case 0x10e574u: goto label_10e574;
        default: break;
    }

    ctx->pc = 0x10e528u;

label_10e528:
    // 0x10e528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e52c:
    // 0x10e52c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10e52cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e530:
    // 0x10e530: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_10e534:
    if (ctx->pc == 0x10E534u) {
        ctx->pc = 0x10E534u;
            // 0x10e534: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x10E538u;
        goto label_10e538;
    }
    ctx->pc = 0x10E530u;
    {
        const bool branch_taken_0x10e530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E530u;
            // 0x10e534: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e530) {
            ctx->pc = 0x10E568u;
            goto label_10e568;
        }
    }
    ctx->pc = 0x10E538u;
label_10e538:
    // 0x10e538: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x10e538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_10e53c:
    // 0x10e53c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_10e540:
    if (ctx->pc == 0x10E540u) {
        ctx->pc = 0x10E540u;
            // 0x10e540: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x10E544u;
        goto label_10e544;
    }
    ctx->pc = 0x10E53Cu;
    {
        const bool branch_taken_0x10e53c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E53Cu;
            // 0x10e540: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e53c) {
            ctx->pc = 0x10E56Cu;
            goto label_10e56c;
        }
    }
    ctx->pc = 0x10E544u;
label_10e544:
    // 0x10e544: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10e544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10e548:
    // 0x10e548: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x10e548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_10e54c:
    // 0x10e54c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x10e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_10e550:
    // 0x10e550: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x10e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_10e554:
    // 0x10e554: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_10e558:
    if (ctx->pc == 0x10E558u) {
        ctx->pc = 0x10E558u;
            // 0x10e558: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x10E55Cu;
        goto label_10e55c;
    }
    ctx->pc = 0x10E554u;
    {
        const bool branch_taken_0x10e554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E554u;
            // 0x10e558: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e554) {
            ctx->pc = 0x10E56Cu;
            goto label_10e56c;
        }
    }
    ctx->pc = 0x10E55Cu;
label_10e55c:
    // 0x10e55c: 0x60f809  jalr        $v1
label_10e560:
    if (ctx->pc == 0x10E560u) {
        ctx->pc = 0x10E560u;
            // 0x10e560: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x10E564u;
        goto label_10e564;
    }
    ctx->pc = 0x10E55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E564u);
        ctx->pc = 0x10E560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E55Cu;
            // 0x10e560: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10E564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10E564u; }
            if (ctx->pc != 0x10E564u) { return; }
        }
        }
    }
    ctx->pc = 0x10E564u;
label_10e564:
    // 0x10e564: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10e564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e568:
    // 0x10e568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e56c:
    // 0x10e56c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x10e56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10e570:
    // 0x10e570: 0x3e00008  jr          $ra
label_10e574:
    if (ctx->pc == 0x10E574u) {
        ctx->pc = 0x10E574u;
            // 0x10e574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x10E578u;
        goto label_fallthrough_0x10e570;
    }
    ctx->pc = 0x10E570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E570u;
            // 0x10e574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10e570:
    ctx->pc = 0x10E578u;
}
