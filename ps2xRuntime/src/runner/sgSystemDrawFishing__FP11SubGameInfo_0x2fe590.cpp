#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgSystemDrawFishing__FP11SubGameInfo
// Address: 0x2fe590 - 0x2fee8c
void sgSystemDrawFishing__FP11SubGameInfo_0x2fe590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgSystemDrawFishing__FP11SubGameInfo_0x2fe590");
#endif

    switch (ctx->pc) {
        case 0x2fe5e0u: goto label_2fe5e0;
        case 0x2fe5e8u: goto label_2fe5e8;
        case 0x2fe604u: goto label_2fe604;
        case 0x2fe620u: goto label_2fe620;
        case 0x2fe62cu: goto label_2fe62c;
        case 0x2fe63cu: goto label_2fe63c;
        case 0x2fe648u: goto label_2fe648;
        case 0x2fe654u: goto label_2fe654;
        case 0x2fe660u: goto label_2fe660;
        case 0x2fe66cu: goto label_2fe66c;
        case 0x2fe678u: goto label_2fe678;
        case 0x2fe684u: goto label_2fe684;
        case 0x2fe6a0u: goto label_2fe6a0;
        case 0x2fe6b8u: goto label_2fe6b8;
        case 0x2fe6ccu: goto label_2fe6cc;
        case 0x2fe6e0u: goto label_2fe6e0;
        case 0x2fe6e8u: goto label_2fe6e8;
        case 0x2fe6f0u: goto label_2fe6f0;
        case 0x2fe748u: goto label_2fe748;
        case 0x2fe758u: goto label_2fe758;
        case 0x2fe770u: goto label_2fe770;
        case 0x2fe7a0u: goto label_2fe7a0;
        case 0x2fe7b4u: goto label_2fe7b4;
        case 0x2fe7bcu: goto label_2fe7bc;
        case 0x2fe7c8u: goto label_2fe7c8;
        case 0x2fe7d4u: goto label_2fe7d4;
        case 0x2fe7e0u: goto label_2fe7e0;
        case 0x2fe7f8u: goto label_2fe7f8;
        case 0x2fe804u: goto label_2fe804;
        case 0x2fe814u: goto label_2fe814;
        case 0x2fe828u: goto label_2fe828;
        case 0x2fe838u: goto label_2fe838;
        case 0x2fe84cu: goto label_2fe84c;
        case 0x2fe854u: goto label_2fe854;
        case 0x2fe860u: goto label_2fe860;
        case 0x2fe878u: goto label_2fe878;
        case 0x2fe884u: goto label_2fe884;
        case 0x2fe8a4u: goto label_2fe8a4;
        case 0x2fe910u: goto label_2fe910;
        case 0x2fe924u: goto label_2fe924;
        case 0x2fe938u: goto label_2fe938;
        case 0x2fe940u: goto label_2fe940;
        case 0x2fe94cu: goto label_2fe94c;
        case 0x2fe958u: goto label_2fe958;
        case 0x2fe964u: goto label_2fe964;
        case 0x2fe97cu: goto label_2fe97c;
        case 0x2fe990u: goto label_2fe990;
        case 0x2fe9a4u: goto label_2fe9a4;
        case 0x2fe9acu: goto label_2fe9ac;
        case 0x2fe9f8u: goto label_2fe9f8;
        case 0x2fea04u: goto label_2fea04;
        case 0x2fea10u: goto label_2fea10;
        case 0x2fea18u: goto label_2fea18;
        case 0x2fea28u: goto label_2fea28;
        case 0x2fea38u: goto label_2fea38;
        case 0x2fea50u: goto label_2fea50;
        case 0x2fea74u: goto label_2fea74;
        case 0x2fea7cu: goto label_2fea7c;
        case 0x2fea88u: goto label_2fea88;
        case 0x2fea94u: goto label_2fea94;
        case 0x2feaacu: goto label_2feaac;
        case 0x2fead0u: goto label_2fead0;
        case 0x2fead8u: goto label_2fead8;
        case 0x2feae8u: goto label_2feae8;
        case 0x2feaf8u: goto label_2feaf8;
        case 0x2feb10u: goto label_2feb10;
        case 0x2feb34u: goto label_2feb34;
        case 0x2feb3cu: goto label_2feb3c;
        case 0x2feb48u: goto label_2feb48;
        case 0x2feb54u: goto label_2feb54;
        case 0x2feb6cu: goto label_2feb6c;
        case 0x2feb90u: goto label_2feb90;
        case 0x2feb98u: goto label_2feb98;
        case 0x2feba4u: goto label_2feba4;
        case 0x2febbcu: goto label_2febbc;
        case 0x2febd0u: goto label_2febd0;
        case 0x2febe8u: goto label_2febe8;
        case 0x2febfcu: goto label_2febfc;
        case 0x2fec14u: goto label_2fec14;
        case 0x2fec28u: goto label_2fec28;
        case 0x2fec40u: goto label_2fec40;
        case 0x2fec54u: goto label_2fec54;
        case 0x2fec5cu: goto label_2fec5c;
        case 0x2fec68u: goto label_2fec68;
        case 0x2fec74u: goto label_2fec74;
        case 0x2fec80u: goto label_2fec80;
        case 0x2fec8cu: goto label_2fec8c;
        case 0x2feca4u: goto label_2feca4;
        case 0x2fecb4u: goto label_2fecb4;
        case 0x2fecc8u: goto label_2fecc8;
        case 0x2fecd8u: goto label_2fecd8;
        case 0x2fececu: goto label_2fecec;
        case 0x2fecfcu: goto label_2fecfc;
        case 0x2fed10u: goto label_2fed10;
        case 0x2fed20u: goto label_2fed20;
        case 0x2fed34u: goto label_2fed34;
        case 0x2fed3cu: goto label_2fed3c;
        case 0x2fed48u: goto label_2fed48;
        case 0x2fed5cu: goto label_2fed5c;
        case 0x2fed74u: goto label_2fed74;
        case 0x2fed80u: goto label_2fed80;
        case 0x2fed90u: goto label_2fed90;
        case 0x2feda4u: goto label_2feda4;
        case 0x2fedb4u: goto label_2fedb4;
        case 0x2fedc8u: goto label_2fedc8;
        case 0x2fedd0u: goto label_2fedd0;
        case 0x2fede8u: goto label_2fede8;
        case 0x2fee00u: goto label_2fee00;
        case 0x2fee0cu: goto label_2fee0c;
        case 0x2fee1cu: goto label_2fee1c;
        case 0x2fee30u: goto label_2fee30;
        case 0x2fee40u: goto label_2fee40;
        case 0x2fee54u: goto label_2fee54;
        case 0x2fee5cu: goto label_2fee5c;
        default: break;
    }

    ctx->pc = 0x2fe590u;

    // 0x2fe590: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2fe590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2fe594: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2fe594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2fe598: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2fe598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2fe59c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2fe59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2fe5a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2fe5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2fe5a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fe5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2fe5a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fe5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fe5ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fe5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fe5b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2fe5b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fe5b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2fe5b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fe5b8: 0x8f829fe8  lw          $v0, -0x6018($gp)
    ctx->pc = 0x2fe5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942696)));
    // 0x2fe5bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE5BCu;
    {
        const bool branch_taken_0x2fe5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5BCu;
            // 0x2fe5c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe5bc) {
            ctx->pc = 0x2FE5CCu;
            goto label_2fe5cc;
        }
    }
    ctx->pc = 0x2FE5C4u;
    // 0x2fe5c4: 0x10000226  b           . + 4 + (0x226 << 2)
    ctx->pc = 0x2FE5C4u;
    {
        const bool branch_taken_0x2fe5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5C4u;
            // 0x2fe5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe5c4) {
            ctx->pc = 0x2FEE60u;
            goto label_2fee60;
        }
    }
    ctx->pc = 0x2FE5CCu;
label_2fe5cc:
    // 0x2fe5cc: 0x8f859f98  lw          $a1, -0x6068($gp)
    ctx->pc = 0x2fe5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
    // 0x2fe5d0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fe5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2fe5d4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2fe5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2fe5d8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2FE5D8u;
    SET_GPR_U32(ctx, 31, 0x2FE5E0u);
    ctx->pc = 0x2FE5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5D8u;
            // 0x2fe5dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5E0u; }
        if (ctx->pc != 0x2FE5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5E0u; }
        if (ctx->pc != 0x2FE5E0u) { return; }
    }
    ctx->pc = 0x2FE5E0u;
label_2fe5e0:
    // 0x2fe5e0: 0xc0c4974  jal         func_3125D0
    ctx->pc = 0x2FE5E0u;
    SET_GPR_U32(ctx, 31, 0x2FE5E8u);
    ctx->pc = 0x3125D0u;
    if (runtime->hasFunction(0x3125D0u)) {
        auto targetFn = runtime->lookupFunction(0x3125D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5E8u; }
        if (ctx->pc != 0x2FE5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFishingActionChance__Fv_0x3125d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE5E8u; }
        if (ctx->pc != 0x2FE5E8u) { return; }
    }
    ctx->pc = 0x2FE5E8u;
