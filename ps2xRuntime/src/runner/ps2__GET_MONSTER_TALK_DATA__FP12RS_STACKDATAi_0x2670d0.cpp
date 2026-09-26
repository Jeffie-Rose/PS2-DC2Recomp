#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MONSTER_TALK_DATA__FP12RS_STACKDATAi
// Address: 0x2670d0 - 0x267168
void ps2__GET_MONSTER_TALK_DATA__FP12RS_STACKDATAi_0x2670d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MONSTER_TALK_DATA__FP12RS_STACKDATAi_0x2670d0");
#endif

    switch (ctx->pc) {
        case 0x2670f0u: goto label_2670f0;
        case 0x267100u: goto label_267100;
        case 0x267124u: goto label_267124;
        case 0x267138u: goto label_267138;
        case 0x267148u: goto label_267148;
        default: break;
    }

    ctx->pc = 0x2670d0u;

    // 0x2670d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2670d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2670d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2670d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2670d8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2670D8u;
    {
        const bool branch_taken_0x2670d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2670DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2670D8u;
            // 0x2670dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670d8) {
            ctx->pc = 0x267108u;
            goto label_267108;
        }
    }
    ctx->pc = 0x2670E0u;
    // 0x2670e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2670e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2670e4: 0x8c25e5ec  lw          $a1, -0x1A14($at)
    ctx->pc = 0x2670e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960620)));
    // 0x2670e8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2670E8u;
    SET_GPR_U32(ctx, 31, 0x2670F0u);
    ctx->pc = 0x2670ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2670E8u;
            // 0x2670ec: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2670F0u; }
        if (ctx->pc != 0x2670F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2670F0u; }
        if (ctx->pc != 0x2670F0u) { return; }
    }
    ctx->pc = 0x2670F0u;
label_2670f0:
    // 0x2670f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2670f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2670f4: 0x8c25e5f4  lw          $a1, -0x1A0C($at)
    ctx->pc = 0x2670f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960628)));
    // 0x2670f8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2670F8u;
    SET_GPR_U32(ctx, 31, 0x267100u);
    ctx->pc = 0x2670FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2670F8u;
            // 0x2670fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267100u; }
        if (ctx->pc != 0x267100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267100u; }
        if (ctx->pc != 0x267100u) { return; }
    }
    ctx->pc = 0x267100u;
label_267100:
    // 0x267100: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x267100u;
    {
        const bool branch_taken_0x267100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267100u;
            // 0x267104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267100) {
            ctx->pc = 0x26715Cu;
            goto label_26715c;
        }
    }
    ctx->pc = 0x267108u;
label_267108:
    // 0x267108: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x267108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26710c: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26710Cu;
    {
        const bool branch_taken_0x26710c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x267110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26710Cu;
            // 0x267110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26710c) {
            ctx->pc = 0x267150u;
            goto label_267150;
        }
    }
    ctx->pc = 0x267114u;
    // 0x267114: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x267114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x267118: 0x8c25e5ec  lw          $a1, -0x1A14($at)
    ctx->pc = 0x267118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960620)));
    // 0x26711c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26711Cu;
    SET_GPR_U32(ctx, 31, 0x267124u);
    ctx->pc = 0x267120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26711Cu;
            // 0x267120: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267124u; }
        if (ctx->pc != 0x267124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267124u; }
        if (ctx->pc != 0x267124u) { return; }
    }
    ctx->pc = 0x267124u;
label_267124:
    // 0x267124: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x267124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x267128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26712c: 0x8c25e5f0  lw          $a1, -0x1A10($at)
    ctx->pc = 0x26712cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960624)));
    // 0x267130: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x267130u;
    SET_GPR_U32(ctx, 31, 0x267138u);
    ctx->pc = 0x267134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267130u;
            // 0x267134: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267138u; }
        if (ctx->pc != 0x267138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267138u; }
        if (ctx->pc != 0x267138u) { return; }
    }
    ctx->pc = 0x267138u;
label_267138:
    // 0x267138: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x267138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26713c: 0x8c25e5f4  lw          $a1, -0x1A0C($at)
    ctx->pc = 0x26713cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960628)));
    // 0x267140: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x267140u;
    SET_GPR_U32(ctx, 31, 0x267148u);
    ctx->pc = 0x267144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267140u;
            // 0x267144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267148u; }
        if (ctx->pc != 0x267148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267148u; }
        if (ctx->pc != 0x267148u) { return; }
    }
    ctx->pc = 0x267148u;
label_267148:
    // 0x267148: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267148u;
    {
        const bool branch_taken_0x267148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267148) {
            ctx->pc = 0x267158u;
            goto label_267158;
        }
    }
    ctx->pc = 0x267150u;
label_267150:
    // 0x267150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267150u;
    {
        const bool branch_taken_0x267150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267150u;
            // 0x267154: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267150) {
            ctx->pc = 0x267160u;
            goto label_267160;
        }
    }
    ctx->pc = 0x267158u;
label_267158:
    // 0x267158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26715c:
    // 0x26715c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26715cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_267160:
    // 0x267160: 0x3e00008  jr          $ra
    ctx->pc = 0x267160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267160u;
            // 0x267164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267168u;
}
