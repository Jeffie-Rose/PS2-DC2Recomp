#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartyCharaModelName__Fii
// Address: 0x2ab400 - 0x2ab50c
void GetPartyCharaModelName__Fii_0x2ab400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartyCharaModelName__Fii_0x2ab400");
#endif

    switch (ctx->pc) {
        case 0x2ab434u: goto label_2ab434;
        case 0x2ab45cu: goto label_2ab45c;
        case 0x2ab46cu: goto label_2ab46c;
        case 0x2ab480u: goto label_2ab480;
        case 0x2ab4c0u: goto label_2ab4c0;
        case 0x2ab4e8u: goto label_2ab4e8;
        default: break;
    }

    ctx->pc = 0x2ab400u;

    // 0x2ab400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ab400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ab404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab410: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB410u;
    {
        const bool branch_taken_0x2ab410 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2AB414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB410u;
            // 0x2ab414: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab410) {
            ctx->pc = 0x2AB424u;
            goto label_2ab424;
        }
    }
    ctx->pc = 0x2AB418u;
    // 0x2ab418: 0x28810021  slti        $at, $a0, 0x21
    ctx->pc = 0x2ab418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2ab41c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB41Cu;
    {
        const bool branch_taken_0x2ab41c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB41Cu;
            // 0x2ab420: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab41c) {
            ctx->pc = 0x2AB42Cu;
            goto label_2ab42c;
        }
    }
    ctx->pc = 0x2AB424u;
label_2ab424:
    // 0x2ab424: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2AB424u;
    {
        const bool branch_taken_0x2ab424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB424u;
            // 0x2ab428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab424) {
            ctx->pc = 0x2AB4F8u;
            goto label_2ab4f8;
        }
    }
    ctx->pc = 0x2AB42Cu;
label_2ab42c:
    // 0x2ab42c: 0xc0aace8  jal         func_2AB3A0
    ctx->pc = 0x2AB42Cu;
    SET_GPR_U32(ctx, 31, 0x2AB434u);
    ctx->pc = 0x2AB430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB42Cu;
            // 0x2ab430: 0xa020c9a0  sb          $zero, -0x3660($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294953376), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3A0u;
    if (runtime->hasFunction(0x2AB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB434u; }
        if (ctx->pc != 0x2AB434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCModelName__Fi_0x2ab3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB434u; }
        if (ctx->pc != 0x2AB434u) { return; }
    }
    ctx->pc = 0x2AB434u;
label_2ab434:
    // 0x2ab434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab438: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2AB438u;
    {
        const bool branch_taken_0x2ab438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB438u;
            // 0x2ab43c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab438) {
            ctx->pc = 0x2AB4F8u;
            goto label_2ab4f8;
        }
    }
    ctx->pc = 0x2AB440u;
    // 0x2ab440: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AB440u;
    {
        const bool branch_taken_0x2ab440 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB440u;
            // 0x2ab444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab440) {
            ctx->pc = 0x2AB48Cu;
            goto label_2ab48c;
        }
    }
    ctx->pc = 0x2AB448u;
    // 0x2ab448: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ab448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ab44c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ab44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ab450: 0x2484c9a0  addiu       $a0, $a0, -0x3660
    ctx->pc = 0x2ab450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953376));
    // 0x2ab454: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AB454u;
    SET_GPR_U32(ctx, 31, 0x2AB45Cu);
    ctx->pc = 0x2AB458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB454u;
            // 0x2ab458: 0x24a5e830  addiu       $a1, $a1, -0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB45Cu; }
        if (ctx->pc != 0x2AB45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB45Cu; }
        if (ctx->pc != 0x2AB45Cu) { return; }
    }
    ctx->pc = 0x2AB45Cu;
label_2ab45c:
    // 0x2ab45c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ab45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ab460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ab460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab464: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2AB464u;
    SET_GPR_U32(ctx, 31, 0x2AB46Cu);
    ctx->pc = 0x2AB468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB464u;
            // 0x2ab468: 0x2484c9a0  addiu       $a0, $a0, -0x3660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB46Cu; }
        if (ctx->pc != 0x2AB46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB46Cu; }
        if (ctx->pc != 0x2AB46Cu) { return; }
    }
    ctx->pc = 0x2AB46Cu;
label_2ab46c:
    // 0x2ab46c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ab46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ab470: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ab470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ab474: 0x2484c9a0  addiu       $a0, $a0, -0x3660
    ctx->pc = 0x2ab474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953376));
    // 0x2ab478: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2AB478u;
    SET_GPR_U32(ctx, 31, 0x2AB480u);
    ctx->pc = 0x2AB47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB478u;
            // 0x2ab47c: 0x24a5e838  addiu       $a1, $a1, -0x17C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB480u; }
        if (ctx->pc != 0x2AB480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB480u; }
        if (ctx->pc != 0x2AB480u) { return; }
    }
    ctx->pc = 0x2AB480u;
