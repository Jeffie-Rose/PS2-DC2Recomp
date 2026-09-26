#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EventTimeDraw__Fv
// Address: 0x2617b0 - 0x261f48
void EventTimeDraw__Fv_0x2617b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventTimeDraw__Fv_0x2617b0");
#endif

    switch (ctx->pc) {
        case 0x2617d8u: goto label_2617d8;
        case 0x261858u: goto label_261858;
        case 0x26186cu: goto label_26186c;
        case 0x261878u: goto label_261878;
        case 0x26188cu: goto label_26188c;
        case 0x2618a8u: goto label_2618a8;
        case 0x2618bcu: goto label_2618bc;
        case 0x2618ccu: goto label_2618cc;
        case 0x2618dcu: goto label_2618dc;
        case 0x2618ecu: goto label_2618ec;
        case 0x2618fcu: goto label_2618fc;
        case 0x26190cu: goto label_26190c;
        case 0x26191cu: goto label_26191c;
        case 0x26192cu: goto label_26192c;
        case 0x26193cu: goto label_26193c;
        case 0x26194cu: goto label_26194c;
        case 0x26195cu: goto label_26195c;
        case 0x261a78u: goto label_261a78;
        case 0x261a88u: goto label_261a88;
        case 0x261aa8u: goto label_261aa8;
        case 0x261ab8u: goto label_261ab8;
        case 0x261ac8u: goto label_261ac8;
        case 0x261ad8u: goto label_261ad8;
        case 0x261ae4u: goto label_261ae4;
        case 0x261b00u: goto label_261b00;
        case 0x261b54u: goto label_261b54;
        case 0x261b5cu: goto label_261b5c;
        case 0x261b6cu: goto label_261b6c;
        case 0x261b78u: goto label_261b78;
        case 0x261b80u: goto label_261b80;
        case 0x261b98u: goto label_261b98;
        case 0x261bccu: goto label_261bcc;
        case 0x261c28u: goto label_261c28;
        case 0x261c54u: goto label_261c54;
        case 0x261c6cu: goto label_261c6c;
        case 0x261c80u: goto label_261c80;
        case 0x261cacu: goto label_261cac;
        case 0x261d08u: goto label_261d08;
        case 0x261d18u: goto label_261d18;
        case 0x261d28u: goto label_261d28;
        case 0x261d38u: goto label_261d38;
        case 0x261d48u: goto label_261d48;
        case 0x261d58u: goto label_261d58;
        case 0x261d64u: goto label_261d64;
        case 0x261d70u: goto label_261d70;
        case 0x261d7cu: goto label_261d7c;
        case 0x261d88u: goto label_261d88;
        case 0x261d94u: goto label_261d94;
        case 0x261da0u: goto label_261da0;
        case 0x261dacu: goto label_261dac;
        case 0x261db8u: goto label_261db8;
        case 0x261dc4u: goto label_261dc4;
        case 0x261ddcu: goto label_261ddc;
        case 0x261e10u: goto label_261e10;
        case 0x261eb0u: goto label_261eb0;
        case 0x261edcu: goto label_261edc;
        case 0x261ef4u: goto label_261ef4;
        case 0x261f08u: goto label_261f08;
        case 0x261f20u: goto label_261f20;
        default: break;
    }

    ctx->pc = 0x2617b0u;

    // 0x2617b0: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x2617b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x2617b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2617b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2617b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2617b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2617bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2617bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2617c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2617c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2617c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2617c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2617c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2617c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2617cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2617ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2617d0: 0xc064220  jal         func_190880
    ctx->pc = 0x2617D0u;
    SET_GPR_U32(ctx, 31, 0x2617D8u);
    ctx->pc = 0x2617D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2617D0u;
            // 0x2617d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617D8u; }
        if (ctx->pc != 0x2617D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617D8u; }
        if (ctx->pc != 0x2617D8u) { return; }
    }
    ctx->pc = 0x2617D8u;
label_2617d8:
    // 0x2617d8: 0x104001d1  beqz        $v0, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x2617D8u;
    {
        const bool branch_taken_0x2617d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2617D8u;
            // 0x2617dc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617d8) {
            ctx->pc = 0x261F20u;
            goto label_261f20;
        }
    }
    ctx->pc = 0x2617E0u;
    // 0x2617e0: 0xdc25e600  ld          $a1, -0x1A00($at)
    ctx->pc = 0x2617e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294960640)));
    // 0x2617e4: 0x10a001ce  beqz        $a1, . + 4 + (0x1CE << 2)
    ctx->pc = 0x2617E4u;
    {
        const bool branch_taken_0x2617e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2617E4u;
            // 0x2617e8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617e4) {
            ctx->pc = 0x261F20u;
            goto label_261f20;
        }
    }
    ctx->pc = 0x2617ECu;
    // 0x2617ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2617ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2617f0: 0x8c24e618  lw          $a0, -0x19E8($at)
    ctx->pc = 0x2617f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960664)));
    // 0x2617f4: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2617F4u;
    {
        const bool branch_taken_0x2617f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2617F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2617F4u;
            // 0x2617f8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617f4) {
            ctx->pc = 0x261814u;
            goto label_261814;
        }
    }
    ctx->pc = 0x2617FCu;
    // 0x2617fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2617fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261800: 0xdc22e608  ld          $v0, -0x19F8($at)
    ctx->pc = 0x261800u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294960648)));
    // 0x261804: 0x6451fffe  daddiu      $s1, $v0, -0x2
    ctx->pc = 0x261804u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967294);
    // 0x261808: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26180c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26180Cu;
    {
        const bool branch_taken_0x26180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26180Cu;
            // 0x261810: 0xfc31e608  sd          $s1, -0x19F8($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 4294960648), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26180c) {
            ctx->pc = 0x261838u;
            goto label_261838;
        }
    }
    ctx->pc = 0x261814u;
label_261814:
    // 0x261814: 0xdc23e608  ld          $v1, -0x19F8($at)
    ctx->pc = 0x261814u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294960648)));
    // 0x261818: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x261818u;
    {
        const bool branch_taken_0x261818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261818) {
            ctx->pc = 0x261830u;
            goto label_261830;
        }
    }
    ctx->pc = 0x261820u;
    // 0x261820: 0xdc421a00  ld          $v0, 0x1A00($v0)
    ctx->pc = 0x261820u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 6656)));
    // 0x261824: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x261824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x261828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x261828u;
    {
        const bool branch_taken_0x261828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26182Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261828u;
            // 0x26182c: 0x62882f  dsubu       $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261828) {
            ctx->pc = 0x261838u;
            goto label_261838;
        }
    }
    ctx->pc = 0x261830u;
