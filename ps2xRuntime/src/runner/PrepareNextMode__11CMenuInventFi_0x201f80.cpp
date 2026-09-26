#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrepareNextMode__11CMenuInventFi
// Address: 0x201f80 - 0x202164
void PrepareNextMode__11CMenuInventFi_0x201f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrepareNextMode__11CMenuInventFi_0x201f80");
#endif

    switch (ctx->pc) {
        case 0x201fd8u: goto label_201fd8;
        case 0x201fe8u: goto label_201fe8;
        case 0x201ff8u: goto label_201ff8;
        case 0x20203cu: goto label_20203c;
        case 0x20204cu: goto label_20204c;
        case 0x202074u: goto label_202074;
        case 0x202080u: goto label_202080;
        case 0x202090u: goto label_202090;
        case 0x2020d4u: goto label_2020d4;
        case 0x2020e0u: goto label_2020e0;
        case 0x202108u: goto label_202108;
        case 0x202118u: goto label_202118;
        case 0x202120u: goto label_202120;
        case 0x20213cu: goto label_20213c;
        case 0x202154u: goto label_202154;
        default: break;
    }

    ctx->pc = 0x201f80u;

    // 0x201f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x201f8c: 0xa4850014  sh          $a1, 0x14($a0)
    ctx->pc = 0x201f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x201f90: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x201f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x201f94: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x201f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x201f98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201F98u;
    {
        const bool branch_taken_0x201f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F98u;
            // 0x201f9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f98) {
            ctx->pc = 0x201FA8u;
            goto label_201fa8;
        }
    }
    ctx->pc = 0x201FA0u;
    // 0x201fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201fa4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x201fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_201fa8:
    // 0x201fa8: 0x8e020ef0  lw          $v0, 0xEF0($s0)
    ctx->pc = 0x201fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3824)));
    // 0x201fac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x201facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201fb0: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x201fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x201fb4: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x201fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x201fb8: 0x8e020ef4  lw          $v0, 0xEF4($s0)
    ctx->pc = 0x201fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3828)));
    // 0x201fbc: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x201fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x201fc0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x201fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x201fc4: 0x8e020ef8  lw          $v0, 0xEF8($s0)
    ctx->pc = 0x201fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3832)));
    // 0x201fc8: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x201fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x201fcc: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x201fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x201fd0: 0xc08ac10  jal         func_22B040
    ctx->pc = 0x201FD0u;
    SET_GPR_U32(ctx, 31, 0x201FD8u);
    ctx->pc = 0x201FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201FD0u;
            // 0x201fd4: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B040u;
    if (runtime->hasFunction(0x22B040u)) {
        auto targetFn = runtime->lookupFunction(0x22B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FD8u; }
        if (ctx->pc != 0x201FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDrawList__14CPosDataManageFv_0x22b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FD8u; }
        if (ctx->pc != 0x201FD8u) { return; }
    }
    ctx->pc = 0x201FD8u;
label_201fd8:
    // 0x201fd8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x201fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fe0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x201FE0u;
    SET_GPR_U32(ctx, 31, 0x201FE8u);
    ctx->pc = 0x201FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201FE0u;
            // 0x201fe4: 0x24a59298  addiu       $a1, $a1, -0x6D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FE8u; }
        if (ctx->pc != 0x201FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FE8u; }
        if (ctx->pc != 0x201FE8u) { return; }
    }
    ctx->pc = 0x201FE8u;
label_201fe8:
    // 0x201fe8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x201fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ff0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x201FF0u;
    SET_GPR_U32(ctx, 31, 0x201FF8u);
    ctx->pc = 0x201FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201FF0u;
            // 0x201ff4: 0x24a592d8  addiu       $a1, $a1, -0x6D28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FF8u; }
        if (ctx->pc != 0x201FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FF8u; }
        if (ctx->pc != 0x201FF8u) { return; }
    }
    ctx->pc = 0x201FF8u;
label_201ff8:
    // 0x201ff8: 0x86040014  lh          $a0, 0x14($s0)
    ctx->pc = 0x201ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x201ffc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x201ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x202000: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x202000u;
    {
        const bool branch_taken_0x202000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202000u;
            // 0x202004: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202000) {
            ctx->pc = 0x2020FCu;
            goto label_2020fc;
        }
    }
    ctx->pc = 0x202008u;
    // 0x202008: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x202008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20200c: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x20200Cu;
    {
        const bool branch_taken_0x20200c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20200Cu;
            // 0x202010: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20200c) {
            ctx->pc = 0x2020C8u;
            goto label_2020c8;
        }
    }
    ctx->pc = 0x202014u;
    // 0x202014: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x202014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202018: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x202018u;
    {
        const bool branch_taken_0x202018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202018u;
            // 0x20201c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202018) {
            ctx->pc = 0x202068u;
            goto label_202068;
        }
    }
    ctx->pc = 0x202020u;
    // 0x202020: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202020u;
    {
        const bool branch_taken_0x202020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202020u;
            // 0x202024: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202020) {
            ctx->pc = 0x202030u;
            goto label_202030;
        }
    }
    ctx->pc = 0x202028u;
    // 0x202028: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x202028u;
    {
        const bool branch_taken_0x202028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202028u;
            // 0x20202c: 0x86040110  lh          $a0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202028) {
            ctx->pc = 0x202124u;
            goto label_202124;
        }
    }
    ctx->pc = 0x202030u;
