#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeDngTreeMapJumpNo__FiiPiPi
// Address: 0x1ef890 - 0x1ef9f0
void MakeDngTreeMapJumpNo__FiiPiPi_0x1ef890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeDngTreeMapJumpNo__FiiPiPi_0x1ef890");
#endif

    switch (ctx->pc) {
        case 0x1ef8dcu: goto label_1ef8dc;
        case 0x1ef908u: goto label_1ef908;
        case 0x1ef934u: goto label_1ef934;
        case 0x1ef940u: goto label_1ef940;
        case 0x1ef950u: goto label_1ef950;
        case 0x1ef988u: goto label_1ef988;
        case 0x1ef99cu: goto label_1ef99c;
        case 0x1ef9acu: goto label_1ef9ac;
        case 0x1ef9b8u: goto label_1ef9b8;
        case 0x1ef9c4u: goto label_1ef9c4;
        case 0x1ef9d4u: goto label_1ef9d4;
        default: break;
    }

    ctx->pc = 0x1ef890u;

    // 0x1ef890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ef894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ef894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ef898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ef898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ef89c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ef8a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ef8a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef8a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ef8a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef8b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ef8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8b4: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF8B4u;
    {
        const bool branch_taken_0x1ef8b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8B4u;
            // 0x1ef8b8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8b4) {
            ctx->pc = 0x1EF8E0u;
            goto label_1ef8e0;
        }
    }
    ctx->pc = 0x1EF8BCu;
    // 0x1ef8bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ef8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ef8c0: 0x16430008  bne         $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF8C0u;
    {
        const bool branch_taken_0x1ef8c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8C0u;
            // 0x1ef8c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8c0) {
            ctx->pc = 0x1EF8E4u;
            goto label_1ef8e4;
        }
    }
    ctx->pc = 0x1EF8C8u;
    // 0x1ef8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef8cc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ef8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ef8d0: 0x24848828  addiu       $a0, $a0, -0x77D8
    ctx->pc = 0x1ef8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936616));
    // 0x1ef8d4: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1EF8D4u;
    SET_GPR_U32(ctx, 31, 0x1EF8DCu);
    ctx->pc = 0x1EF8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8D4u;
            // 0x1ef8d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF8DCu; }
        if (ctx->pc != 0x1EF8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF8DCu; }
        if (ctx->pc != 0x1EF8DCu) { return; }
    }
    ctx->pc = 0x1EF8DCu;
label_1ef8dc:
    // 0x1ef8dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ef8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ef8e0:
    // 0x1ef8e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ef8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef8e4:
    // 0x1ef8e4: 0x1664000a  bne         $s3, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF8E4u;
    {
        const bool branch_taken_0x1ef8e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EF8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8E4u;
            // 0x1ef8e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8e4) {
            ctx->pc = 0x1EF910u;
            goto label_1ef910;
        }
    }
    ctx->pc = 0x1EF8ECu;
    // 0x1ef8ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ef8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef8f0: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF8F0u;
    {
        const bool branch_taken_0x1ef8f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef8f0) {
            ctx->pc = 0x1EF90Cu;
            goto label_1ef90c;
        }
    }
    ctx->pc = 0x1EF8F8u;
    // 0x1ef8f8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1ef8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1ef8fc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ef8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ef900: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1EF900u;
    SET_GPR_U32(ctx, 31, 0x1EF908u);
    ctx->pc = 0x1EF904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF900u;
            // 0x1ef904: 0x24848830  addiu       $a0, $a0, -0x77D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF908u; }
        if (ctx->pc != 0x1EF908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF908u; }
        if (ctx->pc != 0x1EF908u) { return; }
    }
    ctx->pc = 0x1EF908u;
label_1ef908:
    // 0x1ef908: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ef908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ef90c:
    // 0x1ef90c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ef90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ef910:
    // 0x1ef910: 0x16630013  bne         $s3, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EF910u;
    {
        const bool branch_taken_0x1ef910 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF910u;
            // 0x1ef914: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef910) {
            ctx->pc = 0x1EF960u;
            goto label_1ef960;
        }
    }
    ctx->pc = 0x1EF918u;
    // 0x1ef918: 0x16430011  bne         $s2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EF918u;
    {
        const bool branch_taken_0x1ef918 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef918) {
            ctx->pc = 0x1EF960u;
            goto label_1ef960;
        }
    }
    ctx->pc = 0x1EF920u;
    // 0x1ef920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef924: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ef924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ef928: 0x24848838  addiu       $a0, $a0, -0x77C8
    ctx->pc = 0x1ef928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936632));
    // 0x1ef92c: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1EF92Cu;
    SET_GPR_U32(ctx, 31, 0x1EF934u);
    ctx->pc = 0x1EF930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF92Cu;
            // 0x1ef930: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF934u; }
        if (ctx->pc != 0x1EF934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF934u; }
        if (ctx->pc != 0x1EF934u) { return; }
    }
    ctx->pc = 0x1EF934u;
label_1ef934:
    // 0x1ef934: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ef934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ef938: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x1EF938u;
    SET_GPR_U32(ctx, 31, 0x1EF940u);
    ctx->pc = 0x1EF93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF938u;
            // 0x1ef93c: 0x240401b6  addiu       $a0, $zero, 0x1B6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF940u; }
        if (ctx->pc != 0x1EF940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF940u; }
        if (ctx->pc != 0x1EF940u) { return; }
    }
    ctx->pc = 0x1EF940u;
