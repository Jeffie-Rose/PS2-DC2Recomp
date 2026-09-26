#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckGetItemLimmitOver__Fii
// Address: 0x1a1490 - 0x1a1658
void CheckGetItemLimmitOver__Fii_0x1a1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckGetItemLimmitOver__Fii_0x1a1490");
#endif

    switch (ctx->pc) {
        case 0x1a14c4u: goto label_1a14c4;
        case 0x1a14e0u: goto label_1a14e0;
        case 0x1a14ecu: goto label_1a14ec;
        case 0x1a1534u: goto label_1a1534;
        case 0x1a156cu: goto label_1a156c;
        case 0x1a1584u: goto label_1a1584;
        case 0x1a15b0u: goto label_1a15b0;
        case 0x1a15f4u: goto label_1a15f4;
        case 0x1a161cu: goto label_1a161c;
        default: break;
    }

    ctx->pc = 0x1a1490u;

    // 0x1a1490: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a1490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a1494: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a1494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a1498: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a1498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a149c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a14a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a14a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a14a4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1a14a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a14a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a14ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a14acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a14b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a14b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a14b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a14b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a14b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a14b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14bc: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A14BCu;
    SET_GPR_U32(ctx, 31, 0x1A14C4u);
    ctx->pc = 0x1A14C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14BCu;
            // 0x1a14c0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14C4u; }
        if (ctx->pc != 0x1A14C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14C4u; }
        if (ctx->pc != 0x1A14C4u) { return; }
    }
    ctx->pc = 0x1A14C4u;
label_1a14c4:
    // 0x1a14c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a14c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14c8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A14C8u;
    {
        const bool branch_taken_0x1a14c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A14CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14C8u;
            // 0x1a14cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14c8) {
            ctx->pc = 0x1A14D8u;
            goto label_1a14d8;
        }
    }
    ctx->pc = 0x1A14D0u;
    // 0x1a14d0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1A14D0u;
    {
        const bool branch_taken_0x1a14d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14D0u;
            // 0x1a14d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14d0) {
            ctx->pc = 0x1A162Cu;
            goto label_1a162c;
        }
    }
    ctx->pc = 0x1A14D8u;
label_1a14d8:
    // 0x1a14d8: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x1A14D8u;
    SET_GPR_U32(ctx, 31, 0x1A14E0u);
    ctx->pc = 0x1A14DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14D8u;
            // 0x1a14dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14E0u; }
        if (ctx->pc != 0x1A14E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14E0u; }
        if (ctx->pc != 0x1A14E0u) { return; }
    }
    ctx->pc = 0x1A14E0u;
label_1a14e0:
    // 0x1a14e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a14e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14e4: 0xc065708  jal         func_195C20
    ctx->pc = 0x1A14E4u;
    SET_GPR_U32(ctx, 31, 0x1A14ECu);
    ctx->pc = 0x1A14E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14E4u;
            // 0x1a14e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14ECu; }
        if (ctx->pc != 0x1A14ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14ECu; }
        if (ctx->pc != 0x1A14ECu) { return; }
    }
    ctx->pc = 0x1A14ECu;
label_1a14ec:
    // 0x1a14ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a14ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14f0: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x1a14f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1a14f4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1a14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a14f8: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x1a14f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a14fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A14FCu;
    {
        const bool branch_taken_0x1a14fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A14FCu;
            // 0x1a1500: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14fc) {
            ctx->pc = 0x1A1508u;
            goto label_1a1508;
        }
    }
    ctx->pc = 0x1A1504u;
    // 0x1a1504: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a1504u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1508:
    // 0x1a1508: 0x24020132  addiu       $v0, $zero, 0x132
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1a150c: 0x12c20005  beq         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A150Cu;
    {
        const bool branch_taken_0x1a150c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A150Cu;
            // 0x1a1510: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a150c) {
            ctx->pc = 0x1A1524u;
            goto label_1a1524;
        }
    }
    ctx->pc = 0x1A1514u;
    // 0x1a1514: 0x24020131  addiu       $v0, $zero, 0x131
    ctx->pc = 0x1a1514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x1a1518: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1518u;
    {
        const bool branch_taken_0x1a1518 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1518) {
            ctx->pc = 0x1A152Cu;
            goto label_1a152c;
        }
    }
    ctx->pc = 0x1A1520u;
    // 0x1a1520: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a1520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a1524:
    // 0x1a1524: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1A1524u;
    {
        const bool branch_taken_0x1a1524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1524u;
            // 0x1a1528: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1524) {
            ctx->pc = 0x1A1630u;
            goto label_1a1630;
        }
    }
    ctx->pc = 0x1A152Cu;
