#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_RESERV_IMG__FP12RS_STACKDATAi
// Address: 0x1e3880 - 0x1e398c
void ps2__LOAD_RESERV_IMG__FP12RS_STACKDATAi_0x1e3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_RESERV_IMG__FP12RS_STACKDATAi_0x1e3880");
#endif

    switch (ctx->pc) {
        case 0x1e38a8u: goto label_1e38a8;
        case 0x1e38d0u: goto label_1e38d0;
        case 0x1e38e4u: goto label_1e38e4;
        case 0x1e3900u: goto label_1e3900;
        case 0x1e3930u: goto label_1e3930;
        case 0x1e3954u: goto label_1e3954;
        default: break;
    }

    ctx->pc = 0x1e3880u;

    // 0x1e3880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e3880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e3884: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3888: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e388c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3890: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3890u;
    {
        const bool branch_taken_0x1e3890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3890u;
            // 0x1e3894: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3890) {
            ctx->pc = 0x1E38A0u;
            goto label_1e38a0;
        }
    }
    ctx->pc = 0x1E3898u;
    // 0x1e3898: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E3898u;
    {
        const bool branch_taken_0x1e3898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3898u;
            // 0x1e389c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3898) {
            ctx->pc = 0x1E3978u;
            goto label_1e3978;
        }
    }
    ctx->pc = 0x1E38A0u;
label_1e38a0:
    // 0x1e38a0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E38A0u;
    SET_GPR_U32(ctx, 31, 0x1E38A8u);
    ctx->pc = 0x1E38A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38A0u;
            // 0x1e38a4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38A8u; }
        if (ctx->pc != 0x1E38A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38A8u; }
        if (ctx->pc != 0x1E38A8u) { return; }
    }
    ctx->pc = 0x1E38A8u;
label_1e38a8:
    // 0x1e38a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e38a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e38ac: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E38ACu;
    {
        const bool branch_taken_0x1e38ac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1E38B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38ACu;
            // 0x1e38b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38ac) {
            ctx->pc = 0x1E38C0u;
            goto label_1e38c0;
        }
    }
    ctx->pc = 0x1E38B4u;
    // 0x1e38b4: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x1e38b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e38b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E38B8u;
    {
        const bool branch_taken_0x1e38b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E38BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38B8u;
            // 0x1e38bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38b8) {
            ctx->pc = 0x1E38C8u;
            goto label_1e38c8;
        }
    }
    ctx->pc = 0x1E38C0u;
label_1e38c0:
    // 0x1e38c0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1E38C0u;
    {
        const bool branch_taken_0x1e38c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38C0u;
            // 0x1e38c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38c0) {
            ctx->pc = 0x1E397Cu;
            goto label_1e397c;
        }
    }
    ctx->pc = 0x1E38C8u;
label_1e38c8:
    // 0x1e38c8: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E38C8u;
    SET_GPR_U32(ctx, 31, 0x1E38D0u);
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38D0u; }
        if (ctx->pc != 0x1E38D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38D0u; }
        if (ctx->pc != 0x1E38D0u) { return; }
    }
    ctx->pc = 0x1E38D0u;
label_1e38d0:
    // 0x1e38d0: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1e38d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
    // 0x1e38d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e38d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e38d8: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x1e38d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1e38dc: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1E38DCu;
    SET_GPR_U32(ctx, 31, 0x1E38E4u);
    ctx->pc = 0x1E38E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38DCu;
            // 0x1e38e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38E4u; }
        if (ctx->pc != 0x1E38E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38E4u; }
        if (ctx->pc != 0x1E38E4u) { return; }
    }
    ctx->pc = 0x1E38E4u;
