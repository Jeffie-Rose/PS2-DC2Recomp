#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_REF__FP12RS_STACKDATAi
// Address: 0x26e4e0 - 0x26e610
void ps2__SET_CAMERA_REF__FP12RS_STACKDATAi_0x26e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_REF__FP12RS_STACKDATAi_0x26e4e0");
#endif

    switch (ctx->pc) {
        case 0x26e500u: goto label_26e500;
        case 0x26e538u: goto label_26e538;
        case 0x26e55cu: goto label_26e55c;
        case 0x26e5c8u: goto label_26e5c8;
        case 0x26e5d8u: goto label_26e5d8;
        case 0x26e5f4u: goto label_26e5f4;
        default: break;
    }

    ctx->pc = 0x26e4e0u;

    // 0x26e4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26e4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26e4e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26e4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26e4e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26e4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26e4ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e4f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26e4f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26e4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4f8: 0xc09b8c8  jal         func_26E320
    ctx->pc = 0x26E4F8u;
    SET_GPR_U32(ctx, 31, 0x26E500u);
    ctx->pc = 0x26E4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4F8u;
            // 0x26e4fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E500u; }
        if (ctx->pc != 0x26E500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E500u; }
        if (ctx->pc != 0x26E500u) { return; }
    }
    ctx->pc = 0x26E500u;
label_26e500:
    // 0x26e500: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E500u;
    {
        const bool branch_taken_0x26e500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E500u;
            // 0x26e504: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e500) {
            ctx->pc = 0x26E510u;
            goto label_26e510;
        }
    }
    ctx->pc = 0x26E508u;
    // 0x26e508: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x26E508u;
    {
        const bool branch_taken_0x26e508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E508u;
            // 0x26e50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e508) {
            ctx->pc = 0x26E5F8u;
            goto label_26e5f8;
        }
    }
    ctx->pc = 0x26E510u;
label_26e510:
    // 0x26e510: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e514: 0x1222002e  beq         $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26E514u;
    {
        const bool branch_taken_0x26e514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E514u;
            // 0x26e518: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e514) {
            ctx->pc = 0x26E5D0u;
            goto label_26e5d0;
        }
    }
    ctx->pc = 0x26E51Cu;
    // 0x26e51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e520: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E520u;
    {
        const bool branch_taken_0x26e520 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E520u;
            // 0x26e524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e520) {
            ctx->pc = 0x26E530u;
            goto label_26e530;
        }
    }
    ctx->pc = 0x26E528u;
    // 0x26e528: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x26E528u;
    {
        const bool branch_taken_0x26e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E528u;
            // 0x26e52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e528) {
            ctx->pc = 0x26E5E0u;
            goto label_26e5e0;
        }
    }
    ctx->pc = 0x26E530u;
label_26e530:
    // 0x26e530: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E530u;
    SET_GPR_U32(ctx, 31, 0x26E538u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E538u; }
        if (ctx->pc != 0x26E538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E538u; }
        if (ctx->pc != 0x26E538u) { return; }
    }
    ctx->pc = 0x26E538u;
label_26e538:
    // 0x26e538: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26e538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26e53c: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26e53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26e540: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E540u;
    {
        const bool branch_taken_0x26e540 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E540u;
            // 0x26e544: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e540) {
            ctx->pc = 0x26E550u;
            goto label_26e550;
        }
    }
    ctx->pc = 0x26E548u;
    // 0x26e548: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26E548u;
    {
        const bool branch_taken_0x26e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E548u;
            // 0x26e54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e548) {
            ctx->pc = 0x26E5B0u;
            goto label_26e5b0;
        }
    }
    ctx->pc = 0x26E550u;
label_26e550:
    // 0x26e550: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26e550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26e554: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26E554u;
    {
        const bool branch_taken_0x26e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E554u;
            // 0x26e558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e554) {
            ctx->pc = 0x26E588u;
            goto label_26e588;
        }
    }
    ctx->pc = 0x26E55Cu;
label_26e55c:
    // 0x26e55c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26e560: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26E560u;
    {
        const bool branch_taken_0x26e560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26e560) {
            ctx->pc = 0x26E594u;
            goto label_26e594;
        }
    }
    ctx->pc = 0x26E568u;
    // 0x26e568: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26e568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26e56c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E56Cu;
    {
        const bool branch_taken_0x26e56c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e56c) {
            ctx->pc = 0x26E57Cu;
            goto label_26e57c;
        }
    }
    ctx->pc = 0x26E574u;
    // 0x26e574: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26E574u;
    {
        const bool branch_taken_0x26e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E574u;
            // 0x26e578: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e574) {
            ctx->pc = 0x26E588u;
            goto label_26e588;
        }
    }
    ctx->pc = 0x26E57Cu;
