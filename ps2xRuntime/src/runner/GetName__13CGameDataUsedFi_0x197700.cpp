#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetName__13CGameDataUsedFi
// Address: 0x197700 - 0x1979e8
void GetName__13CGameDataUsedFi_0x197700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetName__13CGameDataUsedFi_0x197700");
#endif

    switch (ctx->pc) {
        case 0x197740u: goto label_197740;
        case 0x1977bcu: goto label_1977bc;
        case 0x1977d4u: goto label_1977d4;
        case 0x197818u: goto label_197818;
        case 0x197828u: goto label_197828;
        case 0x197848u: goto label_197848;
        case 0x197874u: goto label_197874;
        case 0x1978a0u: goto label_1978a0;
        case 0x1978b4u: goto label_1978b4;
        case 0x1978ccu: goto label_1978cc;
        case 0x1978d4u: goto label_1978d4;
        case 0x1978e4u: goto label_1978e4;
        case 0x197908u: goto label_197908;
        case 0x197918u: goto label_197918;
        case 0x197928u: goto label_197928;
        case 0x197930u: goto label_197930;
        case 0x197964u: goto label_197964;
        case 0x1979b8u: goto label_1979b8;
        default: break;
    }

    ctx->pc = 0x197700u;

    // 0x197700: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x197700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x197704: 0x24060061  addiu       $a2, $zero, 0x61
    ctx->pc = 0x197704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x197708: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x197708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19770c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x197710: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x197710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x197714: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x197714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x197718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19771c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19771cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197720: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x197724: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x197724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x197728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19772c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x19772cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x197730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197738: 0xc049c86  jal         func_127218
    ctx->pc = 0x197738u;
    SET_GPR_U32(ctx, 31, 0x197740u);
    ctx->pc = 0x19773Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197738u;
            // 0x19773c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197740u; }
        if (ctx->pc != 0x197740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197740u; }
        if (ctx->pc != 0x197740u) { return; }
    }
    ctx->pc = 0x197740u;
label_197740:
    // 0x197740: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x197740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197744: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x197744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x197748: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x197748u;
    {
        const bool branch_taken_0x197748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19774Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197748u;
            // 0x19774c: 0x26b00012  addiu       $s0, $s5, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197748) {
            ctx->pc = 0x1977C4u;
            goto label_1977c4;
        }
    }
    ctx->pc = 0x197750u;
    // 0x197750: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197754: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197754u;
    {
        const bool branch_taken_0x197754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197754u;
            // 0x197758: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197754) {
            ctx->pc = 0x19779Cu;
            goto label_19779c;
        }
    }
    ctx->pc = 0x19775Cu;
    // 0x19775c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19775Cu;
    {
        const bool branch_taken_0x19775c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19775Cu;
            // 0x197760: 0x26b00010  addiu       $s0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19775c) {
            ctx->pc = 0x197794u;
            goto label_197794;
        }
    }
    ctx->pc = 0x197764u;
    // 0x197764: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x197764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197768: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x197768u;
    {
        const bool branch_taken_0x197768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197768u;
            // 0x19776c: 0x26b0003c  addiu       $s0, $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197768) {
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x197770u;
    // 0x197770: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197774: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197774u;
    {
        const bool branch_taken_0x197774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197774u;
            // 0x197778: 0x26b00043  addiu       $s0, $s5, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197774) {
            ctx->pc = 0x197784u;
            goto label_197784;
        }
    }
    ctx->pc = 0x19777Cu;
    // 0x19777c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19777Cu;
    {
        const bool branch_taken_0x19777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19777Cu;
            // 0x197780: 0x86a40002  lh          $a0, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19777c) {
            ctx->pc = 0x1977CCu;
            goto label_1977cc;
        }
    }
    ctx->pc = 0x197784u;
label_197784:
    // 0x197784: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x197784u;
    {
        const bool branch_taken_0x197784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197784) {
            ctx->pc = 0x1977D8u;
            goto label_1977d8;
        }
    }
    ctx->pc = 0x19778Cu;