label_2fe5e8:
    // 0x2fe5e8: 0x8f869f98  lw          $a2, -0x6068($gp)
    ctx->pc = 0x2fe5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
    // 0x2fe5ec: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fe5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2fe5f0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2fe5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe5f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fe5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2fe5f8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2fe5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2fe5fc: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2FE5FCu;
    SET_GPR_U32(ctx, 31, 0x2FE604u);
    ctx->pc = 0x2FE600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE5FCu;
            // 0x2fe600: 0x24a51f90  addiu       $a1, $a1, 0x1F90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE604u; }
        if (ctx->pc != 0x2FE604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE604u; }
        if (ctx->pc != 0x2FE604u) { return; }
    }
    ctx->pc = 0x2FE604u;
label_2fe604:
    // 0x2fe604: 0x8f869f98  lw          $a2, -0x6068($gp)
    ctx->pc = 0x2fe604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
    // 0x2fe608: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fe608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2fe60c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fe60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2fe610: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fe610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe614: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2fe614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2fe618: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2FE618u;
    SET_GPR_U32(ctx, 31, 0x2FE620u);
    ctx->pc = 0x2FE61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE618u;
            // 0x2fe61c: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE620u; }
        if (ctx->pc != 0x2FE620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE620u; }
        if (ctx->pc != 0x2FE620u) { return; }
    }
    ctx->pc = 0x2FE620u;
label_2fe620:
    // 0x2fe620: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2fe620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe624: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2FE624u;
    SET_GPR_U32(ctx, 31, 0x2FE62Cu);
    ctx->pc = 0x2FE628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE624u;
            // 0x2fe628: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE62Cu; }
        if (ctx->pc != 0x2FE62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE62Cu; }
        if (ctx->pc != 0x2FE62Cu) { return; }
    }
    ctx->pc = 0x2FE62Cu;
label_2fe62c:
    // 0x2fe62c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe634: 0xc04d104  jal         func_134410
    ctx->pc = 0x2FE634u;
    SET_GPR_U32(ctx, 31, 0x2FE63Cu);
    ctx->pc = 0x2FE638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE634u;
            // 0x2fe638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE63Cu; }
        if (ctx->pc != 0x2FE63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE63Cu; }
        if (ctx->pc != 0x2FE63Cu) { return; }
    }
    ctx->pc = 0x2FE63Cu;
label_2fe63c:
    // 0x2fe63c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe640: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2FE640u;
    SET_GPR_U32(ctx, 31, 0x2FE648u);
    ctx->pc = 0x2FE644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE640u;
            // 0x2fe644: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE648u; }
        if (ctx->pc != 0x2FE648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE648u; }
        if (ctx->pc != 0x2FE648u) { return; }
    }
    ctx->pc = 0x2FE648u;
label_2fe648:
    // 0x2fe648: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe64c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2FE64Cu;
    SET_GPR_U32(ctx, 31, 0x2FE654u);
    ctx->pc = 0x2FE650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE64Cu;
            // 0x2fe650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE654u; }
        if (ctx->pc != 0x2FE654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE654u; }
        if (ctx->pc != 0x2FE654u) { return; }
    }
    ctx->pc = 0x2FE654u;
label_2fe654:
    // 0x2fe654: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe658: 0xc04d44c  jal         func_135130
    ctx->pc = 0x2FE658u;
    SET_GPR_U32(ctx, 31, 0x2FE660u);
    ctx->pc = 0x2FE65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE658u;
            // 0x2fe65c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE660u; }
        if (ctx->pc != 0x2FE660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE660u; }
        if (ctx->pc != 0x2FE660u) { return; }
    }
    ctx->pc = 0x2FE660u;
label_2fe660:
    // 0x2fe660: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe664: 0xc04d424  jal         func_135090
    ctx->pc = 0x2FE664u;
    SET_GPR_U32(ctx, 31, 0x2FE66Cu);
    ctx->pc = 0x2FE668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE664u;
            // 0x2fe668: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE66Cu; }
        if (ctx->pc != 0x2FE66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE66Cu; }
        if (ctx->pc != 0x2FE66Cu) { return; }
    }
    ctx->pc = 0x2FE66Cu;
label_2fe66c:
    // 0x2fe66c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe670: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2FE670u;
    SET_GPR_U32(ctx, 31, 0x2FE678u);
    ctx->pc = 0x2FE674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE670u;
            // 0x2fe674: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE678u; }
        if (ctx->pc != 0x2FE678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE678u; }
        if (ctx->pc != 0x2FE678u) { return; }
    }
    ctx->pc = 0x2FE678u;
label_2fe678:
    // 0x2fe678: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe67c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2FE67Cu;
    SET_GPR_U32(ctx, 31, 0x2FE684u);
    ctx->pc = 0x2FE680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE67Cu;
            // 0x2fe680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE684u; }
        if (ctx->pc != 0x2FE684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE684u; }
        if (ctx->pc != 0x2FE684u) { return; }
    }
    ctx->pc = 0x2FE684u;
label_2fe684:
    // 0x2fe684: 0x8f839fe0  lw          $v1, -0x6020($gp)
    ctx->pc = 0x2fe684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
    // 0x2fe688: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2fe688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2fe68c: 0x146201ac  bne         $v1, $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x2FE68Cu;
    {
        const bool branch_taken_0x2fe68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE68Cu;
            // 0x2fe690: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe68c) {
            ctx->pc = 0x2FED40u;
            goto label_2fed40;
        }
    }
    ctx->pc = 0x2FE694u;
    // 0x2fe694: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe698: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FE698u;
    SET_GPR_U32(ctx, 31, 0x2FE6A0u);
    ctx->pc = 0x2FE69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE698u;
            // 0x2fe69c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6A0u; }
        if (ctx->pc != 0x2FE6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6A0u; }
        if (ctx->pc != 0x2FE6A0u) { return; }
    }
    ctx->pc = 0x2FE6A0u;
label_2fe6a0:
    // 0x2fe6a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe6a4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2fe6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2fe6a8: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2fe6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2fe6ac: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x2fe6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2fe6b0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FE6B0u;
    SET_GPR_U32(ctx, 31, 0x2FE6B8u);
    ctx->pc = 0x2FE6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6B0u;
            // 0x2fe6b4: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6B8u; }
        if (ctx->pc != 0x2FE6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6B8u; }
        if (ctx->pc != 0x2FE6B8u) { return; }
    }
    ctx->pc = 0x2FE6B8u;
label_2fe6b8:
    // 0x2fe6b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe6bc: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x2fe6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x2fe6c0: 0x2406017e  addiu       $a2, $zero, 0x17E
    ctx->pc = 0x2fe6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    // 0x2fe6c4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FE6C4u;
    SET_GPR_U32(ctx, 31, 0x2FE6CCu);
    ctx->pc = 0x2FE6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6C4u;
            // 0x2fe6c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6CCu; }
        if (ctx->pc != 0x2FE6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6CCu; }
        if (ctx->pc != 0x2FE6CCu) { return; }
    }
    ctx->pc = 0x2FE6CCu;
label_2fe6cc:
    // 0x2fe6cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe6d0: 0x240501c4  addiu       $a1, $zero, 0x1C4
    ctx->pc = 0x2fe6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2fe6d4: 0x24060183  addiu       $a2, $zero, 0x183
    ctx->pc = 0x2fe6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    // 0x2fe6d8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FE6D8u;
    SET_GPR_U32(ctx, 31, 0x2FE6E0u);
    ctx->pc = 0x2FE6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6D8u;
            // 0x2fe6dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6E0u; }
        if (ctx->pc != 0x2FE6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6E0u; }
        if (ctx->pc != 0x2FE6E0u) { return; }
    }
    ctx->pc = 0x2FE6E0u;
label_2fe6e0:
    // 0x2fe6e0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FE6E0u;
    SET_GPR_U32(ctx, 31, 0x2FE6E8u);
    ctx->pc = 0x2FE6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6E0u;
            // 0x2fe6e4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6E8u; }
        if (ctx->pc != 0x2FE6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6E8u; }
        if (ctx->pc != 0x2FE6E8u) { return; }
    }
    ctx->pc = 0x2FE6E8u;
label_2fe6e8:
    // 0x2fe6e8: 0xc0c05a8  jal         func_3016A0
    ctx->pc = 0x2FE6E8u;
    SET_GPR_U32(ctx, 31, 0x2FE6F0u);
    ctx->pc = 0x2FE6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE6E8u;
            // 0x2fe6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3016A0u;
    if (runtime->hasFunction(0x3016A0u)) {
        auto targetFn = runtime->lookupFunction(0x3016A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6F0u; }
        if (ctx->pc != 0x2FE6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishDist__FP6CScene_0x3016a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6F0u; }
        if (ctx->pc != 0x2FE6F0u) { return; }
    }
    ctx->pc = 0x2FE6F0u;
