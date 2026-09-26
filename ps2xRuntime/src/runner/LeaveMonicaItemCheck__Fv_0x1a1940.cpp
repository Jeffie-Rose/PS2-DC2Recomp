#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LeaveMonicaItemCheck__Fv
// Address: 0x1a1940 - 0x1a1a7c
void LeaveMonicaItemCheck__Fv_0x1a1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LeaveMonicaItemCheck__Fv_0x1a1940");
#endif

    switch (ctx->pc) {
        case 0x1a196cu: goto label_1a196c;
        case 0x1a1980u: goto label_1a1980;
        case 0x1a1990u: goto label_1a1990;
        case 0x1a19a4u: goto label_1a19a4;
        case 0x1a19c0u: goto label_1a19c0;
        case 0x1a19ccu: goto label_1a19cc;
        case 0x1a19dcu: goto label_1a19dc;
        case 0x1a19f4u: goto label_1a19f4;
        case 0x1a19fcu: goto label_1a19fc;
        case 0x1a1a18u: goto label_1a1a18;
        case 0x1a1a20u: goto label_1a1a20;
        case 0x1a1a38u: goto label_1a1a38;
        case 0x1a1a40u: goto label_1a1a40;
        default: break;
    }

    ctx->pc = 0x1a1940u;

    // 0x1a1940: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a1940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a1944: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a1948: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a1948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a194c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a1950: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a1950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a1954: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a1954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a1958: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a1958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a195c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1964: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A1964u;
    SET_GPR_U32(ctx, 31, 0x1A196Cu);
    ctx->pc = 0x1A1968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1964u;
            // 0x1a1968: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A196Cu; }
        if (ctx->pc != 0x1A196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A196Cu; }
        if (ctx->pc != 0x1A196Cu) { return; }
    }
    ctx->pc = 0x1A196Cu;
label_1a196c:
    // 0x1a196c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a196cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1970: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1A1970u;
    {
        const bool branch_taken_0x1a1970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1970u;
            // 0x1a1974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1970) {
            ctx->pc = 0x1A1A50u;
            goto label_1a1a50;
        }
    }
    ctx->pc = 0x1A1978u;
    // 0x1a1978: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1A1978u;
    SET_GPR_U32(ctx, 31, 0x1A1980u);
    ctx->pc = 0x1A197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1978u;
            // 0x1a197c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1980u; }
        if (ctx->pc != 0x1A1980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1980u; }
        if (ctx->pc != 0x1A1980u) { return; }
    }
    ctx->pc = 0x1A1980u;
label_1a1980:
    // 0x1a1980: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a1980u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1984: 0x12e00032  beqz        $s7, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A1984u;
    {
        const bool branch_taken_0x1a1984 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1984u;
            // 0x1a1988: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1984) {
            ctx->pc = 0x1A1A50u;
            goto label_1a1a50;
        }
    }
    ctx->pc = 0x1A198Cu;
    // 0x1a198c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a198cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1990:
    // 0x1a1990: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x1a1990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x1a1994: 0x8453002e  lh          $s3, 0x2E($v0)
    ctx->pc = 0x1a1994u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x1a1998: 0x2456002c  addiu       $s6, $v0, 0x2C
    ctx->pc = 0x1a1998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1a199c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x1A199Cu;
    SET_GPR_U32(ctx, 31, 0x1A19A4u);
    ctx->pc = 0x1A19A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A199Cu;
            // 0x1a19a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19A4u; }
        if (ctx->pc != 0x1A19A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19A4u; }
        if (ctx->pc != 0x1A19A4u) { return; }
    }
    ctx->pc = 0x1A19A4u;
label_1a19a4:
    // 0x1a19a4: 0x1a600026  blez        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A19A4u;
    {
        const bool branch_taken_0x1a19a4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1A19A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19A4u;
            // 0x1a19a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19a4) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A19ACu;
    // 0x1a19ac: 0x1a200024  blez        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A19ACu;
    {
        const bool branch_taken_0x1a19ac = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1A19B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19ACu;
            // 0x1a19b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19ac) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A19B4u;
    // 0x1a19b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a19b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19b8: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x1A19B8u;
    SET_GPR_U32(ctx, 31, 0x1A19C0u);
    ctx->pc = 0x1A19BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19B8u;
            // 0x1a19bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19C0u; }
        if (ctx->pc != 0x1A19C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19C0u; }
        if (ctx->pc != 0x1A19C0u) { return; }
    }
    ctx->pc = 0x1A19C0u;
label_1a19c0:
    // 0x1a19c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a19c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19c4: 0xc067660  jal         func_19D980
    ctx->pc = 0x1A19C4u;
    SET_GPR_U32(ctx, 31, 0x1A19CCu);
    ctx->pc = 0x1A19C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19C4u;
            // 0x1a19c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D980u;
    if (runtime->hasFunction(0x19D980u)) {
        auto targetFn = runtime->lookupFunction(0x19D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19CCu; }
        if (ctx->pc != 0x1A19CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFv_0x19d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19CCu; }
        if (ctx->pc != 0x1A19CCu) { return; }
    }
    ctx->pc = 0x1A19CCu;
label_1a19cc:
    // 0x1a19cc: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A19CCu;
    {
        const bool branch_taken_0x1a19cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19CCu;
            // 0x1a19d0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19cc) {
            ctx->pc = 0x1A1A28u;
            goto label_1a1a28;
        }
    }
    ctx->pc = 0x1A19D4u;
    // 0x1a19d4: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x1A19D4u;
    SET_GPR_U32(ctx, 31, 0x1A19DCu);
    ctx->pc = 0x1A19D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19D4u;
            // 0x1a19d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19DCu; }
        if (ctx->pc != 0x1A19DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19DCu; }
        if (ctx->pc != 0x1A19DCu) { return; }
    }
    ctx->pc = 0x1A19DCu;