label_19778c:
    // 0x19778c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19778Cu;
    {
        const bool branch_taken_0x19778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19778c) {
            ctx->pc = 0x1977D8u;
            goto label_1977d8;
        }
    }
    ctx->pc = 0x197794u;
label_197794:
    // 0x197794: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x197794u;
    {
        const bool branch_taken_0x197794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197794) {
            ctx->pc = 0x1977D8u;
            goto label_1977d8;
        }
    }
    ctx->pc = 0x19779Cu;
label_19779c:
    // 0x19779c: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x19779cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1977a0: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x1977a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1977a4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1977A4u;
    {
        const bool branch_taken_0x1977a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1977A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1977A4u;
            // 0x1977a8: 0x26b00030  addiu       $s0, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977a4) {
            ctx->pc = 0x1977B4u;
            goto label_1977b4;
        }
    }
    ctx->pc = 0x1977ACu;
    // 0x1977ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1977ACu;
    {
        const bool branch_taken_0x1977ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977ac) {
            ctx->pc = 0x1977D8u;
            goto label_1977d8;
        }
    }
    ctx->pc = 0x1977B4u;
label_1977b4:
    // 0x1977b4: 0xc065810  jal         func_196040
    ctx->pc = 0x1977B4u;
    SET_GPR_U32(ctx, 31, 0x1977BCu);
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1977BCu; }
        if (ctx->pc != 0x1977BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1977BCu; }
        if (ctx->pc != 0x1977BCu) { return; }
    }
    ctx->pc = 0x1977BCu;
label_1977bc:
    // 0x1977bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1977BCu;
    {
        const bool branch_taken_0x1977bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1977BCu;
            // 0x1977c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977bc) {
            ctx->pc = 0x1977D8u;
            goto label_1977d8;
        }
    }
    ctx->pc = 0x1977C4u;
label_1977c4:
    // 0x1977c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1977C4u;
    {
        const bool branch_taken_0x1977c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977c4) {
            ctx->pc = 0x1977D8u;
            goto label_1977d8;
        }
    }
    ctx->pc = 0x1977CCu;
label_1977cc:
    // 0x1977cc: 0xc065810  jal         func_196040
    ctx->pc = 0x1977CCu;
    SET_GPR_U32(ctx, 31, 0x1977D4u);
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1977D4u; }
        if (ctx->pc != 0x1977D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1977D4u; }
        if (ctx->pc != 0x1977D4u) { return; }
    }
    ctx->pc = 0x1977D4u;
label_1977d4:
    // 0x1977d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1977d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1977d8:
    // 0x1977d8: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1977D8u;
    {
        const bool branch_taken_0x1977d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1977D8u;
            // 0x1977dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977d8) {
            ctx->pc = 0x197848u;
            goto label_197848;
        }
    }
    ctx->pc = 0x1977E0u;
    // 0x1977e0: 0x16c20011  bne         $s6, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1977E0u;
    {
        const bool branch_taken_0x1977e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1977e0) {
            ctx->pc = 0x197828u;
            goto label_197828;
        }
    }
    ctx->pc = 0x1977E8u;
    // 0x1977e8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1977e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1977ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1977ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1977f0: 0x82a50005  lb          $a1, 0x5($s5)
    ctx->pc = 0x1977f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x1977f4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1977f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1977f8: 0x244261f0  addiu       $v0, $v0, 0x61F0
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25072));
    // 0x1977fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1977fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x197800: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x197804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197808: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19780c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19780cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197810: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x197810u;
    SET_GPR_U32(ctx, 31, 0x197818u);
    ctx->pc = 0x197814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197810u;
            // 0x197814: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197818u; }
        if (ctx->pc != 0x197818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197818u; }
        if (ctx->pc != 0x197818u) { return; }
    }
    ctx->pc = 0x197818u;
