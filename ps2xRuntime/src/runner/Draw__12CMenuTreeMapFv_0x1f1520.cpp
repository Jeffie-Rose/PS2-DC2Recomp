#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CMenuTreeMapFv
// Address: 0x1f1520 - 0x1f1bd8
void Draw__12CMenuTreeMapFv_0x1f1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CMenuTreeMapFv_0x1f1520");
#endif

    switch (ctx->pc) {
        case 0x1f1564u: goto label_1f1564;
        case 0x1f15c0u: goto label_1f15c0;
        case 0x1f15ccu: goto label_1f15cc;
        case 0x1f15d8u: goto label_1f15d8;
        case 0x1f16c4u: goto label_1f16c4;
        case 0x1f16ecu: goto label_1f16ec;
        case 0x1f1734u: goto label_1f1734;
        case 0x1f1748u: goto label_1f1748;
        case 0x1f175cu: goto label_1f175c;
        case 0x1f1778u: goto label_1f1778;
        case 0x1f179cu: goto label_1f179c;
        case 0x1f17e0u: goto label_1f17e0;
        case 0x1f17f8u: goto label_1f17f8;
        case 0x1f1824u: goto label_1f1824;
        case 0x1f182cu: goto label_1f182c;
        case 0x1f1834u: goto label_1f1834;
        case 0x1f183cu: goto label_1f183c;
        case 0x1f184cu: goto label_1f184c;
        case 0x1f1858u: goto label_1f1858;
        case 0x1f186cu: goto label_1f186c;
        case 0x1f187cu: goto label_1f187c;
        case 0x1f1890u: goto label_1f1890;
        case 0x1f18a0u: goto label_1f18a0;
        case 0x1f18e0u: goto label_1f18e0;
        case 0x1f18ecu: goto label_1f18ec;
        case 0x1f1900u: goto label_1f1900;
        case 0x1f1908u: goto label_1f1908;
        case 0x1f191cu: goto label_1f191c;
        case 0x1f1924u: goto label_1f1924;
        case 0x1f1954u: goto label_1f1954;
        case 0x1f1a38u: goto label_1f1a38;
        case 0x1f1a54u: goto label_1f1a54;
        case 0x1f1a68u: goto label_1f1a68;
        case 0x1f1a98u: goto label_1f1a98;
        case 0x1f1ab0u: goto label_1f1ab0;
        case 0x1f1adcu: goto label_1f1adc;
        case 0x1f1af4u: goto label_1f1af4;
        case 0x1f1afcu: goto label_1f1afc;
        case 0x1f1b08u: goto label_1f1b08;
        case 0x1f1b14u: goto label_1f1b14;
        case 0x1f1b20u: goto label_1f1b20;
        case 0x1f1b38u: goto label_1f1b38;
        case 0x1f1b40u: goto label_1f1b40;
        case 0x1f1b6cu: goto label_1f1b6c;
        case 0x1f1b74u: goto label_1f1b74;
        case 0x1f1b88u: goto label_1f1b88;
        case 0x1f1bacu: goto label_1f1bac;
        case 0x1f1bb8u: goto label_1f1bb8;
        default: break;
    }

    ctx->pc = 0x1f1520u;

    // 0x1f1520: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1f1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1f1524: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f1528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f1528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f152c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f152cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f1530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f1530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f1534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f1534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f1538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f1538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f153c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1f153cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f1540: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1f1540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1f1544: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1544u;
    {
        const bool branch_taken_0x1f1544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1544u;
            // 0x1f1548: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1544) {
            ctx->pc = 0x1F155Cu;
            goto label_1f155c;
        }
    }
    ctx->pc = 0x1F154Cu;
    // 0x1f154c: 0x8604011a  lh          $a0, 0x11A($s0)
    ctx->pc = 0x1f154cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x1f1550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1554: 0x10830198  beq         $a0, $v1, . + 4 + (0x198 << 2)
    ctx->pc = 0x1F1554u;
    {
        const bool branch_taken_0x1f1554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1554) {
            ctx->pc = 0x1F1BB8u;
            goto label_1f1bb8;
        }
    }
    ctx->pc = 0x1F155Cu;
label_1f155c:
    // 0x1f155c: 0xc07b868  jal         func_1EE1A0
    ctx->pc = 0x1F155Cu;
    SET_GPR_U32(ctx, 31, 0x1F1564u);
    ctx->pc = 0x1F1560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F155Cu;
            // 0x1f1560: 0x8f848eb0  lw          $a0, -0x7150($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1A0u;
    if (runtime->hasFunction(0x1EE1A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1564u; }
        if (ctx->pc != 0x1F1564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CDngFreeMapFv_0x1ee1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1564u; }
        if (ctx->pc != 0x1F1564u) { return; }
    }
    ctx->pc = 0x1F1564u;
label_1f1564:
    // 0x1f1564: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1568: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1568u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f156c: 0x8c2217c0  lw          $v0, 0x17C0($at)
    ctx->pc = 0x1f156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6080)));
    // 0x1f1570: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1570u;
    {
        const bool branch_taken_0x1f1570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1570u;
            // 0x1f1574: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1570) {
            ctx->pc = 0x1F1594u;
            goto label_1f1594;
        }
    }
    ctx->pc = 0x1F1578u;
    // 0x1f1578: 0x93828eb4  lbu         $v0, -0x714C($gp)
    ctx->pc = 0x1f1578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938292)));
    // 0x1f157c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F157Cu;
    {
        const bool branch_taken_0x1f157c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f157c) {
            ctx->pc = 0x1F1594u;
            goto label_1f1594;
        }
    }
    ctx->pc = 0x1F1584u;
    // 0x1f1584: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x1f1584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f1588: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1588u;
    {
        const bool branch_taken_0x1f1588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1588) {
            ctx->pc = 0x1F1594u;
            goto label_1f1594;
        }
    }
    ctx->pc = 0x1F1590u;
    // 0x1f1590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1594:
    // 0x1f1594: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x1f1594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x1f1598: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1598u;
    {
        const bool branch_taken_0x1f1598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1598u;
            // 0x1f159c: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1598) {
            ctx->pc = 0x1F15A4u;
            goto label_1f15a4;
        }
    }
    ctx->pc = 0x1F15A0u;
    // 0x1f15a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f15a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f15a4:
    // 0x1f15a4: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1F15A4u;
    {
        const bool branch_taken_0x1f15a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F15A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15A4u;
            // 0x1f15a8: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15a4) {
            ctx->pc = 0x1F1708u;
            goto label_1f1708;
        }
    }
    ctx->pc = 0x1F15ACu;
    // 0x1f15ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f15acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f15b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f15b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f15b4: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x1f15b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1f15b8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1F15B8u;
    SET_GPR_U32(ctx, 31, 0x1F15C0u);
    ctx->pc = 0x1F15BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15B8u;
            // 0x1f15bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F15C0u; }
        if (ctx->pc != 0x1F15C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F15C0u; }
        if (ctx->pc != 0x1F15C0u) { return; }
    }
    ctx->pc = 0x1F15C0u;
