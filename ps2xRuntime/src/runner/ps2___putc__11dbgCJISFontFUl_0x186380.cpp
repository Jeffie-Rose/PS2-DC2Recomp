#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __putc__11dbgCJISFontFUl
// Address: 0x186380 - 0x186824
void ps2___putc__11dbgCJISFontFUl_0x186380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___putc__11dbgCJISFontFUl_0x186380");
#endif

    switch (ctx->pc) {
        case 0x1863e4u: goto label_1863e4;
        case 0x1863f4u: goto label_1863f4;
        case 0x186430u: goto label_186430;
        case 0x186440u: goto label_186440;
        case 0x186470u: goto label_186470;
        case 0x186480u: goto label_186480;
        case 0x186494u: goto label_186494;
        case 0x1864a4u: goto label_1864a4;
        case 0x1864b0u: goto label_1864b0;
        case 0x1864bcu: goto label_1864bc;
        case 0x1864c8u: goto label_1864c8;
        case 0x1864e0u: goto label_1864e0;
        case 0x1864f8u: goto label_1864f8;
        case 0x186514u: goto label_186514;
        case 0x18654cu: goto label_18654c;
        case 0x186554u: goto label_186554;
        case 0x186560u: goto label_186560;
        case 0x186578u: goto label_186578;
        case 0x186584u: goto label_186584;
        case 0x18659cu: goto label_18659c;
        case 0x1865d0u: goto label_1865d0;
        case 0x1865ecu: goto label_1865ec;
        case 0x186618u: goto label_186618;
        case 0x186650u: goto label_186650;
        case 0x186658u: goto label_186658;
        case 0x186664u: goto label_186664;
        case 0x186670u: goto label_186670;
        case 0x186688u: goto label_186688;
        case 0x1866bcu: goto label_1866bc;
        case 0x1866d0u: goto label_1866d0;
        case 0x186710u: goto label_186710;
        case 0x186740u: goto label_186740;
        case 0x186778u: goto label_186778;
        case 0x1867a4u: goto label_1867a4;
        case 0x1867d8u: goto label_1867d8;
        case 0x1867e0u: goto label_1867e0;
        default: break;
    }

    ctx->pc = 0x186380u;

    // 0x186380: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x186380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x186384: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x186384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x186388: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x186388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18638c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x186390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x186390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x186394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186398: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x186398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18639c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1863a0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1863a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1863a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1863a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1863a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1863a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1863acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863b0: 0x2e012285  sltiu       $at, $s0, 0x2285
    ctx->pc = 0x1863b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8837) ? 1 : 0);
    // 0x1863b4: 0x10200112  beqz        $at, . + 4 + (0x112 << 2)
    ctx->pc = 0x1863B4u;
    {
        const bool branch_taken_0x1863b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863B4u;
            // 0x1863b8: 0x26521ef0  addiu       $s2, $s2, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863b4) {
            ctx->pc = 0x186800u;
            goto label_186800;
        }
    }
    ctx->pc = 0x1863BCu;
    // 0x1863bc: 0x2e022000  sltiu       $v0, $s0, 0x2000
    ctx->pc = 0x1863bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x1863c0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1863C0u;
    {
        const bool branch_taken_0x1863c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1863C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863C0u;
            // 0x1863c4: 0x2e021000  sltiu       $v0, $s0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863c0) {
            ctx->pc = 0x18640Cu;
            goto label_18640c;
        }
    }
    ctx->pc = 0x1863C8u;
    // 0x1863c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1863c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1863cc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1863ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1863d0: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1863D0u;
    {
        const bool branch_taken_0x1863d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1863D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863D0u;
            // 0x1863d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863d0) {
            ctx->pc = 0x1863E8u;
            goto label_1863e8;
        }
    }
    ctx->pc = 0x1863D8u;
    // 0x1863d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1863d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863dc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1863DCu;
    SET_GPR_U32(ctx, 31, 0x1863E4u);
    ctx->pc = 0x1863E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1863DCu;
            // 0x1863e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1863E4u; }
        if (ctx->pc != 0x1863E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1863E4u; }
        if (ctx->pc != 0x1863E4u) { return; }
    }
    ctx->pc = 0x1863E4u;
