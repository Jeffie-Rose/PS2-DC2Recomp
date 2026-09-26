#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFadeFlag__10CEohMotherFii
// Address: 0x25f520 - 0x25f58c
void SetFadeFlag__10CEohMotherFii_0x25f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFadeFlag__10CEohMotherFii_0x25f520");
#endif

    switch (ctx->pc) {
        case 0x25f520u: goto label_25f520;
        case 0x25f524u: goto label_25f524;
        case 0x25f528u: goto label_25f528;
        case 0x25f52cu: goto label_25f52c;
        case 0x25f530u: goto label_25f530;
        case 0x25f534u: goto label_25f534;
        case 0x25f538u: goto label_25f538;
        case 0x25f53cu: goto label_25f53c;
        case 0x25f540u: goto label_25f540;
        case 0x25f544u: goto label_25f544;
        case 0x25f548u: goto label_25f548;
        case 0x25f54cu: goto label_25f54c;
        case 0x25f550u: goto label_25f550;
        case 0x25f554u: goto label_25f554;
        case 0x25f558u: goto label_25f558;
        case 0x25f55cu: goto label_25f55c;
        case 0x25f560u: goto label_25f560;
        case 0x25f564u: goto label_25f564;
        case 0x25f568u: goto label_25f568;
        case 0x25f56cu: goto label_25f56c;
        case 0x25f570u: goto label_25f570;
        case 0x25f574u: goto label_25f574;
        case 0x25f578u: goto label_25f578;
        case 0x25f57cu: goto label_25f57c;
        case 0x25f580u: goto label_25f580;
        case 0x25f584u: goto label_25f584;
        case 0x25f588u: goto label_25f588;
        default: break;
    }

    ctx->pc = 0x25f520u;

label_25f520:
    // 0x25f520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25f524:
    // 0x25f524: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25f528:
    if (ctx->pc == 0x25F528u) {
        ctx->pc = 0x25F528u;
            // 0x25f528: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x25F52Cu;
        goto label_25f52c;
    }
    ctx->pc = 0x25F524u;
    {
        const bool branch_taken_0x25f524 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F524u;
            // 0x25f528: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f524) {
            ctx->pc = 0x25F538u;
            goto label_25f538;
        }
    }
    ctx->pc = 0x25F52Cu;
label_25f52c:
    // 0x25f52c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25f530:
    // 0x25f530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25f534:
    if (ctx->pc == 0x25F534u) {
        ctx->pc = 0x25F534u;
            // 0x25f534: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25F538u;
        goto label_25f538;
    }
    ctx->pc = 0x25F530u;
    {
        const bool branch_taken_0x25f530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F530u;
            // 0x25f534: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f530) {
            ctx->pc = 0x25F540u;
            goto label_25f540;
        }
    }
    ctx->pc = 0x25F538u;
label_25f538:
    // 0x25f538: 0x10000011  b           . + 4 + (0x11 << 2)
label_25f53c:
    if (ctx->pc == 0x25F53Cu) {
        ctx->pc = 0x25F53Cu;
            // 0x25f53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F540u;
        goto label_25f540;
    }
    ctx->pc = 0x25F538u;
    {
        const bool branch_taken_0x25f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F538u;
            // 0x25f53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f538) {
            ctx->pc = 0x25F580u;
            goto label_25f580;
        }
    }
    ctx->pc = 0x25F540u;
label_25f540:
    // 0x25f540: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25f544:
    // 0x25f544: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f548:
    // 0x25f548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25f54c:
    if (ctx->pc == 0x25F54Cu) {
        ctx->pc = 0x25F550u;
        goto label_25f550;
    }
    ctx->pc = 0x25F548u;
    {
        const bool branch_taken_0x25f548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f548) {
            ctx->pc = 0x25F558u;
            goto label_25f558;
        }
    }
    ctx->pc = 0x25F550u;
label_25f550:
    // 0x25f550: 0x1000000b  b           . + 4 + (0xB << 2)
label_25f554:
    if (ctx->pc == 0x25F554u) {
        ctx->pc = 0x25F554u;
            // 0x25f554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F558u;
        goto label_25f558;
    }
    ctx->pc = 0x25F550u;
    {
        const bool branch_taken_0x25f550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F550u;
            // 0x25f554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f550) {
            ctx->pc = 0x25F580u;
            goto label_25f580;
        }
    }
    ctx->pc = 0x25F558u;
label_25f558:
    // 0x25f558: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25f558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25f55c:
    // 0x25f55c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25f560:
    if (ctx->pc == 0x25F560u) {
        ctx->pc = 0x25F560u;
            // 0x25f560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F564u;
        goto label_25f564;
    }
    ctx->pc = 0x25F55Cu;
    {
        const bool branch_taken_0x25f55c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F55Cu;
            // 0x25f560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f55c) {
            ctx->pc = 0x25F56Cu;
            goto label_25f56c;
        }
    }
    ctx->pc = 0x25F564u;
label_25f564:
    // 0x25f564: 0x10000007  b           . + 4 + (0x7 << 2)
label_25f568:
    if (ctx->pc == 0x25F568u) {
        ctx->pc = 0x25F568u;
            // 0x25f568: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x25F56Cu;
        goto label_25f56c;
    }
    ctx->pc = 0x25F564u;
    {
        const bool branch_taken_0x25f564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F564u;
            // 0x25f568: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f564) {
            ctx->pc = 0x25F584u;
            goto label_25f584;
        }
    }
    ctx->pc = 0x25F56Cu;
label_25f56c:
    // 0x25f56c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f570:
    // 0x25f570: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x25f570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_25f574:
    // 0x25f574: 0x320f809  jalr        $t9
label_25f578:
    if (ctx->pc == 0x25F578u) {
        ctx->pc = 0x25F578u;
            // 0x25f578: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F57Cu;
        goto label_25f57c;
    }
    ctx->pc = 0x25F574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F57Cu);
        ctx->pc = 0x25F578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F574u;
            // 0x25f578: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F57Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F57Cu; }
            if (ctx->pc != 0x25F57Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25F57Cu;
label_25f57c:
    // 0x25f57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f580:
    // 0x25f580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f584:
    // 0x25f584: 0x3e00008  jr          $ra
label_25f588:
    if (ctx->pc == 0x25F588u) {
        ctx->pc = 0x25F588u;
            // 0x25f588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x25F58Cu;
        goto label_fallthrough_0x25f584;
    }
    ctx->pc = 0x25F584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F584u;
            // 0x25f588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25f584:
    ctx->pc = 0x25F58Cu;
}