label_261830:
    // 0x261830: 0xdc421a00  ld          $v0, 0x1A00($v0)
    ctx->pc = 0x261830u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 6656)));
    // 0x261834: 0x45882f  dsubu       $s1, $v0, $a1
    ctx->pc = 0x261834u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
label_261838:
    // 0x261838: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x261838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x26183c: 0x34427e40  ori         $v0, $v0, 0x7E40
    ctx->pc = 0x26183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32320);
    // 0x261840: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x261840u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x261844: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x261844u;
    {
        const bool branch_taken_0x261844 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x261848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261844u;
            // 0x261848: 0x24050e10  addiu       $a1, $zero, 0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261844) {
            ctx->pc = 0x261850u;
            goto label_261850;
        }
    }
    ctx->pc = 0x26184Cu;
    // 0x26184c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26184cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261850:
    // 0x261850: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x261850u;
    SET_GPR_U32(ctx, 31, 0x261858u);
    ctx->pc = 0x261854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261850u;
            // 0x261854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261858u; }
        if (ctx->pc != 0x261858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261858u; }
        if (ctx->pc != 0x261858u) { return; }
    }
    ctx->pc = 0x261858u;
label_261858:
    // 0x261858: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x261858u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26185c: 0x24050e10  addiu       $a1, $zero, 0xE10
    ctx->pc = 0x26185cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x261860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261864: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x261864u;
    SET_GPR_U32(ctx, 31, 0x26186Cu);
    ctx->pc = 0x261868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261864u;
            // 0x261868: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26186Cu; }
        if (ctx->pc != 0x26186Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26186Cu; }
        if (ctx->pc != 0x26186Cu) { return; }
    }
    ctx->pc = 0x26186Cu;
label_26186c:
    // 0x26186c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x26186cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x261870: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x261870u;
    SET_GPR_U32(ctx, 31, 0x261878u);
    ctx->pc = 0x261874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261870u;
            // 0x261874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261878u; }
        if (ctx->pc != 0x261878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261878u; }
        if (ctx->pc != 0x261878u) { return; }
    }
    ctx->pc = 0x261878u;
label_261878:
    // 0x261878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26187c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x26187cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x261880: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x261880u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x261884: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x261884u;
    SET_GPR_U32(ctx, 31, 0x26188Cu);
    ctx->pc = 0x261888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261884u;
            // 0x261888: 0x11883f  dsra32      $s1, $s1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26188Cu; }
        if (ctx->pc != 0x26188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26188Cu; }
        if (ctx->pc != 0x26188Cu) { return; }
    }
    ctx->pc = 0x26188Cu;
label_26188c:
    // 0x26188c: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x26188cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x261890: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x261890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x261894: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x261894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x261898: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x261898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x26189c: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x26189cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2618a0: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x2618A0u;
    SET_GPR_U32(ctx, 31, 0x2618A8u);
    ctx->pc = 0x2618A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2618A0u;
            // 0x2618a4: 0x220b8  dsll        $a0, $v0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618A8u; }
        if (ctx->pc != 0x2618A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618A8u; }
        if (ctx->pc != 0x2618A8u) { return; }
    }
    ctx->pc = 0x2618A8u;
label_2618a8:
    // 0x2618a8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2618a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2618ac: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x2618acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2618b0: 0x2484c538  addiu       $a0, $a0, -0x3AC8
    ctx->pc = 0x2618b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952248));
    // 0x2618b4: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2618B4u;
    SET_GPR_U32(ctx, 31, 0x2618BCu);
    ctx->pc = 0x2618B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2618B4u;
            // 0x2618b8: 0x12903f  dsra32      $s2, $s2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618BCu; }
        if (ctx->pc != 0x2618BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618BCu; }
        if (ctx->pc != 0x2618BCu) { return; }
    }
    ctx->pc = 0x2618BCu;
label_2618bc:
    // 0x2618bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2618bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2618c0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2618c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2618c4: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2618C4u;
    SET_GPR_U32(ctx, 31, 0x2618CCu);
    ctx->pc = 0x2618C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2618C4u;
            // 0x2618c8: 0x2484c540  addiu       $a0, $a0, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618CCu; }
        if (ctx->pc != 0x2618CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618CCu; }
        if (ctx->pc != 0x2618CCu) { return; }
    }
    ctx->pc = 0x2618CCu;
label_2618cc:
    // 0x2618cc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2618ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2618d0: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x2618d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x2618d4: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2618D4u;
    SET_GPR_U32(ctx, 31, 0x2618DCu);
    ctx->pc = 0x2618D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2618D4u;
            // 0x2618d8: 0x2484c548  addiu       $a0, $a0, -0x3AB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618DCu; }
        if (ctx->pc != 0x2618DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618DCu; }
        if (ctx->pc != 0x2618DCu) { return; }
    }
    ctx->pc = 0x2618DCu;
label_2618dc:
    // 0x2618dc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2618dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2618e0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x2618e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x2618e4: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2618E4u;
    SET_GPR_U32(ctx, 31, 0x2618ECu);
    ctx->pc = 0x2618E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2618E4u;
            // 0x2618e8: 0x2484c550  addiu       $a0, $a0, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618ECu; }
        if (ctx->pc != 0x2618ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618ECu; }
        if (ctx->pc != 0x2618ECu) { return; }
    }
    ctx->pc = 0x2618ECu;
label_2618ec:
    // 0x2618ec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2618ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2618f0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2618f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x2618f4: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2618F4u;
    SET_GPR_U32(ctx, 31, 0x2618FCu);
    ctx->pc = 0x2618F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2618F4u;
            // 0x2618f8: 0x2484c558  addiu       $a0, $a0, -0x3AA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618FCu; }
        if (ctx->pc != 0x2618FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2618FCu; }
        if (ctx->pc != 0x2618FCu) { return; }
    }
    ctx->pc = 0x2618FCu;
label_2618fc:
    // 0x2618fc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2618fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261900: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x261900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x261904: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261904u;
    SET_GPR_U32(ctx, 31, 0x26190Cu);
    ctx->pc = 0x261908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261904u;
            // 0x261908: 0x2484c560  addiu       $a0, $a0, -0x3AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26190Cu; }
        if (ctx->pc != 0x26190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26190Cu; }
        if (ctx->pc != 0x26190Cu) { return; }
    }
    ctx->pc = 0x26190Cu;
label_26190c:
    // 0x26190c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x26190cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261910: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x261910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x261914: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261914u;
    SET_GPR_U32(ctx, 31, 0x26191Cu);
    ctx->pc = 0x261918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261914u;
            // 0x261918: 0x2484c568  addiu       $a0, $a0, -0x3A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26191Cu; }
        if (ctx->pc != 0x26191Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26191Cu; }
        if (ctx->pc != 0x26191Cu) { return; }
    }
    ctx->pc = 0x26191Cu;