label_1863e4:
    // 0x1863e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1863e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1863e8:
    // 0x1863e8: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x1863e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1863ec: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1863ECu;
    SET_GPR_U32(ctx, 31, 0x1863F4u);
    ctx->pc = 0x1863F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1863ECu;
            // 0x1863f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1863F4u; }
        if (ctx->pc != 0x1863F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1863F4u; }
        if (ctx->pc != 0x1863F4u) { return; }
    }
    ctx->pc = 0x1863F4u;
label_1863f4:
    // 0x1863f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1863f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863f8: 0x6610e000  daddiu      $s0, $s0, -0x2000
    ctx->pc = 0x1863f8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294959104);
    // 0x1863fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1863fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x186400: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x186400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x186404: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x186404u;
    {
        const bool branch_taken_0x186404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186404u;
            // 0x186408: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186404) {
            ctx->pc = 0x18648Cu;
            goto label_18648c;
        }
    }
    ctx->pc = 0x18640Cu;
label_18640c:
    // 0x18640c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18640Cu;
    {
        const bool branch_taken_0x18640c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18640c) {
            ctx->pc = 0x186454u;
            goto label_186454;
        }
    }
    ctx->pc = 0x186414u;
    // 0x186414: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x186414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x186418: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x186418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18641c: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18641Cu;
    {
        const bool branch_taken_0x18641c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x186420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18641Cu;
            // 0x186420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18641c) {
            ctx->pc = 0x186434u;
            goto label_186434;
        }
    }
    ctx->pc = 0x186424u;
    // 0x186424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186428: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x186428u;
    SET_GPR_U32(ctx, 31, 0x186430u);
    ctx->pc = 0x18642Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186428u;
            // 0x18642c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186430u; }
        if (ctx->pc != 0x186430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186430u; }
        if (ctx->pc != 0x186430u) { return; }
    }
    ctx->pc = 0x186430u;
label_186430:
    // 0x186430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186434:
    // 0x186434: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x186434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x186438: 0xc04b414  jal         func_12D050
    ctx->pc = 0x186438u;
    SET_GPR_U32(ctx, 31, 0x186440u);
    ctx->pc = 0x18643Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186438u;
            // 0x18643c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186440u; }
        if (ctx->pc != 0x186440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186440u; }
        if (ctx->pc != 0x186440u) { return; }
    }
    ctx->pc = 0x186440u;
label_186440:
    // 0x186440: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x186440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186444: 0x6610f000  daddiu      $s0, $s0, -0x1000
    ctx->pc = 0x186444u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294963200);
    // 0x186448: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x186448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18644c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18644Cu;
    {
        const bool branch_taken_0x18644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18644Cu;
            // 0x186450: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18644c) {
            ctx->pc = 0x18648Cu;
            goto label_18648c;
        }
    }
    ctx->pc = 0x186454u;
label_186454:
    // 0x186454: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x186454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x186458: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x186458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18645c: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18645Cu;
    {
        const bool branch_taken_0x18645c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x186460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18645Cu;
            // 0x186460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18645c) {
            ctx->pc = 0x186474u;
            goto label_186474;
        }
    }
    ctx->pc = 0x186464u;
    // 0x186464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186468: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x186468u;
    SET_GPR_U32(ctx, 31, 0x186470u);
    ctx->pc = 0x18646Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186468u;
            // 0x18646c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186470u; }
        if (ctx->pc != 0x186470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186470u; }
        if (ctx->pc != 0x186470u) { return; }
    }
    ctx->pc = 0x186470u;
label_186470:
    // 0x186470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186474:
    // 0x186474: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x186474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x186478: 0xc04b414  jal         func_12D050
    ctx->pc = 0x186478u;
    SET_GPR_U32(ctx, 31, 0x186480u);
    ctx->pc = 0x18647Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186478u;
            // 0x18647c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186480u; }
        if (ctx->pc != 0x186480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186480u; }
        if (ctx->pc != 0x186480u) { return; }
    }
    ctx->pc = 0x186480u;