label_1f15c0:
    // 0x1f15c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f15c4: 0xc087898  jal         func_21E260
    ctx->pc = 0x1F15C4u;
    SET_GPR_U32(ctx, 31, 0x1F15CCu);
    ctx->pc = 0x1F15C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15C4u;
            // 0x1f15c8: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F15CCu; }
        if (ctx->pc != 0x1F15CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F15CCu; }
        if (ctx->pc != 0x1F15CCu) { return; }
    }
    ctx->pc = 0x1F15CCu;
label_1f15cc:
    // 0x1f15cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f15ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f15d0: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x1F15D0u;
    SET_GPR_U32(ctx, 31, 0x1F15D8u);
    ctx->pc = 0x1F15D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15D0u;
            // 0x1f15d4: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F15D8u; }
        if (ctx->pc != 0x1F15D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F15D8u; }
        if (ctx->pc != 0x1F15D8u) { return; }
    }
    ctx->pc = 0x1F15D8u;
label_1f15d8:
    // 0x1f15d8: 0x93838f08  lbu         $v1, -0x70F8($gp)
    ctx->pc = 0x1f15d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938376)));
    // 0x1f15dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f15e0: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1F15E0u;
    {
        const bool branch_taken_0x1f15e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f15e0) {
            ctx->pc = 0x1F1708u;
            goto label_1f1708;
        }
    }
    ctx->pc = 0x1F15E8u;
    // 0x1f15e8: 0x87828f10  lh          $v0, -0x70F0($gp)
    ctx->pc = 0x1f15e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938384)));
    // 0x1f15ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f15f0: 0xa7828f10  sh          $v0, -0x70F0($gp)
    ctx->pc = 0x1f15f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938384), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f15f4: 0x87828f10  lh          $v0, -0x70F0($gp)
    ctx->pc = 0x1f15f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938384)));
    // 0x1f15f8: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x1f15f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1f15fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F15FCu;
    {
        const bool branch_taken_0x1f15fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15FCu;
            // 0x1f1600: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15fc) {
            ctx->pc = 0x1F1608u;
            goto label_1f1608;
        }
    }
    ctx->pc = 0x1F1604u;
    // 0x1f1604: 0xa7808f10  sh          $zero, -0x70F0($gp)
    ctx->pc = 0x1f1604u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938384), (uint16_t)GPR_U32(ctx, 0));
label_1f1608:
    // 0x1f1608: 0x3c0380e0  lui         $v1, 0x80E0
    ctx->pc = 0x1f1608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32992 << 16));
    // 0x1f160c: 0x8c22ca58  lw          $v0, -0x35A8($at)
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x1f1610: 0x3463e060  ori         $v1, $v1, 0xE060
    ctx->pc = 0x1f1610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57440);
    // 0x1f1614: 0xac431cd8  sw          $v1, 0x1CD8($v0)
    ctx->pc = 0x1f1614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7384), GPR_U32(ctx, 3));
    // 0x1f1618: 0x87828f0c  lh          $v0, -0x70F4($gp)
    ctx->pc = 0x1f1618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938380)));
    // 0x1f161c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1F161Cu;
    {
        const bool branch_taken_0x1f161c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f161c) {
            ctx->pc = 0x1F1708u;
            goto label_1f1708;
        }
    }
    ctx->pc = 0x1F1624u;
    // 0x1f1624: 0xc7818f14  lwc1        $f1, -0x70EC($gp)
    ctx->pc = 0x1f1624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1628: 0x3c023f2e  lui         $v0, 0x3F2E
    ctx->pc = 0x1f1628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16174 << 16));
    // 0x1f162c: 0x3442d622  ori         $v0, $v0, 0xD622
    ctx->pc = 0x1f162cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54818);
    // 0x1f1630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1634: 0x0  nop
    ctx->pc = 0x1f1634u;
    // NOP
    // 0x1f1638: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f1638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f163c: 0x0  nop
    ctx->pc = 0x1f163cu;
    // NOP
    // 0x1f1640: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1640u;
    {
        const bool branch_taken_0x1f1640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1640) {
            ctx->pc = 0x1F1668u;
            goto label_1f1668;
        }
    }
    ctx->pc = 0x1F1648u;
    // 0x1f1648: 0x3c02401d  lui         $v0, 0x401D
    ctx->pc = 0x1f1648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16413 << 16));
    // 0x1f164c: 0x34425a52  ori         $v0, $v0, 0x5A52
    ctx->pc = 0x1f164cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23122);
    // 0x1f1650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1654: 0x0  nop
    ctx->pc = 0x1f1654u;
    // NOP
    // 0x1f1658: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f1658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f165c: 0x0  nop
    ctx->pc = 0x1f165cu;
    // NOP
    // 0x1f1660: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1660u;
    {
        const bool branch_taken_0x1f1660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1660) {
            ctx->pc = 0x1F167Cu;
            goto label_1f167c;
        }
    }
    ctx->pc = 0x1F1668u;
label_1f1668:
    // 0x1f1668: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f1668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f166c: 0x3c038068  lui         $v1, 0x8068
    ctx->pc = 0x1f166cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32872 << 16));
    // 0x1f1670: 0x8c22ca58  lw          $v0, -0x35A8($at)
    ctx->pc = 0x1f1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x1f1674: 0x34636a6b  ori         $v1, $v1, 0x6A6B
    ctx->pc = 0x1f1674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27243);
    // 0x1f1678: 0xac431cd8  sw          $v1, 0x1CD8($v0)
    ctx->pc = 0x1f1678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7384), GPR_U32(ctx, 3));