label_2fe6f0:
    // 0x2fe6f0: 0xc783a03c  lwc1        $f3, -0x5FC4($gp)
    ctx->pc = 0x2fe6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe6f4: 0xc781a040  lwc1        $f1, -0x5FC0($gp)
    ctx->pc = 0x2fe6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe6f8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2fe6f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2fe6fc: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x2fe6fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2fe700: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x2fe700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2fe704: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x2fe704u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2fe708: 0x0  nop
    ctx->pc = 0x2fe708u;
    // NOP
    // 0x2fe70c: 0x0  nop
    ctx->pc = 0x2fe70cu;
    // NOP
    // 0x2fe710: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x2fe710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe714: 0x0  nop
    ctx->pc = 0x2fe714u;
    // NOP
    // 0x2fe718: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE718u;
    {
        const bool branch_taken_0x2fe718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE718u;
            // 0x2fe71c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe718) {
            ctx->pc = 0x2FE724u;
            goto label_2fe724;
        }
    }
    ctx->pc = 0x2FE720u;
    // 0x2fe720: 0x46002506  mov.s       $f20, $f4
    ctx->pc = 0x2fe720u;
    ctx->f[20] = FPU_MOV_S(ctx->f[4]);
label_2fe724:
    // 0x2fe724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe728: 0x0  nop
    ctx->pc = 0x2fe728u;
    // NOP
    // 0x2fe72c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2fe72cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe730: 0x0  nop
    ctx->pc = 0x2fe730u;
    // NOP
    // 0x2fe734: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE734u;
    {
        const bool branch_taken_0x2fe734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fe734) {
            ctx->pc = 0x2FE740u;
            goto label_2fe740;
        }
    }
    ctx->pc = 0x2FE73Cu;
    // 0x2fe73c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fe73cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2fe740:
    // 0x2fe740: 0xc0c3f04  jal         func_30FC10
    ctx->pc = 0x2FE740u;
    SET_GPR_U32(ctx, 31, 0x2FE748u);
    ctx->pc = 0x30FC10u;
    if (runtime->hasFunction(0x30FC10u)) {
        auto targetFn = runtime->lookupFunction(0x30FC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE748u; }
        if (ctx->pc != 0x2FE748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLineLength__Fv_0x30fc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE748u; }
        if (ctx->pc != 0x2FE748u) { return; }
    }
    ctx->pc = 0x2FE748u;
label_2fe748:
    // 0x2fe748: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2fe748u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2fe74c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe750: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FE750u;
    SET_GPR_U32(ctx, 31, 0x2FE758u);
    ctx->pc = 0x2FE754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE750u;
            // 0x2fe754: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE758u; }
        if (ctx->pc != 0x2FE758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE758u; }
        if (ctx->pc != 0x2FE758u) { return; }
    }
    ctx->pc = 0x2FE758u;
label_2fe758:
    // 0x2fe758: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe75c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2fe75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2fe760: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2fe760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2fe764: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fe764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fe768: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FE768u;
    SET_GPR_U32(ctx, 31, 0x2FE770u);
    ctx->pc = 0x2FE76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE768u;
            // 0x2fe76c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE770u; }
        if (ctx->pc != 0x2FE770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE770u; }
        if (ctx->pc != 0x2FE770u) { return; }
    }
    ctx->pc = 0x2FE770u;
label_2fe770:
    // 0x2fe770: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2fe770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2fe774: 0x3c0243ab  lui         $v0, 0x43AB
    ctx->pc = 0x2fe774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17323 << 16));
    // 0x2fe778: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe77c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe780: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe784: 0x0  nop
    ctx->pc = 0x2fe784u;
    // NOP
    // 0x2fe788: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2fe788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2fe78c: 0x3c0243bf  lui         $v0, 0x43BF
    ctx->pc = 0x2fe78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17343 << 16));
    // 0x2fe790: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2fe790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2fe794: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2fe794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2fe798: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2FE798u;
    SET_GPR_U32(ctx, 31, 0x2FE7A0u);
    ctx->pc = 0x2FE79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE798u;
            // 0x2fe79c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7A0u; }
        if (ctx->pc != 0x2FE7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7A0u; }
        if (ctx->pc != 0x2FE7A0u) { return; }
    }
    ctx->pc = 0x2FE7A0u;
label_2fe7a0:
    // 0x2fe7a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe7a4: 0x240501c4  addiu       $a1, $zero, 0x1C4
    ctx->pc = 0x2fe7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2fe7a8: 0x24060183  addiu       $a2, $zero, 0x183
    ctx->pc = 0x2fe7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    // 0x2fe7ac: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FE7ACu;
    SET_GPR_U32(ctx, 31, 0x2FE7B4u);
    ctx->pc = 0x2FE7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7ACu;
            // 0x2fe7b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7B4u; }
        if (ctx->pc != 0x2FE7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7B4u; }
        if (ctx->pc != 0x2FE7B4u) { return; }
    }
    ctx->pc = 0x2FE7B4u;
label_2fe7b4:
    // 0x2fe7b4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FE7B4u;
    SET_GPR_U32(ctx, 31, 0x2FE7BCu);
    ctx->pc = 0x2FE7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7B4u;
            // 0x2fe7b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7BCu; }
        if (ctx->pc != 0x2FE7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7BCu; }
        if (ctx->pc != 0x2FE7BCu) { return; }
    }
    ctx->pc = 0x2FE7BCu;
label_2fe7bc:
    // 0x2fe7bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe7c0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2FE7C0u;
    SET_GPR_U32(ctx, 31, 0x2FE7C8u);
    ctx->pc = 0x2FE7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7C0u;
            // 0x2fe7c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7C8u; }
        if (ctx->pc != 0x2FE7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7C8u; }
        if (ctx->pc != 0x2FE7C8u) { return; }
    }
    ctx->pc = 0x2FE7C8u;
label_2fe7c8:
    // 0x2fe7c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe7cc: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2FE7CCu;
    SET_GPR_U32(ctx, 31, 0x2FE7D4u);
    ctx->pc = 0x2FE7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7CCu;
            // 0x2fe7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7D4u; }
        if (ctx->pc != 0x2FE7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7D4u; }
        if (ctx->pc != 0x2FE7D4u) { return; }
    }
    ctx->pc = 0x2FE7D4u;
label_2fe7d4:
    // 0x2fe7d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe7d8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FE7D8u;
    SET_GPR_U32(ctx, 31, 0x2FE7E0u);
    ctx->pc = 0x2FE7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7D8u;
            // 0x2fe7dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7E0u; }
        if (ctx->pc != 0x2FE7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7E0u; }
        if (ctx->pc != 0x2FE7E0u) { return; }
    }
    ctx->pc = 0x2FE7E0u;
label_2fe7e0:
    // 0x2fe7e0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2fe7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2fe7e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe7e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fe7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7ec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fe7ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7f0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FE7F0u;
    SET_GPR_U32(ctx, 31, 0x2FE7F8u);
    ctx->pc = 0x2FE7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7F0u;
            // 0x2fe7f4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7F8u; }
        if (ctx->pc != 0x2FE7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7F8u; }
        if (ctx->pc != 0x2FE7F8u) { return; }
    }
    ctx->pc = 0x2FE7F8u;
label_2fe7f8:
    // 0x2fe7f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe7fc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2FE7FCu;
    SET_GPR_U32(ctx, 31, 0x2FE804u);
    ctx->pc = 0x2FE800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7FCu;
            // 0x2fe800: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE804u; }
        if (ctx->pc != 0x2FE804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE804u; }
        if (ctx->pc != 0x2FE804u) { return; }
    }
    ctx->pc = 0x2FE804u;
label_2fe804:
    // 0x2fe804: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fe808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe80c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FE80Cu;
    SET_GPR_U32(ctx, 31, 0x2FE814u);
    ctx->pc = 0x2FE810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE80Cu;
            // 0x2fe810: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE814u; }
        if (ctx->pc != 0x2FE814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE814u; }
        if (ctx->pc != 0x2FE814u) { return; }
    }
    ctx->pc = 0x2FE814u;
label_2fe814:
    // 0x2fe814: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe818: 0x24050146  addiu       $a1, $zero, 0x146
    ctx->pc = 0x2fe818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
    // 0x2fe81c: 0x24060159  addiu       $a2, $zero, 0x159
    ctx->pc = 0x2fe81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
    // 0x2fe820: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FE820u;
    SET_GPR_U32(ctx, 31, 0x2FE828u);
    ctx->pc = 0x2FE824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE820u;
            // 0x2fe824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE828u; }
        if (ctx->pc != 0x2FE828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE828u; }
        if (ctx->pc != 0x2FE828u) { return; }
    }
    ctx->pc = 0x2FE828u;
label_2fe828:
    // 0x2fe828: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe82c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2fe82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x2fe830: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FE830u;
    SET_GPR_U32(ctx, 31, 0x2FE838u);
    ctx->pc = 0x2FE834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE830u;
            // 0x2fe834: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE838u; }
        if (ctx->pc != 0x2FE838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE838u; }
        if (ctx->pc != 0x2FE838u) { return; }
    }
    ctx->pc = 0x2FE838u;