label_2ab480:
    // 0x2ab480: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2ab480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2ab484: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2AB484u;
    {
        const bool branch_taken_0x2ab484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB484u;
            // 0x2ab488: 0x2442c9a0  addiu       $v0, $v0, -0x3660 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab484) {
            ctx->pc = 0x2AB4F8u;
            goto label_2ab4f8;
        }
    }
    ctx->pc = 0x2AB48Cu;
label_2ab48c:
    // 0x2ab48c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB48Cu;
    {
        const bool branch_taken_0x2ab48c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB48Cu;
            // 0x2ab490: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab48c) {
            ctx->pc = 0x2AB4A0u;
            goto label_2ab4a0;
        }
    }
    ctx->pc = 0x2AB494u;
    // 0x2ab494: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2ab494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2ab498: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2AB498u;
    {
        const bool branch_taken_0x2ab498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB498u;
            // 0x2ab49c: 0x24424550  addiu       $v0, $v0, 0x4550 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab498) {
            ctx->pc = 0x2AB4F8u;
            goto label_2ab4f8;
        }
    }
    ctx->pc = 0x2AB4A0u;
label_2ab4a0:
    // 0x2ab4a0: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AB4A0u;
    {
        const bool branch_taken_0x2ab4a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4A0u;
            // 0x2ab4a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4a0) {
            ctx->pc = 0x2AB4CCu;
            goto label_2ab4cc;
        }
    }
    ctx->pc = 0x2AB4A8u;
    // 0x2ab4a8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ab4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ab4ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ab4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ab4b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ab4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4b4: 0x2484c9a0  addiu       $a0, $a0, -0x3660
    ctx->pc = 0x2ab4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953376));
    // 0x2ab4b8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2AB4B8u;
    SET_GPR_U32(ctx, 31, 0x2AB4C0u);
    ctx->pc = 0x2AB4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4B8u;
            // 0x2ab4bc: 0x24a5e840  addiu       $a1, $a1, -0x17C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4C0u; }
        if (ctx->pc != 0x2AB4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4C0u; }
        if (ctx->pc != 0x2AB4C0u) { return; }
    }
    ctx->pc = 0x2AB4C0u;
label_2ab4c0:
    // 0x2ab4c0: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2ab4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2ab4c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AB4C4u;
    {
        const bool branch_taken_0x2ab4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4C4u;
            // 0x2ab4c8: 0x2442c9a0  addiu       $v0, $v0, -0x3660 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4c4) {
            ctx->pc = 0x2AB4F8u;
            goto label_2ab4f8;
        }
    }
    ctx->pc = 0x2AB4CCu;
label_2ab4cc:
    // 0x2ab4cc: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AB4CCu;
    {
        const bool branch_taken_0x2ab4cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4CCu;
            // 0x2ab4d0: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4cc) {
            ctx->pc = 0x2AB4F4u;
            goto label_2ab4f4;
        }
    }
    ctx->pc = 0x2AB4D4u;
    // 0x2ab4d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ab4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ab4d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ab4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4dc: 0x2484c9a0  addiu       $a0, $a0, -0x3660
    ctx->pc = 0x2ab4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953376));
    // 0x2ab4e0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2AB4E0u;
    SET_GPR_U32(ctx, 31, 0x2AB4E8u);
    ctx->pc = 0x2AB4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4E0u;
            // 0x2ab4e4: 0x24a5e860  addiu       $a1, $a1, -0x17A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4E8u; }
        if (ctx->pc != 0x2AB4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4E8u; }
        if (ctx->pc != 0x2AB4E8u) { return; }
    }
    ctx->pc = 0x2AB4E8u;
label_2ab4e8:
    // 0x2ab4e8: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2ab4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2ab4ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB4ECu;
    {
        const bool branch_taken_0x2ab4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4ECu;
            // 0x2ab4f0: 0x2442c9a0  addiu       $v0, $v0, -0x3660 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4ec) {
            ctx->pc = 0x2AB4F8u;
            goto label_2ab4f8;
        }
    }
    ctx->pc = 0x2AB4F4u;
label_2ab4f4:
    // 0x2ab4f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ab4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab4f8:
    // 0x2ab4f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ab4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab4fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab504: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB504u;
            // 0x2ab508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB50Cu;
}
