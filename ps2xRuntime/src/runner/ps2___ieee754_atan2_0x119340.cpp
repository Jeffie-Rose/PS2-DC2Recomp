#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ieee754_atan2
// Address: 0x119340 - 0x119674
void ps2___ieee754_atan2_0x119340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_atan2_0x119340");
#endif

    switch (ctx->pc) {
        case 0x1193c4u: goto label_1193c4;
        case 0x1193e4u: goto label_1193e4;
        case 0x1195acu: goto label_1195ac;
        case 0x1195b4u: goto label_1195b4;
        case 0x1195bcu: goto label_1195bc;
        case 0x119630u: goto label_119630;
        case 0x119650u: goto label_119650;
        case 0x119664u: goto label_119664;
        default: break;
    }

    ctx->pc = 0x119340u;

    // 0x119340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119344: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x119344u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11934c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11934cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119350: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x119350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119354: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x119354u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x119358: 0x2603f  dsra32      $t4, $v0, 0
    ctx->pc = 0x119358u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11935c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x119360: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x119360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x119364: 0x1835024  and         $t2, $t4, $v1
    ctx->pc = 0x119364u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x119368: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x119368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11936c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x11936cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119370: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x119370u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x119374: 0x2483f  dsra32      $t1, $v0, 0
    ctx->pc = 0x119374u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x119378: 0x1234024  and         $t0, $t1, $v1
    ctx->pc = 0x119378u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x11937c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x11937cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x119380: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x119380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x119384: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x119384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x119388: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x119388u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11938c: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x11938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x119390: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x119390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x119394: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119394u;
    {
        const bool branch_taken_0x119394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119394u;
            // 0x119398: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119394) {
            ctx->pc = 0x1193B8u;
            goto label_1193b8;
        }
    }
    ctx->pc = 0x11939Cu;
    // 0x11939c: 0x61023  negu        $v0, $a2
    ctx->pc = 0x11939cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1193a0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x1193a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1193a4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1193a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1193a8: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x1193a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1193ac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1193acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1193b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1193B0u;
    {
        const bool branch_taken_0x1193b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1193B0u;
            // 0x1193b4: 0x3c02c010  lui         $v0, 0xC010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193b0) {
            ctx->pc = 0x1193CCu;
            goto label_1193cc;
        }
    }
    ctx->pc = 0x1193B8u;
label_1193b8:
    // 0x1193b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1193b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193bc: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x1193BCu;
    SET_GPR_U32(ctx, 31, 0x1193C4u);
    ctx->pc = 0x1193C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1193BCu;
            // 0x1193c0: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1193C4u; }
        if (ctx->pc != 0x1193C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1193C4u; }
        if (ctx->pc != 0x1193C4u) { return; }
    }
    ctx->pc = 0x1193C4u;
label_1193c4:
    // 0x1193c4: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1193C4u;
    {
        const bool branch_taken_0x1193c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1193C4u;
            // 0x1193c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193c4) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x1193CCu;
label_1193cc:
    // 0x1193cc: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1193ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1193d0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1193d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1193d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1193D4u;
    {
        const bool branch_taken_0x1193d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1193D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1193D4u;
            // 0x1193d8: 0xc1783  sra         $v0, $t4, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193d4) {
            ctx->pc = 0x1193ECu;
            goto label_1193ec;
        }
    }
    ctx->pc = 0x1193DCu;
    // 0x1193dc: 0xc047574  jal         func_11D5D0
    ctx->pc = 0x1193DCu;
    SET_GPR_U32(ctx, 31, 0x1193E4u);
    ctx->pc = 0x1193E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1193DCu;
            // 0x1193e0: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D5D0u;
    if (runtime->hasFunction(0x11D5D0u)) {
        auto targetFn = runtime->lookupFunction(0x11D5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1193E4u; }
        if (ctx->pc != 0x1193E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan_0x11d5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1193E4u; }
        if (ctx->pc != 0x1193E4u) { return; }
    }
    ctx->pc = 0x1193E4u;
