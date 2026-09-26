#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveAlbum__18CMemoryCardManagerFv
// Address: 0x2f3690 - 0x2f3998
void SaveAlbum__18CMemoryCardManagerFv_0x2f3690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveAlbum__18CMemoryCardManagerFv_0x2f3690");
#endif

    switch (ctx->pc) {
        case 0x2f3728u: goto label_2f3728;
        case 0x2f3738u: goto label_2f3738;
        case 0x2f3744u: goto label_2f3744;
        case 0x2f3770u: goto label_2f3770;
        case 0x2f3794u: goto label_2f3794;
        case 0x2f37b4u: goto label_2f37b4;
        case 0x2f37c8u: goto label_2f37c8;
        case 0x2f37e8u: goto label_2f37e8;
        case 0x2f3824u: goto label_2f3824;
        case 0x2f3840u: goto label_2f3840;
        case 0x2f3870u: goto label_2f3870;
        case 0x2f38b0u: goto label_2f38b0;
        case 0x2f38f0u: goto label_2f38f0;
        case 0x2f3930u: goto label_2f3930;
        case 0x2f3944u: goto label_2f3944;
        case 0x2f3960u: goto label_2f3960;
        default: break;
    }

    ctx->pc = 0x2f3690u;

    // 0x2f3690: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f3690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2f3694: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f3694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f3698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f3698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f369c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f369cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f36a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f36a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f36a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f36a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f36a8: 0x8c8304c8  lw          $v1, 0x4C8($a0)
    ctx->pc = 0x2f36a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x2f36ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F36ACu;
    {
        const bool branch_taken_0x2f36ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F36B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F36ACu;
            // 0x2f36b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36ac) {
            ctx->pc = 0x2F36C0u;
            goto label_2f36c0;
        }
    }
    ctx->pc = 0x2F36B4u;
    // 0x2f36b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f36b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F36B8u;
    {
        const bool branch_taken_0x2f36b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F36BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F36B8u;
            // 0x2f36bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36b8) {
            ctx->pc = 0x2F36CCu;
            goto label_2f36cc;
        }
    }
    ctx->pc = 0x2F36C0u;
label_2f36c0:
    // 0x2f36c0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2f36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f36c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2f36c8: 0x24500d5c  addiu       $s0, $v0, 0xD5C
    ctx->pc = 0x2f36c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2f36cc:
    // 0x2f36cc: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x2f36ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f36d0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f36d4: 0x267104d0  addiu       $s1, $s3, 0x4D0
    ctx->pc = 0x2f36d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1232));
    // 0x2f36d8: 0x106200a7  beq         $v1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2F36D8u;
    {
        const bool branch_taken_0x2f36d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F36DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F36D8u;
            // 0x2f36dc: 0x267210e0  addiu       $s2, $s3, 0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36d8) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F36E0u;
    // 0x2f36e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f36e4: 0x106200a2  beq         $v1, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2F36E4u;
    {
        const bool branch_taken_0x2f36e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F36E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F36E4u;
            // 0x2f36e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36e4) {
            ctx->pc = 0x2F3970u;
            goto label_2f3970;
        }
    }
    ctx->pc = 0x2F36ECu;
    // 0x2f36ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f36f0: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2F36F0u;
    {
        const bool branch_taken_0x2f36f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F36F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F36F0u;
            // 0x2f36f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36f0) {
            ctx->pc = 0x2F3938u;
            goto label_2f3938;
        }
    }
    ctx->pc = 0x2F36F8u;
    // 0x2f36f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f36fc: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2F36FCu;
    {
        const bool branch_taken_0x2f36fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F36FCu;
            // 0x2f3700: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36fc) {
            ctx->pc = 0x2F3864u;
            goto label_2f3864;
        }
    }
    ctx->pc = 0x2F3704u;
    // 0x2f3704: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3708: 0x10640035  beq         $v1, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2F3708u;
    {
        const bool branch_taken_0x2f3708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3708u;
            // 0x2f370c: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3708) {
            ctx->pc = 0x2F37E0u;
            goto label_2f37e0;
        }
    }
    ctx->pc = 0x2F3710u;
    // 0x2f3710: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3710u;
    {
        const bool branch_taken_0x2f3710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3710u;
            // 0x2f3714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3710) {
            ctx->pc = 0x2F3720u;
            goto label_2f3720;
        }
    }
    ctx->pc = 0x2F3718u;
    // 0x2f3718: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2F3718u;
    {
        const bool branch_taken_0x2f3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3718u;
            // 0x2f371c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3718) {
            ctx->pc = 0x2F397Cu;
            goto label_2f397c;
        }
    }
    ctx->pc = 0x2F3720u;