label_26191c:
    // 0x26191c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x26191cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261920: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x261920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x261924: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261924u;
    SET_GPR_U32(ctx, 31, 0x26192Cu);
    ctx->pc = 0x261928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261924u;
            // 0x261928: 0x2484c570  addiu       $a0, $a0, -0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26192Cu; }
        if (ctx->pc != 0x26192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26192Cu; }
        if (ctx->pc != 0x26192Cu) { return; }
    }
    ctx->pc = 0x26192Cu;
label_26192c:
    // 0x26192c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x26192cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261930: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x261930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x261934: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261934u;
    SET_GPR_U32(ctx, 31, 0x26193Cu);
    ctx->pc = 0x261938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261934u;
            // 0x261938: 0x2484c578  addiu       $a0, $a0, -0x3A88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26193Cu; }
        if (ctx->pc != 0x26193Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26193Cu; }
        if (ctx->pc != 0x26193Cu) { return; }
    }
    ctx->pc = 0x26193Cu;
label_26193c:
    // 0x26193c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x26193cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261940: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x261940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x261944: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261944u;
    SET_GPR_U32(ctx, 31, 0x26194Cu);
    ctx->pc = 0x261948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261944u;
            // 0x261948: 0x2484c580  addiu       $a0, $a0, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26194Cu; }
        if (ctx->pc != 0x26194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26194Cu; }
        if (ctx->pc != 0x26194Cu) { return; }
    }
    ctx->pc = 0x26194Cu;
label_26194c:
    // 0x26194c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x26194cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x261950: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x261950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x261954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261958: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x261958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26195c:
    // 0x26195c: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x26195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x261960: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x261960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x261964: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x261964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x261968: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x261968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x26196c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x26196cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x261970: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x261970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x261974: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x261974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x261978: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x261978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x26197c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x26197cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x261980: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x261980u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x261984: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x261984u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x261988: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x261988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x26198c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x26198Cu;
    {
        const bool branch_taken_0x26198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26198Cu;
            // 0x261990: 0xacc3001c  sw          $v1, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26198c) {
            ctx->pc = 0x26195Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26195c;
        }
    }
    ctx->pc = 0x261994u;
    // 0x261994: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x261994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x261998: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26199c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x26199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2619a0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2619a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2619a4: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x2619a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2619a8: 0x104fc2  srl         $t1, $s0, 31
    ctx->pc = 0x2619a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x2619ac: 0x1147c2  srl         $t0, $s1, 31
    ctx->pc = 0x2619acu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x2619b0: 0x1237c2  srl         $a2, $s2, 31
    ctx->pc = 0x2619b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x2619b4: 0x8c25e618  lw          $a1, -0x19E8($at)
    ctx->pc = 0x2619b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960664)));
    // 0x2619b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2619b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2619bc: 0x3810  mfhi        $a3
    ctx->pc = 0x2619bcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2619c0: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x2619c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2619c4: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x2619c4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x2619c8: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x2619c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2619cc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2619ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2619d0: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x2619d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x2619d4: 0x8ce70080  lw          $a3, 0x80($a3)
    ctx->pc = 0x2619d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2619d8: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x2619d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x2619dc: 0x3810  mfhi        $a3
    ctx->pc = 0x2619dcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2619e0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2619e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2619e4: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x2619e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x2619e8: 0x8ce90080  lw          $t1, 0x80($a3)
    ctx->pc = 0x2619e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2619ec: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x2619ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2619f0: 0x0  nop
    ctx->pc = 0x2619f0u;
    // NOP
    // 0x2619f4: 0x0  nop
    ctx->pc = 0x2619f4u;
    // NOP
    // 0x2619f8: 0x3810  mfhi        $a3
    ctx->pc = 0x2619f8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2619fc: 0xafa900b4  sw          $t1, 0xB4($sp)
    ctx->pc = 0x2619fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 9));
    // 0x261a00: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x261a00u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x261a04: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x261a04u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x261a08: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x261a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x261a0c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x261a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x261a10: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x261a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x261a14: 0x8ce70080  lw          $a3, 0x80($a3)
    ctx->pc = 0x261a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x261a18: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x261a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
    // 0x261a1c: 0x3810  mfhi        $a3
    ctx->pc = 0x261a1cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x261a20: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x261a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x261a24: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x261a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x261a28: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x261a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x261a2c: 0x8c470080  lw          $a3, 0x80($v0)
    ctx->pc = 0x261a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x261a30: 0x1010  mfhi        $v0
    ctx->pc = 0x261a30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x261a34: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x261a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x261a38: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x261a38u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x261a3c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x261a3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x261a40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x261a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x261a44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x261a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x261a48: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x261a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x261a4c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x261a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x261a50: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x261a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x261a54: 0x1010  mfhi        $v0
    ctx->pc = 0x261a54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x261a58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x261a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x261a5c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x261a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x261a60: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x261a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x261a64: 0x14a4000a  bne         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x261A64u;
    {
        const bool branch_taken_0x261a64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x261A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261A64u;
            // 0x261a68: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a64) {
            ctx->pc = 0x261A90u;
            goto label_261a90;
        }
    }
    ctx->pc = 0x261A6Cu;
    // 0x261a6c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261a70: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261A70u;
    SET_GPR_U32(ctx, 31, 0x261A78u);
    ctx->pc = 0x261A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261A70u;
            // 0x261a74: 0x2484c588  addiu       $a0, $a0, -0x3A78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261A78u; }
        if (ctx->pc != 0x261A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261A78u; }
        if (ctx->pc != 0x261A78u) { return; }
    }
    ctx->pc = 0x261A78u;
label_261a78:
    // 0x261a78: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261a7c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x261a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x261a80: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261A80u;
    SET_GPR_U32(ctx, 31, 0x261A88u);
    ctx->pc = 0x261A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261A80u;
            // 0x261a84: 0x2484c588  addiu       $a0, $a0, -0x3A78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261A88u; }
        if (ctx->pc != 0x261A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261A88u; }
        if (ctx->pc != 0x261A88u) { return; }
    }
    ctx->pc = 0x261A88u;
label_261a88:
    // 0x261a88: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x261A88u;
    {
        const bool branch_taken_0x261a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261A88u;
            // 0x261a8c: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a88) {
            ctx->pc = 0x261ADCu;
            goto label_261adc;
        }
    }
    ctx->pc = 0x261A90u;