label_26e57c:
    // 0x26e57c: 0x0  nop
    ctx->pc = 0x26e57cu;
    // NOP
    // 0x26e580: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26E580u;
    {
        const bool branch_taken_0x26e580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E580u;
            // 0x26e584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e580) {
            ctx->pc = 0x26E5B0u;
            goto label_26e5b0;
        }
    }
    ctx->pc = 0x26E588u;
label_26e588:
    // 0x26e588: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26e588u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26e58c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x26E58Cu;
    {
        const bool branch_taken_0x26e58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e58c) {
            ctx->pc = 0x26E55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26e55c;
        }
    }
    ctx->pc = 0x26E594u;
label_26e594:
    // 0x26e594: 0x0  nop
    ctx->pc = 0x26e594u;
    // NOP
    // 0x26e598: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E598u;
    {
        const bool branch_taken_0x26e598 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E598u;
            // 0x26e59c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e598) {
            ctx->pc = 0x26E5A8u;
            goto label_26e5a8;
        }
    }
    ctx->pc = 0x26E5A0u;
    // 0x26e5a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E5A0u;
    {
        const bool branch_taken_0x26e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e5a0) {
            ctx->pc = 0x26E5B0u;
            goto label_26e5b0;
        }
    }
    ctx->pc = 0x26E5A8u;
label_26e5a8:
    // 0x26e5a8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x26e5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26e5ac: 0x0  nop
    ctx->pc = 0x26e5acu;
    // NOP
label_26e5b0:
    // 0x26e5b0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E5B0u;
    {
        const bool branch_taken_0x26e5b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5B0u;
            // 0x26e5b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5b0) {
            ctx->pc = 0x26E5C0u;
            goto label_26e5c0;
        }
    }
    ctx->pc = 0x26E5B8u;
    // 0x26e5b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26E5B8u;
    {
        const bool branch_taken_0x26e5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5B8u;
            // 0x26e5bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5b8) {
            ctx->pc = 0x26E5F8u;
            goto label_26e5f8;
        }
    }
    ctx->pc = 0x26E5C0u;
label_26e5c0:
    // 0x26e5c0: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26E5C0u;
    SET_GPR_U32(ctx, 31, 0x26E5C8u);
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5C8u; }
        if (ctx->pc != 0x26E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5C8u; }
        if (ctx->pc != 0x26E5C8u) { return; }
    }
    ctx->pc = 0x26E5C8u;
label_26e5c8:
    // 0x26e5c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26E5C8u;
    {
        const bool branch_taken_0x26e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5C8u;
            // 0x26e5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5c8) {
            ctx->pc = 0x26E5ECu;
            goto label_26e5ec;
        }
    }
    ctx->pc = 0x26E5D0u;
label_26e5d0:
    // 0x26e5d0: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26E5D0u;
    SET_GPR_U32(ctx, 31, 0x26E5D8u);
    ctx->pc = 0x26E5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5D0u;
            // 0x26e5d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5D8u; }
        if (ctx->pc != 0x26E5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5D8u; }
        if (ctx->pc != 0x26E5D8u) { return; }
    }
    ctx->pc = 0x26E5D8u;
label_26e5d8:
    // 0x26e5d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E5D8u;
    {
        const bool branch_taken_0x26e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e5d8) {
            ctx->pc = 0x26E5E8u;
            goto label_26e5e8;
        }
    }
    ctx->pc = 0x26E5E0u;
label_26e5e0:
    // 0x26e5e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E5E0u;
    {
        const bool branch_taken_0x26e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5E0u;
            // 0x26e5e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5e0) {
            ctx->pc = 0x26E5FCu;
            goto label_26e5fc;
        }
    }
    ctx->pc = 0x26E5E8u;
label_26e5e8:
    // 0x26e5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26e5ec:
    // 0x26e5ec: 0xc04c518  jal         func_131460
    ctx->pc = 0x26E5ECu;
    SET_GPR_U32(ctx, 31, 0x26E5F4u);
    ctx->pc = 0x26E5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5ECu;
            // 0x26e5f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5F4u; }
        if (ctx->pc != 0x26E5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5F4u; }
        if (ctx->pc != 0x26E5F4u) { return; }
    }
    ctx->pc = 0x26E5F4u;
label_26e5f4:
    // 0x26e5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e5f8:
    // 0x26e5f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26e5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26e5fc:
    // 0x26e5fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26e5fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e608: 0x3e00008  jr          $ra
    ctx->pc = 0x26E608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E608u;
            // 0x26e60c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E610u;
}