label_197818:
    // 0x197818: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x197818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x19781c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19781cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197820: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x197820u;
    SET_GPR_U32(ctx, 31, 0x197828u);
    ctx->pc = 0x197824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197820u;
            // 0x197824: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197828u; }
        if (ctx->pc != 0x197828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197828u; }
        if (ctx->pc != 0x197828u) { return; }
    }
    ctx->pc = 0x197828u;
label_197828:
    // 0x197828: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x197828u;
    {
        const bool branch_taken_0x197828 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x19782Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197828u;
            // 0x19782c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197828) {
            ctx->pc = 0x19783Cu;
            goto label_19783c;
        }
    }
    ctx->pc = 0x197830u;
    // 0x197830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197834: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197834u;
    {
        const bool branch_taken_0x197834 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x197834) {
            ctx->pc = 0x197848u;
            goto label_197848;
        }
    }
    ctx->pc = 0x19783Cu;
label_19783c:
    // 0x19783c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19783cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197840: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x197840u;
    SET_GPR_U32(ctx, 31, 0x197848u);
    ctx->pc = 0x197844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197840u;
            // 0x197844: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197848u; }
        if (ctx->pc != 0x197848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197848u; }
        if (ctx->pc != 0x197848u) { return; }
    }
    ctx->pc = 0x197848u;
label_197848:
    // 0x197848: 0x1ac0004b  blez        $s6, . + 4 + (0x4B << 2)
    ctx->pc = 0x197848u;
    {
        const bool branch_taken_0x197848 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x197848) {
            ctx->pc = 0x197978u;
            goto label_197978;
        }
    }
    ctx->pc = 0x197850u;
    // 0x197850: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197854: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197858: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197858u;
    {
        const bool branch_taken_0x197858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197858u;
            // 0x19785c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197858) {
            ctx->pc = 0x19786Cu;
            goto label_19786c;
        }
    }
    ctx->pc = 0x197860u;
    // 0x197860: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197864: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x197864u;
    {
        const bool branch_taken_0x197864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x197864) {
            ctx->pc = 0x197978u;
            goto label_197978;
        }
    }
    ctx->pc = 0x19786Cu;
label_19786c:
    // 0x19786c: 0xc065c74  jal         func_1971D0
    ctx->pc = 0x19786Cu;
    SET_GPR_U32(ctx, 31, 0x197874u);
    ctx->pc = 0x1971D0u;
    if (runtime->hasFunction(0x1971D0u)) {
        auto targetFn = runtime->lookupFunction(0x1971D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197874u; }
        if (ctx->pc != 0x197874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLevel__13CGameDataUsedFv_0x1971d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197874u; }
        if (ctx->pc != 0x197874u) { return; }
    }
    ctx->pc = 0x197874u;
label_197874:
    // 0x197874: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197878: 0x1a20003f  blez        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x197878u;
    {
        const bool branch_taken_0x197878 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x197878) {
            ctx->pc = 0x197978u;
            goto label_197978;
        }
    }
    ctx->pc = 0x197880u;
    // 0x197880: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x197880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x197884: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x197884u;
    {
        const bool branch_taken_0x197884 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x197888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197884u;
            // 0x197888: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197884) {
            ctx->pc = 0x1978BCu;
            goto label_1978bc;
        }
    }
    ctx->pc = 0x19788Cu;
    // 0x19788c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x19788cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x197890: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x197890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x197894: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x197894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x197898: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x197898u;
    SET_GPR_U32(ctx, 31, 0x1978A0u);
    ctx->pc = 0x19789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197898u;
            // 0x19789c: 0x24a55858  addiu       $a1, $a1, 0x5858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978A0u; }
        if (ctx->pc != 0x1978A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978A0u; }
        if (ctx->pc != 0x1978A0u) { return; }
    }
    ctx->pc = 0x1978A0u;