label_186480:
    // 0x186480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x186480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186484: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x186484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186488: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x186488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_18648c:
    // 0x18648c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x18648Cu;
    SET_GPR_U32(ctx, 31, 0x186494u);
    ctx->pc = 0x186490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18648Cu;
            // 0x186490: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186494u; }
        if (ctx->pc != 0x186494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186494u; }
        if (ctx->pc != 0x186494u) { return; }
    }
    ctx->pc = 0x186494u;
label_186494:
    // 0x186494: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18649c: 0xc04d104  jal         func_134410
    ctx->pc = 0x18649Cu;
    SET_GPR_U32(ctx, 31, 0x1864A4u);
    ctx->pc = 0x1864A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18649Cu;
            // 0x1864a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864A4u; }
        if (ctx->pc != 0x1864A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864A4u; }
        if (ctx->pc != 0x1864A4u) { return; }
    }
    ctx->pc = 0x1864A4u;
label_1864a4:
    // 0x1864a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1864a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1864a8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1864A8u;
    SET_GPR_U32(ctx, 31, 0x1864B0u);
    ctx->pc = 0x1864ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864A8u;
            // 0x1864ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864B0u; }
        if (ctx->pc != 0x1864B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864B0u; }
        if (ctx->pc != 0x1864B0u) { return; }
    }
    ctx->pc = 0x1864B0u;
label_1864b0:
    // 0x1864b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1864b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1864b4: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1864B4u;
    SET_GPR_U32(ctx, 31, 0x1864BCu);
    ctx->pc = 0x1864B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864B4u;
            // 0x1864b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864BCu; }
        if (ctx->pc != 0x1864BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864BCu; }
        if (ctx->pc != 0x1864BCu) { return; }
    }
    ctx->pc = 0x1864BCu;
label_1864bc:
    // 0x1864bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1864bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1864c0: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1864C0u;
    SET_GPR_U32(ctx, 31, 0x1864C8u);
    ctx->pc = 0x1864C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864C0u;
            // 0x1864c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864C8u; }
        if (ctx->pc != 0x1864C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864C8u; }
        if (ctx->pc != 0x1864C8u) { return; }
    }
    ctx->pc = 0x1864C8u;
label_1864c8:
    // 0x1864c8: 0x8e220898  lw          $v0, 0x898($s1)
    ctx->pc = 0x1864c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x1864cc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1864CCu;
    {
        const bool branch_taken_0x1864cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1864CCu;
            // 0x1864d0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864cc) {
            ctx->pc = 0x186558u;
            goto label_186558;
        }
    }
    ctx->pc = 0x1864D4u;
    // 0x1864d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1864d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1864d8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1864D8u;
    SET_GPR_U32(ctx, 31, 0x1864E0u);
    ctx->pc = 0x1864DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864D8u;
            // 0x1864dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864E0u; }
        if (ctx->pc != 0x1864E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864E0u; }
        if (ctx->pc != 0x1864E0u) { return; }
    }
    ctx->pc = 0x1864E0u;
label_1864e0:
    // 0x1864e0: 0x8e25089c  lw          $a1, 0x89C($s1)
    ctx->pc = 0x1864e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2204)));
    // 0x1864e4: 0x8e2608a0  lw          $a2, 0x8A0($s1)
    ctx->pc = 0x1864e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2208)));
    // 0x1864e8: 0x8e2708a4  lw          $a3, 0x8A4($s1)
    ctx->pc = 0x1864e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2212)));
    // 0x1864ec: 0x8e2808a8  lw          $t0, 0x8A8($s1)
    ctx->pc = 0x1864ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2216)));
    // 0x1864f0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1864F0u;
    SET_GPR_U32(ctx, 31, 0x1864F8u);
    ctx->pc = 0x1864F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1864F0u;
            // 0x1864f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864F8u; }
        if (ctx->pc != 0x1864F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864F8u; }
        if (ctx->pc != 0x1864F8u) { return; }
    }
    ctx->pc = 0x1864F8u;
label_1864f8:
    // 0x1864f8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1864f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1864fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1864fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186500: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x186500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x186504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186508: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18650c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x18650Cu;
    SET_GPR_U32(ctx, 31, 0x186514u);
    ctx->pc = 0x186510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18650Cu;
            // 0x186510: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186514u; }
        if (ctx->pc != 0x186514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186514u; }
        if (ctx->pc != 0x186514u) { return; }
    }
    ctx->pc = 0x186514u;