label_2fe838:
    // 0x2fe838: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe83c: 0x240501ee  addiu       $a1, $zero, 0x1EE
    ctx->pc = 0x2fe83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
    // 0x2fe840: 0x2406018f  addiu       $a2, $zero, 0x18F
    ctx->pc = 0x2fe840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    // 0x2fe844: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FE844u;
    SET_GPR_U32(ctx, 31, 0x2FE84Cu);
    ctx->pc = 0x2FE848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE844u;
            // 0x2fe848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE84Cu; }
        if (ctx->pc != 0x2FE84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE84Cu; }
        if (ctx->pc != 0x2FE84Cu) { return; }
    }
    ctx->pc = 0x2FE84Cu;
label_2fe84c:
    // 0x2fe84c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FE84Cu;
    SET_GPR_U32(ctx, 31, 0x2FE854u);
    ctx->pc = 0x2FE850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE84Cu;
            // 0x2fe850: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE854u; }
        if (ctx->pc != 0x2FE854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE854u; }
        if (ctx->pc != 0x2FE854u) { return; }
    }
    ctx->pc = 0x2FE854u;
label_2fe854:
    // 0x2fe854: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe858: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FE858u;
    SET_GPR_U32(ctx, 31, 0x2FE860u);
    ctx->pc = 0x2FE85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE858u;
            // 0x2fe85c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE860u; }
        if (ctx->pc != 0x2FE860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE860u; }
        if (ctx->pc != 0x2FE860u) { return; }
    }
    ctx->pc = 0x2FE860u;
label_2fe860:
    // 0x2fe860: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2fe860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2fe864: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe868: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fe868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe86c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fe86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe870: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FE870u;
    SET_GPR_U32(ctx, 31, 0x2FE878u);
    ctx->pc = 0x2FE874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE870u;
            // 0x2fe874: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE878u; }
        if (ctx->pc != 0x2FE878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE878u; }
        if (ctx->pc != 0x2FE878u) { return; }
    }
    ctx->pc = 0x2FE878u;
label_2fe878:
    // 0x2fe878: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe87c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2FE87Cu;
    SET_GPR_U32(ctx, 31, 0x2FE884u);
    ctx->pc = 0x2FE880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE87Cu;
            // 0x2fe880: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE884u; }
        if (ctx->pc != 0x2FE884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE884u; }
        if (ctx->pc != 0x2FE884u) { return; }
    }
    ctx->pc = 0x2FE884u;
label_2fe884:
    // 0x2fe884: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fe884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2fe888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe88c: 0x0  nop
    ctx->pc = 0x2fe88cu;
    // NOP
    // 0x2fe890: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x2fe890u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x2fe894: 0x0  nop
    ctx->pc = 0x2fe894u;
    // NOP
    // 0x2fe898: 0x0  nop
    ctx->pc = 0x2fe898u;
    // NOP
    // 0x2fe89c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FE89Cu;
    SET_GPR_U32(ctx, 31, 0x2FE8A4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE8A4u; }
        if (ctx->pc != 0x2FE8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE8A4u; }
        if (ctx->pc != 0x2FE8A4u) { return; }
    }
    ctx->pc = 0x2FE8A4u;
label_2fe8a4:
    // 0x2fe8a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fe8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8a8: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2fe8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2fe8ac: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2fe8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x2fe8b0: 0x102fc2  srl         $a1, $s0, 31
    ctx->pc = 0x2fe8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x2fe8b4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2fe8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2fe8b8: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2fe8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fe8bc: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x2fe8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2fe8c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe8c4: 0x2406018b  addiu       $a2, $zero, 0x18B
    ctx->pc = 0x2fe8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 395));
    // 0x2fe8c8: 0x2407016a  addiu       $a3, $zero, 0x16A
    ctx->pc = 0x2fe8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    // 0x2fe8cc: 0x1810  mfhi        $v1
    ctx->pc = 0x2fe8ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fe8d0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2fe8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2fe8d4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2fe8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2fe8d8: 0x209001a  div         $zero, $s0, $t1
    ctx->pc = 0x2fe8d8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fe8dc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2fe8dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x2fe8e0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2fe8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fe8e4: 0x8010  mfhi        $s0
    ctx->pc = 0x2fe8e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2fe8e8: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x2fe8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2fe8ec: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x2fe8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x2fe8f0: 0x0  nop
    ctx->pc = 0x2fe8f0u;
    // NOP
    // 0x2fe8f4: 0x1010  mfhi        $v0
    ctx->pc = 0x2fe8f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2fe8f8: 0x208001a  div         $zero, $s0, $t0
    ctx->pc = 0x2fe8f8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fe8fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2fe8fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2fe900: 0x0  nop
    ctx->pc = 0x2fe900u;
    // NOP
    // 0x2fe904: 0x8010  mfhi        $s0
    ctx->pc = 0x2fe904u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2fe908: 0xc0bf93c  jal         func_2FE4F0
    ctx->pc = 0x2FE908u;
    SET_GPR_U32(ctx, 31, 0x2FE910u);
    ctx->pc = 0x2FE90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE908u;
            // 0x2fe90c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE4F0u;
    if (runtime->hasFunction(0x2FE4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE910u; }
        if (ctx->pc != 0x2FE910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawNumber__FP11mgCDrawPrimiii_0x2fe4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE910u; }
        if (ctx->pc != 0x2FE910u) { return; }
    }
    ctx->pc = 0x2FE910u;
label_2fe910:
    // 0x2fe910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe914: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe918: 0x24060194  addiu       $a2, $zero, 0x194
    ctx->pc = 0x2fe918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x2fe91c: 0xc0bf93c  jal         func_2FE4F0
    ctx->pc = 0x2FE91Cu;
    SET_GPR_U32(ctx, 31, 0x2FE924u);
    ctx->pc = 0x2FE920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE91Cu;
            // 0x2fe920: 0x2407016a  addiu       $a3, $zero, 0x16A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE4F0u;
    if (runtime->hasFunction(0x2FE4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE924u; }
        if (ctx->pc != 0x2FE924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawNumber__FP11mgCDrawPrimiii_0x2fe4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE924u; }
        if (ctx->pc != 0x2FE924u) { return; }
    }
    ctx->pc = 0x2FE924u;
label_2fe924:
    // 0x2fe924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe928: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe92c: 0x240601a3  addiu       $a2, $zero, 0x1A3
    ctx->pc = 0x2fe92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 419));
    // 0x2fe930: 0xc0bf93c  jal         func_2FE4F0
    ctx->pc = 0x2FE930u;
    SET_GPR_U32(ctx, 31, 0x2FE938u);
    ctx->pc = 0x2FE934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE930u;
            // 0x2fe934: 0x2407016a  addiu       $a3, $zero, 0x16A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE4F0u;
    if (runtime->hasFunction(0x2FE4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE938u; }
        if (ctx->pc != 0x2FE938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawNumber__FP11mgCDrawPrimiii_0x2fe4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE938u; }
        if (ctx->pc != 0x2FE938u) { return; }
    }
    ctx->pc = 0x2FE938u;
label_2fe938:
    // 0x2fe938: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FE938u;
    SET_GPR_U32(ctx, 31, 0x2FE940u);
    ctx->pc = 0x2FE93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE938u;
            // 0x2fe93c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE940u; }
        if (ctx->pc != 0x2FE940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE940u; }
        if (ctx->pc != 0x2FE940u) { return; }
    }
    ctx->pc = 0x2FE940u;
label_2fe940:
    // 0x2fe940: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe944: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2FE944u;
    SET_GPR_U32(ctx, 31, 0x2FE94Cu);
    ctx->pc = 0x2FE948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE944u;
            // 0x2fe948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE94Cu; }
        if (ctx->pc != 0x2FE94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE94Cu; }
        if (ctx->pc != 0x2FE94Cu) { return; }
    }
    ctx->pc = 0x2FE94Cu;
label_2fe94c:
    // 0x2fe94c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe950: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2FE950u;
    SET_GPR_U32(ctx, 31, 0x2FE958u);
    ctx->pc = 0x2FE954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE950u;
            // 0x2fe954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE958u; }
        if (ctx->pc != 0x2FE958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE958u; }
        if (ctx->pc != 0x2FE958u) { return; }
    }
    ctx->pc = 0x2FE958u;
label_2fe958:
    // 0x2fe958: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe95c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FE95Cu;
    SET_GPR_U32(ctx, 31, 0x2FE964u);
    ctx->pc = 0x2FE960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE95Cu;
            // 0x2fe960: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE964u; }
        if (ctx->pc != 0x2FE964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE964u; }
        if (ctx->pc != 0x2FE964u) { return; }
    }
    ctx->pc = 0x2FE964u;
label_2fe964:
    // 0x2fe964: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe968: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2fe968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2fe96c: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2fe96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2fe970: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x2fe970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2fe974: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FE974u;
    SET_GPR_U32(ctx, 31, 0x2FE97Cu);
    ctx->pc = 0x2FE978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE974u;
            // 0x2fe978: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE97Cu; }
        if (ctx->pc != 0x2FE97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE97Cu; }
        if (ctx->pc != 0x2FE97Cu) { return; }
    }
    ctx->pc = 0x2FE97Cu;