label_1978a0:
    // 0x1978a0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1978a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1978a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978a8: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1978a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1978ac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1978ACu;
    SET_GPR_U32(ctx, 31, 0x1978B4u);
    ctx->pc = 0x1978B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1978ACu;
            // 0x1978b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978B4u; }
        if (ctx->pc != 0x1978B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978B4u; }
        if (ctx->pc != 0x1978B4u) { return; }
    }
    ctx->pc = 0x1978B4u;
label_1978b4:
    // 0x1978b4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1978B4u;
    {
        const bool branch_taken_0x1978b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1978b4) {
            ctx->pc = 0x197978u;
            goto label_197978;
        }
    }
    ctx->pc = 0x1978BCu;
label_1978bc:
    // 0x1978bc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1978bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1978c0: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1978c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1978c4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1978C4u;
    SET_GPR_U32(ctx, 31, 0x1978CCu);
    ctx->pc = 0x1978C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1978C4u;
            // 0x1978c8: 0x24a55860  addiu       $a1, $a1, 0x5860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978CCu; }
        if (ctx->pc != 0x1978CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978CCu; }
        if (ctx->pc != 0x1978CCu) { return; }
    }
    ctx->pc = 0x1978CCu;
label_1978cc:
    // 0x1978cc: 0xc0945b0  jal         func_2516C0
    ctx->pc = 0x1978CCu;
    SET_GPR_U32(ctx, 31, 0x1978D4u);
    ctx->pc = 0x1978D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1978CCu;
            // 0x1978d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2516C0u;
    if (runtime->hasFunction(0x2516C0u)) {
        auto targetFn = runtime->lookupFunction(0x2516C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978D4u; }
        if (ctx->pc != 0x1978D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumberKeta__Fi_0x2516c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978D4u; }
        if (ctx->pc != 0x1978D4u) { return; }
    }
    ctx->pc = 0x1978D4u;
label_1978d4:
    // 0x1978d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1978d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978d8: 0x1a400027  blez        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1978D8u;
    {
        const bool branch_taken_0x1978d8 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1978d8) {
            ctx->pc = 0x197978u;
            goto label_197978;
        }
    }
    ctx->pc = 0x1978E0u;
    // 0x1978e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1978e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1978e4:
    // 0x1978e4: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1978E4u;
    {
        const bool branch_taken_0x1978e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1978E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1978E4u;
            // 0x1978e8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978e4) {
            ctx->pc = 0x197910u;
            goto label_197910;
        }
    }
    ctx->pc = 0x1978ECu;
    // 0x1978ec: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1978ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1978f0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1978f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1978f4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1978f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1978f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1978f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1978fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1978fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197900: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x197900u;
    SET_GPR_U32(ctx, 31, 0x197908u);
    ctx->pc = 0x197904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197900u;
            // 0x197904: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197908u; }
        if (ctx->pc != 0x197908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197908u; }
        if (ctx->pc != 0x197908u) { return; }
    }
    ctx->pc = 0x197908u;
label_197908:
    // 0x197908: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x197908u;
    {
        const bool branch_taken_0x197908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19790Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197908u;
            // 0x19790c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197908) {
            ctx->pc = 0x197970u;
            goto label_197970;
        }
    }
    ctx->pc = 0x197910u;
label_197910:
    // 0x197910: 0xc0a215c  jal         func_288570
    ctx->pc = 0x197910u;
    SET_GPR_U32(ctx, 31, 0x197918u);
    ctx->pc = 0x197914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197910u;
            // 0x197914: 0x2644ffff  addiu       $a0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197918u; }
        if (ctx->pc != 0x197918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197918u; }
        if (ctx->pc != 0x197918u) { return; }
    }
    ctx->pc = 0x197918u;
label_197918:
    // 0x197918: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x197918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
    // 0x19791c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197920: 0xc047ae6  jal         func_11EB98
    ctx->pc = 0x197920u;
    SET_GPR_U32(ctx, 31, 0x197928u);
    ctx->pc = 0x197924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197920u;
            // 0x197924: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB98u;
    if (runtime->hasFunction(0x11EB98u)) {
        auto targetFn = runtime->lookupFunction(0x11EB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197928u; }
        if (ctx->pc != 0x197928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pow_0x11eb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197928u; }
        if (ctx->pc != 0x197928u) { return; }
    }
    ctx->pc = 0x197928u;