label_202030:
    // 0x202030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202034: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202034u;
    SET_GPR_U32(ctx, 31, 0x20203Cu);
    ctx->pc = 0x202038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202034u;
            // 0x202038: 0x24a592e8  addiu       $a1, $a1, -0x6D18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20203Cu; }
        if (ctx->pc != 0x20203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20203Cu; }
        if (ctx->pc != 0x20203Cu) { return; }
    }
    ctx->pc = 0x20203Cu;
label_20203c:
    // 0x20203c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20203cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202044: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202044u;
    SET_GPR_U32(ctx, 31, 0x20204Cu);
    ctx->pc = 0x202048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202044u;
            // 0x202048: 0x24a592f8  addiu       $a1, $a1, -0x6D08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20204Cu; }
        if (ctx->pc != 0x20204Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20204Cu; }
        if (ctx->pc != 0x20204Cu) { return; }
    }
    ctx->pc = 0x20204Cu;
label_20204c:
    // 0x20204c: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x202050: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x202050u;
    {
        const bool branch_taken_0x202050 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x202054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202050u;
            // 0x202054: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202050) {
            ctx->pc = 0x202120u;
            goto label_202120;
        }
    }
    ctx->pc = 0x202058u;
    // 0x202058: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x202058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20205c: 0x8c23ca5c  lw          $v1, -0x35A4($at)
    ctx->pc = 0x20205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x202060: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x202060u;
    {
        const bool branch_taken_0x202060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202060u;
            // 0x202064: 0xac6400c0  sw          $a0, 0xC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202060) {
            ctx->pc = 0x202120u;
            goto label_202120;
        }
    }
    ctx->pc = 0x202068u;
label_202068:
    // 0x202068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20206c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20206Cu;
    SET_GPR_U32(ctx, 31, 0x202074u);
    ctx->pc = 0x202070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20206Cu;
            // 0x202070: 0x24a59310  addiu       $a1, $a1, -0x6CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202074u; }
        if (ctx->pc != 0x202074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202074u; }
        if (ctx->pc != 0x202074u) { return; }
    }
    ctx->pc = 0x202074u;
label_202074:
    // 0x202074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202078: 0xc080884  jal         func_202210
    ctx->pc = 0x202078u;
    SET_GPR_U32(ctx, 31, 0x202080u);
    ctx->pc = 0x20207Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202078u;
            // 0x20207c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202210u;
    if (runtime->hasFunction(0x202210u)) {
        auto targetFn = runtime->lookupFunction(0x202210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202080u; }
        if (ctx->pc != 0x202080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateModeSwapForm__11CMenuInventFi_0x202210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202080u; }
        if (ctx->pc != 0x202080u) { return; }
    }
    ctx->pc = 0x202080u;
label_202080:
    // 0x202080: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202088: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202088u;
    SET_GPR_U32(ctx, 31, 0x202090u);
    ctx->pc = 0x20208Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202088u;
            // 0x20208c: 0x24a59328  addiu       $a1, $a1, -0x6CD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202090u; }
        if (ctx->pc != 0x202090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202090u; }
        if (ctx->pc != 0x202090u) { return; }
    }
    ctx->pc = 0x202090u;
label_202090:
    // 0x202090: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x202090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x202094: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x202094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x202098: 0x8c23ca48  lw          $v1, -0x35B8($at)
    ctx->pc = 0x202098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x20209c: 0x2404fff9  addiu       $a0, $zero, -0x7
    ctx->pc = 0x20209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x2020a0: 0xac6500c0  sw          $a1, 0xC0($v1)
    ctx->pc = 0x2020a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 5));
    // 0x2020a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2020a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2020a8: 0x8c23ca4c  lw          $v1, -0x35B4($at)
    ctx->pc = 0x2020a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x2020ac: 0xac641ad4  sw          $a0, 0x1AD4($v1)
    ctx->pc = 0x2020acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6868), GPR_U32(ctx, 4));
    // 0x2020b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2020b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2020b4: 0x8c23ca4c  lw          $v1, -0x35B4($at)
    ctx->pc = 0x2020b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x2020b8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2020B8u;
    {
        const bool branch_taken_0x2020b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2020b8) {
            ctx->pc = 0x202120u;
            goto label_202120;
        }
    }
    ctx->pc = 0x2020C0u;
    // 0x2020c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2020C0u;
    {
        const bool branch_taken_0x2020c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2020C0u;
            // 0x2020c4: 0xac601ad0  sw          $zero, 0x1AD0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020c0) {
            ctx->pc = 0x202120u;
            goto label_202120;
        }
    }
    ctx->pc = 0x2020C8u;