label_1193e4:
    // 0x1193e4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1193E4u;
    {
        const bool branch_taken_0x1193e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1193E4u;
            // 0x1193e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193e4) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x1193ECu;
label_1193ec:
    // 0x1193ec: 0x927c2  srl         $a0, $t1, 31
    ctx->pc = 0x1193ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1193f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1193f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1193f4: 0x1061825  or          $v1, $t0, $a2
    ctx->pc = 0x1193f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x1193f8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1193F8u;
    {
        const bool branch_taken_0x1193f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1193FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1193F8u;
            // 0x1193fc: 0x828025  or          $s0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193f8) {
            ctx->pc = 0x11942Cu;
            goto label_11942c;
        }
    }
    ctx->pc = 0x119400u;
    // 0x119400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x119400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119404: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x119404u;
    {
        const bool branch_taken_0x119404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x119408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119404u;
            // 0x119408: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119404) {
            ctx->pc = 0x11952Cu;
            goto label_11952c;
        }
    }
    ctx->pc = 0x11940Cu;
    // 0x11940c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11940Cu;
    {
        const bool branch_taken_0x11940c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11940Cu;
            // 0x119410: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11940c) {
            ctx->pc = 0x119424u;
            goto label_119424;
        }
    }
    ctx->pc = 0x119414u;
    // 0x119414: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x119414u;
    {
        const bool branch_taken_0x119414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x119418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119414u;
            // 0x119418: 0x1471025  or          $v0, $t2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119414) {
            ctx->pc = 0x11953Cu;
            goto label_11953c;
        }
    }
    ctx->pc = 0x11941Cu;
    // 0x11941c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11941Cu;
    {
        const bool branch_taken_0x11941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11941c) {
            ctx->pc = 0x119430u;
            goto label_119430;
        }
    }
    ctx->pc = 0x119424u;
label_119424:
    // 0x119424: 0x601008f  bgez        $s0, . + 4 + (0x8F << 2)
    ctx->pc = 0x119424u;
    {
        const bool branch_taken_0x119424 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x119428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119424u;
            // 0x119428: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119424) {
            ctx->pc = 0x119664u;
            goto label_119664;
        }
    }
    ctx->pc = 0x11942Cu;
label_11942c:
    // 0x11942c: 0x1471025  or          $v0, $t2, $a3
    ctx->pc = 0x11942cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
label_119430:
    // 0x119430: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119430u;
    {
        const bool branch_taken_0x119430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119430u;
            // 0x119434: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119430) {
            ctx->pc = 0x119458u;
            goto label_119458;
        }
    }
    ctx->pc = 0x119438u;
    // 0x119438: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11943c: 0xdc220e10  ld          $v0, 0xE10($at)
    ctx->pc = 0x11943cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3600)));
    // 0x119440: 0x5210089  bgez        $t1, . + 4 + (0x89 << 2)
    ctx->pc = 0x119440u;
    {
        const bool branch_taken_0x119440 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x119444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119440u;
            // 0x119444: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119440) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x119448u;
    // 0x119448: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11944c: 0xdc220e18  ld          $v0, 0xE18($at)
    ctx->pc = 0x11944cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3608)));
    // 0x119450: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x119450u;
    {
        const bool branch_taken_0x119450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119450u;
            // 0x119454: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119450) {
            ctx->pc = 0x11966Cu;
            goto label_11966c;
        }
    }
    ctx->pc = 0x119458u;
label_119458:
    // 0x119458: 0x1542003c  bne         $t2, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x119458u;
    {
        const bool branch_taken_0x119458 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x11945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119458u;
            // 0x11945c: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119458) {
            ctx->pc = 0x11954Cu;
            goto label_11954c;
        }
    }
    ctx->pc = 0x119460u;
    // 0x119460: 0x150a001f  bne         $t0, $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x119460u;
    {
        const bool branch_taken_0x119460 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x119464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119460u;
            // 0x119464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119460) {
            ctx->pc = 0x1194E0u;
            goto label_1194e0;
        }
    }
    ctx->pc = 0x119468u;
    // 0x119468: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x119468u;
    {
        const bool branch_taken_0x119468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11946Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119468u;
            // 0x11946c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119468) {
            ctx->pc = 0x1194B0u;
            goto label_1194b0;
        }
    }
    ctx->pc = 0x119470u;
    // 0x119470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119470u;
    {
        const bool branch_taken_0x119470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119470u;
            // 0x119474: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119470) {
            ctx->pc = 0x119488u;
            goto label_119488;
        }
    }
    ctx->pc = 0x119478u;
    // 0x119478: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119478u;
    {
        const bool branch_taken_0x119478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119478u;
            // 0x11947c: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119478) {
            ctx->pc = 0x1194A0u;
            goto label_1194a0;
        }
    }
    ctx->pc = 0x119480u;
    // 0x119480: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x119480u;
    {
        const bool branch_taken_0x119480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119480) {
            ctx->pc = 0x11954Cu;
            goto label_11954c;
        }
    }
    ctx->pc = 0x119488u;