label_186514:
    // 0x186514: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x186514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x186518: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x186518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x18651c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x18651cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186520: 0x8e280078  lw          $t0, 0x78($s1)
    ctx->pc = 0x186520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x186524: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x186524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x186528: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18652c: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x18652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x186530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186534: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x186534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x186538: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x186538u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x18653c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18653cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x186540: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x186540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186544: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x186544u;
    SET_GPR_U32(ctx, 31, 0x18654Cu);
    ctx->pc = 0x186548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186544u;
            // 0x186548: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18654Cu; }
        if (ctx->pc != 0x18654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18654Cu; }
        if (ctx->pc != 0x18654Cu) { return; }
    }
    ctx->pc = 0x18654Cu;
label_18654c:
    // 0x18654c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x18654Cu;
    SET_GPR_U32(ctx, 31, 0x186554u);
    ctx->pc = 0x186550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18654Cu;
            // 0x186550: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186554u; }
        if (ctx->pc != 0x186554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186554u; }
        if (ctx->pc != 0x186554u) { return; }
    }
    ctx->pc = 0x186554u;
label_186554:
    // 0x186554: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186558:
    // 0x186558: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x186558u;
    SET_GPR_U32(ctx, 31, 0x186560u);
    ctx->pc = 0x18655Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186558u;
            // 0x18655c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186560u; }
        if (ctx->pc != 0x186560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186560u; }
        if (ctx->pc != 0x186560u) { return; }
    }
    ctx->pc = 0x186560u;
label_186560:
    // 0x186560: 0x8e2208ac  lw          $v0, 0x8AC($s1)
    ctx->pc = 0x186560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
    // 0x186564: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x186564u;
    {
        const bool branch_taken_0x186564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186564u;
            // 0x186568: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186564) {
            ctx->pc = 0x18665Cu;
            goto label_18665c;
        }
    }
    ctx->pc = 0x18656Cu;
    // 0x18656c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186570: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x186570u;
    SET_GPR_U32(ctx, 31, 0x186578u);
    ctx->pc = 0x186574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186570u;
            // 0x186574: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186578u; }
        if (ctx->pc != 0x186578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186578u; }
        if (ctx->pc != 0x186578u) { return; }
    }
    ctx->pc = 0x186578u;
label_186578:
    // 0x186578: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18657c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x18657Cu;
    SET_GPR_U32(ctx, 31, 0x186584u);
    ctx->pc = 0x186580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18657Cu;
            // 0x186580: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186584u; }
        if (ctx->pc != 0x186584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186584u; }
        if (ctx->pc != 0x186584u) { return; }
    }
    ctx->pc = 0x186584u;
label_186584:
    // 0x186584: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18658c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18658cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186594: 0xc04d320  jal         func_134C80
    ctx->pc = 0x186594u;
    SET_GPR_U32(ctx, 31, 0x18659Cu);
    ctx->pc = 0x186598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186594u;
            // 0x186598: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18659Cu; }
        if (ctx->pc != 0x18659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18659Cu; }
        if (ctx->pc != 0x18659Cu) { return; }
    }
    ctx->pc = 0x18659Cu;
label_18659c:
    // 0x18659c: 0x3202003f  andi        $v0, $s0, 0x3F
    ctx->pc = 0x18659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x1865a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1865a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1865a4: 0x2a938  dsll        $s5, $v0, 4
    ctx->pc = 0x1865a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << 4);
    // 0x1865a8: 0x202102f  dsubu       $v0, $s0, $v0
    ctx->pc = 0x1865a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
    // 0x1865ac: 0x66a30001  daddiu      $v1, $s5, 0x1
    ctx->pc = 0x1865acu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)1);
    // 0x1865b0: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x1865b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x1865b4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1865b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1865b8: 0x2a138  dsll        $s4, $v0, 4
    ctx->pc = 0x1865b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << 4);
    // 0x1865bc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1865bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1865c0: 0x66820001  daddiu      $v0, $s4, 0x1
    ctx->pc = 0x1865c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x1865c4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1865c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1865c8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1865C8u;
    SET_GPR_U32(ctx, 31, 0x1865D0u);
    ctx->pc = 0x1865CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865C8u;
            // 0x1865cc: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865D0u; }
        if (ctx->pc != 0x1865D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865D0u; }
        if (ctx->pc != 0x1865D0u) { return; }
    }
    ctx->pc = 0x1865D0u;