label_1a152c:
    // 0x1a152c: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x1A152Cu;
    SET_GPR_U32(ctx, 31, 0x1A1534u);
    ctx->pc = 0x1A1530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A152Cu;
            // 0x1a1530: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1534u; }
        if (ctx->pc != 0x1A1534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1534u; }
        if (ctx->pc != 0x1A1534u) { return; }
    }
    ctx->pc = 0x1A1534u;
label_1a1534:
    // 0x1a1534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1538: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1538u;
    {
        const bool branch_taken_0x1a1538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1538u;
            // 0x1a153c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1538) {
            ctx->pc = 0x1A1564u;
            goto label_1a1564;
        }
    }
    ctx->pc = 0x1A1540u;
    // 0x1a1540: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1544: 0x14430033  bne         $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A1544u;
    {
        const bool branch_taken_0x1a1544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1544u;
            // 0x1a1548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1544) {
            ctx->pc = 0x1A1614u;
            goto label_1a1614;
        }
    }
    ctx->pc = 0x1A154Cu;
    // 0x1a154c: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x1a154cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1a1550: 0x12c2002f  beq         $s6, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A1550u;
    {
        const bool branch_taken_0x1a1550 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1550u;
            // 0x1a1554: 0x2402017f  addiu       $v0, $zero, 0x17F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1550) {
            ctx->pc = 0x1A1610u;
            goto label_1a1610;
        }
    }
    ctx->pc = 0x1A1558u;
    // 0x1a1558: 0x12c2002d  beq         $s6, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A1558u;
    {
        const bool branch_taken_0x1a1558 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1558) {
            ctx->pc = 0x1A1610u;
            goto label_1a1610;
        }
    }
    ctx->pc = 0x1A1560u;
    // 0x1a1560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1564:
    // 0x1a1564: 0xc068644  jal         func_1A1910
    ctx->pc = 0x1A1564u;
    SET_GPR_U32(ctx, 31, 0x1A156Cu);
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A156Cu; }
        if (ctx->pc != 0x1A156Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A156Cu; }
        if (ctx->pc != 0x1A156Cu) { return; }
    }
    ctx->pc = 0x1A156Cu;
label_1a156c:
    // 0x1a156c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a156cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1570: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a1570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1574: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1a1574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a1578: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1578u;
    {
        const bool branch_taken_0x1a1578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1578u;
            // 0x1a157c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1578) {
            ctx->pc = 0x1A15C8u;
            goto label_1a15c8;
        }
    }
    ctx->pc = 0x1A1580u;
    // 0x1a1580: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a1580u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1584:
    // 0x1a1584: 0x2152021  addu        $a0, $s0, $s5
    ctx->pc = 0x1a1584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1a1588: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1a1588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a158c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A158Cu;
    {
        const bool branch_taken_0x1a158c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a158c) {
            ctx->pc = 0x1A15A0u;
            goto label_1a15a0;
        }
    }
    ctx->pc = 0x1A1594u;
    // 0x1a1594: 0x8622001e  lh          $v0, 0x1E($s1)
    ctx->pc = 0x1a1594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x1a1598: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1598u;
    {
        const bool branch_taken_0x1a1598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1598u;
            // 0x1a159c: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1598) {
            ctx->pc = 0x1A15B4u;
            goto label_1a15b4;
        }
    }
    ctx->pc = 0x1A15A0u;