label_197928:
    // 0x197928: 0xc0a218a  jal         func_288628
    ctx->pc = 0x197928u;
    SET_GPR_U32(ctx, 31, 0x197930u);
    ctx->pc = 0x19792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197928u;
            // 0x19792c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197930u; }
        if (ctx->pc != 0x197930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197930u; }
        if (ctx->pc != 0x197930u) { return; }
    }
    ctx->pc = 0x197930u;
label_197930:
    // 0x197930: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x197930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197934: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x197934u;
    {
        const bool branch_taken_0x197934 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x197938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197934u;
            // 0x197938: 0x233001a  div         $zero, $s1, $s3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x197934) {
            ctx->pc = 0x197940u;
            goto label_197940;
        }
    }
    ctx->pc = 0x19793Cu;
    // 0x19793c: 0x1cd  break       0, 7
    ctx->pc = 0x19793cu;
    runtime->handleBreak(rdram, ctx);
label_197940:
    // 0x197940: 0xa012  mflo        $s4
    ctx->pc = 0x197940u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x197944: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x197944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x197948: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x197948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x19794c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x19794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x197950: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x197950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x197954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197958: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x197958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19795c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x19795Cu;
    SET_GPR_U32(ctx, 31, 0x197964u);
    ctx->pc = 0x197960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19795Cu;
            // 0x197960: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197964u; }
        if (ctx->pc != 0x197964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197964u; }
        if (ctx->pc != 0x197964u) { return; }
    }
    ctx->pc = 0x197964u;
label_197964:
    // 0x197964: 0x2931018  mult        $v0, $s4, $s3
    ctx->pc = 0x197964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197968: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x197968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19796c: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x19796cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_197970:
    // 0x197970: 0x1e40ffdc  bgtz        $s2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x197970u;
    {
        const bool branch_taken_0x197970 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x197974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197970u;
            // 0x197974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197970) {
            ctx->pc = 0x1978E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1978e4;
        }
    }
    ctx->pc = 0x197978u;
label_197978:
    // 0x197978: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x197978u;
    {
        const bool branch_taken_0x197978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197978u;
            // 0x19797c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197978) {
            ctx->pc = 0x1979B8u;
            goto label_1979b8;
        }
    }
    ctx->pc = 0x197980u;
    // 0x197980: 0x16c2000d  bne         $s6, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x197980u;
    {
        const bool branch_taken_0x197980 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x197980) {
            ctx->pc = 0x1979B8u;
            goto label_1979b8;
        }
    }
    ctx->pc = 0x197988u;
    // 0x197988: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x197988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x19798c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x197990: 0x82a50005  lb          $a1, 0x5($s5)
    ctx->pc = 0x197990u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x197994: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x197994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x197998: 0x244261f4  addiu       $v0, $v0, 0x61F4
    ctx->pc = 0x197998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25076));
    // 0x19799c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19799cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1979a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1979a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1979a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1979a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1979a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1979a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1979ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1979acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1979b0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1979B0u;
    SET_GPR_U32(ctx, 31, 0x1979B8u);
    ctx->pc = 0x1979B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1979B0u;
            // 0x1979b4: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979B8u; }
        if (ctx->pc != 0x1979B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979B8u; }
        if (ctx->pc != 0x1979B8u) { return; }
    }
    ctx->pc = 0x1979B8u;
label_1979b8:
    // 0x1979b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1979b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1979bc: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1979bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x1979c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1979c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1979c4: 0x2442b060  addiu       $v0, $v0, -0x4FA0
    ctx->pc = 0x1979c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x1979c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1979c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1979cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1979ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1979d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1979d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1979d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1979d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1979d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1979d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1979dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1979dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1979e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1979E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1979E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1979E0u;
            // 0x1979e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1979E8u;
}