label_2fe97c:
    // 0x2fe97c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe980: 0x240501d5  addiu       $a1, $zero, 0x1D5
    ctx->pc = 0x2fe980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    // 0x2fe984: 0x240600dd  addiu       $a2, $zero, 0xDD
    ctx->pc = 0x2fe984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x2fe988: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FE988u;
    SET_GPR_U32(ctx, 31, 0x2FE990u);
    ctx->pc = 0x2FE98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE988u;
            // 0x2fe98c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE990u; }
        if (ctx->pc != 0x2FE990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE990u; }
        if (ctx->pc != 0x2FE990u) { return; }
    }
    ctx->pc = 0x2FE990u;
label_2fe990:
    // 0x2fe990: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe994: 0x240501e1  addiu       $a1, $zero, 0x1E1
    ctx->pc = 0x2fe994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
    // 0x2fe998: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x2fe998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x2fe99c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FE99Cu;
    SET_GPR_U32(ctx, 31, 0x2FE9A4u);
    ctx->pc = 0x2FE9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE99Cu;
            // 0x2fe9a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9A4u; }
        if (ctx->pc != 0x2FE9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9A4u; }
        if (ctx->pc != 0x2FE9A4u) { return; }
    }
    ctx->pc = 0x2FE9A4u;
label_2fe9a4:
    // 0x2fe9a4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FE9A4u;
    SET_GPR_U32(ctx, 31, 0x2FE9ACu);
    ctx->pc = 0x2FE9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9A4u;
            // 0x2fe9a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9ACu; }
        if (ctx->pc != 0x2FE9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9ACu; }
        if (ctx->pc != 0x2FE9ACu) { return; }
    }
    ctx->pc = 0x2FE9ACu;
label_2fe9ac:
    // 0x2fe9ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe9b0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2fe9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2fe9b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe9b8: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2fe9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2fe9bc: 0xc78ca028  lwc1        $f12, -0x5FD8($gp)
    ctx->pc = 0x2fe9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fe9c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fe9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9c4: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x2fe9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x2fe9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe9cc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fe9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2fe9d0: 0x2442d940  addiu       $v0, $v0, -0x26C0
    ctx->pc = 0x2fe9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x2fe9d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fe9d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe9d8: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x2fe9d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2fe9dc: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2fe9dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fe9e0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fe9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2fe9e4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2fe9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2fe9e8: 0x2442d950  addiu       $v0, $v0, -0x26B0
    ctx->pc = 0x2fe9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957392));
    // 0x2fe9ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2fe9ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe9f0: 0xc041e8a  jal         func_107A28
    ctx->pc = 0x2FE9F0u;
    SET_GPR_U32(ctx, 31, 0x2FE9F8u);
    ctx->pc = 0x2FE9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9F0u;
            // 0x2fe9f4: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9F8u; }
        if (ctx->pc != 0x2FE9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE9F8u; }
        if (ctx->pc != 0x2FE9F8u) { return; }
    }
    ctx->pc = 0x2FE9F8u;
label_2fe9f8:
    // 0x2fe9f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fe9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe9fc: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x2FE9FCu;
    SET_GPR_U32(ctx, 31, 0x2FEA04u);
    ctx->pc = 0x2FEA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9FCu;
            // 0x2fea00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA04u; }
        if (ctx->pc != 0x2FEA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA04u; }
        if (ctx->pc != 0x2FEA04u) { return; }
    }
    ctx->pc = 0x2FEA04u;
label_2fea04:
    // 0x2fea04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fea08: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FEA08u;
    SET_GPR_U32(ctx, 31, 0x2FEA10u);
    ctx->pc = 0x2FEA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA08u;
            // 0x2fea0c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA10u; }
        if (ctx->pc != 0x2FEA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA10u; }
        if (ctx->pc != 0x2FEA10u) { return; }
    }
    ctx->pc = 0x2FEA10u;
label_2fea10:
    // 0x2fea10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEA10u;
    SET_GPR_U32(ctx, 31, 0x2FEA18u);
    ctx->pc = 0x2FEA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA10u;
            // 0x2fea14: 0xc7ac0190  lwc1        $f12, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA18u; }
        if (ctx->pc != 0x2FEA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA18u; }
        if (ctx->pc != 0x2FEA18u) { return; }
    }
    ctx->pc = 0x2FEA18u;
label_2fea18:
    // 0x2fea18: 0x27b40194  addiu       $s4, $sp, 0x194
    ctx->pc = 0x2fea18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2fea1c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2fea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fea20: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEA20u;
    SET_GPR_U32(ctx, 31, 0x2FEA28u);
    ctx->pc = 0x2FEA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA20u;
            // 0x2fea24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA28u; }
        if (ctx->pc != 0x2FEA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA28u; }
        if (ctx->pc != 0x2FEA28u) { return; }
    }
    ctx->pc = 0x2FEA28u;
label_2fea28:
    // 0x2fea28: 0x27b50198  addiu       $s5, $sp, 0x198
    ctx->pc = 0x2fea28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2fea2c: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x2fea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fea30: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEA30u;
    SET_GPR_U32(ctx, 31, 0x2FEA38u);
    ctx->pc = 0x2FEA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA30u;
            // 0x2fea34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA38u; }
        if (ctx->pc != 0x2FEA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA38u; }
        if (ctx->pc != 0x2FEA38u) { return; }
    }
    ctx->pc = 0x2FEA38u;
label_2fea38:
    // 0x2fea38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fea38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fea3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fea40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea44: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fea48: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEA48u;
    SET_GPR_U32(ctx, 31, 0x2FEA50u);
    ctx->pc = 0x2FEA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA48u;
            // 0x2fea4c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA50u; }
        if (ctx->pc != 0x2FEA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA50u; }
        if (ctx->pc != 0x2FEA50u) { return; }
    }
    ctx->pc = 0x2FEA50u;
label_2fea50:
    // 0x2fea50: 0x3c0343ea  lui         $v1, 0x43EA
    ctx->pc = 0x2fea50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17386 << 16));
    // 0x2fea54: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2fea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2fea58: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2fea58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2fea5c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2fea5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2fea60: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fea60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fea64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2fea64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2fea68: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2fea68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2fea6c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2FEA6Cu;
    SET_GPR_U32(ctx, 31, 0x2FEA74u);
    ctx->pc = 0x2FEA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA6Cu;
            // 0x2fea70: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA74u; }
        if (ctx->pc != 0x2FEA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA74u; }
        if (ctx->pc != 0x2FEA74u) { return; }
    }
    ctx->pc = 0x2FEA74u;
label_2fea74:
    // 0x2fea74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEA74u;
    SET_GPR_U32(ctx, 31, 0x2FEA7Cu);
    ctx->pc = 0x2FEA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA74u;
            // 0x2fea78: 0xc7ac0190  lwc1        $f12, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA7Cu; }
        if (ctx->pc != 0x2FEA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA7Cu; }
        if (ctx->pc != 0x2FEA7Cu) { return; }
    }
    ctx->pc = 0x2FEA7Cu;
label_2fea7c:
    // 0x2fea7c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2fea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fea80: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEA80u;
    SET_GPR_U32(ctx, 31, 0x2FEA88u);
    ctx->pc = 0x2FEA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA80u;
            // 0x2fea84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA88u; }
        if (ctx->pc != 0x2FEA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA88u; }
        if (ctx->pc != 0x2FEA88u) { return; }
    }
    ctx->pc = 0x2FEA88u;
label_2fea88:
    // 0x2fea88: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x2fea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fea8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEA8Cu;
    SET_GPR_U32(ctx, 31, 0x2FEA94u);
    ctx->pc = 0x2FEA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA8Cu;
            // 0x2fea90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA94u; }
        if (ctx->pc != 0x2FEA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA94u; }
        if (ctx->pc != 0x2FEA94u) { return; }
    }
    ctx->pc = 0x2FEA94u;
label_2fea94:
    // 0x2fea94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fea94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fea98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fea9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feaa0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feaa4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEAA4u;
    SET_GPR_U32(ctx, 31, 0x2FEAACu);
    ctx->pc = 0x2FEAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAA4u;
            // 0x2feaa8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAACu; }
        if (ctx->pc != 0x2FEAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAACu; }
        if (ctx->pc != 0x2FEAACu) { return; }
    }
    ctx->pc = 0x2FEAACu;
label_2feaac:
    // 0x2feaac: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x2feaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x2feab0: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2feab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2feab4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2feab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2feab8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2feab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2feabc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2feabcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2feac0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2feac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2feac4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2feac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2feac8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2FEAC8u;
    SET_GPR_U32(ctx, 31, 0x2FEAD0u);
    ctx->pc = 0x2FEACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAC8u;
            // 0x2feacc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAD0u; }
        if (ctx->pc != 0x2FEAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAD0u; }
        if (ctx->pc != 0x2FEAD0u) { return; }
    }
    ctx->pc = 0x2FEAD0u;