label_261a90:
    // 0x261a90: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x261a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x261a94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x261A94u;
    {
        const bool branch_taken_0x261a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261A94u;
            // 0x261a98: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a94) {
            ctx->pc = 0x261AC0u;
            goto label_261ac0;
        }
    }
    ctx->pc = 0x261A9Cu;
    // 0x261a9c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261aa0: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261AA0u;
    SET_GPR_U32(ctx, 31, 0x261AA8u);
    ctx->pc = 0x261AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261AA0u;
            // 0x261aa4: 0x2484c590  addiu       $a0, $a0, -0x3A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AA8u; }
        if (ctx->pc != 0x261AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AA8u; }
        if (ctx->pc != 0x261AA8u) { return; }
    }
    ctx->pc = 0x261AA8u;
label_261aa8:
    // 0x261aa8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261aac: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x261aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x261ab0: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261AB0u;
    SET_GPR_U32(ctx, 31, 0x261AB8u);
    ctx->pc = 0x261AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261AB0u;
            // 0x261ab4: 0x2484c598  addiu       $a0, $a0, -0x3A68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AB8u; }
        if (ctx->pc != 0x261AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AB8u; }
        if (ctx->pc != 0x261AB8u) { return; }
    }
    ctx->pc = 0x261AB8u;
label_261ab8:
    // 0x261ab8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x261AB8u;
    {
        const bool branch_taken_0x261ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261AB8u;
            // 0x261abc: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ab8) {
            ctx->pc = 0x261ADCu;
            goto label_261adc;
        }
    }
    ctx->pc = 0x261AC0u;
label_261ac0:
    // 0x261ac0: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261AC0u;
    SET_GPR_U32(ctx, 31, 0x261AC8u);
    ctx->pc = 0x261AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261AC0u;
            // 0x261ac4: 0x2484c5a0  addiu       $a0, $a0, -0x3A60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AC8u; }
        if (ctx->pc != 0x261AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AC8u; }
        if (ctx->pc != 0x261AC8u) { return; }
    }
    ctx->pc = 0x261AC8u;
label_261ac8:
    // 0x261ac8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261acc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x261accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x261ad0: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261AD0u;
    SET_GPR_U32(ctx, 31, 0x261AD8u);
    ctx->pc = 0x261AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261AD0u;
            // 0x261ad4: 0x2484c5a8  addiu       $a0, $a0, -0x3A58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AD8u; }
        if (ctx->pc != 0x261AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AD8u; }
        if (ctx->pc != 0x261AD8u) { return; }
    }
    ctx->pc = 0x261AD8u;
label_261ad8:
    // 0x261ad8: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x261ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_261adc:
    // 0x261adc: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x261ADCu;
    SET_GPR_U32(ctx, 31, 0x261AE4u);
    ctx->pc = 0x261AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261ADCu;
            // 0x261ae0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AE4u; }
        if (ctx->pc != 0x261AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261AE4u; }
        if (ctx->pc != 0x261AE4u) { return; }
    }
    ctx->pc = 0x261AE4u;
label_261ae4:
    // 0x261ae4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261ae8: 0x8c22e618  lw          $v0, -0x19E8($at)
    ctx->pc = 0x261ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960664)));
    // 0x261aec: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x261AECu;
    {
        const bool branch_taken_0x261aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261AECu;
            // 0x261af0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261aec) {
            ctx->pc = 0x261B60u;
            goto label_261b60;
        }
    }
    ctx->pc = 0x261AF4u;
    // 0x261af4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x261af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x261af8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x261AF8u;
    SET_GPR_U32(ctx, 31, 0x261B00u);
    ctx->pc = 0x261AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261AF8u;
            // 0x261afc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B00u; }
        if (ctx->pc != 0x261B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B00u; }
        if (ctx->pc != 0x261B00u) { return; }
    }
    ctx->pc = 0x261B00u;
label_261b00:
    // 0x261b00: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x261b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x261b04: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x261b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x261b08: 0xafa30208  sw          $v1, 0x208($sp)
    ctx->pc = 0x261b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 3));
    // 0x261b0c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261b10: 0x8c23e610  lw          $v1, -0x19F0($at)
    ctx->pc = 0x261b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960656)));
    // 0x261b14: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x261b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x261b18: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x261b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x261b1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x261b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x261b20: 0xa3a702f3  sb          $a3, 0x2F3($sp)
    ctx->pc = 0x261b20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 755), (uint8_t)GPR_U32(ctx, 7));
    // 0x261b24: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x261b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x261b28: 0xa3a702f2  sb          $a3, 0x2F2($sp)
    ctx->pc = 0x261b28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 754), (uint8_t)GPR_U32(ctx, 7));
    // 0x261b2c: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x261b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x261b30: 0xa3a702f1  sb          $a3, 0x2F1($sp)
    ctx->pc = 0x261b30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 753), (uint8_t)GPR_U32(ctx, 7));
    // 0x261b34: 0xa3a702f0  sb          $a3, 0x2F0($sp)
    ctx->pc = 0x261b34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 752), (uint8_t)GPR_U32(ctx, 7));
    // 0x261b38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261b3c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x261b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x261b40: 0x8c22e614  lw          $v0, -0x19EC($at)
    ctx->pc = 0x261b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960660)));
    // 0x261b44: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x261b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
    // 0x261b48: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x261b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x261b4c: 0xc0b5f98  jal         func_2D7E60
    ctx->pc = 0x261B4Cu;
    SET_GPR_U32(ctx, 31, 0x261B54u);
    ctx->pc = 0x261B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261B4Cu;
            // 0x261b50: 0xafa20204  sw          $v0, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7E60u;
    if (runtime->hasFunction(0x2D7E60u)) {
        auto targetFn = runtime->lookupFunction(0x2D7E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B54u; }
        if (ctx->pc != 0x261B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_4__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B54u; }
        if (ctx->pc != 0x261B54u) { return; }
    }
    ctx->pc = 0x261B54u;
label_261b54:
    // 0x261b54: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x261B54u;
    SET_GPR_U32(ctx, 31, 0x261B5Cu);
    ctx->pc = 0x261B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261B54u;
            // 0x261b58: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B5Cu; }
        if (ctx->pc != 0x261B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B5Cu; }
        if (ctx->pc != 0x261B5Cu) { return; }
    }
    ctx->pc = 0x261B5Cu;
label_261b5c:
    // 0x261b5c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x261b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_261b60:
    // 0x261b60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261b64: 0xc054514  jal         func_151450
    ctx->pc = 0x261B64u;
    SET_GPR_U32(ctx, 31, 0x261B6Cu);
    ctx->pc = 0x261B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261B64u;
            // 0x261b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B6Cu; }
        if (ctx->pc != 0x261B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B6Cu; }
        if (ctx->pc != 0x261B6Cu) { return; }
    }
    ctx->pc = 0x261B6Cu;