label_2f3720:
    // 0x2f3720: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3720u;
    SET_GPR_U32(ctx, 31, 0x2F3728u);
    ctx->pc = 0x2F3724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3720u;
            // 0x2f3724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3728u; }
        if (ctx->pc != 0x2F3728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3728u; }
        if (ctx->pc != 0x2F3728u) { return; }
    }
    ctx->pc = 0x2F3728u;
label_2f3728:
    // 0x2f3728: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2F3728u;
    {
        const bool branch_taken_0x2f3728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3728u;
            // 0x2f372c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3728) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F3730u;
    // 0x2f3730: 0xc0bc64c  jal         func_2F1930
    ctx->pc = 0x2F3730u;
    SET_GPR_U32(ctx, 31, 0x2F3738u);
    ctx->pc = 0x2F1930u;
    if (runtime->hasFunction(0x2F1930u)) {
        auto targetFn = runtime->lookupFunction(0x2F1930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3738u; }
        if (ctx->pc != 0x2F3738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitError__18CMemoryCardManagerFv_0x2f1930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3738u; }
        if (ctx->pc != 0x2F3738u) { return; }
    }
    ctx->pc = 0x2F3738u;
label_2f3738:
    // 0x2f3738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f3738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f373c: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2F373Cu;
    SET_GPR_U32(ctx, 31, 0x2F3744u);
    ctx->pc = 0x2F3740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F373Cu;
            // 0x2f3740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3744u; }
        if (ctx->pc != 0x2F3744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3744u; }
        if (ctx->pc != 0x2F3744u) { return; }
    }
    ctx->pc = 0x2F3744u;
label_2f3744:
    // 0x2f3744: 0xae620918  sw          $v0, 0x918($s3)
    ctx->pc = 0x2f3744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2328), GPR_U32(ctx, 2));
    // 0x2f3748: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f3748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f374c: 0xae60091c  sw          $zero, 0x91C($s3)
    ctx->pc = 0x2f374cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2332), GPR_U32(ctx, 0));
    // 0x2f3750: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f3750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f3754: 0xae600910  sw          $zero, 0x910($s3)
    ctx->pc = 0x2f3754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2320), GPR_U32(ctx, 0));
    // 0x2f3758: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2f3758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2f375c: 0xae600914  sw          $zero, 0x914($s3)
    ctx->pc = 0x2f375cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2324), GPR_U32(ctx, 0));
    // 0x2f3760: 0x240604b0  addiu       $a2, $zero, 0x4B0
    ctx->pc = 0x2f3760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x2f3764: 0x8e7008f4  lw          $s0, 0x8F4($s3)
    ctx->pc = 0x2f3764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2292)));
    // 0x2f3768: 0xc0bc550  jal         func_2F1540
    ctx->pc = 0x2F3768u;
    SET_GPR_U32(ctx, 31, 0x2F3770u);
    ctx->pc = 0x2F376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3768u;
            // 0x2f376c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1540u;
    if (runtime->hasFunction(0x2F1540u)) {
        auto targetFn = runtime->lookupFunction(0x2F1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3770u; }
        if (ctx->pc != 0x2F3770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeCheckDigit__FiPci_0x2f1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3770u; }
        if (ctx->pc != 0x2F3770u) { return; }
    }
    ctx->pc = 0x2F3770u;