label_1a19dc:
    // 0x1a19dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A19DCu;
    {
        const bool branch_taken_0x1a19dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a19dc) {
            ctx->pc = 0x1A1A04u;
            goto label_1a1a04;
        }
    }
    ctx->pc = 0x1A19E4u;
    // 0x1a19e4: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A19E4u;
    {
        const bool branch_taken_0x1a19e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19E4u;
            // 0x1a19e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19e4) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A19ECu;
    // 0x1a19ec: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x1A19ECu;
    SET_GPR_U32(ctx, 31, 0x1A19F4u);
    ctx->pc = 0x1A19F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19ECu;
            // 0x1a19f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19F4u; }
        if (ctx->pc != 0x1A19F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19F4u; }
        if (ctx->pc != 0x1A19F4u) { return; }
    }
    ctx->pc = 0x1A19F4u;
label_1a19f4:
    // 0x1a19f4: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x1A19F4u;
    SET_GPR_U32(ctx, 31, 0x1A19FCu);
    ctx->pc = 0x1A19F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19F4u;
            // 0x1a19f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19FCu; }
        if (ctx->pc != 0x1A19FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19FCu; }
        if (ctx->pc != 0x1A19FCu) { return; }
    }
    ctx->pc = 0x1A19FCu;
label_1a19fc:
    // 0x1a19fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A19FCu;
    {
        const bool branch_taken_0x1a19fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a19fc) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A1A04u;
label_1a1a04:
    // 0x1a1a04: 0x0  nop
    ctx->pc = 0x1a1a04u;
    // NOP
    // 0x1a1a08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a10: 0xc065cdc  jal         func_197370
    ctx->pc = 0x1A1A10u;
    SET_GPR_U32(ctx, 31, 0x1A1A18u);
    ctx->pc = 0x1A1A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A10u;
            // 0x1a1a14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A18u; }
        if (ctx->pc != 0x1A1A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A18u; }
        if (ctx->pc != 0x1A1A18u) { return; }
    }
    ctx->pc = 0x1A1A18u;
label_1a1a18:
    // 0x1a1a18: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x1A1A18u;
    SET_GPR_U32(ctx, 31, 0x1A1A20u);
    ctx->pc = 0x1A1A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A18u;
            // 0x1a1a1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A20u; }
        if (ctx->pc != 0x1A1A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A20u; }
        if (ctx->pc != 0x1A1A20u) { return; }
    }
    ctx->pc = 0x1A1A20u;
label_1a1a20:
    // 0x1a1a20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1A20u;
    {
        const bool branch_taken_0x1a1a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a20) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A1A28u;
label_1a1a28:
    // 0x1a1a28: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1A28u;
    {
        const bool branch_taken_0x1a1a28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A28u;
            // 0x1a1a2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a28) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A1A30u;
    // 0x1a1a30: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x1A1A30u;
    SET_GPR_U32(ctx, 31, 0x1A1A38u);
    ctx->pc = 0x1A1A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A30u;
            // 0x1a1a34: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A38u; }
        if (ctx->pc != 0x1A1A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A38u; }
        if (ctx->pc != 0x1A1A38u) { return; }
    }
    ctx->pc = 0x1A1A38u;
label_1a1a38:
    // 0x1a1a38: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x1A1A38u;
    SET_GPR_U32(ctx, 31, 0x1A1A40u);
    ctx->pc = 0x1A1A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A38u;
            // 0x1a1a3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A40u; }
        if (ctx->pc != 0x1A1A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A40u; }
        if (ctx->pc != 0x1A1A40u) { return; }
    }
    ctx->pc = 0x1A1A40u;
label_1a1a40:
    // 0x1a1a40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a1a40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a1a44: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x1a1a44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a1a48: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1A1A48u;
    {
        const bool branch_taken_0x1a1a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A48u;
            // 0x1a1a4c: 0x26b5006c  addiu       $s5, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a48) {
            ctx->pc = 0x1A1990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1990;
        }
    }
    ctx->pc = 0x1A1A50u;
label_1a1a50:
    // 0x1a1a50: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a1a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a1a54: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a1a54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1a58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a1a58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1a5c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a1a5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1a60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a1a60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1a64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a1a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1a68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a1a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A74u;
            // 0x1a1a78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1A7Cu;
}