label_261b6c:
    // 0x261b6c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x261b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x261b70: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x261B70u;
    SET_GPR_U32(ctx, 31, 0x261B78u);
    ctx->pc = 0x261B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261B70u;
            // 0x261b74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B78u; }
        if (ctx->pc != 0x261B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B78u; }
        if (ctx->pc != 0x261B78u) { return; }
    }
    ctx->pc = 0x261B78u;
label_261b78:
    // 0x261b78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x261b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x261b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261b80:
    // 0x261b80: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x261b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x261b84: 0x8c4500b0  lw          $a1, 0xB0($v0)
    ctx->pc = 0x261b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x261b88: 0x4a0003d  bltz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x261B88u;
    {
        const bool branch_taken_0x261b88 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x261B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261B88u;
            // 0x261b8c: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b88) {
            ctx->pc = 0x261C80u;
            goto label_261c80;
        }
    }
    ctx->pc = 0x261B90u;
    // 0x261b90: 0xc0b504c  jal         func_2D4130
    ctx->pc = 0x261B90u;
    SET_GPR_U32(ctx, 31, 0x261B98u);
    ctx->pc = 0x261B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261B90u;
            // 0x261b94: 0x27a60308  addiu       $a2, $sp, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4130u;
    if (runtime->hasFunction(0x2D4130u)) {
        auto targetFn = runtime->lookupFunction(0x2D4130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B98u; }
        if (ctx->pc != 0x261B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRectFontTex__FiPi_0x2d4130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261B98u; }
        if (ctx->pc != 0x261B98u) { return; }
    }
    ctx->pc = 0x261B98u;
label_261b98:
    // 0x261b98: 0x27a30290  addiu       $v1, $sp, 0x290
    ctx->pc = 0x261b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x261b9c: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x261b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x261ba0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x261ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x261ba4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x261ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x261ba8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x261ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261bac: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x261bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261bb0: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x261bb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x261bb4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x261bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x261bb8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x261bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x261bbc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x261bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x261bc0: 0x8fa40308  lw          $a0, 0x308($sp)
    ctx->pc = 0x261bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x261bc4: 0xc0b5530  jal         func_2D54C0
    ctx->pc = 0x261BC4u;
    SET_GPR_U32(ctx, 31, 0x261BCCu);
    ctx->pc = 0x261BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261BC4u;
            // 0x261bc8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D54C0u;
    if (runtime->hasFunction(0x2D54C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D54C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261BCCu; }
        if (ctx->pc != 0x261BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FiP11mgCDrawPrim_0x2d54c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261BCCu; }
        if (ctx->pc != 0x261BCCu) { return; }
    }
    ctx->pc = 0x261BCCu;
label_261bcc:
    // 0x261bcc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261bd0: 0x27b50218  addiu       $s5, $sp, 0x218
    ctx->pc = 0x261bd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    // 0x261bd4: 0x8c23e610  lw          $v1, -0x19F0($at)
    ctx->pc = 0x261bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960656)));
    // 0x261bd8: 0x27b20224  addiu       $s2, $sp, 0x224
    ctx->pc = 0x261bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x261bdc: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x261bdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x261be0: 0x27b40228  addiu       $s4, $sp, 0x228
    ctx->pc = 0x261be0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x261be4: 0x27b6021c  addiu       $s6, $sp, 0x21C
    ctx->pc = 0x261be4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x261be8: 0x27b3022c  addiu       $s3, $sp, 0x22C
    ctx->pc = 0x261be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x261bec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x261becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x261bf0: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x261bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261bf4: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x261bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x261bf8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x261bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x261bfc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x261bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x261c00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261c04: 0x1504818  mult        $t1, $t2, $s0
    ctx->pc = 0x261c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x261c08: 0x8c22e614  lw          $v0, -0x19EC($at)
    ctx->pc = 0x261c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960660)));
    // 0x261c0c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x261c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x261c10: 0xafa30220  sw          $v1, 0x220($sp)
    ctx->pc = 0x261c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 3));
    // 0x261c14: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x261c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x261c18: 0xae8a0000  sw          $t2, 0x0($s4)
    ctx->pc = 0x261c18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 10));
    // 0x261c1c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x261c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x261c20: 0xc0b52d0  jal         func_2D4B40
    ctx->pc = 0x261C20u;
    SET_GPR_U32(ctx, 31, 0x261C28u);
    ctx->pc = 0x261C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261C20u;
            // 0x261c24: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4B40u;
    if (runtime->hasFunction(0x2D4B40u)) {
        auto targetFn = runtime->lookupFunction(0x2D4B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C28u; }
        if (ctx->pc != 0x261C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite_Fuchi__FP11mgCDrawPrim4RECT4RECTii_0x2d4b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C28u; }
        if (ctx->pc != 0x261C28u) { return; }
    }
    ctx->pc = 0x261C28u;
label_261c28:
    // 0x261c28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x261c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x261c2c: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x261c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x261c30: 0xa3a202fa  sb          $v0, 0x2FA($sp)
    ctx->pc = 0x261c30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 762), (uint8_t)GPR_U32(ctx, 2));
    // 0x261c34: 0xa3a202f9  sb          $v0, 0x2F9($sp)
    ctx->pc = 0x261c34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 761), (uint8_t)GPR_U32(ctx, 2));
    // 0x261c38: 0xa3a202f8  sb          $v0, 0x2F8($sp)
    ctx->pc = 0x261c38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 760), (uint8_t)GPR_U32(ctx, 2));
    // 0x261c3c: 0xa3a202fb  sb          $v0, 0x2FB($sp)
    ctx->pc = 0x261c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 763), (uint8_t)GPR_U32(ctx, 2));
    // 0x261c40: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x261c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x261c44: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x261c44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x261c48: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x261c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x261c4c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x261C4Cu;
    SET_GPR_U32(ctx, 31, 0x261C54u);
    ctx->pc = 0x261C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261C4Cu;
            // 0x261c50: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C54u; }
        if (ctx->pc != 0x261C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C54u; }
        if (ctx->pc != 0x261C54u) { return; }
    }
    ctx->pc = 0x261C54u;
label_261c54:
    // 0x261c54: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x261c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x261c58: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x261c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x261c5c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x261c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x261c60: 0x8fa50220  lw          $a1, 0x220($sp)
    ctx->pc = 0x261c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x261c64: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x261C64u;
    SET_GPR_U32(ctx, 31, 0x261C6Cu);
    ctx->pc = 0x261C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261C64u;
            // 0x261c68: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C6Cu; }
        if (ctx->pc != 0x261C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C6Cu; }
        if (ctx->pc != 0x261C6Cu) { return; }
    }
    ctx->pc = 0x261C6Cu;