label_1865d0:
    // 0x1865d0: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1865d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1865d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1865d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1865d8: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x1865d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1865dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1865dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865e0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1865e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1865e4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1865E4u;
    SET_GPR_U32(ctx, 31, 0x1865ECu);
    ctx->pc = 0x1865E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865E4u;
            // 0x1865e8: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865ECu; }
        if (ctx->pc != 0x1865ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865ECu; }
        if (ctx->pc != 0x1865ECu) { return; }
    }
    ctx->pc = 0x1865ECu;
label_1865ec:
    // 0x1865ec: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1865ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1865f0: 0x6682000f  daddiu      $v0, $s4, 0xF
    ctx->pc = 0x1865f0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)15);
    // 0x1865f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1865f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1865f8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1865f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1865fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1865fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x186600: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x186600u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x186604: 0x75102d  daddu       $v0, $v1, $s5
    ctx->pc = 0x186604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 21));
    // 0x186608: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18660c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x18660cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x186610: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x186610u;
    SET_GPR_U32(ctx, 31, 0x186618u);
    ctx->pc = 0x186614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186610u;
            // 0x186614: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186618u; }
        if (ctx->pc != 0x186618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186618u; }
        if (ctx->pc != 0x186618u) { return; }
    }
    ctx->pc = 0x186618u;
label_186618:
    // 0x186618: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x186618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18661c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x18661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x186620: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x186620u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186624: 0x8e280078  lw          $t0, 0x78($s1)
    ctx->pc = 0x186624u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x186628: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x186628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x18662c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186630: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x186630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x186634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186638: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x186638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x18663c: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x18663cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x186640: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x186640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x186644: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x186644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186648: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x186648u;
    SET_GPR_U32(ctx, 31, 0x186650u);
    ctx->pc = 0x18664Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186648u;
            // 0x18664c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186650u; }
        if (ctx->pc != 0x186650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186650u; }
        if (ctx->pc != 0x186650u) { return; }
    }
    ctx->pc = 0x186650u;
label_186650:
    // 0x186650: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x186650u;
    SET_GPR_U32(ctx, 31, 0x186658u);
    ctx->pc = 0x186654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186650u;
            // 0x186654: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186658u; }
        if (ctx->pc != 0x186658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186658u; }
        if (ctx->pc != 0x186658u) { return; }
    }
    ctx->pc = 0x186658u;
label_186658:
    // 0x186658: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18665c:
    // 0x18665c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x18665Cu;
    SET_GPR_U32(ctx, 31, 0x186664u);
    ctx->pc = 0x186660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18665Cu;
            // 0x186660: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186664u; }
        if (ctx->pc != 0x186664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186664u; }
        if (ctx->pc != 0x186664u) { return; }
    }
    ctx->pc = 0x186664u;
label_186664:
    // 0x186664: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186668: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x186668u;
    SET_GPR_U32(ctx, 31, 0x186670u);
    ctx->pc = 0x18666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186668u;
            // 0x18666c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186670u; }
        if (ctx->pc != 0x186670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186670u; }
        if (ctx->pc != 0x186670u) { return; }
    }
    ctx->pc = 0x186670u;
label_186670:
    // 0x186670: 0x8e250888  lw          $a1, 0x888($s1)
    ctx->pc = 0x186670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2184)));
    // 0x186674: 0x8e26088c  lw          $a2, 0x88C($s1)
    ctx->pc = 0x186674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2188)));
    // 0x186678: 0x8e270890  lw          $a3, 0x890($s1)
    ctx->pc = 0x186678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2192)));
    // 0x18667c: 0x8e280894  lw          $t0, 0x894($s1)
    ctx->pc = 0x18667cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x186680: 0xc04d320  jal         func_134C80
    ctx->pc = 0x186680u;
    SET_GPR_U32(ctx, 31, 0x186688u);
    ctx->pc = 0x186684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186680u;
            // 0x186684: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186688u; }
        if (ctx->pc != 0x186688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186688u; }
        if (ctx->pc != 0x186688u) { return; }
    }
    ctx->pc = 0x186688u;