label_2fead0:
    // 0x2fead0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEAD0u;
    SET_GPR_U32(ctx, 31, 0x2FEAD8u);
    ctx->pc = 0x2FEAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAD0u;
            // 0x2fead4: 0xc7ac01a0  lwc1        $f12, 0x1A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAD8u; }
        if (ctx->pc != 0x2FEAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAD8u; }
        if (ctx->pc != 0x2FEAD8u) { return; }
    }
    ctx->pc = 0x2FEAD8u;
label_2fead8:
    // 0x2fead8: 0x27b401a4  addiu       $s4, $sp, 0x1A4
    ctx->pc = 0x2fead8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x2feadc: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2feadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2feae0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEAE0u;
    SET_GPR_U32(ctx, 31, 0x2FEAE8u);
    ctx->pc = 0x2FEAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAE0u;
            // 0x2feae4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAE8u; }
        if (ctx->pc != 0x2FEAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAE8u; }
        if (ctx->pc != 0x2FEAE8u) { return; }
    }
    ctx->pc = 0x2FEAE8u;
label_2feae8:
    // 0x2feae8: 0x27b501a8  addiu       $s5, $sp, 0x1A8
    ctx->pc = 0x2feae8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x2feaec: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x2feaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2feaf0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEAF0u;
    SET_GPR_U32(ctx, 31, 0x2FEAF8u);
    ctx->pc = 0x2FEAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAF0u;
            // 0x2feaf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAF8u; }
        if (ctx->pc != 0x2FEAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAF8u; }
        if (ctx->pc != 0x2FEAF8u) { return; }
    }
    ctx->pc = 0x2FEAF8u;
label_2feaf8:
    // 0x2feaf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2feaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feafc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2feafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2feb00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feb08: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEB08u;
    SET_GPR_U32(ctx, 31, 0x2FEB10u);
    ctx->pc = 0x2FEB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB08u;
            // 0x2feb0c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB10u; }
        if (ctx->pc != 0x2FEB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB10u; }
        if (ctx->pc != 0x2FEB10u) { return; }
    }
    ctx->pc = 0x2FEB10u;
label_2feb10:
    // 0x2feb10: 0x3c02435d  lui         $v0, 0x435D
    ctx->pc = 0x2feb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17245 << 16));
    // 0x2feb14: 0x3c0343ea  lui         $v1, 0x43EA
    ctx->pc = 0x2feb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17386 << 16));
    // 0x2feb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2feb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feb1c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2feb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2feb20: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2feb20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2feb24: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feb28: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2feb28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2feb2c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2FEB2Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB34u);
    ctx->pc = 0x2FEB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB2Cu;
            // 0x2feb30: 0x4600a340  add.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB34u; }
        if (ctx->pc != 0x2FEB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB34u; }
        if (ctx->pc != 0x2FEB34u) { return; }
    }
    ctx->pc = 0x2FEB34u;
label_2feb34:
    // 0x2feb34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEB34u;
    SET_GPR_U32(ctx, 31, 0x2FEB3Cu);
    ctx->pc = 0x2FEB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB34u;
            // 0x2feb38: 0xc7ac01a0  lwc1        $f12, 0x1A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB3Cu; }
        if (ctx->pc != 0x2FEB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB3Cu; }
        if (ctx->pc != 0x2FEB3Cu) { return; }
    }
    ctx->pc = 0x2FEB3Cu;
label_2feb3c:
    // 0x2feb3c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2feb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2feb40: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEB40u;
    SET_GPR_U32(ctx, 31, 0x2FEB48u);
    ctx->pc = 0x2FEB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB40u;
            // 0x2feb44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB48u; }
        if (ctx->pc != 0x2FEB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB48u; }
        if (ctx->pc != 0x2FEB48u) { return; }
    }
    ctx->pc = 0x2FEB48u;
label_2feb48:
    // 0x2feb48: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x2feb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2feb4c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FEB4Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB54u);
    ctx->pc = 0x2FEB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB4Cu;
            // 0x2feb50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB54u; }
        if (ctx->pc != 0x2FEB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB54u; }
        if (ctx->pc != 0x2FEB54u) { return; }
    }
    ctx->pc = 0x2FEB54u;
label_2feb54:
    // 0x2feb54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2feb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2feb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2feb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feb64: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEB64u;
    SET_GPR_U32(ctx, 31, 0x2FEB6Cu);
    ctx->pc = 0x2FEB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB64u;
            // 0x2feb68: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB6Cu; }
        if (ctx->pc != 0x2FEB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB6Cu; }
        if (ctx->pc != 0x2FEB6Cu) { return; }
    }
    ctx->pc = 0x2FEB6Cu;
label_2feb6c:
    // 0x2feb6c: 0x3c02435d  lui         $v0, 0x435D
    ctx->pc = 0x2feb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17245 << 16));
    // 0x2feb70: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x2feb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x2feb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2feb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feb78: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2feb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2feb7c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2feb7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2feb80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feb84: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2feb84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2feb88: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2FEB88u;
    SET_GPR_U32(ctx, 31, 0x2FEB90u);
    ctx->pc = 0x2FEB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB88u;
            // 0x2feb8c: 0x4600a340  add.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB90u; }
        if (ctx->pc != 0x2FEB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB90u; }
        if (ctx->pc != 0x2FEB90u) { return; }
    }
    ctx->pc = 0x2FEB90u;
label_2feb90:
    // 0x2feb90: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FEB90u;
    SET_GPR_U32(ctx, 31, 0x2FEB98u);
    ctx->pc = 0x2FEB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB90u;
            // 0x2feb94: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB98u; }
        if (ctx->pc != 0x2FEB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB98u; }
        if (ctx->pc != 0x2FEB98u) { return; }
    }
    ctx->pc = 0x2FEB98u;
label_2feb98:
    // 0x2feb98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feb9c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FEB9Cu;
    SET_GPR_U32(ctx, 31, 0x2FEBA4u);
    ctx->pc = 0x2FEBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB9Cu;
            // 0x2feba0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBA4u; }
        if (ctx->pc != 0x2FEBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBA4u; }
        if (ctx->pc != 0x2FEBA4u) { return; }
    }
    ctx->pc = 0x2FEBA4u;
label_2feba4:
    // 0x2feba4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2feba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2feba8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2febac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2febacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febb0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2febb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febb4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEBB4u;
    SET_GPR_U32(ctx, 31, 0x2FEBBCu);
    ctx->pc = 0x2FEBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEBB4u;
            // 0x2febb8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBBCu; }
        if (ctx->pc != 0x2FEBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBBCu; }
        if (ctx->pc != 0x2FEBBCu) { return; }
    }
    ctx->pc = 0x2FEBBCu;
label_2febbc:
    // 0x2febbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2febbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2febc0: 0x240501d5  addiu       $a1, $zero, 0x1D5
    ctx->pc = 0x2febc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    // 0x2febc4: 0x240600dd  addiu       $a2, $zero, 0xDD
    ctx->pc = 0x2febc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x2febc8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FEBC8u;
    SET_GPR_U32(ctx, 31, 0x2FEBD0u);
    ctx->pc = 0x2FEBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEBC8u;
            // 0x2febcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBD0u; }
        if (ctx->pc != 0x2FEBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBD0u; }
        if (ctx->pc != 0x2FEBD0u) { return; }
    }
    ctx->pc = 0x2FEBD0u;
label_2febd0:
    // 0x2febd0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2febd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2febd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2febd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2febd8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2febd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febdc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2febdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febe0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEBE0u;
    SET_GPR_U32(ctx, 31, 0x2FEBE8u);
    ctx->pc = 0x2FEBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEBE0u;
            // 0x2febe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBE8u; }
        if (ctx->pc != 0x2FEBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBE8u; }
        if (ctx->pc != 0x2FEBE8u) { return; }
    }
    ctx->pc = 0x2FEBE8u;
label_2febe8:
    // 0x2febe8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2febe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2febec: 0x240501e1  addiu       $a1, $zero, 0x1E1
    ctx->pc = 0x2febecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
    // 0x2febf0: 0x240600dd  addiu       $a2, $zero, 0xDD
    ctx->pc = 0x2febf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x2febf4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FEBF4u;
    SET_GPR_U32(ctx, 31, 0x2FEBFCu);
    ctx->pc = 0x2FEBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEBF4u;
            // 0x2febf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBFCu; }
        if (ctx->pc != 0x2FEBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBFCu; }
        if (ctx->pc != 0x2FEBFCu) { return; }
    }
    ctx->pc = 0x2FEBFCu;
label_2febfc:
    // 0x2febfc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2febfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fec00: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fec04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fec04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec08: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fec08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec0c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEC0Cu;
    SET_GPR_U32(ctx, 31, 0x2FEC14u);
    ctx->pc = 0x2FEC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC0Cu;
            // 0x2fec10: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC14u; }
        if (ctx->pc != 0x2FEC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC14u; }
        if (ctx->pc != 0x2FEC14u) { return; }
    }
    ctx->pc = 0x2FEC14u;