label_2020c8:
    // 0x2020c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2020c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020cc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2020CCu;
    SET_GPR_U32(ctx, 31, 0x2020D4u);
    ctx->pc = 0x2020D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2020CCu;
            // 0x2020d0: 0x24a59340  addiu       $a1, $a1, -0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2020D4u; }
        if (ctx->pc != 0x2020D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2020D4u; }
        if (ctx->pc != 0x2020D4u) { return; }
    }
    ctx->pc = 0x2020D4u;
label_2020d4:
    // 0x2020d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2020d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020d8: 0xc080708  jal         func_201C20
    ctx->pc = 0x2020D8u;
    SET_GPR_U32(ctx, 31, 0x2020E0u);
    ctx->pc = 0x2020DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2020D8u;
            // 0x2020dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C20u;
    if (runtime->hasFunction(0x201C20u)) {
        auto targetFn = runtime->lookupFunction(0x201C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2020E0u; }
        if (ctx->pc != 0x2020E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelNetaCircle__11CMenuInventFi_0x201c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2020E0u; }
        if (ctx->pc != 0x2020E0u) { return; }
    }
    ctx->pc = 0x2020E0u;
label_2020e0:
    // 0x2020e0: 0x0  nop
    ctx->pc = 0x2020e0u;
    // NOP
    // 0x2020e4: 0x0  nop
    ctx->pc = 0x2020e4u;
    // NOP
    // 0x2020e8: 0x0  nop
    ctx->pc = 0x2020e8u;
    // NOP
    // 0x2020ec: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2020ECu;
    {
        const bool branch_taken_0x2020ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2020ec) {
            ctx->pc = 0x2020D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2020d4;
        }
    }
    ctx->pc = 0x2020F4u;
    // 0x2020f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2020F4u;
    {
        const bool branch_taken_0x2020f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2020f4) {
            ctx->pc = 0x202120u;
            goto label_202120;
        }
    }
    ctx->pc = 0x2020FCu;
label_2020fc:
    // 0x2020fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2020fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202100: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202100u;
    SET_GPR_U32(ctx, 31, 0x202108u);
    ctx->pc = 0x202104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202100u;
            // 0x202104: 0x24a592e8  addiu       $a1, $a1, -0x6D18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202108u; }
        if (ctx->pc != 0x202108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202108u; }
        if (ctx->pc != 0x202108u) { return; }
    }
    ctx->pc = 0x202108u;
label_202108:
    // 0x202108: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20210c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202110: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202110u;
    SET_GPR_U32(ctx, 31, 0x202118u);
    ctx->pc = 0x202114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202110u;
            // 0x202114: 0x24a59350  addiu       $a1, $a1, -0x6CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202118u; }
        if (ctx->pc != 0x202118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202118u; }
        if (ctx->pc != 0x202118u) { return; }
    }
    ctx->pc = 0x202118u;
label_202118:
    // 0x202118: 0xc0807b0  jal         func_201EC0
    ctx->pc = 0x202118u;
    SET_GPR_U32(ctx, 31, 0x202120u);
    ctx->pc = 0x20211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202118u;
            // 0x20211c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201EC0u;
    if (runtime->hasFunction(0x201EC0u)) {
        auto targetFn = runtime->lookupFunction(0x201EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202120u; }
        if (ctx->pc != 0x202120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataRecordBoard__11CMenuInventFv_0x201ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202120u; }
        if (ctx->pc != 0x202120u) { return; }
    }
    ctx->pc = 0x202120u;
label_202120:
    // 0x202120: 0x86040110  lh          $a0, 0x110($s0)
    ctx->pc = 0x202120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_202124:
    // 0x202124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202128: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202128u;
    {
        const bool branch_taken_0x202128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202128u;
            // 0x20212c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202128) {
            ctx->pc = 0x20213Cu;
            goto label_20213c;
        }
    }
    ctx->pc = 0x202130u;
    // 0x202130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202134: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202134u;
    SET_GPR_U32(ctx, 31, 0x20213Cu);
    ctx->pc = 0x202138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202134u;
            // 0x202138: 0x24a59360  addiu       $a1, $a1, -0x6CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20213Cu; }
        if (ctx->pc != 0x20213Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20213Cu; }
        if (ctx->pc != 0x20213Cu) { return; }
    }
    ctx->pc = 0x20213Cu;
label_20213c:
    // 0x20213c: 0x92030258  lbu         $v1, 0x258($s0)
    ctx->pc = 0x20213cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x202140: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202140u;
    {
        const bool branch_taken_0x202140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202140u;
            // 0x202144: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202140) {
            ctx->pc = 0x202154u;
            goto label_202154;
        }
    }
    ctx->pc = 0x202148u;
    // 0x202148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20214c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20214Cu;
    SET_GPR_U32(ctx, 31, 0x202154u);
    ctx->pc = 0x202150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20214Cu;
            // 0x202150: 0x24a59370  addiu       $a1, $a1, -0x6C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202154u; }
        if (ctx->pc != 0x202154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202154u; }
        if (ctx->pc != 0x202154u) { return; }
    }
    ctx->pc = 0x202154u;
label_202154:
    // 0x202154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20215c: 0x3e00008  jr          $ra
    ctx->pc = 0x20215Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20215Cu;
            // 0x202160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202164u;
}