label_1f167c:
    // 0x1f167c: 0xc7818f14  lwc1        $f1, -0x70EC($gp)
    ctx->pc = 0x1f167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1680: 0x3c023d8b  lui         $v0, 0x3D8B
    ctx->pc = 0x1f1680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15755 << 16));
    // 0x1f1684: 0x3443de82  ori         $v1, $v0, 0xDE82
    ctx->pc = 0x1f1684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56962);
    // 0x1f1688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f168c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f1690: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f1690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f1694: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f1694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f1698: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f169c: 0xe7808f14  swc1        $f0, -0x70EC($gp)
    ctx->pc = 0x1f169cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938388), bits); }
    // 0x1f16a0: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1f16a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1f16a4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f16a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f16a8: 0x0  nop
    ctx->pc = 0x1f16a8u;
    // NOP
    // 0x1f16ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F16ACu;
    {
        const bool branch_taken_0x1f16ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f16ac) {
            ctx->pc = 0x1F16BCu;
            goto label_1f16bc;
        }
    }
    ctx->pc = 0x1F16B4u;
    // 0x1f16b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f16b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f16b8: 0xe7808f14  swc1        $f0, -0x70EC($gp)
    ctx->pc = 0x1f16b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938388), bits); }
label_1f16bc:
    // 0x1f16bc: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1F16BCu;
    SET_GPR_U32(ctx, 31, 0x1F16C4u);
    ctx->pc = 0x1F16C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16BCu;
            // 0x1f16c0: 0xc78c8f14  lwc1        $f12, -0x70EC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F16C4u; }
        if (ctx->pc != 0x1F16C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F16C4u; }
        if (ctx->pc != 0x1F16C4u) { return; }
    }
    ctx->pc = 0x1F16C4u;
label_1f16c4:
    // 0x1f16c4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1f16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1f16c8: 0x87828f18  lh          $v0, -0x70E8($gp)
    ctx->pc = 0x1f16c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938392)));
    // 0x1f16cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f16ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f16d0: 0x0  nop
    ctx->pc = 0x1f16d0u;
    // NOP
    // 0x1f16d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f16d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f16d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f16d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f16dc: 0x0  nop
    ctx->pc = 0x1f16dcu;
    // NOP
    // 0x1f16e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f16e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f16e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F16E4u;
    SET_GPR_U32(ctx, 31, 0x1F16ECu);
    ctx->pc = 0x1F16E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F16E4u;
            // 0x1f16e8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F16ECu; }
        if (ctx->pc != 0x1F16ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F16ECu; }
        if (ctx->pc != 0x1F16ECu) { return; }
    }
    ctx->pc = 0x1F16ECu;
label_1f16ec:
    // 0x1f16ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f16ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f16f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f16f4: 0x8c25ca58  lw          $a1, -0x35A8($at)
    ctx->pc = 0x1f16f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x1f16f8: 0x8ca41b9c  lw          $a0, 0x1B9C($a1)
    ctx->pc = 0x1f16f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7068)));
    // 0x1f16fc: 0xaca41b9c  sw          $a0, 0x1B9C($a1)
    ctx->pc = 0x1f16fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7068), GPR_U32(ctx, 4));
    // 0x1f1700: 0xaca21ba0  sw          $v0, 0x1BA0($a1)
    ctx->pc = 0x1f1700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7072), GPR_U32(ctx, 2));
    // 0x1f1704: 0xaca31c38  sw          $v1, 0x1C38($a1)
    ctx->pc = 0x1f1704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7224), GPR_U32(ctx, 3));
label_1f1708:
    // 0x1f1708: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1f1708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f170c: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1f170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1f1710: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1F1710u;
    {
        const bool branch_taken_0x1f1710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1710) {
            ctx->pc = 0x1F1934u;
            goto label_1f1934;
        }
    }
    ctx->pc = 0x1F1718u;
    // 0x1f1718: 0x93828eb8  lbu         $v0, -0x7148($gp)
    ctx->pc = 0x1f1718u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938296)));
    // 0x1f171c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F171Cu;
    {
        const bool branch_taken_0x1f171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F171Cu;
            // 0x1f1720: 0x27848ebc  addiu       $a0, $gp, -0x7144 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f171c) {
            ctx->pc = 0x1F173Cu;
            goto label_1f173c;
        }
    }
    ctx->pc = 0x1F1724u;
    // 0x1f1724: 0x27848ebc  addiu       $a0, $gp, -0x7144
    ctx->pc = 0x1f1724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938300));
    // 0x1f1728: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f1728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f172c: 0xc094558  jal         func_251560
    ctx->pc = 0x1F172Cu;
    SET_GPR_U32(ctx, 31, 0x1F1734u);
    ctx->pc = 0x1F1730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F172Cu;
            // 0x1f1730: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1734u; }
        if (ctx->pc != 0x1F1734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1734u; }
        if (ctx->pc != 0x1F1734u) { return; }
    }
    ctx->pc = 0x1F1734u;
label_1f1734:
    // 0x1f1734: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1734u;
    {
        const bool branch_taken_0x1f1734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1734u;
            // 0x1f1738: 0x8f848ebc  lw          $a0, -0x7144($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1734) {
            ctx->pc = 0x1F174Cu;
            goto label_1f174c;
        }
    }
    ctx->pc = 0x1F173Cu;
label_1f173c:
    // 0x1f173c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1f173cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f1740: 0xc094558  jal         func_251560
    ctx->pc = 0x1F1740u;
    SET_GPR_U32(ctx, 31, 0x1F1748u);
    ctx->pc = 0x1F1744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1740u;
            // 0x1f1744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1748u; }
        if (ctx->pc != 0x1F1748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1748u; }
        if (ctx->pc != 0x1F1748u) { return; }
    }
    ctx->pc = 0x1F1748u;
label_1f1748:
    // 0x1f1748: 0x8f848ebc  lw          $a0, -0x7144($gp)
    ctx->pc = 0x1f1748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938300)));