label_2fec14:
    // 0x2fec14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fec18: 0x240501d5  addiu       $a1, $zero, 0x1D5
    ctx->pc = 0x2fec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    // 0x2fec1c: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x2fec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x2fec20: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FEC20u;
    SET_GPR_U32(ctx, 31, 0x2FEC28u);
    ctx->pc = 0x2FEC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC20u;
            // 0x2fec24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC28u; }
        if (ctx->pc != 0x2FEC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC28u; }
        if (ctx->pc != 0x2FEC28u) { return; }
    }
    ctx->pc = 0x2FEC28u;
label_2fec28:
    // 0x2fec28: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fec2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fec30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fec30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec34: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fec34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec38: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEC38u;
    SET_GPR_U32(ctx, 31, 0x2FEC40u);
    ctx->pc = 0x2FEC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC38u;
            // 0x2fec3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC40u; }
        if (ctx->pc != 0x2FEC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC40u; }
        if (ctx->pc != 0x2FEC40u) { return; }
    }
    ctx->pc = 0x2FEC40u;
label_2fec40:
    // 0x2fec40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fec44: 0x240501e1  addiu       $a1, $zero, 0x1E1
    ctx->pc = 0x2fec44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
    // 0x2fec48: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x2fec48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x2fec4c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FEC4Cu;
    SET_GPR_U32(ctx, 31, 0x2FEC54u);
    ctx->pc = 0x2FEC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC4Cu;
            // 0x2fec50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC54u; }
        if (ctx->pc != 0x2FEC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC54u; }
        if (ctx->pc != 0x2FEC54u) { return; }
    }
    ctx->pc = 0x2FEC54u;
label_2fec54:
    // 0x2fec54: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FEC54u;
    SET_GPR_U32(ctx, 31, 0x2FEC5Cu);
    ctx->pc = 0x2FEC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC54u;
            // 0x2fec58: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC5Cu; }
        if (ctx->pc != 0x2FEC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC5Cu; }
        if (ctx->pc != 0x2FEC5Cu) { return; }
    }
    ctx->pc = 0x2FEC5Cu;
label_2fec5c:
    // 0x2fec5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fec60: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2FEC60u;
    SET_GPR_U32(ctx, 31, 0x2FEC68u);
    ctx->pc = 0x2FEC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC60u;
            // 0x2fec64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC68u; }
        if (ctx->pc != 0x2FEC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC68u; }
        if (ctx->pc != 0x2FEC68u) { return; }
    }
    ctx->pc = 0x2FEC68u;
label_2fec68:
    // 0x2fec68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fec6c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2FEC6Cu;
    SET_GPR_U32(ctx, 31, 0x2FEC74u);
    ctx->pc = 0x2FEC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC6Cu;
            // 0x2fec70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC74u; }
        if (ctx->pc != 0x2FEC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC74u; }
        if (ctx->pc != 0x2FEC74u) { return; }
    }
    ctx->pc = 0x2FEC74u;
label_2fec74:
    // 0x2fec74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fec78: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FEC78u;
    SET_GPR_U32(ctx, 31, 0x2FEC80u);
    ctx->pc = 0x2FEC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC78u;
            // 0x2fec7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC80u; }
        if (ctx->pc != 0x2FEC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC80u; }
        if (ctx->pc != 0x2FEC80u) { return; }
    }
    ctx->pc = 0x2FEC80u;
label_2fec80:
    // 0x2fec80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fec80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec84: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2FEC84u;
    SET_GPR_U32(ctx, 31, 0x2FEC8Cu);
    ctx->pc = 0x2FEC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC84u;
            // 0x2fec88: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC8Cu; }
        if (ctx->pc != 0x2FEC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC8Cu; }
        if (ctx->pc != 0x2FEC8Cu) { return; }
    }
    ctx->pc = 0x2FEC8Cu;
label_2fec8c:
    // 0x2fec8c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2fec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2fec90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fec90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fec94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fec94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec98: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fec98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec9c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEC9Cu;
    SET_GPR_U32(ctx, 31, 0x2FECA4u);
    ctx->pc = 0x2FECA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC9Cu;
            // 0x2feca0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECA4u; }
        if (ctx->pc != 0x2FECA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECA4u; }
        if (ctx->pc != 0x2FECA4u) { return; }
    }
    ctx->pc = 0x2FECA4u;
label_2feca4:
    // 0x2feca4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2feca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fecac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FECACu;
    SET_GPR_U32(ctx, 31, 0x2FECB4u);
    ctx->pc = 0x2FECB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FECACu;
            // 0x2fecb0: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECB4u; }
        if (ctx->pc != 0x2FECB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECB4u; }
        if (ctx->pc != 0x2FECB4u) { return; }
    }
    ctx->pc = 0x2FECB4u;
label_2fecb4:
    // 0x2fecb4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fecb8: 0x240501c3  addiu       $a1, $zero, 0x1C3
    ctx->pc = 0x2fecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
    // 0x2fecbc: 0x240600c9  addiu       $a2, $zero, 0xC9
    ctx->pc = 0x2fecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2fecc0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FECC0u;
    SET_GPR_U32(ctx, 31, 0x2FECC8u);
    ctx->pc = 0x2FECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FECC0u;
            // 0x2fecc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECC8u; }
        if (ctx->pc != 0x2FECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECC8u; }
        if (ctx->pc != 0x2FECC8u) { return; }
    }
    ctx->pc = 0x2FECC8u;
label_2fecc8:
    // 0x2fecc8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fecccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fecd0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FECD0u;
    SET_GPR_U32(ctx, 31, 0x2FECD8u);
    ctx->pc = 0x2FECD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FECD0u;
            // 0x2fecd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECD8u; }
        if (ctx->pc != 0x2FECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECD8u; }
        if (ctx->pc != 0x2FECD8u) { return; }
    }
    ctx->pc = 0x2FECD8u;
label_2fecd8:
    // 0x2fecd8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fecdc: 0x240501f6  addiu       $a1, $zero, 0x1F6
    ctx->pc = 0x2fecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x2fece0: 0x240600c9  addiu       $a2, $zero, 0xC9
    ctx->pc = 0x2fece0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2fece4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FECE4u;
    SET_GPR_U32(ctx, 31, 0x2FECECu);
    ctx->pc = 0x2FECE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FECE4u;
            // 0x2fece8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECECu; }
        if (ctx->pc != 0x2FECECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECECu; }
        if (ctx->pc != 0x2FECECu) { return; }
    }
    ctx->pc = 0x2FECECu;
label_2fecec:
    // 0x2fecec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fececu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fecf0: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2fecf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x2fecf4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FECF4u;
    SET_GPR_U32(ctx, 31, 0x2FECFCu);
    ctx->pc = 0x2FECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FECF4u;
            // 0x2fecf8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECFCu; }
        if (ctx->pc != 0x2FECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECFCu; }
        if (ctx->pc != 0x2FECFCu) { return; }
    }
    ctx->pc = 0x2FECFCu;
label_2fecfc:
    // 0x2fecfc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fed00: 0x240501c3  addiu       $a1, $zero, 0x1C3
    ctx->pc = 0x2fed00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
    // 0x2fed04: 0x24060170  addiu       $a2, $zero, 0x170
    ctx->pc = 0x2fed04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x2fed08: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FED08u;
    SET_GPR_U32(ctx, 31, 0x2FED10u);
    ctx->pc = 0x2FED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED08u;
            // 0x2fed0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED10u; }
        if (ctx->pc != 0x2FED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED10u; }
        if (ctx->pc != 0x2FED10u) { return; }
    }
    ctx->pc = 0x2FED10u;
label_2fed10:
    // 0x2fed10: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fed14: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2fed14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x2fed18: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FED18u;
    SET_GPR_U32(ctx, 31, 0x2FED20u);
    ctx->pc = 0x2FED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED18u;
            // 0x2fed1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED20u; }
        if (ctx->pc != 0x2FED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED20u; }
        if (ctx->pc != 0x2FED20u) { return; }
    }
    ctx->pc = 0x2FED20u;
label_2fed20:
    // 0x2fed20: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fed24: 0x240501f6  addiu       $a1, $zero, 0x1F6
    ctx->pc = 0x2fed24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x2fed28: 0x24060170  addiu       $a2, $zero, 0x170
    ctx->pc = 0x2fed28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x2fed2c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FED2Cu;
    SET_GPR_U32(ctx, 31, 0x2FED34u);
    ctx->pc = 0x2FED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED2Cu;
            // 0x2fed30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED34u; }
        if (ctx->pc != 0x2FED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED34u; }
        if (ctx->pc != 0x2FED34u) { return; }
    }
    ctx->pc = 0x2FED34u;
label_2fed34:
    // 0x2fed34: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FED34u;
    SET_GPR_U32(ctx, 31, 0x2FED3Cu);
    ctx->pc = 0x2FED38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED34u;
            // 0x2fed38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED3Cu; }
        if (ctx->pc != 0x2FED3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED3Cu; }
        if (ctx->pc != 0x2FED3Cu) { return; }
    }
    ctx->pc = 0x2FED3Cu;