label_261c6c:
    // 0x261c6c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x261c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x261c70: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x261c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x261c74: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x261c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x261c78: 0xc0b5280  jal         func_2D4A00
    ctx->pc = 0x261C78u;
    SET_GPR_U32(ctx, 31, 0x261C80u);
    ctx->pc = 0x261C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261C78u;
            // 0x261c7c: 0x27a702f8  addiu       $a3, $sp, 0x2F8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C80u; }
        if (ctx->pc != 0x261C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C80u; }
        if (ctx->pc != 0x261C80u) { return; }
    }
    ctx->pc = 0x261C80u;
label_261c80:
    // 0x261c80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x261c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x261c84: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x261c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x261c88: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x261C88u;
    {
        const bool branch_taken_0x261c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261C88u;
            // 0x261c8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c88) {
            ctx->pc = 0x261B80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261b80;
        }
    }
    ctx->pc = 0x261C90u;
    // 0x261c90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261c98: 0x8c27e618  lw          $a3, -0x19E8($at)
    ctx->pc = 0x261c98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960664)));
    // 0x261c9c: 0x14e2009e  bne         $a3, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x261C9Cu;
    {
        const bool branch_taken_0x261c9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x261CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261C9Cu;
            // 0x261ca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c9c) {
            ctx->pc = 0x261F18u;
            goto label_261f18;
        }
    }
    ctx->pc = 0x261CA4u;
    // 0x261ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x261ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ca8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x261ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_261cac:
    // 0x261cac: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x261cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x261cb0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x261cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x261cb4: 0x24460230  addiu       $a2, $v0, 0x230
    ctx->pc = 0x261cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x261cb8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x261cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x261cbc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x261cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x261cc0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x261cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x261cc4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x261cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x261cc8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x261cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x261ccc: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x261cccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x261cd0: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x261cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x261cd4: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x261cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x261cd8: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x261cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x261cdc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x261CDCu;
    {
        const bool branch_taken_0x261cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261CDCu;
            // 0x261ce0: 0xacc3001c  sw          $v1, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261cdc) {
            ctx->pc = 0x261CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261cac;
        }
    }
    ctx->pc = 0x261CE4u;
    // 0x261ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261ce8: 0x14e20035  bne         $a3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x261CE8u;
    {
        const bool branch_taken_0x261ce8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x261CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261CE8u;
            // 0x261cec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ce8) {
            ctx->pc = 0x261DC0u;
            goto label_261dc0;
        }
    }
    ctx->pc = 0x261CF0u;
    // 0x261cf0: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x261cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x261cf4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x261CF4u;
    {
        const bool branch_taken_0x261cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261CF4u;
            // 0x261cf8: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261cf4) {
            ctx->pc = 0x261D50u;
            goto label_261d50;
        }
    }
    ctx->pc = 0x261CFCu;
    // 0x261cfc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261d00: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261D00u;
    SET_GPR_U32(ctx, 31, 0x261D08u);
    ctx->pc = 0x261D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D00u;
            // 0x261d04: 0x2484c5b0  addiu       $a0, $a0, -0x3A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D08u; }
        if (ctx->pc != 0x261D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D08u; }
        if (ctx->pc != 0x261D08u) { return; }
    }
    ctx->pc = 0x261D08u;
label_261d08:
    // 0x261d08: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261d0c: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x261d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x261d10: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261D10u;
    SET_GPR_U32(ctx, 31, 0x261D18u);
    ctx->pc = 0x261D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D10u;
            // 0x261d14: 0x2484c5b8  addiu       $a0, $a0, -0x3A48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D18u; }
        if (ctx->pc != 0x261D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D18u; }
        if (ctx->pc != 0x261D18u) { return; }
    }
    ctx->pc = 0x261D18u;
label_261d18:
    // 0x261d18: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261d1c: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x261d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x261d20: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261D20u;
    SET_GPR_U32(ctx, 31, 0x261D28u);
    ctx->pc = 0x261D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D20u;
            // 0x261d24: 0x2484c5c0  addiu       $a0, $a0, -0x3A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D28u; }
        if (ctx->pc != 0x261D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D28u; }
        if (ctx->pc != 0x261D28u) { return; }
    }
    ctx->pc = 0x261D28u;
label_261d28:
    // 0x261d28: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261d2c: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x261d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x261d30: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261D30u;
    SET_GPR_U32(ctx, 31, 0x261D38u);
    ctx->pc = 0x261D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D30u;
            // 0x261d34: 0x2484c5c8  addiu       $a0, $a0, -0x3A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D38u; }
        if (ctx->pc != 0x261D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D38u; }
        if (ctx->pc != 0x261D38u) { return; }
    }
    ctx->pc = 0x261D38u;
label_261d38:
    // 0x261d38: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261d3c: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x261d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x261d40: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x261D40u;
    SET_GPR_U32(ctx, 31, 0x261D48u);
    ctx->pc = 0x261D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D40u;
            // 0x261d44: 0x2484c5d0  addiu       $a0, $a0, -0x3A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D48u; }
        if (ctx->pc != 0x261D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D48u; }
        if (ctx->pc != 0x261D48u) { return; }
    }
    ctx->pc = 0x261D48u;
label_261d48:
    // 0x261d48: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x261D48u;
    {
        const bool branch_taken_0x261d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261D48u;
            // 0x261d4c: 0xafa20240  sw          $v0, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d48) {
            ctx->pc = 0x261DBCu;
            goto label_261dbc;
        }
    }
    ctx->pc = 0x261D50u;
label_261d50:
    // 0x261d50: 0xc0b5220  jal         func_2D4880
    ctx->pc = 0x261D50u;
    SET_GPR_U32(ctx, 31, 0x261D58u);
    ctx->pc = 0x2D4880u;
    if (runtime->hasFunction(0x2D4880u)) {
        auto targetFn = runtime->lookupFunction(0x2D4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D58u; }
        if (ctx->pc != 0x261D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__Fc_0x2d4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D58u; }
        if (ctx->pc != 0x261D58u) { return; }
    }
    ctx->pc = 0x261D58u;
label_261d58:
    // 0x261d58: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x261d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x261d5c: 0xc0b5220  jal         func_2D4880
    ctx->pc = 0x261D5Cu;
    SET_GPR_U32(ctx, 31, 0x261D64u);
    ctx->pc = 0x261D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D5Cu;
            // 0x261d60: 0x2404006f  addiu       $a0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4880u;
    if (runtime->hasFunction(0x2D4880u)) {
        auto targetFn = runtime->lookupFunction(0x2D4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D64u; }
        if (ctx->pc != 0x261D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__Fc_0x2d4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D64u; }
        if (ctx->pc != 0x261D64u) { return; }
    }
    ctx->pc = 0x261D64u;
