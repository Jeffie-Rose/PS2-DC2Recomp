#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __fixunsdfdi
// Address: 0x2867c8 - 0x2868b4
void ps2___fixunsdfdi_0x2867c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fixunsdfdi_0x2867c8");
#endif

    switch (ctx->pc) {
        case 0x2867e8u: goto label_2867e8;
        case 0x286800u: goto label_286800;
        case 0x286808u: goto label_286808;
        case 0x28681cu: goto label_28681c;
        case 0x286830u: goto label_286830;
        case 0x28683cu: goto label_28683c;
        case 0x286848u: goto label_286848;
        case 0x28685cu: goto label_28685c;
        case 0x28686cu: goto label_28686c;
        case 0x286874u: goto label_286874;
        case 0x28688cu: goto label_28688c;
        default: break;
    }

    ctx->pc = 0x2867c8u;

    // 0x2867c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2867c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2867cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2867ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2867d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2867d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2867d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2867d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2867d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2867d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2867dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2867dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2867e0: 0xc0a2148  jal         func_288520
    ctx->pc = 0x2867E0u;
    SET_GPR_U32(ctx, 31, 0x2867E8u);
    ctx->pc = 0x2867E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2867E0u;
            // 0x2867e4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867E8u; }
        if (ctx->pc != 0x2867E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867E8u; }
        if (ctx->pc != 0x2867E8u) { return; }
    }
    ctx->pc = 0x2867E8u;
label_2867e8:
    // 0x2867e8: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2867E8u;
    {
        const bool branch_taken_0x2867e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2867ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867E8u;
            // 0x2867ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867e8) {
            ctx->pc = 0x28689Cu;
            goto label_28689c;
        }
    }
    ctx->pc = 0x2867F0u;
    // 0x2867f0: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x2867f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x2867f4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2867f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2867f8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2867F8u;
    SET_GPR_U32(ctx, 31, 0x286800u);
    ctx->pc = 0x2867FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2867F8u;
            // 0x2867fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286800u; }
        if (ctx->pc != 0x286800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286800u; }
        if (ctx->pc != 0x286800u) { return; }
    }
    ctx->pc = 0x286800u;
label_286800:
    // 0x286800: 0xc0a21b0  jal         func_2886C0
    ctx->pc = 0x286800u;
    SET_GPR_U32(ctx, 31, 0x286808u);
    ctx->pc = 0x286804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286800u;
            // 0x286804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2886C0u;
    if (runtime->hasFunction(0x2886C0u)) {
        auto targetFn = runtime->lookupFunction(0x2886C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286808u; }
        if (ctx->pc != 0x286808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoul_0x2886c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286808u; }
        if (ctx->pc != 0x286808u) { return; }
    }
    ctx->pc = 0x286808u;
label_286808:
    // 0x286808: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x286808u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28680c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28680Cu;
    {
        const bool branch_taken_0x28680c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x286810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28680Cu;
            // 0x286810: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28680c) {
            ctx->pc = 0x286824u;
            goto label_286824;
        }
    }
    ctx->pc = 0x286814u;
    // 0x286814: 0xc0a1a2e  jal         func_2868B8
    ctx->pc = 0x286814u;
    SET_GPR_U32(ctx, 31, 0x28681Cu);
    ctx->pc = 0x286818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286814u;
            // 0x286818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868B8u;
    if (runtime->hasFunction(0x2868B8u)) {
        auto targetFn = runtime->lookupFunction(0x2868B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28681Cu; }
        if (ctx->pc != 0x28681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___floatdidf_0x2868b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28681Cu; }
        if (ctx->pc != 0x28681Cu) { return; }
    }
    ctx->pc = 0x28681Cu;
label_28681c:
    // 0x28681c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28681Cu;
    {
        const bool branch_taken_0x28681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28681Cu;
            // 0x286820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28681c) {
            ctx->pc = 0x286840u;
            goto label_286840;
        }
    }
    ctx->pc = 0x286824u;