label_1f174c:
    // 0x1f174c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1754: 0xc0887b0  jal         func_221EC0
    ctx->pc = 0x1F1754u;
    SET_GPR_U32(ctx, 31, 0x1F175Cu);
    ctx->pc = 0x1F1758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1754u;
            // 0x1f1758: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F175Cu; }
        if (ctx->pc != 0x1F175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F175Cu; }
        if (ctx->pc != 0x1F175Cu) { return; }
    }
    ctx->pc = 0x1F175Cu;
label_1f175c:
    // 0x1f175c: 0x8f828ec0  lw          $v0, -0x7140($gp)
    ctx->pc = 0x1f175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1f1760: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1F1760u;
    {
        const bool branch_taken_0x1f1760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1760) {
            ctx->pc = 0x1F1890u;
            goto label_1f1890;
        }
    }
    ctx->pc = 0x1F1768u;
    // 0x1f1768: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1f1768u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f176c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1770: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1F1770u;
    SET_GPR_U32(ctx, 31, 0x1F1778u);
    ctx->pc = 0x1F1774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1770u;
            // 0x1f1774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1778u; }
        if (ctx->pc != 0x1F1778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1778u; }
        if (ctx->pc != 0x1F1778u) { return; }
    }
    ctx->pc = 0x1F1778u;
label_1f1778:
    // 0x1f1778: 0x8f828ebc  lw          $v0, -0x7144($gp)
    ctx->pc = 0x1f1778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938300)));
    // 0x1f177c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1f177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1f1780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1784: 0x240600b6  addiu       $a2, $zero, 0xB6
    ctx->pc = 0x1f1784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x1f1788: 0x240700a4  addiu       $a3, $zero, 0xA4
    ctx->pc = 0x1f1788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x1f178c: 0x24080038  addiu       $t0, $zero, 0x38
    ctx->pc = 0x1f178cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f1790: 0x2413011e  addiu       $s3, $zero, 0x11E
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x1f1794: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F1794u;
    SET_GPR_U32(ctx, 31, 0x1F179Cu);
    ctx->pc = 0x1F1798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1794u;
            // 0x1f1798: 0x29040  sll         $s2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F179Cu; }
        if (ctx->pc != 0x1F179Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F179Cu; }
        if (ctx->pc != 0x1F179Cu) { return; }
    }
    ctx->pc = 0x1F179Cu;
label_1f179c:
    // 0x1f179c: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x1f179cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
    // 0x1f17a0: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x1f17a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x1f17a4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1f17a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1f17a8: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1f17a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1f17ac: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1f17acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1f17b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f17b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17b4: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x1f17b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1f17b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f17b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17bc: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x1f17bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f17c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f17c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17c4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1f17c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f17c8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f17c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f17cc: 0x8f848ec0  lw          $a0, -0x7140($gp)
    ctx->pc = 0x1f17ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1f17d0: 0x1010  mfhi        $v0
    ctx->pc = 0x1f17d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f17d4: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f17d8: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x1F17D8u;
    SET_GPR_U32(ctx, 31, 0x1F17E0u);
    ctx->pc = 0x1F17DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17D8u;
            // 0x1f17dc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17E0u; }
        if (ctx->pc != 0x1F17E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17E0u; }
        if (ctx->pc != 0x1F17E0u) { return; }
    }
    ctx->pc = 0x1F17E0u;
label_1f17e0:
    // 0x1f17e0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1f17e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1f17e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f17e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17e8: 0x240600b6  addiu       $a2, $zero, 0xB6
    ctx->pc = 0x1f17e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x1f17ec: 0x240700a4  addiu       $a3, $zero, 0xA4
    ctx->pc = 0x1f17ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x1f17f0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F17F0u;
    SET_GPR_U32(ctx, 31, 0x1F17F8u);
    ctx->pc = 0x1F17F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17F0u;
            // 0x1f17f4: 0x24080038  addiu       $t0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17F8u; }
        if (ctx->pc != 0x1F17F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17F8u; }
        if (ctx->pc != 0x1F17F8u) { return; }
    }
    ctx->pc = 0x1F17F8u;
label_1f17f8:
    // 0x1f17f8: 0x8f848ec0  lw          $a0, -0x7140($gp)
    ctx->pc = 0x1f17f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1f17fc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f17fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f1800: 0x3c03438f  lui         $v1, 0x438F
    ctx->pc = 0x1f1800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17295 << 16));
    // 0x1f1804: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x1f1804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x1f1808: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f180c: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1f180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1f1810: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f1810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f1814: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f1814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1818: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f1818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f181c: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x1F181Cu;
    SET_GPR_U32(ctx, 31, 0x1F1824u);
    ctx->pc = 0x1F1820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F181Cu;
            // 0x1f1820: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1824u; }
        if (ctx->pc != 0x1F1824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1824u; }
        if (ctx->pc != 0x1F1824u) { return; }
    }
    ctx->pc = 0x1F1824u;
label_1f1824:
    // 0x1f1824: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x1F1824u;
    SET_GPR_U32(ctx, 31, 0x1F182Cu);
    ctx->pc = 0x1F1828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1824u;
            // 0x1f1828: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F182Cu; }
        if (ctx->pc != 0x1F182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F182Cu; }
        if (ctx->pc != 0x1F182Cu) { return; }
    }
    ctx->pc = 0x1F182Cu;
label_1f182c:
    // 0x1f182c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1F182Cu;
    SET_GPR_U32(ctx, 31, 0x1F1834u);
    ctx->pc = 0x1F1830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F182Cu;
            // 0x1f1830: 0xafb200f0  sw          $s2, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1834u; }
        if (ctx->pc != 0x1F1834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1834u; }
        if (ctx->pc != 0x1F1834u) { return; }
    }
    ctx->pc = 0x1F1834u;
label_1f1834:
    // 0x1f1834: 0xc0677f8  jal         func_19DFE0
    ctx->pc = 0x1F1834u;
    SET_GPR_U32(ctx, 31, 0x1F183Cu);
    ctx->pc = 0x1F1838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1834u;
            // 0x1f1838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFE0u;
    if (runtime->hasFunction(0x19DFE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F183Cu; }
        if (ctx->pc != 0x1F183Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetYarikomiMedal__16CUserDataManagerFv_0x19dfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F183Cu; }
        if (ctx->pc != 0x1F183Cu) { return; }
    }
    ctx->pc = 0x1F183Cu;
