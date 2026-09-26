#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoSet__6ClsMesFPi
// Address: 0x152840 - 0x1529a0
void AutoSet__6ClsMesFPi_0x152840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoSet__6ClsMesFPi_0x152840");
#endif

    switch (ctx->pc) {
        case 0x15285cu: goto label_15285c;
        case 0x15298cu: goto label_15298c;
        default: break;
    }

    ctx->pc = 0x152840u;

    // 0x152840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x152848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15284c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152854: 0xc05491c  jal         func_152470
    ctx->pc = 0x152854u;
    SET_GPR_U32(ctx, 31, 0x15285Cu);
    ctx->pc = 0x152858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152854u;
            // 0x152858: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152470u;
    if (runtime->hasFunction(0x152470u)) {
        auto targetFn = runtime->lookupFunction(0x152470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15285Cu; }
        if (ctx->pc != 0x15285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcFukidashiXY__6ClsMesFPi_0x152470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15285Cu; }
        if (ctx->pc != 0x15285Cu) { return; }
    }
    ctx->pc = 0x15285Cu;
label_15285c:
    // 0x15285c: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x15285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x152860: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152860u;
    {
        const bool branch_taken_0x152860 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x152864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152860u;
            // 0x152864: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152860) {
            ctx->pc = 0x152870u;
            goto label_152870;
        }
    }
    ctx->pc = 0x152868u;
    // 0x152868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15286c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15286cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_152870:
    // 0x152870: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x152870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x152874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152878: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x152878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
    // 0x15287c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x15287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x152880: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152880u;
    {
        const bool branch_taken_0x152880 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x152884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152880u;
            // 0x152884: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152880) {
            ctx->pc = 0x152890u;
            goto label_152890;
        }
    }
    ctx->pc = 0x152888u;
    // 0x152888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15288c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15288cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_152890:
    // 0x152890: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x152894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152898: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x152898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x15289c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x15289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1528a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1528a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1528a4: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1528A4u;
    {
        const bool branch_taken_0x1528a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1528A4u;
            // 0x1528a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528a4) {
            ctx->pc = 0x152984u;
            goto label_152984;
        }
    }
    ctx->pc = 0x1528ACu;
    // 0x1528ac: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x1528acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
    // 0x1528b0: 0xae240158  sw          $a0, 0x158($s1)
    ctx->pc = 0x1528b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 4));
    // 0x1528b4: 0x8e230144  lw          $v1, 0x144($s1)
    ctx->pc = 0x1528b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x1528b8: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x1528b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x1528bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1528BCu;
    {
        const bool branch_taken_0x1528bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1528C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1528BCu;
            // 0x1528c0: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528bc) {
            ctx->pc = 0x1528CCu;
            goto label_1528cc;
        }
    }
    ctx->pc = 0x1528C4u;
    // 0x1528c4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1528c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1528c8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1528c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1528cc:
    // 0x1528cc: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x1528ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x1528d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1528d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1528d4: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x1528d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1528d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1528D8u;
    {
        const bool branch_taken_0x1528d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1528d8) {
            ctx->pc = 0x1528E8u;
            goto label_1528e8;
        }
    }
    ctx->pc = 0x1528E0u;
    // 0x1528e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1528E0u;
    {
        const bool branch_taken_0x1528e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1528E0u;
            // 0x1528e4: 0xae22015c  sw          $v0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528e0) {
            ctx->pc = 0x15291Cu;
            goto label_15291c;
        }
    }
    ctx->pc = 0x1528E8u;
label_1528e8:
    // 0x1528e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1528e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1528ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1528ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1528f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1528F0u;
    {
        const bool branch_taken_0x1528f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1528F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1528F0u;
            // 0x1528f4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528f0) {
            ctx->pc = 0x152900u;
            goto label_152900;
        }
    }
    ctx->pc = 0x1528F8u;
    // 0x1528f8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1528f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1528fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1528fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_152900:
    // 0x152900: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x152900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x152904: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x152904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152908: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152908u;
    {
        const bool branch_taken_0x152908 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152908) {
            ctx->pc = 0x152918u;
            goto label_152918;
        }
    }
    ctx->pc = 0x152910u;
    // 0x152910: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x152910u;
    {
        const bool branch_taken_0x152910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152910u;
            // 0x152914: 0xae22015c  sw          $v0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152910) {
            ctx->pc = 0x15291Cu;
            goto label_15291c;
        }
    }
    ctx->pc = 0x152918u;
label_152918:
    // 0x152918: 0xae25015c  sw          $a1, 0x15C($s1)
    ctx->pc = 0x152918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 5));
label_15291c:
    // 0x15291c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x15291cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x152920: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x152920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x152924: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x152924u;
    {
        const bool branch_taken_0x152924 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152924u;
            // 0x152928: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152924) {
            ctx->pc = 0x152934u;
            goto label_152934;
        }
    }
    ctx->pc = 0x15292Cu;
    // 0x15292c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x15292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x152930: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x152930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_152934:
    // 0x152934: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x152934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x152938: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x152938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15293c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x15293cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x152940: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152940u;
    {
        const bool branch_taken_0x152940 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152940) {
            ctx->pc = 0x152950u;
            goto label_152950;
        }
    }
    ctx->pc = 0x152948u;
    // 0x152948: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x152948u;
    {
        const bool branch_taken_0x152948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152948u;
            // 0x15294c: 0xae220160  sw          $v0, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152948) {
            ctx->pc = 0x152984u;
            goto label_152984;
        }
    }
    ctx->pc = 0x152950u;
label_152950:
    // 0x152950: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x152950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x152954: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x152954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152958: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x152958u;
    {
        const bool branch_taken_0x152958 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152958u;
            // 0x15295c: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152958) {
            ctx->pc = 0x152968u;
            goto label_152968;
        }
    }
    ctx->pc = 0x152960u;
    // 0x152960: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x152960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x152964: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x152964u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_152968:
    // 0x152968: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x152968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15296c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x15296cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152970: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152970u;
    {
        const bool branch_taken_0x152970 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152970) {
            ctx->pc = 0x152980u;
            goto label_152980;
        }
    }
    ctx->pc = 0x152978u;
    // 0x152978: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x152978u;
    {
        const bool branch_taken_0x152978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15297Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152978u;
            // 0x15297c: 0xae220160  sw          $v0, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152978) {
            ctx->pc = 0x152984u;
            goto label_152984;
        }
    }
    ctx->pc = 0x152980u;
label_152980:
    // 0x152980: 0xae250160  sw          $a1, 0x160($s1)
    ctx->pc = 0x152980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 5));
label_152984:
    // 0x152984: 0xc054914  jal         func_152450
    ctx->pc = 0x152984u;
    SET_GPR_U32(ctx, 31, 0x15298Cu);
    ctx->pc = 0x152988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152984u;
            // 0x152988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152450u;
    if (runtime->hasFunction(0x152450u)) {
        auto targetFn = runtime->lookupFunction(0x152450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15298Cu; }
        if (ctx->pc != 0x15298Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMesWinXYFromFukidashiXY__6ClsMesFv_0x152450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15298Cu; }
        if (ctx->pc != 0x15298Cu) { return; }
    }
    ctx->pc = 0x15298Cu;
label_15298c:
    // 0x15298c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15298cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152998: 0x3e00008  jr          $ra
    ctx->pc = 0x152998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152998u;
            // 0x15299c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1529A0u;
}
