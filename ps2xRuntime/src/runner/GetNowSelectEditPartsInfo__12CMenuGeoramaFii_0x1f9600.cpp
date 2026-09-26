#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowSelectEditPartsInfo__12CMenuGeoramaFii
// Address: 0x1f9600 - 0x1f96bc
void GetNowSelectEditPartsInfo__12CMenuGeoramaFii_0x1f9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowSelectEditPartsInfo__12CMenuGeoramaFii_0x1f9600");
#endif

    switch (ctx->pc) {
        case 0x1f9640u: goto label_1f9640;
        case 0x1f9674u: goto label_1f9674;
        case 0x1f96a8u: goto label_1f96a8;
        default: break;
    }

    ctx->pc = 0x1f9600u;

    // 0x1f9600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9608: 0x8f838ff8  lw          $v1, -0x7008($gp)
    ctx->pc = 0x1f9608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f960c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F960Cu;
    {
        const bool branch_taken_0x1f960c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F960Cu;
            // 0x1f9610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f960c) {
            ctx->pc = 0x1F961Cu;
            goto label_1f961c;
        }
    }
    ctx->pc = 0x1F9614u;
    // 0x1f9614: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1F9614u;
    {
        const bool branch_taken_0x1f9614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9614u;
            // 0x1f9618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9614) {
            ctx->pc = 0x1F96B0u;
            goto label_1f96b0;
        }
    }
    ctx->pc = 0x1F961Cu;
label_1f961c:
    // 0x1f961c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F961Cu;
    {
        const bool branch_taken_0x1f961c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F961Cu;
            // 0x1f9620: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f961c) {
            ctx->pc = 0x1F9648u;
            goto label_1f9648;
        }
    }
    ctx->pc = 0x1F9624u;
    // 0x1f9624: 0x3401bbc4  ori         $at, $zero, 0xBBC4
    ctx->pc = 0x1f9624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48068);
    // 0x1f9628: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f9628u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f962c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f962cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9630: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f9630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f9634: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f9634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9638: 0xc06c2d0  jal         func_1B0B40
    ctx->pc = 0x1F9638u;
    SET_GPR_U32(ctx, 31, 0x1F9640u);
    ctx->pc = 0x1F963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9638u;
            // 0x1f963c: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B40u;
    if (runtime->hasFunction(0x1B0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9640u; }
        if (ctx->pc != 0x1F9640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__8CEditMapFPc_0x1b0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9640u; }
        if (ctx->pc != 0x1F9640u) { return; }
    }
    ctx->pc = 0x1F9640u;
label_1f9640:
    // 0x1f9640: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F9640u;
    {
        const bool branch_taken_0x1f9640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9640) {
            ctx->pc = 0x1F96B0u;
            goto label_1f96b0;
        }
    }
    ctx->pc = 0x1F9648u;
label_1f9648:
    // 0x1f9648: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F9648u;
    {
        const bool branch_taken_0x1f9648 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F964Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9648u;
            // 0x1f964c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9648) {
            ctx->pc = 0x1F967Cu;
            goto label_1f967c;
        }
    }
    ctx->pc = 0x1F9650u;
    // 0x1f9650: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1f9650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1f9654: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9658: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f9658u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f965c: 0x34210fc8  ori         $at, $at, 0xFC8
    ctx->pc = 0x1f965cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4040);
    // 0x1f9660: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f9660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9664: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f9664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f9668: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f9668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f966c: 0xc06c2d0  jal         func_1B0B40
    ctx->pc = 0x1F966Cu;
    SET_GPR_U32(ctx, 31, 0x1F9674u);
    ctx->pc = 0x1F9670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F966Cu;
            // 0x1f9670: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B40u;
    if (runtime->hasFunction(0x1B0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9674u; }
        if (ctx->pc != 0x1F9674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__8CEditMapFPc_0x1b0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9674u; }
        if (ctx->pc != 0x1F9674u) { return; }
    }
    ctx->pc = 0x1F9674u;
label_1f9674:
    // 0x1f9674: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F9674u;
    {
        const bool branch_taken_0x1f9674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9674) {
            ctx->pc = 0x1F96B0u;
            goto label_1f96b0;
        }
    }
    ctx->pc = 0x1F967Cu;
label_1f967c:
    // 0x1f967c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F967Cu;
    {
        const bool branch_taken_0x1f967c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F967Cu;
            // 0x1f9680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f967c) {
            ctx->pc = 0x1F96B0u;
            goto label_1f96b0;
        }
    }
    ctx->pc = 0x1F9684u;
    // 0x1f9684: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1f9684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1f9688: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f968c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f968cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f9690: 0x342163cc  ori         $at, $at, 0x63CC
    ctx->pc = 0x1f9690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25548);
    // 0x1f9694: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f9694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9698: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f9698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f969c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96a0: 0xc06c2d0  jal         func_1B0B40
    ctx->pc = 0x1F96A0u;
    SET_GPR_U32(ctx, 31, 0x1F96A8u);
    ctx->pc = 0x1F96A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96A0u;
            // 0x1f96a4: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B40u;
    if (runtime->hasFunction(0x1B0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96A8u; }
        if (ctx->pc != 0x1F96A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__8CEditMapFPc_0x1b0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96A8u; }
        if (ctx->pc != 0x1F96A8u) { return; }
    }
    ctx->pc = 0x1F96A8u;
label_1f96a8:
    // 0x1f96a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1F96A8u;
    {
        const bool branch_taken_0x1f96a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f96a8) {
            ctx->pc = 0x1F96B0u;
            goto label_1f96b0;
        }
    }
    ctx->pc = 0x1F96B0u;
label_1f96b0:
    // 0x1f96b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f96b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f96b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F96B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F96B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96B4u;
            // 0x1f96b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F96BCu;
}