label_286824:
    // 0x286824: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x286824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x286828: 0xc0a1a2e  jal         func_2868B8
    ctx->pc = 0x286828u;
    SET_GPR_U32(ctx, 31, 0x286830u);
    ctx->pc = 0x28682Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286828u;
            // 0x28682c: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868B8u;
    if (runtime->hasFunction(0x2868B8u)) {
        auto targetFn = runtime->lookupFunction(0x2868B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286830u; }
        if (ctx->pc != 0x286830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___floatdidf_0x2868b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286830u; }
        if (ctx->pc != 0x286830u) { return; }
    }
    ctx->pc = 0x286830u;
label_286830:
    // 0x286830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286834: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x286834u;
    SET_GPR_U32(ctx, 31, 0x28683Cu);
    ctx->pc = 0x286838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286834u;
            // 0x286838: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28683Cu; }
        if (ctx->pc != 0x28683Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28683Cu; }
        if (ctx->pc != 0x28683Cu) { return; }
    }
    ctx->pc = 0x28683Cu;
label_28683c:
    // 0x28683c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286840:
    // 0x286840: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x286840u;
    SET_GPR_U32(ctx, 31, 0x286848u);
    ctx->pc = 0x286844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286840u;
            // 0x286844: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286848u; }
        if (ctx->pc != 0x286848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286848u; }
        if (ctx->pc != 0x286848u) { return; }
    }
    ctx->pc = 0x286848u;
label_286848:
    // 0x286848: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x286848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28684c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28684cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286854: 0xc0a2148  jal         func_288520
    ctx->pc = 0x286854u;
    SET_GPR_U32(ctx, 31, 0x28685Cu);
    ctx->pc = 0x286858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286854u;
            // 0x286858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28685Cu; }
        if (ctx->pc != 0x28685Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28685Cu; }
        if (ctx->pc != 0x28685Cu) { return; }
    }
    ctx->pc = 0x28685Cu;
label_28685c:
    // 0x28685c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28685Cu;
    {
        const bool branch_taken_0x28685c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28685Cu;
            // 0x286860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28685c) {
            ctx->pc = 0x286884u;
            goto label_286884;
        }
    }
    ctx->pc = 0x286864u;
    // 0x286864: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x286864u;
    SET_GPR_U32(ctx, 31, 0x28686Cu);
    ctx->pc = 0x286868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286864u;
            // 0x286868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28686Cu; }
        if (ctx->pc != 0x28686Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28686Cu; }
        if (ctx->pc != 0x28686Cu) { return; }
    }
    ctx->pc = 0x28686Cu;
label_28686c:
    // 0x28686c: 0xc0a21b0  jal         func_2886C0
    ctx->pc = 0x28686Cu;
    SET_GPR_U32(ctx, 31, 0x286874u);
    ctx->pc = 0x286870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28686Cu;
            // 0x286870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2886C0u;
    if (runtime->hasFunction(0x2886C0u)) {
        auto targetFn = runtime->lookupFunction(0x2886C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286874u; }
        if (ctx->pc != 0x286874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoul_0x2886c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286874u; }
        if (ctx->pc != 0x286874u) { return; }
    }
    ctx->pc = 0x286874u;
label_286874:
    // 0x286874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x286874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286878: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x286878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28687c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28687Cu;
    {
        const bool branch_taken_0x28687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28687Cu;
            // 0x286880: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28687c) {
            ctx->pc = 0x286898u;
            goto label_286898;
        }
    }
    ctx->pc = 0x286884u;
label_286884:
    // 0x286884: 0xc0a21b0  jal         func_2886C0
    ctx->pc = 0x286884u;
    SET_GPR_U32(ctx, 31, 0x28688Cu);
    ctx->pc = 0x286888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286884u;
            // 0x286888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2886C0u;
    if (runtime->hasFunction(0x2886C0u)) {
        auto targetFn = runtime->lookupFunction(0x2886C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28688Cu; }
        if (ctx->pc != 0x28688Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoul_0x2886c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28688Cu; }
        if (ctx->pc != 0x28688Cu) { return; }
    }
    ctx->pc = 0x28688Cu;
label_28688c:
    // 0x28688c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28688cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286890: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x286890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x286894: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x286894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_286898:
    // 0x286898: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28689c:
    // 0x28689c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28689cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2868a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2868a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2868a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2868a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2868a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2868a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2868ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2868ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2868B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2868ACu;
            // 0x2868b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2868B4u;
}