label_119488:
    // 0x119488: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x119488u;
    {
        const bool branch_taken_0x119488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11948Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119488u;
            // 0x11948c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119488) {
            ctx->pc = 0x1194C0u;
            goto label_1194c0;
        }
    }
    ctx->pc = 0x119490u;
    // 0x119490: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x119490u;
    {
        const bool branch_taken_0x119490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x119494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119490u;
            // 0x119494: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119490) {
            ctx->pc = 0x1194D0u;
            goto label_1194d0;
        }
    }
    ctx->pc = 0x119498u;
    // 0x119498: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x119498u;
    {
        const bool branch_taken_0x119498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119498) {
            ctx->pc = 0x11954Cu;
            goto label_11954c;
        }
    }
    ctx->pc = 0x1194A0u;
label_1194a0:
    // 0x1194a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1194a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1194a4: 0xdc220e20  ld          $v0, 0xE20($at)
    ctx->pc = 0x1194a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3616)));
    // 0x1194a8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1194A8u;
    {
        const bool branch_taken_0x1194a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194A8u;
            // 0x1194ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194a8) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x1194B0u;
label_1194b0:
    // 0x1194b0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1194b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1194b4: 0xdc220e28  ld          $v0, 0xE28($at)
    ctx->pc = 0x1194b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3624)));
    // 0x1194b8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1194B8u;
    {
        const bool branch_taken_0x1194b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194B8u;
            // 0x1194bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194b8) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x1194C0u;
label_1194c0:
    // 0x1194c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1194c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1194c4: 0xdc220e30  ld          $v0, 0xE30($at)
    ctx->pc = 0x1194c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3632)));
    // 0x1194c8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1194C8u;
    {
        const bool branch_taken_0x1194c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194C8u;
            // 0x1194cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194c8) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x1194D0u;
label_1194d0:
    // 0x1194d0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1194d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1194d4: 0xdc220e38  ld          $v0, 0xE38($at)
    ctx->pc = 0x1194d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3640)));
    // 0x1194d8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1194D8u;
    {
        const bool branch_taken_0x1194d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194D8u;
            // 0x1194dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194d8) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x1194E0u;
label_1194e0:
    // 0x1194e0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1194E0u;
    {
        const bool branch_taken_0x1194e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1194E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194E0u;
            // 0x1194e4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194e0) {
            ctx->pc = 0x119520u;
            goto label_119520;
        }
    }
    ctx->pc = 0x1194E8u;
    // 0x1194e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1194E8u;
    {
        const bool branch_taken_0x1194e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194E8u;
            // 0x1194ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194e8) {
            ctx->pc = 0x119500u;
            goto label_119500;
        }
    }
    ctx->pc = 0x1194F0u;
    // 0x1194f0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1194F0u;
    {
        const bool branch_taken_0x1194f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194F0u;
            // 0x1194f4: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194f0) {
            ctx->pc = 0x119518u;
            goto label_119518;
        }
    }
    ctx->pc = 0x1194F8u;
    // 0x1194f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1194F8u;
    {
        const bool branch_taken_0x1194f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1194f8) {
            ctx->pc = 0x11954Cu;
            goto label_11954c;
        }
    }
    ctx->pc = 0x119500u;
label_119500:
    // 0x119500: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119500u;
    {
        const bool branch_taken_0x119500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x119504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119500u;
            // 0x119504: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119500) {
            ctx->pc = 0x11952Cu;
            goto label_11952c;
        }
    }
    ctx->pc = 0x119508u;
    // 0x119508: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x119508u;
    {
        const bool branch_taken_0x119508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11950Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119508u;
            // 0x11950c: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119508) {
            ctx->pc = 0x11953Cu;
            goto label_11953c;
        }
    }
    ctx->pc = 0x119510u;
    // 0x119510: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x119510u;
    {
        const bool branch_taken_0x119510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119510) {
            ctx->pc = 0x11954Cu;
            goto label_11954c;
        }
    }
    ctx->pc = 0x119518u;
label_119518:
    // 0x119518: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x119518u;
    {
        const bool branch_taken_0x119518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119518u;
            // 0x11951c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119518) {
            ctx->pc = 0x119664u;
            goto label_119664;
        }
    }
    ctx->pc = 0x119520u;
label_119520:
    // 0x119520: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x119520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x119524: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x119524u;
    {
        const bool branch_taken_0x119524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119524u;
            // 0x119528: 0xdc620e08  ld          $v0, 0xE08($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 3592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119524) {
            ctx->pc = 0x119664u;
            goto label_119664;
        }
    }
    ctx->pc = 0x11952Cu;