label_1a15a0:
    // 0x1a15a0: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A15A0u;
    {
        const bool branch_taken_0x1a15a0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a15a0) {
            ctx->pc = 0x1A15B4u;
            goto label_1a15b4;
        }
    }
    ctx->pc = 0x1A15A8u;
    // 0x1a15a8: 0xc065c9c  jal         func_197270
    ctx->pc = 0x1A15A8u;
    SET_GPR_U32(ctx, 31, 0x1A15B0u);
    ctx->pc = 0x197270u;
    if (runtime->hasFunction(0x197270u)) {
        auto targetFn = runtime->lookupFunction(0x197270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15B0u; }
        if (ctx->pc != 0x1A15B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStackRemain__13CGameDataUsedFv_0x197270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15B0u; }
        if (ctx->pc != 0x1A15B0u) { return; }
    }
    ctx->pc = 0x1A15B0u;
label_1a15b0:
    // 0x1a15b0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1a15b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a15b4:
    // 0x1a15b4: 0x0  nop
    ctx->pc = 0x1a15b4u;
    // NOP
    // 0x1a15b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a15b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a15bc: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x1a15bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a15c0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A15C0u;
    {
        const bool branch_taken_0x1a15c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A15C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15C0u;
            // 0x1a15c4: 0x26b5006c  addiu       $s5, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15c0) {
            ctx->pc = 0x1A1584u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1584;
        }
    }
    ctx->pc = 0x1A15C8u;
label_1a15c8:
    // 0x1a15c8: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x1a15c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1a15cc: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x1a15ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1a15d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A15D0u;
    {
        const bool branch_taken_0x1a15d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15D0u;
            // 0x1a15d4: 0x277082a  slt         $at, $s3, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15d0) {
            ctx->pc = 0x1A15E0u;
            goto label_1a15e0;
        }
    }
    ctx->pc = 0x1A15D8u;
    // 0x1a15d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a15d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a15dc: 0x277082a  slt         $at, $s3, $s7
    ctx->pc = 0x1a15dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1a15e0:
    // 0x1a15e0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A15E0u;
    {
        const bool branch_taken_0x1a15e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15E0u;
            // 0x1a15e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15e0) {
            ctx->pc = 0x1A15ECu;
            goto label_1a15ec;
        }
    }
    ctx->pc = 0x1A15E8u;
    // 0x1a15e8: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x1a15e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a15ec:
    // 0x1a15ec: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x1A15ECu;
    SET_GPR_U32(ctx, 31, 0x1A15F4u);
    ctx->pc = 0x1A15F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15ECu;
            // 0x1a15f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15F4u; }
        if (ctx->pc != 0x1A15F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A15F4u; }
        if (ctx->pc != 0x1A15F4u) { return; }
    }
    ctx->pc = 0x1A15F4u;
label_1a15f4:
    // 0x1a15f4: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1a15f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1a15f8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1a15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1a15fc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a15fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1600: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1600u;
    {
        const bool branch_taken_0x1a1600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1600u;
            // 0x1a1604: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1600) {
            ctx->pc = 0x1A162Cu;
            goto label_1a162c;
        }
    }
    ctx->pc = 0x1A1608u;
    // 0x1a1608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1608u;
    {
        const bool branch_taken_0x1a1608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A160Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1608u;
            // 0x1a160c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1608) {
            ctx->pc = 0x1A1628u;
            goto label_1a1628;
        }
    }
    ctx->pc = 0x1A1610u;
label_1a1610:
    // 0x1a1610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1614:
    // 0x1a1614: 0xc067610  jal         func_19D840
    ctx->pc = 0x1A1614u;
    SET_GPR_U32(ctx, 31, 0x1A161Cu);
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A161Cu; }
        if (ctx->pc != 0x1A161Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A161Cu; }
        if (ctx->pc != 0x1A161Cu) { return; }
    }
    ctx->pc = 0x1A161Cu;
label_1a161c:
    // 0x1a161c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A161Cu;
    {
        const bool branch_taken_0x1a161c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a161c) {
            ctx->pc = 0x1A1628u;
            goto label_1a1628;
        }
    }
    ctx->pc = 0x1A1624u;
    // 0x1a1624: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a1624u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1628:
    // 0x1a1628: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1a1628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a162c:
    // 0x1a162c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a1630:
    // 0x1a1630: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a1630u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1634: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a1634u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1638: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a1638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a163c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a163cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1640: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a1640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a1644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a164c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a164cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1650: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1650u;
            // 0x1a1654: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1658u;
}
