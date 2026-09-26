#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMotionEnd__10CEohMotherFi
// Address: 0x25e480 - 0x25e51c
void CheckMotionEnd__10CEohMotherFi_0x25e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMotionEnd__10CEohMotherFi_0x25e480");
#endif

    switch (ctx->pc) {
        case 0x25e480u: goto label_25e480;
        case 0x25e484u: goto label_25e484;
        case 0x25e488u: goto label_25e488;
        case 0x25e48cu: goto label_25e48c;
        case 0x25e490u: goto label_25e490;
        case 0x25e494u: goto label_25e494;
        case 0x25e498u: goto label_25e498;
        case 0x25e49cu: goto label_25e49c;
        case 0x25e4a0u: goto label_25e4a0;
        case 0x25e4a4u: goto label_25e4a4;
        case 0x25e4a8u: goto label_25e4a8;
        case 0x25e4acu: goto label_25e4ac;
        case 0x25e4b0u: goto label_25e4b0;
        case 0x25e4b4u: goto label_25e4b4;
        case 0x25e4b8u: goto label_25e4b8;
        case 0x25e4bcu: goto label_25e4bc;
        case 0x25e4c0u: goto label_25e4c0;
        case 0x25e4c4u: goto label_25e4c4;
        case 0x25e4c8u: goto label_25e4c8;
        case 0x25e4ccu: goto label_25e4cc;
        case 0x25e4d0u: goto label_25e4d0;
        case 0x25e4d4u: goto label_25e4d4;
        case 0x25e4d8u: goto label_25e4d8;
        case 0x25e4dcu: goto label_25e4dc;
        case 0x25e4e0u: goto label_25e4e0;
        case 0x25e4e4u: goto label_25e4e4;
        case 0x25e4e8u: goto label_25e4e8;
        case 0x25e4ecu: goto label_25e4ec;
        case 0x25e4f0u: goto label_25e4f0;
        case 0x25e4f4u: goto label_25e4f4;
        case 0x25e4f8u: goto label_25e4f8;
        case 0x25e4fcu: goto label_25e4fc;
        case 0x25e500u: goto label_25e500;
        case 0x25e504u: goto label_25e504;
        case 0x25e508u: goto label_25e508;
        case 0x25e50cu: goto label_25e50c;
        case 0x25e510u: goto label_25e510;
        case 0x25e514u: goto label_25e514;
        case 0x25e518u: goto label_25e518;
        default: break;
    }

    ctx->pc = 0x25e480u;

label_25e480:
    // 0x25e480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25e484:
    // 0x25e484: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25e488:
    if (ctx->pc == 0x25E488u) {
        ctx->pc = 0x25E488u;
            // 0x25e488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x25E48Cu;
        goto label_25e48c;
    }
    ctx->pc = 0x25E484u;
    {
        const bool branch_taken_0x25e484 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E484u;
            // 0x25e488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e484) {
            ctx->pc = 0x25E498u;
            goto label_25e498;
        }
    }
    ctx->pc = 0x25E48Cu;
label_25e48c:
    // 0x25e48c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e48cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25e490:
    // 0x25e490: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e494:
    if (ctx->pc == 0x25E494u) {
        ctx->pc = 0x25E494u;
            // 0x25e494: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25E498u;
        goto label_25e498;
    }
    ctx->pc = 0x25E490u;
    {
        const bool branch_taken_0x25e490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E490u;
            // 0x25e494: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e490) {
            ctx->pc = 0x25E4A0u;
            goto label_25e4a0;
        }
    }
    ctx->pc = 0x25E498u;
label_25e498:
    // 0x25e498: 0x1000001d  b           . + 4 + (0x1D << 2)
label_25e49c:
    if (ctx->pc == 0x25E49Cu) {
        ctx->pc = 0x25E49Cu;
            // 0x25e49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E4A0u;
        goto label_25e4a0;
    }
    ctx->pc = 0x25E498u;
    {
        const bool branch_taken_0x25e498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E498u;
            // 0x25e49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e498) {
            ctx->pc = 0x25E510u;
            goto label_25e510;
        }
    }
    ctx->pc = 0x25E4A0u;
label_25e4a0:
    // 0x25e4a0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25e4a4:
    // 0x25e4a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e4a8:
    // 0x25e4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25e4ac:
    if (ctx->pc == 0x25E4ACu) {
        ctx->pc = 0x25E4B0u;
        goto label_25e4b0;
    }
    ctx->pc = 0x25E4A8u;
    {
        const bool branch_taken_0x25e4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4a8) {
            ctx->pc = 0x25E4B8u;
            goto label_25e4b8;
        }
    }
    ctx->pc = 0x25E4B0u;
label_25e4b0:
    // 0x25e4b0: 0x10000017  b           . + 4 + (0x17 << 2)
