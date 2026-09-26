#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Start__5CRainFv
// Address: 0x2822e0 - 0x2823dc
void Start__5CRainFv_0x2822e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Start__5CRainFv_0x2822e0");
#endif

    switch (ctx->pc) {
        case 0x28230cu: goto label_28230c;
        case 0x28231cu: goto label_28231c;
        case 0x282334u: goto label_282334;
        case 0x282344u: goto label_282344;
        case 0x28235cu: goto label_28235c;
        case 0x282394u: goto label_282394;
        case 0x2823b0u: goto label_2823b0;
        default: break;
    }

    ctx->pc = 0x2822e0u;

    // 0x2822e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2822e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2822e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2822e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2822e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2822e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2822ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2822ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2822f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2822f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2822f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2822f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2822f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2822fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2822fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282300: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282304: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x282304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282308: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x282308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_28230c:
    // 0x28230c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x28230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x282310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282314: 0xc0a0748  jal         func_281D20
    ctx->pc = 0x282314u;
    SET_GPR_U32(ctx, 31, 0x28231Cu);
    ctx->pc = 0x282318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282314u;
            // 0x282318: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281D20u;
    if (runtime->hasFunction(0x281D20u)) {
        auto targetFn = runtime->lookupFunction(0x281D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28231Cu; }
        if (ctx->pc != 0x28231Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Birth__9CRainDropFi_0x281d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28231Cu; }
        if (ctx->pc != 0x28231Cu) { return; }
    }
    ctx->pc = 0x28231Cu;
label_28231c:
    // 0x28231c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28231cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x282320: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x282320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x282324: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282324u;
    {
        const bool branch_taken_0x282324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282324u;
            // 0x282328: 0x263100b0  addiu       $s1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282324) {
            ctx->pc = 0x28230Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28230c;
        }
    }
    ctx->pc = 0x28232Cu;
    // 0x28232c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28232cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282330: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x282330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282334:
    // 0x282334: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x282334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x282338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x282338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28233c: 0xc0a0748  jal         func_281D20
    ctx->pc = 0x28233Cu;
    SET_GPR_U32(ctx, 31, 0x282344u);
    ctx->pc = 0x282340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28233Cu;
            // 0x282340: 0x244444d0  addiu       $a0, $v0, 0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281D20u;
    if (runtime->hasFunction(0x281D20u)) {
        auto targetFn = runtime->lookupFunction(0x281D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282344u; }
        if (ctx->pc != 0x282344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Birth__9CRainDropFi_0x281d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282344u; }
        if (ctx->pc != 0x282344u) { return; }
    }
    ctx->pc = 0x282344u;
label_282344:
    // 0x282344: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x282344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x282348: 0x2a220032  slti        $v0, $s1, 0x32
    ctx->pc = 0x282348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x28234c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28234Cu;
    {
        const bool branch_taken_0x28234c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28234Cu;
            // 0x282350: 0x261000b0  addiu       $s0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28234c) {
            ctx->pc = 0x282334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282334;
        }
    }
    ctx->pc = 0x282354u;
    // 0x282354: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282358: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x282358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28235c:
    // 0x28235c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x28235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x282360: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x282360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x282364: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x282364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x282368: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x282368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28236c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x28236cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x282370: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x282370u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x282374: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x282374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x282378: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x282378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x28237c: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x28237cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
    // 0x282380: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x282380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282384: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x282384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x282388: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x282388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28238c: 0xc0a04e8  jal         func_2813A0
    ctx->pc = 0x28238Cu;
    SET_GPR_U32(ctx, 31, 0x282394u);
    ctx->pc = 0x282390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28238Cu;
            // 0x282390: 0xac208670  sw          $zero, -0x7990($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294936176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2813A0u;
    if (runtime->hasFunction(0x2813A0u)) {
        auto targetFn = runtime->lookupFunction(0x2813A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282394u; }
        if (ctx->pc != 0x282394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RandXYinViewArea__FfffPfPf_0x2813a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282394u; }
        if (ctx->pc != 0x282394u) { return; }
    }
    ctx->pc = 0x282394u;
label_282394:
    // 0x282394: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x282394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x282398: 0x34018670  ori         $at, $zero, 0x8670
    ctx->pc = 0x282398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34416);
    // 0x28239c: 0x2212021  addu        $a0, $s1, $at
    ctx->pc = 0x28239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2823a0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2823a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2823a4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2823a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2823a8: 0xc0a0544  jal         func_281510
    ctx->pc = 0x2823A8u;
    SET_GPR_U32(ctx, 31, 0x2823B0u);
    ctx->pc = 0x2823ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2823A8u;
            // 0x2823ac: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281510u;
    if (runtime->hasFunction(0x281510u)) {
        auto targetFn = runtime->lookupFunction(0x281510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2823B0u; }
        if (ctx->pc != 0x2823B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Birth__7CRippleFPf_0x281510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2823B0u; }
        if (ctx->pc != 0x2823B0u) { return; }
    }
    ctx->pc = 0x2823B0u;
label_2823b0:
    // 0x2823b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2823b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2823b4: 0x2a4300c8  slti        $v1, $s2, 0xC8
    ctx->pc = 0x2823b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2823b8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2823B8u;
    {
        const bool branch_taken_0x2823b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2823BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2823B8u;
            // 0x2823bc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823b8) {
            ctx->pc = 0x28235Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28235c;
        }
    }
    ctx->pc = 0x2823C0u;
    // 0x2823c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2823c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2823c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2823c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2823c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2823c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2823cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2823ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2823d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2823d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2823d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2823D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2823D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2823D4u;
            // 0x2823d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2823DCu;
}
