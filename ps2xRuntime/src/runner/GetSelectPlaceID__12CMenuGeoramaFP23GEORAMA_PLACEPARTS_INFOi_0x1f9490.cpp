#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSelectPlaceID__12CMenuGeoramaFP23GEORAMA_PLACEPARTS_INFOi
// Address: 0x1f9490 - 0x1f958c
void GetSelectPlaceID__12CMenuGeoramaFP23GEORAMA_PLACEPARTS_INFOi_0x1f9490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSelectPlaceID__12CMenuGeoramaFP23GEORAMA_PLACEPARTS_INFOi_0x1f9490");
#endif

    switch (ctx->pc) {
        case 0x1f94fcu: goto label_1f94fc;
        case 0x1f9518u: goto label_1f9518;
        case 0x1f9524u: goto label_1f9524;
        default: break;
    }

    ctx->pc = 0x1f9490u;

    // 0x1f9490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f9490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f9494: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f9494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f9498: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f9498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f949c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f94a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f94a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f94a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f94a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f94a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f94ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f94acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f94b0: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f94b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f94b4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F94B4u;
    {
        const bool branch_taken_0x1f94b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F94B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94B4u;
            // 0x1f94b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94b4) {
            ctx->pc = 0x1F94C4u;
            goto label_1f94c4;
        }
    }
    ctx->pc = 0x1F94BCu;
    // 0x1f94bc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1F94BCu;
    {
        const bool branch_taken_0x1f94bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94BCu;
            // 0x1f94c0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94bc) {
            ctx->pc = 0x1F9570u;
            goto label_1f9570;
        }
    }
    ctx->pc = 0x1F94C4u;
label_1f94c4:
    // 0x1f94c4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F94C4u;
    {
        const bool branch_taken_0x1f94c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F94C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94C4u;
            // 0x1f94c8: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94c4) {
            ctx->pc = 0x1F94D4u;
            goto label_1f94d4;
        }
    }
    ctx->pc = 0x1F94CCu;
    // 0x1f94cc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F94CCu;
    {
        const bool branch_taken_0x1f94cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94CCu;
            // 0x1f94d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94cc) {
            ctx->pc = 0x1F956Cu;
            goto label_1f956c;
        }
    }
    ctx->pc = 0x1F94D4u;
label_1f94d4:
    // 0x1f94d4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f94d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f94dc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1f94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f94e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f94e4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F94E4u;
    {
        const bool branch_taken_0x1f94e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1F94E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94E4u;
            // 0x1f94e8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94e4) {
            ctx->pc = 0x1F94F4u;
            goto label_1f94f4;
        }
    }
    ctx->pc = 0x1F94ECu;
    // 0x1f94ec: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F94ECu;
    {
        const bool branch_taken_0x1f94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94ECu;
            // 0x1f94f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94ec) {
            ctx->pc = 0x1F956Cu;
            goto label_1f956c;
        }
    }
    ctx->pc = 0x1F94F4u;
label_1f94f4:
    // 0x1f94f4: 0xc06c2d0  jal         func_1B0B40
    ctx->pc = 0x1F94F4u;
    SET_GPR_U32(ctx, 31, 0x1F94FCu);
    ctx->pc = 0x1F94F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94F4u;
            // 0x1f94f8: 0x24650008  addiu       $a1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B40u;
    if (runtime->hasFunction(0x1B0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94FCu; }
        if (ctx->pc != 0x1F94FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__8CEditMapFPc_0x1b0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94FCu; }
        if (ctx->pc != 0x1F94FCu) { return; }
    }
    ctx->pc = 0x1F94FCu;
label_1f94fc:
    // 0x1f94fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f94fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9500: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9500u;
    {
        const bool branch_taken_0x1f9500 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9500u;
            // 0x1f9504: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9500) {
            ctx->pc = 0x1F9510u;
            goto label_1f9510;
        }
    }
    ctx->pc = 0x1F9508u;
    // 0x1f9508: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F9508u;
    {
        const bool branch_taken_0x1f9508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F950Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9508u;
            // 0x1f950c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9508) {
            ctx->pc = 0x1F956Cu;
            goto label_1f956c;
        }
    }
    ctx->pc = 0x1F9510u;
label_1f9510:
    // 0x1f9510: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F9510u;
    {
        const bool branch_taken_0x1f9510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9510u;
            // 0x1f9514: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9510) {
            ctx->pc = 0x1F9558u;
            goto label_1f9558;
        }
    }
    ctx->pc = 0x1F9518u;
label_1f9518:
    // 0x1f9518: 0x8c4501b8  lw          $a1, 0x1B8($v0)
    ctx->pc = 0x1f9518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x1f951c: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x1F951Cu;
    SET_GPR_U32(ctx, 31, 0x1F9524u);
    ctx->pc = 0x1F9520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F951Cu;
            // 0x1f9520: 0x8f848ff8  lw          $a0, -0x7008($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9524u; }
        if (ctx->pc != 0x1F9524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9524u; }
        if (ctx->pc != 0x1F9524u) { return; }
    }
    ctx->pc = 0x1F9524u;
label_1f9524:
    // 0x1f9524: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9524u;
    {
        const bool branch_taken_0x1f9524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9524) {
            ctx->pc = 0x1F9550u;
            goto label_1f9550;
        }
    }
    ctx->pc = 0x1F952Cu;
    // 0x1f952c: 0x8c430324  lw          $v1, 0x324($v0)
    ctx->pc = 0x1f952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1f9530: 0x16430007  bne         $s2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9530u;
    {
        const bool branch_taken_0x1f9530 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f9530) {
            ctx->pc = 0x1F9550u;
            goto label_1f9550;
        }
    }
    ctx->pc = 0x1F9538u;
    // 0x1f9538: 0x8c420310  lw          $v0, 0x310($v0)
    ctx->pc = 0x1f9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x1f953c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F953Cu;
    {
        const bool branch_taken_0x1f953c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F953Cu;
            // 0x1f9540: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f953c) {
            ctx->pc = 0x1F9550u;
            goto label_1f9550;
        }
    }
    ctx->pc = 0x1F9544u;
    // 0x1f9544: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f9544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f9548: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9548u;
    {
        const bool branch_taken_0x1f9548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9548u;
            // 0x1f954c: 0x8c5001b8  lw          $s0, 0x1B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9548) {
            ctx->pc = 0x1F9568u;
            goto label_1f9568;
        }
    }
    ctx->pc = 0x1F9550u;
label_1f9550:
    // 0x1f9550: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f9550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1f9554: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f9558:
    // 0x1f9558: 0x8e8201b0  lw          $v0, 0x1B0($s4)
    ctx->pc = 0x1f9558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x1f955c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1f955cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f9560: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F9560u;
    {
        const bool branch_taken_0x1f9560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9560u;
            // 0x1f9564: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9560) {
            ctx->pc = 0x1F9518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f9518;
        }
    }
    ctx->pc = 0x1F9568u;
label_1f9568:
    // 0x1f9568: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f9568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f956c:
    // 0x1f956c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f956cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f9570:
    // 0x1f9570: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f9570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9574: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f9574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9578: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f9578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f957c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f957cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9584: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9584u;
            // 0x1f9588: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F958Cu;
}