label_2fed3c:
    // 0x2fed3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2fed40:
    // 0x2fed40: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2FED40u;
    SET_GPR_U32(ctx, 31, 0x2FED48u);
    ctx->pc = 0x2FED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED40u;
            // 0x2fed44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED48u; }
        if (ctx->pc != 0x2FED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED48u; }
        if (ctx->pc != 0x2FED48u) { return; }
    }
    ctx->pc = 0x2FED48u;
label_2fed48:
    // 0x2fed48: 0x8f82a064  lw          $v0, -0x5F9C($gp)
    ctx->pc = 0x2fed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942820)));
    // 0x2fed4c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FED4Cu;
    {
        const bool branch_taken_0x2fed4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED4Cu;
            // 0x2fed50: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed4c) {
            ctx->pc = 0x2FEDD0u;
            goto label_2fedd0;
        }
    }
    ctx->pc = 0x2FED54u;
    // 0x2fed54: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FED54u;
    SET_GPR_U32(ctx, 31, 0x2FED5Cu);
    ctx->pc = 0x2FED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED54u;
            // 0x2fed58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED5Cu; }
        if (ctx->pc != 0x2FED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED5Cu; }
        if (ctx->pc != 0x2FED5Cu) { return; }
    }
    ctx->pc = 0x2FED5Cu;
label_2fed5c:
    // 0x2fed5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2fed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2fed60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fed64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fed64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fed68: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fed68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fed6c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FED6Cu;
    SET_GPR_U32(ctx, 31, 0x2FED74u);
    ctx->pc = 0x2FED70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED6Cu;
            // 0x2fed70: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED74u; }
        if (ctx->pc != 0x2FED74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED74u; }
        if (ctx->pc != 0x2FED74u) { return; }
    }
    ctx->pc = 0x2FED74u;
label_2fed74:
    // 0x2fed74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fed78: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2FED78u;
    SET_GPR_U32(ctx, 31, 0x2FED80u);
    ctx->pc = 0x2FED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED78u;
            // 0x2fed7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED80u; }
        if (ctx->pc != 0x2FED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED80u; }
        if (ctx->pc != 0x2FED80u) { return; }
    }
    ctx->pc = 0x2FED80u;
label_2fed80:
    // 0x2fed80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fed80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fed84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fed84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fed88: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FED88u;
    SET_GPR_U32(ctx, 31, 0x2FED90u);
    ctx->pc = 0x2FED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED88u;
            // 0x2fed8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED90u; }
        if (ctx->pc != 0x2FED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED90u; }
        if (ctx->pc != 0x2FED90u) { return; }
    }
    ctx->pc = 0x2FED90u;
label_2fed90:
    // 0x2fed90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fed94: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2fed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2fed98: 0x240600bd  addiu       $a2, $zero, 0xBD
    ctx->pc = 0x2fed98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x2fed9c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FED9Cu;
    SET_GPR_U32(ctx, 31, 0x2FEDA4u);
    ctx->pc = 0x2FEDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED9Cu;
            // 0x2feda0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDA4u; }
        if (ctx->pc != 0x2FEDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDA4u; }
        if (ctx->pc != 0x2FEDA4u) { return; }
    }
    ctx->pc = 0x2FEDA4u;
label_2feda4:
    // 0x2feda4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feda8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2feda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2fedac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FEDACu;
    SET_GPR_U32(ctx, 31, 0x2FEDB4u);
    ctx->pc = 0x2FEDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEDACu;
            // 0x2fedb0: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDB4u; }
        if (ctx->pc != 0x2FEDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDB4u; }
        if (ctx->pc != 0x2FEDB4u) { return; }
    }
    ctx->pc = 0x2FEDB4u;
label_2fedb4:
    // 0x2fedb4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fedb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fedb8: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x2fedb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2fedbc: 0x240600e3  addiu       $a2, $zero, 0xE3
    ctx->pc = 0x2fedbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x2fedc0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FEDC0u;
    SET_GPR_U32(ctx, 31, 0x2FEDC8u);
    ctx->pc = 0x2FEDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEDC0u;
            // 0x2fedc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDC8u; }
        if (ctx->pc != 0x2FEDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDC8u; }
        if (ctx->pc != 0x2FEDC8u) { return; }
    }
    ctx->pc = 0x2FEDC8u;
label_2fedc8:
    // 0x2fedc8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FEDC8u;
    SET_GPR_U32(ctx, 31, 0x2FEDD0u);
    ctx->pc = 0x2FEDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEDC8u;
            // 0x2fedcc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDD0u; }
        if (ctx->pc != 0x2FEDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDD0u; }
        if (ctx->pc != 0x2FEDD0u) { return; }
    }
    ctx->pc = 0x2FEDD0u;
label_2fedd0:
    // 0x2fedd0: 0x8f82a060  lw          $v0, -0x5FA0($gp)
    ctx->pc = 0x2fedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942816)));
    // 0x2fedd4: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FEDD4u;
    {
        const bool branch_taken_0x2fedd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FEDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEDD4u;
            // 0x2fedd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedd4) {
            ctx->pc = 0x2FEE60u;
            goto label_2fee60;
        }
    }
    ctx->pc = 0x2FEDDCu;
    // 0x2feddc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fede0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2FEDE0u;
    SET_GPR_U32(ctx, 31, 0x2FEDE8u);
    ctx->pc = 0x2FEDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEDE0u;
            // 0x2fede4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDE8u; }
        if (ctx->pc != 0x2FEDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEDE8u; }
        if (ctx->pc != 0x2FEDE8u) { return; }
    }
    ctx->pc = 0x2FEDE8u;
label_2fede8:
    // 0x2fede8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2fede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2fedec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fedecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fedf0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fedf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fedf4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fedf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fedf8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2FEDF8u;
    SET_GPR_U32(ctx, 31, 0x2FEE00u);
    ctx->pc = 0x2FEDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEDF8u;
            // 0x2fedfc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE00u; }
        if (ctx->pc != 0x2FEE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE00u; }
        if (ctx->pc != 0x2FEE00u) { return; }
    }
    ctx->pc = 0x2FEE00u;
label_2fee00:
    // 0x2fee00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fee00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fee04: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2FEE04u;
    SET_GPR_U32(ctx, 31, 0x2FEE0Cu);
    ctx->pc = 0x2FEE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEE04u;
            // 0x2fee08: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE0Cu; }
        if (ctx->pc != 0x2FEE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE0Cu; }
        if (ctx->pc != 0x2FEE0Cu) { return; }
    }
    ctx->pc = 0x2FEE0Cu;
label_2fee0c:
    // 0x2fee0c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fee10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fee10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fee14: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FEE14u;
    SET_GPR_U32(ctx, 31, 0x2FEE1Cu);
    ctx->pc = 0x2FEE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEE14u;
            // 0x2fee18: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE1Cu; }
        if (ctx->pc != 0x2FEE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE1Cu; }
        if (ctx->pc != 0x2FEE1Cu) { return; }
    }
    ctx->pc = 0x2FEE1Cu;
label_2fee1c:
    // 0x2fee1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fee20: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2fee20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2fee24: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x2fee24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x2fee28: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FEE28u;
    SET_GPR_U32(ctx, 31, 0x2FEE30u);
    ctx->pc = 0x2FEE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEE28u;
            // 0x2fee2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE30u; }
        if (ctx->pc != 0x2FEE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE30u; }
        if (ctx->pc != 0x2FEE30u) { return; }
    }
    ctx->pc = 0x2FEE30u;
label_2fee30:
    // 0x2fee30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fee30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fee34: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2fee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2fee38: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2FEE38u;
    SET_GPR_U32(ctx, 31, 0x2FEE40u);
    ctx->pc = 0x2FEE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEE38u;
            // 0x2fee3c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE40u; }
        if (ctx->pc != 0x2FEE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE40u; }
        if (ctx->pc != 0x2FEE40u) { return; }
    }
    ctx->pc = 0x2FEE40u;
label_2fee40:
    // 0x2fee40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fee40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fee44: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x2fee44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2fee48: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x2fee48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2fee4c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2FEE4Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE54u);
    ctx->pc = 0x2FEE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEE4Cu;
            // 0x2fee50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE54u; }
        if (ctx->pc != 0x2FEE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE54u; }
        if (ctx->pc != 0x2FEE54u) { return; }
    }
    ctx->pc = 0x2FEE54u;
label_2fee54:
    // 0x2fee54: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2FEE54u;
    SET_GPR_U32(ctx, 31, 0x2FEE5Cu);
    ctx->pc = 0x2FEE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEE54u;
            // 0x2fee58: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE5Cu; }
        if (ctx->pc != 0x2FEE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE5Cu; }
        if (ctx->pc != 0x2FEE5Cu) { return; }
    }
    ctx->pc = 0x2FEE5Cu;
label_2fee5c:
    // 0x2fee5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fee60:
    // 0x2fee60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2fee60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fee64: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2fee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fee68: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2fee68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fee6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2fee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fee70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2fee70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fee74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2fee74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fee78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fee78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fee7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fee7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fee80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fee80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fee84: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEE84u;
            // 0x2fee88: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FEE8Cu;
}