label_1f183c:
    // 0x1f183c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f183cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1840: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f1840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f1844: 0xc08738c  jal         func_21CE30
    ctx->pc = 0x1F1844u;
    SET_GPR_U32(ctx, 31, 0x1F184Cu);
    ctx->pc = 0x1F1848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1844u;
            // 0x1f1848: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE30u;
    if (runtime->hasFunction(0x21CE30u)) {
        auto targetFn = runtime->lookupFunction(0x21CE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F184Cu; }
        if (ctx->pc != 0x1F184Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuBigNum__FPci_0x21ce30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F184Cu; }
        if (ctx->pc != 0x1F184Cu) { return; }
    }
    ctx->pc = 0x1F184Cu;
label_1f184c:
    // 0x1f184c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f184cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1850: 0xc0945b0  jal         func_2516C0
    ctx->pc = 0x1F1850u;
    SET_GPR_U32(ctx, 31, 0x1F1858u);
    ctx->pc = 0x1F1854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1850u;
            // 0x1f1854: 0x2673007c  addiu       $s3, $s3, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2516C0u;
    if (runtime->hasFunction(0x2516C0u)) {
        auto targetFn = runtime->lookupFunction(0x2516C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1858u; }
        if (ctx->pc != 0x1F1858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumberKeta__Fi_0x2516c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1858u; }
        if (ctx->pc != 0x1F1858u) { return; }
    }
    ctx->pc = 0x1F1858u;
label_1f1858:
    // 0x1f1858: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f1858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f185c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f1860: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x1f1860u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f1864: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F1864u;
    SET_GPR_U32(ctx, 31, 0x1F186Cu);
    ctx->pc = 0x1F1868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1864u;
            // 0x1f1868: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F186Cu; }
        if (ctx->pc != 0x1F186Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F186Cu; }
        if (ctx->pc != 0x1F186Cu) { return; }
    }
    ctx->pc = 0x1F186Cu;
label_1f186c:
    // 0x1f186c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f186cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1870: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f1874: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1F1874u;
    SET_GPR_U32(ctx, 31, 0x1F187Cu);
    ctx->pc = 0x1F1878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1874u;
            // 0x1f1878: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F187Cu; }
        if (ctx->pc != 0x1F187Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F187Cu; }
        if (ctx->pc != 0x1F187Cu) { return; }
    }
    ctx->pc = 0x1F187Cu;
label_1f187c:
    // 0x1f187c: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x1f187cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1f1880: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f1880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f1884: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1f1884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f1888: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1F1888u;
    SET_GPR_U32(ctx, 31, 0x1F1890u);
    ctx->pc = 0x1F188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1888u;
            // 0x1f188c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1890u; }
        if (ctx->pc != 0x1F1890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1890u; }
        if (ctx->pc != 0x1F1890u) { return; }
    }
    ctx->pc = 0x1F1890u;
label_1f1890:
    // 0x1f1890: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1f1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f1894: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1f1894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1f1898: 0xc07b2d4  jal         func_1ECB50
    ctx->pc = 0x1F1898u;
    SET_GPR_U32(ctx, 31, 0x1F18A0u);
    ctx->pc = 0x1F189Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1898u;
            // 0x1f189c: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECB50u;
    if (runtime->hasFunction(0x1ECB50u)) {
        auto targetFn = runtime->lookupFunction(0x1ECB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18A0u; }
        if (ctx->pc != 0x1F18A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDngRoomInfo__FP16DNGMAP_ROOM_INFO_0x1ecb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18A0u; }
        if (ctx->pc != 0x1F18A0u) { return; }
    }
    ctx->pc = 0x1F18A0u;
label_1f18a0:
    // 0x1f18a0: 0x93828ef0  lbu         $v0, -0x7110($gp)
    ctx->pc = 0x1f18a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938352)));
    // 0x1f18a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F18A4u;
    {
        const bool branch_taken_0x1f18a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f18a4) {
            ctx->pc = 0x1F18E0u;
            goto label_1f18e0;
        }
    }
    ctx->pc = 0x1F18ACu;
    // 0x1f18ac: 0x8f828ec0  lw          $v0, -0x7140($gp)
    ctx->pc = 0x1f18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1f18b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F18B0u;
    {
        const bool branch_taken_0x1f18b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f18b0) {
            ctx->pc = 0x1F18E0u;
            goto label_1f18e0;
        }
    }
    ctx->pc = 0x1F18B8u;
    // 0x1f18b8: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1f18b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f18bc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f18bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f18c0: 0x3421bbd4  ori         $at, $at, 0xBBD4
    ctx->pc = 0x1f18c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48084);
    // 0x1f18c4: 0x87868ef8  lh          $a2, -0x7108($gp)
    ctx->pc = 0x1f18c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938360)));
    // 0x1f18c8: 0x2404005e  addiu       $a0, $zero, 0x5E
    ctx->pc = 0x1f18c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1f18cc: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1f18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f18d0: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1f18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1f18d4: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1f18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1f18d8: 0xc07b5a0  jal         func_1ED680
    ctx->pc = 0x1F18D8u;
    SET_GPR_U32(ctx, 31, 0x1F18E0u);
    ctx->pc = 0x1F18DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18D8u;
            // 0x1f18dc: 0x2013821  addu        $a3, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED680u;
    if (runtime->hasFunction(0x1ED680u)) {
        auto targetFn = runtime->lookupFunction(0x1ED680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18E0u; }
        if (ctx->pc != 0x1F18E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawGeoramaMateria__FiPciPii_0x1ed680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18E0u; }
        if (ctx->pc != 0x1F18E0u) { return; }
    }
    ctx->pc = 0x1F18E0u;