label_11952c:
    // 0x11952c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119530: 0xdc220e40  ld          $v0, 0xE40($at)
    ctx->pc = 0x119530u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3648)));
    // 0x119534: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x119534u;
    {
        const bool branch_taken_0x119534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119534u;
            // 0x119538: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119534) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x11953Cu;
label_11953c:
    // 0x11953c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119540: 0xdc220e48  ld          $v0, 0xE48($at)
    ctx->pc = 0x119540u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3656)));
    // 0x119544: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x119544u;
    {
        const bool branch_taken_0x119544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119544u;
            // 0x119548: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119544) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x11954Cu;
label_11954c:
    // 0x11954c: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11954Cu;
    {
        const bool branch_taken_0x11954c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x119550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11954Cu;
            // 0x119550: 0x10a1023  subu        $v0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11954c) {
            ctx->pc = 0x119574u;
            goto label_119574;
        }
    }
    ctx->pc = 0x119554u;
    // 0x119554: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119558: 0xdc220e50  ld          $v0, 0xE50($at)
    ctx->pc = 0x119558u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3664)));
    // 0x11955c: 0x5210042  bgez        $t1, . + 4 + (0x42 << 2)
    ctx->pc = 0x11955Cu;
    {
        const bool branch_taken_0x11955c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x119560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11955Cu;
            // 0x119560: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11955c) {
            ctx->pc = 0x119668u;
            goto label_119668;
        }
    }
    ctx->pc = 0x119564u;
    // 0x119564: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119568: 0xdc220e58  ld          $v0, 0xE58($at)
    ctx->pc = 0x119568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 3672)));
    // 0x11956c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x11956Cu;
    {
        const bool branch_taken_0x11956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11956Cu;
            // 0x119570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11956c) {
            ctx->pc = 0x11966Cu;
            goto label_11966c;
        }
    }
    ctx->pc = 0x119574u;
label_119574:
    // 0x119574: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x119574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x119578: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x119578u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x11957c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11957Cu;
    {
        const bool branch_taken_0x11957c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11957c) {
            ctx->pc = 0x119594u;
            goto label_119594;
        }
    }
    ctx->pc = 0x119584u;
    // 0x119584: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119588: 0xdc230e60  ld          $v1, 0xE60($at)
    ctx->pc = 0x119588u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 3680)));
    // 0x11958c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11958Cu;
    {
        const bool branch_taken_0x11958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11958Cu;
            // 0x119590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11958c) {
            ctx->pc = 0x1195C4u;
            goto label_1195c4;
        }
    }
    ctx->pc = 0x119594u;
label_119594:
    // 0x119594: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x119594u;
    {
        const bool branch_taken_0x119594 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x119598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119594u;
            // 0x119598: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119594) {
            ctx->pc = 0x1195A4u;
            goto label_1195a4;
        }
    }
    ctx->pc = 0x11959Cu;
    // 0x11959c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11959Cu;
    {
        const bool branch_taken_0x11959c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1195A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11959Cu;
            // 0x1195a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11959c) {
            ctx->pc = 0x1195C0u;
            goto label_1195c0;
        }
    }
    ctx->pc = 0x1195A4u;
label_1195a4:
    // 0x1195a4: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x1195A4u;
    SET_GPR_U32(ctx, 31, 0x1195ACu);
    ctx->pc = 0x1195A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1195A4u;
            // 0x1195a8: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195ACu; }
        if (ctx->pc != 0x1195ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195ACu; }
        if (ctx->pc != 0x1195ACu) { return; }
    }
    ctx->pc = 0x1195ACu;
label_1195ac:
    // 0x1195ac: 0xc0476cc  jal         func_11DB30
    ctx->pc = 0x1195ACu;
    SET_GPR_U32(ctx, 31, 0x1195B4u);
    ctx->pc = 0x1195B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1195ACu;
            // 0x1195b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DB30u;
    if (runtime->hasFunction(0x11DB30u)) {
        auto targetFn = runtime->lookupFunction(0x11DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195B4u; }
        if (ctx->pc != 0x1195B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fabs_0x11db30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195B4u; }
        if (ctx->pc != 0x1195B4u) { return; }
    }
    ctx->pc = 0x1195B4u;
label_1195b4:
    // 0x1195b4: 0xc047574  jal         func_11D5D0
    ctx->pc = 0x1195B4u;
    SET_GPR_U32(ctx, 31, 0x1195BCu);
    ctx->pc = 0x1195B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1195B4u;
            // 0x1195b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D5D0u;
    if (runtime->hasFunction(0x11D5D0u)) {
        auto targetFn = runtime->lookupFunction(0x11D5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195BCu; }
        if (ctx->pc != 0x1195BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan_0x11d5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195BCu; }
        if (ctx->pc != 0x1195BCu) { return; }
    }
    ctx->pc = 0x1195BCu;