label_261d64:
    // 0x261d64: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x261d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x261d68: 0xc0b5220  jal         func_2D4880
    ctx->pc = 0x261D68u;
    SET_GPR_U32(ctx, 31, 0x261D70u);
    ctx->pc = 0x261D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D68u;
            // 0x261d6c: 0x2404006f  addiu       $a0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4880u;
    if (runtime->hasFunction(0x2D4880u)) {
        auto targetFn = runtime->lookupFunction(0x2D4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D70u; }
        if (ctx->pc != 0x261D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__Fc_0x2d4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D70u; }
        if (ctx->pc != 0x261D70u) { return; }
    }
    ctx->pc = 0x261D70u;
label_261d70:
    // 0x261d70: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x261d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x261d74: 0xc0b5220  jal         func_2D4880
    ctx->pc = 0x261D74u;
    SET_GPR_U32(ctx, 31, 0x261D7Cu);
    ctx->pc = 0x261D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D74u;
            // 0x261d78: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4880u;
    if (runtime->hasFunction(0x2D4880u)) {
        auto targetFn = runtime->lookupFunction(0x2D4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D7Cu; }
        if (ctx->pc != 0x261D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__Fc_0x2d4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D7Cu; }
        if (ctx->pc != 0x261D7Cu) { return; }
    }
    ctx->pc = 0x261D7Cu;
label_261d7c:
    // 0x261d7c: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x261d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x261d80: 0xc0b5220  jal         func_2D4880
    ctx->pc = 0x261D80u;
    SET_GPR_U32(ctx, 31, 0x261D88u);
    ctx->pc = 0x261D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D80u;
            // 0x261d84: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4880u;
    if (runtime->hasFunction(0x2D4880u)) {
        auto targetFn = runtime->lookupFunction(0x2D4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D88u; }
        if (ctx->pc != 0x261D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__Fc_0x2d4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D88u; }
        if (ctx->pc != 0x261D88u) { return; }
    }
    ctx->pc = 0x261D88u;
label_261d88:
    // 0x261d88: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x261d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x261d8c: 0xc0b5220  jal         func_2D4880
    ctx->pc = 0x261D8Cu;
    SET_GPR_U32(ctx, 31, 0x261D94u);
    ctx->pc = 0x261D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D8Cu;
            // 0x261d90: 0x24040061  addiu       $a0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4880u;
    if (runtime->hasFunction(0x2D4880u)) {
        auto targetFn = runtime->lookupFunction(0x2D4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D94u; }
        if (ctx->pc != 0x261D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__Fc_0x2d4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261D94u; }
        if (ctx->pc != 0x261D94u) { return; }
    }
    ctx->pc = 0x261D94u;
label_261d94:
    // 0x261d94: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x261d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x261d98: 0xc0b5220  jal         func_2D4880
    ctx->pc = 0x261D98u;
    SET_GPR_U32(ctx, 31, 0x261DA0u);
    ctx->pc = 0x261D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261D98u;
            // 0x261d9c: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4880u;
    if (runtime->hasFunction(0x2D4880u)) {
        auto targetFn = runtime->lookupFunction(0x2D4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261DA0u; }
        if (ctx->pc != 0x261DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__Fc_0x2d4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261DA0u; }
        if (ctx->pc != 0x261DA0u) { return; }
    }
    ctx->pc = 0x261DA0u;
label_261da0:
    // 0x261da0: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x261da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x261da4: 0xc0b5220  jal         func_2D4880
    ctx->pc = 0x261DA4u;
    SET_GPR_U32(ctx, 31, 0x261DACu);
    ctx->pc = 0x261DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261DA4u;
            // 0x261da8: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4880u;
    if (runtime->hasFunction(0x2D4880u)) {
        auto targetFn = runtime->lookupFunction(0x2D4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261DACu; }
        if (ctx->pc != 0x261DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__Fc_0x2d4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261DACu; }
        if (ctx->pc != 0x261DACu) { return; }
    }
    ctx->pc = 0x261DACu;
label_261dac:
    // 0x261dac: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x261dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x261db0: 0xc0b5220  jal         func_2D4880
    ctx->pc = 0x261DB0u;
    SET_GPR_U32(ctx, 31, 0x261DB8u);
    ctx->pc = 0x261DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261DB0u;
            // 0x261db4: 0x24040073  addiu       $a0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4880u;
    if (runtime->hasFunction(0x2D4880u)) {
        auto targetFn = runtime->lookupFunction(0x2D4880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261DB8u; }
        if (ctx->pc != 0x261DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__Fc_0x2d4880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261DB8u; }
        if (ctx->pc != 0x261DB8u) { return; }
    }
    ctx->pc = 0x261DB8u;
label_261db8:
    // 0x261db8: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x261db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_261dbc:
    // 0x261dbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x261dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261dc0:
    // 0x261dc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x261dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261dc4:
    // 0x261dc4: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x261dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x261dc8: 0x8c450230  lw          $a1, 0x230($v0)
    ctx->pc = 0x261dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x261dcc: 0x4a0004e  bltz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x261DCCu;
    {
        const bool branch_taken_0x261dcc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x261DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261DCCu;
            // 0x261dd0: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dcc) {
            ctx->pc = 0x261F08u;
            goto label_261f08;
        }
    }
    ctx->pc = 0x261DD4u;
    // 0x261dd4: 0xc0b504c  jal         func_2D4130
    ctx->pc = 0x261DD4u;
    SET_GPR_U32(ctx, 31, 0x261DDCu);
    ctx->pc = 0x261DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261DD4u;
            // 0x261dd8: 0x27a6030c  addiu       $a2, $sp, 0x30C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4130u;
    if (runtime->hasFunction(0x2D4130u)) {
        auto targetFn = runtime->lookupFunction(0x2D4130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261DDCu; }
        if (ctx->pc != 0x261DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRectFontTex__FiPi_0x2d4130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261DDCu; }
        if (ctx->pc != 0x261DDCu) { return; }
    }
    ctx->pc = 0x261DDCu;
label_261ddc:
    // 0x261ddc: 0x27a302c0  addiu       $v1, $sp, 0x2C0
    ctx->pc = 0x261ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x261de0: 0x27a20270  addiu       $v0, $sp, 0x270
    ctx->pc = 0x261de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x261de4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x261de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x261de8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x261de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x261dec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x261decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261df0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x261df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261df4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x261df4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x261df8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x261df8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x261dfc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x261dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x261e00: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x261e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x261e04: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x261e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x261e08: 0xc0b5530  jal         func_2D54C0
    ctx->pc = 0x261E08u;
    SET_GPR_U32(ctx, 31, 0x261E10u);
    ctx->pc = 0x261E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261E08u;
            // 0x261e0c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D54C0u;
    if (runtime->hasFunction(0x2D54C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D54C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E10u; }
        if (ctx->pc != 0x261E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FiP11mgCDrawPrim_0x2d54c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261E10u; }
        if (ctx->pc != 0x261E10u) { return; }
    }
    ctx->pc = 0x261E10u;