label_2f3770:
    // 0x2f3770: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f3770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f3774: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f3774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3778: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f3778u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f377c: 0x240604b0  addiu       $a2, $zero, 0x4B0
    ctx->pc = 0x2f377cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x2f3780: 0xac2244b0  sw          $v0, 0x44B0($at)
    ctx->pc = 0x2f3780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17584), GPR_U32(ctx, 2));
    // 0x2f3784: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f3784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f3788: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2f3788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x2f378c: 0xc0bc550  jal         func_2F1540
    ctx->pc = 0x2F378Cu;
    SET_GPR_U32(ctx, 31, 0x2F3794u);
    ctx->pc = 0x2F3790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F378Cu;
            // 0x2f3790: 0x2012821  addu        $a1, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1540u;
    if (runtime->hasFunction(0x2F1540u)) {
        auto targetFn = runtime->lookupFunction(0x2F1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3794u; }
        if (ctx->pc != 0x2F3794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeCheckDigit__FiPci_0x2f1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3794u; }
        if (ctx->pc != 0x2F3794u) { return; }
    }
    ctx->pc = 0x2F3794u;
label_2f3794:
    // 0x2f3794: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f3794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f3798: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f3798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f379c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2f379cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2f37a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f37a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f37a4: 0xac2244b4  sw          $v0, 0x44B4($at)
    ctx->pc = 0x2f37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17588), GPR_U32(ctx, 2));
    // 0x2f37a8: 0x8e6208f4  lw          $v0, 0x8F4($s3)
    ctx->pc = 0x2f37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2292)));
    // 0x2f37ac: 0xc0bc53c  jal         func_2F14F0
    ctx->pc = 0x2F37ACu;
    SET_GPR_U32(ctx, 31, 0x2F37B4u);
    ctx->pc = 0x2F37B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37ACu;
            // 0x2f37b0: 0xae6204e4  sw          $v0, 0x4E4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F14F0u;
    if (runtime->hasFunction(0x2F14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F37B4u; }
        if (ctx->pc != 0x2F37B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMemoryCardAlbumName__FPci_0x2f14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F37B4u; }
        if (ctx->pc != 0x2F37B4u) { return; }
    }
    ctx->pc = 0x2F37B4u;
label_2f37b4:
    // 0x2f37b4: 0x8e6404c8  lw          $a0, 0x4C8($s3)
    ctx->pc = 0x2f37b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1224)));
    // 0x2f37b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f37b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f37bc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f37bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f37c0: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F37C0u;
    SET_GPR_U32(ctx, 31, 0x2F37C8u);
    ctx->pc = 0x2F37C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37C0u;
            // 0x2f37c4: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F37C8u; }
        if (ctx->pc != 0x2F37C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F37C8u; }
        if (ctx->pc != 0x2F37C8u) { return; }
    }
    ctx->pc = 0x2F37C8u;
label_2f37c8:
    // 0x2f37c8: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x2f37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f37cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f37d0: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2F37D0u;
    {
        const bool branch_taken_0x2f37d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F37D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37D0u;
            // 0x2f37d4: 0xae630058  sw          $v1, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37d0) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F37D8u;
    // 0x2f37d8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2F37D8u;
    {
        const bool branch_taken_0x2f37d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F37DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37D8u;
            // 0x2f37dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37d8) {
            ctx->pc = 0x2F397Cu;
            goto label_2f397c;
        }
    }
    ctx->pc = 0x2F37E0u;
label_2f37e0:
    // 0x2f37e0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F37E0u;
    SET_GPR_U32(ctx, 31, 0x2F37E8u);
    ctx->pc = 0x2F37E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37E0u;
            // 0x2f37e4: 0x27a600dc  addiu       $a2, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F37E8u; }
        if (ctx->pc != 0x2F37E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F37E8u; }
        if (ctx->pc != 0x2F37E8u) { return; }
    }
    ctx->pc = 0x2F37E8u;