label_1f18e0:
    // 0x1f18e0: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1f18e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f18e4: 0xc07abdc  jal         func_1EAF70
    ctx->pc = 0x1F18E4u;
    SET_GPR_U32(ctx, 31, 0x1F18ECu);
    ctx->pc = 0x1F18E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18E4u;
            // 0x1f18e8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAF70u;
    if (runtime->hasFunction(0x1EAF70u)) {
        auto targetFn = runtime->lookupFunction(0x1EAF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18ECu; }
        if (ctx->pc != 0x1F18ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDngName__11CDngFreeMapFi_0x1eaf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18ECu; }
        if (ctx->pc != 0x1F18ECu) { return; }
    }
    ctx->pc = 0x1F18ECu;
label_1f18ec:
    // 0x1f18ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f18ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f18f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f18f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18f4: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x1f18f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1f18f8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1F18F8u;
    SET_GPR_U32(ctx, 31, 0x1F1900u);
    ctx->pc = 0x1F18FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18F8u;
            // 0x1f18fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1900u; }
        if (ctx->pc != 0x1F1900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1900u; }
        if (ctx->pc != 0x1F1900u) { return; }
    }
    ctx->pc = 0x1F1900u;
label_1f1900:
    // 0x1f1900: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f1900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1904: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f1904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1908:
    // 0x1f1908: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f1908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f190c: 0x24428dc0  addiu       $v0, $v0, -0x7240
    ctx->pc = 0x1f190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938048));
    // 0x1f1910: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x1f1910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f1914: 0xc087898  jal         func_21E260
    ctx->pc = 0x1F1914u;
    SET_GPR_U32(ctx, 31, 0x1F191Cu);
    ctx->pc = 0x1F1918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1914u;
            // 0x1f1918: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F191Cu; }
        if (ctx->pc != 0x1F191Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F191Cu; }
        if (ctx->pc != 0x1F191Cu) { return; }
    }
    ctx->pc = 0x1F191Cu;
label_1f191c:
    // 0x1f191c: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x1F191Cu;
    SET_GPR_U32(ctx, 31, 0x1F1924u);
    ctx->pc = 0x1F1920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F191Cu;
            // 0x1f1920: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1924u; }
        if (ctx->pc != 0x1F1924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1924u; }
        if (ctx->pc != 0x1F1924u) { return; }
    }
    ctx->pc = 0x1F1924u;
label_1f1924:
    // 0x1f1924: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f1924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f1928: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1f1928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f192c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F192Cu;
    {
        const bool branch_taken_0x1f192c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F192Cu;
            // 0x1f1930: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f192c) {
            ctx->pc = 0x1F1908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1908;
        }
    }
    ctx->pc = 0x1F1934u;
label_1f1934:
    // 0x1f1934: 0x0  nop
    ctx->pc = 0x1f1934u;
    // NOP
    // 0x1f1938: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1f1938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1f193c: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1f193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1f1940: 0x27b2028c  addiu       $s2, $sp, 0x28C
    ctx->pc = 0x1f1940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
    // 0x1f1944: 0x27a60288  addiu       $a2, $sp, 0x288
    ctx->pc = 0x1f1944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x1f1948: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f1948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f194c: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1F194Cu;
    SET_GPR_U32(ctx, 31, 0x1F1954u);
    ctx->pc = 0x1F1950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F194Cu;
            // 0x1f1950: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1954u; }
        if (ctx->pc != 0x1F1954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1954u; }
        if (ctx->pc != 0x1F1954u) { return; }
    }
    ctx->pc = 0x1F1954u;
label_1f1954:
    // 0x1f1954: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x1f1954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f1958: 0x3c024268  lui         $v0, 0x4268
    ctx->pc = 0x1f1958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17000 << 16));
    // 0x1f195c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f195cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1960: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1f1960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1f1964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1968: 0x0  nop
    ctx->pc = 0x1f1968u;
    // NOP
    // 0x1f196c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1f196cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f1970: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1f1970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1f1974: 0xe7a10288  swc1        $f1, 0x288($sp)
    ctx->pc = 0x1f1974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x1f1978: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1f1978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f197c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1f197cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f1980: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f1980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f1984: 0x344217b8  ori         $v0, $v0, 0x17B8
    ctx->pc = 0x1f1984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6072);
    // 0x1f1988: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f1988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f198c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f198cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f1990: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f1990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f1994: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x1f1994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1998: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x1f1998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f199c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f199cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f19a0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1f19a0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1f19a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f19a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f19a8: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x1f19a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x1f19ac: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f19acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f19b0: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x1f19b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f19b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f19b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f19b8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1f19b8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1f19bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f19bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f19c0: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x1f19c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1f19c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f19c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F19C8u;
    {
        const bool branch_taken_0x1f19c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f19c8) {
            ctx->pc = 0x1F19ECu;
            goto label_1f19ec;
        }
    }
    ctx->pc = 0x1F19D0u;
    // 0x1f19d0: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x1f19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f19d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f19d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f19d8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f19d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f19dc: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x1f19dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x1f19e0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f19e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f19e4: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x1f19e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1f19e8: 0xac2017b8  sw          $zero, 0x17B8($at)
    ctx->pc = 0x1f19e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6072), GPR_U32(ctx, 0));
label_1f19ec:
    // 0x1f19ec: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1f19ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f19f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f19f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F19F4u;
    {
        const bool branch_taken_0x1f19f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F19F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F19F4u;
            // 0x1f19f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19f4) {
            ctx->pc = 0x1F1A04u;
            goto label_1f1a04;
        }
    }
    ctx->pc = 0x1F19FCu;
    // 0x1f19fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F19FCu;
    {
        const bool branch_taken_0x1f19fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F19FCu;
            // 0x1f1a00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19fc) {
            ctx->pc = 0x1F1A10u;
            goto label_1f1a10;
        }
    }
    ctx->pc = 0x1F1A04u;