label_1195bc:
    // 0x1195bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1195bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1195c0:
    // 0x1195c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1195c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1195c4:
    // 0x1195c4: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1195C4u;
    {
        const bool branch_taken_0x1195c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1195C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195C4u;
            // 0x1195c8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195c4) {
            ctx->pc = 0x1195F8u;
            goto label_1195f8;
        }
    }
    ctx->pc = 0x1195CCu;
    // 0x1195cc: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1195ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1195d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1195D0u;
    {
        const bool branch_taken_0x1195d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195D0u;
            // 0x1195d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195d0) {
            ctx->pc = 0x1195E8u;
            goto label_1195e8;
        }
    }
    ctx->pc = 0x1195D8u;
    // 0x1195d8: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1195D8u;
    {
        const bool branch_taken_0x1195d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195D8u;
            // 0x1195dc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195d8) {
            ctx->pc = 0x119664u;
            goto label_119664;
        }
    }
    ctx->pc = 0x1195E0u;
    // 0x1195e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1195E0u;
    {
        const bool branch_taken_0x1195e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1195e0) {
            ctx->pc = 0x119640u;
            goto label_119640;
        }
    }
    ctx->pc = 0x1195E8u;
label_1195e8:
    // 0x1195e8: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1195E8u;
    {
        const bool branch_taken_0x1195e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1195e8) {
            ctx->pc = 0x119620u;
            goto label_119620;
        }
    }
    ctx->pc = 0x1195F0u;
    // 0x1195f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1195F0u;
    {
        const bool branch_taken_0x1195f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1195f0) {
            ctx->pc = 0x119640u;
            goto label_119640;
        }
    }
    ctx->pc = 0x1195F8u;
label_1195f8:
    // 0x1195f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1195f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1195fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1195fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x119600: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x119600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x119604: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x119604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x119608: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x119608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x11960c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x11960cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x119610: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x119610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119614: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x119614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x119618: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x119618u;
    {
        const bool branch_taken_0x119618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119618u;
            // 0x11961c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119618) {
            ctx->pc = 0x119664u;
            goto label_119664;
        }
    }
    ctx->pc = 0x119620u;
label_119620:
    // 0x119620: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119624: 0xdc250e68  ld          $a1, 0xE68($at)
    ctx->pc = 0x119624u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 3688)));
    // 0x119628: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119628u;
    SET_GPR_U32(ctx, 31, 0x119630u);
    ctx->pc = 0x11962Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119628u;
            // 0x11962c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119630u; }
        if (ctx->pc != 0x119630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119630u; }
        if (ctx->pc != 0x119630u) { return; }
    }
    ctx->pc = 0x119630u;
label_119630:
    // 0x119630: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119634: 0xdc240e70  ld          $a0, 0xE70($at)
    ctx->pc = 0x119634u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 3696)));
    // 0x119638: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x119638u;
    {
        const bool branch_taken_0x119638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11963Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119638u;
            // 0x11963c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119638) {
            ctx->pc = 0x11965Cu;
            goto label_11965c;
        }
    }
    ctx->pc = 0x119640u;
label_119640:
    // 0x119640: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119644: 0xdc250e78  ld          $a1, 0xE78($at)
    ctx->pc = 0x119644u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 3704)));
    // 0x119648: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119648u;
    SET_GPR_U32(ctx, 31, 0x119650u);
    ctx->pc = 0x11964Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119648u;
            // 0x11964c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119650u; }
        if (ctx->pc != 0x119650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119650u; }
        if (ctx->pc != 0x119650u) { return; }
    }
    ctx->pc = 0x119650u;
label_119650:
    // 0x119650: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119654: 0xdc250e80  ld          $a1, 0xE80($at)
    ctx->pc = 0x119654u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 3712)));
    // 0x119658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11965c:
    // 0x11965c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11965Cu;
    SET_GPR_U32(ctx, 31, 0x119664u);
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119664u; }
        if (ctx->pc != 0x119664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119664u; }
        if (ctx->pc != 0x119664u) { return; }
    }
    ctx->pc = 0x119664u;
label_119664:
    // 0x119664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_119668:
    // 0x119668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11966c:
    // 0x11966c: 0x3e00008  jr          $ra
    ctx->pc = 0x11966Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11966Cu;
            // 0x119670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119674u;
}