label_1e38e4:
    // 0x1e38e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E38E4u;
    {
        const bool branch_taken_0x1e38e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E38E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38E4u;
            // 0x1e38e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38e4) {
            ctx->pc = 0x1E38F4u;
            goto label_1e38f4;
        }
    }
    ctx->pc = 0x1E38ECu;
    // 0x1e38ec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E38ECu;
    {
        const bool branch_taken_0x1e38ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e38ec) {
            ctx->pc = 0x1E3978u;
            goto label_1e3978;
        }
    }
    ctx->pc = 0x1E38F4u;
label_1e38f4:
    // 0x1e38f4: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e38f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e38f8: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x1E38F8u;
    SET_GPR_U32(ctx, 31, 0x1E3900u);
    ctx->pc = 0x1E38FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38F8u;
            // 0x1e38fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3900u; }
        if (ctx->pc != 0x1E3900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3900u; }
        if (ctx->pc != 0x1E3900u) { return; }
    }
    ctx->pc = 0x1E3900u;
label_1e3900:
    // 0x1e3900: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3900u;
    {
        const bool branch_taken_0x1e3900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3900) {
            ctx->pc = 0x1E3910u;
            goto label_1e3910;
        }
    }
    ctx->pc = 0x1E3908u;
    // 0x1e3908: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E3908u;
    {
        const bool branch_taken_0x1e3908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3908u;
            // 0x1e390c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3908) {
            ctx->pc = 0x1E3978u;
            goto label_1e3978;
        }
    }
    ctx->pc = 0x1E3910u;
label_1e3910:
    // 0x1e3910: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e3910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1e3914: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3914u;
    {
        const bool branch_taken_0x1e3914 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E3918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3914u;
            // 0x1e3918: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3914) {
            ctx->pc = 0x1E3924u;
            goto label_1e3924;
        }
    }
    ctx->pc = 0x1E391Cu;
    // 0x1e391c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1e391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1e3920: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1e3920u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1e3924:
    // 0x1e3924: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1e3924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e3928: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1E3928u;
    SET_GPR_U32(ctx, 31, 0x1E3930u);
    ctx->pc = 0x1E392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3928u;
            // 0x1e392c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3930u; }
        if (ctx->pc != 0x1E3930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3930u; }
        if (ctx->pc != 0x1E3930u) { return; }
    }
    ctx->pc = 0x1E3930u;
label_1e3930:
    // 0x1e3930: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e3930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3934: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3934u;
    {
        const bool branch_taken_0x1e3934 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3934u;
            // 0x1e3938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3934) {
            ctx->pc = 0x1E3944u;
            goto label_1e3944;
        }
    }
    ctx->pc = 0x1E393Cu;
    // 0x1e393c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E393Cu;
    {
        const bool branch_taken_0x1e393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e393c) {
            ctx->pc = 0x1E3978u;
            goto label_1e3978;
        }
    }
    ctx->pc = 0x1E3944u;
label_1e3944:
    // 0x1e3944: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1e3944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
    // 0x1e3948: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1e3948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1e394c: 0xc049c18  jal         func_127060
    ctx->pc = 0x1E394Cu;
    SET_GPR_U32(ctx, 31, 0x1E3954u);
    ctx->pc = 0x1E3950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E394Cu;
            // 0x1e3950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3954u; }
        if (ctx->pc != 0x1E3954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3954u; }
        if (ctx->pc != 0x1E3954u) { return; }
    }
    ctx->pc = 0x1E3954u;
label_1e3954:
    // 0x1e3954: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e3954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3958: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x1e3958u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e395c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3960: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1e3960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e3964: 0xac7112c0  sw          $s1, 0x12C0($v1)
    ctx->pc = 0x1e3964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4800), GPR_U32(ctx, 17));
    // 0x1e3968: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e3968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e396c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1e3970: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1e3970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e3974: 0xac6412c8  sw          $a0, 0x12C8($v1)
    ctx->pc = 0x1e3974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4808), GPR_U32(ctx, 4));
label_1e3978:
    // 0x1e3978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e397c:
    // 0x1e397c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e397cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3984: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3984u;
            // 0x1e3988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E398Cu;
}