label_186688:
    // 0x186688: 0x3212003f  andi        $s2, $s0, 0x3F
    ctx->pc = 0x186688u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x18668c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18668cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186690: 0x212102f  dsubu       $v0, $s0, $s2
    ctx->pc = 0x186690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 18));
    // 0x186694: 0x12a938  dsll        $s5, $s2, 4
    ctx->pc = 0x186694u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) << 4);
    // 0x186698: 0x281ba  dsrl        $s0, $v0, 6
    ctx->pc = 0x186698u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> 6);
    // 0x18669c: 0x66a20001  daddiu      $v0, $s5, 0x1
    ctx->pc = 0x18669cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)1);
    // 0x1866a0: 0x10a138  dsll        $s4, $s0, 4
    ctx->pc = 0x1866a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << 4);
    // 0x1866a4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1866a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1866a8: 0x66820001  daddiu      $v0, $s4, 0x1
    ctx->pc = 0x1866a8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x1866ac: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1866acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1866b0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1866b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1866b4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1866B4u;
    SET_GPR_U32(ctx, 31, 0x1866BCu);
    ctx->pc = 0x1866B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866B4u;
            // 0x1866b8: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866BCu; }
        if (ctx->pc != 0x1866BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866BCu; }
        if (ctx->pc != 0x1866BCu) { return; }
    }
    ctx->pc = 0x1866BCu;
label_1866bc:
    // 0x1866bc: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x1866bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1866c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1866c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1866c4: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x1866c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1866c8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1866C8u;
    SET_GPR_U32(ctx, 31, 0x1866D0u);
    ctx->pc = 0x1866CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866C8u;
            // 0x1866cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866D0u; }
        if (ctx->pc != 0x1866D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866D0u; }
        if (ctx->pc != 0x1866D0u) { return; }
    }
    ctx->pc = 0x1866D0u;
label_1866d0:
    // 0x1866d0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1866d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1866d4: 0x1642001c  bne         $s2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1866D4u;
    {
        const bool branch_taken_0x1866d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1866d4) {
            ctx->pc = 0x186748u;
            goto label_186748;
        }
    }
    ctx->pc = 0x1866DCu;
    // 0x1866dc: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1866DCu;
    {
        const bool branch_taken_0x1866dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1866E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866DCu;
            // 0x1866e0: 0x2663ffff  addiu       $v1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866dc) {
            ctx->pc = 0x186718u;
            goto label_186718;
        }
    }
    ctx->pc = 0x1866E4u;
    // 0x1866e4: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1866e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1866e8: 0x6682000f  daddiu      $v0, $s4, 0xF
    ctx->pc = 0x1866e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)15);
    // 0x1866ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1866ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1866f0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1866f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1866f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1866f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1866f8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1866f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1866fc: 0x75102d  daddu       $v0, $v1, $s5
    ctx->pc = 0x1866fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 21));
    // 0x186700: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186704: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x186704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x186708: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x186708u;
    SET_GPR_U32(ctx, 31, 0x186710u);
    ctx->pc = 0x18670Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186708u;
            // 0x18670c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186710u; }
        if (ctx->pc != 0x186710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186710u; }
        if (ctx->pc != 0x186710u) { return; }
    }
    ctx->pc = 0x186710u;
label_186710:
    // 0x186710: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x186710u;
    {
        const bool branch_taken_0x186710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186710u;
            // 0x186714: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186710) {
            ctx->pc = 0x1867A8u;
            goto label_1867a8;
        }
    }
    ctx->pc = 0x186718u;
label_186718:
    // 0x186718: 0x66820010  daddiu      $v0, $s4, 0x10
    ctx->pc = 0x186718u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)16);
    // 0x18671c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18671cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x186720: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x186720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x186724: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x186724u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x186728: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x186728u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x18672c: 0x75102d  daddu       $v0, $v1, $s5
    ctx->pc = 0x18672cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 21));
    // 0x186730: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186734: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x186734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x186738: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x186738u;
    SET_GPR_U32(ctx, 31, 0x186740u);
    ctx->pc = 0x18673Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186738u;
            // 0x18673c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186740u; }
        if (ctx->pc != 0x186740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186740u; }
        if (ctx->pc != 0x186740u) { return; }
    }
    ctx->pc = 0x186740u;