label_1ef940:
    // 0x1ef940: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF940u;
    {
        const bool branch_taken_0x1ef940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF940u;
            // 0x1ef944: 0x240401bc  addiu       $a0, $zero, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef940) {
            ctx->pc = 0x1EF960u;
            goto label_1ef960;
        }
    }
    ctx->pc = 0x1EF948u;
    // 0x1ef948: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x1EF948u;
    SET_GPR_U32(ctx, 31, 0x1EF950u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF950u; }
        if (ctx->pc != 0x1EF950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF950u; }
        if (ctx->pc != 0x1EF950u) { return; }
    }
    ctx->pc = 0x1EF950u;
label_1ef950:
    // 0x1ef950: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF950u;
    {
        const bool branch_taken_0x1ef950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF950u;
            // 0x1ef954: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef950) {
            ctx->pc = 0x1EF960u;
            goto label_1ef960;
        }
    }
    ctx->pc = 0x1EF958u;
    // 0x1ef958: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ef958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ef95c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1ef95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1ef960:
    // 0x1ef960: 0x1640001c  bnez        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EF960u;
    {
        const bool branch_taken_0x1ef960 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef960) {
            ctx->pc = 0x1EF9D4u;
            goto label_1ef9d4;
        }
    }
    ctx->pc = 0x1EF968u;
    // 0x1ef968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef96c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1ef96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ef970: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ef970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ef974: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ef974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ef978: 0x2442e2e0  addiu       $v0, $v0, -0x1D20
    ctx->pc = 0x1ef978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959840));
    // 0x1ef97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ef980: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1EF980u;
    SET_GPR_U32(ctx, 31, 0x1EF988u);
    ctx->pc = 0x1EF984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF980u;
            // 0x1ef984: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF988u; }
        if (ctx->pc != 0x1EF988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF988u; }
        if (ctx->pc != 0x1EF988u) { return; }
    }
    ctx->pc = 0x1EF988u;
label_1ef988:
    // 0x1ef988: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ef988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef98c: 0x16630011  bne         $s3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EF98Cu;
    {
        const bool branch_taken_0x1ef98c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF98Cu;
            // 0x1ef990: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef98c) {
            ctx->pc = 0x1EF9D4u;
            goto label_1ef9d4;
        }
    }
    ctx->pc = 0x1EF994u;
    // 0x1ef994: 0xc06421c  jal         func_190870
    ctx->pc = 0x1EF994u;
    SET_GPR_U32(ctx, 31, 0x1EF99Cu);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF99Cu; }
        if (ctx->pc != 0x1EF99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF99Cu; }
        if (ctx->pc != 0x1EF99Cu) { return; }
    }
    ctx->pc = 0x1EF99Cu;
label_1ef99c:
    // 0x1ef99c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ef99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ef9a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9a4: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1EF9A4u;
    SET_GPR_U32(ctx, 31, 0x1EF9ACu);
    ctx->pc = 0x1EF9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9A4u;
            // 0x1ef9a8: 0x24848840  addiu       $a0, $a0, -0x77C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9ACu; }
        if (ctx->pc != 0x1EF9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9ACu; }
        if (ctx->pc != 0x1EF9ACu) { return; }
    }
    ctx->pc = 0x1EF9ACu;
label_1ef9ac:
    // 0x1ef9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9b0: 0xc0a12d8  jal         func_284B60
    ctx->pc = 0x1EF9B0u;
    SET_GPR_U32(ctx, 31, 0x1EF9B8u);
    ctx->pc = 0x1EF9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9B0u;
            // 0x1ef9b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9B8u; }
        if (ctx->pc != 0x1EF9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9B8u; }
        if (ctx->pc != 0x1EF9B8u) { return; }
    }
    ctx->pc = 0x1EF9B8u;
label_1ef9b8:
    // 0x1ef9b8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ef9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ef9bc: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x1EF9BCu;
    SET_GPR_U32(ctx, 31, 0x1EF9C4u);
    ctx->pc = 0x1EF9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9BCu;
            // 0x1ef9c0: 0x24848840  addiu       $a0, $a0, -0x77C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9C4u; }
        if (ctx->pc != 0x1EF9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9C4u; }
        if (ctx->pc != 0x1EF9C4u) { return; }
    }
    ctx->pc = 0x1EF9C4u;
label_1ef9c4:
    // 0x1ef9c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ef9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ef9c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ef9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9cc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1EF9CCu;
    SET_GPR_U32(ctx, 31, 0x1EF9D4u);
    ctx->pc = 0x1EF9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9CCu;
            // 0x1ef9d0: 0x24848850  addiu       $a0, $a0, -0x77B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9D4u; }
        if (ctx->pc != 0x1EF9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9D4u; }
        if (ctx->pc != 0x1EF9D4u) { return; }
    }
    ctx->pc = 0x1EF9D4u;
label_1ef9d4:
    // 0x1ef9d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ef9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef9d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef9d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef9dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef9e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9E8u;
            // 0x1ef9ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF9F0u;
}