label_261e10:
    // 0x261e10: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x261e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x261e14: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x261E14u;
    {
        const bool branch_taken_0x261e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E14u;
            // 0x261e18: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e14) {
            ctx->pc = 0x261E48u;
            goto label_261e48;
        }
    }
    ctx->pc = 0x261E1Cu;
    // 0x261e1c: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x261e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x261e20: 0x8c23e610  lw          $v1, -0x19F0($at)
    ctx->pc = 0x261e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960656)));
    // 0x261e24: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x261e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x261e28: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261e2c: 0x8c22e614  lw          $v0, -0x19EC($at)
    ctx->pc = 0x261e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960660)));
    // 0x261e30: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x261e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x261e34: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x261e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x261e38: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x261e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x261e3c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x261e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x261e40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x261E40u;
    {
        const bool branch_taken_0x261e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E40u;
            // 0x261e44: 0xafa20280  sw          $v0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e40) {
            ctx->pc = 0x261E74u;
            goto label_261e74;
        }
    }
    ctx->pc = 0x261E48u;
label_261e48:
    // 0x261e48: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261e4c: 0x8c23e610  lw          $v1, -0x19F0($at)
    ctx->pc = 0x261e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960656)));
    // 0x261e50: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x261e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x261e54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261e58: 0x8c22e614  lw          $v0, -0x19EC($at)
    ctx->pc = 0x261e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960660)));
    // 0x261e5c: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x261e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x261e60: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x261e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x261e64: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x261e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x261e68: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x261e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x261e6c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x261e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x261e70: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x261e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_261e74:
    // 0x261e74: 0x0  nop
    ctx->pc = 0x261e74u;
    // NOP
    // 0x261e78: 0x27b20278  addiu       $s2, $sp, 0x278
    ctx->pc = 0x261e78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x261e7c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x261e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x261e80: 0x27b40288  addiu       $s4, $sp, 0x288
    ctx->pc = 0x261e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x261e84: 0x27b5027c  addiu       $s5, $sp, 0x27C
    ctx->pc = 0x261e84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
    // 0x261e88: 0x27b3028c  addiu       $s3, $sp, 0x28C
    ctx->pc = 0x261e88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
    // 0x261e8c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x261e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x261e90: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x261e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x261e94: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x261e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x261e98: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x261e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x261e9c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x261e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x261ea0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x261ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x261ea4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x261ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x261ea8: 0xc0b52d0  jal         func_2D4B40
    ctx->pc = 0x261EA8u;
    SET_GPR_U32(ctx, 31, 0x261EB0u);
    ctx->pc = 0x261EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261EA8u;
            // 0x261eac: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4B40u;
    if (runtime->hasFunction(0x2D4B40u)) {
        auto targetFn = runtime->lookupFunction(0x2D4B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EB0u; }
        if (ctx->pc != 0x261EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite_Fuchi__FP11mgCDrawPrim4RECT4RECTii_0x2d4b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EB0u; }
        if (ctx->pc != 0x261EB0u) { return; }
    }
    ctx->pc = 0x261EB0u;
label_261eb0:
    // 0x261eb0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x261eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x261eb4: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x261eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x261eb8: 0xa3a20302  sb          $v0, 0x302($sp)
    ctx->pc = 0x261eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 770), (uint8_t)GPR_U32(ctx, 2));
    // 0x261ebc: 0xa3a20301  sb          $v0, 0x301($sp)
    ctx->pc = 0x261ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 769), (uint8_t)GPR_U32(ctx, 2));
    // 0x261ec0: 0xa3a20300  sb          $v0, 0x300($sp)
    ctx->pc = 0x261ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 768), (uint8_t)GPR_U32(ctx, 2));
    // 0x261ec4: 0xa3a20303  sb          $v0, 0x303($sp)
    ctx->pc = 0x261ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 771), (uint8_t)GPR_U32(ctx, 2));
    // 0x261ec8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x261ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x261ecc: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x261eccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x261ed0: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x261ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x261ed4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x261ED4u;
    SET_GPR_U32(ctx, 31, 0x261EDCu);
    ctx->pc = 0x261ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261ED4u;
            // 0x261ed8: 0x27a402e0  addiu       $a0, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EDCu; }
        if (ctx->pc != 0x261EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EDCu; }
        if (ctx->pc != 0x261EDCu) { return; }
    }
    ctx->pc = 0x261EDCu;
label_261edc:
    // 0x261edc: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x261edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x261ee0: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x261ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x261ee4: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x261ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x261ee8: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x261ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x261eec: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x261EECu;
    SET_GPR_U32(ctx, 31, 0x261EF4u);
    ctx->pc = 0x261EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261EECu;
            // 0x261ef0: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EF4u; }
        if (ctx->pc != 0x261EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261EF4u; }
        if (ctx->pc != 0x261EF4u) { return; }
    }
    ctx->pc = 0x261EF4u;
label_261ef4:
    // 0x261ef4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x261ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x261ef8: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x261ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x261efc: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x261efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x261f00: 0xc0b5280  jal         func_2D4A00
    ctx->pc = 0x261F00u;
    SET_GPR_U32(ctx, 31, 0x261F08u);
    ctx->pc = 0x261F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F00u;
            // 0x261f04: 0x27a70300  addiu       $a3, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F08u; }
        if (ctx->pc != 0x261F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F08u; }
        if (ctx->pc != 0x261F08u) { return; }
    }
    ctx->pc = 0x261F08u;
label_261f08:
    // 0x261f08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x261f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x261f0c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x261f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x261f10: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x261F10u;
    {
        const bool branch_taken_0x261f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F10u;
            // 0x261f14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f10) {
            ctx->pc = 0x261DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261dc4;
        }
    }
    ctx->pc = 0x261F18u;
label_261f18:
    // 0x261f18: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x261F18u;
    SET_GPR_U32(ctx, 31, 0x261F20u);
    ctx->pc = 0x261F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F18u;
            // 0x261f1c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F20u; }
        if (ctx->pc != 0x261F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F20u; }
        if (ctx->pc != 0x261F20u) { return; }
    }
    ctx->pc = 0x261F20u;
label_261f20:
    // 0x261f20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x261f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x261f24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x261f24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x261f28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x261f28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261f2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x261f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261f30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x261f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261f34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x261f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x261f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x261f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261f40: 0x3e00008  jr          $ra
    ctx->pc = 0x261F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F40u;
            // 0x261f44: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261F48u;
}