label_186740:
    // 0x186740: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x186740u;
    {
        const bool branch_taken_0x186740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186740) {
            ctx->pc = 0x1867A4u;
            goto label_1867a4;
        }
    }
    ctx->pc = 0x186748u;
label_186748:
    // 0x186748: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x186748u;
    {
        const bool branch_taken_0x186748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x18674Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186748u;
            // 0x18674c: 0x13183c  dsll32      $v1, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186748) {
            ctx->pc = 0x186780u;
            goto label_186780;
        }
    }
    ctx->pc = 0x186750u;
    // 0x186750: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x186750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x186754: 0x6682000f  daddiu      $v0, $s4, 0xF
    ctx->pc = 0x186754u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)15);
    // 0x186758: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x186758u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18675c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x18675cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x186760: 0x75182d  daddu       $v1, $v1, $s5
    ctx->pc = 0x186760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 21));
    // 0x186764: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x186764u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x186768: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x186768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18676c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186770: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x186770u;
    SET_GPR_U32(ctx, 31, 0x186778u);
    ctx->pc = 0x186774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186770u;
            // 0x186774: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186778u; }
        if (ctx->pc != 0x186778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186778u; }
        if (ctx->pc != 0x186778u) { return; }
    }
    ctx->pc = 0x186778u;
label_186778:
    // 0x186778: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x186778u;
    {
        const bool branch_taken_0x186778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186778) {
            ctx->pc = 0x1867A4u;
            goto label_1867a4;
        }
    }
    ctx->pc = 0x186780u;
label_186780:
    // 0x186780: 0x66820010  daddiu      $v0, $s4, 0x10
    ctx->pc = 0x186780u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)16);
    // 0x186784: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x186784u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x186788: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x186788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18678c: 0x75182d  daddu       $v1, $v1, $s5
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 21));
    // 0x186790: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x186790u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x186794: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x186794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x186798: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18679c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x18679Cu;
    SET_GPR_U32(ctx, 31, 0x1867A4u);
    ctx->pc = 0x1867A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18679Cu;
            // 0x1867a0: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867A4u; }
        if (ctx->pc != 0x1867A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867A4u; }
        if (ctx->pc != 0x1867A4u) { return; }
    }
    ctx->pc = 0x1867A4u;
label_1867a4:
    // 0x1867a4: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1867a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1867a8:
    // 0x1867a8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1867a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1867ac: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1867b0: 0x8e260078  lw          $a2, 0x78($s1)
    ctx->pc = 0x1867b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1867b4: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x1867b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1867b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1867b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1867bc: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x1867bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1867c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1867c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867c4: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x1867c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1867c8: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x1867c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1867cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1867ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1867d0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1867D0u;
    SET_GPR_U32(ctx, 31, 0x1867D8u);
    ctx->pc = 0x1867D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867D0u;
            // 0x1867d4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867D8u; }
        if (ctx->pc != 0x1867D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867D8u; }
        if (ctx->pc != 0x1867D8u) { return; }
    }
    ctx->pc = 0x1867D8u;
label_1867d8:
    // 0x1867d8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1867D8u;
    SET_GPR_U32(ctx, 31, 0x1867E0u);
    ctx->pc = 0x1867DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867D8u;
            // 0x1867dc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867E0u; }
        if (ctx->pc != 0x1867E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867E0u; }
        if (ctx->pc != 0x1867E0u) { return; }
    }
    ctx->pc = 0x1867E0u;
label_1867e0:
    // 0x1867e0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1867e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1867e4: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1867e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1867e8: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1867e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1867ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1867ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1867f0: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x1867f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x1867f4: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1867f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1867f8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1867f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1867fc: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x1867fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_186800:
    // 0x186800: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x186800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186804: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x186804u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186808: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x186808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18680c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18680cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18681c: 0x3e00008  jr          $ra
    ctx->pc = 0x18681Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18681Cu;
            // 0x186820: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186824u;
}