label_2f37e8:
    // 0x2f37e8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2F37E8u;
    {
        const bool branch_taken_0x2f37e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f37e8) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F37F0u;
    // 0x2f37f0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2f37f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2f37f4: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F37F4u;
    {
        const bool branch_taken_0x2f37f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F37F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37F4u;
            // 0x2f37f8: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37f4) {
            ctx->pc = 0x2F382Cu;
            goto label_2f382c;
        }
    }
    ctx->pc = 0x2F37FCu;
    // 0x2f37fc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F37FCu;
    {
        const bool branch_taken_0x2f37fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37FCu;
            // 0x2f3800: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37fc) {
            ctx->pc = 0x2F380Cu;
            goto label_2f380c;
        }
    }
    ctx->pc = 0x2F3804u;
    // 0x2f3804: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3804u;
    {
        const bool branch_taken_0x2f3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3804u;
            // 0x2f3808: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3804) {
            ctx->pc = 0x2F3818u;
            goto label_2f3818;
        }
    }
    ctx->pc = 0x2F380Cu;
label_2f380c:
    // 0x2f380c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F380Cu;
    {
        const bool branch_taken_0x2f380c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f380c) {
            ctx->pc = 0x2F3818u;
            goto label_2f3818;
        }
    }
    ctx->pc = 0x2F3814u;
    // 0x2f3814: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f3814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2f3818:
    // 0x2f3818: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x2f3818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2f381c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F381Cu;
    SET_GPR_U32(ctx, 31, 0x2F3824u);
    ctx->pc = 0x2F3820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F381Cu;
            // 0x2f3820: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3824u; }
        if (ctx->pc != 0x2F3824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3824u; }
        if (ctx->pc != 0x2F3824u) { return; }
    }
    ctx->pc = 0x2F3824u;
label_2f3824:
    // 0x2f3824: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2F3824u;
    {
        const bool branch_taken_0x2f3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3824u;
            // 0x2f3828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3824) {
            ctx->pc = 0x2F397Cu;
            goto label_2f397c;
        }
    }
    ctx->pc = 0x2F382Cu;
label_2f382c:
    // 0x2f382c: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x2f382cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x2f3830: 0x8e6504e4  lw          $a1, 0x4E4($s3)
    ctx->pc = 0x2f3830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1252)));
    // 0x2f3834: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x2f3834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2f3838: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F3838u;
    SET_GPR_U32(ctx, 31, 0x2F3840u);
    ctx->pc = 0x2F383Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3838u;
            // 0x2f383c: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3840u; }
        if (ctx->pc != 0x2F3840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3840u; }
        if (ctx->pc != 0x2F3840u) { return; }
    }
    ctx->pc = 0x2F3840u;
label_2f3840:
    // 0x2f3840: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3840u;
    {
        const bool branch_taken_0x2f3840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3840u;
            // 0x2f3844: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3840) {
            ctx->pc = 0x2F3858u;
            goto label_2f3858;
        }
    }
    ctx->pc = 0x2F3848u;
    // 0x2f3848: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f3848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f384c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3850: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2F3850u;
    {
        const bool branch_taken_0x2f3850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3850u;
            // 0x2f3854: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3850) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F3858u;
label_2f3858:
    // 0x2f3858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f385c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2F385Cu;
    {
        const bool branch_taken_0x2f385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F385Cu;
            // 0x2f3860: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f385c) {
            ctx->pc = 0x2F397Cu;
            goto label_2f397c;
        }
    }
    ctx->pc = 0x2F3864u;
label_2f3864:
    // 0x2f3864: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x2f3864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2f3868: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3868u;
    SET_GPR_U32(ctx, 31, 0x2F3870u);
    ctx->pc = 0x2F386Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3868u;
            // 0x2f386c: 0x2666091c  addiu       $a2, $s3, 0x91C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3870u; }
        if (ctx->pc != 0x2F3870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3870u; }
        if (ctx->pc != 0x2F3870u) { return; }
    }
    ctx->pc = 0x2F3870u;