label_1f1a04:
    // 0x1f1a04: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1A04u;
    {
        const bool branch_taken_0x1f1a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A04u;
            // 0x1f1a08: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a04) {
            ctx->pc = 0x1F1A10u;
            goto label_1f1a10;
        }
    }
    ctx->pc = 0x1F1A0Cu;
    // 0x1f1a0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f1a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a10:
    // 0x1f1a10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1a14: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1a14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1a18: 0x8c2217b4  lw          $v0, 0x17B4($at)
    ctx->pc = 0x1f1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6068)));
    // 0x1f1a1c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1A1Cu;
    {
        const bool branch_taken_0x1f1a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A1Cu;
            // 0x1f1a20: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a1c) {
            ctx->pc = 0x1F1A6Cu;
            goto label_1f1a6c;
        }
    }
    ctx->pc = 0x1F1A24u;
    // 0x1f1a24: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f1a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f1a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a2c: 0x24a588f8  addiu       $a1, $a1, -0x7708
    ctx->pc = 0x1f1a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936824));
    // 0x1f1a30: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1F1A30u;
    SET_GPR_U32(ctx, 31, 0x1F1A38u);
    ctx->pc = 0x1F1A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A30u;
            // 0x1f1a34: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A38u; }
        if (ctx->pc != 0x1F1A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A38u; }
        if (ctx->pc != 0x1F1A38u) { return; }
    }
    ctx->pc = 0x1F1A38u;
label_1f1a38:
    // 0x1f1a38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f1a38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a3c: 0x1260005e  beqz        $s3, . + 4 + (0x5E << 2)
    ctx->pc = 0x1F1A3Cu;
    {
        const bool branch_taken_0x1f1a3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a3c) {
            ctx->pc = 0x1F1BB8u;
            goto label_1f1bb8;
        }
    }
    ctx->pc = 0x1F1A44u;
    // 0x1f1a44: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x1f1a44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f1a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a4c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1F1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F1A54u);
    ctx->pc = 0x1F1A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A4Cu;
            // 0x1f1a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A54u; }
        if (ctx->pc != 0x1F1A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A54u; }
        if (ctx->pc != 0x1F1A54u) { return; }
    }
    ctx->pc = 0x1F1A54u;
label_1f1a54:
    // 0x1f1a54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f1a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1a58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f1a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f1a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a60: 0xc088f50  jal         func_223D40
    ctx->pc = 0x1F1A60u;
    SET_GPR_U32(ctx, 31, 0x1F1A68u);
    ctx->pc = 0x1F1A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A60u;
            // 0x1f1a64: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D40u;
    if (runtime->hasFunction(0x223D40u)) {
        auto targetFn = runtime->lookupFunction(0x223D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A68u; }
        if (ctx->pc != 0x1F1A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffi_0x223d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A68u; }
        if (ctx->pc != 0x1F1A68u) { return; }
    }
    ctx->pc = 0x1F1A68u;
label_1f1a68:
    // 0x1f1a68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1a6c:
    // 0x1f1a6c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1a70: 0x8c2217bc  lw          $v0, 0x17BC($at)
    ctx->pc = 0x1f1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6076)));
    // 0x1f1a74: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1F1A74u;
    {
        const bool branch_taken_0x1f1a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a74) {
            ctx->pc = 0x1F1B74u;
            goto label_1f1b74;
        }
    }
    ctx->pc = 0x1F1A7Cu;
    // 0x1f1a7c: 0x8f828ec0  lw          $v0, -0x7140($gp)
    ctx->pc = 0x1f1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1f1a80: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1F1A80u;
    {
        const bool branch_taken_0x1f1a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a80) {
            ctx->pc = 0x1F1B74u;
            goto label_1f1b74;
        }
    }
    ctx->pc = 0x1F1A88u;
    // 0x1f1a88: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1f1a88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a90: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1F1A90u;
    SET_GPR_U32(ctx, 31, 0x1F1A98u);
    ctx->pc = 0x1F1A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A90u;
            // 0x1f1a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A98u; }
        if (ctx->pc != 0x1F1A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A98u; }
        if (ctx->pc != 0x1F1A98u) { return; }
    }
    ctx->pc = 0x1F1A98u;
label_1f1a98:
    // 0x1f1a98: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1f1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1f1a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1aa0: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x1f1aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f1aa4: 0x240700b8  addiu       $a3, $zero, 0xB8
    ctx->pc = 0x1f1aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1f1aa8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F1AA8u;
    SET_GPR_U32(ctx, 31, 0x1F1AB0u);
    ctx->pc = 0x1F1AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AA8u;
            // 0x1f1aac: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1AB0u; }
        if (ctx->pc != 0x1F1AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1AB0u; }
        if (ctx->pc != 0x1F1AB0u) { return; }
    }
    ctx->pc = 0x1F1AB0u;
label_1f1ab0:
    // 0x1f1ab0: 0x8f848ec0  lw          $a0, -0x7140($gp)
    ctx->pc = 0x1f1ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1f1ab4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1f1ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f1ab8: 0x3c034397  lui         $v1, 0x4397
    ctx->pc = 0x1f1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17303 << 16));
    // 0x1f1abc: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x1f1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
    // 0x1f1ac0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1ac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1ac4: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x1f1ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1f1ac8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f1ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f1acc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f1accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ad0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1f1ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ad4: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x1F1AD4u;
    SET_GPR_U32(ctx, 31, 0x1F1ADCu);
    ctx->pc = 0x1F1AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AD4u;
            // 0x1f1ad8: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1ADCu; }
        if (ctx->pc != 0x1F1ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1ADCu; }
        if (ctx->pc != 0x1F1ADCu) { return; }
    }
    ctx->pc = 0x1F1ADCu;
label_1f1adc:
    // 0x1f1adc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1f1adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1f1ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ae4: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x1f1ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1f1ae8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1f1ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f1aec: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F1AECu;
    SET_GPR_U32(ctx, 31, 0x1F1AF4u);
    ctx->pc = 0x1F1AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AECu;
            // 0x1f1af0: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1AF4u; }
        if (ctx->pc != 0x1F1AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1AF4u; }
        if (ctx->pc != 0x1F1AF4u) { return; }
    }
    ctx->pc = 0x1F1AF4u;
label_1f1af4:
    // 0x1f1af4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1F1AF4u;
    SET_GPR_U32(ctx, 31, 0x1F1AFCu);
    ctx->pc = 0x1F1AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AF4u;
            // 0x1f1af8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1AFCu; }
        if (ctx->pc != 0x1F1AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1AFCu; }
        if (ctx->pc != 0x1F1AFCu) { return; }
    }
    ctx->pc = 0x1F1AFCu;