label_25e4b4:
    if (ctx->pc == 0x25E4B4u) {
        ctx->pc = 0x25E4B4u;
            // 0x25e4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E4B8u;
        goto label_25e4b8;
    }
    ctx->pc = 0x25E4B0u;
    {
        const bool branch_taken_0x25e4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4B0u;
            // 0x25e4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4b0) {
            ctx->pc = 0x25E510u;
            goto label_25e510;
        }
    }
    ctx->pc = 0x25E4B8u;
label_25e4b8:
    // 0x25e4b8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25e4bc:
    // 0x25e4bc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e4c0:
    if (ctx->pc == 0x25E4C0u) {
        ctx->pc = 0x25E4C0u;
            // 0x25e4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E4C4u;
        goto label_25e4c4;
    }
    ctx->pc = 0x25E4BCu;
    {
        const bool branch_taken_0x25e4bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4BCu;
            // 0x25e4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4bc) {
            ctx->pc = 0x25E4CCu;
            goto label_25e4cc;
        }
    }
    ctx->pc = 0x25E4C4u;
label_25e4c4:
    // 0x25e4c4: 0x10000013  b           . + 4 + (0x13 << 2)
label_25e4c8:
    if (ctx->pc == 0x25E4C8u) {
        ctx->pc = 0x25E4C8u;
            // 0x25e4c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x25E4CCu;
        goto label_25e4cc;
    }
    ctx->pc = 0x25E4C4u;
    {
        const bool branch_taken_0x25e4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4C4u;
            // 0x25e4c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4c4) {
            ctx->pc = 0x25E514u;
            goto label_25e514;
        }
    }
    ctx->pc = 0x25E4CCu;
label_25e4cc:
    // 0x25e4cc: 0x8c820378  lw          $v0, 0x378($a0)
    ctx->pc = 0x25e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 888)));
label_25e4d0:
    // 0x25e4d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_25e4d4:
    if (ctx->pc == 0x25E4D4u) {
        ctx->pc = 0x25E4D8u;
        goto label_25e4d8;
    }
    ctx->pc = 0x25E4D0u;
    {
        const bool branch_taken_0x25e4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e4d0) {
            ctx->pc = 0x25E4F0u;
            goto label_25e4f0;
        }
    }
    ctx->pc = 0x25E4D8u;
label_25e4d8:
    // 0x25e4d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e4dc:
    // 0x25e4dc: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x25e4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_25e4e0:
    // 0x25e4e0: 0x320f809  jalr        $t9
label_25e4e4:
    if (ctx->pc == 0x25E4E4u) {
        ctx->pc = 0x25E4E8u;
        goto label_25e4e8;
    }
    ctx->pc = 0x25E4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E4E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E4E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E4E8u; }
            if (ctx->pc != 0x25E4E8u) { return; }
        }
        }
    }
    ctx->pc = 0x25E4E8u;
label_25e4e8:
    // 0x25e4e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_25e4ec:
    if (ctx->pc == 0x25E4ECu) {
        ctx->pc = 0x25E4F0u;
        goto label_25e4f0;
    }
    ctx->pc = 0x25E4E8u;
    {
        const bool branch_taken_0x25e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4e8) {
            ctx->pc = 0x25E510u;
            goto label_25e510;
        }
    }
    ctx->pc = 0x25E4F0u;
label_25e4f0:
    // 0x25e4f0: 0x8c8303b8  lw          $v1, 0x3B8($a0)
    ctx->pc = 0x25e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 952)));
label_25e4f4:
    // 0x25e4f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25e4f8:
    // 0x25e4f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_25e4fc:
    if (ctx->pc == 0x25E4FCu) {
        ctx->pc = 0x25E4FCu;
            // 0x25e4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E500u;
        goto label_25e500;
    }
    ctx->pc = 0x25E4F8u;
    {
        const bool branch_taken_0x25e4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25E4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E4F8u;
            // 0x25e4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4f8) {
            ctx->pc = 0x25E510u;
            goto label_25e510;
        }
    }
    ctx->pc = 0x25E500u;
label_25e500:
    // 0x25e500: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e504:
    // 0x25e504: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x25e504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_25e508:
    // 0x25e508: 0x320f809  jalr        $t9
label_25e50c:
    if (ctx->pc == 0x25E50Cu) {
        ctx->pc = 0x25E510u;
        goto label_25e510;
    }
    ctx->pc = 0x25E508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E510u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E510u; }
            if (ctx->pc != 0x25E510u) { return; }
        }
        }
    }
    ctx->pc = 0x25E510u;
label_25e510:
    // 0x25e510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e514:
    // 0x25e514: 0x3e00008  jr          $ra
label_25e518:
    if (ctx->pc == 0x25E518u) {
        ctx->pc = 0x25E518u;
            // 0x25e518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x25E51Cu;
        goto label_fallthrough_0x25e514;
    }
    ctx->pc = 0x25E514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E514u;
            // 0x25e518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25e514:
    ctx->pc = 0x25E51Cu;
}