label_2f3870:
    // 0x2f3870: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2F3870u;
    {
        const bool branch_taken_0x2f3870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3870) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F3878u;
    // 0x2f3878: 0x8e63091c  lw          $v1, 0x91C($s3)
    ctx->pc = 0x2f3878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x2f387c: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F387Cu;
    {
        const bool branch_taken_0x2f387c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F3880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F387Cu;
            // 0x2f3880: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f387c) {
            ctx->pc = 0x2F38B8u;
            goto label_2f38b8;
        }
    }
    ctx->pc = 0x2F3884u;
    // 0x2f3884: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3884u;
    {
        const bool branch_taken_0x2f3884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3884) {
            ctx->pc = 0x2F3890u;
            goto label_2f3890;
        }
    }
    ctx->pc = 0x2F388Cu;
    // 0x2f388c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f388cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f3890:
    // 0x2f3890: 0x8e63091c  lw          $v1, 0x91C($s3)
    ctx->pc = 0x2f3890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x2f3894: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2f3894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f3898: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3898u;
    {
        const bool branch_taken_0x2f3898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3898) {
            ctx->pc = 0x2F38A4u;
            goto label_2f38a4;
        }
    }
    ctx->pc = 0x2F38A0u;
    // 0x2f38a0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2f38a4:
    // 0x2f38a4: 0x8e65091c  lw          $a1, 0x91C($s3)
    ctx->pc = 0x2f38a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x2f38a8: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F38A8u;
    SET_GPR_U32(ctx, 31, 0x2F38B0u);
    ctx->pc = 0x2F38ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F38A8u;
            // 0x2f38ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F38B0u; }
        if (ctx->pc != 0x2F38B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F38B0u; }
        if (ctx->pc != 0x2F38B0u) { return; }
    }
    ctx->pc = 0x2F38B0u;
label_2f38b0:
    // 0x2f38b0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2F38B0u;
    {
        const bool branch_taken_0x2f38b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F38B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F38B0u;
            // 0x2f38b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38b0) {
            ctx->pc = 0x2F397Cu;
            goto label_2f397c;
        }
    }
    ctx->pc = 0x2F38B8u;
label_2f38b8:
    // 0x2f38b8: 0x8e620910  lw          $v0, 0x910($s3)
    ctx->pc = 0x2f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2320)));
    // 0x2f38bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f38c0: 0xae620910  sw          $v0, 0x910($s3)
    ctx->pc = 0x2f38c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2320), GPR_U32(ctx, 2));
    // 0x2f38c4: 0x8e630914  lw          $v1, 0x914($s3)
    ctx->pc = 0x2f38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2324)));
    // 0x2f38c8: 0x8e62091c  lw          $v0, 0x91C($s3)
    ctx->pc = 0x2f38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x2f38cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f38d0: 0xae620914  sw          $v0, 0x914($s3)
    ctx->pc = 0x2f38d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2324), GPR_U32(ctx, 2));
    // 0x2f38d4: 0x8e630910  lw          $v1, 0x910($s3)
    ctx->pc = 0x2f38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2320)));
    // 0x2f38d8: 0x8e640918  lw          $a0, 0x918($s3)
    ctx->pc = 0x2f38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x2f38dc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2f38dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f38e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F38E0u;
    {
        const bool branch_taken_0x2f38e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F38E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F38E0u;
            // 0x2f38e4: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38e0) {
            ctx->pc = 0x2F3910u;
            goto label_2f3910;
        }
    }
    ctx->pc = 0x2F38E8u;
    // 0x2f38e8: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F38E8u;
    SET_GPR_U32(ctx, 31, 0x2F38F0u);
    ctx->pc = 0x2F38ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F38E8u;
            // 0x2f38ec: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F38F0u; }
        if (ctx->pc != 0x2F38F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F38F0u; }
        if (ctx->pc != 0x2F38F0u) { return; }
    }
    ctx->pc = 0x2F38F0u;