label_1f1afc:
    // 0x1f1afc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1f1afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f1b00: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1F1B00u;
    SET_GPR_U32(ctx, 31, 0x1F1B08u);
    ctx->pc = 0x1F1B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B00u;
            // 0x1f1b04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B08u; }
        if (ctx->pc != 0x1F1B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B08u; }
        if (ctx->pc != 0x1F1B08u) { return; }
    }
    ctx->pc = 0x1F1B08u;
label_1f1b08:
    // 0x1f1b08: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1f1b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f1b0c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F1B0Cu;
    SET_GPR_U32(ctx, 31, 0x1F1B14u);
    ctx->pc = 0x1F1B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B0Cu;
            // 0x1f1b10: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B14u; }
        if (ctx->pc != 0x1F1B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B14u; }
        if (ctx->pc != 0x1F1B14u) { return; }
    }
    ctx->pc = 0x1F1B14u;
label_1f1b14:
    // 0x1f1b14: 0x8f858ec0  lw          $a1, -0x7140($gp)
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1f1b18: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1F1B18u;
    SET_GPR_U32(ctx, 31, 0x1F1B20u);
    ctx->pc = 0x1F1B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B18u;
            // 0x1f1b1c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B20u; }
        if (ctx->pc != 0x1F1B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B20u; }
        if (ctx->pc != 0x1F1B20u) { return; }
    }
    ctx->pc = 0x1F1B20u;
label_1f1b20:
    // 0x1f1b20: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f1b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f1b24: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1f1b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f1b28: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f1b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b2c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f1b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b30: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F1B30u;
    SET_GPR_U32(ctx, 31, 0x1F1B38u);
    ctx->pc = 0x1F1B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B30u;
            // 0x1f1b34: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B38u; }
        if (ctx->pc != 0x1F1B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B38u; }
        if (ctx->pc != 0x1F1B38u) { return; }
    }
    ctx->pc = 0x1F1B38u;
label_1f1b38:
    // 0x1f1b38: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1F1B38u;
    SET_GPR_U32(ctx, 31, 0x1F1B40u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B40u; }
        if (ctx->pc != 0x1F1B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B40u; }
        if (ctx->pc != 0x1F1B40u) { return; }
    }
    ctx->pc = 0x1F1B40u;
label_1f1b40:
    // 0x1f1b40: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1f1b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1f1b44: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1f1b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f1b48: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f1b48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f1b4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b50: 0x8c254d9c  lw          $a1, 0x4D9C($at)
    ctx->pc = 0x1f1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
    // 0x1f1b54: 0x240701aa  addiu       $a3, $zero, 0x1AA
    ctx->pc = 0x1f1b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
    // 0x1f1b58: 0x2408015b  addiu       $t0, $zero, 0x15B
    ctx->pc = 0x1f1b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x1f1b5c: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x1f1b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1f1b60: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1f1b60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1b64: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x1F1B64u;
    SET_GPR_U32(ctx, 31, 0x1F1B6Cu);
    ctx->pc = 0x1F1B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B64u;
            // 0x1f1b68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B6Cu; }
        if (ctx->pc != 0x1F1B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B6Cu; }
        if (ctx->pc != 0x1F1B6Cu) { return; }
    }
    ctx->pc = 0x1F1B6Cu;
label_1f1b6c:
    // 0x1f1b6c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F1B6Cu;
    SET_GPR_U32(ctx, 31, 0x1F1B74u);
    ctx->pc = 0x1F1B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B6Cu;
            // 0x1f1b70: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B74u; }
        if (ctx->pc != 0x1F1B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B74u; }
        if (ctx->pc != 0x1F1B74u) { return; }
    }
    ctx->pc = 0x1F1B74u;
label_1f1b74:
    // 0x1f1b74: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f1b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f1b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b7c: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x1f1b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1f1b80: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1F1B80u;
    SET_GPR_U32(ctx, 31, 0x1F1B88u);
    ctx->pc = 0x1F1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B80u;
            // 0x1f1b84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B88u; }
        if (ctx->pc != 0x1F1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B88u; }
        if (ctx->pc != 0x1F1B88u) { return; }
    }
    ctx->pc = 0x1F1B88u;
label_1f1b88:
    // 0x1f1b88: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x1f1b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f1b8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1b90: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1B90u;
    {
        const bool branch_taken_0x1f1b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f1b90) {
            ctx->pc = 0x1F1BB8u;
            goto label_1f1bb8;
        }
    }
    ctx->pc = 0x1F1B98u;
    // 0x1f1b98: 0x83838ecc  lb          $v1, -0x7134($gp)
    ctx->pc = 0x1f1b98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938316)));
    // 0x1f1b9c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1B9Cu;
    {
        const bool branch_taken_0x1f1b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F1BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B9Cu;
            // 0x1f1ba0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b9c) {
            ctx->pc = 0x1F1BB8u;
            goto label_1f1bb8;
        }
    }
    ctx->pc = 0x1F1BA4u;
    // 0x1f1ba4: 0xc087898  jal         func_21E260
    ctx->pc = 0x1F1BA4u;
    SET_GPR_U32(ctx, 31, 0x1F1BACu);
    ctx->pc = 0x1F1BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BA4u;
            // 0x1f1ba8: 0x8c24ca4c  lw          $a0, -0x35B4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1BACu; }
        if (ctx->pc != 0x1F1BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1BACu; }
        if (ctx->pc != 0x1F1BACu) { return; }
    }
    ctx->pc = 0x1F1BACu;
label_1f1bac:
    // 0x1f1bac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f1bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f1bb0: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x1F1BB0u;
    SET_GPR_U32(ctx, 31, 0x1F1BB8u);
    ctx->pc = 0x1F1BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BB0u;
            // 0x1f1bb4: 0x8c24ca4c  lw          $a0, -0x35B4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1BB8u; }
        if (ctx->pc != 0x1F1BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1BB8u; }
        if (ctx->pc != 0x1F1BB8u) { return; }
    }
    ctx->pc = 0x1F1BB8u;
label_1f1bb8:
    // 0x1f1bb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f1bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f1bbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f1bbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1bc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f1bc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1bc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1bc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1bc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BD0u;
            // 0x1f1bd4: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1BD8u;
}