label_2f38f0:
    // 0x2f38f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F38F0u;
    {
        const bool branch_taken_0x2f38f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F38F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F38F0u;
            // 0x2f38f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38f0) {
            ctx->pc = 0x2F3908u;
            goto label_2f3908;
        }
    }
    ctx->pc = 0x2F38F8u;
    // 0x2f38f8: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f38fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3900: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F3900u;
    {
        const bool branch_taken_0x2f3900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3900u;
            // 0x2f3904: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3900) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F3908u;
label_2f3908:
    // 0x2f3908: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F3908u;
    {
        const bool branch_taken_0x2f3908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3908u;
            // 0x2f390c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3908) {
            ctx->pc = 0x2F3980u;
            goto label_2f3980;
        }
    }
    ctx->pc = 0x2F3910u;
label_2f3910:
    // 0x2f3910: 0x28410c00  slti        $at, $v0, 0xC00
    ctx->pc = 0x2f3910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x2f3914: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3914u;
    {
        const bool branch_taken_0x2f3914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3914u;
            // 0x2f3918: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3914) {
            ctx->pc = 0x2F3920u;
            goto label_2f3920;
        }
    }
    ctx->pc = 0x2F391Cu;
    // 0x2f391c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f391cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3920:
    // 0x2f3920: 0x8e6204e4  lw          $v0, 0x4E4($s3)
    ctx->pc = 0x2f3920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1252)));
    // 0x2f3924: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x2f3924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2f3928: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F3928u;
    SET_GPR_U32(ctx, 31, 0x2F3930u);
    ctx->pc = 0x2F392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3928u;
            // 0x2f392c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3930u; }
        if (ctx->pc != 0x2F3930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3930u; }
        if (ctx->pc != 0x2F3930u) { return; }
    }
    ctx->pc = 0x2F3930u;
label_2f3930:
    // 0x2f3930: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3930u;
    {
        const bool branch_taken_0x2f3930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3930) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F3938u;
label_2f3938:
    // 0x2f3938: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x2f3938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2f393c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F393Cu;
    SET_GPR_U32(ctx, 31, 0x2F3944u);
    ctx->pc = 0x2F3940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F393Cu;
            // 0x2f3940: 0x27a600dc  addiu       $a2, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3944u; }
        if (ctx->pc != 0x2F3944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3944u; }
        if (ctx->pc != 0x2F3944u) { return; }
    }
    ctx->pc = 0x2F3944u;
label_2f3944:
    // 0x2f3944: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3944u;
    {
        const bool branch_taken_0x2f3944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3944) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F394Cu;
    // 0x2f394c: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x2f394cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2f3950: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3950u;
    {
        const bool branch_taken_0x2f3950 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F3954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3950u;
            // 0x2f3954: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3950) {
            ctx->pc = 0x2F3968u;
            goto label_2f3968;
        }
    }
    ctx->pc = 0x2F3958u;
    // 0x2f3958: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F3958u;
    SET_GPR_U32(ctx, 31, 0x2F3960u);
    ctx->pc = 0x2F395Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3958u;
            // 0x2f395c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3960u; }
        if (ctx->pc != 0x2F3960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3960u; }
        if (ctx->pc != 0x2F3960u) { return; }
    }
    ctx->pc = 0x2F3960u;
label_2f3960:
    // 0x2f3960: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3960u;
    {
        const bool branch_taken_0x2f3960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3960u;
            // 0x2f3964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3960) {
            ctx->pc = 0x2F397Cu;
            goto label_2f397c;
        }
    }
    ctx->pc = 0x2F3968u;
label_2f3968:
    // 0x2f3968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3968u;
    {
        const bool branch_taken_0x2f3968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F396Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3968u;
            // 0x2f396c: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3968) {
            ctx->pc = 0x2F3978u;
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F3970u;
label_2f3970:
    // 0x2f3970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3970u;
    {
        const bool branch_taken_0x2f3970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3970) {
            ctx->pc = 0x2F397Cu;
            goto label_2f397c;
        }
    }
    ctx->pc = 0x2F3978u;
label_2f3978:
    // 0x2f3978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f397c:
    // 0x2f397c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f397cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f3980:
    // 0x2f3980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f3980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f3984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f398c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f398cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3990: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3990u;
            // 0x2f3994: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3998u;
}
